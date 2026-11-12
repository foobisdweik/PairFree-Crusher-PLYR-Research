# Aux events after jack detection

This static trace follows the Master firmware `v1.0.0.35` after jack detection.
The detection event reaches a route handler and changes the requested audio path.
It does not prove that analog samples reach the headphones.

## Evidence and scope

The decoded image has SHA-256 `7e30d46c9f52637cac42bf87e6b16f2614815601699caa5004c209807aba1cf6`.
The selected MCU code uses the pointer-derived mapping `runtime address = file offset + 0x0806B000`.
This mapping does not describe every processor region in the image.
The separate Ghidra project is `ghidra/Aux-Events-35.gpr`.
The existing `SG200X-35-Queries` project was not opened or modified by this batch.
No hardware commands were sent by this batch.

The parent investigation already verified that byte `0x04247686` follows physical aux removal and reinsertion.
That live evidence appears in `../../bluetooth-query/README.md`.
This directory preserves static evidence separately.

## Detection producers

Each function below can send module `0x27`, event `0x7D`, through dispatcher `0x0823181C`.

| Function | Static behavior |
| --- | --- |
| `0x082416A4` | The AT override accepts parsed values 0 or 1, writes `0x04247686`, and dispatches its current value. |
| `0x0824172C` | The input callback reads a helper when configuration byte `0x04247685` is zero. Otherwise it schedules event `0x7E` after 300 time units. |
| `0x082417C8` | Initialization configures one of two input-helper paths, obtains an initial state, writes `0x04247686`, and dispatches it. |
| `0x08241970` | Another input callback obtains a state, calls `0x0824C388`, stores the inverted state, and dispatches it. |

See `seed-functions.c`, lines 3–190.
The literal evidence resolves the shared detection address from four separate literal locations.
The callback at `0x0824172C` is registered by both configuration paths.
The callback interpretation depends on coherent decompilation and pointer references.
It is not a live trace of function execution.

## Event consumer and gates

Function `0x082456A0` consumes module `0x27`, event `0x7D`.
The relevant branch appears in `event-consumer.c`, lines 307–339.

1. The handler requests two bytes from NVKEY `0xF323`.
2. If that read succeeds, it parses the returned text as an integer.
3. If the parsed result is zero, it ignores the event.
4. If the read fails, it uses `-1`, so the failure does not trigger that zero-value guard.
5. It normalizes the event value to zero or one.
6. It sends module `1`, event `0x26`, through `0x0824560C`.
7. It updates the requested audio path through `0x082454BC(value, 0)`.
8. It sends a notification through `0x0823FFC8(3, state, 1)`.
9. If byte `0x0420F43F` is nonzero, it invokes `0x082455A4(value)`.

The parent live query returned status `FC` for NVKEY `0xF323`.
That is not a successful zero value.
A missing or unreadable key therefore does not establish this guard as the fault.

Function `0x082454BC` writes byte `0x0420F43D`.
Its second argument controls whether it writes the value to NVKEY `0xF323`.
Ordinary detection events pass zero, so that branch changes RAM without writing the key.
See `downstream-functions.c`, lines 13–36.

Function `0x0823FFC8` constructs RACE command `0x2C82` with type `0x5C`.
The body starts with a two-byte field identifying notification type 3, followed by the one-byte state.
This is a notification builder, not a separate physical jack query.

## Route configuration

Initialization in `0x082456A0` creates two objects through `0x08247800`.
That allocator clears `0x44` bytes and copies the first `0x24` bytes from the supplied configuration.
Its object base is `0x042479B8`.

| Field | Slot 0 | Slot 1 |
| --- | --- | --- |
| Object address | `0x042479B8` | `0x042479FC` |
| Saved pointer | `0x04247994` | `0x0424799C` |
| Name | `line_in` | `line_out` |
| Name pointer at `+0x1C` | `0x082FE5D7` | `0x082FF336` |
| Configuration callback at `+4` | `0x082453DC` | `0x0824554C` |
| Field at `+0x15` | `1` | `0` |
| Field at `+0x18` | `0x11` | `2` |

The meanings of these numeric fields require the manager and backend definitions.
The names establish the vendor's intended roles, not successful audio flow.

Callback `0x082453DC` writes this configuration:

| Offset | Written value |
| --- | --- |
| `+0` | `7` |
| `+8` | `48000` |
| `+0x0C` | `2` |
| `+0x10` | `6` |

If its selector argument is zero, it writes `4` at `+1`, `0x0101` at `+0x48`, and `7` at `+0x4A`.
Otherwise it writes `3` at `+1`, `0x0100` at `+0x48`, and zero at `+0x4A` and `+0x3D`.
See `route-config-callbacks.c`, lines 3–27.
These values establish two endpoint variants and a 48,000 setting.
The backend must establish which fields represent rate, channels, format, and physical devices.
Do not assign ADC or DAC names from the numbers alone.

Callback `0x0824554C` accepts selector values below two.
It sends module `0x1F`, event `4`, with that selector and writes zero into the callback's output byte.
This callback changes state, so it is not a read-only query.

## Requested operations and actual state

The wrappers at `0x08247842`, `0x0824786E`, and `0x08247848` queue module `0x36`, event `3`.
They set the queued operation to `1`, `2`, or `4`, respectively.
The last wrapper writes configuration bytes `+0x10` and `+0x11` before queuing operation 4.
These wrappers do not prove that the backend completed a start or stop.
See `handle-accessors.c`.
The parent investigation owns the manager and backend trace in `../live/`.

## Relevant RAM fields

| Address | Static use |
| --- | --- |
| `0x04247685` | Selects one of two input-helper paths. |
| `0x04247686` | Stores the inverted input state and the AT override value. The parent live test verified jack detection here. |
| `0x0420F43D` | Stores the requested logical audio path. |
| `0x0420F43E` | Stores a level that the route handler adjusts and sends to the object manager. |
| `0x0420F43F` | Gates the call to `0x082455A4` after a detection event. |
| `0x04247993` | Selects an input-helper path during route initialization. |
| `0x04247994` | Holds the pointer to the `line_in` object. |
| `0x0424799C` | Holds the pointer to the `line_out` object. |
| `0x042479A0` | Controls one branch in `0x082455A4`. Its broader meaning remains unknown. |
| `0x042479A1` | Controls whether `0x082455A4` operates on the second object. Its broader meaning remains unknown. |

## Limits and continuation

The module `1`, event `0x26` consumer remains outside this batch's completed trace.
Two initial raw comparisons were rejected as evidence for that consumer.
Function `0x08235070` compares a module value of `0x26`.
The candidate boundary `0x0824AD6C` produced invalid instructions.
Their rejected exports remain in `module1-consumers.c` for transparency.

The detection and requested-path chain is established statically.
Actual endpoint names, backend completion, analog samples, gain, and mute remain separate questions.
No missing NVKEY, queued operation, or object pointer is labeled as the cause of silence.

Run `python3 collect_evidence.py` from this directory to reproduce all literal checks.
`literal-evidence.json` records the exact image hash, literal offsets, values, and export hashes.
