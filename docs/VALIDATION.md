# Validation log

What was actually run and seen, newest first. Every entry names the command,
the observation and what was **not** checked. Nothing here has been compared
against a console or an emulator yet.

Machine for all entries: Windows 11, i7-9700K, Direct3D feature level 11_0,
MSVC 19.51 (Visual Studio 2026), x64 Release.

## 2026-10-16: embedded guest image and additional player options

`tools/recomp.ps1 -Target xbox-demo -BuildOnly` passed with the original
image embedded as RCDATA 101 (`logs/embedded-demo-build.txt`). PE resource
inspection found 3,526,656 bytes, byte-for-byte equal to the supported demo
input and with its expected SHA-256. CMake verifies the source hash, tracks
the input for reconfiguration and writes the resource description only in
the ignored build tree. The host verifies the embedded copy before mapping;
external data-folder validation no longer checks for `default.xbe`.
Packaging no longer copies that build input.

The options integration harness passed again after adding persistent
Post-processing On/Off, resolution-row relocation and the absolute
EXE-neighbour INI assertion. Turning VSync Off with an active FPS cap now
also explains that the selected cap remains in effect. Runtime graphics,
no-external-XBE and audio observations are recorded below as they complete.

Final builds: `tools/recomp.ps1 -Target xbox-demo -BuildOnly` and the retail
equivalent both passed, recorded in `logs/final-player-demo-build.txt` and
`logs/final-player-retail-build.txt`. Both EXEs were copied to their existing
`bin/portable/<target>/` folders. The user requested no further tests.

The no-XBE demo folder booted its embedded image and Direct3D 11. A separate
35-second run with FPS None/VSync Off logged actual Present interval 0 and
134.8-225.8 FPS. The 55-second demo Off run logged `[POSTFX] final glow
composite skipped`; the retail classifier was independently established
from its own frame-3615 trace, but its subsequent Off execution was not run.
Retail's ordered/deferred paths therefore remain opt-in; demo defaults are on.

The audio VP previously ignored its computed pitch ratio. Both copies now
retain per-voice fractional resampling state, distinguish underrun from EOF
and mix the final output block before completing the voice.
`python tools/test-audio-resampler.py` passed 2/2 native tests, covering
12/24/44.1/48/96 kHz mono/stereo tones, duration, pitch changes, streaming,
loops and resets (`logs/audio-resampler-tests.txt`). Listening to actual
game sound and complete guest streaming integration remain unvalidated.

## 2026-10-15: external game folder and demo shader cache

`tools/recomp.ps1 -Target xbox-demo -BuildOnly` passed after the folder-picker
host change (`logs/folder-picker-demo-build.txt`). The resulting executable
was copied to `bin/chooser-test/selector-demo.exe`, without disc files beside
it. The native folder picker appeared. Selecting `bin/portable/xbox-demo`
started the game; the log recorded that external folder and the supported
XBE loaded. Menu and gameplay were observed. The user authorised closing
this test process before performance measurements. Invalid-folder retry,
Cancel and a retail external-folder launch were not exercised in this test.

The demo cache's default relative path was `bin/shadercache`, which could
fail when launched from an EXE directory without a nested `bin`. The default
is now `shadercache` beside the EXE, with a diagnostic if creation fails.
Controlled 25-second cold/warm runs (`logs/demo-perf-cold.txt` and
`logs/demo-perf-warm.txt`) recorded 18 compiled programs taking 1,297.05 ms
in total, then 18 disk hits and no compilation for those programs. The
largest startup compilation was 591.75 ms; a later vertex program cost
150.89 ms. This establishes cache reuse, not elimination of every gameplay
stutter or correctness of simulation timing.

Ordered GPU fences revealed a presentation interaction: some warm runs with
native VSync fell to 30 FPS; without native VSync a short menu run exceeded
100 FPS. The corrected path snapshots the completed picture at the flip,
executes the submission's remaining fences, publishes DMA_GET and only then
waits for the host swap. A second flip flushes any pending snapshot first.
This prevents the timer from acknowledging a fence before vertex arrays have
been consumed, without blocking later fences behind a native VSync wait.

The demo's controlled 90-second run (`logs/demo-ordered-defer-gameplay-clean90.txt`)
held 59.8-60.2 FPS in the menu and 60.0/59.2/58.4 after loading. Loading
intervals were slower (20.2/6.6 FPS) and were dominated by title work.
After separating snapshot from swap, a 50-second repeat
(`logs/demo-ordered-snapshot-unpaused50.txt`) reached the unpaused soldiers'
scene at 59.8/59.6 FPS, then 58.2 with frame tracing. Ordered completion and
deferred swap are now the demo defaults. Diagnostic opt-outs are
`RESOT_ORDERED_FENCES=0` and `RESOT_DEFER_PRESENT=0`; the earlier legacy
comparison flag remains `RESOT_LEGACY_FENCES=1`.

The unpaused before/after post-processing captures are kept locally under
`logs/demo-defer-unpaused-` and `logs/demo-snapshot-unpaused-`. Traced render
target samples selected the current frame's surfaces. The rare distorted
vertex report and complete disappearance of the user's doubled contours
have not been confirmed by a person; a short stable run is not proof that
every visual defect is resolved. Host TSC/system clock agreement likewise
does not by itself validate the title's simulation integrator.

The F6 host panel's integration harness (`build/options-tests/build-test.cmd`)
passed native window events, panel rasterisation, keyboard/mouse and synthetic
joystick remapping, default aliases, input neutralisation, saved reload,
resolution requests and FPS API calls. The updated harness also passed live
VSync preference/reload, independent section collapse and stale resolution
dropdown handling. Rendered top/bottom/collapsed panels were visually checked.
These are host tests; a physical joystick remapping session is still untested.
During a live demo run, changing VSync Off and FPS None produced over 100 FPS;
this confirms the host options affect presentation, not that unbounded
rendering reproduces the console's timing or that the game is fully correct.

## 2026-10-15: portable launch, video skip and F5 panel

Built both targets with `tools/recomp.ps1 -Target <target> -SkipAnalysis`,
then `-BuildOnly` after the final host/overlay edits. MSBuild initially failed
inside the sandbox with FileTracker `E_ACCESSDENIED`; the authorised builds
outside it passed. `python tools/check-hlsl.py` passed seven shader entries
per target, including the panel's alpha-preserving `ps_debug`.
`tools/package.ps1 -Target xbox-demo` and `-Target xbox-retail` prepared
separate folders under `bin/portable/` containing the local user's disc data.
PE imports were inspected: neither executable imports MSVCR/MSVCP/VCRUNTIME
DLLs; the C runtime is statically linked.

The demo portable EXE was launched directly through Windows, with no run
script. Its own log reports the supported XBE loaded and Xbox memory mapped;
the menu and gameplay were observed in window captures. The user confirmed
Space/A video skipping and F5 opening/closing the overlay, then played
through level sections. A fresh portable launch after the final update
showed the narrower 280-pixel panel and `_Start_Demo` in the menu, then
`01_GP01_E3_Long` in the opening in-engine sequence. The updated run logs
also contain two `[VIDEO] skipped movie (Space / A)` events.

The original primary-world lookup returned `None` during gameplay because
the primary remains the synthetic `SuperWorld`. Live read-only inspection
instead resolved the streaming worker's root key `0x0F005353` to world
`0x02CAA090`, BF name `06_GP24_E3_Long`. The reader now uses that path;
primary-merge capture retains menu names before source worlds are freed.

Retail's final build/package passed; this change's retail runtime behavior
has not yet been tested. Software overlay blending, missing-data/revision
dialogs, every individual movie and a complete sequence of scene transitions
were not exhaustively tested. FPS counts guest flips, not simulation speed.

## 2026-10-15: retail speed, user observation

The user reports that retail runs much slower even while its counter reports
60 fps. This is a play observation, not a new scripted benchmark; no command
or timing capture accompanied it. The counter counts flips and does not
validate simulation speed. Retail remains an embryonic bring-up; the earlier
60 fps records must not be read as evidence of correct gameplay speed.

The subsequent controlled baseline (`research/retail-perf-baseline-err.txt`)
rendered the menu at 60 FPS, but the live simulation clock advanced only
0.060 seconds per wall second. A later sample confirmed refresh field
`0x007654A4` was zero, the calibrated timestamps differed by 16,733 us, and
the resulting timestep was nevertheless the game's 1,000-us minimum.
The target-only `_ftol` entry hook now substitutes that measured interval
only for the invalid fixed-step calculation, preserving the original
conversion and downstream limits.

`research/test-retail-timestep.py` compiled the actual lifted timer and
conversion with the hook: ten conversion edge cases, unrelated callers,
valid refresh, raw comparison mode, register/FPU/stack preservation, invalid
refresh, backwards clock, minimum step and float cap passed. Sixty frames
covering 1,000,000 calibrated microseconds produced 1,000,000 simulation
microseconds with the fix, versus 60,000 on the original path.

The fixed 95-second normal-window run reached `0102_Remparts` gameplay
(`research/retail-clock-fixed-95-err.txt`, screenshot
`research/retail-clock-fixed-gameplay.bmp`). With FPS None and VSync Off,
`python research/check-retail-clock.py 2252 10` measured 9.003 wall seconds
and 9.008213 simulation seconds during gameplay, at about 120-140 FPS.
This run predates the final retail ordered-fence port. A later combined
60-FPS/VSync-On run measured 7.003 wall versus 7.015102 simulation seconds
in the menu; its short observation does not validate the complete level.
No full retail playthrough or console comparison has been made.

## 2026-10-15: separate runtime per target

`port/third_party/xboxrecomp` became two complete copies,
`xboxrecomp-demo` (moved with `git mv`) and `xboxrecomp-retail`, identical
at the split except the retail copy's comment on the projected-UI classifier.
CMake now builds one target per tree (`-DRESOT_TARGET`), `recomp.ps1` lifts
with and builds against that target's copy in `build/<target>`, and
`check-hlsl.py` checks both copies. Checks: `python tools/check-hlsl.py` (12
entries ok), `python -m unittest discover -s tools/tests -p
test_seed_scan.py` (3 ok), `recomp.ps1 -Target xbox-demo -BuildOnly` and
`-Target xbox-retail -BuildOnly` (0 errors; each `xbox_kernel.vcxproj`
compiles only its own copy's sources).
Runs: retail 70 s, `-Set @{RECOMP_PAD_SCRIPT='15000:start:400,25000:start:400,35000:a:400,45000:start:400,60000:a:400'}`,
reached the main menu at 60 fps with the widescreen hook logged
(`logs/split-retail-70.bmp`). Demo 60 s, the usual start/A script: first scene
reached, 55-60 fps for four windows, then 21.5 and 6.4 fps with the time in the
title (131.8 ms per frame) during 539 disc reads, a level-section load
(`logs/split-demo-60.bmp`). Not compared with a pre-split run at that moment.
The old single build tree under `build/` (outside `build/<target>`) is no
longer used.

## 2026-10-15: xbox-retail, first build and initialisation defects

Target SHA-256 verified against `tools/recomp.ps1`:
`753C58B191279BF4D1A8B28A936DF36AA222ED566487AB1FBDFCD090E91EE379`.
First pipeline: `python tools/check-hlsl.py` (six entries passed), then
`tools/recomp.ps1 -Target xbox-retail -Seeds`. It generated 14,418/14,418
functions (0 failed), 2,628,530 C lines in 58 source files, and built
`bin/sot-xbox-retail.exe`. The baseline retained 333 unresolved target stubs;
translation success does not establish that those paths are correct.
One C4293 warning came from an unexecuted `if (0)` shift in a decoded
inline-table area; generated sources were not edited.

Initial run: `tools/run.ps1 -Target xbox-retail -Seconds 45 -Watchdog 40
-Windowed -Aspect 4:3 -UsbPad -DumpFrames -Set
@{RESOT_THREAD_DUMP_SECS='10'; RESOT_PROFILE_MS='5';
RECOMP_FB_WINDOW_DUMP_EVERY='60'}`. It read the retail files and initialised
the kernel/APU but drew nothing. Trace: `logs/retail-baseline-boot.txt`.
An 18-second repeat with `RECOMP_SYNC_TRACE=1` is retained in
`logs/retail-sync-boot.txt`.

Cause: retail XAPI GetCurrentThreadId (`0x00331F07`, read at `0x00331F0D`)
reads FS:[0x28] -> KTHREAD+0x12C. The runtime shared that synthetic block
between all threads and did not fill PsCreateSystemThreadEx's ThreadId output.
The loader constructor (`0x00034370`) retained zero as its worker ID; its
thread check (`0x00034410`) therefore misidentified the main thread, which
waited on the same semaphore as its worker (`0x000343D0` / `0x00033050`).
The runtime now gives each TIB a private KTHREAD and publishes the matching
host ID before starting a worker. The synthetic main KTHREAD/Prcb also move
out of fixed addresses inside the retail image and into the guest heap.

After `recomp.ps1 -Target xbox-retail -BuildOnly`, a 35-second/watchdog-30
repeat progressed past that wait, loaded `media/pop4.uix`, the font,
`shaders.bin`, and configured a 640x480 D3D11 surface; it then exited through
HalReturnToFirmware(2), before the first frame. Log:
`logs/retail-thread-id-boot.txt`.

The later exit is a stack-cookie failure in resource loading, not evidence
that the font or shader files are missing. Static analysis found the same
class of bad seed as in the demo: game state constant `0x000E0006` (loaded
at `0x00142DD2`, alongside `0xF00E0006` at `0x00142DE2`) had split
`0x000DFF90`. Its cold path branches back to epilogue `0x000DFFEE`, but the
split build replaced that epilogue with an unresolved stub, stranding the
saved registers. The later cookie check at `0x000D890C` then aborted.
`seed-scan.py` now rejects a static candidate whose enclosing function
branches into it and whose reachable code returns to the earlier body.
Observed targets still use the explicit alias path. Three synthetic
regressions passed with `python -m unittest discover -s tools/tests
-p test_seed_scan.py -v`.

`recomp.ps1 -Target xbox-retail -Observed logs/retail-thread-id-boot.txt`
first recorded three missing XPP targets. The subsequent corrected
`-Seeds` run preserves those observations, produces 315 seeds, excludes
`0x000E0006`, and keeps `0x000DFF90..0x000E0028` together. The retail-only
XAPI and KickOff hooks use independently verified retail addresses.
Runtime verification of this regenerated build is recorded below when run.

### Crash and black screen after the intro movies; widescreen

Run: `tools/run.ps1 -Target xbox-retail -Seconds 90 -Windowed -Aspect 4:3
-Set @{RECOMP_PAD_SCRIPT='15000:start:400,25000:start:400,35000:a:400,45000:start:400'}`.
The movies played, then an access violation: `xbox_ContiguousAlloc` zeroing a
reused block at `0x808EB020`, page `PAGE_READONLY`. A trace of
MmSetAddressProtect showed the title (`0x000D63E1`) marking texture pages
`0x402` (read-only, write-combined); after the movies it frees them and the
guest-heap reclaim handed them back still read-only. The allocator now
restores read/write on a reused block (`xbox_memory_layout.c`, `RE-SoT`).

The next run did not crash but stayed black after the movies. Thread dump
(`RESOT_THREAD_DUMP_SECS=15`): the main thread looped in `sub_000CA420`, which
polls XAPI GetExitCodeThread (`0x00331D1E`) until the movie thread
(`0x000CA320`) is not `STILL_ACTIVE`. That routine reads the ETHREAD from
ObReferenceObjectByHandle (+0x04 SignalState, +0x120 ExitStatus); the
bridge returned a null object. It now returns a per-handle block filled from
the host thread for `PsThreadObjectType` (`kernel_bridge.c`, `RE-SoT`).

After `recomp.ps1 -Target xbox-retail -BuildOnly`, a 150 s run with the pad
script extended to `...,60000:a,75000:a,90000:start,100000:a,110000:a` and
`-SnapshotEvery 10` showed in frame dumps: the movies, the title screen,
profile name entry, "Saving profile", then the letterboxed opening in-engine
scene; renderer 60 fps; APU output not silent. No crash in 150 s. The save
files (SaveMeta, pop2.sav, options.cfg) appeared in
`Assets/xbox-retail/UDATA/5553001d` about 8 s after the A press; the dialog
then stayed up for roughly 40 s more (main thread rendering, no wait in the
thread dump). What ends it was not established.

Widescreen (the demo's fixes): `sub_000CFC10` builds the projection at
`0x007682B0`, copies it to `0x00440C00` and calls `sub_000CD970` (return
`0x000CFE8B`); an entry hook narrows both copies. `sub_002FD810` matches the
demo's CAM_Engine_ComputePlans; the side-plane cosine/sine (`0x000452F0` /
`0x00045340`) get the widened angle. `RESOT_PROJECTED_UI` and the Jade
crash-report globals were added to `target.h`. Full `recomp.ps1 -Target
xbox-retail`: 14,418/14,420 functions (2 by hand), 0 failed; the three entry
hooks are in `gen/`. A 160 s run at the default 16:9 logged the widening
(1.3333x, culling half-angle 0.7854 -> 0.9273) and reached the main menu and
the opening scene; the rescaled dump of the scene
(`logs/retail-widescreen-169.png`) shows natural proportions. Not checked: a
same-frame 4:3/16:9 comparison, the HUD (gameplay not reached). With
`RECOMP_HW_PROJECTED_UI=0` the menu backdrop no longer covers the full width,
so the policy stays on. At 16:9 the "Saving profile" text is wider than its
box with the policy on or off; at 4:3 it fits. Open.

Demo regression after these runtime changes: `tools/run.ps1 -Target xbox-demo
-Seconds 60 -Windowed -SnapshotEvery 10 -Set
@{RECOMP_PAD_SCRIPT='22000:start:800,28000:a:800'}`: first scene fly-by at
60 fps, no crash (`logs/demo-regression-retail-fixes.png`).

Demo regression for the common thread changes:
`tools/run.ps1 -Target xbox-demo -Seconds 40 -Windowed -SnapshotEvery 10
-Set @{RECOMP_PAD_SCRIPT='22000:start:800,28000:a:800'}`. The menu and
first scene's fly-by render; the final renderer report is 60 fps.
Retained log/capture: `logs/demo-thread-identity-check.txt` / `.bmp`.
This does not revalidate the whole demo or retail gameplay/audio.

## 2026-10-15: xbox-demo, Prince in the pause menu and window close

Builds: `python tools/check-hlsl.py` (all six shader entries passed), then
`tools/recomp.ps1 -Target xbox-demo -BuildOnly` (successful), including a
second runtime-only build for explicit Alt+F4 handling. `git diff --check`
passed.

Prince reproduction:

```powershell
.\tools\run.ps1 -Set @{
    RECOMP_KEYBOARD='1'
    RECOMP_PAD_SCRIPT='22000:start:800,28000:a:800,62000:start:800,70000:start:800,78000:start:800,100000:start:800'
    RECOMP_PAD_LIVE='logs\pause-close-live.txt'
    RECOMP_FB_DUMP='logs\pause-prince.bmp'
    RECOMP_FB_WINDOW_DUMP_EVERY='60'
    RECOMP_FRAME_TRACE='logs\pause-prince-trace.flag'
}
```

The pause backdrop draws with depth testing disabled and DEPTH_MASK=1.
The host incorrectly turned that into an ALWAYS depth test plus writes,
putting its z=0.95 in front of the Prince's later alpha-only silhouette
(z approximately 0.97). Depth-disabled draws now leave depth untouched;
the software rasteriser follows the same rule.

Observed: the Prince silhouette appears on the left of the full-width pause
backdrop. A person confirmed it visible. The retained trace's 1158-index
body batch previously passed zero samples; the new trace passes 32,830.
Capture: `logs/pause-prince-verified.bmp` (readback),
`logs/pause-prince-verified.png` (rescaled to 16:9 for viewing), trace:
`logs/pause-prince-verified-trace.txt`.

Window close previously stopped the presentation thread alone, leaving the
lifted title loop, GPU and audio threads alive. WM_CLOSE now exits the game
process, matching the runtime's existing firmware-exit approach. Alt+F4 is
explicitly routed to WM_CLOSE for the borderless window as well.

Checks with `logs/test-window-close.py` (the script selects the framebuffer
window by the exact test process ID and waits on its process handle):

- `python logs/test-window-close.py 11844 --mode close`: the system-menu
  close command SC_CLOSE terminated the in-game process with exit code 0
  in 0.063 s.
- A synthetic WM_SYSKEYDOWN for F4 with Alt context initially failed to
  route through DefWindowProc. After adding the explicit route,
  `python logs/test-window-close.py 10876 --mode alt-f4` terminated the
  final build's fullscreen process with exit code 0 in 0.047 s. The
  `run.ps1` wait also returned; no game process remained.

Not checked: a console comparison of the silhouette, its whole idle
animation, every pause submenu, the software rasteriser at runtime, or
closing during a save. The keyboard close test injected the Windows system
key message; no physical Alt+F4 keypress was observed in this test.

## 2026-10-15: xbox-demo, white sand crescents follow-up

The player reported that the health bar and gold sand pips were corrected,
but the white crescents were still compressed. The preceding entry's visual
check did not establish that the crescents matched the pips.

`logs/ui-final-trace.txt` contains eight crescent batches (two layers per
slot), flat w=1, depth test disabled but depth-write mask=1. Their 32x32
textures occupied 0x80CE3000/0x80CE4000 in this run; these are runtime heap
addresses, not stable XBE constants. Example bounds:
x=195.731..215.891, y=59.0912..85.9713. The gold pips use mask=0.
The HUD classifier incorrectly required mask=0, leaving the crescents out.
It now accepts either mask with depth testing disabled, within the same
flat upper-left HUD bounds; all layers receive the same horizontal transform.

Checks: `python tools/check-hlsl.py` (six entries passed),
`tools/recomp.ps1 -Target xbox-demo -BuildOnly` (successful),
`git diff --check`. A check of the retained trace confirmed all eight
previously excluded crescent batches satisfy the revised region/state rule.
Restarted with `tools/run.ps1 -Set @{RECOMP_KEYBOARD='1';
RECOMP_FB_DUMP='logs\ui-crescents.bmp'; RECOMP_FB_WINDOW_DUMP_EVERY='60'}`.
Not yet checked visually in the new run; no new console comparison.

## 2026-10-15: xbox-demo, pause backdrop and HUD proportions

Build: `python tools/check-hlsl.py` (six entries passed), then
`tools/recomp.ps1 -Target xbox-demo -BuildOnly` (built successfully).
`git diff --check` passed. Only the demo host enables the new
`RECOMP_HW_PROJECTED_UI` policy; retail has not been checked.

Baseline/reproduction:

```powershell
.\tools\run.ps1 -Seconds 158 -SnapshotEvery 5 -Set @{
    RECOMP_PAD_SCRIPT='22000:start:800,28000:a:800,62000:start:800,70000:start:800,78000:start:800,100000:start:800,140000:start:800'
    RECOMP_FRAME_TRACE='logs\ui-trace.flag'
}
```

The flag was created while the pause menu was open. Its flat backdrop layers
arrived at x=80.531..560.531, y=0.531..480.531, w=1: already narrowed by the
Hor+ projection hook. The renderer then narrowed them again, leaving a panel
covering 56.25% of the display width. The new batch classification recognises
the full-height projected layers, including their inner grid vertices, and
expands them to the display width. The corrected pause capture
`logs/ui-pause-after.bmp` covers the whole picture; text and logo retain their
previous layout.

Final interactive run (keyboard and mouse enabled):

```powershell
.\tools\run.ps1 -Set @{
    RECOMP_KEYBOARD='1'
    RECOMP_PAD_LIVE='logs\ui-live-final.txt'
    RECOMP_FB_DUMP='logs\ui-final.bmp'
    RECOMP_FB_WINDOW_DUMP_EVERY='60'
    RECOMP_FRAME_TRACE='logs\ui-trace-final.flag'
}
```

Observed in the final run: gameplay with the health frame/fill and four sand
pips visible. The frame trace shows these as flat upper-left batches, with
no depth test or writes. They now skip the second horizontal compression;
a shared translation keeps their existing left anchor and their pieces
aligned. At 16:9 their width increases by 4/3, height unchanged. A cyan-pixel
mask on the health arc in the 640x480 readbacks measured x=173..280,
y=51..100 before and x=174..317, y=51..100 after (the readbacks resample the
wide display to 640x480). Captures: `logs/ui-hud-visible-before.bmp`,
`logs/ui-hud-after.bmp`; final trace: `logs/ui-final-trace.txt`. PNG copies in
`logs/` rescale these readbacks to 1280x720 for viewing at the display aspect.

Not checked: correspondence to the console, every HUD animation and pause
submenu, other widescreen ratios, or the CPU vertex-program fallback. The
4:3 path is unchanged by the new policy's `widen > 1` guard, but was not run
again for this change. No new audio validation.

## 2026-10-15: xbox-demo, character shadows

Build: `recomp.ps1 -Target xbox-demo -BuildOnly` (`check-hlsl.py`: all ok).

How the demo draws them, from frame traces (`RECOMP_FRAME_TRACE`,
`RECOMP_FRAME_TRACE_METHODS`) in the first level: each character is drawn
again into a 256x256 swizzled R5G6B5 target (`0x0080C000`, `0x0082C000`,
`0x0084C000`, surface format `08080213`), cleared to black, with one
diffuse colour for the batch and no diffuse array (the vertex program copies
`v3` to `oD0`). The floor under it is then drawn with that target as a
projected texture (stage program 1) and blend `ZERO / ONE_MINUS_SRC_COLOR`:
the lighter the silhouette, the darker the floor.

Observed:

- Before: `RECOMP_HW_GLOW_DUMP` showed the silhouettes at 0-1 of 255 on
  black; the traced caster batches had `d0 0 0 0 1`. An attribute with no
  array read 0,0,0,1, not the value the `SET_VERTEX_DATA*` methods set.
- Now the vertex shaders get those values (`cur[16]` in the constant
  buffer) and the interpreter's `fetch_attr` returns them. Same run
  (`run.ps1 -Seconds 152` with the scripted pad, trace at 145 s): the
  silhouettes are white in the dumps.
- The person playing reported the shadows visible.

Not checked: whether shadow intensity and softness match the console; other
uses of constant attribute values elsewhere in the game (they now take the
value set instead of 0,0,0,1).

## 2026-10-14 (late night): xbox-demo, missing triangles in models

Build: `recomp.ps1 -Target xbox-demo -BuildOnly`.

Observed:

- Before: a person saw models with triangles missing (Farah's arm and
  torso, the sides of a balcony). The `[GPU]` report listed method `0x1808`
  (`NV097_ARRAY_ELEMENT32`, the odd last index of an index list) as
  unhandled 556,550 times, and a counter added to the executor showed
  8,388,608 index words dropped past the 4096-index batch limit in 150 s.
- The executor now takes `ARRAY_ELEMENT32` and holds 65,536 indices a
  batch. `run.ps1 -Seconds 150 -SnapshotEvery 10 -Set
  @{RECOMP_PAD_SCRIPT='30000:start:800,36000:a:800,62000:start:800,70000:start:800,78000:start:800'}`:
  no index overflow reported, 58-60 fps in the level (`[HW]` 291-608 draws,
  20-38 thousand triangles a frame).
- The person playing reported, with ARRAY_ELEMENT32 alone, some models
  whole and the balcony's sides still missing; with the larger limit as
  well, the balcony whole.

Not checked: every model in every level; shadows (not drawn, see the README).

## 2026-10-14 (night): xbox-demo, PC keyboard layout, freeze at the third level

Build: `recomp.ps1 -Target xbox-demo -BuildOnly` (runtime only: the PC
version's keyboard layout, left/right Shift and Ctrl told apart, the numeric
pad with NumLock off, middle mouse button, raw mouse movement as the right
stick).

Observed:

- A person played `run.ps1 -Set @{RESOT_THREAD_DUMP_SECS='15'; RESOT_PROFILE_MS='5'}`
  to the third level, where the game froze without starting its movie. The
  log: on the second `video\Intersti\Inter_11.int`, Bink's second worker
  thread (`PsCreateSystemThreadEx #20`, routine `0x0027FAE5`, ctx
  `0x002AE6C0`) got `xbox_HeapAlloc: out of memory (requested 524288, used
  50401280/50855936)` for its stack and ran inline on the game thread, which
  then looped in `sub_002AE6C0` on `NtReleaseMutant` failures at 0 fps. The
  heap's high-water mark went from 29 MB (allocation #512) to 48 MB
  (allocation #1024) across the level loads: without `RECOMP_HEAP_RECLAIM`,
  `NtFreeVirtualMemory` gives nothing back.
- `run.ps1` now sets `RECOMP_HEAP_RECLAIM=1` for xbox-demo. `run.ps1
  -Seconds 150 -SnapshotEvery 10 -Set @{RECOMP_PAD_SCRIPT='30000:start:800,
  36000:a:800,62000:start:800,70000:start:800,78000:start:800'}`: no out of
  memory, the heap's bump pointer at about 10 MB after 32 allocations and
  never at #512 in 150 s, the level rendered at 58-60 fps (snapshot at 150 s:
  the Prince and a soldier in the first level). Nine `NtReleaseMutant(0)
  failed` at sound start-up are in both runs, before and after the change.

- With the change, a person played the same diagnostic run to the third
  level: the movie started and the game did not freeze (their report). The
  log (23,811 lines) has the interstitial movies `Inter_11/21/31` opened
  eight times each, no `out of memory`, no worker run inline, heap frees
  matched (`frees=2048 matched=2048`); 59.7 fps in the level, and 0 fps on
  the renderer at the end while the profile shows the movie overlay
  (`yuv_to_rgb`, `overlay_latch`) -- the movie, not a stall.

Not checked: whether the movie and the third level play correctly beyond
starting; the keyboard layout by a person, in particular that
White, Black and the right stick click are the game's camera look,
alternate view and camera reset; the mouse speed's feel.

## 2026-10-14 (evening): xbox-demo, input without USB, full screen by default

Build: `recomp.ps1 -Target xbox-demo -SkipAnalysis` ("Excluding 2 functions
... 7 wrapped as sub_X_gen"; 11,213 of 11,215 lifted, 0 failed).

Observed:

- `run.ps1 -Seconds 50 -Set @{RECOMP_PAD_SCRIPT='22000:start:800,28000:a:800,34000:a:800'}`,
  three starts: the log has `[BOOT] input: XAPI pad on port 0 ... (no USB)`,
  the three script steps at 22, 28 and 34 s, and `video\loading.int` opened
  (the game was entered) in 3 of 3. With the USB pad, 2 of 5 starts had
  enumerated earlier the same day.
- Real input events (`SendInput` to the game window): Enter at 22 s and two
  left mouse clicks at 28 and 34 s entered the game (`loading.int`).
- `run.ps1` with no switch: the game window is 0,0-1920,1080 with style
  `0x94000000` (popup, no frame) on a 1920x1080 monitor.
- `tools\shortcut.ps1` recreated the desktop shortcut; its arguments are
  `-File ...\run.ps1 -Target xbox-demo`.

Not checked: an XInput pad or another joystick (none connected here); the
other keys and the right mouse button in play; rumble; `-Windowed` and
Alt+Enter/F11 by a person; gameplay by a person.

## 2026-10-14 (afternoon): xbox-demo, glow alignment, CPU use, wide culling

Builds: `recomp.ps1 -Target xbox-demo -SkipAnalysis` (11,213 of 11,215
functions lifted, the other two are the hand-written KickOff in
`target_hooks.c`; 0 failed), then `-BuildOnly`. `python tools/check-hlsl.py`
passed before each build.

Glow ("layers out of register", reported by the user):

- `run.ps1 -Seconds 27 -Pad -Set @{RECOMP_FRAME_TRACE='logstflag';
  RECOMP_HW_GLOW_DUMP='...\glow'}` with the flag file created at 24 s, on the
  "Press Start" screen. With every surface at scale 2, the 160x120 glow
  layer had doubled edges and comb-like stripes, and the composite's
  difference from the scene correlated best at about (+25, +19) host pixels.
  The blur's tap offsets are symmetric (-7..+7 texels, equal weights in the
  80x60 pass), so the cause is the resolution, not the taps.
- After rendering the smaller targets at scale 1: the glow layer is a smooth
  blur, and its offset from the scene measures 0.1 guest pixel (160x120
  layer) and 0.1 (composite).

CPU (Task Manager-style process times, 10 s windows):

- Before: 140% of one core on the "Press Start" screen; the profiler put
  90% of the title thread in `sub_0029D0C0` (KickOff spin) and the NV2A
  thread looped on `Sleep(0)`.
- After: about 57% of one core on the same screen (title thread 23%,
  executor 12%, the rest below 9% each), 100-117% during the 185 s run below
  (intro scene).

Run: `run.ps1 -Seconds 185 -SnapshotEvery 15 -Pad` with the menu presses of
the entry below. 35 renderer windows of 5 s: one at start-up (0.1 fps), one
at 55 fps, the other 33 at 59.8-60.2 fps. The game reached the playable
balcony scene after the intro and stayed there (the script does not walk
the Prince in). Two `[ICALL] Failed to resolve VA 0x002AEE97` lines, which
also appear in a trace taken before these changes.

Wide picture: `run.ps1 -Fullscreen` on a 1920x1080 monitor, screen captured
at 24 s: the picture fills the screen. The culling hook logs
`culling half-angle 0.7854 -> 0.9273 rad`. Black areas remain at the lower
left of the menu garden in 16:9; the user confirmed the set has no model
there.

Pad enumeration, 35 s starts: 2 of 5 enumerated with the new NV2A thread,
1 of 5 with `RECOMP_NV2A_ACK_SPIN=1` (the old loop), so this is not caused by
the change, but it is worse than the "one start in four" noted below.

Not checked: Alt+Enter/F11 by a person; the level sections past the
balcony; gameplay by a person; sound; the console.

## 2026-10-14: xbox-demo, 16:9 default build, icon, scripted tour

Build: `recomp.ps1 -BuildOnly` after the repository moved to `source/` and
`port/`, with `RESOT_ASPECT=16:9` (now the default) and the icon resource.
`python tools/check-hlsl.py` passed first.

Command (no `-Aspect`, to see the built-in default take effect):

```powershell
.\tools\run.ps1 -Seconds 185 -SnapshotEvery 5 -Pad -Set @{RECOMP_PAD_SCRIPT='@pad_tour.txt'}
```

`pad_tour.txt`: the menu presses of the entry below up to 95 s, then from
104 s left-stick runs in four directions, jumps (`a`), attacks (`x`) and one
`y`, until 175 s.

Observed:

- The log has `aspect 1.778` from the renderer and `widescreen: projection
  widened 1.3333x` from the target's hook, without `RECOMP_HW_ASPECT` set by
  the script.
- The pad enumerated (`periodic slot 0`) at the first start.
- 37 window dumps: logos, title, main menu, intro movie and cut-scene, the
  controls screen, the level's opening, two pause menus, the soldiers' scene,
  explosions on the ramparts, the health arc, the "climb up onto ledge"
  prompt, the white transition into the next section and the second
  section's controls screen. Nine of them are the README's picture
  (`docs/media/gameplay-xbox-demo.jpg`).
- 30 renderer windows of five seconds: 24 at 58-60 fps, 1 at 50-58, 5 below
  50 (start-up, and loads: 0.1, 2.2, 3.5, 18.4, 47.8 fps).
- No crash, exception or `SND_ASSERT` line in the log in 185 s.
- `bin/sot-xbox-demo.exe` shows the reSOT icon in Explorer
  (`ExtractAssociatedIcon`), with the version resource's description; the
  desktop shortcut from `tools/shortcut.ps1` points at `run.ps1 -Pad`.

Not checked: what the scripted presses actually did in the level (only the
dumps were looked at); the window's title-bar icon by eye; the shortcut by
double-clicking it; sound; anything past 185 s; the console.

## 2026-10-14: xbox-demo, movies, sound, frame rate, wide picture

Builds: relift after the lifter (`movsx` from `bp`/`sp`), detector and seed
changes (`recomp.ps1 -Target xbox-demo -Seeds`, then `-SkipAnalysis` for the
entry hooks); runtime changes with `-BuildOnly`. `python tools/check-hlsl.py`
passed before each build.

Commands (each repeated when the emulated pad did not enumerate):

```powershell
.\tools\run.ps1 -Seconds 22 -Set @{RECOMP_OVL_DUMP='logs\ovl\o'}
.\tools\run.ps1 -Seconds 240 -SnapshotEvery 20 -Pad `
    -Set @{RECOMP_PAD_SCRIPT='30000:start:800,36000:a:800,62000:start:800,70000:start:800,78000:start:800';
           RECOMP_APU_WAV='logs\out.wav'}
.\tools\run.ps1 -Seconds 120 -SnapshotEvery 5 -Pad -Aspect 16:9 `
    -Set @{RECOMP_PAD_SCRIPT='30000:start:800,36000:a:800,62000:start:800,70000:start:800,78000:start:800,95000:start:800'}
.\tools\run.ps1 -Seconds 125 -Pad -NoVsync -Set @{RESOT_PROFILE_MS='1'; RECOMP_PAD_SCRIPT='...same...'}
```

Observed:

- Movies: before the fix, raw YUY2 dumps of the Ubi Soft logo showed 8x8
  blocks wrapped past 255 (a row-6 IDCT coefficient zero-extended). After it,
  400 dumped frames had no large vertical chroma jumps and the sampled frames
  were clean.
- The level loads past "LOADING..." in every run since `CreateSuspended` is
  honoured (before: hung in `sub_002AEA90` in 2 of 2 runs with the faster
  renderer).
- Frame rate, 240 s in 4:3 with sound: of 40 five-second windows, 34 at
  58-60 fps, 3 at 50-58, 3 below 50 (the first menu window, and two windows
  at 17-18 fps during loads between sections). Without vsync the level ran at
  105-200 fps (5-9.5 ms a frame). The profiler put the pushbuffer thread at
  2-5 ms a frame after the vertex programs moved to the GPU and stderr was
  buffered (it had spent half its time in `fprintf`).
- Sound: DirectSound initialises, sound banks and `STREAM.SS2` load, no
  `SND_ASSERT` and no crash in 240 s. Recorded output: the intro movie,
  the menu and the interstitial movies have tonal spectra (spectral flatness
  0.05-0.25); before the physical-address fix everything after the intro was
  white noise (flatness 0.75, centroid 12 kHz). In the level the median
  flatness is 0.27 (10th-90th percentile 0.05-0.57). Peaks still reach full
  scale at times.
- Wide picture, 16:9: level frames fill the width with the vertical view of
  4:3; "Work in progress", the logo, the health arc and button prompts sit
  where they are in 4:3; the pause menu is the same centred panel as in 4:3.
- One start in four (roughly) the emulated pad never enumerates
  (no `periodic slot` line); a restart fixes it.

Not checked: the sound by ear (only measurements of the recording);
whether objects are culled in the extra side strips of the wide picture;
any widescreen ratio other than 16:9; gameplay by a person; anything past
240 s; the console.

## 2026-10-13: xbox-demo, first build in the reSOT layout

Commands:

```powershell
.\tools\recomp.ps1 -Target xbox-demo
.\tools\run.ps1 -Seconds 150 -SnapshotEvery 10 -Pad `
    -Set @{RECOMP_PAD_SCRIPT='30000:start:800,36000:a:800,62000:start:800,70000:start:800,78000:start:800'}
```

Observed:

- 11,364 functions lifted, 0 failed; `bin/sot-xbox-demo.exe` built.
- `prince.bf`, `video\e3_intro.int`, `video\loading.int` and the interstitial
  movies `Inter_10/20/30` and `Inter_11/21/31` opened by the game.
- In the frame dumps: Entree fly-by, the courtyard with the Prince moving,
  then the second section (daylight battlement with the Prince and two
  characters) and its "press START to continue" movie.
- 14-28 fps reported in the level sections; no access violation and no
  unresolved indirect call in the 150 seconds.

Not checked: audio (there is none); whether any frame matches the console;
gameplay by a person (input was scripted); anything past 150 seconds; shadows,
stencil and cube-map effects, which are known to be missing.

## 2026-10-12: xbox-demo, Direct3D 11 renderer and level entry

Run in the previous project layout (`RE-SoT`) with the same sources.

- The crash on entering the level (access violation in `sub_0001C9B0`, fault
  address `0xB039BBB7`) reproduced in every scripted run of the build before
  the seed-list correction (four) and in none of the three runs after it that
  went past that point.
- Menu with its 3D background, pause menu, interstitial movies and about two
  minutes of the first level rendered. Reported every 5 s: 41-56 fps in the
  menu and fly-by, 16-37 fps in the level (240-630 draws, 23-49 thousand
  triangles a frame).
- Dumps kept locally in `logs/milestone-2026-10-12/`.

Not checked: as above.

## 2026-10-12: xbox-demo, first boot (software rasteriser)

- First lift (10,912 functions) booted to the main menu and into Entree at
  about 1 fps with the toolkit's software NV2A rasteriser, after fixing
  pointer-only functions, the D3D fence, the PVIDEO overlay, `cpuid` and the
  OHCI pad wiring.

## xbox-retail

First build and initialisation runs are recorded in the retail entry above.
Known target facts: entry point
`0x00335753`; D3D fence routines `sub_00370080` / `sub_00370140` with device
pointer global `0x0037B648` and the same `+0x2C` / `+0x30` offsets as the
demo; overlay disable code at `0x00379027`.
