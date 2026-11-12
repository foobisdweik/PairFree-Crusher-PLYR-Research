import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import java.nio.file.Files;
import java.nio.file.Path;
// Args: output path. Decompiles every function in the program.
public class ExportAll extends GhidraScript {
 public void run() throws Exception {
  DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
  StringBuilder o=new StringBuilder("/* 0x58 companion MCU image (8051). Static evidence only. */\n");
  try{for(var f:currentProgram.getFunctionManager().getFunctions(true)){
   o.append("\n/* function "+f.getName()+" at "+f.getEntryPoint()+" */\n");
   var r=d.decompileFunction(f,60,monitor);o.append(r.decompileCompleted()?r.getDecompiledFunction().getC():r.getErrorMessage());}
   Files.writeString(Path.of(getScriptArgs()[0]),o.toString());}finally{d.dispose();}
 }
}
