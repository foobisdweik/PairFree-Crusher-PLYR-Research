import ghidra.app.script.GhidraScript;
// Seeds disassembly at the 8051 reset and interrupt vectors, then lets auto-analysis follow calls.
public class Seed8051 extends GhidraScript {
 public void run() throws Exception {
  var af=currentProgram.getAddressFactory();
  for(int v=0;v<=0x93;v+=(v==0?3:8)){
   var a=af.getAddress("CODE:"+Integer.toHexString(v));
   if(disassemble(a)){var ins=getInstructionAt(a);
    if(ins!=null&&ins.getMnemonicString().equals("LJMP")){var t=ins.getFlows();if(t.length>0){disassemble(t[0]);if(getFunctionAt(t[0])==null)createFunction(t[0],v==0?"reset_target":"isr_"+Integer.toHexString(v));}}}
  }
  analyzeChanges(currentProgram);
 }
}
