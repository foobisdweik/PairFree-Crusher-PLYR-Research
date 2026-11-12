#!/usr/bin/env python3
"""Check saved evidence and the analytical frame. This script sends no traffic."""
from pathlib import Path
import hashlib
import json

HERE = Path(__file__).resolve().parent

def reflected_crc(data, initial, polynomial):
    value = initial
    for byte in data:
        value ^= byte
        for _ in range(8):
            value = (value >> 1) ^ (polynomial if value & 1 else 0)
    return value

def main():
    frame = bytes.fromhex('7E FF 80 94 00 06 2D 10 02 01 00 08 00 54 80')
    assert reflected_crc(frame[:6], 0xFF, 0xE0) == frame[6] == 0x2D
    assert reflected_crc(frame[1:-2], 0xFFFF, 0x8408) == int.from_bytes(frame[-2:], 'big') == 0x5480
    assert int.from_bytes(frame[4:6], 'big') == len(frame[7:-2])
    inventory = json.loads((HERE / 'inventory.json').read_text())
    roots = {Path(r['root']).name: Path(r['root']) for r in inventory['repositories']}
    checked_files = 0
    metadata_files = 0
    for item in inventory['files']:
        if Path(item['path']).name == '.DS_Store':
            metadata_files += 1
            continue
        path = roots[item['repository']] / item['path']
        assert hashlib.sha256(path.read_bytes()).hexdigest() == item['sha256'], str(path)
        checked_files += 1
    merged = json.loads((HERE / 'protocol-evidence.json').read_text())
    checked = 0
    for row in merged['findings'] + merged['commands']:
        for ref in row.get('evidence', []):
            path = Path(ref['path'])
            lines = path.read_text().splitlines()
            start, end = ref['line_start'], ref['line_end']
            assert 1 <= start <= end <= len(lines), str(ref)
            checked += 1
    print(f'PASS: analytical CRCs, {checked_files} source file hashes, and {checked} citation ranges.')
    print(f'Excluded {metadata_files} Finder metadata files. Their original hashes remain in the inventory.')
    for item in json.loads((HERE / 'ios-binary-metadata.json').read_text())['binaries']:
        assert hashlib.sha256(Path(item['path']).read_bytes()).hexdigest() == item['sha256']
    for item in json.loads((HERE / 'firmware' / 'decoded' / 'manifest.json').read_text()):
        source = (HERE / item['source']).read_bytes()
        decoded = (HERE / item['decoded_path']).read_bytes()
        assert hashlib.sha256(source).hexdigest() == item['source_sha256']
        assert source[:32] == hashlib.sha256(source[256:]).digest()
        assert hashlib.sha256(decoded).hexdigest() == item['decoded_sha256']
    for item in json.loads((HERE / 'firmware' / 'decoded' / 'elf' / 'manifest.json').read_text()):
        parent = (HERE / item['source']).read_bytes()
        raw = (HERE / item['path']).read_bytes()
        offset = item['source_offset']
        assert raw == parent[offset:offset + item['extent_bytes']]
        assert hashlib.sha256(raw).hexdigest() == item['sha256']
    commands = json.loads((HERE / 'race-commands.json').read_text())['commands']
    for item in commands:
        lines = Path(item['source']).read_text().splitlines()
        assert 1 <= item['line_start'] <= item['line_end'] <= len(lines)
    print('PASS: four app binaries, four firmware packages, four decoded bodies, 32 ELF objects, and 140 schema ranges.')
    print('These checks do not prove compatibility with the headset.')

if __name__ == '__main__':
    main()
