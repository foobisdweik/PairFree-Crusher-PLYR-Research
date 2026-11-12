import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import java.math.BigInteger;
import java.nio.file.Files;
import java.nio.file.Path;
public class ExportEvents extends GhidraScript {
 public void run() throws Exception {
  if(currentProgram.getListing().getNumInstructions()==0) currentProgram.getProgramContext().setValue(currentProgram.getRegister("TMode"),currentProgram.getMinAddress(),currentProgram.getMaxAddress(),BigInteger.ONE);
  String[] args=getScriptArgs();
  DecompInterface d=new DecompInterface();d.openProgram(currentProgram);StringBuilder o=new StringBuilder("/* Selected Master .35 functions. Pointer-derived MCU mapping. */\n");
  try {for(int i=1;i<args.length;i++){var a=toAddr(Long.decode(args[i]));disassemble(a);var f=getFunctionAt(a);if(f==null)f=createFunction(a,"aux_"+a);o.append("\n/* function at "+a+" */\n");if(f==null)continue;var r=d.decompileFunction(f,45,monitor);if(r.decompileCompleted())o.append(r.getDecompiledFunction().getC());else o.append(r.getErrorMessage());}Files.writeString(Path.of(args[0]),o.toString());}finally{d.dispose();}
 }
}