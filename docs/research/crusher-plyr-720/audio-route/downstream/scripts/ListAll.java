import ghidra.app.script.GhidraScript;
import java.nio.file.Files;
import java.nio.file.Path;
// Args: output path. Writes every instruction with its address and containing function.
public class ListAll extends GhidraScript {
 public void run() throws Exception {
  StringBuilder o=new StringBuilder();
  for(var ins:currentProgram.getListing().getInstructions(true)){
   var f=getFunctionContaining(ins.getAddress());
   o.append(ins.getAddress()).append("  ").append(f==null?"-":f.getName()).append("  ").append(ins).append("\n");}
  Files.writeString(Path.of(getScriptArgs()[0]),o.toString());
 }
}
