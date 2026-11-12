"""Collect exact literal values from the saved decompilation.

The decoded .35 Master image is a vendor file, so .gitignore keeps it (and its
package) out of the repository. If the decoded image is absent, this script
decodes it from the package and checks both hashes in source.json. If the
package is absent too, it prints the download command and exits with status 3.
"""
import hashlib,json,lzma,pathlib,re,struct,sys
HERE=pathlib.Path(__file__).resolve().parent
ROOT=HERE.parents[1]
IMAGE=ROOT/'bluetooth-query/current-firmware/SG200X_Master_Headset_DFU_v1.0.0.35.decoded.bin'
SOURCE=ROOT/'bluetooth-query/current-firmware/source.json'
def load_image():
    if IMAGE.is_file():
        return IMAGE.read_bytes()
    meta=json.loads(SOURCE.read_text())
    package=IMAGE.parent/meta['url'].rsplit('/',1)[-1]
    if not package.is_file():
        print(f"MISSING: {IMAGE.name} and its package are git-ignored. Download the package, then run again:\n  curl -fL -o '{package}' '{meta['url']}'",file=sys.stderr)
        sys.exit(3)
    data=package.read_bytes()
    assert hashlib.sha256(data).hexdigest()==meta['sha256'],package.name
    # Package layout: SHA-256 of bytes 0x100.. at offset 0, then an LZMA (FORMAT_ALONE) body at 0x1000.
    decoded=lzma.decompress(data[0x1000:],format=lzma.FORMAT_ALONE)
    assert hashlib.sha256(decoded).hexdigest()==meta['decoded_sha256'],IMAGE.name
    IMAGE.write_bytes(decoded)
    print(f'Decoded {package.name} to {IMAGE.name}; both hashes match source.json.',file=sys.stderr)
    return decoded
DATA=load_image()
DELTA=0x0806b000
records=[]
for source in sorted(HERE.glob('*.c')):
    text=source.read_text()
    for address in sorted({int(x,16) for x in re.findall(r'(?:_DAT_|uRam|puRam|pcRam|pbRam)([0-9a-f]{8})',text)}):
        offset=address-DELTA
        if not 0<=offset<=len(DATA)-4:
            continue
        value=struct.unpack_from('<I',DATA,offset)[0]
        target=value-DELTA
        raw=DATA[target:target+160].split(b'\0')[0] if 0<=target<len(DATA) else b''
        printable=raw.decode() if raw and all(32<=x<127 for x in raw) else None
        records.append({'source':source.name,'literal_runtime_address':hex(address),'file_offset':hex(offset),'word':hex(value),'printable_target':printable})
result={'image':IMAGE.relative_to(HERE.parents[4]).as_posix(),'image_bytes':len(DATA),'image_sha256':hashlib.sha256(DATA).hexdigest(),'mapping_delta':hex(DELTA),'qualification':'This is a pointer-derived MCU mapping. It is not a map of every embedded region.','literals':records,'exports':[{'name':p.name,'bytes':p.stat().st_size,'sha256':hashlib.sha256(p.read_bytes()).hexdigest()} for p in sorted(HERE.glob('*.c'))]}
(HERE/'literal-evidence.json').write_text(json.dumps(result,indent=2)+'\n')
print(json.dumps({'literals':len(records),'image_sha256':result['image_sha256']}))
