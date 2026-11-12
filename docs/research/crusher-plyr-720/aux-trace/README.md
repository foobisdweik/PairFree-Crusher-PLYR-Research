# Powered aux fault: dual-connection trace

Date: 2026-11-11.

The user connected aux while retaining Bluetooth. The powered-on headset remained silent through aux.
The Mac selected `External Headphones` as its default output and reported output mute as false.
CoreAudio reported that output as running and both Bluetooth audio devices as not running.
These observations support investigating the headset's powered line-input path.
They do not measure the analog waveform or prove a firmware defect.

## Current host observations

- The connected name is `CRUSHER PLYR 720 XBOX`.
- The Mac selected the headset as its default input, but that device was not running during the snapshot.
- The output volume was 69 percent. This session did not change it or play a test tone.
- The user confirmed that aux remained silent with both connections present.

`audio-state.json` preserves direct CoreAudio readings. `system-audio.json` preserves the audio device report.
`audio_state.swift` reproduces the read-only CoreAudio query.
Neither being connected nor being the default input proves an active Bluetooth microphone stream.

## Firmware address mapping

The analyzed firmware is SG200X version `1.0.0.34`, not a verified match for the headset's installed full build.
The Master decoded image has SHA-256 `202b0da5549f850ce539166c0f5bd4bc4c6a0435970ba66df2a16821c8416879`.
Command-table references support this address relation for the relevant region:

```text
candidate runtime address = decoded file offset + 0x0806b000
```

The static batch matched 316 distinct AT command strings under this relation.
The function pointers have their low bit set, consistent with ARM Thumb code.
The selected entry bytes and coherent decompilation support that interpretation.
It is still a candidate mapping for this region, not a complete map of the composite image.
The image contains other processor code, so no whole-image automatic analysis was run.

A separate Ghidra project imports the bytes using `ARM:LE:32:Cortex` and the candidate base.
The script disassembles selected functions and exports them to `aux-handlers.c`.
The project is `ghidra/Aux-MCU-Candidate.gpr` with its accompanying `.rep` directory.
The script is `../ghidra/scripts/ExportAux.java`.

## Recovered handler behavior

| Candidate address | Association | Observed behavior in decompilation |
| --- | --- | --- |
| `0x0824163c` | `AT+LINE_IN_DET` | Parses an integer, writes a state byte for values 0 or 1, then calls a dispatcher |
| `0x08241508` | `AT+LINE_IN_VOL` | Recognizes `up`, `down`, and `level`, then parses two decimal fields |
| `0x08242ef0` | `AT+APP` | Recognizes `GET_LINE_IN` and selects an ON or OFF response |
| `0x0824199c` | Getter called by `GET_LINE_IN` | Reads a configuration byte, selects one of two helper calls, and inverts the returned state |

`AT+LINE_IN_DET` is a write or override path. It is not a read-only jack query.
Its candidate state byte is at `0x04247686`.
The dispatcher call contains event value `0x7d`. Its meaning remains unverified.

The volume handler maps `up` to 0, `down` to 1, and `level` to 2.
It constructs three bytes: mode and two parsed numeric values.
Units, accepted ranges, downstream validation, and exact command syntax remain unknown.

The application handler compares against the literal `GET_LINE_IN`.
It returns `LINE_IN - OFF` when the getter returns zero and `LINE_IN - ON` otherwise.
That is stronger evidence than the earlier strings alone.
However, the application's command parser and transport still require recovery before issuing a query.

The getter uses candidate configuration byte `0x04247685`, adjacent to the detection override byte.
It obtains another selector byte through pointer `0x082ffb7e`, whose first byte is `01` in this image.
One branch calls `0x081aa6c8`. The other calls `0x081be964`.
The helper names and hardware roles remain unknown, so this report does not label either call as a GPIO read.
A GPIO is a general-purpose input or output pin on a chip.
The relationship between this getter and the detection override remains to be traced.

## Bluetooth control path

The native SDK constructor sets these defaults:

| Role | UUID |
| --- | --- |
| Service | `5052494D-2DAB-0341-6972-6F6861424C45` |
| Write characteristic | `43484152-2DAB-3241-6972-6F6861424C45` |
| Notify characteristic | `43484152-2DAB-3141-6972-6F6861424C45` |

The SDK permits overrides, so these are not yet confirmed PLYR identifiers.
The app contains another UUID family beginning `00001100-D102-11E1-9B23-00025B00A5A5`.
Its exact PLYR roles remain unverified.
The SDK provides `GET_MMI_ENUM` as command `0x0901`, but the required module for audio-path state is unresolved.
Four code references to `sendCmd_GetAudioPath` remain available for further inspection.
See `ios-aux-evidence.json` for addresses, offsets, read schemas, and limitations.

No Bluetooth connection attempt, discovery scan, characteristic read, or control write occurred in this trace.
The existing Bluetooth connection was inspected through macOS reports only.
No diagnostic AT command was sent over Bluetooth or aux.

## Later result

The [Bluetooth query follow-up](../bluetooth-query/README.md) verified relay access to the Master chip.
Its jack-detection byte changed `1 → 0 → 1` during a user-controlled cable cycle.
The remaining fault lies beyond establishing that software detection works. Audio routing and gain still require tracing.

## What remained unresolved at this stage

1. Identify the two getter helpers and their configuration inputs.
2. Trace the writers of the detection and override bytes.
3. Recover the Bluetooth transport for the application command or its ordinary audio-path query.
4. Read the live detected state while aux is inserted, then compare it with the user's silent playback.
5. Trace routing and gain decisions after successful detection.

Those steps distinguish a jack-detection problem from a routing or gain problem.
The current evidence does not yet distinguish them.

## Verification and limits

The firmware hash, string pointers, literal values, and exported code were checked directly.
Ghidra imported the candidate ARM region and exported all four selected functions.
A follow-up script initially tried to reapply context over existing instructions and failed.
The script now preserves the existing context, and the next export completed successfully.
The import and successful export logs are preserved.
The earlier repository, package, and schema checks still pass.
No headset state, Mac route, volume, firmware, or VM configuration was changed.
