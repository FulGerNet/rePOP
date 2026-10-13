# How the recompilation works

Both targets go through the same pipeline and the same runtime. What differs
per target is small and lives in `src/<target>/`:

| File | Contents |
| --- | --- |
| `target.h` | Entry point, Direct3D fence layout, diagnostic addresses, each with the XBE address it came from |
| `seed_functions.json` | Functions that are only reached through stored pointers |
| `gen/` | The lifted C (generated; ignored by Git) |

## Pipeline

`tools/recomp.ps1 -Target <id>` runs, from `third_party/xboxrecomp`:

1. `tools.xbe_parser`: sections, kernel imports, entry point.
2. `tools.disasm --seed-functions`: disassembly and function detection.
3. `tools.func_id`, `tools.abi_analysis`: library classification, calling
   conventions.
4. `tools.recomp --all --split 250`: one C function per x86 function,
   operating on global guest registers and a guest stack in mapped memory.
5. CMake + MSVC x64: `bin/sot-<id>.exe`.

The executable still reads the user's `default.xbe` at start-up for its data
sections (`.rdata`, `.data`, library tables). Its code sections are not
executed.

### Seeds

The detector follows calls, prologues and padding, so a routine whose address
only ever sits in a table gets no dispatch entry and the game logs
`[ICALL] Failed to resolve VA`. `tools/seed-scan.py` finds such routines:

- an address stored as an instruction immediate or as an aligned dword in a
  data-bearing section,
- lying in an executable section,
- either outside every detected function, or directly after a decoded
  `ret`/`nop`/`int3`,
- that the disassembler's own probe reads as a function body.

Codec data (`BINKDATA`, `WMADEC`, `DOLBY`) may only name code of its own
library: those sections are full of numbers that look like addresses.

A wrong seed is worse than a missing one. In the demo, `0x00190004` (a number
in a WMA table that follows the constant `0xCC000403` in code) cut the
compiled AI function `0x0018FFA0` in two; the halves no longer shared a frame,
`esi` came back wrong from `0x000F8AF0` and the game died in `0x0001C9B0`,
three calls away. Hence:

- regenerate with `recomp.ps1 -Seeds`, which rebuilds the unseeded baseline;
- add targets a run reported with `recomp.ps1 -Observed logs\<target>-err.txt`;
- when callee-saved registers go wrong, build with `-AbiCheck` and run with
  `run.ps1 -Abi`: the innermost `[ABI] ... esp(epilogue never ran)` line
  before the fault names the function.

## Runtime

`third_party/xboxrecomp/src`, with the reSOT changes marked `RE-SoT`:

**Kernel** (`kernel/`): the XBE's kernel imports on Win32; threads, timers,
DPCs, interrupts. The vertical blank is a QPC-based 60 Hz clock on a 1 ms
timer thread (`RECOMP_VBLANK`).

**Pushbuffer** (`kernel/nv2a_pb_scan.c`, `nv2a_pb_exec.c`): the lifted XDK
Direct3D writes NV2A commands into a ring and advances `DMA_PUT`. The executor
walks from one PUT to the next following JUMPs, as the GPU does, including the
first submission (the D3D initialisation stream), and decodes methods into a
state block. Vertex programs run on the CPU, once per distinct vertex of a
batch.

**Rasteriser** (`kernel/nv2a_hw_d3d11.inc`, `RECOMP_HW=1`): transformed
vertices are drawn by Direct3D 11. One pixel shader interprets the
register-combiner control words (a port of `nv2a_combiner.c`), so no shader is
generated per state; check it with `python tools/check-hlsl.py`. Surfaces live
on the host GPU keyed by guest offset and width, and a texture stage that
names a surface samples that render target. Other textures are decoded from
guest memory by the software path's decoder and cached with a per-frame
fingerprint. `RECOMP_HW_SCALE` sets the internal resolution multiple
(default 2); `RECOMP_HW_NOCULL=1` ignores cull state. Without `RECOMP_HW` the
original software rasteriser runs (about 1 fps).

Not implemented: stencil, cube maps (face 0 only), depth textures (shadow
maps), bump-env and dot-product texture modes, points and lines. Nothing is
copied back to guest memory, so code that reads the framebuffer sees zeros.

**Movies** (`video/fb_present.c`): Bink presents through the NV2A PVIDEO
overlay as YUY2, not through the 3D pipeline. `BUFFER` stays set while the
overlay is on; a write to `STOP` turns it off and clears `BUFFER`.

**Input** (`usb/`, `input/`): XAPI is linked into the XBE and drives the OHCI
controller at `0xFED00000` itself, so the pad is a USB device model
(`RECOMP_USB`), fed from XInput or the keyboard (`RECOMP_KEYBOARD`), or from a
script (`RECOMP_PAD_SCRIPT=<ms>:<button>[:<hold ms>],...`).

**Lifter** (`tools/recomp/lifter.py`): `pushfd`/`popfd`/`cpuid` are
translated; the CPU reported is a Pentium III (MMX, SSE, no SSE2).

## Bringing up a target

What the demo needed, in the order it was needed. The retail build will need
the same answers from its own XBE.

1. **Seeds.** Run, collect `[ICALL] Failed to resolve VA`, feed them back
   with `-Observed`, repeat until none are left.
2. **D3D fence.** XDK Direct3D ends every fence with
   `BACK_END_WRITE_SEMAPHORE_RELEASE` (method `0x1D70`) and its BlockOnTime
   spins until the GPU-written dword reaches the fence time. Find the routine
   that emits `0x00041D70` into the pushbuffer; the device pointer global it
   loads, the offset it reads the next time from and the offset of the pointer
   it compares against go into `target.h`
   (`RESOT_D3D_DEVICE_GLOBAL`, `_FENCE_ISSUED`, `_FENCE_GPU_PTR`).
   Demo: `sub_0029D1E0` issues, `sub_0029D290` waits at `0x0029D3C0`, device
   global `0x002A8498`, offsets `+0x2C` / `+0x30`.
3. **Stalls.** `run.ps1 -Watchdog N` dumps the main thread's guest stack after
   N seconds; the return addresses name the wait.
4. **Rendering.** `RECOMP_FRAME_TRACE=<flag file>` logs every batch of the
   frame after the file appears. The periodic `[GPU]` report lists unhandled
   NV2A methods by frequency.

`python tools/xbe-dis.py <va> <length> [target]` disassembles any range of a
target's XBE.

## Xbox demo: facts established

| Item | Evidence |
| --- | --- |
| Entry / game main | XBE entry `0x0027FC6C` starts the XAPI thread; game main `0x000110B0` |
| Main loop | `0x00012D00` calls `0x00012A60` (pending transition) then `0x00012AF0` (frame) |
| Compiled AI table | `.data` `0x00340610`: 1,782 `(key, function)` pairs, all detected functions |
| AI dispatch | `0x000F8670` tail-jumps to a script's compiled function when `[ecx+0x10]` is set |
| D3D fences | see step 2 above |
| Overlay disable | `0x002A5E80`: if `BUFFER != 0`, `STOP = 1`, spin until `BUFFER == 0` |
| CPU probe | `0x0028A326`: toggles `EFLAGS.ID`, reads CPUID leaf 1 bit 23 (MMX) |
| Pushbuffer use | Everything is drawn through vertex programs; the glow chain renders 640x480 → 320x240 → 160x120 → 80x60 into `0x806C0000`.. |
| Movies | `video/*.int` are Bink streams, shown as 640x480 (or 640x448) YUY2 overlays |

Older hand analysis of this XBE (start-up chain, frame loop, menu AI records)
is kept in `docs/history/` and `research/xbox-demo/GhidraProjects/`. Those
notes predate the recompilation; paths in them refer to earlier project
layouts.

## Xbox retail: facts established

| Item | Evidence |
| --- | --- |
| Executable | `default.xbe`, 4,603,904 bytes, built 2003-10-20, 34 sections, title `0x5553001D` |
| Entry | `0x00335753` |
| Libraries beyond the demo's | `XONLINE`, `XNET` (Xbox Live), `XON_RD` |
| Data | `prince.bf` (365 MB), `shaders.bin`, `VIDEO/` (84 files), `SOUND/`, `MEDIA/`; `POP1/` and `POP2/` hold the two bonus games' own XBEs |

Everything else is still to be established; see `docs/VALIDATION.md` for how
far the retail build currently gets.
