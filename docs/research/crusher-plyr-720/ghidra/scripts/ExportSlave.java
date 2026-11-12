import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import java.math.BigInteger;
import java.nio.file.Files;
import java.nio.file.Path;
public class ExportSlave extends GhidraScript {
 public void run() throws Exception {
  if(currentProgram.getListing().getNumInstructions()==0) currentProgram.getProgramContext().setValue(currentProgram.getRegister("TMode"),currentProgram.getMinAddress(),currentProgram.getMaxAddress(),BigInteger.ONE);
  long[] addresses={0x080f7f50L,0x080f8114L,0x080f5e88L,0x080f5f44L,0x080f7cfcL};
  String[] names={"slave_relay_0d00_0d01","slave_cosystem_110f","slave_relay_1100_1101","slave_relay_1110_111f","slave_relay_send"};
  DecompInterface d=new DecompInterface();d.openProgram(currentProgram);StringBuilder o=new StringBuilder("/* Candidate .35 address mapping. Selected functions only. */\n");
  try {for(int i=0;i<addresses.length;i++){var a=toAddr(addresses[i]);disassemble(a);var f=getFunctionAt(a);if(f==null)f=createFunction(a,names[i]);o.append("\n/* "+names[i]+" at "+a+" */\n");if(f==null)continue;var r=d.decompileFunction(f,60,monitor);if(r.decompileCompleted())o.append(r.getDecompiledFunction().getC());else o.append(r.getErrorMessage());}Files.writeString(Path.of(getScriptArgs()[0]),o.toString());}finally{d.dispose();}
 }
}