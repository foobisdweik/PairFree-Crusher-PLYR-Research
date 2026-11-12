import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import java.nio.file.Files;
import java.nio.file.Path;
import java.math.BigInteger;
public class ExportRoute extends GhidraScript {
 public void run() throws Exception {
  if(currentProgram.getListing().getNumInstructions()==0) currentProgram.getProgramContext().setValue(currentProgram.getRegister("TMode"),currentProgram.getMinAddress(),currentProgram.getMaxAddress(),BigInteger.ONE);
  String[] args=getScriptArgs();
  DecompInterface d=new DecompInterface();d.openProgram(currentProgram);StringBuilder o=new StringBuilder("/* Selected Master .35 functions. Static evidence only. */\n");
  try {for(int i=1;i<args.length;i++){var a=toAddr(Long.decode(args[i]));disassemble(a);var f=getFunctionAt(a);if(f==null)f=createFunction(a,"route_candidate_"+a);o.append("\n/* Function at "+a+" */\n");if(f==null)continue;var r=d.decompileFunction(f,45,monitor);if(r.decompileCompleted())o.append(r.getDecompiledFunction().getC());else o.append(r.getErrorMessage());
   o.append("\n/* Literal references and instructions */\n");var it=currentProgram.getListing().getInstructions(f.getBody(),true);while(it.hasNext()){var ins=it.next();o.append(ins.getAddress()+" "+ins+"\n");for(var ref:ins.getReferencesFrom()){if(ref.isMemoryReference()&&ref.getReferenceType().isData()){try{long p=Integer.toUnsignedLong(getInt(ref.getToAddress()));o.append("literal "+ref.getToAddress()+" = "+Long.toHexString(p)+"\n");if(p>=0x0806b000L&&p<0x0838c000L){StringBuilder s=new StringBuilder();for(int k=0;k<180;k++){int b=Byte.toUnsignedInt(getByte(toAddr(p+k)));if(b==0)break;if(b<32||b>126){s.setLength(0);break;}s.append((char)b);}if(s.length()>2)o.append("string "+s+"\n");}}catch(Exception e){}}}}
  }Files.writeString(Path.of(args[0]),o.toString());}finally{d.dispose();}
 }
}
