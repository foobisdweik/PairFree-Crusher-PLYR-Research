import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import java.math.BigInteger;
import java.nio.file.Files;
import java.nio.file.Path;
// Args: output path, then function addresses, or r:START:END for a raw instruction listing.
public class ExportMixed extends GhidraScript {
 public void run() throws Exception {
  String[] args=getScriptArgs();
  DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
  StringBuilder o=new StringBuilder("/* Selected Master .35 functions. Pointer-derived MCU mapping. Static evidence only. */\n");
  try {
   for(int i=1;i<args.length;i++){
    if(args[i].startsWith("r:")){
     String[] p=args[i].split(":");var s=toAddr(Long.decode(p[1]));var e=toAddr(Long.decode(p[2]));
     o.append("\n/* listing "+s+".."+e+" (linear sweep) */\n");
     var x=s;
     while(x.compareTo(e)<=0){var ins=getInstructionAt(x);if(ins==null){disassemble(x);ins=getInstructionAt(x);}
      if(ins==null){o.append(x+" ??\n");x=x.add(2);continue;}
      o.append(ins.getAddress()+" "+ins+"\n");x=ins.getMaxAddress().add(1);}
     continue;
    }
    var a=toAddr(Long.decode(args[i]));disassemble(a);var f=getFunctionAt(a);if(f==null)f=createFunction(a,"ds_"+a);
    o.append("\n/* function at "+a+" */\n");if(f==null){o.append("/* function creation failed */\n");continue;}
    var r=d.decompileFunction(f,60,monitor);o.append(r.decompileCompleted()?r.getDecompiledFunction().getC():r.getErrorMessage());
   }
   Files.writeString(Path.of(args[0]),o.toString());
  } finally {d.dispose();}
 }
}
