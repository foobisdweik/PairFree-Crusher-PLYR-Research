import pathlib,re,struct,hashlib,json
root=pathlib.Path('/Users/iphoobis/Developer/PairFree-Crusher-PLYR-Research/docs/research/crusher-plyr-720/firmware/decoded')
result={'scope':'Only SG200X Master and Slave decoded firmware version 1.0.0.34. Static byte analysis. No hardware or Ghidra import.','files':[],'findings':[],'next_evidence':[]}
for p in sorted(root.glob('SG200X*.decoded.bin')):
 b=p.read_bytes(); strings=[(m.start(),m.group().decode()) for m in re.finditer(rb'[\x20-\x7e]{6,}',b)]
 groups={}
 for cat,pat in {'line_in':r'line.?in|LINE_IN','race':r'race','thx':r'thx','headtracker':r'head.?track|quaternion','architecture':r'IoT_SDK|port/chip/ab15|XtensaTools|dsp0_headset_ref_design|\[MCU\]sysinit|CM4 MINIEED','aux_adc':r'EAUXADC'}.items():
  groups[cat]=[{'offset':hex(a),'text':s,'status':'verified-bytes'} for a,s in strings if re.search(pat,s,re.I)]
 elfs=[]
 for m in re.finditer(b'\x7fELF',b):
  a=m.start()
  if a+52>len(b) or b[a+4:a+7]!=b'\x01\x01\x01':continue
  t,machine,ver,entry,phoff,shoff,flags,ehsize,phentsize,phnum,shentsize,shnum,shstr=struct.unpack_from('<HHIIIIIHHHHHH',b,a+16)
  if ehsize!=52 or phentsize!=32 or shentsize!=40:continue
  ends=[ehsize,phoff+phentsize*phnum,shoff+shentsize*shnum]
  if a+max(ends)>len(b):continue
  sections=[];programs=[]
  sstrhdr=a+shoff+shstr*shentsize
  no,nz=struct.unpack_from('<II',b,sstrhdr+16); names=b[a+no:a+no+nz]
  for i in range(shnum):
   n,st,fl,addr,off,size,link,info,align,ent=struct.unpack_from('<10I',b,a+shoff+i*shentsize)
   name=names[n:].split(b'\0')[0].decode(errors='replace')
   sections.append({'name':name,'type':st,'address':hex(addr),'file_offset':hex(off),'size':size,'flags':hex(fl)})
   if st!=8:ends.append(off+size)
  for i in range(phnum):
   pt,off,va,pa,fs,ms,pf,al=struct.unpack_from('<8I',b,a+phoff+i*phentsize)
   programs.append({'type':pt,'file_offset':hex(off),'vaddr':hex(va),'paddr':hex(pa),'file_size':fs,'memory_size':ms,'flags':hex(pf),'alignment':al});ends.append(off+fs)
  extent=max(ends)
  elfs.append({'offset':hex(a),'class':32,'endian':'little','e_machine':machine,'type':t,'entry':hex(entry),'program_table_offset':hex(phoff),'section_table_offset':hex(shoff),'flags':hex(flags),'extent':extent,'end_exclusive':hex(a+extent),'bounded':a+extent<=len(b),'extent_sha256':hashlib.sha256(b[a:a+extent]).hexdigest(),'programs':programs,'sections':sections,'status':'Headers and file-backed regions are structurally bounded. Code execution and every relocation remain unverified.'})
 result['files'].append({'path':str(p),'size':len(b),'sha256':hashlib.sha256(b).hexdigest(),'matched_strings':groups,'elf_candidates':elfs,'safe_header_hex':b[:80].hex()})
result['findings']=[
 {'claim':'The Master image contains AB158x paths and SDK labels. The Slave image contains AB156x paths and SDK labels.','status':'verified-bytes','limit':'These labels identify build targets. They do not identify an exact physical chip revision.'},
 {'claim':'The Master image contains AT+LINE_IN_DET, AT+LINE_IN_VOL, GET_LINE_IN, LINE_IN - ON and LINE_IN - OFF. Both images contain test commands for pure line-in playback.','status':'verified-bytes','limit':'The strings identify promising handler targets. They do not prove which command transports expose them or how their arguments work.'},
 {'claim':'The Master image contains THX_OFF.mp3 and THX_ON.mp3. The Slave image has no printable THX match under this scan.','status':'verified-bytes','limit':'Prompt filenames do not prove THX processing. A missing string does not prove missing code.'},
 {'claim':'The Slave image contains headtracker sensor labels, acceleration/gyro calibration logs and #AndroidHeadTracker#1.0. Both images contain a quaternion log.','status':'verified-bytes','limit':'Strings do not prove active sensor operation or THX headtracking behavior.'},
 {'claim':'The Master has 17 embedded ELF32 little-endian objects. The Slave has 15. Every parsed object declares e_machine 94.','status':'verified-structure','limit':'The region bounds, section tables and program tables were checked. Instructions and relocations were not checked.'},
 {'claim':'Xtensa compiler labels and e_machine 94 support treating embedded ELF objects as Xtensa targets. CM4 labels support a separate MCU component.','status':'inferred','limit':'Do not import the whole composite firmware under one guessed architecture or base address.'},
 {'claim':'RACE and co-system strings occur in both images. The Master has USB RACE timer labels.','status':'verified-bytes','limit':'No dispatch table, opcode-to-function mapping or packet parser has been recovered in this batch.'},
 {'claim':'Both images contain PNVkey$ and NVKey XML delimiters.','status':'verified-bytes','limit':'No key values, device identifiers or calibration assets were extracted. The marker does not establish encryption.'},
 {'claim':'EAUXADC strings describe analog-to-digital conversion.','status':'verified-bytes','limit':'The AUX substring alone is not evidence of the headphone aux audio route.'}
]
result['next_evidence']=[
 'Extract embedded ELF objects using the computed bounded extents. Preserve each parent hash and offset.',
 'Verify the e_machine 94 definition against an ELF specification or a trusted local header before importing.',
 'Inspect section names, relocations and imported symbols before choosing the first ELF for disassembly.',
 'Recover the composite container and MCU region layout before any raw MCU import. The current header is not interpreted.',
 'Find references to Master line-in strings. Recover argument parsing and the conditions that select an audio route.',
 'Identify RACE dispatchers and match them to known host commands using both request fields and response behavior.',
 'Compare THX state handlers with real audio processing code. Prompt filenames are insufficient.',
 'Map co-system messages between Master and Slave. Confirm whether headtracker reports traverse that route.'
]
path='/tmp/skull-decoded-findings.json';pathlib.Path(path).write_text(json.dumps(result,indent=2));print(path)
for f in result['files']:print(pathlib.Path(f['path']).name,'ELFs',len(f['elf_candidates']),'bounded',all(e['bounded'] for e in f['elf_candidates']))
