# Aux route downstream of detection

This batch continues `../aux-events/` past the route request.
It reads the Master `v1.0.0.35` image statically and reads headset RAM live.
The result: the MCU (the Airoha application core) reports the aux route as started, running, unmuted, and at maximum level.
Therefore the silence comes from a stage that the MCU state does not show.

The live reads were taken on 2026-11-11, while aux and Bluetooth were connected and the user reported silent YouTube playback.
All live reads are the documented read-only relay query (`0x0D01` wrapping READ_ADDRESS `0x1680`).
No writes, NVKEY changes, or AT commands were sent.

## Route record states

The common manager at `0x0824716C` drives each route record (0x44 bytes, base `0x042479B8`).
Byte `+0x24` holds the record state. Function `0x08246BE4` writes it and logs the old and new value.

| State | Set by | Meaning supported by code |
|---|---|---|
| 0 | `0x0824714E` | Released |
| 1 | `0x08246E98` | Opened (configuration callback ran, transmitter allocated) |
| 3 | `0x0824706C` | Start requested |
| 4 | manager, start-complete event (`+4` == 0) after `0x08246D4C` | Running |
| 5 | `0x08247104` | Stop requested |

The transmitter table starts at `0x0423F72C`, with 0x54 bytes per entry.
Record byte `+0x36` selects the entry. Stop and gain apply act only when the entry state is 3, so state 3 means running.

## Gain and mute

Function `0x08246D4C` applies gain to a running record.

1. If record byte `+0x13` is nonzero, it sends both gains as zero. So `+0x13` is a mute flag.
2. Otherwise it sends `+0x10` and `+0x11` as the two gains, and passes `+0x12`.
3. It sends them through `0x0822824C`, which forwards only when the transmitter state is 3.

Aux initialization sets both gains from `0x0821E5D4()`, which returns byte `0x0423F34B`.
The level handler clamps steps to that value, so it is the maximum level (inferred from the clamp).

## Output arbiter and the I2C devices

Aux start `0x082455A4(1)` calls `0x0824D6D8(2)`. That function sets vote byte 2 of `0x0420F4D8[0..3]`.
The arbiter `0x0824D664` finds the lowest set vote index.

- Lowest index 2, or no vote set: `0x0824D428(2,1)` sets bit 2 of the mask at `0x0420F4C4`.
- Lowest index 0, 1, or 3: `0x0824D428(2,0)` clears bit 2.

`0x0824D428` then sends `02 01 <mask hi> <mask lo>` to the bus device described at `0x0420F4C8`.
The bus driver `0x081ACB44` accepts ports 0 to 3. Descriptor byte `+6` is the port and `+7` is the device address.

The image talks to two devices on port 0:

| Address | Descriptor | Protocol | Functions |
|---|---|---|---|
| `0x58` | `0x0420F4C8` | Packets: `02 01` set mask, `02 02` read status, 6-byte version read | `0x0824D428`, `0x0824D3CC`, `0x0824D31C`, `0x0824D4FC` |
| `0x11` | `0x0420F4B4` | Register writes: init of 175 + 17 (reg, value) pairs, NVKEY `0xF5FD` config | `0x0824D02A`, `0x0824CF2C`, `0x0824D278` |

The part numbers of both devices are unknown. `0x11` is the Crusher bass driver (see below).

## Live values during silent playback

| Address | Bytes | Interpretation |
|---|---|---|
| `0x04247684` | `00 01 01 00` | `0x04247685`=1 (helper path), `0x04247686`=1 (jack detected) |
| `0x0420F43C` | `05 01 1E 01` | Requested path 1, level 30, start gate 1 |
| `0x042479C8` | `1E 1E 64 00` | `line_in` gains 30/30, `+0x12`=100, mute 0 |
| `0x042479DC` | `04 00 00 00` | `line_in` state 4 (running) |
| `0x04247A0C` | `1E 1E 64 00` | `line_out` gains 30/30, mute 0 |
| `0x04247A20` | `04 00 00 00` | `line_out` state 4 (running) |
| `0x0423F828` | `03 05 00 00` | Transmitter 3 running, DSP stream 5 |
| `0x0423F87C` | `03 06 00 00` | Transmitter 4 running, DSP stream 6 |
| `0x0423F348` | `0D 0F 0F 1E` | Maximum level byte `0x0423F34B` = 30 |
| `0x0420F4D8` | `00 00 01 01` | Votes 2 (aux) and 3 set; aux wins |
| `0x0420F4C4` | `07 00 ..` | Mask `0x0007` |
| `0x0420F4B4..C3` | `e8 3d 22 04`, `00 04 00 11`, … | Device `0x11`, port 0 |
| `0x0420F4C8..D7` | `d0 3c 22 04`, `00 04 00 58`, … | Device `0x58`, port 0 |

The first nine rows come from `../live/during-youtube/`. The rest are in `live/`.

## What this establishes

1. Detection works (verified earlier).
2. The route request, both route records, both transmitters, the gain, and the mute flag all report a running, audible configuration.
3. The arbiter picked aux, and the mask device received a request with bit 2 set (assuming the transfer succeeded; no failure event was observed).

So the fault is in a stage that these RAM fields do not report:

- the analog input or ADC (signal never digitized),
- the DSP processing of streams 5 and 6,
- the external devices `0x11` or `0x58` (for example, a failed or wrong init, or a switch state),
- or the final analog output stage.

Bit 2 is also set when no vote is set, so `0x0007` does not prove an aux-specific switch position.

## Chip `0x11`: the Crusher bass driver

Chip `0x11` drives Crusher sensory bass (the haptic bass transducers).
The evidence is naming, so this identity is a strong inference, not a datasheet match:

- The firmware timer for its 0–100 ramped level is named `CRUSHER_VOL` (`0x082FF426`).
- The iOS app has `RaceCommandCrusherEqVolumeSet`, `RaceCommandCrusherEqVolumeGet`, and `AT.CRUSHER=level,`.
- The firmware logs `allow_bt_crusher:%d` (`0x080F21D4`).

Its part number is still unknown. The table below covers its control interface. See `chip11-driver.c` and `chip11-sites.lst`.

| Register or field | Function | Behavior |
|---|---|---|
| reg `0x45` | `0x0824CFE0` | Argument 0 writes `0x80` (run). Argument 1 writes `0` (standby). |
| reg `0x2C` | `0x0824D106` | Gain. Level below 5 writes `0x80`. Otherwise it writes `table[(level-4)/5]` from `0x04247C3C`. |
| reg `0x27` | `0x0824D278` | Mode. 0 writes `0x20`, and 1 writes `0x30`. Cached at `0x04247C50`, saved to NVKEY `0xF673`. |
| gain table | `0x0824CFF0` | 20 bytes from NVKEY `0xF5FD`. If the read fails, it uses the defaults at `0x082FF432`. |
| init | `0x0824D02A` | Writes reg `0x45`=0, then 175 pairs (`0x082FF447`), reg `0x45`=`0x80`, then 17 pairs (`0x082FF5A5`). |
| boot | `0x0824CEE0` | Runs init, then sets standby, then restores the reg `0x27` mode. |
| level ramp | `0x0824CC5C`, `0x0824CBE0` | Target `0x0420F4B1`, current `0x0420F4B0`. If the gap exceeds 49, it steps by 20 per `CRUSHER_VOL` tick. |

RACE commands `0x2CD0` to `0x2CD9` (handler `0x0824C864`) control this chip.
They get and set the level, write 105-byte EQ presets `0x21` to `0x24`, select a preset, and set the reg `0x27` mode.

Live values were read during the same session:

| Address | Bytes | Interpretation |
|---|---|---|
| `0x0420F4B0` | `41 41 00 00` | Current and target level 65, so reg `0x2C` = `0x14` |
| `0x0420F4A0` | `01 ..` | Crusher level gate set |
| `0x04247C14` | `01 ..` | Flag that a later event clears before standby. So 1 means run state (inferred). |
| `0x04247C34` | `04 0A 00 00` | Preset byte `0x04247C36` = 0 |
| `0x04247C3C..4F` | defaults | Gain table equals the flash defaults |
| `0x04247C50` | `01 ..` | Mode 1 (reg `0x27` = `0x30`) |

No aux function calls a `0x11` function.
The cached state shows Crusher running at level 65. Therefore chip `0x11` does not explain the aux silence, unless its I2C writes fail.
These are cached MCU values. They are not readbacks of the chip registers.

## Chip `0x58`: a companion 8051 MCU

Chip `0x58` is a small microcontroller with its own firmware.
The Master keeps that firmware in flash at `0x087EC000` (0x1600 bytes). This region is outside the DFU body.
At boot, `0x0824DB30` reads the MCU version. If the version is not 5, the Master sends `01 01` and reflashes the MCU (`0x0824D9CC`).

`dump_ram.swift` read the region over one BLE connection with READ_ADDRESS. This was read-only.
The result is `mcu58/mcu58-flash-087ec000.bin`, SHA-256 `6f5c2c5016b075b4a3625e1da994557e38581e604d7e6bdf18294a315715c361`.
The Ghidra project `mcu58/ghidra/MCU58.gpr` uses the 8051 language. The listing is `mcu58/mcu58.lst`.

The code is 8051. It matches the Nuvoton N76E003/MS51 family (inferred), for these reasons:

- It makes timed-access writes to SFR `0xC7`.
- It uses SFR page select `0x91`.
- Its I2C interrupt sits at vector `0x33`.

It sets its own I2C address register to `0xB0`, which is 7-bit `0x58`. That confirms this is the same device.

| MCU detail | Evidence |
|---|---|
| Mask command `02 01 hi lo` | Handler `0x0FAA`: low-byte bit 0 → `P0.4`, bit 1 → `P1.5`, bit 2 → `P0.5` |
| Status command `02 02` | Replies with version bytes and pin state: `P1.7` (input) bit 3, `P0.5` bit 2, `P1.5` bit 1, `P0.4` bit 0 |
| Boot pin state | `0x117B`: `P0.4` low, `P0.5` high, `P1.5` low, `P3.0` low; `P1.7` input |
| Other outputs | `P1.2`, `P1.1`, `P1.0`, `P0.0`, `P0.1`, `P0.3` push-pull. These are the N76E003 PWM0–PWM5 pins, probably lighting (inferred). |

The Master drives the three mask bits as follows:

| When | Function or event | Bit 0 (`P0.4`) | Bit 1 (`P1.5`) | Bit 2 (`P0.5`) |
|---|---|---|---|---|
| MCU reset | MCU `0x117B` | 0 | 0 | 1 |
| 600 ms after power-on | module 1 event `0xA5` | 1 | 1 | 0 |
| Power-off path | `0x08239754` | 0 | 0 | 1 |
| Aux wins, or no vote set | arbiter → `0x0824D628` | unchanged | unchanged | 1 |
| Another source wins | arbiter → `0x0824D5F0` | unchanged | unchanged | 0 |
| Live, aux plugged in | `0x0420F4C4` | 1 | 1 | 1 |

What this suggests (moderate confidence, inferred, with no schematic):

1. Bit 2 (`P0.5`) is high whenever the headset is off or the MCU has just reset. Aux plays correctly in that state.
2. So bit 2 probably selects the passive aux path.
3. Bits 0 and 1 are probably enables that are on only while the headset is powered.
4. With aux plugged in and the headset on, all three bits are on (`0x0007`). This combination appears neither at boot nor at power-off.

What the pins physically switch is unverified.

The Master accepts RACE ids `0x0000` to `0x0003` through handler `0x0824C114` (table at `0x082EFDE8`).
Id `0x0002`, sub 0, sets bit 2 to (value == 0). This is a reversible way to test bit 2 while aux plays. It writes device state, so it needs the user's approval.

### Bit 2 test result (2026-11-11)

The user approved this test. Aux and Bluetooth were connected, and music played to External Headphones.

1. RACE `0x0002`, sub 0, value 1, sent through the relay. The reply was status 0, and the mask changed from `0x0007` to `0x0003`.
2. The user reported that aux was still silent.
3. RACE `0x0002`, sub 0, value 0. The reply was status 0, and the mask changed back to `0x0007`.

So clearing bit 2 (`P0.5`) alone does not bring aux sound back.
This assumes the I2C write reached the MCU. The pin itself was not read back.
Bits 0 and 1 were not tested. Raw frames are in `live/bit2/`.

## Listening test (2026-11-11)

The test file was 20 s of 60 Hz pulses (0.5 s on, 0.5 s off), then 10 s of 440 Hz tone.
The Crusher dial was at max. The firmware level read 100 (`0x0420F4B0` = `64 64`).

| Run | Mac output, volume | User result |
|---|---|---|
| Aux | External Headphones, 50% | No pulses, no tone |
| Bluetooth control, aux still plugged in | CRUSHER PLYR 720 XBOX, 50% | Pulses felt, tone heard |

During the Bluetooth run, the votes stayed `00 00 01 01`, and `line_in` stayed in state 4 (`live/bt-control/`).

This means:

1. The speakers, the output amplifier, the Crusher chain, and the DSP output mix all work while the headset is powered on.
2. The aux vote and mask do not block Bluetooth output.
3. Therefore the aux signal is lost before it joins the mix. The possible places are the analog input switching, the ADC/AFE input configuration, or DSP line-in streams 5 and 6.
4. The route gain (30/30), the route mute byte, and the speaker output stage are ruled out as the cause.

This assumes that aux audio would drive Crusher the same way Bluetooth audio does. The tone result does not depend on that assumption.

Correction (later the same day): a second gain stage does mute aux. See the next section.

## Line-in gain: the game/chat mix ratio (2026-11-11)

The firmware mutes the aux stream on purpose, because the saved game/chat mix ratio is 0.
I found this statically and confirmed the values live with read-only queries.

### How the mix sets two gains

1. `0x08221C08(type, idx)` clamps `idx` to 10 and looks it up in a gain table at `0x082FC05C`.
   The table holds gains in units of 0.01 dB: −10000, −2000, −1397, −1045, −795, −602, −443, −309, −193, −91, 0.
   So index 0 is −100 dB (silence) and index 10 is 0 dB (full level).
2. For type 7 (line-in), it writes the gain to `0x0423F364`. Then `0x08221B80` copies it to `0x0423F360` and posts module 3 event `0x92`.
   For type 1 or 4 (Bluetooth, inferred), it writes the gain to `0x0423F35C`.
3. A stream-gain function near `0x08221900` adds `0x0423F360` to the stream gain that it computes. So this is a gain offset for line-in (inferred from the code; the DSP side is not traced).
4. The mix ratio is one byte in the range 0..20 (`0x0420F35C`). The firmware sets line-in to index = ratio and Bluetooth to index = 20 − ratio.
   - Ratio 0: line-in −100 dB, Bluetooth 0 dB.
   - Ratio 10: both 0 dB.
   - Ratio 20: line-in 0 dB, Bluetooth −100 dB.

### Who sets the ratio

- RACE `0x2C82` config `0x000B` (handler `0x0823F3E4`) posts group 1 event `0x4C` with one byte. Event `0x4C` in dispatcher `0x0824A870` sets the ratio and both gains. Values 20, 10, and 0 also call `0x08243C84`, `0x08243DE0`, and `0x08243CD4` (probably prompts; not traced).
- The Skullcandy app's RACE schema (`command_race.xml`) names this command `SET_GAME_CHAT_MIX_RATIO`, and `GET_GAME_CHAT_MIX_RATIO` is `0x2C83` config `0x000B`. `../../../../skullcandy/MODELS.md` lists the `gameChatMix` feature for both PLYR 720 models.
- Key events `0x211` and `0x210` (handler near `0x0823CC7C`) step the ratio up and down. Which physical control sends them is not traced.
- NVKEY `0xF601` stores the ratio. Boot code (`0x0824571E`) reads it and sets the line-in gain; if the read fails, it uses 10 (0 dB). Writes happen at `0x08238DD0` and `0x08239116`. Therefore the ratio survives power cycles.

### Live values (read-only)

| Item | Address or query | Value | Meaning |
| --- | --- | --- | --- |
| Mix ratio (app getter) | RACE `0x2C83` `000B` | 0 | Full Bluetooth side |
| Mix ratio byte | `0x0420F35C` | 0 | Same |
| Saved ratio | NVKEY `0xF601` | `00` | Restored at every boot |
| Boot copy | `0x0420F440` | 0 | Same |
| Line-in gain | `0x0423F360`, `0x0423F364` | `0xD8F0` (−10000) | −100 dB |
| Bluetooth gain | `0x0423F35C` | 0 | 0 dB |
| Line-in transmitter | `0x0423F828` | state 3, stream 5, `07 04`, 48000 Hz | Running |
| Line-in audio resource | slot 8, `0x0423E950` | `0x03000000`, type 7 | Granted to `line_in` |

This means:

1. The aux route is open, running, and holds its audio resource.
2. But its gain is −100 dB, because the saved mix ratio is 0.
3. Bluetooth is at 0 dB at the same ratio, which matches the listening tests.
4. When the headset is off, aux plays. This is probably because the analog path then bypasses the firmware gain (inferred; no schematic).

What would verify it: set the ratio to 10 with `SET_GAME_CHAT_MIX_RATIO` (or the app's game/chat mix control), then play aux. This writes NVKEY `0xF601`. Setting the ratio back to 0 reverses it.

### Fix test result (2026-11-11)

With user approval, `mix_test.sh 10` sent `SET_GAME_CHAT_MIX_RATIO` with value 10 (RACE `0x2C82` `000B`, inner frame `05 5A 05 00 82 2C 0B 00 0A`).

1. The headset replied with status 0.
2. The ratio getter returned 0 before and 10 after.
3. The gain words `0x0423F35C`, `0x0423F360`, and `0x0423F364` all read 0 afterward, so Bluetooth and line-in are both at 0 dB.
4. The user then heard aux audio with the headset powered on.

Therefore the root cause is confirmed: the saved game/chat mix ratio of 0 set the line-in gain to −100 dB.
Captures are in `live/mix/`.

### Power-cycle check (2026-11-11)

The user set the ratio to 20 with `mix_test.sh 20` (status 0; the getter went from 10 to 20), turned the headset off and on, and heard aux again.
Then `verify_mix.sh after-cycle` read the state without writing anything:

| Item | Address or query | Value after the power cycle |
| --- | --- | --- |
| Saved ratio | NVKEY `0xF601` | `0x14` (20) |
| Ratio getter | RACE `0x2C83` `000B` | 20 |
| Ratio byte | `0x0420F35C` | 20 |
| Boot copy | `0x0420F440` | 20 |
| Getter cache | `0x0424754E` | 20 |
| Bluetooth gain | `0x0423F35C` | 0 (0 dB) |
| Line-in gain | `0x0423F360`, `0x0423F364` | 0 (0 dB) |

This means:

1. The ratio is written to NVKEY `0xF601` and read back at boot, as the static analysis predicted.
2. A line-in index of 20 is clamped to 10, so the line-in gain is 0 dB.
3. The NVKEY reply layout is `0C 0A <status> <id> <length> <data>`. So the earlier reply ending in `01 00 00` did mean a stored value of 0.

One result does not match the model. At ratio 20, Bluetooth should get index 20 − 20 = 0 (−100 dB). But the Master word `0x0423F35C` stays at 0 dB.
The `20 − ratio` step runs in the event `0x93` handler (`0x0823CE36`). The setter reaches it through `0x0823E550(1, 0x93, …)`, which may forward the event elsewhere, for example to the Slave chip. This is not traced.

### Bluetooth listening test at ratio 20 (2026-11-11)

The Mac output was "CRUSHER PLYR 720 XBOX" at 50%, and `bass-test.wav` played over Bluetooth (`afplay` exit 0).
During playback, `verify_mix.sh bt-ratio20` read ratio 20 and 0 dB for all three gain words.
The user felt the pulses and heard the tone.

Therefore ratio 20 does not mute Bluetooth on this headset, and aux and Bluetooth both play at full level.
The `20 − ratio` step for Bluetooth has no audible effect here. Why is not traced.
In practice, only the line-in side of the mix matters: any ratio of 10 or more gives aux 0 dB, and a ratio below 10 lowers aux.

## Unverified and open

- The meaning of mask bits 0, 1, and 2 and of vote index 3 (no direct caller found by the BL scan).
- Whether the I2C transfers to `0x58` and `0x11` succeed at runtime. Failures post module 1 events `0xAC` and `0xBC`; these were not observed.
- The factory command `AT+EAUDIO=AUDIO_HQA_PURE_LINEIN_PLAYBACK_OPEN` (string `0x082F71D8`) may open a direct line-in playback path. Its handler is not traced, and running it would change device state.
- The DSP-side use of `0x0423F360` and the physical control behind key events `0x210`/`0x211` are not traced.
- Why the saved ratio is 0 is unknown. A user action, the app, or a firmware default during an update are all possible.

## Reproduction

- Ghidra project: `ghidra/Downstream-35.gpr`, a copy of `../aux-events/ghidra/Aux-Events-35.gpr`.
- Export script: `scripts/ExportMixed.java` (function addresses, or `r:START:END` for a linear-sweep listing).
- Exports: `gain-and-votes.c`, `arbiter-callers.c`, `vote-sites.lst`, `bus-device.c`, `ext-chip-driver.c`.
- Line-in gain exports: `linein-hal.c`, `route-open-start.c`, `linein-res-callbacks.c`, `transmitter-init.c`, `linein-gain.c`, `linein-gain-at.c`, `gain-callers.lst`, `mix-handler.lst`, `event-dispatch.c`, `mix-poster.lst`, `race-mix-handler.c`, `nvkey-f601.lst`.
- Mix scripts: `mix_test.sh <0..20>` (writes the ratio; approved test) and `verify_mix.sh <label>` (read only).
- Line-in live reads: `live/linein/`. `dump_ram.swift`, `query_ram.swift nvkey:F601`, and `query_ram.swift app-conf:000B` are read-only.
- Live reads: `read_arbiter.sh` and `read_addrs.sh <hex addresses>` call `query_ram.swift`.
  Run them from a terminal that has Bluetooth permission. A process without it is killed by TCC (macOS privacy control).
