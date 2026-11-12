# Bluetooth query for the powered aux fault

Date: 2026-11-11.

A read-only Bluetooth query now observes the Master chip's jack-detection byte.
During the user's aux unplug/replug test, the byte changed `1 → 0 → 1`.
The tested device identifies as `S6PXW-T964`, with firmware `v1.0.0.35`.
This establishes detection of the cable. It does not establish successful audio routing or analog signal processing.

## The verified query

Send this complete RACE frame to the verified write characteristic:

```text
05 5A 10 00 01 0D 00 02 05 5A 08 00 80 16 00 00 84 76 24 04
```

The packet contains two commands:

1. The outer command `0x0D01` forwards a packet through relay ID `0x0200`.
2. The inner command `0x1680` reads four bytes at Master address `0x04247684`.

The four-byte result includes the observed jack-detection byte at `0x04247686`.
That byte is the third byte in the returned block.
This address was checked against the downloaded SG200X Master `.35` firmware and verified through live reads.
Do not transfer it to other models or firmware versions without checking their layout.

The RAM-read format was cross-checked against the original researchers' [RACE Toolkit](https://github.com/auracast-research/race-toolkit/blob/main/librace/packets.py).
The iOS SDK's `command_race.xml` independently defines the relay wrapper.
The successful live captures establish that both commands work on this headset.
No authentication bypass, firmware update, memory write, or headset setting change was attempted.

## Verified Bluetooth transport

| Role | UUID |
| --- | --- |
| Service | `5052494D-2DAB-0341-6972-6F6861424C45` |
| Write characteristic | `43484152-2DAB-3241-6972-6F6861424C45` |
| Notification characteristic | `43484152-2DAB-3141-6972-6F6861424C45` |

The live name for this service is `BLE-CRUSHER PLYR 720`.
The connection used the one matching peripheral already connected through macOS.
`services.json` records the live properties. `standard-values.json` records the model and full firmware version.
Serial and system-identity characteristics were not read.

Subscribe to notifications before sending a query.
A transport write acknowledgment only confirms receipt by Bluetooth. It does not establish a firmware response.

For the verified query, the relay first returns:

```text
05 5B 03 00 01 0D 00
```

The following notification contains the actual Master reply.
An example with aux inserted is:

```text
05 5D 15 00 01 0D 00 02 05 5B 0D 00 80 16 00 00 00 84 76 24 04 00 01 01 00
```

The outer command remains `0x0D01`. Its type is `0x5D` for the relayed notification.
After relay ID `00 02`, the inner frame starts with `05 5B` and command `0x1680`.
Its payload contains status, two reserved bytes, the echoed address, and four data bytes.
The observed status is zero.
The observed address is `0x04247684`.
The inserted result is `00 01 01 00`.
The removed result is `00 01 00 00`.

## Controlled physical test

The user kept Bluetooth connected and removed aux at the headphone end for approximately ten seconds.
Removing the headphone end directly changes the headset's jack state.
It leaves the Mac's jack occupied, which avoids changing the Mac's physical output route during the test.

The monitor recorded 32 matched Master reads.
The state sequence was:

| Stage | Four-byte block | Byte at `0x04247686` |
| --- | --- | ---: |
| Before unplugging | `00 01 01 00` | 1 |
| During removal | `00 01 00 00` | 0 |
| After reinsertion | `00 01 01 00` | 1 |

The first zero sample and the return-to-one sample were approximately 11.9 seconds apart.
The physical cable transitions were reported by the user, not independently timestamped.
Therefore, the recording does not measure exact detection latency.
The owned monitor was stopped after the completed cycle.

`master-aux-cycle-monitor.log` preserves the timestamped notifications.
`master-aux-cycle-summary.json` preserves every matched result and the three transitions.
`relay-line-input-ram-response.json` preserves the initial standalone query.

## Why the relay matters

A direct `GET_BUILD_VERSION` query returned `ab156x_evb` and `IoT_SDK_for_BT_Audio_V5.2.0.AB156x`.
The same query through relay `0x0200` returned `ab158x_evb` and `IoT_SDK_for_BT_Audio_V5.2.0.AB158x`.
This verifies different destinations for direct and relayed reads.
It agrees with the two processor families named in the firmware packages.

A direct read of address `0x04247684` returned `FD B2 0D AB`.
Those bytes belong to the direct endpoint's address space. They must not be interpreted using the Master layout.
The relayed read returned the meaningful Master state block and tracked the user's cable movement.
The earlier general-state monitor therefore did not test the Master jack byte.

## Firmware matching and static evidence

The `.35` packages were not listed in the supplied app's manifest.
Their URLs were obtained by substituting `.35` into the manifest-derived `.34` filename pattern.
Both public downloads succeeded and passed their outer SHA-256 check.
Their bodies fully decompressed as LZMA streams. Nothing was flashed.

| Image | Decoded SHA-256 |
| --- | --- |
| SG200X Master `.35` | `7e30d46c9f52637cac42bf87e6b16f2614815601699caa5004c209807aba1cf6` |
| SG200X Slave `.35` | `275a8380461aea6616192be3d1118b7df17217c596f256aadfb49a9fe21f0af3` |

The candidate runtime mapping for the Master MCU region is `file offset + 0x0806B000`.
The Slave mapping is `file offset + 0x08015000`.
These mappings are supported by command-string references and coherent selected-function decompilation.
They are not complete maps of every embedded processor region.

The Master `.35` line-input getter is at candidate address `0x08241A04`.
It reads configuration byte `0x04247685` and selects one of two input helpers.
The neighboring detection byte is `0x04247686`.
The exported `.35` code and pointer evidence appear in `current-firmware/handlers.c` and `line-in-mapping.json`.
The live physical test validates the detection byte more directly than the earlier inferred field labels.

The Slave's relay handler at candidate address `0x080F7F50` handles commands `0x0D00` and `0x0D01`.
The nested packet is checked by `0x080F7CFC` before forwarding.
The code requires the supplied nested byte count to equal the inner length plus four.
`current-firmware/slave-relay.c` preserves the decompilation.
The SDK evidence and the firmware evidence are saved separately in `relay-native-evidence.json` and `relay-firmware-evidence.json`.
The live replies establish the actual Master destination, rather than assuming it from an SDK name.

## Earlier query results and discarded interpretations

- `GET_MMI_STATE`, request `05 5A 02 00 80 2C`, works and returns state `03`.
- Its earlier monitor received 32 identical replies. It is not established as a physical jack query.
- `GET_MMI_ENUM` module `0x000A` received a transport acknowledgment but no matching reply within four seconds.
- The SDK maps that module to an audio-path enum, but its zero/one labels were not recovered.
- `sendCmd_GetAudioPath` in the EQ-save workflow reads saved NVKEY data. It is not established as a live input detector.
- AB1585 uses NVKEY `0xE401` in that workflow. Other SDK families use `0xF233`.
- The indirect call at SDK address `0x38CFBC` invokes a task listener. Its arguments are not wire opcodes.
- Firmware `0x110F` dispatches callbacks between chips. Its internal fields are not ordinary jack-query commands.

No unidentified control commands, module scans, NVKEY writes, or RAM writes were sent.
The large SDK decompilation exceeded REA's 330-second startup deadline.
That failure is saved as `sdk-decompile-timeout.json`. Targeted firmware imports succeeded separately.

## Interpretation and next debugging step

The headset's software observes aux removal and reinsertion.
A completely missing jack-detection event therefore does not explain the silent powered-on test by itself.
The next investigation should follow how the Master handles the detected state and enables the analog audio route.
Gain, source selection, mute, ADC operation, and the powered analog path remain candidates.
These candidates are not established causes yet.

The command-finding task is complete for the tested `.35` headset: Bluetooth can now read the actual jack-detection byte.
The audio fault remains unresolved.

## Reproducible evidence checks

Run `python3 docs/research/crusher-plyr-720/bluetooth-query/verify_captures.py`.
The saved frame lengths, nested replies, state transitions, and both `.35` package hashes pass.
The baseline verifier passes for 1,164 source files and excludes five Finder metadata files.
Their original hashes remain in the inventory because Finder metadata can change independently of source code.
