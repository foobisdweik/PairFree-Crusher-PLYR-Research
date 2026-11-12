import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import java.math.BigInteger;
import java.nio.file.Files;
import java.nio.file.Path;
public class ExportCurrent extends GhidraScript {
 public void run() throws Exception {
  if(currentProgram.getListing().getNumInstructions()==0) currentProgram.getProgramContext().setValue(currentProgram.getRegister("TMode"),currentProgram.getMinAddress(),currentProgram.getMaxAddress(),BigInteger.ONE);
  long[] addresses={0x0823f3e4L,0x081f4edcL,0x08241a04L,0x081aa6c8L,0x081be964L};
  String[] names={"candidate_35_common_config","candidate_35_mmi_enum","candidate_35_line_in_getter","candidate_35_input_helper_A","candidate_35_input_helper_B"};
  DecompInterface d=new DecompInterface();d.openProgram(currentProgram);StringBuilder o=new StringBuilder("/* Candidate .35 address mapping. Selected functions only. */\n");
  try {for(int i=0;i<addresses.length;i++){var a=toAddr(addresses[i]);disassemble(a);var f=getFunctionAt(a);if(f==null)f=createFunction(a,names[i]);o.append("\n/* "+names[i]+" at "+a+" */\n");if(f==null)continue;var r=d.decompileFunction(f,60,monitor);if(r.decompileCompleted())o.append(r.getDecompiledFunction().getC());else o.append(r.getErrorMessage());}Files.writeString(Path.of(getScriptArgs()[0]),o.toString());}finally{d.dispose();}
 }
}