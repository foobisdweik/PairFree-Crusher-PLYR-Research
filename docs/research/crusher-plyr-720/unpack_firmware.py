#!/usr/bin/env python3
"""Verify and decompress the acquired packages. This script does not contact hardware."""
from pathlib import Path
import hashlib
import json
import lzma

HERE = Path(__file__).resolve().parent

def unpack(path):
    data = path.read_bytes()
    if len(data) <= 0x1000:
        raise ValueError(f'{path.name}: the file is too small')
    digest = hashlib.sha256(data[0x100:]).digest()
    if data[:32] != digest:
        raise ValueError(f'{path.name}: the stored SHA-256 does not match')
    if data[32:256] != b'\xff' * 224:
        raise ValueError(f'{path.name}: the prefix padding differs')
    decoder = lzma.LZMADecompressor(format=lzma.FORMAT_ALONE)
    decoded = decoder.decompress(data[0x1000:], max_length=64 * 1024 * 1024)
    if not decoder.eof or decoder.unused_data:
        raise ValueError(f'{path.name}: the decoder did not consume one complete stream')
    records = []
    offset = 0x100
    while offset + 4 <= 0x1000:
        tag = int.from_bytes(data[offset:offset + 2], 'little')
        size = int.from_bytes(data[offset + 2:offset + 4], 'little')
        if tag == 0xffff and size == 0xffff:
            break
        end = offset + 4 + size
        if end > 0x1000:
            raise ValueError(f'{path.name}: the candidate header record exceeds the header')
        payload = data[offset + 4:end]
        record = {'offset': offset, 'tag': tag, 'payload_bytes': size}
        if tag in (0x13, 0x20):
            record['ascii_label'] = payload.split(b'\x00')[0].rstrip(b'\xff').decode('ascii')
        records.append(record)
        offset = end
    dest = path.parent / 'decoded' / (path.stem + '.decoded.bin')
    dest.parent.mkdir(exist_ok=True)
    dest.write_bytes(decoded)
    return {'source': str(path.relative_to(HERE)), 'source_sha256': hashlib.sha256(data).hexdigest(),
            'stored_sha256_matches_body_after_0x100': True, 'prefix_padding_bytes': 224,
            'compression': 'LZMA FORMAT_ALONE', 'compressed_offset': 4096,
            'compressed_bytes': len(data) - 4096, 'decoder_eof': True, 'unused_bytes': 0,
            'decoded_path': str(dest.relative_to(HERE)), 'decoded_bytes': len(decoded),
            'decoded_sha256': hashlib.sha256(decoded).hexdigest(),
            'candidate_tlv_records': records,
            'scope': 'The record lengths parse consistently. Most field meanings remain unknown.'}

def main():
    results = [unpack(p) for p in sorted((HERE / 'firmware').glob('*.bin'))]
    output = HERE / 'firmware' / 'decoded' / 'manifest.json'
    output.write_text(json.dumps(results, indent=2) + '\n')
    for item in results:
        print(f'{item["source"]}: verified and decompressed to {item["decoded_bytes"]} bytes')

if __name__ == '__main__':
    main()
