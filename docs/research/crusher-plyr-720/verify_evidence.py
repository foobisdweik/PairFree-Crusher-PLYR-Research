#!/usr/bin/env python3
"""Check saved evidence and the analytical frame. This script sends no traffic.

The inventory records absolute paths from the author's machine. This script maps
them onto the current checkout, so it works from any clone location:
- This repository is found from the script's own path.
- skullcandy-hq-apple-silicon is read from $SKULLCANDY_HQ_ROOT, or else from a
  sibling folder of this repository.
- Files inside a repository are read at the commit that the inventory records,
  so later edits on a branch do not break the hashes. `--filters` applies the
  checkout conversions (for example CRLF line ends from .gitattributes).

Some inputs are local only and never committed: the whole `firmware/` folder
(vendor packages, decoded bodies, and their manifests, per the .gitignore rule
`firmware/`) and the iOS app (`/Applications/Runner.app`, or $RUNNER_APP).
When an input is absent, its checks are skipped and listed. The .34 packages come
from https://s3.us-east-1.amazonaws.com/skdy.firmware/<file name>, and
unpack_firmware.py rebuilds firmware/decoded/manifest.json from them.
Exit status: 0 = every check ran and passed, 1 = a check failed, 3 = some checks
were skipped because local inputs are missing.
"""
from pathlib import Path
import hashlib
import json
import os
import subprocess
import sys

HERE = Path(__file__).resolve().parent
REPO = HERE.parents[2]
RUNNER_RECORDED = Path('/Applications/Runner.app')


class Missing(Exception):
    """A local input that a clean checkout does not contain."""


def reflected_crc(data, initial, polynomial):
    value = initial
    for byte in data:
        value ^= byte
        for _ in range(8):
            value = (value >> 1) ^ (polynomial if value & 1 else 0)
    return value


class Sources:
    """Maps recorded absolute paths onto this machine and reads them."""

    def __init__(self, inventory):
        self.roots = {}
        for repo in inventory['repositories']:
            recorded = Path(repo['root'])
            if recorded.name == REPO.name:
                local = REPO
            else:
                env = os.environ.get('SKULLCANDY_HQ_ROOT') if recorded.name == 'skullcandy-hq-apple-silicon' else None
                local = Path(env) if env else REPO.parent / recorded.name
            self.roots[recorded.name] = (recorded, local, repo['commit'])
        self.runner = Path(os.environ.get('RUNNER_APP', RUNNER_RECORDED))

    def repo_file(self, name, relative):
        """Return the bytes of one file at the commit recorded for repository `name`."""
        _, local, commit = self.roots[name]
        if not local.is_dir():
            raise Missing(f'repository {name} (expected at {local}; set SKULLCANDY_HQ_ROOT)')
        shown = subprocess.run(['git', '-C', str(local), 'cat-file', '--filters', f'{commit}:{relative}'], capture_output=True)
        if shown.returncode == 0:
            return shown.stdout
        path = local / relative
        if path.is_file():
            return path.read_bytes()
        raise Missing(f'{name}/{relative} (not in commit {commit[:7]} and not on disk)')

    def recorded_file(self, recorded_path):
        """Return the bytes of a file named by an absolute path from the author's machine."""
        path = Path(recorded_path)
        for name, (recorded, _, _) in self.roots.items():
            if path.is_relative_to(recorded):
                return self.repo_file(name, path.relative_to(recorded).as_posix())
        if path.is_relative_to(RUNNER_RECORDED):
            local = self.runner / path.relative_to(RUNNER_RECORDED)
            if local.is_file():
                return local.read_bytes()
            raise Missing(f'iOS app input {local} (set RUNNER_APP to the installed Runner.app)')
        if path.is_file():
            return path.read_bytes()
        raise Missing(str(path))


def local_file(relative):
    """Return the bytes of a file under this folder. Firmware packages are git-ignored."""
    path = HERE / relative
    if not path.is_file():
        raise Missing(f'{path.relative_to(REPO)} (git-ignored local firmware data)')
    return path.read_bytes()


def main():
    frame = bytes.fromhex('7E FF 80 94 00 06 2D 10 02 01 00 08 00 54 80')
    assert reflected_crc(frame[:6], 0xFF, 0xE0) == frame[6] == 0x2D
    assert reflected_crc(frame[1:-2], 0xFFFF, 0x8408) == int.from_bytes(frame[-2:], 'big') == 0x5480
    assert int.from_bytes(frame[4:6], 'big') == len(frame[7:-2])
    inventory = json.loads((HERE / 'inventory.json').read_text())
    sources = Sources(inventory)
    missing = []

    def check(group, func):
        """Run one check. Collect a missing input and return False, but let a failed assertion stop the script."""
        try:
            func()
            return True
        except Missing as reason:
            missing.append((group, str(reason)))
            return False

    def file_hash(item):
        data = sources.repo_file(item['repository'], item['path'])
        assert hashlib.sha256(data).hexdigest() == item['sha256'], f"{item['repository']}/{item['path']}"

    checked_files = metadata_files = 0
    for item in inventory['files']:
        if Path(item['path']).name == '.DS_Store':
            metadata_files += 1
            continue
        checked_files += check('source file hashes', lambda: file_hash(item))

    def citation(ref):
        lines = sources.recorded_file(ref['path']).decode().splitlines()
        assert 1 <= ref['line_start'] <= ref['line_end'] <= len(lines), str(ref)

    merged = json.loads((HERE / 'protocol-evidence.json').read_text())
    checked = 0
    for row in merged['findings'] + merged['commands']:
        for ref in row.get('evidence', []):
            checked += check('citation ranges', lambda: citation(ref))
    print(f'PASS: analytical CRCs, {checked_files} source file hashes, and {checked} citation ranges.')
    print(f'Excluded {metadata_files} Finder metadata files. Their original hashes remain in the inventory.')

    def binary(item):
        assert hashlib.sha256(sources.recorded_file(item['path'])).hexdigest() == item['sha256'], item['path']

    def package(item):
        source = local_file(item['source'])
        decoded = local_file(item['decoded_path'])
        assert hashlib.sha256(source).hexdigest() == item['source_sha256'], item['source']
        assert source[:32] == hashlib.sha256(source[256:]).digest(), item['source']
        assert hashlib.sha256(decoded).hexdigest() == item['decoded_sha256'], item['decoded_path']

    def elf(item):
        parent = local_file(item['source'])
        raw = local_file(item['path'])
        offset = item['source_offset']
        assert raw == parent[offset:offset + item['extent_bytes']], item['path']
        assert hashlib.sha256(raw).hexdigest() == item['sha256'], item['path']

    def schema(item):
        lines = sources.recorded_file(item['source']).decode().splitlines()
        assert 1 <= item['line_start'] <= item['line_end'] <= len(lines), str(item)

    def manifest(group, relative):
        """Load a git-ignored firmware manifest, or record the whole group as skipped."""
        try:
            return json.loads(local_file(relative))
        except Missing as reason:
            missing.append((group, str(reason)))
            return None

    groups = [
        ('app binaries', binary, json.loads((HERE / 'ios-binary-metadata.json').read_text())['binaries']),
        ('firmware packages and decoded bodies', package, manifest('firmware packages and decoded bodies', 'firmware/decoded/manifest.json')),
        ('ELF objects', elf, manifest('ELF objects', 'firmware/decoded/elf/manifest.json')),
        ('schema ranges', schema, json.loads((HERE / 'race-commands.json').read_text())['commands']),
    ]
    for group, func, items in groups:
        if items is None:
            print(f'SKIP: {group}; the manifest is missing.')
            continue
        passed = sum(check(group, lambda: func(item)) for item in items)
        print(f'PASS: {passed} of {len(items)} {group}.')
    print('These checks do not prove compatibility with the headset.')
    if missing:
        sys.stdout.flush()
        print(f'INCOMPLETE: {len(missing)} checks skipped because local inputs are missing:', file=sys.stderr)
        shown = {}
        for group, reason in missing:
            shown.setdefault(group, []).append(reason)
        for group, reasons in shown.items():
            print(f'  {group}: {len(reasons)} skipped, for example {reasons[0]}', file=sys.stderr)
        sys.exit(3)


if __name__ == '__main__':
    main()
