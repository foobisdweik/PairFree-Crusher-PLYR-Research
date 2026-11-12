# Source selection and USB routing

This batch recovered the USB route controls and their RAM fields in the SG200X Master `.35` image.
It did not establish a complete priority order among aux, USB-C, the dongle, and Bluetooth.
No hardware commands were sent during this batch.

## Verified relationships

The firmware uses a common manager for several audio records.
A record stores one route's configuration and lifecycle state.
The manager stores six records at `0x042479B8`, with `0x44` bytes per record.
Registration at `0x08247800` accepts IDs `0` through `5`.

Five direct registration calls were found in the scanned MCU region:

| Call address | Record ID | Calling component |
|---|---:|---|
| `0x08245774` | 0 | Aux initialization |
| `0x08245792` | 1 | Aux initialization |
| `0x08246086` | 2 | USB initialization |
| `0x0824609A` | 3 | USB initialization |
| `0x082460C2` | 4 | USB initialization |

Record `5` remains unassigned.
A permitted record does not prove that the firmware uses it.
The direct calls do not establish where Bluetooth or dongle audio enters this manager.
The exact game, chat, and microphone labels for USB records `2`, `3`, and `4` remain unverified.

The USB consumer at `0x08245FFC` keeps three activity bytes and three record handles.
A stream event changes the corresponding activity byte.
If the application USB flag is set, the consumer requests that the manager start or stop that record.
Changing the application USB flag applies the same operation to each active USB record.
These operations are asynchronous because the wrappers queue another event for the common manager.

## RAM fields

These fields are confirmed from static reads and writes.
This batch did not verify their values through live hardware reads.
Use the Master relay and the matched `.35` layout when interpreting them.

| Address | Size | Meaning supported by code |
|---|---:|---|
| `0x042479A2` | 1 byte | USB attachment-like state stored by `0x08245D84` |
| `0x042479A4` | 3 bytes | Activity for USB stream indices `0`, `1`, and `2` |
| `0x042479A8` | 4 bytes | Handle for record `2` |
| `0x042479AC` | 4 bytes | Handle for record `3` |
| `0x042479B0` | 4 bytes | Handle for record `4` |
| `0x0420F478` | 1 byte | Application USB enable flag |
| `0x042479B7` | 1 byte | Additional gate in the output-control path. Its exact meaning is unknown. |
| `0x042479B4` | 1 byte | Cached volume value |
| `0x042479B5` | 1 byte | Second cached volume value |

The additional gate must not be called a mute flag yet.
A cached volume does not prove that the backend applied gain.
A started USB record does not prove that aux has the same state.

## Controls recovered from the firmware

These are static command interpretations. None were sent to the device.

- `LINE_IN_VOL` maps `up`, `down`, and `level` to selectors `0`, `1`, and `2`.
  The handler appends two decimal arguments and queues a three-byte payload through event `0x27`.
- `line_in,in` and `line_in,out` queue event `0x26` with values `1` and `0`.
- `usb_in,in` and `usb_in,out` queue event `0x28` with values `1` and `0`.
- `AT+USBAUDIO` maps `ON` and `OFF` to event `0x63` with values `1` and `0`.
- `AT+USBAUDIO` with `OUT_CTRL` uses event group `3`, action `0x20`, and subevent `2`.

Manual controls do not establish the automatic priority between physical sources.
The USB attachment helper emits event `0x28` only while `0x0420F478` is set.
Therefore, attachment state and the application enable flag are separate conditions.

## Evidence and limits

[findings.json](findings.json) records the literal addresses, RAM fields, function addresses, and confidence limits.
[usb-consumer.c](usb-consumer.c) preserves the verified USB consumer.
[usb-helpers.c](usb-helpers.c) preserves its handle lookup and attachment helper.
[route-api.c](route-api.c) preserves common registration and the corrected mode callback.
[sources.c](sources.c) preserves the manual control parsers.
[functions.c](functions.c) preserves the volume parser.
[strings.json](strings.json) records matching strings with file offsets and candidate addresses.

The first function in `usb-events.c` is rejected evidence.
That export began at `0x082452CE` and omitted a comparison at `0x082452CC`.
The corrected export in `route-api.c` starts at `0x082452CC` and has no incoming-condition ambiguity.
The verified USB consumer begins at `0x08245FFC` and is preserved separately.

The separate Ghidra project is `ghidra/Selection-35.gpr`.
The root agent's project was not opened or changed.
`manager.c` overlaps manager work that the root agent reported later.
Use the root agent's live manager analysis for interpretation of current record states.

The exact Bluetooth and dongle audio paths remain unresolved.
The audio paths may use other components or indirect registration.
The absence of a direct registration for record `5` does not distinguish those possibilities.

## Reproduction

The input is the decoded SG200X Master `.35` image.
Its SHA-256 is recorded in `findings.json`.
The selected MCU mapping adds `0x0806B000` to each decoded file offset.
This mapping does not cover every embedded processor region correctly.

The headless export uses `ARM:LE:32:Cortex`, Thumb mode, and no automatic analysis.
`ExportSelection.java` accepts an output path followed by function addresses.
The export logs preserve the loader and language settings.
For example, these script arguments recover the volume parser and verified USB consumer:

```text
-postScript ExportSelection.java output.c 0x08241570 0x08245FFC
```
