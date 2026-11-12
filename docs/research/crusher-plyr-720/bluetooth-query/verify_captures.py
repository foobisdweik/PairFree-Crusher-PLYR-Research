#!/usr/bin/env python3
"""Validate saved queries, nested replies, firmware hashes, and the observed cable cycle.

The two .35 firmware packages are vendor files, so .gitignore keeps them out of the
repository. Each current-firmware/*source.json names the public URL and SHA-256 of one
package. When a package is absent, this script prints the download command, skips that
hash check, and exits with status 3. Exit status 0 means every check ran and passed.
"""
from pathlib import Path
import hashlib
import json
import lzma
import sys

HERE = Path(__file__).resolve().parent

def check_frame(data):
    assert len(data) >= 6
    assert len(data) == 4 + int.from_bytes(data[2:4], 'little')
    return int.from_bytes(data[4:6], 'little')

def main():
    count = 0
    for path in HERE.glob('*-response.json'):
        record = json.loads(path.read_text())
        for event in record['events']:
            if 'hex' not in event:
                continue
            data = bytes.fromhex(event['hex'])
            opcode = check_frame(data)
            count += 1
            if opcode == 0x0d01 and data[1] == 0x5d:
                assert int.from_bytes(data[6:8], 'little') == 0x0200
                check_frame(data[8:])
    states = []
    for line in (HERE / 'master-aux-cycle-monitor.log').read_text().splitlines():
        try:
            event = json.loads(line)
        except json.JSONDecodeError:
            continue
        if event.get('kind') != 'notification':
            continue
        data = bytes.fromhex(event['hex'])
        check_frame(data)
        if data[4:6] != b'\x01\x0d' or data[1] != 0x5d:
            continue
        inner = data[8:]
        assert check_frame(inner) == 0x1680
        assert inner[6] == 0
        assert int.from_bytes(inner[9:13], 'little') == 0x04247684
        value = inner[15]
        if not states or states[-1] != value:
            states.append(value)
    assert states == [1, 0, 1], states
    print(f'PASS: {count} saved frames, nested reply lengths, and observed state sequence {states}.')
    missing = []
    for name in ['source.json', 'slave-source.json']:
        metadata = json.loads((HERE / 'current-firmware' / name).read_text())
        filename = metadata['url'].rsplit('/', 1)[-1]
        path = HERE / 'current-firmware' / filename
        if not path.is_file():
            missing.append((path, metadata['url']))
            continue
        data = path.read_bytes()
        assert hashlib.sha256(data).hexdigest() == metadata['sha256'], filename
        assert data[:32] == hashlib.sha256(data[256:]).digest(), filename
        decoded = lzma.decompress(data[4096:], format=lzma.FORMAT_ALONE)
        assert hashlib.sha256(decoded).hexdigest() == metadata['decoded_sha256'], filename
        print(f'PASS: {filename} package, header, and decoded hashes.')
    print('This validates saved evidence. It does not reproduce the physical test or prove audio routing works.')
    if missing:
        sys.stdout.flush()
        print(f'INCOMPLETE: {len(missing)} firmware hash checks skipped. Download the git-ignored packages, then run again:', file=sys.stderr)
        for path, url in missing:
            print(f"  curl -fL -o '{path}' '{url}'", file=sys.stderr)
        sys.exit(3)

if __name__ == '__main__':
    main()
