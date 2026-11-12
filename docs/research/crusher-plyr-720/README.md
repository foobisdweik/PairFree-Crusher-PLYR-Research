# Crusher PLYR 720: consolidated protocol evidence

Date: 2026-11-11.

These repositories provide useful protocol leads, but they do not establish a working Crusher PLYR 720 control implementation.
The original snapshots contain no headset firmware image, decryption key, or Ghidra project.
The iOS follow-up recovered firmware download locations and saved four images alongside this report.
The supplied iOS app yielded 140 command schemas and four packages whose bodies decompress without a key.
One extracted Xtensa module now has a saved Ghidra project and decompiled entry function.
See [the iOS and firmware results](IOS_FINDINGS.md) for the new evidence and remaining limits.

The later [powered aux trace](aux-trace/README.md) recovers candidate handlers and records the dual-connection test.

The [verified Bluetooth query](bluetooth-query/README.md) now observes jack detection on the installed `.35` firmware.

## Files in this report

- `protocol-evidence.json` contains 53 findings and 112 command or method records, with source paths and line numbers.
- `inventory.json` records hashes, sizes, and text line counts for 1,169 files across both repositories.
- `bluetooth-batch.json`, `data-batch.json`, and `usb-batch.json` preserve the three independent research batches.
- `live-device.json` records the connected headset's identity as reported by macOS. Device addresses are omitted.
- `verify_evidence.py` checks the analytical frame, inventory hashes, and citation ranges without sending traffic.
- `IOS_FINDINGS.md` connects the app, firmware packages, decoded images, embedded modules, and Ghidra results.
- `race-commands.json` preserves 140 additional SDK command schemas.
- `firmware/` preserves downloaded and decoded images with hashes.
- `ghidra/CrusherPLYR720X-Module.gpr` opens the saved project for one extracted module.

The 112 records include 106 Bragi methods, one STATUS parsing rule, one captured SLYR command, and four bridge operations.
They are not 112 commands confirmed on Crusher PLYR 720.
`source-confirmed` means the local source documents the fact. It does not mean this session verified the headset's behavior.

## Coverage and provenance

| Repository | Commit | Files inventoried | Bytes | Text lines |
| --- | --- | ---: | ---: | ---: |
| PairFree-Crusher-PLYR-Research | `f39d1887e319c6ca292dfd8b10473bd6daf5bb8c` | 1,144 | 10,283,774 | 195,827 |
| skullcandy-hq-apple-silicon | `8b0fc1f1e771760ff74bed1cb4091dd9ee41ad4b` | 25 | 200,539 | 1,859 |

The inventory excludes Git internals, dependency directories, caches, and this generated report directory.
Three independent batches reviewed 18 relevant files in detail after filtering the trees.
Other brands, artwork, and unrelated application UI files were inventoried but not analyzed as Skullcandy protocol evidence.
No VM operation, headset control command, or firmware write occurred during consolidation.

PairFree's primary research source was Skullcandy Android 5.0.6.
Its recorded XAPK SHA-256 is `255153c95a3a12131af83350dc962a22b20eb49b6e73ce4a92800e82af254e9a`.
The original APKs and decompilations remain at external Windows paths, according to [RESEARCH.md](../../RESEARCH.md:52).
They are not included in the supplied repository.
This means the current findings preserve earlier analysis rather than independently repeating every binary inspection.

## Device identity

| Identity | Value | Scope |
| --- | --- | --- |
| Crusher PLYR 720 | Product `0x29`, model `S6PCW` | Android catalog |
| Crusher PLYR 720 XBOX | Product `0x2A`, model `S6PXW` | Android catalog |
| Connected name | `CRUSHER PLYR 720 XBOX` | macOS observation during this session |
| Reported firmware | `1.0.0` | macOS Bluetooth report, not a verified full build number |
| Reported services | `HFP AVRCP A2DP HID GATT ACL` | macOS report, not captured application traffic |

The catalog lists Bluetooth Classic and LE Audio for both models.
It lists Crusher controls, microphone gain, sidetone, game/chat mix, LEDs, multipoint, THX spatial audio, and head tracking.
Those features are a union across firmware entries. They do not establish each firmware's capabilities.
See [MODELS.md](../../skullcandy/MODELS.md:42).
Bluetooth vendor and product identifiers must not be substituted for USB identifiers.

## Keep these protocol layers separate

1. USB HID carries reports between the computer and the headset. HID means Human Interface Device.
2. RACE is Airoha's vendor command format. An app can carry it inside another transport.
3. Bragi BOS-RPC carries numbered service calls with protobuf messages. The exact PLYR transport selection remains unknown.
4. Bluetooth HCI connects a host stack to a controller. HCI means Host Controller Interface.
5. LMP and LLCP manage Bluetooth links inside controller firmware. They are not names for ordinary app commands.

The original repositories establish useful facts about the first three layers.
The iOS follow-up recovered firmware packages, but no extracted module has yet been identified as the Bluetooth controller.
A socket opening, a valid checksum, or a catalog feature does not establish the correct command layer for PLYR 720.

## USB and RACE evidence

The USB repository documents SLYR Pro, USB `34F0:2220`, using an Airoha `AB1565` chip.
That chip identification belongs to SLYR Pro. It does not establish PLYR 720's chip.
See its [protocol notes](/Users/iphoobis/Developer/skullcandy-hq-apple-silicon/docs/PROTOCOL.md:8).

Its vendor collection uses usage page `0xFF13` on interface `MI_05`.
The documented exchange sends output report `0x06` and retrieves FEATURE report `0x07`.
The bridge substitutes a Linux FEATURE request when Wine's input-report request returns empty data.
This transport is documented for SLYR Pro on Linux. macOS and PLYR compatibility remain unverified here.

Documented request prefix:

```text
06 0A 00 05 5A 06 00 0C 0A 02 10 E8 03
```

The older source labels command `0x0A0C` as device information.
The supplied iOS SDK provides a stronger interpretation: `READ_NVKEY_RESP_NVID`.
Its schema identifies a stored-value ID and a requested byte count.
Therefore, the sample requests NVKEY `0x1002` with a maximum of 1,000 bytes.
This decodes the request fields but does not prove what that stored value means on PLYR.
See [the iOS findings](IOS_FINDINGS.md).
Its inferred fields are report ID, outer length, RACE prefix, inner length, command ID, and parameters.
The command's outer length equals the ten bytes after its first three bytes.
The documented reply is incomplete and contains an ellipsis.
Its outer length `0x003B` implies 62 total bytes, but the prose describes a 63-byte report.
This may involve padding or a length convention. A complete capture must resolve it.
Do not turn the inferred layout into a strict parser without that capture.

PairFree's Java SDK notes identify `05 5A` requests, `05 5B` replies, and `05 5D` notifications.
They describe little-endian length and command fields, plus an 8,000 ms transport timeout.
They do not supply PLYR-specific command payloads.
See [PROTOCOL.md](../../skullcandy/PROTOCOL.md:181).

The local bridge uses TCP port `38099`:

```text
Request:  operation:u8 | report_id:u8 | length:u16 LE | optional payload
Response: status:u8 | length:u16 LE | data
Operations: 1 WRITE, 2 GETFEATURE, 3 SETFEATURE, 4 READ
```

These operation numbers belong to the bridge software. They are not headset commands.
The bridge selects the first matching vendor device without checking the usage page.
It can report partial writes as successful and lacks an explicit socket deadline.
Oversized replies can leave unread bytes in the stream.
Therefore, capture results need checks for device selection, complete writes, and complete responses.
The detection patch supplies USB descriptor records. It does not fabricate headset state.

## Bragi framing and methods

PairFree documents this frame:

```text
7E FF flags protocol length:u16 BE header_crc:u8 payload [fcs:u16 BE]
```

The header checksum covers bytes zero through five.
It uses reflected polynomial `E0`, initial value `FF`, and no final XOR.
The frame checksum excludes `7E` but includes the header checksum and payload.
It uses reflected polynomial `8408`, initial value `FFFF`, and no final XOR.
Both the payload length and frame checksum are stored high byte first.
See [framing and RPC](../../skullcandy/PROTOCOL.md:64).

The RPC header is `flags/type | service | method | tag` followed by protobuf data.
Requests and replies must match their service, method, and tag.
Subscriptions can generate multiple responses.
STATUS succeeds only when its first body byte exists and equals `00`, according to the vendor SDK analysis.
An empty STATUS is not confirmed success.

The registry preserves all 106 methods from [SERVICES.md](../../skullcandy/SERVICES.md:5).
Useful research leads include device service `2`, hearing service `4`, spatial service `17`, and Crusher service `23`.
Their presence in the SDK does not prove PLYR implements them.
The documented Bragi UUID comes from Crusher 1080 research. It is not verified for PLYR 720.
The earlier virtual run captured no application command traffic.
See [VIRTUAL_TESTING.md](../../skullcandy/VIRTUAL_TESTING.md:3).

The analytical example is:

```text
7E FF 80 94 00 06 2D 10 02 01 00 08 00 54 80
```

Its checksums independently verify as `2D` and `5480`.
This is a constructed example, not a hardware capture.

## Security, firmware, and EQ limits

The Bragi SDK documents authenticated-access service `25`.
It includes trust establishment and negotiated encryption for a local session.
This describes communication security. It does not establish encryption of a firmware file.
The later firmware acquisition verified LZMA compression in all four outer bodies. No key was needed to decompress them.
AES, key exchange, and signatures in an app are insufficient evidence of a firmware decryption method.
The original repositories establish no firmware format, image key, signature format, or bootloader layout.
The iOS follow-up establishes an outer package layout, a matching hash, and compressed bodies.
Internal region roles, signatures, and bootloader layout remain unresolved.

The existing Airoha EQ implementation derives from JBL library analysis.
It encodes filter coefficients, but Skullcandy compatibility remains unverified.
Its existence does not reveal firmware encryption or the PLYR command that accepts those coefficients.
See [AirohaPeq.kt](/Users/iphoobis/Developer/PairFree-Crusher-PLYR-Research/android/protocol/src/main/kotlin/io/github/omegadestroyer/pairfree/protocol/airoha/AirohaPeq.kt:22).

The decryption described elsewhere in PairFree concerns HeyMelody metadata.
It supplies no Skullcandy key or firmware method.

## THX handoff assessment

The supplied `THX_on_ARM64_Handoff.md` was read first and hashed in `protocol-evidence.json`.
It reports successful THX controls and profile application in the VM.
The VM was unavailable, so those observations were not repeated.
The report treats headset-side THX processing as unproven. This consolidation retains that uncertainty.

A headset storing a setting does not identify where audio processing occurs.
A listening difference alone cannot conclusively identify the processor either.
The app could change other settings or a host process could alter audio.
A controlled test should record the command, keep the audio source constant, and compare output with host effects excluded.
A missing audible difference would not prove host processing is required.
The profile, source material, routing, or test sensitivity could explain that result.
The handoff's statement that reconstruction is impossible is a project conclusion, not proof from these repositories.

## Path toward decryption or reimplementation

1. Recover the exact PLYR configuration from the supplied iOS app and the earlier Android artifacts. The iOS catalog is now preserved.
2. Map product `0x2A` to its selected transport, command builders, and firmware-specific feature conditions.
3. Capture ordinary app requests and replies while reading state. Preserve timestamps, bytes, transport, firmware, and app version.
4. Compare USB and Bluetooth commands for the same setting. Shared RACE framing may help, but do not assume shared payloads.
5. Obtain the exact firmware package and record its source, size, and SHA-256 before examining it. Version `.34` is now preserved.
6. Trace the update reader to distinguish decompression, encryption, authentication, checksums, and segment selection.
7. Identify the chip and image layout before selecting addresses or architecture in Ghidra.
8. Analyze an isolated project copy, then identify handlers from captured commands and their dispatch functions.
9. Implement the smallest verified client with recorded replies before attempting broader firmware reimplementation.
10. Reproduce the powered-aux failure while recording routing and state. That connects protocol findings to the original symptom.

The Bluetooth controller skill requires a supplied Ghidra project: "If no project was given, ask the user for one and stop until they provide it."
That requirement applies to its controller-analysis workflow.
It does not prevent ordinary analysis of the newly supplied iOS application.
The application is not the headset firmware.
The later acquisition supplied actual firmware and a project for one extracted Xtensa module.
That module is not yet identified as a Bluetooth controller, so controller-specific recovery remains premature.

## Verification

Run `python3 docs/research/crusher-plyr-720/verify_evidence.py` from the PairFree repository.
The script finds `skullcandy-hq-apple-silicon` beside this repository, or at `$SKULLCANDY_HQ_ROOT`, and the iOS app at `$RUNNER_APP`.
The `firmware/` folder is git-ignored, so a clean clone lacks it. In that case the script skips those checks, lists them, and exits with status 3.
At creation, all 1,169 source hashes and 291 citation ranges passed.
The analytical checksum example passed too.
Further checks passed for four app binaries, four packages, four decoded bodies, 32 extracted ELF objects, and 140 schema ranges.
These checks establish source integrity and valid references. They do not establish hardware support.
