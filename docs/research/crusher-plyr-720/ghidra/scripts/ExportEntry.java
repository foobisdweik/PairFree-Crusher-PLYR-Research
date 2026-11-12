import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.program.model.listing.Function;
import java.nio.file.Files;
import java.nio.file.Path;

public class ExportEntry extends GhidraScript {
    public void run() throws Exception {
        String[] args = getScriptArgs();
        var entry = currentProgram.getImageBase().add(0x3948);
        println("IMAGE_BASE " + currentProgram.getImageBase() + " ENTRY " + entry);
        Function f = getFunctionAt(entry);
        if (f == null) {
            disassemble(entry);
            f = createFunction(entry, "firmware_module_entry");
        }
        if (f == null) throw new Exception("No function exists at the selected ELF entry.");
        DecompInterface decompiler = new DecompInterface();
        try {
            decompiler.openProgram(currentProgram);
            var result = decompiler.decompileFunction(f, 60, monitor);
            if (!result.decompileCompleted()) throw new Exception(result.getErrorMessage());
            Files.writeString(Path.of(args[0]), result.getDecompiledFunction().getC());
            println("EXPORTED_ENTRY " + f.getEntryPoint());
        } finally {
            decompiler.dispose();
        }
    }
}
