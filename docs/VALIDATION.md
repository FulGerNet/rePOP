# Validation — 2026-10-22

Target: WW retail SHA-256
`8747A4104EB359DC76C410770FA2F3F64B547077A26E8EA308B2BCCFC964599C`.

Observed analysis: XboxRecomp parser identifies title 5553003B, XDK 5849,
entry point 003D674C, image size 0096B160, 35 sections and 153 kernel imports.
The unseeded detector finds 18,286 functions. The reSOT pointer seed scanner
adds 251 seeds using this WW XBE only. Seeded disassembly finds 18,549 functions;
the translator additionally recovers static indirect destinations.

Commands from the toolkit directory:

```powershell
python -m unittest tools.recomp.test_lifter_carry tools.recomp.test_lifter_fpu tools.recomp.test_lifter_sse tools.recomp.test_lifter_frame_bridge tools.recomp.test_prologue_saved_frame tools.recomp.test_rep_movs_mmio tools.recomp.test_call_retaddr
```

48 tests passed. These cover selected inherited lifter regressions, not the whole
runtime. An initial broad unittest discovery was unsuitable: some modules use
pytest (not installed) and relative imports require package-qualified execution.
No claim is made that the entire upstream suite passed.

From the checkout: `python tools/check-hlsl.py` compiled all ten shader probes
successfully. Native DXIL/SPIR-V shader generation and the Windows xbox_kernel
target also built successfully using MSVC 19.51.36257 and Visual Studio 2026.
MSBuild's FileTracker fails with E_ACCESSDENIED inside the agent sandbox;
configuration/runtime compilation succeeded outside that sandbox.

The first complete lift produced 18,558/18,558 translated functions, zero
translation failures, 3,372,985 C lines and 84 C source files. Its report also
records 335 unresolved call destinations emitted as stubs and 892 unsupported
instructions (34 mnemonics) emitted as no-op comments. Some may be incorrectly
decoded data or cold paths; that has not been established. Zero translation
failures therefore does not mean complete instruction coverage or correct play.

Current generation includes nine WW-specific verified D3D/input wrappers
and SoT-assisted folder matching (see WW-HOOKS.md): 18,865 generated routines
(two D3D replacements, seven input routines retained under `_gen`), zero failed
translations, 3,457,251 C lines and 87 C source files including dispatch/stubs.
There are 20 subsystem folders (including nested XDK folders). The unresolved
and unsupported-instruction counts are 151 and 934 respectively. The latter
counts include repeated instructions in recovered overlapping continuations.

Windows Release x64 build succeeded:

```powershell
python tools/run-build-tool.py cmake -S . -B build/xbox-retail -G "Visual Studio 18 2026" -A x64
python tools/run-build-tool.py cmake --build build/xbox-retail --config Release --parallel 4
build/xbox-retail/tests/Release/reww_tls_layout_test.exe Assets/xbox-retail/default.xbe
```

Output: `bin/ww-xbox-retail.exe`, with `SDL3.dll` alongside it. The main XBE is
embedded and hash-checked; the disc assets remain external. No game binary is
committed. The integration loader test passes all eleven assertions: the full
stack reservation, TLS and CRT slot stay outside the image; heap alignment,
ownership, non-overlap and zeroing are correct; 212 image bytes at the former
fixed TLS locations remain intact. TLS now maps at 01210600, size 148, and
the main stack is 00A00000..01200000.

Bounded runs: `ww-xbox-retail.exe --smoke-seconds 20`, windowed. The initial
run expired normally but stalled at DSOUND 00519D3A, with no draws/audio.
After verifying and enabling `gp+0x810`, the trace confirms DSP command 3 was
acknowledged, the loader read sound/dsstdfx.bin and progressed through game
archive reads. A 20-second run without periodic thread dumps exited 0 at its
explicit smoke deadline. This is controlled termination, not normal game exit.

One intermediate run with the inherited periodic thread dump timed out while
printing a suspended thread. The host now resumes that thread before writing
its collected trace, avoiding a suspended owner's stderr lock. Final default
smoke runs do not enable periodic thread suspension; broader debugger/profiler
concurrency is not validated.

Remaining observed issues: indirect XPP targets 00542664 and 00542EA2 were
unresolved during device setup. `in al,dx` at D3D 00497D7D is reached and still
reported as unimplemented. No frame, menu, audible audio or playable gameplay
was established by the 20-second runs. No visual launcher/ISO installation or
D3D12/Vulkan gameplay validation is claimed.

Initial fast boot checks (normal buffered logging, periodic dump disabled):
`--smoke-seconds 45` exits early with NTSTATUS `0xC00000FD` (native stack
overflow), after the DSP acknowledgment and archive reads. Increasing the
executable's native stack reserve from 1 MB to 16 MB and repeating with
`--smoke-seconds 30` reproduces that status. The 16 MB reserve is retained as
native frame headroom; it is not itself a boot fix. No crash stack was
recovered during those initial checks. The slower
unbuffered 20-second pass does not contradict the failure: it had not progressed
as far before the timer expired.

State before cold-branch recovery: Release Windows executable and grouped generated C exist and
build successfully. TLS/layout and selected lifter/shader checks pass. Boot
advances into archive loading, but menu/rendering/gameplay are not established
and the fast native stack-overflow failure is unresolved. Detailed local logs
are logs/windows-build-final.txt, logs/tls-test.txt, logs/lifter-regressions.txt,
logs/smoke3-err.txt, logs/smoke-final-err.txt and logs/smoke-stack-err.txt.

Follow-up investigation recovered the native overflow stack with a local
Win32 debugger and isolated an 804-byte guest stack leak in 000D4870. A cold
conditional destination had become a stub, omitting the real shared epilogue.
See COLD-BRANCH-RECOVERY.md for the paired static/runtime evidence and generic
translator fix. Five new synthetic tests plus existing SEH/frame/carry tests
pass (31 tests total, logs/coldbranch-tests.txt). Real WW analysis recovers
000D4AB7 and 000D4ABF without replacing the genuine funclet or changing bounds.

Regeneration command:

```powershell
python tools/pipeline.py --skip-analysis --generate-only --jobs 4
```

The optimized loader integration test also passes all eleven assertions
(logs/coldbranch-tls-test.txt). An earlier failed MSVC discovery had cached
empty C/C++ Release flags; CMake restores the standard /O2 /Ob2 /DNDEBUG
defaults only when that cache entry is empty, preserving explicit custom flags.

Cold-branch Release build succeeds (logs/coldbranch-windows-link.txt). A
45-second run under the external debugger exits 0 at the explicit smoke timer,
without reproducing the overflow (logs/coldbranch-boot-debug.txt and
logs/coldbranch-smoke-err.txt). The runtime reports 21 draws / 84 indices and
non-silent XAudio2 output. These counters establish GPU/audio activity, not
correct visible output or listening verification. Software GPU diagnostics
still report zero pixels written; no menu or gameplay is established.
New unresolved callbacks appear at Bink 004E4510 / 004E4380, alongside the XPP
callbacks recorded above. These are addressed in the next seed revision.

Launcher UI probe with the bundled computer-use skill returns a reWW window
titled `reWW - Prince of Persia: Warrior Within`. Screenshot capture fails
with `no monitor found for window`, and a refreshed window inventory exposes
no targetable WW window. The owned process is stopped after the probe. No
visual launcher layout or ISO-install interaction is therefore verified.

Callback revision: 366 selected seeds, with 61 known interior switch/shared-frame
candidates deferred. Scanner tests pass all six cases, including code above
4 MB and rejecting forward-only shared-frame arms (logs/seed-scanner-tests.txt).
The new analysis and generation succeed with zero translation failures:

```powershell
python tools/pipeline.py --analyze-only
python tools/pipeline.py --skip-analysis --generate-only --jobs 4
python tools/run-build-tool.py cmake -S . -B build/xbox-retail -G "Visual Studio 18 2026" -A x64 -DREWW_ABI_CHECK=OFF
python tools/run-build-tool.py cmake --build build/xbox-retail --config Release --target ww-xbox-retail --parallel 4
```

Logs: callback-analysis.txt, callback-recomp.txt, callback-configure.txt and
callback-windows-build.txt. The Release executable succeeds under the external
debugger for 45 seconds and in a second ordinary 45-second run, both exit 0 at
the explicit smoke timer. Video file reads progress through UBISOFT, UBIMTL,
LOGORP, LoadIn0 and LoadOut0, then Menu/ENGLISH/P5MAIN.MGM and P5XLIVE.MGM.
The ordinary run reports over 3.9 million draws and 13,113 flips. Bink
004E4380/004E4510 and XPP 00542664/00542EA2 are no longer unresolved.
See callback-boot-debug.txt, callback-smoke-err.txt and
callback-normal-smoke-err.txt in logs/.

That run exposes one later resource callback, 00088730. Its verified original
body and manual lookup are implemented in target_hooks.c / recomp_manual.c;
the seed list and generated files stay unchanged. See WW-HOOKS.md for the
instruction-level register, argument and tail-call evidence. Rebuilding only
those native sources succeeds (logs/resource-callback-build.txt). The final
45-second debugger run exits 0 at its timer with **zero unresolved ICALL
reports**, 932,951 draws and 4,600 flips, after loading the main-menu files.
Non-silent APU output continues. Logs: resource-callback-boot-debug.txt and
resource-callback-smoke-err.txt; executable SHA-256 is recorded locally in
resource-callback-executable-hash.txt.

Current state: the optimized Windows build and grouped generated C are ready.
The original fast loader overflow no longer reproduces in these runs. Boot
progresses through intro videos and loads main-menu assets with active GPU
presentation and audio output. Visible menu correctness, listening quality,
input interaction, ISO installation and playable gameplay remain unverified.
The reached D3D `in al,dx` at 00497D7D is still an untranslated no-op. Counts of
unresolved/unsupported static translations above are not complete execution
coverage. All owned test processes have terminated.

## Renderer bring-up follow-up — 2026-10-23

All observations still use the supported XBE hash at the top of this file.
The baseline executable SHA-256 was
`949538F7FCBF71E3E44ED0C9EF3D7C99847A5A7E4B0FBC64F8AFD54F6F0800D3`.

The actual GPU readback is now inspected: `RECOMP_FB_DUMP` with
`RECOMP_FB_WINDOW_DUMP_EVERY=180`, and
`bin/ww-xbox-retail.exe --smoke-seconds 45` produced
`logs/renderer-baseline.bmp`. It shows the WW logo, circular main menu,
New Game/Load Game/Options/Extra Features/Xbox Live text and A/B legends at
640x480. The software diagnostic's zero pixel counter did not measure this
hardware render path. This establishes readable menu rendering, not all scenes.

The renderer audit found no missing portable GPU implementation relative to
the local reSOT checkout. It did find a deployment error: pipeline.py copied
`build/deps/SDL3-3.4.18/lib/x64/SDL3.dll` (stock SDK) into bin. Its missing query
ABI made D3D12/Vulkan fall back to D3D11. Commands:

```powershell
python tools/native-runtime.py --check build/deps/SDL3-3.4.18/lib/x64/SDL3.dll
python tools/native-runtime.py --check ../reSOT/build/deps/sdl-query-build/Release/SDL3.dll
python tools/native-runtime.py
python tools/smoke-renderer.py --renderer d3d12 --seconds 45
python tools/smoke-renderer.py --renderer vulkan --seconds 45
```

The stock DLL fails the check with all four extension exports missing; the
source-built DLL passes and is retained locally in ignored build/deps. The
pipeline now stages that checked runtime, including licence/alteration notice.
Explicit pinned setup and patch scripts are reused from reSOT; no dependencies
were downloaded for this repair. Export presence is a packaging guard; actual
ABI and query capability are still checked by the native renderer.

The pre-repair D3D12 attempt correctly fails the new activity check: active
backend is Direct3D 11 with the explicit query-ABI fallback diagnostic.
`logs/renderer-d3d12-20261023T085513716920Z/` records it. The corrected run in
`logs/renderer-d3d12-20261023T085854942097Z/` logs native D3D12/query ABI 1,
exits 0 at the timer and captures the WW title/Press Start screen. Its first
JSON report incorrectly marked backend_matches false due to letter case;
the checker now compares case-insensitively. The matching Vulkan run in
`logs/renderer-vulkan-20261023T090030214896Z/` passes the activity check,
logs native Vulkan/query ABI 1 and exits 0. Both images have the same SHA-256
`3D5246B53CF60044EFEA688DCE2FE7F2B4D8BDC5364115B1753DCD3DF56F565C`,
11,797 distinct colors and 27.16% nonblack pixels. These are matching title
screens, not equivalent-gameplay evidence. No unresolved/invalid ICALL is
reported in these corrected runs.

An inherited `RECOMP_PAD_LIVE=logs/pad-live.txt` test used a 240-second smoke
deadline, dumping the GPU frame every 60 window refreshes. Appended commands
were `start:300`, then three separate `a:300` presses, observed at pad times
37,453 / 85,422 / 107,406 / 138,734 ms. Inspected frames establish profile
selection, the main menu, and New Game difficulty selection (Normal). The last
press starts video reads, but the subsequent image had dark/green blocks.
The tail overlapped an independent backend test; sharing failures were present
in that backend test, so this is not an isolated decoder diagnosis. Logs are
renderer-play-out.txt / renderer-play-err.txt; no gameplay is claimed.

Computer-use window inventory returned no targetable WW window in this host.
No desktop key injection was attempted. The built-in scripted pad and GPU
readback supplied input/visual evidence without that UI dependency.

The static timer comparison is in ignored research/frame-clock-audit.py and
logs/frame-clock-static.txt (`python research/frame-clock-audit.py`). WW frame
clock 000DA5F0 already computes elapsed microseconds on its normal path. A
read-only sample of the owned test process (`python research/sample-clock.py
5940`) observed mode[0091EF38]=0, refresh[00945674]=0, timestamps increasing,
and timestep values 3228, 3127, 2776 us. Consequently no global SoT timestep
fix is applied. The separate fixed-refresh branch remains unverified.

The field-pin fix and evidence are in WW-HOOKS.md. Regression command:

```powershell
cmd /c '"C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars64.bat" >NUL && python -m unittest port.third_party.xboxrecomp.tools.recomp.test_io_port port.third_party.xboxrecomp.tools.recomp.test_lifter_unimpl port.third_party.xboxrecomp.tools.recomp.test_coldbranch -v'
.\tools\recomp.ps1 -SkipAnalysis -GenerateOnly
```

All 13 regression tests pass, including an optimized MSVC C fixture compiled
and executed against the production helper and an actually translated routine.
They cover upper EAX preservation, DX truncation, incoming comparison/carry
tracking, unchanged EFLAGS, alternating parity, and unknown-port diagnostics
without changing AL or consuming parity. Other IN/OUT forms stay unsupported.
Test/relift logs are renderer-port-tests.txt and renderer-port-relift.txt.
The separate carry suite (`python -m unittest
port.third_party.xboxrecomp.tools.recomp.test_lifter_carry -v`) passes all
18 tests (renderer-port-carry-direct-tests.txt). Regeneration reports 18,865
translated routines, zero failed translations, 3,457,290 C lines and 151
unresolved static stubs. There are 921 static unsupported sites across 34
mnemonics; runtime port guards can still report unsupported ports in an
otherwise translated `IN AL,DX`, so that count is not full execution coverage.

Final build command: `.\tools\recomp.ps1 -BuildOnly` (MSBuild outside the
sandbox), log renderer-port-build.txt. Release x64 succeeds, all ten existing
HLSL probes pass, and the corrected query-enabled SDL is staged after linking.
`build/xbox-retail/tests/Release/reww_tls_layout_test.exe
Assets/xbox-retail/default.xbe` passes all eleven assertions with zero failures
(renderer-port-tls-test.txt). Final executable SHA-256:
`4CAFA0633A79D411DBD8FCDDE92272FA28AFCD6D839526BEB1E829AFEDF79AD1`;
SDL3.dll SHA-256:
`54AAE8D60F86E8137E24B46583034F35BE3F3F0B7282B4D4CEFBA90A51EC8594`.
Hashes were collected with `Get-FileHash bin/ww-xbox-retail.exe,bin/SDL3.dll`.

The final D3D12 check used:

```powershell
python tools/smoke-renderer.py --renderer d3d12 --seconds 90 --pad-script '25000:start:300,30000:a:300,35000:a:300,40000:a:300,55000:start:300,60000:a:300,70000:start:300,75000:a:300'
```

`logs/renderer-d3d12-20261023T093058884684Z/` records exit 0 at the deadline,
native D3D12, menu asset reads, zero unresolved/invalid ICALLs and a passing
**activity** check. Inspection during the run confirms the readable main menu.
`IN AL,DX` at 00497D7D is no longer reported. Remaining reached untranslated
instructions are `OUT DX,AL` at 00498C90 and `WBINVD` at 004968E4.

The scripted New Game sequence reaches `video/30fps/CINE/CINE0100.bik`.
The final GPU capture again has dark/green blocks, now in an isolated run with
no overlapping backend smoke. This reproduces the visible cinematic defect;
it does not yet isolate guest decoding from overlay conversion/composition.
Its 144 colors/3.53% nonblack pixels still pass an activity threshold, showing
why automated activity must not be described as correct rendering. Correct
cinematic output and verified gameplay remain open. The renderer itself boots
and renders menu/title content on all three backends tested above.

The updated binary also passes `python tools/smoke-renderer.py --renderer
vulkan --seconds 45` in
`logs/renderer-vulkan-20261023T093300625227Z/`: native Vulkan, exit 0 at the
deadline, zero unresolved/invalid ICALLs, and the same inspected 640x480 title
image/hash as the earlier native backend comparison. The field-pin read is no
longer reported here either. All owned game tests terminated at their smoke
deadlines. `git diff --check` passes; game inputs, DLLs, executables, research,
logs and captured images remain ignored.

## Cinematic surface reuse correction — 2026-10-23

The previous dark/green CINE0100 image is now isolated to stale GPU surface
aliases, rather than a demonstrated Bink decoder defect. All runs here retain
the supported XBE hash. Static evidence is reproducible with the ignored
`python research/bink-rgb32-audit.py` script (logs/bink-rgb32-static.txt).
WW wrapper 0003DB90 calls BinkCopyToBuffer 004D8670 with either COPYALL|YUY2
(`8000000D`) or COPYALL|32A (`80000005`). The 32A dispatcher checks whether an
alpha plane exists; the no-alpha MMX core deliberately writes a zero high byte.
The corresponding SIMD cores uniquely normalize to the SoT routines. No MMX
decoder rewrite or forced guest alpha was applied.

Direct 100-second runs with `RECOMP_OVL_DUMP=logs/cine-raw/overlay-`,
`RECOMP_FB_DUMP=logs/cine-raw/screen.bmp`, window dump period 60, and the same
scripted pad timeline below saved the existing raw overlay diagnostics.
`python research/inspect-overlay.py` converted representative YUY2 files for
inspection: the Loading sword/logo is recognizable, with 576x448 input,
1280-byte pitch and alternating physical buffers. CINE0100 is opened after
the PVIDEO overlay has stopped; it uses RGB texture drawing instead.

The texture diagnostic was extended with `RECOMP_TEX_DUMP_GATE=<file>`:
captures start only while that file exists and do not consume the 40-frame
budget beforehand. Periodic capture also works after the 64-entry usage census
fills. `RECOMP_TEX_DUMP_OPAQUE=1` affects only diagnostic BMPs: it exposes RGB
without the existing grey alpha-composition preview. It never alters guest
pixels or GPU draw state. The first gated RGB run used interval 1 in
logs/cine-textures; the second used interval 30 and OPAQUE=1 in logs/cine-rgb,
with the gate created when CINE0100 appeared in the file-read log. The direct
executable command was `bin/ww-xbox-retail.exe --smoke-seconds 110` (launched
with Start-Process, redirected output and a hidden startup window).

The alpha-composited sample is grey, but
`logs/cine-rgb/tex-1039_8078D000_fmt12.bmp` clearly shows the Prince on a rooftop.
That establishes valid decoded RGB in the texture sampler before the fix.
The hardware paths instead selected an earlier post-processing render target
at the same address, without checking whether CPU code had replaced its RAM.
Both D3D11 and native D3D12/Vulkan now compare stored RAM footprints before
choosing these aliases; changed content invalidates all same-address shapes,
preserving in-flight images, and forces CPU texture upload. The runtime logs
the observed 8078D000 transition to a 640x480 guest texture.

Three new optimized C fixtures compile with MSVC `/O2 /W4 /WX` and execute
successfully. They exercise the production helper, different-size aliases,
same-frame change/invalidation, independent reclaim, unaligned small regions,
last-word/tail inclusion and the explicit limitation that unsampled writes can
escape detection. This bounded fingerprint follows the existing texture-cache
sampling policy; it is not exact write tracking. Command/log:

```powershell
cmd /c '"C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars64.bat" >NUL && python -m unittest port.third_party.xboxrecomp.tools.recomp.test_surface_ownership -v'
python tools/run-build-tool.py cmake --build build/xbox-retail --config Release --target ww-xbox-retail --parallel 4
python tools/check-hlsl.py
```

Logs: cine-surface-ownership-tests.txt, cine-surface-final-build.txt and
cine-surface-hlsl.txt. Release x64 builds and all ten shader probes pass.
Review also moved D3D11 claims after actual draw calls, excluded color claims
on depth-only draws, bypassed matching cached hashes on known dirty transitions,
and unified CPU texture hashing with last-word/tail coverage. No generated C
changed in this follow-up; these are host runtime changes only.

The initial corrected D3D12 run (100 seconds) in
`logs/renderer-d3d12-20261023T095629462817Z/` exits 0 at its smoke deadline,
with native D3D12, zero unresolved/invalid ICALLs and a readable cinematic
frame of the Prince, replacing the earlier green blocks. The final build
SHA-256 is `FB7E6FA147F12331F55AFB72A0EB39B60174BF4BD5FBA24FB483B9892D781580`.
The final D3D11 run below also exits 0, with zero unresolved/invalid ICALLs,
and its inspected frames show the moving cinematic scene:

```powershell
python tools/smoke-renderer.py --renderer d3d11 --seconds 100 --pad-script '25000:start:300,30000:a:300,35000:a:300,40000:a:300,55000:start:300,60000:a:300'
```

Artifacts: `logs/renderer-d3d11-20261023T100059657052Z/`. The final frame has
7,157 distinct colors and 99.81% nonblack pixels; the visual inspection, not
those activity metrics, supports the cinematic rendering claim. OUT DX,AL at
00498C90 and WBINVD at 004968E4 are still reported as untranslated. Listening
quality, movie-wide visual equivalence and gameplay remain separate checks.

## Continued renderer bring-up with isolated saves — 2026-10-23

The existing binary initially returned to firmware before GPU initialization:
NtOpenFile of \\Device\\Harddisk0\\partition1\\ returned C0000022. Artifacts:
logs/renderer-d3d12-20261023T173338681064Z. This run exits 0 but fails the
smoke deadline/backend/capture checks; process exit alone is not boot success.
The default inherited save directory is outside this workspace. Added the
RE-WW host override REWW_SAVE_DIR, reusing xbox_path_init, and made smoke tests
use fresh sparse disk images inside their ignored capture directory.

Commands:

```powershell
.\tools\recomp.ps1 -BuildOnly *> logs/continue-build.txt
python tools/smoke-renderer.py --renderer d3d12 --seconds 160 --pad-script '25000:start:300,30000:a:300,35000:a:300,40000:a:300,55000:start:300,60000:a:300,110000:start:300,120000:a:300'
& build/xbox-retail/tests/Release/reww_tls_layout_test.exe Assets/xbox-retail/default.xbe
python -m py_compile tools/smoke-renderer.py
git diff --check
```

The first build attempt hit MSBuild FileTracker E_ACCESSDENIED under the
sandbox; the approved retry outside it succeeded. Pipeline and CMake retain
XBE hash checks, ten shader checks pass, and the direct stack/TLS fixture
reports zero failures. CTest discovery currently reports no registered tests;
the fixture was therefore executed directly with the supported XBE.
The new run initializes D3D12 native inside the sandbox, reads P5MAIN.MGM,
shows a readable difficulty menu, opens CINE0100.bik, and its inspected GPU
capture shows the cinematic scene. Artifacts:
logs/renderer-d3d12-20261023T173502944365Z. The new private save root starts
with a fresh profile, so the old shared-save input timing is not equivalent.
OUT DX,AL and WBINVD remain reported as untranslated; gameplay remains
unverified. No generated C or guest addresses changed in this follow-up.

The 160-second run completed its smoke deadline with exit 0, native D3D12,
zero unresolved/invalid ICALLs and activity_pass=true. Final readback is 640x480,
1,885 colors, 99.08% nonblack; these metrics establish activity only.
Executable SHA-256: 24F3E5AD3E94D51D149A693FD89C5BF897599135C3052924A092C80D0EDB196A.

## Audio DMA collision and geometric SSE cold continuations — 2026-10-23

Supported XBE SHA-256 remains 8747A4104EB359DC76C410770FA2F3F64B547077A26E8EA308B2BCCFC964599C.
The 600-second diagnostic in logs/renderer-d3d12-20261023T174155216440Z
reproduces noise in audio.wav, then an access violation after CINE0100,
before verified gameplay. Native location sub_000AEE60+47FD, guest EAX
BFD71700, read BFD71710; no unresolved/invalid ICALLs were reported.
The pre-fix APU WAV at seconds 1/5/10 has RMS 3951/3996/4019 and
successive-sample RMS differences divided by RMS of 1.389/1.383/1.382.
Those figures characterize this recording, not a general audio quality test.

RE-WW audio source trace identifies cinematic voice 70, PCM16 mono,
BA=218A0; its SGE page 21 contains physical 006A9000. A read-only Windows
process-memory probe finds smooth PCM at guest 806A98A0 (RMS 4396,
difference/RMS .0566) and unrelated image data at guest 006A98A0 (RMS 13111,
difference/RMS 1.3872). The inherited APU resolver selected the latter because
its physical number falls inside WW's XBE image bounds. The WW resolver now
prefers allocated contiguous physical storage after explicit ordinary-RAM
aliases and high-VA DMA tokens. reSOT retains its existing image-first policy.
No title address was added to the runtime correction.

REA capture_process_scenario was attempted for the probe and returned
capability_unavailable: native Windows PTY capture cannot verify descendant
cleanup. The probes were subsequently executed with ordinary shell tools;
their output is not REA Evidence. Private scripts: research/probe-apu-source.py,
probe-apu-current.py and compare-apu-collision.py. No process memory was written.

Build/test commands:

```powershell
.\tools\recomp.ps1 -BuildOnly *> logs/audio-physical-build.txt
cmd /c '"C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars64.bat" >NUL && python -m unittest port.third_party.xboxrecomp.tools.recomp.test_apu_physical -v'
python tools/smoke-renderer.py --renderer d3d12 --seconds 360 --audio --pad-live --pad-script '25000:start:300,30000:a:300,35000:a:300,40000:a:300,55000:start:300,60000:a:300,110000:start:300,120000:a:300'
```

The approved build outside the sandbox passes. The audio test compiles and
runs the production resolver for both WW and inherited reSOT behavior,
including overlapping image/contiguous numbers, explicit heap aliases,
high-VA tokens and fallback RAM. Corrected run:
logs/renderer-d3d12-20261023T174700417980Z. At seconds 1/5/10 the corrected
WAV RMS is 117/238/595 and difference/RMS .242/.120/.028; at second 75 it
changes from 1.269 before to .120 after. The original full-scale-like noise
signature is absent in these segments. Listening equivalence and all sound
formats remain unverified. This run reproduces the same geometric crash,
separating the audio correction from the pending scene transition failure.

The geometric failure branches from 000AEBE0 to 000AEC9D. The old generated
body calls an unresolved direct stub that increments ESP by four, skipping
saved EDI/EBX, local allocation and the actual return. Its target lies in the
known 000AEC88 extent. The cold-entry validator accepted integer flag writers
but rejected COMISS/UCOMISS/COMISD/UCOMISD even though the lifter stores their
operands in local comparison snapshots. It now accepts that SSE family.
Executable synthetic tests exercise equal, positive, negative and unordered
inputs for all four comparisons and restore stack/saved ESI through the real
translated epilogue. They also exposed COMISD/UCOMISD reading XMM float lanes;
these comparisons now read the low double. Existing integer/SEH/float tests
remain in the regression run. Hash-bound targeted translation in
logs/geometry-cold-static.txt recovers 000AEC9D rather than a stub.

From port/third_party/xboxrecomp (MSVC environment):
`python -m unittest tools.recomp.test_coldbranch tools.recomp.test_seh_frame_owner tools.recomp.test_lifter_frame_bridge tools.recomp.test_lifter_carry tools.recomp.test_lifter_sse tools.recomp.test_lifter_sse_cmp -v`
passes 53 tests (logs/scene-coldbranch-tests.txt). Initial test invocation from
the repository root failed on the legacy tools.recomp import in the SEH test;
the documented package-directory invocation above passes.
Full regeneration/build command:
`.\tools\recomp.ps1 -SkipAnalysis *> logs/scene-coldbranch-build.txt`.

Full regeneration completed in 162.6 s of loading/recovery and 108.2 s of
translation: 18,867 translated bodies, two manual exclusions, zero failed,
87 C source files. 000AEC9D is present as a generated body and absent from
the direct unresolved stubs. There remain 149 static unresolved direct targets
and 921 untranslated instruction sites across 34 mnemonics; many are unreached,
so these counts are neither a runtime crash count nor proof of completeness.
The in-sandbox build again failed at MSBuild FileTracker; the approved
`-BuildOnly` retry is recorded in logs/scene-coldbranch-build-final.txt.

The approved Release rebuild completed successfully (logs/scene-coldbranch-build-final.txt),
including all ten shader checks and native query SDL staging. The generated
sources were produced by the normal -SkipAnalysis pipeline; no generated C was
hand-edited. MSVC reported two C4333 shift warnings in unsorted_0005.c and
no blocking compiler/linker errors. The original two unsupported port/cache
instruction sites remain separate work.

The old geometric stub loses exactly 28 bytes of stack cleanup: the real
continuation restores EDI/EBX (8), releases locals (20), and consumes the
return (4), whereas the stub consumes only 4. The crash stack still contains
000AF336 at ESP+8, matching the 28-byte stranded frame after the caller's
16-byte argument cleanup. This links the observed stack displacement to the
specific missing continuation rather than masking the faulting pointer.

## Post-cinematic tutorial, CRT exp and 80-bit memory — 2026-10-23

The next 360-second native D3D12 run completes with exit 0 at the smoke deadline
and does not reproduce the geometric crash. Artifacts:
logs/renderer-d3d12-20261023T180913339141Z. Its GPU readback shows the HUD and
Single Weapon Tutorial prompt over a white background. The run reports 12,738
unresolved indirect calls, all to 00482381, and newly reaches untranslated
CMOVP at 0020B7C1. activity_pass is false. The white world is not verified 3D
rendering, despite 4,288 colors and nearly 100% nonblack pixels.
An X press was appended to its owned pad-live.txt while inspecting the tutorial;
that input does not by itself establish correct player movement or rendering.

Static evidence and new seed addresses are detailed in WW-HOOKS.md. The CRT
exp record is packed, so a four-aligned pointer sweep missed its entries.
Three missing record entries plus the directly referenced underflow tail are
now explicit, hash-bound seeds. The disassembler was run with the updated
seed file, then the normal -SkipAnalysis generator was used. The first module
invocation from the repository root could not resolve tools.disasm; the actual
successful analysis command, from port/third_party/xboxrecomp, is:

```powershell
python -m tools.disasm 'C:/Users/Admin/Desktop/Prince of Persia Tools/reWW/Assets/xbox-retail/default.xbe' -o 'C:/Users/Admin/Desktop/Prince of Persia Tools/reWW/research/xbox-retail/recomp/disasm' --analysis-json 'C:/Users/Admin/Desktop/Prince of Persia Tools/reWW/research/xbox-retail/recomp/analysis.json' --force --seed-functions 'C:/Users/Admin/Desktop/Prince of Persia Tools/reWW/source/xbox-retail/seed_functions.json'
```

Analysis log: logs/exp-seed-analysis-final.txt (94.13 seconds).
The first attempted math-only regeneration was stopped before delivery after
the isolated exp fixture exposed an additional binary80 operand defect.
FLD m80 read a float, interpreting the low zero bytes of an extended constant
as zero; FSTP m80 emitted a comment and skipped the pop. Both now use explicit
binary80-memory conversion with the existing double-backed stack. Conversion
preserves binary64 values, sign of zero, infinities and NaN classification,
and stores only ten bytes. It does not add extended intermediate precision,
exact NaN payloads, full x87 exceptions or guaranteed correctly rounded
conversion of every arbitrary binary80 subnormal.

The first private exp fixture compiled but failed numerically with the old
operand handling. With the fix, the actual lifted 00482381 plus its original
helper bodies match exp for eight finite inputs (-2 through 10), return with
FP top unchanged and ESP advanced by four, without any guarded missing helper.
This finite-input comparison does not validate the CRT's exceptional return
paths. Command (from the root in an MSVC environment):
`python research/test-exp-callback.py`.
Log: logs/exp-callback-fixture-final.txt.

From port/third_party/xboxrecomp in an MSVC environment:

```powershell
python -m unittest tools.recomp.test_coldbranch tools.recomp.test_cmov_parity tools.recomp.test_x87_extended tools.recomp.test_apu_physical tools.recomp.test_seh_frame_owner tools.recomp.test_lifter_frame_bridge tools.recomp.test_lifter_carry tools.recomp.test_lifter_sse tools.recomp.test_lifter_sse_cmp -v
```

All 56 tests pass (logs/scene-math-tests-final.txt). The new compiled fixtures
exercise CMOVP/CMOVNP under integer and SSE ordered/unordered parity,
unaligned ten-byte FLD/FSTP, sentinels around the store, x87 stack depth,
signed zeros, minimum binary64 subnormals, DBL_MIN/MAX, infinities and NaNs,
and independent binary80 encodings including the real exp bound 32767.5.
No manually edited generated C is part of these corrections.

Full regeneration/build command:
`.\tools\recomp.ps1 -SkipAnalysis *> logs/scene-math-build-final.txt`
(approved outside the sandbox for the existing MSBuild FileTracker restriction).
The private PCM comparison is reproducible with
`python research/analyze-apu-wav.py <baseline-run-directory> <corrected-run-directory>`;
logs/audio-compare.json contains the observed per-segment metrics.

The final math build succeeds with all ten shader probes. The post-fix
360-second D3D12 run in logs/renderer-d3d12-20261023T184203075538Z completes
with exit 0, zero unresolved/invalid ICALLs, and no reached untranslated CMOVP.
Executable SHA-256: ED2137B0AFD8BCE2EDEC51F8C20036054B4725817AD7955481036564240A7B5F.
A live X press is recorded at controller t=257828 ms. The GPU capture still
shows a white world behind the tutorial HUD. activity_pass=true here establishes
activity only, and must not be presented as verified 3D rendering. The CPU/math
corrections remove demonstrated faults but do not by themselves solve the
remaining white-scene GPU symptom. The exact generated exp bodies also pass
the compiled finite-input fixture (logs/exp-generated-fixture.txt).

## Active render-target feedback (RE-WW)

D3D11 comparison command:

```powershell
python tools/smoke-renderer.py --renderer d3d11 --seconds 330 --audio --pad-live --frame-trace --pad-script '25000:start:300,30000:a:300,35000:a:300,40000:a:300,55000:start:300,60000:a:300,110000:start:300,120000:a:300'
```

Artifacts: logs/renderer-d3d11-20261023T184818185119Z. The same white world
reproduces on D3D11 with zero unresolved ICALLs. Created frame-trace.flag
inside that run after the movie, using the inherited RECOMP_FRAME_TRACE gate;
RECOMP_FRAME_TRACE_METHODS=1 records exact state, and the inherited
RECOMP_HW_TRACE_PIXEL=320,240 records that host-surface pixel after each draw
(not the scaled surface's geometric center).
Appended `x:300` to the same run's pad-live.txt. The trace is complete at
flip 15748; its extracted copy is logs/ww-world-frame.txt.

615 draws have hardware-query data; 410 write pixels (7,079,559 total samples,
including the host internal-resolution scale). World draw calls write a
nonwhite probed pixel, for example 001A1C1D and 001D1D1B. The later full-screen draw
reads texture 80460000 while drawing to the same resolved color surface.
Its unblended three-stage combiner has control 00011103, stage program 00001,
final words 0000000C/00001C80, color ICWs C8C10000/C820C140/C420C520.
The lookup logs feedback=1, then the probed pixel becomes 00FFFFFF immediately after
that draw (691,200 hardware samples at the host's scale). This establishes
that geometry writes real colors before the white composition pass.

Both inherited host backends returned NULL for `best == target`; their shader
binding then selected the white fallback. The RE-WW correction snapshots the
active color image before a draw that samples it. Multiple texture stages
share one snapshot within that draw; subsequent draws acquire a fresh one.
D3D11 unbinds conflicting RTV/SRV views for CopyResource and restores the
exact RTV/DSV bindings. Native D3D12/Vulkan first flush queued readers/writers,
then copy into a cycled SDL texture backing, preserving already encoded uses.
Snapshots follow actual host surface dimensions and retire with their surface
on resize/reuse/cache reset. No guest RAM pixels, combiner words, alpha values
or game addresses are changed by this correction.

Commands:

```powershell
.\tools\recomp.ps1 -BuildOnly *> logs/feedback-build.txt
# From port/third_party/xboxrecomp, MSVC environment:
python -m unittest tools.recomp.test_surface_ownership -v
```

Release builds and all ten shader probes pass. All four ownership regression
tests pass (logs/feedback-ownership-tests.txt); they exercise RAM/alias policy,
not real GPU resource barriers. Integration on the actual backends is a
separate check. No generated C changed in this GPU-only follow-up.

### First rendered 3D scene and tutorial on native D3D12

```powershell
python tools/smoke-renderer.py --renderer d3d12 --seconds 330 --audio --pad-live --frame-trace --pad-script '25000:start:300,30000:a:300,35000:a:300,40000:a:300,55000:start:300,60000:a:300,110000:start:300,120000:a:300'
```

Artifacts: logs/renderer-d3d12-20261023T190243603145Z. Executable SHA-256:
203C0FD9D3AF72BC8F6A2185D1AA271AE1FE52BBD12DAF55FA4BA60FEBB2B560.
The run completes its 330-second deadline, exit 0, native D3D12, zero
unresolved/invalid ICALLs. Inspected GPU captures first-3d.bmp,
tutorial-attack.bmp and tutorial-block.bmp show the ship's 3D environment,
animated actors, textures, lighting, rain/fire effects and the combat HUD.
These are post-movie guest render draws, not an inference from nonblack
pixels. The final capture has 101,797 colors and 99.54% nonblack pixels;
visual inspection establishes the 3D rendering claim.

Created frame-trace.flag after the first world image. The captured native
frame logs `[RE-WW feedback] native snapshot 80460000 draw=2369069` before
its end-of-frame marker. The final scene no longer becomes white. Scripted
live inputs X, left-stick up (1,200 ms), and RT (1,500 ms) are in pad-live.txt
and the controller log; the later captures show the tutorial prompt requesting
blocking and ongoing combat. This is limited early gameplay observation,
not a completed tutorial, full controller conformance or campaign validation.
The only reached untranslated instructions remain OUT DX,AL and WBINVD.

The final audio comparison is in logs/audio-compare-final.json, reproduced
with research/analyze-apu-wav.py. The same baseline/final one-second left-channel
segments at seconds 1,5,10 have difference/RMS 1.389/1.383/1.382 before and
.242/.122/.028 after. At cinematic second 75 the ratio changes from 1.269
to .123. The fix does not change gain or mute audio; it changes the physical
page selection. These sampled captures support removal of the reproduced
noise signature, not movie-wide listening equivalence. Both continuous noise
and real content must be assessed separately from occasional host queue
starvation; the latter still occurs at some loading/trace stalls.

### D3D11 confirmation

```powershell
python tools/smoke-renderer.py --renderer d3d11 --seconds 300 --audio --pad-live --frame-trace --pad-script '25000:start:300,30000:a:300,35000:a:300,40000:a:300,55000:start:300,60000:a:300,110000:start:300,120000:a:300,250000:x:300,260000:lup:1000'
```

Artifacts: logs/renderer-d3d11-20261023T190859605479Z, including inspected
tutorial-3d.bmp and final frame.bmp. Same final executable hash as D3D12.
The run completes 300 seconds with exit 0, Direct3D 11, zero unresolved/invalid
ICALLs. The ship, actors, effects and tutorial HUD are visible. The final frame
has 95,553 colors and 99.57% nonblack pixels; again the inspected image, not
those statistics alone, establishes rendering.

Created frame-trace.flag after world load. The trace completes flip 16234 and
logs `[RE-WW feedback] D3D11 snapshot 80460000 draw=2756984`. The corresponding
same-surface, same-combiner draw now leaves probe (320,240) at 003F4341, rather
than the pre-fix 00FFFFFF. No guest combiner was patched to produce that result.
The point is a host texture coordinate; internal scale makes it different
from the geometric center of the final display.

Final checks: Release build, all ten shader probes, 56 lifter/APU/stack tests,
four surface-ownership regressions, finite original-CRT exp fixture,
`python -m py_compile tools/smoke-renderer.py`, and `git diff --check` pass.
The 330-second native D3D12 and 300-second D3D11 tests both terminate their
owned child at the requested smoke deadline. Native Vulkan shares the copy
implementation but its 3D snapshot behavior has not been exercised in this
follow-up. Full campaign progression, all effects/saves/controller behavior,
movie-wide audio listening equivalence and exceptional CRT math paths remain
unverified; first-scene rendering is no longer blocked by the white feedback
pass. Assets, recordings, debug executables, research and captures remain
ignored and were not committed.

## 2026-10-24/25: WW timestep, movie skip, Hor+, F5 world and reSOT v0.3.1/v0.3.2 renderer merge

Commands:

```powershell
.\tools\recomp.ps1 -SkipAnalysis          # relift; generation completed, PS 5.1 aborted on stderr (script fixed)
python tools/pipeline.py --split 250 --jobs 4 --generator "Visual Studio 18 2026" --build-only
python tools/smoke-renderer.py --renderer d3d12 --seconds 300 --pad-live --pad-script '8000:a:300,25000:start:300,30000:a:300,35000:a:300,40000:a:300,55000:start:300,60000:a:300,70000:a:300,110000:start:300,120000:a:300'
```

Generated C contains exactly the four new entry hooks (0047F548, 000C8CC0,
0006C6C0, 0006C710) and the sub_0003DB90_gen wrapper. Build exit 0, executable
SHA-256 AB471FB34CD9AE62A3DD689010D3C90A0BF873BAEA2779D03843582DFB759CBA.
reSOT d819009..3499c55 runtime/renderer changes were three-way merged after
line-ending normalization, without conflicts; reSOT's native GPU test harness
(tools/tests) is absent here, so those 14 tests were not run in reWW.

Smoke run logs/renderer-d3d12-20261024T215943774124Z: exit 0, native D3D12,
zero unresolved/invalid ICALLs. stderr shows `[TIME] WW invalid refresh 0.000,
fixed-step input inf; measured interval 5998 us`, confirming the divide-by-zero.
The final GPU frame is the Game Over screen: the idle prince died in the
tutorial within the run, unlike earlier 330-second runs.

Game-time rate (read-only process sampling of accumulated microseconds
00952CF0 every 10 s; logs/hooks-rate.txt, logs/hooks-rate-raw.txt):
- Fixed build: 1.000 (+/-0.003) game seconds per wall second through menus
  with flag 0091EF38=1 and through tutorial gameplay with flag 0.
- Same executable with `RESOT_RAW_RETAIL_TIMESTEP=1`: step pinned at 1000 us
  and 0.049..0.058 game seconds per wall second whenever the flag is 1.

The world at 005BCEA4 reads `SuperWorld 0` in both runs: the F5 provider now
reads a real name, but the aggregate, not the streamed level. Porting SoT's
streaming-key resolution remains open. The smoke harness strips RESOT_/RECOMP_
variables and runs unfocused, so Hor+ (RECOMP_HW_ASPECT) and movie skip
(foreground window required) are not runtime-verified here. Menu background,
mouse menus and full gameplay remain unverified.

Follow-up 2026-10-25. Users report correct speed with the timestep build. A D3D11 run
with the user's bin/reww-options.ini (logs/hooks-rate-d3d11.txt) measured
1.000 game/wall during menus and tutorial with flag 0091EF38=1; the
`[TIME]` diagnostic printed measured intervals 10-14 ms. The user reported
no widescreen and `SuperWorld` in F5. Cause: reWW lacked reSOT's CMake default
aspect, so RECOMP_HW_ASPECT stayed unset and the Hor+ hooks were inactive.
Host-only rebuild (`pipeline.py --build-only`, exit 0). A direct 170-second
run (logs/hooks-ws-err.txt, logs/hooks-wow.txt) prints `projection widened
1.3333x` and `culling half-angle 0.7854 -> 0.9273 rad`; the provider logs
MenuBoot, Menu, 010_Deck, 010_Cale, 010_Cale+DeckPart2 rather than
SuperWorld. The guest-surface dump is 640x480 (pre-host widening); the final
16:9 window and HUD placement need the user's visual check.

## 2026-10-31: pre-commit checks

Commands from the repository root:

```powershell
python tools/check-hlsl.py
git diff --check
```

All ten shader probes and the whitespace check pass. From
`port/third_party/xboxrecomp`, with the Visual Studio 18 Community
`VC/Auxiliary/Build/vcvars64.bat` environment:

```powershell
python -m unittest tools.recomp.test_coldbranch tools.recomp.test_cmov_parity tools.recomp.test_x87_extended tools.recomp.test_apu_physical tools.recomp.test_seh_frame_owner tools.recomp.test_lifter_frame_bridge tools.recomp.test_lifter_carry tools.recomp.test_lifter_sse tools.recomp.test_lifter_sse_cmp tools.recomp.test_io_port
```

All 59 tests pass. An initial invocation from the repository root using
`port.third_party.xboxrecomp.tools.recomp` module prefixes could not import
`test_seh_frame_owner`, which internally imports `tools.recomp`; the command
above uses the required working directory and resolves that invocation error.

The additional `test_surface_ownership` suite fails its native-backend
`test_production_reclaim_retires_stale_sibling_before_new_claim` fixture at C
compilation: the extracted production code now references `reww_write_log`,
`reww_write_next`, `NgSurface.writes` and clip rectangle fields absent from the
fixture. The other three tests pass. This failure remains unresolved in this
snapshot. No build, boot, rendering or gameplay run was performed for these
pre-commit checks; earlier observations above retain their stated scope.
