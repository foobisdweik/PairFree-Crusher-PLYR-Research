"""Collect exact literal values from the saved decompilation."""
import hashlib,json,pathlib,re,struct
HERE=pathlib.Path(__file__).resolve().parent
ROOT=HERE.parents[1]
IMAGE=ROOT/'bluetooth-query/current-firmware/SG200X_Master_Headset_DFU_v1.0.0.35.decoded.bin'
DATA=IMAGE.read_bytes()
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
result={'image':str(IMAGE),'image_bytes':len(DATA),'image_sha256':hashlib.sha256(DATA).hexdigest(),'mapping_delta':hex(DELTA),'qualification':'This is a pointer-derived MCU mapping. It is not a map of every embedded region.','literals':records,'exports':[{'name':p.name,'bytes':p.stat().st_size,'sha256':hashlib.sha256(p.read_bytes()).hexdigest()} for p in sorted(HERE.glob('*.c'))]}
(HERE/'literal-evidence.json').write_text(json.dumps(result,indent=2)+'\n')
print(json.dumps({'literals':len(records),'image_sha256':result['image_sha256']}))
