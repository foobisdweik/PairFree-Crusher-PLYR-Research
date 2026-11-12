# Skullcandy Crusher PLYR 720 — reverse-engineering handoff

This file is a resume point for a new agent. The prior work ran as a Codex thread
with sub-agents. All the raw transcript, tool logs, injected skill docs, and search
dumps are dropped. Everything you need to continue is below. The actual deliverables
live in on-disk repositories, so read those files directly when you need detail.

Dates use PST. "Verified" means checked against live hardware or exact bytes in this
work. "Unverified" means the prior work explicitly did not confirm it. Keep that
distinction; do not promote an unverified lead to a fact.

---

## 1. RESUME HERE (the live task)

The active task, set by the user at 2026-11-11 15:28, is one sentence:

> **Trace the downstream audio route.**

Context the user gave: the headset accepts audio over four input paths. They are the
3.5mm aux port, USB over the headset's USB-C port, the 2.4 GHz dongle, and Bluetooth.
You are tracing what the headset does with audio *after* it detects an aux cable,
because detection already works but no sound comes out.

Last live state, at 2026-11-11 15:37 (where the thread stops):

1. A sub-agent finished a static firmware trace of the aux-detection handlers. It
   saved the result to
   `docs/research/crusher-plyr-720/audio-route/aux-events/README.md` in the primary
   repo (see Section 3). Read that file first.
2. The user was running a live check. They played YouTube audio in Chrome
   (PID `58630`) through the macOS output device named "External Headphones", with
   **both aux and Bluetooth connected**. They reported: still no sound.

So the next move is to continue the downstream-route trace from the saved static
evidence, and correlate it with that live silent-playback test. The static trace
reached the route handler and the requested-path change. It did **not** prove that
analog samples reach the speakers. That gap is the open question.

---

## 2. The problem and the overall goal

**Original symptom.** A Skullcandy Crusher PLYR 720 headset is connected to the user's
MacBook by the 3.5mm aux cable. When the headset is **powered on**, macOS shows the
"External Headphones" output but plays no sound. When the headset is **powered off**,
the same aux cable plays sound correctly.

**What that proves.** The Mac port and the cable can carry audible sound, because
powered-off playback works. Therefore the fault is inside the headset's powered audio
path, not in the Mac or the cable.

**Broader goal (set 2026-11-11 10:21).** Consolidate the communication-protocol data
for the PLYR 720. The stated end goal is firmware decryption or re-implementation, so
the headset's powered audio behavior can be debugged.

A second, parallel goal is a THX driver fix for the Windows desktop app. That work is
secondary right now. It is summarized in Section 7.

---

## 3. Environment and where the real work lives

- **Host:** the user's MacBook Pro running macOS. Assume macOS for any hypothetical
  command, not Windows or Linux. The user prefers a GUI tool over a CLI when a GUI
  option exists.
- **Primary repo (firmware/protocol research):**
  `/Users/iphoobis/Developer/PairFree-Crusher-PLYR-Research`
  - Research docs: `docs/research/crusher-plyr-720/`
    - `README.md` — index.
    - `bluetooth-query/README.md` — the **verified** live Bluetooth query and captures
      for the aux-detection state byte (see Section 5).
    - `audio-route/aux-events/README.md` — the latest static trace of aux-detection
      handlers (see Section 6). Supporting source files sit beside it, for example
      `seed-functions.c`, `event-consumer.c`, `downstream-functions.c`,
      `route-config-callbacks.c`.
    - `audio-route/selection/README.md` — route selection notes.
  - Evidence check script: `docs/research/crusher-plyr-720/verify_evidence.py`. It
    re-hashes files and citation ranges. Its last run passed. Run it after you add or
    change evidence files.
  - Ghidra projects (under `ghidra/`): `Aux-Events-35.gpr` (the current downstream
    trace) and `SG200X-35-Queries` (the query analysis; do not reopen it from the
    aux-events batch).
- **Second repo (desktop app port):**
  `/Users/iphoobis/Developer/skullcandy-hq-apple-silicon`
- **THX diagnostic artifacts:**
  `/Volumes/Projects/Skullcandy/analysis/thx-diagnostic-20261110/`
  (subfolders `parallels/`, `crossover/`, `parallel-work/bridge/`,
  `parallel-work/opus-port/`). **Do not read the 211 MB `rea-thx.json` bundle**; it is
  too large and was ruled out of scope.
- **iOS app binary (useful protocol source):**
  `/Applications/Runner.app/Wrapper/Runner.app/Runner`. It bundles
  `AirohaUnifyLibrary.framework/command_race.xml`, which defines **140 named RACE
  command schemas** with typed fields and timeouts. These are SDK schemas, not
  captured PLYR exchanges, so treat them as candidate commands, not proof.
- **Tools available locally:** Ghidra, an "REA" reverse-engineering CLI, and the
  Claude Code CLI at `/Users/iphoobis/.local/bin/claude`. A separate Claude Opus 4.5
  session (`claude-opus-4-5-20251101`, high effort) was launched for the THX
  reconstruction; its workspace is `parallel-work/opus-port/` and a `REPORT.md` there
  may now exist. Skills the prior work used: `bt-re-controller`,
  `recursive-decomposition`, `reverse-engineer-anything`.

---

## 4. Device and firmware facts

- **Controller:** Airoha SG200X (an Airoha Bluetooth audio SoC). Control is
  BLE-based. There are two product IDs for the PLYR variants: `0x29` and `0x2A`.
- **Dongle USB identity:** `VID_34F0&PID_5320` (`34f0:5320`).
- **THX APO hardware id (Windows):** `SWC\VEN_THX&AID_SKDY_CRUSHER_SG200XAPO4`. The
  THX service device id is `SWC\VEN_THX&SID_SKDY_CRUSHER_SG200XSVC`.
- **Firmware version in use:** `v1.0.0.35`. The headset reports the exact text
  `v1.0.0.35 SG200X` in a `HEADSET_FIRMWARE_INFO` event.
- **Firmware DFU blobs and SHA-256 hashes (as shipped):**
  - `SG200X_Dongle_DFU_v1.0.0.35.bin` — `3322c0e0d1170aaf9528a5c0fc063e6975a0a41bd2ebbab8ed7d04891aaa903c`
  - `SG200X_Master_Headset_DFU_v1.0.0.35.bin` — `ba3f162982554375d93d563727aa567281e60c9ebdfa2770243d80d192e4ccf8`
  - `SG200X_Slave_Headset_DFU_v1.0.0.35.bin` — `53629f02bccfbd3eb80ac5317b52cbe7fcc1dc6c83b38d4dd2d2a5d48f7bfeb4`
- **Decoded Master image (the one being reverse-engineered):**
  - SHA-256 `7e30d46c9f52637cac42bf87e6b16f2614815601699caa5004c209807aba1cf6`.
  - Address mapping for the selected MCU code:
    `runtime address = file offset + 0x0806B000`. This mapping does **not** cover every
    region of the image.

---

## 5. Control protocol (Airoha RACE) and the one verified live query

- **RACE** is Airoha's vendor command format. It rides on channel id `05`. The helper
  framing seen in the iOS/Java SDK is: `05 5A` requests, `05 5B` replies, `05 5D`
  notifications, a u16 little-endian length, then a command id. A tunnel helper adds a
  private subheader to carry another command (for example Master-to-Slave relay). On
  USB it rides a private HID vendor page `0xFF13`.
- **Verified live query (the key result so far).** Over the existing BLE connection,
  the prior work read a single RAM byte to get the aux jack-detection state. The read
  used a RACE memory-read (inner opcode `0x1680`) wrapped in a relay frame (opcode
  `0x0D01`, type `0x5d`). The exact bytes and the full capture set are in
  `docs/research/crusher-plyr-720/bluetooth-query/README.md`.
  - The detection-state byte is at RAM address `0x04247686`.
  - During the live cable test the byte changed: `1` when inserted, `0` when removed,
    `1` when reinserted.
  - **Conclusion (verified): the headset detects the aux cable correctly.** The fault
    is therefore downstream of detection — a routing or gain problem, not a detection
    problem.
- **BLE UUIDs (SDK defaults — unverified as the actual PLYR values).** The native SDK
  constructor sets these, and it allows overrides, so they are leads, not confirmed:
  - Service: `5052494D-2DAB-0341-6972-6F6861424C45`
  - Write characteristic: `43484152-2DAB-3241-6972-6F6861424C45`
  - Notify characteristic: `43484152-2DAB-3141-6972-6F6861424C45`
  - The iOS app also contains another UUID family beginning
    `00001100-D102-11E1-9B23-00025B00A5A5`, roles unverified.
- The app contains builders for THX controls, SG200 EQ settings, `FotaPackage`, CRC
  confirmation, aux, and encryption-related strings. These strings do **not** by
  themselves establish command bytes or prove firmware encryption.

---

## 6. Static trace of the aux route (latest result, just completed)

Source file: `docs/research/crusher-plyr-720/audio-route/aux-events/README.md`.
Scope: this is a static trace of Master firmware `v1.0.0.35`. It follows the detection
event into a route handler and shows the requested audio path change. It does **not**
prove that analog samples reach the headphones.

Key addresses and roles found:

- **Detection event:** module `0x27`, event `0x7D`, sent through dispatcher
  `0x0823181C`. Four producer functions can raise it, including `0x082416A4` (the
  `AT+LINE_IN_DET` override, which writes byte `0x04247686` and dispatches it).
- **Event consumer:** `0x082456A0` handles module `0x27` / event `0x7D`. On each
  event it:
  1. requests two bytes from NVKEY `0xF323`;
  2. if the read fails it uses `-1`, so a failed read does **not** trip the
     zero-value guard (the parent live query returned status `FC` for `0xF323`, i.e. a
     failed/absent read, so this guard is not the fault);
  3. updates the requested audio path via `0x082454BC(value, 0)`;
  4. sends a notification via `0x0823FFC8(3, state, 1)`.
- **Requested-path byte:** `0x082454BC` writes byte `0x0420F43D`. With a `0` second
  argument it changes RAM only, without writing NVKEY `0xF323`.
- **Route slots** created by `0x082456A0` through allocator `0x08247800`:

  | Field                      | Slot 0        | Slot 1        |
  | -------------------------- | ------------- | ------------- |
  | Object address             | `0x042479B8`  | `0x042479FC`  |
  | Name                       | `line_in`     | `line_out`    |
  | Config callback (`+4`)     | `0x082453DC`  | `0x0824554C`  |

  Callback `0x082453DC` supplies the input configuration for `line_in`. The numeric
  fields' meanings need the manager/backend definitions, which are not yet recovered.
  The names show the vendor's intended roles, not successful audio flow.

**Open thread from the earlier synthesis (unresolved).** These five items distinguish
a detection problem from a routing/gain problem, and detection is already ruled out:

1. Identify the two getter helpers (`0x081aa6c8`, `0x081be964`) and their config
   inputs (candidate config byte `0x04247685`, selector via pointer `0x082ffb7e`).
2. Trace the writers of the detection byte `0x04247686` and the override path.
3. Recover the Bluetooth transport for the app's audio-path command, or for an
   ordinary audio-path query. The iOS app has four references to `sendCmd_GetAudioPath`
   still to inspect. See `ios-aux-evidence.json`.
4. Read the live detected state while aux is inserted, then compare it with the
   silent playback. (The detection byte is done; the routing/gain state is not.)
5. **Trace routing and gain decisions after successful detection.** This is the
   current task.

---

## 7. Parallel workstream — THX driver on ARM64 (secondary, mostly diagnosed)

The user runs the Windows desktop app **Skull-HQ** two ways: under CrossOver on macOS,
and inside a Parallels Windows 11 ARM64 VM. Skull-HQ exposes features the iOS/Android
apps lack. The THX Spatial Audio driver fails to install/attach in both. The user
requires a real THX driver installation and interface, **not** a workaround that skips
it.

Diagnosed blockers (verified):

- **CrossOver blocker:** the THX installer's WiX custom action (`wixca.dll`,
  `CustomActions.LogWrite`) throws "The method or operation is not implemented".
  The root cause is a missing capability in CrossOver's Wine `setupapi.dll`. Real
  Windows provides it, so this blocker is CrossOver-specific.
- **Parallels blocker:** the THX APO (audio processing object) ships x64-only. All ten
  THX INF files declare `NTamd64`, and SetupAPI reports `No matching drivers found in
  single INF`, ending in `FAILURE(0x00000103)`. The Windows audio host (`audiodg`)
  runs **native ARM64**, and a native ARM64 process cannot directly load an x64 DLL.
  Windows Update offered zero drivers. The four Skullcandy audio interfaces stay bound
  to Microsoft's `wdma_usb.inf`.

Separate but useful: **the firmware update itself works under CrossOver.** The app only
shows a false failure screen plus a one-time version-check error, because the headset
reports the non-semver text `v1.0.0.35 SG200X` to `firmware.service.js:76`
(`compare-versions`), which rejects it. See
`/Volumes/Projects/Skullcandy/analysis/thx-diagnostic-...` and the "firmware update
under CrossOver" notes.

Three repair options the user framed (keep this split and priority):

1. **ARM64 audio component bridged to an x64 THX process** — recommended first. The
   real `CThxApo4SfxHost` object creates successfully in an x64 process (`S_OK`), but
   an empty `Initialize` returns `E_INVALIDARG` (`0x80070057`) and processes no audio.
   Next gate: recover the valid APO init context and demonstrate real processing
   before designing transport. The audio callback must never block. Evidence in
   `parallel-work/bridge/`.
2. **A full x64 Windows VM** — last resort. Parallels' x86 emulator currently lacks USB
   and sound.
3. **Rebuild only the minimal THX component for ARM64** — assigned to the separate
   Claude Opus 4.5 session in `parallel-work/opus-port/`. Check its `REPORT.md` and
   `events.jsonl` before resuming this branch.

User direction on scheduling: pursue option 1 and option 3 concurrently; defer option
2 unless both fail.

---

## 8. Standing constraints and user rules

- Do not accept a THX workaround that avoids a successful driver installation and
  interface.
- Do not change hardware, headset settings, firmware, or the shared project unless the
  task needs it. The prior work changed none of these. State clearly whenever an action
  would change device or VM state, and prefer a reversible check first.
- Do not read the 211 MB `rea-thx.json` bundle.
- Keep option 2 (x64 emulated Windows) as a last resort.
- Prefer a GUI tool when one exists. Prefer diffs and targeted edits over full-file
  rewrites. Use terse conventional-commit messages. Assume macOS for any hypothetical
  command.
- When a step needs the user to act on the physical headset (plug, unplug, power,
  play audio), ask one clear question and wait, because you cannot touch the hardware.
