import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import java.math.BigInteger;
import java.nio.file.Files;
import java.nio.file.Path;
public class ExportSelection extends GhidraScript {
 public void run() throws Exception {
 if(currentProgram.getListing().getNumInstructions()==0) currentProgram.getProgramContext().setValue(currentProgram.getRegister("TMode"),currentProgram.getMinAddress(),currentProgram.getMaxAddress(),BigInteger.ONE);
 long[] addresses={0x0824716cL,0x08246e98L,0x08246c64L,0x08246ce8L};
 if(getScriptArgs().length>1){addresses=new long[getScriptArgs().length-1];for(int i=1;i<getScriptArgs().length;i++)addresses[i-1]=Long.decode(getScriptArgs()[i]);}
 DecompInterface d=new DecompInterface();d.openProgram(currentProgram);StringBuilder o=new StringBuilder("/* Separate import. SG200X Master v1.0.0.35. Mapping remains a selected-region candidate. */\n");
 try {for(long value:addresses){var a=toAddr(value);disassemble(a);var f=getFunctionAt(a);if(f==null && getFunctionContaining(a)!=null) removeFunction(getFunctionContaining(a));if(f==null)f=createFunction(a,"selection_"+a);o.append("\n/* Function at "+a+" */\n");if(f==null)continue;var result=d.decompileFunction(f,45,monitor);if(result.decompileCompleted())o.append(result.getDecompiledFunction().getC());else o.append(result.getErrorMessage());}
 Files.writeString(Path.of(getScriptArgs()[0]),o.toString());}finally{d.dispose();}
 }
}
