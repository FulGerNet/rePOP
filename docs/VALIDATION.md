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
