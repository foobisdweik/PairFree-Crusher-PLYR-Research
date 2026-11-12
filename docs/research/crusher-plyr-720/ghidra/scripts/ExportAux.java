import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.program.model.listing.Function;
import java.nio.file.Files;
import java.nio.file.Path;
import java.math.BigInteger;
public class ExportAux extends GhidraScript {
    public void run() throws Exception {
        var context = currentProgram.getProgramContext();
        if (currentProgram.getListing().getNumInstructions() == 0) {
            context.setValue(currentProgram.getRegister("TMode"), currentProgram.getMinAddress(), currentProgram.getMaxAddress(), BigInteger.ONE);
        }
        long[] addresses = {0x0824163cL, 0x08241508L, 0x08242ef0L, 0x0824199cL,0x0823dff4L,0x082342b4L,0x0823e2f0L,0x081ecbbcL,0x082e2a40L,0x081d2fdcL,0x0823f384L,0x081f4edcL};
        String[] names = {"candidate_line_in_detect", "candidate_line_in_volume", "candidate_app_command", "candidate_line_in_state_getter","candidate_race_line_in_caller","candidate_other_line_in_caller","candidate_race_cosystem_callback","candidate_race_task","candidate_opcode_0901","candidate_atci_registration","candidate_common_config","candidate_generic_common_getter"};
        DecompInterface d = new DecompInterface();
        try {
            d.openProgram(currentProgram);
            StringBuilder output = new StringBuilder("/* Candidate ARM Thumb interpretation. Runtime mapping inferred from command-table pointers. */\n");
            for (int i=0; i<addresses.length; i++) {
                var address = toAddr(addresses[i]);
                disassemble(address);
                Function f = getFunctionAt(address);
                if (f == null) f = createFunction(address, names[i]);
                if (f == null) { output.append("/* No function at " + address + " */\n"); continue; }
                var result = d.decompileFunction(f, 45, monitor);
                output.append("\n/* " + names[i] + " at " + address + " */\n");
                if (result.decompileCompleted()) output.append(result.getDecompiledFunction().getC());
                else output.append("/* " + result.getErrorMessage() + " */\n");
            }
            Files.writeString(Path.of(getScriptArgs()[0]), output.toString());
        } finally { d.dispose(); }
    }
}
