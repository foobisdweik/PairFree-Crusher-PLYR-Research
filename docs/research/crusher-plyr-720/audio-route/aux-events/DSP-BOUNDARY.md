# Limit of the DSP evidence

The saved artifacts do not name scenario `7` or endpoint values `4` and `3`.
The numeric configuration is verified, but its physical endpoint names remain unresolved.

## Bounded checks

- The existing Master `.34` extraction contains 17 ELF objects, totaling 589,216 bytes.
- Their section tables contain neither `SHT_SYMTAB` nor `SHT_DYNSYM`.
- Therefore those objects supply no symbol table that can name the scenario or endpoints.
- The Master `.35` image contains one printable `scenario` match, at file offset `0x86DE8`.
- That match names `middleware/airoha/dspfw/port/chip/ab158x/src/dsp_scenario.c`.
- The image contains no printable matches for `endpoint`, `analog`, `AFE`, `SOURCE_TYPE`, or `SINK_TYPE`.
- Its line-in labels identify commands and route names. They do not define the missing numeric enums.

This was a bounded inspection of existing objects and readable metadata.
It was not a new DSP disassembly pass.
Missing symbols or strings do not prove that the relevant processing code is absent.
The extracted objects belong to `.34`, so they cannot independently establish `.35` execution behavior.

## What the current observations establish

The parent investigation reports manager slots 0 and 1 in state `4`.
It reports their transmitter indices as `3` and `4`, with transmitter state `3`.
Those observations establish the reported software states at the sampled addresses.
The separate manager and backend trace must establish what each state means and how it changes.

The callback at `0x082453DC` supplies two endpoint variants and the concrete numeric configuration.
It writes `48000` at configuration offset `+8`.
Its route is named `line_in`, and the other object is named `line_out`.
That supports the intended aux route, but it does not measure audio samples.

Even a verified start acknowledgment would not, by itself, prove all of the following:

1. The analog signal reaches the selected input.
2. The input converts that signal into nonzero audio samples.
3. The DSP processes those samples and sends them to the intended destination.
4. The output gain and mute state allow those samples to reach the headphones.

No sample counter, level meter, PCM buffer, or analog measurement was inspected in this batch.
Therefore the existing states do not distinguish silence at the input from silence later in the route.
The next evidence must identify the endpoint enums or observe samples at a defined processing boundary.
