# Evidence from the supplied iOS app

The app supplies model configuration, 140 RACE command schemas, and exact firmware locations.
It materially extends the two repositories' earlier research.
The files and commands remain unverified on the connected headset unless stated otherwise.

## Identity and readable code

The supplied application is `/Applications/Runner.app/Wrapper/Runner.app`.
Its bundle identifier is `com.iphone.SkullCandy`, version `5.0.6`, build `420`.
The main `Runner` executable is ARM64 and contains an encrypted region of 4,096 bytes.
Its Flutter library, Airoha library, and RxBragi library report `cryptid 0`.
That flag means their encryption load commands do not mark the code as encrypted.
It does not establish that every resource or string is readable.
Hashes and exact load commands appear in `ios-binary-metadata.json`.

The app contains 87 framework directories.
The analysis selected protocol libraries and model assets rather than unrelated analytics or audio libraries.
It did not read secrets assets or launch the app.

## PLYR model configuration

The manifest is `Frameworks/App.framework/flutter_assets/assets/products/product-manifest.json`.
Its SHA-256 is `4b66d9ab5af4689b965aa143d5aa929646c0ce9de1e33fe2b82ca24e00da85cc`.

| JSON pointer | Product | Model | iOS selection | Android selection |
| --- | --- | --- | --- | --- |
| `/allProducts/33` | `0x29`, Crusher PLYR 720 | `S6PCW` | `ble` | `bluetoothClassic`, `leAudio` |
| `/allProducts/34` | `0x2A`, Crusher PLYR 720 XBOX | `S6PXW` | `ble` | `bluetoothClassic`, `leAudio` |

These records agree with the user's PairFree screenshot.
The screenshot preserves the Android connection choices and the combined feature lists.
The iOS selection is separate, so an Android transport assumption should not direct an iOS capture.
The manifest does not supply a service UUID in these selected records.

`ios-app-evidence.json` preserves both product records and all 21 firmware entries.
Each firmware entry lists minimum app version `3.7.6`.
The latest listed release is `1.0.0.34`. Neither selected record lists `.35`.
Early entries use an `unavailable` URL, so their presence does not establish downloadable firmware.

## Firmware acquired without flashing

The four latest files downloaded successfully from the manifest's public S3 locations.
The full URLs, HTTP metadata, SHA-256 values, and sizes appear in `firmware/downloads.json`.

| File | Bytes |
| --- | ---: |
| `SG200_Master_Headset_DFU_v1.0.0.34.bin` | 2,090,905 |
| `SG200_Slave_Headset_DFU_v1.0.0.34.bin` | 1,402,256 |
| `SG200X_Master_Headset_DFU_v1.0.0.34.bin` | 2,115,951 |
| `SG200X_Slave_Headset_DFU_v1.0.0.34.bin` | 1,402,192 |

The manifest associates SG200X with the connected Xbox model.
Master and Slave are the vendor's file labels. Their processor and partition roles remain unverified.
These packages are research inputs. They were not installed or sent to the headset.
Their architecture, encryption, and load addresses require analysis before a meaningful firmware import into Ghidra.

## Exact SDK command schemas

The Airoha framework includes `command_race.xml`, with 2,485 lines and 140 commands.
Its parsed field definitions appear in `race-commands.json`.
Each record preserves the XML source, line range, timeout, request fields, and response fields.
This is stronger than searching for command names in a binary.
It still establishes SDK capability rather than PLYR command acceptance.

| ID | SDK name or purpose | Research relevance |
| --- | --- | --- |
| `0x0A0C` | `READ_NVKEY_RESP_NVID` | Reads a stored value and echoes its ID |
| `0x0402` | `STORAGE_MULTI_PROGRAM` | Describes storage programming |
| `0x0404` | `STORAGE_PARTITION_ERASE` | Describes partition erasure |
| `0x0431` | `STORAGE_GET_SHA256` | Describes storage hashing |
| `0x1C00` | `QUERY_PARTITION_INFO` | Describes partition discovery |
| `0x1C01` | Firmware integrity check | Describes update verification |
| `0x1C02` | `COMMIT_FOTA` | Describes update commitment |
| `0x1C07` | Firmware version query | Describes firmware identity |
| `0x1C08` | `FOTA_START` | Describes update initiation |
| `0x1D02` | ROFS read | Describes access to a read-only file system |

FOTA means Firmware Over The Air. These SDK names do not mean an update must use wireless transport.
The table records facts for analysis. This session sent none of these commands.

The SDK identifies `0x0A0C` as a read of a nonvolatile key, which is a stored value indexed by an ID.
Its request contains `nvkey_id:uint16` and `length_of_read_bytes:uint16`.
Its response contains status, the stored-value ID, and payload bytes.
This clarifies the older SLYR sample:

```text
Report wrapper: 06 0A 00
RACE request:   05 5A 06 00 0C 0A 02 10 E8 03
Command:       0x0A0C
Stored ID:     0x1002
Maximum read:  0x03E8 = 1000 bytes
```

The schema supports these field meanings, subject to the little-endian convention documented by the earlier transport research.
It does not establish that `0x1002` has the same contents on PLYR 720.

## THX, aux, and update leads

The Flutter binary preserves the following strings and file offsets:

| Offset | String | What it establishes |
| --- | --- | --- |
| `0x8ac1f0` | `formatRaceCommand` | A named RACE formatting lead |
| `0x8dd680` | `RaceCommandRequestBuilder` | A named builder lead |
| `0x941980` | `SetThxSpatialAudioRaceCommand` | A THX control builder exists |
| `0x993cf0` | `ReadThxSpatialAudioRaceCommand` | A THX state reader exists |
| `0x987bb0` | `SetThxHeadTrackingRaceCommand` | A head-tracking builder exists |
| `0x8df340` | `auxPlayPause` | An aux action name exists |
| `0x95ca80` | `lineIn` | A line-input name exists |
| `0x996f00` | `FotaPackage` | A firmware-package class name exists |
| `0x97bd60` | `_isBufferEncrypted@16069316` | An encryption-test name exists |
| `0x8fd700` | `SG200StoreEqArrayIndex` | An SG200 EQ builder lead exists |
| `0xa05410` | `SG200SetEqMapping` | An SG200 EQ mapping lead exists |

These are file offsets of strings. They are not function addresses.
The aux strings may describe button actions. They do not prove the existence of an aux-routing repair command.
The encryption string does not prove that the downloaded firmware is encrypted.
THX control builders support further investigation of device communication. They do not identify where THX processes audio.

## Ghidra status

The connected REA server initially lacked its Ghidra environment setting.
A read-only diagnostic found an existing Ghidra `12.1.4` installation and Java configuration.
A separate CLI invocation used those existing paths without editing client configuration or installing software.

Ghidra successfully decompiled RxBragi function `0x8344`.
The retained evidence appears in `rxbragi-crc-decompile.json`.
The function calls a CRC16 helper and creates data from the resulting 16-bit value.
That verifies access to readable native code. It does not establish the complete frame builder or its byte order.
This was app-library analysis, not controller firmware analysis.

## Next evidence to recover

1. Follow the PLYR BLE selection to the service and characteristic identifiers.
2. Recover the THX builders' exact opcodes and payloads from Flutter code or a real app capture.
3. Trace `FotaPackage` and its encryption test before interpreting the downloaded images as executable code.
4. Identify the image architecture and layout before applying the controller-specific Ghidra workflow.
5. Compare state around the powered-aux failure using the actual PLYR request and reply formats.

## Firmware container and decoded contents

The outer package no longer requires a speculative decryption attempt.
All four files have the following verified structure:

| Offset | Contents | Evidence |
| --- | --- | --- |
| `0x0000`–`0x001F` | SHA-256 of every byte from `0x0100` onward | All four hashes match |
| `0x0020`–`0x00FF` | `FF` padding | All 224 bytes match |
| `0x0100` onward | Records with two-byte tags and lengths | Record lengths fit the header |
| `0x1000` onward | One LZMA FORMAT_ALONE stream | All decoders reach EOF with no unused bytes |

SHA-256 is a hash, so this matching prefix checks content integrity. It does not establish vendor authenticity.
The record interpretation uses little-endian tags and lengths.
The records include version labels and chip labels.
Most other field meanings remain unknown.

Run `python3 docs/research/crusher-plyr-720/unpack_firmware.py` to repeat verification and decompression.
The script records decoded hashes and sizes in `firmware/decoded/manifest.json`.
This proves compression at the outer body layer. It does not exclude encrypted sections inside the decoded body.

| Image | Decoded bytes | Chip label in package |
| --- | ---: | --- |
| SG200 Master | 3,239,936 | `AB1585_DUAL_CHIP_MASTER` |
| SG200 Slave | 2,289,664 | `AB1565_dual_chip` |
| SG200X Master | 3,280,896 | `AB1585_DUAL_CHIP_MASTER` |
| SG200X Slave | 2,289,664 | `AB1565_dual_chip` |

The decoded Xbox Master contains useful strings at these exact file offsets:

- `0x28a2c0` identifies an AB158x SDK build.
- `0x293bca` contains `AT+LINE_IN_DET`.
- `0x293bd9` contains `AT+LINE_IN_VOL`.
- `0x294218` contains `GET_LINE_IN`.
- `0x2dd83c` contains `THX_OFF.mp3`.
- `0x2dd884` contains `THX_ON.mp3`.

These line-input strings are closer to the original aux symptom than a generic Bluetooth service inventory.
They remain names until references connect them to handlers and their accepted parameters.
The THX strings name audio prompts, so they do not prove spatial processing.
The decoded Xbox Slave contains headtracker sensor and calibration strings, beginning around `0x1dee8f`.
See `decoded-findings.json` for complete evidence and limits.

The Xbox images contain 32 bounded ELF objects: 17 in Master and 15 in Slave.
Their headers declare ELF32, little-endian data, and machine value `94`, which identifies Xtensa.
All computed program and section extents fit within the parent images.
The extracted objects and their hashes appear in `firmware/decoded/elf/manifest.json`.
These objects do not establish the architecture or load map of every other firmware region.

REA rejects Xtensa ELF files before invoking its provider.
The installed Ghidra includes `Xtensa:LE:32:default`, so a direct import uses that declared architecture.
That import targets one extracted object in a separate project.
It does not establish that this object implements the Bluetooth controller or the line-input commands.

The direct Ghidra import succeeded and saved `ghidra/CrusherPLYR720X-Module.gpr` with its associated `.rep` directory.
The object comes from decoded Xbox Master offset `0x88754` and has SHA-256 `bb872b0c6ea157c412b8e601273f6af38787c9cd16ab0c56773bb771d7dc73df`.
Ghidra chose image base `0x10000`, so ELF entry `0x3948` maps to analyzed address `0x13948`.
The first export script used the unadjusted address and failed to find a function.
The corrected script uses the image base and successfully exports pseudocode to `ghidra/entry.c`.
The import log retains a dynamic hash-table warning. Therefore, complete ELF metadata recovery is not claimed.
The entry calls an indirect function pointer and returns a pointer.
Its role remains unknown. It has not been identified as a controller, THX effect, or aux handler.
The project, logs, script, and pseudocode are preserved together.

The original controller-analysis prerequisite has therefore changed: a project now exists for one extracted module.
It is not yet a verified Bluetooth controller project, so running the controller-specific recovery phases would be premature.
