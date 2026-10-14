# How the recompilation works

Both targets go through the same pipeline and the same runtime. What differs
per target is small and lives in `source/<target>/`:

| File | Contents |
| --- | --- |
| `target.h` | Entry point, Direct3D fence layout, diagnostic addresses, each with the XBE address it came from |
| `seed_functions.json` | Functions that are only reached through stored pointers |
| `target_hooks.c` | Entry hooks (`sub_XXXXXXXX_enter`, run before that routine's first instruction), with this XBE's addresses; handed to the lifter and built into this target only |
| `gen/` | The lifted C (generated; ignored by Git) |

## Pipeline

`tools/recomp.ps1 -Target <id>` runs, from `port/third_party/xboxrecomp`:

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
- directly after a decoded `ret`, `nop` or `int3`, or at the start of a
  section (a routine starts where the one before it ended; not after a `jmp`,
  which is also what precedes every case block of a switch),
- that the disassembler's own probe reads as a function body.

A prebuilt library's data (`BINK*`, `WMADEC`, `DOLBY`, `D3D`, `D3DX`, `XGRPH`,
`DSOUND`, `XPP`) may only name code of its own library: those sections are
full of numbers that look like addresses, and a library cannot point into a
title that did not exist when it was built. The detector's own pass over
instruction immediates (`tools/disasm/functions.py`) applies the same
"starts after a boundary" rule.

A wrong seed is worse than a missing one. In the demo, `0x00190004` (a number
in a WMA table that follows the constant `0xCC000403` in code) cut the
compiled AI function `0x0018FFA0` in two; the halves no longer shared a frame,
`esi` came back wrong from `0x000F8AF0` and the game died in `0x0001C9B0`,
three calls away. Hence:

A second way a bad entry shows: the lifter writes every jump target it has no
function for into `gen/recomp_stubs_unresolved.c` as an empty stub. Each line
there is code that is silently skipped if it is ever reached. In the demo the
constants `0x000E0003` and `0x000E0006` and the table value `0x000E001A` cut
the sound engine's `sub_000DFFD0` into pieces, its `jne 0xE0010` became such a
stub, and the stream reader returned whatever was on the stack.

- regenerate with `recomp.ps1 -Seeds`, which rebuilds the unseeded baseline;
- add targets a run reported with `recomp.ps1 -Observed logs\<target>-err.txt`;
- when callee-saved registers go wrong, build with `-AbiCheck` and run with
  `run.ps1 -Abi`: the innermost `[ABI] ... esp(epilogue never ran)` line
  before the fault names the function.

## Runtime

`port/third_party/xboxrecomp/src`, with the reSOT changes marked `RE-SoT`:

**Kernel** (`kernel/`): the XBE's kernel imports on Win32; threads, timers,
DPCs, interrupts. The vertical blank is a QPC-based 60 Hz clock on a 1 ms
timer thread (`RECOMP_VBLANK`). `PsCreateSystemThreadEx` honours
`CreateSuspended`: Bink creates its two background threads suspended and only
then stores the mutex and event they wait on (demo `sub_002AE730`).

**Pushbuffer** (`kernel/nv2a_pb_scan.c`, `nv2a_pb_exec.c`): the lifted XDK
Direct3D writes NV2A commands into a ring and advances `DMA_PUT`. The executor
walks from one PUT to the next following JUMPs, as the GPU does, including the
first submission (the D3D initialisation stream), and decodes methods into a
state block. It runs on its own thread; the title's thread waits for it
where XDK Direct3D waits for the GPU.

**Rasteriser** (`kernel/nv2a_hw_d3d11.inc`, `RECOMP_HW=1`): Direct3D 11.
Each distinct NV2A vertex program is translated to an HLSL vertex shader once
(`nv2a_vsh_emit_hlsl` in `nv2a_vsh_interp.c`) and fed the batch's raw
attributes and the 192 program constants; a batch that cannot go that way
(more than eight enabled attributes, a program that writes constants) is
transformed by the interpreter instead (`RECOMP_HW_CPU_VSH=1` forces that).
Vertices and indices are appended to ring buffers. One pixel shader interprets
the register-combiner control words (a port of `nv2a_combiner.c`), so no pixel
shader is generated per state; check all of it with
`python tools/check-hlsl.py`. Surfaces live
on the host GPU keyed by guest offset and width, and a texture stage that
names a surface samples that render target. Other textures are decoded from
guest memory by the software path's decoder and cached with a per-frame
fingerprint. `RECOMP_HW_SCALE` sets the internal resolution multiple
(default 2) of the display surface and anything as wide; smaller render
targets (the glow chain, shadow buffers) stay at the guest's resolution
(`RECOMP_HW_FX_SCALE`, default 1), because their filters are fixed tap
offsets in guest texels: rendered at 2x, the demo's glow blur covered half
the area and left sharp copies of the scene about ten pixels off (measured by
cross-correlating the glow layer with the scene, before: ~(+25, +19) host
pixels in the composite; after: ~0.1). Compiled shaders are cached in
`bin\shadercache` (`RECOMP_HW_SHADER_CACHE=<dir>`, `0` for none), so a vertex
program's first use costs no compile after the first run.
`RECOMP_HW_NOCULL=1` ignores cull state. Without `RECOMP_HW` the
original software rasteriser runs (about 1 fps).

`RECOMP_HW_ASPECT=<w:h>` (`run.ps1 -Aspect 16:9`) widens the picture Hor+:
more scene at the sides, the same at the top and bottom, the 2D untouched.
The executables are built with `RESOT_ASPECT=16:9` (CMake cache variable),
which `port/windows/src/main.c` puts in `RECOMP_HW_ASPECT` at start-up when
the variable is not already set; an empty `RESOT_ASPECT` builds 4:3.

- The target's hook on the routine the finished projection is handed to
  (`sub_000EF140`, from `0x000EF5AA`) divides its x scale by the widening;
  the camera's field of view is left alone, because Jade places its in-camera
  2D from it.
- Culling: Jade's `CAM_Engine_ComputePlans` (demo `sub_0008A500`) builds the
  side planes of the frustum from half the field of view. Entry hooks on the
  cosine and sine it calls (`sub_000319B0` returning to `0x0008A525`,
  `sub_00031A00` returning to `0x0008A54C`) hand it `atan(widen * tan h)`
  instead, so objects in the new side strips are not culled. Some sets were
  only modelled for 4:3 (the demo's menu garden ends at the lower left) and
  show the clear colour there.
- Host surfaces get the extra width; the guest still renders 640 pixels
  across, now covering the wider field.
- On the full 640x480 display surface only, a vertex with `w == 1` (the
  title's 2D: HUD, menus, text) is drawn at its 4:3 size around the centre,
  unless it lies on the surface's edge (fades, post-processing quads). Render
  targets of other sizes (the glow chain) are left alone.
- The window keeps the picture's shape; movies stay 4:3 in the middle.
  Alt+Enter or F11 switches between the window and a borderless window over
  the monitor (a maximised window keeps its title bar and so gets bars).

Not implemented: stencil, cube maps (face 0 only), depth textures (shadow
maps), bump-env and dot-product texture modes, points and lines. Nothing is
copied back to guest memory, so code that reads the framebuffer sees zeros.

**Movies** (`video/fb_present.c`): Bink presents through the NV2A PVIDEO
overlay as YUY2, not through the 3D pipeline. `BUFFER` stays set while the
overlay is on; a write to `STOP` turns it off and clears `BUFFER`.

**Audio** (`apu/`): XDK DirectSound is linked into the XBE and drives the MCPX
APU's registers itself, so the device is xemu's voice processor behind a
register trap (`RECOMP_AC97_READY=1`), mixed down and played through XAudio2
one 256-sample frame at a time. The two DSPs are not emulated: effects are
bypassed, the speaker and crosstalk mixbins are folded to stereo and the
effect sends dropped, and the command DirectSound posts to the global
processor is
acknowledged where the title polls for it (`RECOMP_APU_DSP_ACK=gp+<offset>`,
relative to the first page of the DSP's scratch memory). Every ten seconds
`[APU] output` reports how many frames were not silent and the peak sample;
`RECOMP_APU_WAV=<file>` records what is played.

Contiguous memory and the rest of guest RAM are separate host memory, and
`MmGetPhysicalAddress` answers with the address itself outside the
contiguous window, so a heap address and a contiguous physical address can
be the same number. DirectSound's calls (the target's `RESOT_DSOUND_CODE_*`
range) therefore get heap addresses as `0x0B000000 + va`, which the APU maps
back (`xbox_SetApuPhysicalCallers`). Without it every voice whose buffer sat in
the heap played white noise once the contiguous arena had grown past the
heap's start.

**Input** (`usb/`, `input/`): XAPI is linked into the XBE and drives the OHCI
controller at `0xFED00000` itself. The emulated USB pad behind it
(`RECOMP_USB`, `run.ps1 -UsbPad`) failed to enumerate in most starts, so the
demo's `target_hooks.c` replaces XAPI's input entry points instead
(`XGetDevices`, `XGetDeviceChanges`, `XInputOpen`, `XInputClose`,
`XInputGetCapabilities`, `XInputGetState`, `XInputSetState`; addresses in the
file): port 0 always has a gamepad, read by `xbox_HlePadState` from the first
XInput pad, else a WinMM joystick, with the keyboard and mouse buttons merged
(`RECOMP_KEYBOARD=0` turns those off), and the title's rumble goes to the
XInput pad. A script (`RECOMP_PAD_SCRIPT=<ms>:<button>[:<hold ms>],...`,
timed from the title's first poll) or `RECOMP_PAD_LIVE` still applies on
top. With `RECOMP_USB=1` the original routines run (they are kept as
`sub_X_gen`).

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

Diagnostics added by the host (`port/windows/src/main.c`), all off unless set:

| Variable | Effect |
| --- | --- |
| `RESOT_THREAD_DUMP_SECS=n` | every n seconds, the host call chain of every thread; lifted routines appear as `sub_XXXXXXXX`, so a deadlock shows both sides |
| `RESOT_PROFILE_MS=n` | samples the two busiest threads every n ms and reports, every 10 s, the routines the samples fell in |
| `RESOT_TRACE_ICALLS=va,...` | logs each call that reaches those routines through a pointer, with `ecx`, the first arguments and the returned `eax` |
| `RECOMP_SYNC_TRACE=1` | mutex, event, thread-resume and unbounded-wait calls with thread id and guest caller |
| `RECOMP_OVL_DUMP=prefix` | raw YUY2 of the first 400 distinct movie frames |
| `RESOT_LOG_UNBUFFERED=1` | write every diagnostic line at once (default: buffered, flushed four times a second) |
| `RECOMP_HW_GLOW_DUMP=prefix` | with the frame trace: the display surface before the first batch that samples another render target into it and at the flip, and every smaller render target, as BMPs at host resolution |
| `RECOMP_HW_VSH_DUMP=all` | every vertex program's HLSL translation, headed `[VSH key]`; the frame trace's `gpu batch` lines name the key, the first vertex's `d0` and fog (without `all`: only translations that fail to compile) |
| `RECOMP_NV2A_ACK_SPIN=1` | the NV2A busy-bit thread spins (`Sleep(0)`) as before instead of sleeping until kicked |

The frame trace (`RECOMP_FRAME_TRACE`) also gives, per batch on the hardware
path, the pixels it left on the host GPU (an occlusion query), its screen
bounding box, w, fog and diffuse-alpha ranges, cull, alpha-test, colour-mask
and fog state, and each texture stage's filter.

**CPU use.** XDK Direct3D's KickOff (demo `sub_0029D0C0`, `sub_0029D170`)
sets the write-combine flush bit at NV `+0x100410` and spins until the GPU
clears it; here the runtime's executor thread clears it between segments,
after Present, so the title thread spun for most of every frame, and the
executor thread itself looped on `Sleep(0)`. The demo's `target_hooks.c`
defines both routines by hand, the same stores in the same order, with the
wait in `xbox_Nv2aWaitClear` (sleeps on an event the executor thread sets
when it clears a bit) and `xbox_Nv2aKick` after the new DMA_PUT; the executor
thread sleeps until kicked or for 1 ms.

A title's own assertion text (`[GUEST] ...ASSERT...`) is followed by the
recent indirect-call targets and the return addresses on the guest stack.

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
| Movies | `video/*.int` are Bink streams, shown as 640x480 (or 640x448) YUY2 overlays, two surfaces alternating |
| Bink IDCT | `sub_002B5790`; `movsx ebp, bp` at `0x002B583C` sign-extends the row-6 coefficient |
| Bink threads | `sub_002AE730` creates them suspended (thread routine `0x002AE6C0`); `sub_002AEA90` shuts both down and waits for their handles |
| Projection | `sub_000EF340` and `sub_0008A820` take `f = 1/tan(fov/2)` from camera `+0x0C` and a screen ratio from `.data` `0x0033A3C0` (`1.0, 1.0, 0.75, 0.5625`), which also decides letterboxing |
| DirectSound physical addresses | `MmGetPhysicalAddress` thunk `0x0031C8D4`, called from DSOUND at `0x002EEC2B`, `0x002F209A`, `0x002F27FF`, `0x002F2845`, `0x002F28DB`, `0x002F32E8` |
| DirectSound DSP command | `sub_002ED590` posts to `[scratch + 0x810]` and polls it |
| Sound stream read | DARE (`RXBox.cpp`): `sub_000CC620` calls the source's vtable slot `+0x38` and asserts on a status of 3 or above 6 |

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
