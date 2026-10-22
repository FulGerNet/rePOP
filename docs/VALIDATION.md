# Validation log

## 2026-10-22: v0.3.0 music restoration and menu input

Compared the uncommitted source tree with `C:/Users/Admin/Desktop/rePOP-reSOT`
(a source snapshot without `.git`) and the current Git HEAD. The previous
snapshot's music callback is synchronous. Removed the local retail override
of XBE callback 0x00096130 and its deferred counter queue in kernel_rtl.c;
the original lifted callback now updates completed/pending bytes before
0x00095BE0/0x00095E80 consume them. Preserved Android's bounded audio queue
recovery and catch-up policy. Removed the temporary APU-MUSIC diagnostics.

Windows retail comparison: `logs/music-before-030.txt` records wholly silent
10-second menu intervals. The actual restored build explicitly recompiled
kernel_rtl.c and recomp_manual.c (`logs/music-restored-030-build.txt`);
`logs/music-restored-030.txt` then records 1829/1829 and 1864/1864 non-silent
blocks in successive menu intervals. The 47.125-second capture is retained
locally as `logs/music-restored-030.wav`. The user first confirmed effects
without music in the old build, then confirmed music is audible in the
properly rebuilt Windows retail menu. An intermediate incremental build
had reused old objects because the copied source retained older timestamps;
that run is not counted as a restored-build test. Menu music is confirmed;
gameplay music and Android listening after this restoration remain unchecked.

Menu fixes use existing hooks; no seeds, lifter output or game bytes changed:

- Demo: XBE main-page builder return 0x0015E8EA resets the host's page,
  choice and binding state before adding Load Map / reSOT Options again.
  A 90-second Windows run with RESOT_MENU_TRACE/RESOT_POINTER_TRACE and
  scripted/live pad inputs recorded both additions and both bindings twice
  after menu reconstruction. This exercised reconstruction, not a complete
  human-controlled gameplay/quit loop. Captures and trace remain in logs/.
- Retail: suppress the pause Options Xbox Live add at return 0x001A33F6,
  as already done at main-menu return 0x00234D3A. Static XBE inspection found
  no pause binder reader of the skipped var+0xD4 choice. The existing
  RESOT_XBOX_LIVE_MENU=1 override retains both entries. A retail pause menu
  interaction after this change has not been visually checked.
- Shared pointer bridge reads the live page stack and each enabled choice's
  text position on the guest input thread; host events never touch guest
  objects. Mouse hover selects a row; a released tap navigates and activates
  through the original pad handler. Context changes cancel presses, physical
  input takes priority, drags do not activate, and stale metadata is probed.
  Windows left-click selects/right-click backs out. Android taps select,
  rightward swipes or Android Back back out. Controller/keyboard remain usable.
- Android clears held touch controls and suppresses its pad overlay in native
  menus, Bink playback and camera viewports with top/bottom cinematic bars;
  it restores the user's visibility preference afterward. Cinematic viewport
  evidence is independent: demo call 0x000EF5A5 (top EDI, height EBP,
  screen+0xA4) and retail call 0x000CFE86 (top EBP, caller height local +0x1C,
  screen+0xA8). Bink taps enter the existing movie skip path. The Halo source
  was a reference for context changes/clearing held controls; no code copied.

Checks run:

```powershell
python tools/check-hlsl.py
python tools/test-menu-pointer.py
python tools/test-audio-resampler.py
python tools/test-apu-irq.py
python tools/run-build-tool.py cmake --build build/tests/native-gpu --config Release
python tools/run-build-tool.py ctest --test-dir build/tests/native-gpu -C Release --output-on-failure -E 'native_direct3d12|native_vulkan|vertex_program'
python tools/run-build-tool.py ctest --test-dir build/tests/native-gpu -C Release --output-on-failure -R 'native_vulkan|native_direct3d12'
.\tools\recomp.ps1 -Target xbox-demo -BuildOnly
.\tools\recomp.ps1 -Target xbox-retail -BuildOnly
.\tools\build-android.ps1
```

Ten HLSL entries pass; both synthetic menu-layout tests, both resampler tests,
the pending-IRQ/gate tests, ten GPU/support tests and the D3D12/Vulkan GPU
readback tests pass. The IRQ runner's obsolete demo-only extraction marker
was updated to extract the current shared dispatcher. Four separate whole
APU/IRQL regression project builds were interrupted while rebuilding redundant
shader-compiler dependencies; they are not claimed as completed checks.
Both Windows executables and the release APK build with version 0.3.0
(Android versionCode 5). Logs use the `logs/v030-*` prefix.

Limitations: no connected device in `adb devices`, so this APK was not installed
or touch-tested. End-to-end mouse activation on every original menu/dialog,
Android cutscene/background transitions, retail pause layout, gameplay music,
and full-game correctness remain under validation. These checks establish
source behavior, compilation and the observations above, not full playability.


## 2026-10-22: shadow / touch / Android audio and thermal follow-up

User confirms the preceding geometry-cache build is much better on a rested
phone. Preserve that cache. User requests shadow visibility in retail, transient
demo wall-shadow stretching, clearer touch icons, delayed cutscene audio and
less sustained heating; explicitly requests installation with NO game testing.
User also confirms retail shadows were missing at High, so Off suppression is
not a sufficient explanation.

Code changes (not yet observed in gameplay):

- Both render hosts/targets: RGB565 texture samples supply implicit alpha one,
  including BGRA-backed render targets whose RGB-only silhouette writes retain
  clear alpha zero. Existing retail trace logs/retail-hud-after-err.txt has
  RGB565 256x256 casters, black clears, RGB-only writes, and alpha-tested
  ZERO/ONE_MINUS_SRC_COLOR receivers. Host alpha zero can reject those receivers
  even at High; this is a concrete code-path defect, not a verified on-device
  explanation for every absent retail shadow.
- Shadow caster/receiver provenance is retained but no longer omits character
  shadows at post-processing Off. Existing auxiliary resolution budgets remain
  (Off 64x64, Low 128x128, Mid 192x192, High 256x256 for the known 256x256 maps).
  Proven receiver samples outside the projected footprint or with nonpositive/
  near-zero projector W become neutral black. This targets edge stretching on
  walls without applying clipping to ordinary materials. No guest geometry or
  XBE constants changed. Demo wall artifacts and retail visibility await user
  confirmation; no new arbitrary depth-test override or replacement shadow.
- Android touch icons only: first-person eye and overhead-camera pictograms
  exchanged, RT shield replaced by a runner/wall-action glyph, A shows a tucked
  jumping figure with upward-motion marks below. Button bits, triggers, saved
  positions and control keys remain the same. Idle rumble poll is 48 ms,
  active rumble remains 16 ms. Appearance was not rendered/tested on device.
- Android SDL audio: compare input queue duration with available output converted
  to input-equivalent bytes, taking the maximum (not summing overlapping data).
  Prime two blocks instead of four; at a twelve-block backlog or a submission
  gap over 150 ms clear pending stale stream audio and accept the newest block.
  This bounds stream backlog, not total hardware latency or every guest-sync
  issue. Android retail APU permits sixteen monitor blocks of scheduler catch-up
  instead of losing time after one; Windows retail remains unchanged. No claim
  that every cutscene remains synchronized without testing the reported scene.
- Android PowerManager thermal callbacks set temporary 90/60/45/30 FPS budgets
  at Light/Moderate/Severe/Critical and above; a lower saved user cap wins.
  Cooling waits 30 seconds before raising the budget, then restores the user's
  configured limit. The INI is not overwritten. Display refresh follows the
  effective cap; pacing sleeps without changing guest simulation clocks.
  No per-frame JNI, temperature polling, thermal bypass or resolution downgrade.
  Thermal callbacks are Android-specific; Windows keeps its existing FPS policy.

Verification limited to compilation/installation per user instruction:

- python tools/check-hlsl.py: all 10 entries compile.
- tools/recomp.ps1 -Target xbox-demo -BuildOnly and -Target xbox-retail -BuildOnly:
  both succeed (shared shader/raster code; no executables launched).
- tools/build-android.ps1: release APK including both targets builds in 46 s.
- adb pulls the actual installed prior APK to logs/shadow-audio-before/device.apk,
  then adb install -r bin/reSOT-android.apk returns Success. Installed package
  SHA-256 equals the local new APK. No app/activity launch, screenshots, GPU test,
  audio playback test, thermal run or gameplay input was performed.

Evidence: logs/shadow-audio-{shaders,android-build,demo-build,retail-build}.txt.
Rollback: logs/shadow-audio-before/source, device.apk (actual prior package),
installed.apk (prior local package), and both prior Windows executables.
Keep unrelated pre-existing changes and the confirmed geometry/material caches.

Primary API references: [SDL queued input](https://wiki.libsdl.org/SDL3/SDL_GetAudioStreamQueued),
[available output](https://wiki.libsdl.org/SDL3/SDL_GetAudioStreamAvailable),
[Android thermal callbacks](https://developer.android.com/reference/android/os/PowerManager.OnThermalStatusChangedListener).


## 2026-10-22: Vulkan input-geometry reuse installed

The user clarifies the previous 100 FPS baseline came from another build and
mostly empty views. Do not treat the earlier 100-to-80 report as a controlled
20% regression. Read the other local chat, "Ottimizza il rendering Vulkan",
and compare logs/vulkan-selective-before.apk with the restored base: both
SHA-256 3E8F39C27FB4CD701D5E5EE3DA887087096D41BF35849FB827066501495213F0.
This recovers the confirmed material-cache baseline, not a promise of 100 FPS.

Change: Vulkan's native GPU vertex path reuses input vertices and expanded
indices already in the append rings, including across submissions and frames.
The cache checks the complete guest index list, ordered input layouts/current
attribute bits, and every byte of merged source spans. Hashes select slots
only. Inline payloads, invalid/oversized source spans and cache-budget failures
retain conversion/upload. At most 2048 lookup entries / 16 MiB source snapshots;
individual snapshots are at most 256 KiB. Ring wrap flushes queued references,
advances a generation, and cycles both buffers before any new writes; previous
in-flight backing storage keeps SDL's existing retirement. Successful hits
still issue their draws, constants, material state and visibility queries in
guest order. All-hit runs omit the staging map and GPU copy pass. No geometric
LOD/culling, quality, resolution, pacing or guest shader math was changed.
Both targets use runtime input state, without shared-XBE address assumptions.

Essential commands/results:

- python tools/check-hlsl.py: all 10 entries pass (shaders unchanged).
- cmake --build build/tests/native-gpu --config Release --target
  geometry_cache_regression native_gpu_smoke, then ctest -C Release
  --test-dir build/tests/native-gpu -R '^exact_geometry_cache$'
  --output-on-failure: pass. Checks source changes anywhere in each span,
  index/layout/current-value changes, overlapping span unions, generation
  mismatch and snapshot ownership/bounds.
- RESOT_GPU_BINDINGS_SMOKE=1 native_gpu_smoke.exe vulkan: pass. Short existing
  GPU check covers texture/resource cycling, exact readbacks, light-map borders,
  576 combiner comparisons, depth/scissor, precise visibility 4096/2048/1024/5120
  and resize. It is not a complete integration test of the native draw queue.
- tools/recomp.ps1 -Target xbox-demo -BuildOnly and -Target xbox-retail -BuildOnly:
  both succeed. tools/build-android.ps1: both-target release APK succeeds, 35 s.
- adb install -r bin/reSOT-android.apk: Success. Retail started through the
  existing GameActivity with the installed retail data; gameplay image inspected.
  logs/vulkan-geometry-retail-final.txt includes 1,010,259 geometry hits,
  459,268 misses, 212,760 bypasses, 14,966,740 source bytes, ring generation 278,
  and 7,301,495,440 cumulative upload bytes avoided. These counters prove reuse,
  not an FPS percentage; views/draw counts change during user play.

User says FPS are going well and suspects the long active phone session may
affect performance. No thermal profile was acquired and the hypothesis is not
confirmed. A same-scene live toggle was offered but not performed; stop further
experiments and leave the active game alone per the short-test workflow.
No sustained-60/100-FPS, demo-device gameplay or Windows-gameplay claim.

Developer controls: RESOT_NATIVE_GEOMETRY_CACHE=0 disables reuse. Optional
RESOT_NATIVE_GEOMETRY_CONTROL points to an ASCII 0/1 file sampled every five
seconds. Android opts in only if geometry-cache-control exists at startup.
The diagnostic file created for this session was removed with reuse still on;
ordinary future starts do not poll for it. No user settings or saves changed.

Rollback: logs/vulkan-geometry-before contains source snapshots, both original
Windows executables and the original installed APK; the latter is also backed
up in logs/vulkan-next-before. Existing unrelated local edits remain intact.
Evidence: logs/vulkan-geometry-{android-build,demo-build,retail-build,tests-build,
test,gpu,shaders,retail-on,retail-final}.txt and vulkan-geometry-retail.png.


## 2026-10-22: compact vertex constants / reduced exports withdrawn

Studied the local Black native/vulkan.cpp and vk_shader.cpp read-only, plus
Khronos descriptor/buffer and tile-rendering guidance. No reference code copied.
Tried dense static vertex constants with full relative-palette/reference
fallback, deduplicated actual uploaded values, and d0/fog/t0-only vertex exports
for the existing exact simple fragment path. Shared Windows/Android code,
no guest addresses, generated game code, quality, settings or resolution changed.

Commands/results before withdrawal:

- python tools/check-hlsl.py: all 10 shader entries pass.
- cmake --build build/tests/native-gpu --config Release --target native_vsh_compare;
  ctest --test-dir build/tests/native-gpu -C Release -R '^vertex_program_vulkan$'
  --output-on-failure: passes, 112 GPU comparisons in 6.2 seconds, including
  compact static/high-index constants, relative palettes and both output ABIs.
- tools/recomp.ps1 -Target xbox-demo -BuildOnly and -Target xbox-retail -BuildOnly:
  both succeed. tools/build-android.ps1: release APK succeeds (35 seconds).
- adb install -r bin/reSOT-android.apk: Success. Retail title inspected on device.
  Constant-upload log: 76,736,832 actual / 465,497,088 full-layout opportunity bytes
  (83.5% fewer bytes). This counter is not a measured FPS improvement.
- Additional targeted checks also pass: native_vulkan (106.62 seconds) and
  vertex_program_direct3d12 (0.52 seconds). Passing tests did not predict the
  user-observed gameplay regression; the experiment remains withdrawn.

User reports about 80 FPS at locations previously above/around 100 FPS. This
is sufficient to reject the experiment; no controlled A/B or driver-level cause
was established. No demo-device gameplay or Windows-gameplay claim is made.

Rollback completed: restore exactly the four experiment source files from
logs/vulkan-next-before/source, with SHA-256 equality checked for each. Restore
both pre-experiment Windows executables and bin/reSOT-android.apk. adb install -r
logs/vulkan-next-before/installed.apk returns Success; launcher reopened. No
uninstall, save deletion, git reset or reversion of pre-existing local edits.
Rejected sources/APK retained under logs/vulkan-next-rejected; previous installed
APK, Windows EXEs and source snapshots remain under logs/vulkan-next-before.
Evidence: logs/vulkan-next-{tests,tests-build,android-build,demo-build,retail-build,
retail}.txt and vulkan-next-launcher.png (retail title despite the filename).


## 2026-10-21: selective descriptor binding withdrawn

User reports the same location fell from over 100 FPS to 88 FPS after
selective descriptor binding. This is user-observed, not a controlled GPU
profile; the internal driver cause is not established. Preserve regression
log logs/vulkan-selective-regression.txt. adb install -r of the preceding
logs/vulkan-selective-before.apk succeeds and retail is restarted. Material
descriptor caching is preserved. The patch script removes selective binding
from already patched SDL trees and restores the full four-set binding.
No new performance gain is claimed; restored performance awaits user feedback.


## 2026-10-21: confirmed material-cache gain, selective descriptor binds

The user confirms a large performance gain with the material descriptor cache
and asks for further work. Preserve that cache. The incoming retail log
logs/vulkan-after-material.txt has 70.9-71.7 FPS windows at 378 draws/frame,
about 34,000 vertices and 8.4-8.8 ms executor time. This is a different view
from the 1613/1622-draw slow view and does not establish its sustained 60 FPS.
Shader reference waits stay fixed at 48.2 ms cumulative in these windows.
A six-second simpleperf sample records 55,270 CPU-cycle samples (one kernel
sample lost): executor thread 43.87% of process cycles, scanner/callees 40.94%,
method dispatcher self 1.46%. Evidence: vulkan-after-material-profile.txt.
These CPU samples are not GPU execution time and were not a controlled A/B.

The driver still bound all four graphics descriptor sets even if only one
uniform offset or material set changed. Add resot_descriptor_bind_vulkan.inc
and an idempotent patch stage in tools/patch-sdl-gpu-query.py. Snapshot set
handles before descriptor builders/cache hits, then bind the minimal changed
contiguous interval. Vertex dynamic offsets belong to set 1, fragment offsets
to set 3; count/index only those included in the selected interval. If no
descriptor/offset changes, omit the descriptor bind (vertex-buffer binding
still occurs independently). A different full resource-layout object forces
all four sets. Track the actual bound layout separately from selected PSO
layout and reset it on command-buffer acquisition. Existing material keys,
resource ownership, shader math, draw ordering and visibility remain intact.

Essential verification:

- Apply tools/patch-sdl-gpu-query.py twice successfully; shader checks pass ten.
- tools/build-android.ps1: both-target release APK builds (16 s).
- Build Windows SDL3.dll and copy it to bin for both native Vulkan targets.
- Build descriptor_bind_regression and native_gpu_smoke. Run only
  selective_descriptor_bind via ctest: pass (0.01 s). The production helper
  is checked for initial full binding, no-op, vertex-only/fragment-only dynamic
  offsets, sampler-only zero-offset binding, mixed interval, and layout change.
- Run native_gpu_smoke vulkan once with RESOT_GPU_BINDINGS_SMOKE=1: ring and
  texture cycling/readbacks, borders, 576 simple-combiner comparisons,
  color/depth/scissor, precise queries 4096/2048/1024/5120 and resize pass.
  No full optimizer stress or long gameplay benchmark was repeated.
- adb install -r bin/reSOT-android.apk succeeds, retail starts; the confirmed
  material-cache APK is retained at logs/vulkan-selective-before.apk.

Logs: logs/vulkan-selective-{android-build,sdl-build,test-build,bind-test,
gpu-smoke,shaders}.txt. This new selective-bind build is installed for the
user's FPS/image assessment. The confirmed large gain concerns the preceding
material cache, not this unmeasured follow-up. No quality, resolution, saves
or controls were changed. Both Windows/Android and both targets share the
driver change; D3D12 behavior is unchanged. The app is left running.


## 2026-10-21: material descriptor cache after Black comparison

Compared the supplied Black checkout's native/vulkan.cpp Set/BindSet and
frame descriptor-pool management, read-only. Black caches image/sampler
combinations per frame and binds per-draw constants through dynamic offsets.
reSOT's preceding driver change only retained the current descriptor set:
A/B/A material changes could still allocate/update A a second time.

Implemented an independent bounded command-local material descriptor cache
in port/third_party/sdl-gpu-query/resot_descriptor_cache_vulkan.inc, injected
by tools/patch-sdl-gpu-query.py into the pinned SDL Vulkan driver. It has
64 direct-mapped lookup slots, a full key (set layout, active view/sampler
identities and count), and immutable cached VkDescriptorSets. Collisions
become misses; storage resources and more than eight samplers use the
upstream builder. Cache identities reset on command-buffer acquisition.
Descriptor pools and resources keep SDL's existing fence-based ownership;
no cached set is modified or freed while earlier draws might consume it.
This is shared by Windows/Android Vulkan and both targets; D3D12 is unchanged.
No Black code, shader SDK implementation, addresses or game assets were copied.

Primary guidance: [Khronos descriptor management](https://github.com/KhronosGroup/Vulkan-Samples/blob/main/samples/performance/descriptor_management/README.adoc)
recommends content-based descriptor reuse to reduce CPU allocations/updates.
Its published speedup is its sample's result, not a reSOT prediction.
Further differences still requiring separate work/evidence are Black's direct
upload ring and frame submission lifetime versus reSOT's staging/frequent
retail visibility submissions. Guest report ordering cannot simply be removed.

The input log logs/vulkan-next-retail.txt records 27.7-27.8 FPS windows at
1613 draws/frame and about 26.6-26.9 ms executor time, plus a later 23.1 FPS
window at the same draw count with 33.92 ms executor time. These observations
are from the preceding continuity build and are not a controlled comparison
against 1622-draw earlier samples. Shader reference waits remain 21.5 ms
cumulative in these windows. This does not establish sustained 60 FPS.

Essential verification only, per the user's direct-install preference:

- Apply tools/patch-sdl-gpu-query.py twice to the pinned source: passes.
- python tools/check-hlsl.py: all ten entries pass.
- tools/build-android.ps1: release APK with both targets builds (17 s).
- python tools/run-build-tool.py cmake --build build/deps/sdl-query-build
  --config Release --parallel: Windows SDL3.dll builds, copied to bin.
- Rebuild native_gpu_smoke; run once with vulkan and
  RESOT_GPU_BINDINGS_SMOKE=1. Vertex/texture cycling, exact readbacks,
  border cases, 576 simple-combiner comparisons, depth/scissor, precise
  visibility counts 4096/2048/1024/5120 and resize pass. Unrelated optimized
  fragment compiler stress is omitted, as in the preceding targeted check.
- adb install -r bin/reSOT-android.apk succeeds; retail is started. The
  preceding installed APK is retained as logs/vulkan-material-before.apk.

Logs: logs/vulkan-material-{android-build,sdl-build,test-build,gpu-smoke,
shaders}.txt. The material-cache build is installed for the user's FPS/image
assessment; its device speedup and 60 FPS remain unverified. The app is left
running. Options, internal resolution, effect quality, samples and guest draw
order are unchanged. Existing unrelated working-tree changes are preserved.


## 2026-10-21: first direct-install descriptor continuity build

The user requests direct build installation and will assess gameplay/FPS,
with fewer automated experiments. The 60 FPS target requires the complete
frame below 16.7 ms; the preceding heavy-view executor still measured about
35 ms, so this remains an objective rather than an achieved result.

Inspection of the pinned SDL Vulkan driver found unconditional descriptor
invalidation on each PSO bind and clearing of descriptor/resource identities
on each render-pass end. tools/patch-sdl-gpu-query.py now preserves this state
within one command buffer. Identical cached resource-layout identity is the
admission condition for retaining clean descriptor sets. Different layouts
mark all sets dirty; existing resource/texture-view/UBO dirty flags remain
authoritative. Command-buffer acquisition resets the new layout identity and
the original binding state. Offset-only changes omit a zero-write descriptor
update call. Vulkan graphics bindings survive pass boundaries and remain
separate from compute bindings, per the
[Khronos specification](https://docs.vulkan.org/spec/latest/chapters/descriptorsets.html).
No quality, resolution, visibility samples or draw order are changed.

Commands/results:

- python tools/patch-sdl-gpu-query.py build/deps/sdl-source/SDL3-3.4.18:
  applied, then applied again successfully to check idempotence.
- python tools/check-hlsl.py: ten entries pass.
- tools/build-android.ps1: release APK builds with both targets.
- python tools/run-build-tool.py cmake --build build/deps/sdl-query-build
  --config Release --parallel: Windows SDL3.dll builds and is copied to bin.
  This library is shared by both Windows native Vulkan target executables.
- Rebuild native_gpu_smoke, then run it once with vulkan and
  RESOT_GPU_BINDINGS_SMOKE=1. The targeted real-GPU check passes vertex-ring
  append/wrap, cycled textures, snapshot readbacks, borders, 576 simple-combiner
  comparisons, four color/depth/scissor passes, precise query counts
  4096/2048/1024/5120 and resize. Only the unrelated 64 optimized-fragment
  compiler stress was omitted; the normal full test keeps it enabled.
- adb install -r bin/reSOT-android.apk succeeds; retail is started. The prior
  installed APK is retained at logs/vulkan-bindings-before.apk.

Logs: logs/vulkan-bindings-{android-build,sdl-windows-build,test-build,
gpu-smoke,shaders}.txt. Device FPS/image validation is now left to the user;
no new heavy-scene FPS measurement or 60 FPS result is claimed. The game is
left open. Existing unrelated working-tree changes are preserved.


## 2026-10-21: reported slowdown, independent decoder investigation

The user reports the latest query-resource build feels slower. This follow-up
uses reSOT logs, CPU sampling and same-session A/B tests, not another port.
The new Android log contains repeated 18.4-19.3 FPS windows at 1622 draws/frame,
about 116,000 uploaded vertices/frame and roughly 39 ms executor time.
Reference waits remain at 43.8 ms cumulative; no compilation-skipped draws.
The query cache stabilizes at 46 allocations with tens of thousands of reuses.
That establishes a slow scene, not proof that allocation pooling caused it.
An eight-second simpleperf capture has 70,448 CPU-cycle samples (7 kernel
samples lost); the executor thread accounts for 52.20% of sampled cycles,
49.34% in the scanner/callees, and method dispatch has 4.51% self samples.
Evidence: ignored logs/vulkan-regression-{retail,profile}.txt.

The first diagnostic build batches pure payloads but still calls the vertex
upload setters per word. Same-session modes, each held for 32 seconds, with
the last three five-second windows summarized by their median:

| Mode | Payload dispatch | Query reuse | FPS median | Executor ms median | Draws/frame |
| --- | --- | --- | --- | --- | --- |
| 0 | Scalar | On | 20.9 | 37.56 | 1622 |
| 1 | Batched | On | 21.8 | 34.15 | 1622 |
| 2 | Scalar | Off | 22.2 | 31.40 | 1622 |
| 3 | Batched | Off | 26.8 | 27.53 | 1622 |
| 1 repeated | Batched | On | 24.0 | 33.82 | 1622 |
| 3 repeated | Batched | Off | 21.2 | 35.25 | 1622 |

The reversal does not reproduce the initial apparent pooling win/loss.
FPS and CPU cost drift substantially even when draw/vertex counts match.
CPU-frequency snapshots also vary, but were not collected synchronously with
every window. Do not call this a proven pool regression, a controlled 28%
speedup, or evidence that all remaining cost is in GPU shaders. Conservatively
restore Vulkan's previous native-query allocation/retirement policy; D3D12
keeps its tested reuse path. Precise samples, fences and report ordering stay
intact. The opt-in developer control still permits either policy.

Final implementation:

- The two existing command walkers validate the contiguous packet prefix
  against PUT/end and the physical-memory bound before offering it to the
  executor. Pure program/constant uploads, 16/32-bit indices and inline vertex
  payloads avoid per-word generic method dispatch. State transitions, surveys,
  verbose logs, frame traces and overflow diagnostics keep their scalar path.
- Vertex uploads compare/copy contiguous raw bytes, invalidating their content
  generation once per changed run. Partial cursors, ignored invalid slots,
  uint32 slot wrap, signed zero and NaN payloads match scalar execution.
- RESOT_PB_PAYLOAD_BATCH=0 selects the old dispatcher. The optional developer
  file control also permits same-session comparisons, with no file access in
  the packet hot path and no query/draw omission.

Final contiguous-upload A/B, with Vulkan query pooling off in all phases:

| Same-scene phase | FPS median | Executor ms median | Draws/frame |
| --- | --- | --- | --- |
| Scalar reference | 20.6 | 38.40 | 1622 |
| Contiguous uploads | 21.5 | 34.85 | 1622 |
| Scalar reference repeated | 20.8 | 38.27 | 1622 |
| Contiguous uploads repeated | 21.5 | 34.69 | 1622 |

The reverse comparison reproduces about 9% less executor time and 3-4% more
FPS in this heavy view. It does not resolve the remaining near-20-FPS case.
Vertex counts remain near 116,000/frame, texture uploads near one/frame,
reference waits fixed at 37.2 ms cumulative, and no draws skipped compiling.
CPU timings are half-second snapshots alongside five-second FPS windows,
so this is a repeated local comparison, not a universal frame-time guarantee.
Evidence: logs/vulkan-ab-final-{scalar,bulk,scalar-repeat,bulk-repeat}*.txt.
The user held the camera still for both comparisons. The final APK is
installed; the diagnostic control file was removed after selecting batching
on / pooling off, matching production defaults. The game remains running.

Final validation commands are the documented BuildOnly commands for demo
and retail, tools/build-android.ps1, tools/check-hlsl.py, and:

```powershell
python tools/run-build-tool.py cmake --build build/tests/native-gpu --config Release
python tools/run-build-tool.py ctest --test-dir build/tests/native-gpu -C Release --output-on-failure
python tools/run-build-tool.py cmake --build build/tests/vsh-generation --config Release
python tools/run-build-tool.py ctest --test-dir build/tests/vsh-generation -C Release --output-on-failure
```

GPU/support/decoder suite: 12/12 in 112.77 s. Interpreter: 1/1, including
raw-bit equality, mixed scalar/contiguous cursors, invalid slots and wrap.
Build/test logs: logs/vulkan-regression-final-{android-build,demo-build,
retail-build,tests-build,tests}.txt and vulkan-regression-vsh-build.txt.
The device image/log are logs/vulkan-regression-final.png and
logs/vulkan-regression-final-retail.txt. No sustained-60-FPS claim is made.

The final version is built for both Windows targets and Android, and installed
on the connected Android device with the user's restart authorization.
All twelve GPU/support/decoder tests pass; the vertex-interpreter regression
also verifies contiguous/scalar mixed uploads, invalid slots and cursor wrap.
Shader checks still pass all ten entries. Windows retail's diagnostic build
passed a 35-second Vulkan menu run. No game settings or resolution were changed.
The original installed APK is retained at logs/vulkan-regression-before.apk;
the attempted separate save pull stalled and was canceled, leaving device
saves intact. Existing unrelated working-tree changes are preserved.


## 2026-10-21: Vulkan cache, scheduling, constants and query resources

Read-only comparison with Black Android native/vulkan.cpp and
native/vk_shader.cpp; primary Khronos/SDL references and live profiling
details are recorded in [VULKAN-PERFORMANCE.md](VULKAN-PERFORMANCE.md).
Shared changes remove the cache lock from disk/validation work, replace
pipeline polling with completion notification, queue missing reference jobs
before waiting, cache unchanged vertex-program generations, avoid dirtying
identical constants, pool completed visibility resources, and avoid repeated
adjacent polling of the same pending fence. No generated guest C or seeds
were edited. Existing working-tree changes were preserved.

Final commands/results:

```powershell
python tools/check-hlsl.py
.\tools\recomp.ps1 -Target xbox-demo -BuildOnly
.\tools\recomp.ps1 -Target xbox-retail -BuildOnly
.\tools\build-android.ps1
python tools/run-build-tool.py cmake --build build/tests/native-gpu --config Release
python tools/run-build-tool.py ctest --test-dir build/tests/native-gpu -C Release --output-on-failure
python tools/run-build-tool.py cmake -S port/third_party/xboxrecomp/tests/nv2a_vsh -B build/tests/vsh-generation
python tools/run-build-tool.py cmake --build build/tests/vsh-generation --config Release
python tools/run-build-tool.py ctest --test-dir build/tests/vsh-generation -C Release --output-on-failure
```

Ten HLSL entries pass. Both Windows targets and the release APK (27.3 MB)
build. Eleven GPU/support tests pass in 118.70 s, including D3D12/Vulkan
precise visibility, color/depth/scissor readbacks, translated vertex and
specialized fragment comparisons. Pooling assertions verify nine logical
queries require only two native resources, with seven reuses; old normalized
report samples survive native-handle reuse. The real compiler/cache test
passes corrupted headers, truncated files, input mismatch, invalid SPIR-V,
trailing garbage, four concurrent readers/writers and disabled caching.
The interpreter test passes cursor advancement and bit-exact dirty-generation
checks for repeated values, signed zero and different NaN payloads.

Build/test logs: ignored logs/vulkan-audit-{shader-check,tests-build,
final-gpu-tests,cache-test,vsh-build,demo-build,retail-build,android-build}.txt.
Sandbox MSBuild FileTracker and Gradle native-loader failures were retried
outside the sandbox. An intermediate test rebuild collided with the running
test executable; the final sequential build/test run succeeds.

Windows demo's earlier scheduling/cache build ran for 35 seconds with:
`tools/run.ps1 -Target xbox-demo -Windowed -Seconds 35 -NoVsync -Set
@{RESOT_RENDERER='vulkan';RECOMP_PAD_SCRIPT='2000:a:200,6000:a:200';RESOT_GPU_DEBUG='1'}`.
Menu windows reach 189-199.8 FPS, 66 background PSOs, zero skipped draws,
154 wait calls totalling 4.7 ms; logs/vulkan-audit-windows-demo.txt.
These are warm, uncontrolled startup observations, not an A/B speedup.
The final retail Windows build also ran the equivalent 35-second command;
details are retained in logs/vulkan-audit-windows-retail.txt.

The preceding Android scheduling/cache APK was installed and retail started.
The user played through garden views and reports a large improvement,
explicitly clarifying that dips toward 20 FPS also existed before this work.
Screenshot logs/vulkan-audit-android-retail.png shows textured 1401_Cour
at 43.6 FPS. The live log records heavy windows at 25.4/25.6 FPS with
1,467-1,591 draws/frame, about 28 ms executor time and unchanged cumulative
reference wait time (23.7 ms). The eight-second simpleperf sample confirms
substantial CPU command/encoding work, not a shader-compilation explanation.
Five-second log averages do not capture every instantaneous 20 FPS value.
Profiling is observational, not a controlled benchmark.

The final constant/query-pool APK is built but not installed over that
active game. Its device FPS impact, demo Android runtime behavior, full
gameplay correctness and sustained 60 FPS remain unverified. No game options,
quality, resolution or saves were changed for the live collection.


## 2026-10-21: retail startup and halo follow-up

Rooted Android stacks and loader heap captured an orphaned streaming chunk: item+4=0x20000 with empty task queues and no completed bytes. Retail callback 0x00096130 now defers counter changes until the scheduler acquires its existing critical section (manager 0x00758634, +0x2C); cancellation discards removed-item results before unlock. User confirmed the updated Android build started successfully; repeated cold-start stress testing remains pending. Windows retail/demo and Android builds succeeded.

User confirms halo occlusion works, but white discs remain. The live DXT1 texture at guest 0x81230000 was decoded: the original image has soft rays and falloff. A material-specific presentation adjustment scales final halo RGB constants by 0.25 (net 0.5 texture RGB after the guest 2x combiner), before additive blending/bloom; no texture asset is changed. This is an intentional visual adjustment, not a proven Xbox emulation correction. Shader checks (10), Windows retail build and Android release build passed; APK installed. Visual confirmation of this intensity change remains pending.

## 2026-10-21: Android retail fountain return, pipeline correctness and lifecycle

User input: Desktop/logs/xbox-retail-err.txt (13:56-14:01), screenshot of
1401_CourUpperLevel, and clarification that the final sub-1-FPS windows
followed backgrounding; reopening then showed only touch controls.
Immediately after 1401_MgcFntRm loads, the original log reports invalid
pushbuffer jumps out of physical RAM, including float word 3F000000 at
800E8C38. Pipeline count rises to 737 and 6,243 guest draws are skipped.
This establishes command-stream corruption and missing work, not a broken
translated vertex opcode.

Runtime corrections: retail's legacy fence mirror now snapshots its time
before scanning and commits that snapshot afterwards. Demo keeps its own
policy. Cold translated pipelines use a reference pipeline; if necessary,
wait for that reference rather than dropping geometry, effect writes or
occlusion samples. Inactive blend/depth/culling state is canonicalized in
PSO keys on both native backends. Explicitly enabling fully ordered fences
was rejected: an experimental Windows retail run stalled at one flip for
35 seconds; the final build retains the existing opt-in switch.

Validation completed for the fountain revision:
- python tools/check-hlsl.py: all ten entries pass.
- tools/recomp.ps1 -Target xbox-retail -BuildOnly and xbox-demo equivalent:
  successful (logs/retail-room-fix-build.txt, logs/demo-room-fix-build.txt).
- tools/build-android.ps1: release APK builds with both targets
  (logs/android-room-fix-build.txt).
- ctest --test-dir build/tests/native-gpu -C Release -R
  "native_vulkan|vertex_program_vulkan" --output-on-failure: 2/2 pass,
  109.29 s and 6.97 s (logs/room-fix-gpu-tests.txt). These are shader,
  query and GPU readback regressions, not a synthetic reproduction of the
  guest completion-mirror race.
- Windows retail: tools/run.ps1 -Target xbox-retail -Windowed -Seconds 35
  -NoVsync -Set @{RESOT_RENDERER='vulkan';
  RECOMP_PAD_SCRIPT='2000:a:200,6000:a:200';RESOT_GPU_DEBUG='1'}.
  Final steady menu samples 154.4-160.2 FPS; 75 background pipelines,
  zero skipped draws, 33 reference waits totalling 51.9 ms. No out-of-RAM
  pushbuffer walks. Evidence: logs/room-fix-windows-retail.txt.
- Android: adb install -r bin/reSOT-android.apk, then GameActivity with
  target retail and the installed xbox-retail folder. Copied saves first
  to /sdcard/Download/resot-saves-before-room-fix. The user played the
  fountain passage and confirms that the garden renders correctly on
  return. Retained log: logs/room-fix-android-fountain-confirmed.txt;
  no out-of-RAM PB walks, zero compilation-skipped draws, 254 compiled
  pipelines and 61 reference waits totalling 157.2 ms. This confirms this
  route, not every room transition. Significant scene-dependent FPS drops
  remain (30.4-59.5 FPS examples); waits stay unchanged through several
  drops, so shader compilation alone does not explain them.

Further user report: bright white light sprites cover background objects
and remain visible through occluders. Captured the prepared garden view
(logs/retail-lights-before.png) and one-frame trace
(logs/retail-light-trace.txt). The trace contains additive light quads and
alternating ALWAYS/LEQUAL visibility passes. Correction is still under
investigation; do not describe the light rendering as validated.

Android lifecycle work is separate: SDL_events.h requires immediate event
watchers for lifecycle events, so main_android.c now uses SDL_AddEventWatch.
A device test then reproduced the black return and logcat reported an
abandoned BufferQueue/No such device on Vulkan's old native window. The
user confirms cold restart renders again. The next revision reclaims only
the presentation window after a foreground generation change, retaining
guest images and the composed frame. It builds (logs/android-room-fix-
surface-build.txt). A controlled Home/foreground cycle records renderer
suspended, renderer resumed and Vulkan presentation surface reclaimed (1).
The following device screenshot (logs/retail-surface-fixed.png) shows the
textured garden at 35.9 FPS, with game draws and visibility reports advancing.
This verifies one cycle, not repeated backgrounding or device-loss recovery. Windows has
no Android SurfaceView lifecycle and needs no analogous host change.

MSBuild/Gradle/adb needed unsandboxed execution after access/native-loader
failures. Generated guest C, seeds and XBE facts were not modified.


## 2026-10-21: clear the Android upper-left HUD and FPS panel

The user approves the gold/blue artwork on device. Their 2712x1220 retail
screenshot shows pause and rewind overlapping the FPS panel and back
covering the sand tanks. Move pause and back to (414,36) and (546,36), anchored about the central
overlay toggle, as requested by the user. Rewind moves to (775,40), anchored
to the right edge. Editor SAVE/RESET move to centre +/-150 to avoid overlap.
Only FPS remains in the upper-left corner. These three controls use new
saved-position keys so the correction takes effect even after a previous
SAVE; other custom button positions are retained. Windows has no touch
overlay and requires no matching layout change.

Validation: `python tools/check-hlsl.py` passes all ten shader entries;
`tools/build-android.ps1` succeeds (release Java compilation and lint included).
Both `tools/recomp.ps1 -Target xbox-demo -BuildOnly` and
`tools/recomp.ps1 -Target xbox-retail -BuildOnly` succeed. Windows EXE
FileVersion is 0.2.0 for both targets; Android versionName is 0.2.0 and
versionCode is 4. Logs: `logs/release-020-windows-demo.txt`,
`logs/release-020-windows-retail.txt`, `logs/release-020-android.txt`.
MSBuild required an unsandboxed retry after FileTracker reported access
denied. `git diff --check` passes. These are build checks, not new gameplay
validation.
The revised placement has not yet been inspected on device.

## 2026-10-21: Android gold and blue touch controls

`TouchControls.java` now draws original vector medallions with engraved gold
rims, blue centres and brighter blue pressed states. The supplied Warrior
Within mobile images guide the default placement: movement at bottom left,
rewind at upper left, and jump / shield / sword / dagger / drop along the
right-hand action arc. All existing SDL button and trigger mappings remain.
Separate gold-layout position keys select the new defaults on upgrade while
leaving the previous saved layout intact; SAVE stores edge-relative positions
and RESET uses the same edge anchoring as initial placement.

Validation: `python tools/check-hlsl.py` passes all ten entries.
`tools/build-android.ps1` builds the release APK with both native targets;
Java compilation and release lint pass. Gradle required running outside the
sandbox because its native-platform.dll could not initialize inside it.
`git diff --check` passes. No device installation, visual inspection on a
phone, or simultaneous movement / camera / action gameplay test was run.
Windows has no touch overlay and retains keyboard and controller controls;
no shared runtime or generated game source changed.

## 2026-10-21: retail forming-tank ring follows the HUD on ultrawide displays

The user's 2712x1220 Android Vulkan screenshot showed the empty forming-tank
ring still near x=699 (about x=165 in 640x480 host coordinates), while the
filled tanks were anchored at the left edge. The prior retail exception used
an absolute right<=160 cutoff measured at 16:9; the projected 4:3 column moves
right as the drawable becomes wider, so the ring missed that exception.

`nv2a_hud_layout.h` now compares the small-piece column and width in the
original 16:9 reference frame, scaled about x=320 by widen*0.75. Existing
depth/flatness/projected-frame/height guards and the shared HUD edge shift
are retained. This retail-only classification is shared by D3D11 and native
D3D12/Vulkan on Windows and Android; demo policy is unchanged. No guest
addresses, seeds or generated sources changed.

Validation:
- `python tools/check-hlsl.py`: all ten shader entries pass.
- Build `hud_layout_smoke`, then `ctest --test-dir build/tests/native-gpu
  -C Release -R retail_forming_tank_layout --output-on-failure`: 1/1 passes.
  Covers the supplied phone coordinates, 16:9/20:9/21:9/2712x1220, consistent
  edge anchoring and rejection of central, oversized and lower geometry.
- Both `tools/recomp.ps1 -Target xbox-demo|xbox-retail -BuildOnly` builds and
  `tools/build-android.ps1` succeed (`logs/hud-ring-*-build.txt`). MSBuild
  initially required rerunning outside the sandbox after access denied.
- `adb install -r bin/reSOT-android.apk`, retail GameActivity launch, screenshot
  and log pulls. `logs/hud-ring-after-android.png` shows `1201_CorridorExit`
  with the empty ring directly below the filled tanks at the left edge.
  User confirms: "perfetto ora si vede bene". No extra game testing followed
  that confirmation. Windows rendering was compiled, not visually retested;
  the numerical regression covers the existing 16:9 behavior.

## 2026-10-21: dedicated Vulkan shader translation on both hosts and targets

Studied the supplied Black Android and Halo CE source trees as read-only
references; no code copied. [VULKAN-PERFORMANCE.md](VULKAN-PERFORMANCE.md)
records the inspected files, architectural comparison and implementation.

Windows and Android Vulkan now share straight-line vertex-program translation
and pre-driver optimization of complex fragment programs. Stable, full-key
caches replace the complex-fragment 256-entry ceiling. A versioned disk cache
compares complete inputs and validates cached SPIR-V. Both targets submit their
own programs; no cross-target addresses or generated game C changed. D3D11 and
D3D12 retain their existing shader paths. Background compilation now defaults
on for Windows Vulkan as on Android. Reference pipeline jobs are prioritized
and can draw the original snapshots while dedicated pipelines compile; if
neither pipeline is ready, draws can still be skipped on first use. Failed
translations retain reference shaders. Cold startup is not proven hitch-free.

Commands and results:

- `python tools/check-hlsl.py`: all ten reference entries pass.
- `python tools/run-build-tool.py cmake --build build/tests/native-gpu --config Release --parallel 4`
  and `ctest --test-dir build/tests/native-gpu -C Release --output-on-failure`:
  **9/9 pass** (`logs/shader-translate-tests.txt`). Includes 112 direct/reference
  vertex comparisons, 64 separately rendered optimized/reference combiner
  comparisons and the existing simple-combiner, upload and support tests.
  Vertex readbacks compare exact 8-bit framebuffer values; fragment tests allow
  at most 2/255 per channel, including alpha-discard coverage. Optimized modules
  have no remaining OpSpecConstant/OpSpecConstantOp. A representative one-stage
  fragment module shrinks from 121,376 bytes to 6,068 bytes; another is 6,468.
  This is code-size evidence, not a GPU-time measurement. The full cold suite
  took 269.41 seconds while build work was also active. Initial Vulkan tests
  exceeded a shorter timeout; the final cold-test budget is 600 seconds.
- Additional relative constant/palette reads (including clamped out-of-range
  indices), ARL, negated nonidentity swizzles and partial writes were added to
  the 112-case matrix. Rebuilt `native_vsh_compare`; `ctest --test-dir
  build/tests/native-gpu -C Release -R vertex_program --output-on-failure`:
  **2/2 pass**, D3D12 0.50 s and Vulkan 6.07 s
  (`logs/shader-translate-corner-tests.txt`).
- `tools/recomp.ps1 -Target xbox-demo -BuildOnly`, retail equivalent and
  `tools/build-android.ps1`: both final Windows executables and the release APK
  build. Final logs: `logs/shader-translate-{demo,retail,android}-final-build.txt`.
  APK `bin/reSOT-android.apk`, about 27.3 MB, includes the compiler/optimizer
  and their complete upstream notices. Build tools required execution outside
  the sandbox; original restricted attempts failed in compiler/native services.
- Windows Vulkan: demo 50 s, scripted `22000:start:600,28000:a:600`;
  retail 30 s, `2000:a:200,6000:a:200`, via `tools/run.ps1 -Windowed -Seconds ...
  -Set @{RESOT_RENDERER='vulkan'; RECOMP_PAD_SCRIPT=...}`. Both menus rendered
  and frame dumps were inspected. Each logged seven successful vertex programs,
  no translator failures. Demo run used synchronous compilation before the final
  Windows default changed; retail final run confirms background compilation and
  6,361 reference-pipeline draws while translating. Retail steady menu windows
  were about 157�168 FPS; demo about 186�195. These are not controlled benchmarks.
  Evidence: `logs/shader-translate-*-windows.txt` and `*-frame*`.
- Android device `24069PC21G` (SM8635): `adb install -r bin/reSOT-android.apk`,
  rooted `am start -n com.fulger.resot/.GameActivity --es target demo|retail
  --es game /sdcard/Android/data/com.fulger.resot/files/xbox-demo|xbox-retail`,
  screenshot/log pulls, then force-stop the test app. Both logs report post-
  processing Low and VSync off. Demo menu and `01_GP01_E3_Long` opening scene
  were inspected; retail screenshot shows `1301_Lobby` and the Prince. Recorded
  **18 demo / 36 retail** successful translated vertex programs, no translator
  parse/translation failure messages. Reference-pipeline counters confirm
  temporary fallback draws on-device. Device logs/screenshots:
  `logs/shader-translate-{demo,retail}-android.{txt,png}`; demo scene image is
  `logs/shader-translate-demo-select.png` (its name reflects the capture action,
  not the scene it ultimately showed).

Device demo title windows reached about 87�99 FPS; denser opening-scene windows
still include 48.8�50.3 FPS at about 530�584 draws/frame. Retail scene windows
include about 51.7�78.9 FPS. These are five-second runtime averages, not frame-
time percentiles or matched before/after comparisons. Resolution, frame caps,
scene/camera and old default differences prevent comparison with the previous
60-FPS-limited reports. No causal FPS gain, sustained 60 FPS, full-game shader
coverage or console-accurate visuals is claimed. Existing unsupported shader
semantics, CPU fallbacks, quality-policy gaps and angle-dependent visual defects
remain outside this translation change.

## 2026-10-21: hide Off in the in-game post-processing selector

Both hosts' in-game reSOT Options now cycle Low/Mid/High, skipping Off.
Windows F7 retains Off/Low/Mid/High, and both INI readers still accept
`[Graphics] PostProcessingQuality=0`. An existing Off value is displayed as
Custom in the in-game menu and preserved until that selector is changed.
Android's packaged template, initial value and missing/invalid-key fallback
now use Low (1), matching Windows; existing INIs are not overwritten.

Validation: `python tools/check-hlsl.py` passed;
`tools/recomp.ps1 -Target xbox-demo -BuildOnly` and the retail equivalent
built both Windows executables (`logs/options-xbox-*-build.txt`).
`tools/build-android.ps1` builds the release APK (`logs/options-android-build.txt`).
Initial sandbox builds failed in MSBuild FileTracker (access denied) and
Gradle native-library loading; builds were rerun outside the sandbox.
No game launch, menu interaction or Android device test was performed.

## 2026-10-20: release 0.1.2 and supplied platform defaults

The user supplied separate Windows/Android INIs and explicitly excluded ISO
and installation paths. Their settings are retained in
`port/windows/default-options.ini` and `port/android/default-options.ini`, with
the Windows `[Launcher]` paths omitted. Both use unlimited FPS, VSync off,
texture glow off, logs off, look sensitivity 200%, and the supplied keyboard/
controller bindings. Windows uses D3D11, 150% internal size and effect quality
Low; Android uses Vulkan, 100% internal size and effect quality Off.

Windows embeds its template as resource 203 and creates an absent INI before
the launcher, with CREATE_NEW. Android packages its template as an asset and
creates an absent INI in either launcher or direct game startup, without
replacing an existing file. Native fallback values match each platform's
template. Existing installation paths and preferences are not overwritten by
the initialization code. Windows resources are 0.1.2 (numeric 0,1,2,0), and
Android is versionName 0.1.2 / versionCode 3.

Final commands: `python tools/check-hlsl.py`,
`tools/recomp.ps1 -Target xbox-demo -BuildOnly`, the retail equivalent, and
`tools/build-android.ps1`. Shader checks pass; both Windows executables and the
release APK build (`logs/release-0.1.2-*-build.txt`). These are compilation and
artifact checks. No new game launches, device installs or gameplay tests were
performed for this release, honoring the user's instruction to stop testing.
First-run file creation was not exercised at runtime in these final builds.
The final Windows ZIP contains no separate INI, as requested: defaults remain
embedded in the EXEs, and Android's defaults remain inside the APK. The runtime
creates the user's INI on first launch. Final local artifacts are
`bin/release-0.1.2/reSOT-0.1.2-windows-x64.zip` and
`bin/release-0.1.2/reSOT-0.1.2-android.apk`, with `SHA256SUMS.txt` alongside.
Both EXE version resources report 0.1.2; APK output metadata reports 0.1.2 /
versionCode 3. These ignored outputs are not added to the source commit.

## 2026-10-20: extend the existing effect-quality selector; user confirmation

The user requested one shared quality selector, without additional options,
covering more than the recognized glow/bloom chain. Auxiliary-target quality
now applies from the first clear, including the independently traced demo and
retail 256x256 RGB565 shadow maps. Low/Mid use 50/75 percent dimensions;
High preserves original effect resolution. Off omits recognized caster and
dependent projected-shadow draws as well as the existing screen chains, and
uses 25 percent dimensions for other eligible auxiliary buffers while retaining
unknown material draws. Display/history buffers and tiny pyramid levels are
protected. Viewport dimensions avoid retail's padded-pitch classification gap.
The policy is shared by D3D11 and native D3D12/Vulkan on both hosts.

Evidence and the incomplete all-effects inventory are in
[POST-PROCESSING.md](POST-PROCESSING.md). In particular, water materials,
motion blur and time-power composites are not all independently identified;
this change must not be described as verified control of every visual effect.
`[FX-SOURCE]` records actual sampled-render-target dependencies during a
requested frame trace on all hardware backends. The new
`tools/audit-effect-trace.py` inventories recorded passes without guessing their
material identities.

Commands completed before the user stopped further testing:

- `python tools/check-hlsl.py`: all shader checks passed for both targets.
- `tools/recomp.ps1 -Target xbox-demo -BuildOnly`, retail equivalent, and
  `tools/build-android.ps1`: both Windows executables and the APK built.
  Logs: `logs/effect-quality-{demo,retail,android}-build.txt`.
- `python tools/run-build-tool.py cmake --build build/tests/native-gpu --config Release`
  and the corresponding `ctest --test-dir build/tests/native-gpu -C Release
  --output-on-failure`: 9/9 pass, including real D3D12/Vulkan readbacks and the
  new auxiliary-quality/display-protection/shadow-admission test. These are
  support tests, not full-game effect comparisons.
- Isolated Windows demo Vulkan runs with temporary EXEs/INIs reached title
  images; Low/Mid/High traces record their respective quality. The longer Off
  trace records 22 omitted shadow-caster draws. Longer runs received a window
  close; do not count those as completed gameplay checks. Player INI unchanged.
- `adb install -r bin/reSOT-android.apk`: installed. Android demo Off title
  image inspected (`logs/effect-quality-android-demo-q0.png`), with recognized
  chain/consumer skips in its trace. This is not a gameplay, water or temporal
  effect validation. Other scheduled device checks were stopped.

The user then said: "ok basta test ho provato io confermo che funziona".
Record this as confirmation that the changed option works; no specific target,
backend or individual effect was supplied. Automatic tests were stopped and
the phone's original options file restored. No further testing was requested
or run after that instruction (subsequent release work performs builds only).

## 2026-10-20 (night): retail green screen at Post processing Off, file-error logs

**Retail green screen (user report, reproduced).** Windows, native Vulkan,
`PostProcessingQuality=0`: title, menus and the first courtyard were covered
by a green veil, strongest on the left (`run.ps1 -Target xbox-retail
-Seconds 110 -SnapshotEvery 5`, average G 157-228 in the snapshots). Frame
traces of the title at Off and High show retail's bloom is longer than the
chain the runtime recognised: 640 -> 320x240 -> 160x120 (blur) -> 80x60
(blur) -> 40x30 (blur) -> 20x15 (blur) -> 10x7 (blur), then an additive
640x480 composite reading 10x7, 20x15, 40x30 and 80x60 on stages 0-3
(rc prog 08421), then the 160+320 composite and the separate glow chain.
Only 320/160/80 were classified, so at Off the 40/20/10 passes still ran on
an 80x60 target that was never drawn, and the four-level composite was not
skipped because only stage 0 was checked. The chain test now accepts every
4:3 level from 320x240 down to 10x7 (h = floor(w*3/4), source equal, double
or half), the Off consumer test checks every enabled stage, the target
table holds 32 entries, and Low/Mid scaling leaves levels under 40 pixels at
guest size. After: the Off trace skips all 16 chain passes and all three
composites (`[POSTFX] chain 10x7/20x15/40x30 ... skipped`, `skipped
fullscreen consumer ... 10x7`), and the 80-second snapshot run from the
intro to the first courtyard has no green (average G 26-64). Not checked:
Low/Mid/High pictures after this change, Android at run time, the demo's
chain beyond the 320x240 ping-pong it already had, time-power effects.

**Demo HUD as grey boxes at Off (user report, reproduced, not fixed).**
Windows Vulkan and D3D11 at Off, demo first gameplay (`01_GP01_E3_Long`):
health bar, "Work in progress" and the logo are uniform boxes; at High they
are correct. Traces at Off and High had the same shader, bound textures and
CPU-computed vertex positions/texture coordinates for those draws. The cause
was not found; one untested hypothesis is a stale render-target surface at
the HUD texture's address that High's extra chain surfaces evict. The user
stopped the investigation.

**"win32 err=0" in Android logs.** The demo's sound loader opens
`sound\english\X.SB2` and falls back to `sound\X.SB2` for every bank (Windows
log: ERROR_FILE_NOT_FOUND followed by a successful open). The POSIX backend
never set the Win32 error and printed no path for the demo. It now maps
errno (ENOENT 2, ENOTDIR 3, EACCES/EPERM 5, EEXIST 183, else 31), logs the
host path on Android for both targets (first 16 not-found results, other
errors always), and the bridge logs the first 32 not-found results, then one
line saying further ones are not logged. Not run on Android.

Builds: `tools/recomp.ps1 -Target xbox-demo -BuildOnly` and the retail
equivalent, `tools/build-android.ps1` (`logs/postfx-chain-*-build.txt`).

## 2026-10-20: blank Windows console and missing Android log overlay

The user reports that logs remain unavailable on both hosts, specifying that
Windows opens a console but leaves it empty. The user also confirms that the
Windows log viewer worked before the post-processing repair builds. This
supersedes the earlier unverified logging fixes; no working status is inferred
from those builds.

Source review found an exact Android path mismatch: `redirect_log` writes to
`<data>/logs/<target>-{err,out}.txt`, but the overlay opened the files in
`<data>/` instead. The overlay now opens the writer's `logs/` paths. It retains
the INI-only activation and writes an activation line through the ordinary
stderr logger.

Windows returns to the original file-tail architecture, removing the pipe
redirection added during the previous repair attempts. `resot_redirect_log`
now gives the viewer the precise path it successfully opened. External disk
redirects use `_fileno(stdout)` / `_fileno(stderr)` instead of fixed descriptors
1/2; F6's log reader uses the same correction. This removes the GUI CRT
numbering assumption without changing the game's logging destinations. A
console header reports connected sources or source-open errors, and visible
viewing flushes buffered output. The suspected Windows source-selection
failure has not been reproduced in a running game here.

The post-processing and F11 code is untouched by this logging-only repair.
No game runs or automated runtime tests were started, following the user's
standing request. INI files are not rewritten. `python tools/check-hlsl.py`
passed all ten shader entry points. Both Windows commands,
`tools/recomp.ps1 -Target xbox-demo -BuildOnly` and the retail equivalent,
passed (`logs/log-source-demo-build.txt`, `logs/log-source-retail-build.txt`).
`tools/build-android.ps1` passed (`logs/log-source-android-build.txt`). Outputs
are `bin/sot-xbox-demo.exe`, `bin/sot-xbox-retail.exe`, and
`bin/reSOT-android.apk`. The APK was not installed. Visible console output
and the Android overlay remain subject to user confirmation.

## 2026-10-20: restore Post processing levels, live logs and native F11 frame

The user reports that logging and post-processing settings no longer work in
the previous build and requests the earlier behavior back, with a focused
Off fix. The user also reports that F11 in Windows Vulkan moves/resizes a
borderless image instead of restoring a normal window. No game runs or
runtime tests were started; the existing request to stop tests is retained.

The previous conservative change (keeping intermediate draws at Off) is
reverted. Off skips recognized intermediate draws again. It now also skips
fullscreen consumers whose stage-zero texture belongs to a classified chain
target in the same frame, including consumers without the final glow's alpha
blend state. Vertex coverage is checked; disabled texture stages, UI/bar
rectangles and targets not classified in the current frame do not match.
Low/Mid/High, texture glow and their INI keys remain available. This
supersedes the dependency-preserving workaround documented below.

Windows Console logs resolves its file sources before creating the console,
flushes buffered output while visible, and tees pipe redirects to both their
original sink and the viewer. The Android INI-only overlay is retained.
No INI file or saved preferences were reset for this change.

Source evidence for the F11 correction: bundled SDL 3.4.18 adopts the HWND
and caches BORDERLESS/RESIZABLE from WS_POPUP/WS_THICKFRAME; its Windows
WM_NCCALCSIZE handler then uses those flags. Changing GWL_STYLE alone leaves
SDL treating the window as borderless. F11 now updates both SDL flags before
applying the existing Win32 style and saved placement. The bridge is
Windows-only, shared by native Vulkan and D3D12; Android fullscreen is unchanged.

Build-only results: `python tools/check-hlsl.py` passed all ten entry points;
`tools/recomp.ps1 -Target xbox-demo -BuildOnly` and the retail equivalent
passed (`logs/postfx-restore-demo-build.txt`,
`logs/postfx-restore-retail-build.txt`); `tools/build-android.ps1` passed
(`logs/postfx-restore-android-build.txt`). Outputs are the two Windows EXEs
and the combined Android APK in `bin/`. The APK was not installed.
The SHA-256 of `bin/resot-options.ini` was unchanged before/after the build:
`9D29EBF271BAAA03816C071A4AE3539CF01C7C81BDEEF39C37218DD024A95748`.
The user's original visual report and the reported regressions have not been
reproduced or verified fixed in a game run here. No performance improvement
is claimed.

## 2026-10-20: Post processing Off, stale intermediate textures

The user reports that the new options work, but Post processing Off starts
with a green image; switching it on and off during gameplay leaves a frozen
image over the live scene. The report did not identify a target or backend.
Source review found that `hw_skip_postprocess` skipped intermediate producers
based on render-target dimensions and texture provenance, while only one
final consumer (the 160x120 glow composite) was classified for suppression.
Other consumers could therefore sample the initial clear or the last On image.

The shared correction keeps all classified intermediate draws running at Off
and restores render-target freshness checks for the final composite. Off
suppresses the verified final composite, while Low/Mid retain their 50%/75%
intermediate resolution and High retains native resolution. This is a
conservative dependency fix: Off no longer claims to remove intermediate GPU
work, or to disable every post-processing effect in the title.

No game runs or automated tests were started, following the user's request
to stop testing. `python tools/check-hlsl.py` passed all ten shader entry points.
`tools/recomp.ps1 -Target xbox-demo -BuildOnly` and the retail equivalent
both completed successfully (`logs/postfx-freshness-demo-build.txt` and
`logs/postfx-freshness-retail-build.txt`). `tools/build-android.ps1` completed
successfully for the combined APK (`logs/postfx-freshness-android-build.txt`).
The updated files are `bin/sot-xbox-demo.exe`, `bin/sot-xbox-retail.exe` and
`bin/reSOT-android.apk`. The APK was not installed. Startup, live switching,
visual correction and performance remain unverified here.

## 2026-10-20 (evening): Android demo ISR crash, retail multi-second freezes

Collected with root over adb (POCO F6, `24069PC21G`, Android 16): the crash
buffer, `/data/tombstones/tombstone_*` and the app's `files/logs/` with
history (scratch copies, not committed).

**Demo crash (Reception Hall, user report).** Tombstone 21 (16:47:35) and
the earlier 13–20 that are SIGSEGVs all stop at `sub_002EF6CD+556` on the APU
interrupt thread, fault at Xbox VA `0xFFFFFFBE` in every one. The lifted code
and `tools/xbe-dis.py` show why: the ISR `0x002EDD12` takes the voice object
for the trapped handle, and `0x002EF6CD` reads its neighbour as
`[obj+0x50] - 0x4C`; with that link zero, EDI = `0xFFFFFFB4` (logged
register) and the word read at EDI+0xA is `0xFFFFFFBE`. DirectSound's own
constructor (`0x002F0260`) and remove (`0x002E9F00`) leave the links
pointing at themselves, never at zero, so the object is not a live voice;
which path leaves it so was not found. On the console the read lands in the
flash mirror (0xFF000000–0xFFFFFFFF) and does not fault. The runtime mapped
only 1 MB of flash; it now maps the full 16 MB (falls back to 1 MB if the
host cannot place it). Android log: `Flash ROM aperture: 16 MB`. Not yet
observed: a run through the Reception Hall with this build. The read now
returns zero instead of a BIOS byte, so the ISR then relinks hardware voice
0; what the real console does with its ROM value was not examined.

**Retail freezes.** The 10-second averages do not show seconds-long stops,
but the creation log does: `[HW native] pipeline N (shader 4) created in
…` 149.9, 259.0 and 1315.8 ms (16:55 run), eight creations totalling
12,165 ms in the 15:10 run, 2,793 ms at 15:18; demo 16:46 three totalling
1,885 ms. Shader 4 is `vs_uber` with the full NV2A combiner; the persistent
cache (2.7 MB loaded) helps only for combinations already seen, so a new
area stalls the pushbuffer executor while Adreno compiles. Guest-draw
pipelines are now compiled on two `resot-pso` threads and their draws are
skipped until ready; the 5-second cache save moved to the same threads.
`RESOT_ASYNC_PIPELINES` (default on for Android, off on Windows).

Commands: `tools/build-android.ps1` (passed; installed with `adb install
-r`), `tools/recomp.ps1 -Target xbox-demo -BuildOnly` and `-Target
xbox-retail -BuildOnly` (both passed). Retail started over adb: log shows
`pipeline compilation: background … (2 threads)`, creations marked
`(background)` at 0.3–1.2 ms (all cached), `43 compiled, 146 guest draws
skipped`, title/menu 57.8–59.5 FPS, no crash. Not checked: gameplay in an
area with uncached pipelines (the case that froze), the visual effect of
the skipped draws there, retail occlusion queries over skipped draws, and
the Windows executables at run time.

## 2026-10-20: 0.1.1 build and Android power follow-up

Release metadata: Windows file/product version 0.1.1.0 (display 0.1.1),
Android versionName 0.1.1, versionCode 2. Includes the preceding APU/IRQL
corrections, platform audit and Vulkan specialization work.

Power follow-up changes: Android requests the lowest supported display mode
meeting the selected FPS cap (at least 60 Hz; uncapped retains fastest).
The timer scans inactive slots under one lock per tick, releasing it around
callbacks/signals as before; the 1 ms cadence and dispatch exclusion remain.
Android's no-overlay/no-letterbox path copies the frame at its existing
internal resolution before one final upscale, retaining deferred-frame
lifetime. Movies, native panels and letterboxing retain the general path;
Windows retains its full-size compositor. Lifecycle events also gate new
GPU encoding on a foreground condition; long background/resume behavior
still needs broader validation.

`tools/build-android.ps1` and both `tools/recomp.ps1 -Target <target>
-BuildOnly` builds passed for these changes. Rebuilt APU/IRQL tests pass
for both targets (4/4), and native GPU/support CTest passes 8/8. The texture
cycling test now also verifies exact frame-copy readbacks on Vulkan/D3D12.
Local logs: `logs/thermal-*-build.txt` (ignored).

Device observations: the first power build's retail title remains around
58.1–58.4 FPS. Timer thread samples decrease from approximately 9–16% to
8–8.5% of one CPU, but samples are short and other threads vary. The display
was already at 60 Hz under OS policy before this change; the new window
request explicitly matches 60 Hz, so no measured display-power saving is
claimed on this phone. The exact-copy path logs 1067x480 versus a
2712x1220 display. Synthetic copy correctness passes; broader on-device
copy-path gameplay and movie-transition validation remains incomplete.
`logs/thermal-{baseline,after}-*` and `thermal-snapshot-retail.*` retain
the local evidence. Charging, temperature history and changing load prevent
a controlled power/thermal comparison. No temperature reduction established.

The user reported a pre-existing intermittent black renderer after leaving
and returning. Subsequent automatic and user retests returned the image;
the user accepts the current state and requests the 0.1.1 builds. This is
not recorded as a proven lifecycle fix. Local reproduction logs/images:
`logs/resume-{repro,long}-*` and `resume-long.png`.

## 2026-10-20: Vulkan combiner specialization after OpenCE study

Compared OpenCE's `d3d8_gl.c`, `nv2a_vsh.c`, `nv2a_psh.c`; no code copied.
[VULKAN-PERFORMANCE.md](VULKAN-PERFORMANCE.md) records the findings and
implementation. Added 1/2/4/8-stage host SPIR-V templates, immutable program
keys, bounded shader caching and specialization coverage counters. Shared
Android/Windows Vulkan; existing simple shaders and other APIs retained.

Commands/results:

- `python tools/check-hlsl.py`: all 10 shared entries pass.
- `cmake --build build/tests/native-gpu --config Release` and
  `ctest --test-dir build/tests/native-gpu -C Release --output-on-failure`:
  8/8 pass. Vulkan compares 64 separately rendered generic/specialized
  images (1–8 stages, zero stages, factors, borders, fog, alpha comparisons
  and discard masks), with at most 2/255 difference allowed per channel.
  Existing 576 simple-combiner comparisons and vertex readbacks also pass.
- `tools/recomp.ps1 -Target xbox-demo -BuildOnly`, retail equivalent and
  `tools/build-android.ps1`: both Windows targets and release APK build.
  Logs: `logs/opence-specialize-*-final-build.txt` (ignored).
- `tools/run.ps1 -Target xbox-retail -Windowed -Seconds 20 -Set
  @{RESOT_RENDERER='vulkan'; RECOMP_PAD_SCRIPT='2000:a:200,6000:a:200'}`:
  title reached, specialization active; steady windows 148–155 FPS on PC.
  Not a controlled Windows performance comparison. Local evidence:
  `logs/opence-windows-retail-vulkan-err.txt`.
- `adb install -r bin/reSOT-android.apk`, rooted `am start` for each target,
  `adb pull .../files/logs/<target>-err.txt`, `adb shell screencap -p`:
  final APK installed; demo and retail title images inspected by eye.

Connected SM8635, 480p/100%, FPS limit 60, VSync on: retail title baseline
30.9–31.0 FPS (`logs/opence-baseline-retail-final.txt`); first specialization
build 59.1–59.6 FPS in consecutive five-second windows
(`logs/opence-specialized-retail-v1.txt`). Final compact-template retail
check reaches the title at approximately 59 FPS (`logs/opence-final-retail.*`).
Final demo title 58.8–59.6 FPS; opening `0101_Entree`/`01_GP01_E3_Long`
scenes 54.4–59.4 FPS, later 46.2–51.4 FPS at about 518–690 draws/frame
(`logs/opence-final-demo.*`). These are window averages, not frame-time
percentiles. The user confirms approximately 60 FPS, subsequently reports
drops to about 49, and accepts this improvement for now.

First-use compilation remains visible: some final compact pipelines took
354–876 ms; the initial eight-stage-only prototype took 1.2–1.8 s. Existing
disk caching remains enabled. Some first-run windows include movies/loading
and compilation. Early retail runs also included app backgrounding and
capture interruptions; do not count those as steady gameplay measurements.
No matched demo baseline, long retail gameplay check, console comparison,
sustained full-game 60 FPS or thermal/power improvement established here.

## 2026-10-20: Android corrections audited against Windows

Reviewed changes from the Android bring-up (`e703efa`) through `9e4ed65`
and the subsequent uncommitted APU/IRQL corrections. Compared platform
guards, host defaults, native shader generation, SDL setup and file I/O.
[PLATFORM-PARITY.md](PLATFORM-PARITY.md) records each reviewed category.
No additional missing Windows runtime correction was found: the applicable
APU/IRQL, texture and native-renderer changes already compile for Windows.
POSIX save handling, AArch64 traps, Android scheduling/UI/driver changes
retain their platform-specific implementations. D3D12's fixed vertex pitch
is an intentional restriction, not an optimization accidentally left out.

`llvm-readobj --coff-exports bin/SDL3.dll` confirms both Vulkan cache exports
(`RESOT_SetVulkanPipelineCachePath`, `RESOT_SaveVulkanPipelineCache`) and
both D3D12/Vulkan query APIs in the DLL used by Windows. No dependency
download or DLL replacement was needed.

Validation commands and results:

- `python tools/check-hlsl.py`: all 10 shader entries pass.
- `cmake --build build/tests/native-gpu --config Release` and
  `ctest --test-dir build/tests/native-gpu -C Release --output-on-failure`:
  8/8 pass, including real Vulkan/D3D12 pixel/vertex-program readbacks,
  internal scale, save access and bulk texture conversion.
- CTest in `build/tests/kernel-irql-demo`, `kernel-irql-retail`,
  `apu-frontend-demo` and `apu-frontend-retail` (`-C Release`, selecting
  `apu_frontend_test` in the latter two): 1/1 each, 4/4 total.
- `tools/recomp.ps1 -Target xbox-demo -BuildOnly` and retail equivalent:
  both executables build, including the latest shared audio fixes.

Six sequential Windows startup checks used:

```powershell
./tools/run.ps1 -Target <xbox-demo|xbox-retail> -Windowed -Seconds 20 -Set @{
    RESOT_RENDERER = '<d3d11|vulkan|d3d12>'
    RECOMP_PAD_SCRIPT = '2000:a:200,6000:a:200'
    RECOMP_FB_DUMP = '<absolute logs/windows-parity-<target>-<renderer>.bmp>'
    RECOMP_FB_WINDOW_DUMP_EVERY = '120'
}
```

Each run logged the requested active backend, without D3D11 fallback or a
crash marker, and a non-silent ten-second APU report with zero dropped or
starved output frames in that report. Native runs explicitly logged GPU
vertex programs. Saved images show the demo menu in all three modes,
retail menu in D3D11/D3D12 and retail title screen in Vulkan; inspected by
eye only. The harness stopped each process at 20 s. Logs/images are retained
locally as `logs/windows-parity-<target>-<renderer>.*` (ignored).

These are startup/rendering/audio-production checks, not acoustic listening,
a pixel-exact console comparison, a controlled FPS benchmark, Windows
Sand Birds gameplay, a complete making-of video, or save/relaunch/load.
No claim of a new Windows performance gain is made. No runtime change was
needed in this audit. Corrected obsolete native-renderer documentation and
the packaged F11 fullscreen instruction; game source and data were untouched.

## 2026-10-20: Android Sand Birds crash and retail making-of audio loss

Collected `adb pull /sdcard/Android/data/com.fulger.resot/files/logs
logs/android-20261020-sandbirds`, crash logcat and exit-info. The new demo
crash is **11:09:55**, PID 17251, APU thread `resot-1003`, uptime 206 s:
`sub_002EF6CD+0x22C`, guest address `0xFFFFFFBE`, ESI zero. This is a new
occurrence after the previous dispatch-timeout correction, not merely the
old 2026-10-19 crash. The user identifies the scene as Sand Birds.

The demo trap ISR `0x002EE257` reads FECTL, FEDECMETH and FEDECPARAM
separately, then `0x002EDD12` uses the handle to look up a voice object
before calling `0x002EF6CD`. The runtime overwrote these decode registers
for every PIO command and continued scanning after trapping an idle voice.
An intervening PIO command with argument zero can therefore substitute
handle zero for the pending idle request. This explains a possible route
to the recorded null voice object; no instruction-level trace of the
original fault was captured. Retail `0x003E96EE` reads the same trap fields.

Added `tests/apu_frontend`: two idle voices must report the first one, PIO
writes and another VP poll must preserve that trap, and acknowledgement
must allow the next voice. Before the correction, the retail-mode test
failed all three preservation checks (handle 8 replacing 7; then PIO
method 0x120 / handle zero). After correction, both demo and retail modes
pass. The VP stops scanning at the first trap and waits for acknowledgement;
PIO commands preserve pending decode fields. MMIO writes serialize against
the VP's device mutex. HALTED no longer counts as TRAPPED when raising IRQs.

The retail user log contains five dispatch-lock bypass warnings and forced
DPC delivery. The user reports that all audio stopped during the Extra
Features making-of and remained absent after returning to the menu. The
log's APU output reports cease while movie reads/presentation continue;
it does not identify the stalled instruction or establish that the trap
overwrite caused that failure. A baseline phone retest continued producing
audio, confirmed by the user. With the user's root access, `adb shell su -c
'debuggerd -b 17583'` captured APU stacks during that healthy retest;
no stalled stack was captured. Raw logs/stacks remain under ignored `logs/`.

Retail DirectSound's IRQL scope `0x003E53D0` has the demo scope's exclusion
contract. Extended `tests/kernel_irql_abi` to run ownership/contention checks
in retail mode too: before correction it failed nested callback ownership
and bypassed a competing dispatch owner after 109 ms. Both modes now pass:
callback epilogues restore ownership independently of IRQL, guest raises
wait for exclusion, DPC drains process their entry snapshot, and APU/DPC
delivery stays pending rather than forcing past an owner. These correct
reproduced synchronization defects. The corrected-APK device retest and
user confirmation are recorded below; the exact stalled instruction in
the original making-of session remains unknown.

Validation commands: `python tools/check-hlsl.py` (10 entries pass);
`cmake --build build/tests/apu-frontend-<demo|retail> --config Release
--target apu_frontend_test` and their `ctest -C Release -R apu_frontend_test
--output-on-failure` (1/1 each); corresponding `kernel-irql-<demo|retail>`
builds and ctests (1/1 each); `tools/recomp.ps1 -Target <target> -BuildOnly`
(both Windows builds pass); `tools/build-android.ps1` (release APK builds).
`adb install -r bin/reSOT-android.apk` succeeded, without uninstall/data clear.
Temporary sampling instrumentation was removed before this final APK.

Device retest of the final APK:

- Demo PID 19172: user navigated to Sand Birds; the log confirms
  `04_GP61_Cour_Interieure` / `ACT_SandBird_01`. There are 26 ten-second
  audio reports (about 260 s of output), no crash marker, and a regular
  `HalReturnToFirmware routine=2` exit. Original crash uptime was 206 s;
  exceeding that duration does not prove the same inputs were replayed.
  Evidence: `logs/sandbirds-demo-fixed-exit.txt` and root stack capture.
- Retail PID 23368: user launched the making-of and returned to the menu.
  The user explicitly confirms that audio remained audible and considers
  the issue resolved. The log contains 12 ten-second audio reports (about
  120 s), non-silent output continuing in the menu, and no crash marker.
  Evidence: `logs/sandbirds-retail-fixed-final.txt` and root stack capture.
  The startup lock waits finish without the old forced-delivery warnings.

The user confirms both fixes after these tests. Full Sand Birds completion,
longer/repeated making-of sessions and broader gameplay/audio accuracy have
not been established. Windows gameplay was not run. No generated C, seeds,
guest assets or save data were edited.

## 2026-10-20: launcher restyle (gold on night blue); Android launcher full screen

Both launchers (`port/windows/src/launcher.c`, `LauncherView.java`) were
redrawn after the style of Ubisoft's Sands of Time announcement cards: a
night-blue ground tiled with rosettes and eight-point stars (fainter in the
middle), soft lights, a pair of teal diamonds beside the logo, full-width gold
rules with gold twin diamonds, cyan twin diamonds beside "INSTALLED GAMES",
a gold "Prince of Persia" title, "THE SANDS OF TIME" between gold lines, a
gold "RECOMPILED FOR WINDOWS/ANDROID" badge, and buttons as long hexagonal
plates (navy edged in gold; gold with navy lettering under the pointer or
finger). The Android launcher now fills the screen: system bars hidden
(immersive, swipe to show), drawn under the cutout, the 1000 x 640 plane
widened to the screen's shape instead of letterboxed.

**Run:** `tools/recomp.ps1 -Target xbox-demo -BuildOnly` and
`-Target xbox-retail -BuildOnly` (both built); `bin/sot-xbox-demo.exe`
captured with the pointer away and over Start Game
(`logs/launcher-gold-windows.png`, `logs/launcher-gold-windows-hover.png`).
`tools/build-android.ps1 -Install` (release APK installed with `-r` on the
connected phone, 2712 x 1220), launcher started with `am start`, `screencap`
(`logs/launcher-gold-android.png`). **Seen:** on Windows, both buttons
enabled with their games and folders, the hover plate gold with dark
lettering, the focused Demo plate with a bright edge. On Android, the screen
filled edge to edge with no status or navigation bar, the rules and ground
reaching both edges, the footer links and the left rule's diamonds moved
clear of the cutout. **Not checked:** the retail executable's window (built,
not opened); the installation/progress view and the Cancel plate on either
host; touch, controller and keyboard navigation of the new Android screen;
the swipe that shows the bars; a phone in portrait or a 4:3 tablet; starting
a game from the new screens.

## 2026-10-20: ADB installation and Android retail resolution measurements

User authorized renewed device tests. `adb devices -l` identified the connected
24069PC21G/peridot. `adb install -r bin/reSOT-android.apk` succeeded for the
initial APK and the subsequent revision; no uninstall/data clear was issued.
The initial external `resot-options.ini` did not exist. Benchmark INIs set
FPSLimit=0, VSync=0, PostProcessing=0 and scale 100/50/75. The phone retains
75% (360p) for the next launch; keyboard/controller mappings use their defaults.

Observed retail title screen (animated Menu), system Vulkan, GPU vertex
programs, FPS panel and touch overlay visible:

| Configuration | Observed five-second FPS windows | Evidence (ignored local logs) |
| --- | --- | --- |
| Initial APK, default 480p / VSync on / limit 60 | early steady 29.1-29.4; later windows also near 31 | `logs/android-perf-vsync-on.txt` |
| Initial APK, 480p / VSync off / unlimited | steady windows about 30.6-31.0, with lower transition/stall windows | `logs/android-perf-vsync-off-480.txt` |
| Initial APK, 240p / VSync off / unlimited | about 45 initially, later 48.2-48.9; lower windows also recorded | `logs/android-perf-vsync-off-240.txt` |
| Final APK, 480p / VSync off / unlimited | about 29.4-30.9; no demonstrated gain over the initial APK | `logs/android-perf-final-480.txt` |
| Final APK, 360p / VSync off / unlimited | initial steady windows 36.1-36.5, later 38.3-38.4; a 26.2 window also recorded | `logs/android-perf-final-360.txt` |

Final 360p samples show executor about 11.1-11.3 ms and present about
11.7-12.6 ms; final 480p samples include about 18 ms in present. These CPU
wall-clock intervals include waiting and are not GPU timestamp measurements.
The scale response shows substantial pixel-work sensitivity in this scene.
Do not attribute all changes to VSync or vertex trimming: runs were sequential,
thermals uncontrolled, and later initial-APK windows approached 31 FPS too.
Battery temperature rose from 35.4 to 40.0 C across testing; cached thermal
service temperatures were unchanged and are not reliable per-run samples.
GPU utilization sysfs access was denied; no power reduction was measured.

The final APK also reached the `0101_Porte` opening cutscene (capture
`logs/android-perf-profile.png`, panel 27.6 FPS). This is not a matched-scene
gameplay benchmark. Sustained 60 FPS, demo device behavior in this revision,
full gameplay and save/load remain unverified.

Additional final-revision changes: retail small programs discard completely
empty instructions after pruning dead ALU lanes, preserving END and ARL;
queued program snapshots distinguish original and remapped variants even
when the guest program generation is unchanged. This avoids using a remapped
program for a later generic fragment draw, or the reverse. The demo retains
its shader policy. No generated source, seed or guest address changed.

Validation repeated: `python tools/check-hlsl.py` passed all 10 entries;
`cmake --build build/tests/native-gpu --config Release` and
`ctest --test-dir build/tests/native-gpu -C Release --output-on-failure`
passed 8/8, including 112 original/trimmed pixel comparisons per GPU backend;
both `tools/recomp.ps1 -Target <target> -BuildOnly` builds and
`tools/build-android.ps1` passed. An initial test assertion incorrectly
assumed R7 was unread for every opcode; it was corrected to require trimming
when MAC is disabled, and the suite then passed.

## 2026-10-20: retail small vertex interpreter, unused ALU destinations

Runtime program packing now clears writes to the small shader's omitted
outputs and unread temporary registers. MAC/ILU opcodes with no observable
destination are disabled. ARL address updates remain, and eliminating a
paired MAC redirects the surviving ILU to its original implicit R1 destination.
Selection remains retail-only; demo shader policy is unchanged. No generated
game source, seed, address, resolution or graphics option changed.

Commands and observations:

- `python tools/check-hlsl.py`: all 10 shader entries compiled.
- `cmake --build build/tests/native-gpu --config Release` and
  `ctest --test-dir build/tests/native-gpu -C Release --output-on-failure`:
  8/8 passed, including 112 generic/remapped vertex-program pixel comparisons
  per backend (Vulkan and D3D12), mixed input pitches, and a dead MAC paired
  with a surviving ILU whose destination must remain R1.
- `tools/recomp.ps1 -Target xbox-demo -BuildOnly` and
  `tools/recomp.ps1 -Target xbox-retail -BuildOnly`: both built.
- `tools/build-android.ps1`: release APK built, `bin/reSOT-android.apk`.

Builds required execution outside the sandbox: MSBuild's tracker and Gradle's
native services were denied inside it. An initial obsolete test build tree
also referenced the removed `tests/nv2a_vulkan` source directory; the current
`build/tests/native-gpu` tree was used instead.
No phone installation or gameplay test was performed. These checks demonstrate
equivalence for synthetic probes, not a measured Android FPS/power improvement
or complete game rendering validation.

What was actually run and seen, newest first. Every entry names the command,
the observation and what was **not** checked. Nothing here has been compared
against a console or an emulator yet.

Machine for all entries: Windows 11, i7-9700K, Direct3D feature level 11_0,
MSVC 19.51 (Visual Studio 2026), x64 Release.

## 2026-10-20: Android crash logs, system responsiveness and unmeasured draw optimization

Collected `adb pull /sdcard/Android/data/com.fulger.resot/files/logs
logs/android-20261020-user` (82 files), `adb logcat -b crash -d -v threadtime`,
`adb shell dumpsys activity exit-info com.fulger.resot`, `top -H`, `meminfo`
and `thermalservice`. Original logs are retained locally. The latest recorded
demo native crash is 2026-10-19 21:48:07: `sub_002EF6CD+0x22C`, guest fault
VA `0xFFFFFFBE`, `edi=0xFFFFFFB4`, with the DirectSound voice-list service
on the stack. Earlier logs contain the same fault. Android also records a
retail low-memory kill at 22:18:42 and a system-loading force-stop at
22:18:54; those are different failures from the demo SIGSEGV.

Demo logs show guest raises proceeding without the dispatch lock after the
100-ms timeout. A temporary callback trace (`logs/android-20261020-trace.txt`)
identifies D3D DPC `0x0029FEE0` on runtime thread 1004 spanning such a timeout
and subsequently returning. This is not proof of a permanently leaked lock.
Removed the demo guest-raise timeout bypass: a late callback cannot grant
another thread permission to mutate protected audio lists. Retail's policy
is unchanged. Interrupt epilogues also restore saved guest ownership even
when the callback returns at the same IRQL; demo DPC drains process their
entry snapshot so newly queued work waits for the next drain.

Added a demo-mode regression to `tests/kernel_irql_abi`: nested interrupt
ownership and a competing thread holding the dispatch lock for 200 ms.
The raising thread must wait past the former timeout. Standalone runtime
CMake now resolves native dependencies/shader tools from the repository,
so this regression can be configured outside the top-level project.

Android samples initially show several game threads at Linux nice -20.
Runtime-created workers and the title worker now start at normal priority;
this does not control priorities later chosen by SDL, GPU drivers or Android.
Runtime worker IDs are exposed as `resot-<id>` thread names. The mobile frame
limiter uses nanosleep instead of a polling tail, and both mobile targets use
16/2-MB vertex/index rings rather than the demo's desktop 64/8-MB reuse ring.
An explicit event-loop delay was tried and removed: no demonstrated benefit.

The user confirms system UI no longer lags, but reports demo menu 40–57 FPS.
A one-frame GPU queue was part of that intermediate build; the final
performance source restores SDL's default two frames in flight to retain
CPU/GPU overlap. Neither the reported regression nor the responsiveness
improvement is isolated to one change by a controlled A/B run. A preliminary
fixed-lock run reached `01_GP01_E3_Long` with 33.7/46.5/40.0-FPS windows and
no crash in the captured log (`logs/android-20261020-demo-gameplay.txt`).
This is not a long-playthrough stability guarantee. Thermal conditions were
not controlled and no temperature reduction is claimed.

At the user's request, stopped phone tests. Subsequent performance changes
are local only: native vertex-program inputs use 1/2/4/8 float4 slots rather
than always eight, with 128-byte-aligned mixed-pitch draw/ring offsets.
The packed program still uses the same input map and fetch_attr conversion;
inactive shader locations alias slot zero. Two-input vertices therefore use
32 rather than 128 bytes before inter-draw padding. Viewport/scissor/blend
commands are skipped when unchanged within a pass. These paths are shared
by both targets' native encoders; compact inputs are Vulkan-only because
SDL 3.4.18's D3D12 vertex-view cache does not invalidate pitch on a pipeline
change. D3D12 retains eight slots. No shader quality option or
guest code/seeds/address changed. No device result exists for this version.

Checks before the compact-input change: shader compilation, demo IRQL CTest
(1/1), native GPU CTest (6/6), both Windows `recomp.ps1 -BuildOnly` targets,
Android build and replacement installs passed. Those GPU tests do not
validate the subsequent mixed-pitch input change. The final performance APK
and both Windows targets built successfully with `tools/build-android.ps1`
and separate `tools/recomp.ps1 -Target xbox-demo -BuildOnly` /
`tools/recomp.ps1 -Target xbox-retail -BuildOnly` commands. No final APK
installation or further phone tests were performed. The user confirmed
reinstalling/clearing app data during this work, explaining the new Android
UID and absent options/retail folder; old options are backed up locally.
Copied only retail game files from local Assets for future checks, excluding
CACHE/TDATA/UDATA. No uninstall or data-clear command was issued by the agent.
Sustained 60 FPS in either game, broader crash freedom and final input-packing
appearance/performance remain unverified.

## 2026-10-19: Android demo optimization parity and device measurements

Connected SM8635, system Vulkan, 480p (InternalResolutionPercent=100),
FPSLimit=0, VSync=0, PostProcessing=0. `adb pull` preserved the options as
`logs/android-demo-audit-options.ini`. Before this change, the running demo
logged about 27.5 FPS, 176 draws/frame, 34,330 vertices, executor 7.03 ms,
present 26.92 ms and zero simple-shader draws
(`logs/android-demo-audit-baseline.txt`).

Audit: shader operand reads/identity swizzles, bound-only texture sampling,
pipeline lookup/cache, vertex staging reuse and GPU programs were already
shared. The simple fragment whitelist, bulk P8/ARGB decode and cycling
changed 2D texture images were retail-only. Demo evidence in
`logs/demo-hud-after-err.txt`, `logs/hourglass-ftrace-visible2.txt`, then
`logs/android-demo-simple-trace.txt` independently records the eligible
single-stage words and P8 format 0x0B. Enabled these three paths for the
demo. Retail-only light-map border policy and visibility queries are not
inferred for the demo. No generated guest C, seeds or addresses changed.

Commands: `python tools/check-hlsl.py`,
`python tools/run-build-tool.py ctest --test-dir build/tests/native-gpu -C Release --output-on-failure`
(6/6, including Vulkan/D3D12 shader comparisons, image cycling and scalar
texture conversion), `tools/recomp.ps1 -Target xbox-demo -BuildOnly`,
`tools/recomp.ps1 -Target xbox-retail -BuildOnly`, `tools/build-android.ps1`.
Sandboxed builds initially failed on Gradle/MSBuild access; builds outside
the sandbox passed. `adb install -r bin/reSOT-android.apk` retained data.

With only the simple-shader enablement installed, steady demo title/menu
windows measured 62.9–63.1 FPS, about 94% simple draws, executor 5.28–6.14 ms
and present 7.85–9.04 ms (`logs/android-demo-simple-live.txt`). Screenshot
`logs/android-audit-launcher-ready.png` shows the demo title garden and
62.6 FPS. After Start/A, the game reached `01_GP01_E3_Long`; sampled moving
scenes included 33.8–53.3 FPS windows at 312–706 draws/frame, executor
7–16 ms and present about 8–11 ms (`logs/android-demo-simple-gameplay.txt`).
This is not a matched-scene gameplay A/B test or a minimum-FPS guarantee.

Later near-zero-FPS samples in `logs/android-demo-before-gather.txt` were
collected while Android's home launcher was top-resumed, so are excluded
from foreground comparisons. Thermals are not controlled; the vendor
`socd` sensor reported status 3 despite global thermal status 0.
Sustained 60 FPS gameplay and retail 60 FPS remain unachieved.

A CPU gather experiment hoisted float-format/default decisions out of the
per-vertex loop. A device frame capture compared 162 draws byte-for-byte
against `fetch_attr` with no mismatch (`logs/android-demo-gather-check.txt`).
It did not establish a performance gain: early menu windows stayed at
62.7–63.1 FPS, with executor 6.25–6.61 ms, and later windows varied widely.
The gather change and its temporary trace check were removed. Bulk decode
and texture cycling remain enabled; no separate device speedup is claimed
for them. Shader changes account for the measured menu improvement above.
The final APK was rebuilt and installed with `adb install -r`; both Windows
targets rebuilt successfully. Shader checks and the six native tests passed.
The options SHA-256 before/after is identical
(`logs/android-demo-final-options.ini`); the diagnostic flag files were
removed. No data-clear or uninstall command was used.
Final-build menu verification (`logs/android-demo-final-live.txt`) records
58.8–59.2 FPS in its last three windows, still about 94% simple draws,
executor 7.28–8.04 ms and present 6.34–6.93 ms. The earlier 63 FPS result
is therefore an observed run, not a sustained minimum; sequential runs
were not thermally controlled. The final APK contains the texture parity
changes as well, so no isolated cause is assigned to this difference.

## 2026-10-19: continued Android menu profiling, vertex operand reads

Same connected SM8635 phone and 480p options as the preceding entry;
`adb pull .../files/resot-options.ini logs/android-operands-options.ini`
confirmed FPSLimit=0, VSync=0, PostProcessing=0 and internal resolution 100.
`tools/build-native-shaders.py` now skips unused source reads in the native
vertex interpreter and returns identity swizzles directly. D3D11's shader
reference and guest code are unchanged. Sequential observations:

- Operand reads: steady menu windows around 26.6-26.8 FPS
  (`logs/android-operands-live.txt`).
- Identity swizzles: 27.4-27.6 FPS in the later steady windows
  (`logs/android-swizzle-final.txt`), compared with the preceding 24.7 FPS
  result. These are timing-window averages, not frame minima.
- Scalar broadcast shortcut: about 25.1-25.4 FPS; combined shortcuts about
  26.0-26.4. Removed the broadcast shortcut. Explicit uniform ALU branch
  hints subsequently measured about 27.5 FPS, without a distinct extra gain.

The native simple whitelist also covers untextured diffuse*one passes.
GPU readbacks compare 576 textured/diffuse states, including alpha tests
and stale borders, against the generic shader on Vulkan and D3D12.
`python tools/check-hlsl.py`, native GPU CTest (6/6), both Windows
`recomp.ps1 -BuildOnly` targets and `build-android.ps1` passed.
The GPU tests do not establish vertex-interpreter equivalence over every
possible guest program; the retail menu was inspected on the phone.

An opt-in Android frame capture (`frame-trace-enable` before launch,
`frame-trace.flag` during the menu) produced `logs/android-menu-frame.txt`:
one captured frame has 145 fogged textured single-stage draws, 24 other
textured single-stage draws, 25 untextured single-stage draws, and several
two/three/five/seven-stage effects. No per-draw GPU timestamps were collected.
Both diagnostic files were removed before subsequent timing runs.

A further constant-mask specialization passed 864 synthetic GPU comparisons,
but its device run stalled on the title/loading screen, with zero new
KickOffs and the guest repeatedly calling ordinals 294/277. Start did not
resume it; the user confirmed the freeze. The change was removed and the
previous APK variant rebuilt/reinstalled without clearing saves or options.
This is a temporal association, not an established shader cause.
Recovery was verified with `adb install -r bin/reSOT-android.apk` and a fresh
launch: the animated garden/title returned, with 27.4/27.6 FPS windows and
a later 28.5 FPS window in `logs/android-recovery-live.txt`; screenshot
`logs/android-recovery.png`. Options are byte-identical to the earlier
`android-perf-options-before.ini`. No saves were cleared. The trace contains
an intervening 7.2 FPS transition window, so this is not a minimum-FPS claim.

The 30 FPS minimum goal is still unmet. Around 27.5 FPS means 36.4 ms/frame:
30 FPS needs 33.3 ms and 60 FPS needs 16.7 ms. Remaining vertex interpretation,
complex fragment effects and pass transitions need GPU measurement before
assigning their costs. Sequential tests were not thermally controlled;
`logs/android-branch-thermal.txt` reports overall thermal status 0 alongside
a vendor `socd` status 3, so clock/thermal effects are not excluded.
Gameplay, Android demo performance and sustained minimum FPS are unverified.

## 2026-10-19: Android retail menu, native combiner specialization and FPS touch toggle

The supplied `C:/Users/Admin/Desktop/logs/xbox-retail-err.txt` (16:50:40,
copied to `logs/android-retail-20261019-165040.txt`) shows 16.7-17.6 FPS at
480p: executor 7.65-8.06 ms, present 50.15-50.38 ms, title 1.33-1.42 ms.
The user changed internal resolution during this log: 240p/360p samples
were about 26-27 FPS. Pipeline creation after the first of a shader family
took 0.3-0.9 ms with the existing cache; this is not a repeated 700 ms
compile stall. No visibility queries were active in the menu. These timings
and resolution scaling point to GPU work/backpressure, rather than CPU
texture conversion; present time is not itself a GPU timestamp.

Online review: [SDL GPU performance considerations](https://wiki.libsdl.org/SDL3/CategoryGPU#performance-considerations),
[Android Vulkan design guidelines](https://developer.android.com/ndk/guides/graphics/design-notes),
and [Android GPU optimization tips](https://developer.android.com/games/optimize/optimization-tips).
Relevant points: minimize pass transitions/resource churn, avoid oversized
uniform data and expensive fragment work, retain discard only where required.
The app already uses SDL's native Vulkan encoder; changing optional feature
requirements increases compatibility, not a demonstrated FPS fix here.

With the user's authorization, ADB tests ran on the connected 24069PC21G,
SM8635 phone, system Vulkan. Existing APK and options were preserved in
ignored `logs/android-perf-before.apk` and `android-perf-options-before.ini`.
`adb install -r bin/reSOT-android.apk` updated the app without uninstalling
or clearing saves. Main-menu tests kept InternalResolutionPercent=100,
FPSLimit=0, VSync=0, PostProcessing=0. Screenshots confirmed the same Menu
scene at 2712x1220 display resolution. Sequential observations (discarding
the first two logged timing windows of each sampled run):

| Variant | Timing windows sampled | Menu FPS range | Median |
| --- | --- | --- | --- |
| Existing generic pixel shader | 13 | 16.5-17.1 | 16.9 |
| Opaque single-stage specialization | 7 | 20.1-22.0 | 21.9 |
| Opaque + alpha-tested specialization | 7 | 24.6-24.8 | 24.7 |

Logs: `logs/android-perf-baseline-live.txt`, `android-simple-live.txt`,
`android-simple-alpha-live.txt`; summary `android-performance-comparison.json`.
These are timing-window FPS, not frame percentiles. The tests were sequential,
not thermally controlled; the baseline reported overall Thermal Status 0,
but that does not exclude per-component clock throttling. The gain is an
observation on this menu/device, not a 60 FPS or full-game claim.

`nv2a_native_simple.h` recognizes exact one-stage combiner words, supported
final fog/alpha expressions and alpha comparisons; cubes and other programs
retain `ps_main`. `ps_simple` removes the combiner-register interpreter and
discard for opaque geometry. `ps_simple_alpha` retains the original 8-bit
alpha comparisons for foliage. Both GPU and fallback CPU vertex paths select
the appropriate fragment shader; the specialized pipelines bind one sampler.
About 80% of menu guest draws use these shaders. Vertex programs still use
`vs_uber`; remaining GPU work and CPU overhead limit the frame rate.
`RESOT_NATIVE_SIMPLE=0` disables specialization for developer A/B runs.
Retail only; demo retains the generic fragment path.

Checks: `python tools/check-hlsl.py`, both Windows `recomp.ps1 -BuildOnly`
targets, `build-android.ps1`, and native GPU CTest (6/6) succeed. GPU tests
compare the specialized formulas against the generic shader for 288
combinations of texture/diffuse/constant factors, scaling, fog, borders and
alpha-test state on D3D12 and Vulkan, with per-pixel readback. Android menu
appearance was inspected; broader gameplay and other devices were not run.

The Android FPS button now reads actual native panel state and does not draw
while the panel is visible. Its hit area remains active at the same position.
Windows retains F5 because it has no touch FPS button. The final APK was
installed on the phone; the toggle was checked with screenshots and taps at
the same point. Saves and graphics preferences were retained.

## 2026-10-19: retail gameplay, black light-map borders, forming tank and upload stalls

The user's 15:54-16:19 Windows D3D11 session (`bin/logs/xbox-retail-err.txt`,
preserved as `logs/retail-gameplay-20261019-155444.txt`) reached the garden
after a substantial part of the game, with no crash reported by the user.
`python tools/analyze-frame-log.py logs/retail-gameplay-20261019-155444.txt`
finds 302 timing windows: median 146.3 FPS, minimum 48.6, maximum 289;
3 windows below 60 and 22 below 90. These include menus/loading and are
window averages, **not** frame percentiles or 1% lows. Distinct slow cases:

- 49.4 FPS: 757 draws, 10.4 uploads/frame, 14.0 ms draw calls within
  17.1 ms executor; title 3.1 ms, present 0.1 ms.
- 48.6 FPS: executor 5.0 ms, title 15.3 ms (not a renderer-only stall).
- 65.4 FPS: executor 2.9 ms, present 11.5 ms.

Diagnostic runs used `tools/run.ps1 -Target xbox-retail -Windowed -Seconds
900 -Set @{RESOT_ASSET_DIR='<portable retail folder>';
RECOMP_FRAME_TRACE='<absolute flag path>'; RECOMP_HW_TRACE_PIXEL='700,500';
RECOMP_HW_GLOW_DUMP='<absolute dump prefix>'}`. The user loaded the garden
and positioned the camera. An intermediate copy named
`sot-xbox-retail-probe.exe` allowed relinking the normal executable. One
overlapping launch failed to open game files with ERROR_SHARING_VIOLATION;
both instances were closed before relaunching alone.

The pixel history showed an ordinary textured surface becoming almost black
in a second P8 light-map pass (`blend 0/SRC_COLOR`). The guest explicitly
programmed address 4/4 and border `FFFFFFFF`; D3D11 used zero-initialized
black border color and SDL substituted clamp-to-edge. Retail now decodes
NV097 texture border color and applies it in the shared pixel shader, with
nearest and base-level bilinear boundary coverage and independent U/V axes.
The user confirmed the correction ("ottimo hai risolto"). No separate visit
to `1201_ChambreSultan-Start` was performed after the fix.

The forming sand-tank ring was below the old y<=192 HUD band, near y=199
in 640x480 coordinates. The retail policy now includes small pieces in
that left column. GPU readback `logs/retail-fixed_flip34507_after.bmp`
shows the ring directly below the tank, rather than in the old centered
4:3 position. Both D3D11 and native encoders share this classification.

Slow-upload diagnostics identified new P8 512x512 textures taking
16.2-16.7 ms and 256x512 taking 7.6 ms before the optimization. Bulk Morton
walking now replaces per-texel address reconstruction for retail P8/ARGB/XRGB
uploads in both encoders. The scalar-reference comparison covers square,
nonsquare and one-dimensional images, two palettes, and XRGB alpha;
512x512 P8 CPU conversion measured 0.120 ms over 200 iterations. This is
conversion time alone, **not** a complete upload or a gameplay A/B result.
Native D3D12/Vulkan also index pipeline lookups by the complete key and
cycle matching changed 2D textures instead of recreating their SDL objects.

Checks: `python tools/check-hlsl.py`; `tools/recomp.ps1 -Target xbox-retail
-BuildOnly`; the same for xbox-demo; `tools/build-android.ps1` all succeed.
`cmake --build build/tests/native-gpu --config Release --parallel` and
`ctest --test-dir build/tests/native-gpu -C Release --output-on-failure`:
6/6 pass. The real D3D12/Vulkan tests additionally read back white borders,
interior, bilinear/nearest edges, mixed-axis addressing and three cycled
texture versions. Shader probe entry is generated only for the tests.

Not checked: Android on a device, native gameplay after these changes,
matched-scene FPS before/after, complete removal of frame drops, all later
black surfaces, border filtering across guest mip levels, console accuracy.
Demo texture/HUD/border behavior retains its previous policy.

## 2026-10-19: generated C sorted into folders, both targets

`source/<target>/gen` is now one folder per kind of code
(`docs/RECOMP.md`, Folders) instead of `recomp_NNNN.c` in address order.
Run: `recomp.ps1 -Target xbox-demo -SkipAnalysis`, then `recomp.ps1 -Target
xbox-retail -SkipAnalysis` (same analysis as before, new
`tools/sort-functions.py` and the lifter's `--folders`), `build-android.ps1`;
all three succeeded. The lifter's tests `test_split_folders` and
`test_manual_call_dispatch` pass (run as modules; no pytest here).

Compared with the gen of the previous commit by function: demo 11,213 and
retail 14,418 functions, the same names and, apart from the new `Folder:`
comment line, the same code; `recomp_funcs.h`, `recomp_dispatch.c`,
`recomp_stubs_unresolved.c` and `recomp_types.h` byte-identical. 159 demo and
358 retail functions have no evidence (`unsorted/`). Short runs after the
change: `run.ps1 -Target xbox-demo -Seconds 40 -Windowed` and the same for
xbox-retail: both were still drawing frames at 40 s (demo 177, retail 203
draws per frame, demo audio not silent) with no unresolved call or fault in
the log; the screen was not looked at.

Not checked: whether each folder placement is right beyond the evidence
recorded on it (`between` and `library` are link-order inferences); play
past the menus; Android at runtime.

## 2026-10-19: xbox-retail, title logo squeezed at 16:9

The user reported the retail title logo too narrow (more so on Android).
Run: `tools/run.ps1 -Target xbox-retail -Seconds 60 -Windowed
-SnapshotEvery 5 -Set @{RECOMP_PAD_SCRIPT='8000:a:300,12000:a:300,16000:a:300,20000:a:300,24000:a:300';
RECOMP_FRAME_TRACE='logs\retail-logo-trace.flag'}`, flag created at 45 s
on "Please press START". The logo is one flat batch through the same
vertex program as the 3D (vsh FE9274D1), depth test off, at
x=92.531..476.531 y=48.531..168.531: already narrowed by the Hor+
projection (a 512-wide quad at x=16.7..528.7 in 4:3), then squeezed again
by the w == 1 rule. Retail only, `hw_classify_screen` now leaves such a
batch (inside the projected 4:3 frame, not a side HUD piece) at its
projected size, in the D3D11 and the native D3D12/Vulkan encoders.

Builds: `recomp.ps1 -Target xbox-retail -BuildOnly`, `recomp.ps1 -Target
xbox-demo -BuildOnly`, `build-android.ps1`: all succeeded. The same run
after the change: the logo is 4/3 wider at the same height and place
(`logs/retail-logo-0045.png` before, `logs/retail-logo-after-0045.png`
after, readbacks rescaled to 1280x720); in the traced frame no other
main-view batch matched the rule. Not checked: Android at runtime, the
main menu and other retail menus, the "Saving profile" box, the pause
menu and HUD after the change, a console comparison, the demo (code
under `RESOT_RUNTIME_RETAIL`, not run).

## 2026-10-19: Android back on GPU vertex programs; vertex threads off there

**Log** (`C:/Users/Admin/Desktop/logs/xbox-retail-err.txt`, 11:36-11:37; no
demo log). The user reports the menu hanging with no UI.
- Pipeline cache: `0 bytes loaded` (first run), then the first main-shader
  pipeline took 320 ms and the next 14 took 0.3-0.5 ms (they had taken
  465-1075 ms each without a cache). With a `VkPipelineCache` the Adreno
  driver reuses the compiled shader across pipelines, already in the first
  run.
- One frame sample only (1.8 FPS, `vertex` 174 ms, 6 spinning workers), then
  no further `[HW native]` sample while audio and kernel summaries continue:
  the executor stopped. The exact cause was not identified; spinning workers
  competing with the guest threads on the phone's eight cores are the likely
  one (the semaphore wake in `ReleaseSemaphore` is a broadcast, checked).

**Change.** Android uses the Windows configuration again: `vs_uber` and the
named-register `ps_main` (the long first-frame compile is what the pipeline
cache now absorbs), with bound-only texture sampling. Vertex worker threads
default to 0 on Android (`RESOT_VSH_THREADS` still sets them). The
`ps_main_arr` variant was removed.

**Checks.** `check-hlsl.py` passes; both `-BuildOnly` builds and
`tools/build-android.ps1` pass (`logs/gpu2-*-build.txt`, APK 21.8 MB);
Windows retail Vulkan menu 145-149 FPS. Not checked: the phone.

## 2026-10-19: Vulkan pipeline cache, spinning vertex workers, bound-only texture samples

**Logs** (`C:/Users/Admin/Desktop/logs/xbox-retail-err.txt`, 11:18-11:20;
the demo file there is still the 11:00 one). The user reports a lower frame
rate than before.
- Every pipeline using the main pixel shader took 465-1075 ms to create on
  the phone (33 in the log; blit/solid pipelines 8-18 ms), on the executor,
  so each new blend/depth combination stalled the game for up to a second.
  SDL 3.4.18 creates Vulkan pipelines with no `VkPipelineCache`.
- With 6 vertex workers, `vertex` was 43-58 ms a frame (executor 59-79 ms,
  5.5-13.5 FPS), worse than one thread earlier (17-49 ms). Present 5.6-6.9
  ms: the GPU was no longer the limit.

**Changes.**
- `port/third_party/sdl-gpu-query/resot_pipeline_cache_vulkan.inc`, applied
  by `tools/patch-sdl-gpu-query.py`: one `VkPipelineCache` per device for
  SDL's graphics pipelines, loaded from and saved to a file
  (`RESOT_SetVulkanPipelineCachePath`, `RESOT_SaveVulkanPipelineCache`).
  The runtime saves it every 5 s when pipelines were created and at
  shutdown: `bin/shadercache/vulkan-pipelines.bin` on Windows,
  `vulkan-pipelines.bin` in the game's data folder on Android.
- Vertex workers spin on a generation counter and sleep only after about
  200,000 idle polls, instead of a semaphore wake per batch.
- The pixel shaders sample a stage's texture only when one is bound, and
  only the 2D or the cube texture (the `?:` sampled both, eight samples a
  pixel even for untextured draws).

**Checks.** `check-hlsl.py` passes all entries. `tools/setup-native-gpu.ps1`
rebuilt SDL3.dll with the patch (`logs/sdl-cache-build.txt`). Windows
retail, Vulkan: a first run wrote a 1,793,992-byte cache; the second logged
`RE-SoT pipeline cache: 1793992 bytes loaded` and grew it to 3,328,959.
Threaded CPU path (`RESOT_NATIVE_CPU_VSH=1`, `logs/vmt-vk/cache1.txt`):
`vertex` 3.9-4.5 ms, 92-112 FPS (semaphore version 4.2-4.3 ms; this PC did
not show the Android wake cost). Default Vulkan (`logs/samp-vulkan/`) menu
189 FPS; D3D11 (`logs/samp-d3d11/`) 164-201 FPS in the courtyard; snapshots
of both look right. Both `-BuildOnly` builds and `tools/build-android.ps1`
pass; the APK's `libSDL3.so` contains both exports.

Not checked: the phone. Pipeline times there will only drop from the second
run (the first still compiles each once); whether spinning workers beat one
thread on the Snapdragon; NVIDIA's pipeline times say nothing about Adreno's.

## 2026-10-19: Android CPU vertex threads, per-host pixel shader

**Reports.** With the named-register APK the user saw a long black screen
after the intro movies in both games; after waiting, the menu appeared at
about 18 FPS. Logs of that run were not available (the files in
`C:/Users/Admin/Desktop/logs` were from 11:00 and end before any 3D frame).
On Windows the user saw lower FPS after `ps_main` had been put back to its
indexed form for Android.

**Change.**
- `ps_main` keeps named registers (faster on the desktop GPU). The indexed
  original is kept as `ps_main_arr` (`s_hw_hlsl_ps_arr`) and is the Android
  pixel shader, the one earlier APKs started quickly with. Inferred, not
  measured on the device: the long first-frame stall was the Adreno
  compiler on the named-register shaders. Pipeline creation is now logged
  (`[HW native] pipeline N (shader S) created in X ms`, first 16 and any
  over 50 ms); on the RTX 3060 each took 0.0-1.1 ms.
- The CPU interpreter runs a batch's distinct vertices on worker threads
  (`vmt_*`, nv2a_pb_exec.c): cores minus two, at most seven, batches of at
  least 128 distinct vertices, serial for programs that write constants.
  `RESOT_VSH_THREADS=<n>` overrides; startup logs `[VSH] CPU vertex
  programs: N worker thread(s)`. Android's native renderer now uses this by
  default instead of `vs_uber` (`RESOT_NATIVE_GPU_VSH=1` selects it);
  Windows keeps `vs_uber`.

**Checks.** `python tools/check-hlsl.py` passes all entries (new:
`ps_main_arr`). Windows retail, Vulkan:
- CPU path with threads (`RESOT_NATIVE_CPU_VSH=1`, `logs/vmt-vk/`): 6
  workers on 8 cores; menu `vertex` 4.2-4.3 ms, executor 7.4-7.8 ms, 100-106
  FPS (single thread earlier: 11.6-12.1 ms, 16.2-16.6 ms, 51-54 FPS).
- Default (`vs_uber` + named `ps_main`, `logs/split-vk/`): menu pages
  140-194 FPS, present 1.6-1.9 ms.
Both `-BuildOnly` builds and `tools/build-android.ps1` pass
(`logs/vmt-*-build.txt`, APK 21.7 MB, generated header contains
`ps_main_arr`).

Not checked: anything on the phone with this APK (start-up time, FPS);
whether Adreno's slow compile came from `ps_main`, `vs_uber` or both; the
threaded path's gameplay visuals (the scripted run stayed in menus).

## 2026-10-19: shaders without indexed local arrays (Adreno GPU time)

**Why.** The user's logs with the GPU vertex-program APK
(`C:/Users/Admin/Desktop/logs/xbox-*-err.txt`, 10:41-10:42; Hor+ 2712:1220,
internal 480p) show the CPU no longer limiting: executor 4-12 ms in steady
samples, `vertex` 0.01-0.03 ms. FPS stayed at 8-16 (one demo sample 28.6)
with `present` 31-90 ms, i.e. waiting for the GPU; before that APK present
was 3-16 ms. SPIR-V disassembly showed function-local arrays indexed at run
time: `vs_uber` (R[13], o[13], v[8]) and `ps_main`'s combiner registers
(`R[16]`, 43 dynamic accesses per pixel). Qualcomm's Adreno guidance warns
that such arrays are placed in slow private memory.

**Change.** Both shaders now use named registers chosen by selects on the
draw's uniform control words (`ub_temp`/`ub_wt`, `rc_r`/`rc_w`); the
semantics are unchanged. `dxc -spirv -Fc` shows zero `OpVariable
%_ptr_Function` in `vs_uber`, `ps_main` and `vs_main` (was one 16-element
array in `ps_main`). `ps_main` is shared with D3D11.

**Checks.** `python tools/check-hlsl.py` passes all entries; both
`-BuildOnly` builds and `tools/build-android.ps1` pass
(`logs/regs-*-build.txt`, APK 21.8 MB). Windows retail, scripted runs:
- Vulkan (`logs/regs-vk/`, `logs/regs-vk2/`): menu 145-152 FPS, present
  1.6-1.8 ms (previous build: 42-77 FPS, present 7-20 ms); first courtyard
  119-135 FPS (previous 66-124). Snapshots of menu, loading, courtyard,
  tutorial text, landscape view and Game Over look right by eye.
- D3D11 (`logs/regs-d3d11/`): menu, cutscene and courtyard look right. Cold
  `ps_main` compile 2,707 ms, once (disk cache), previously about 600 ms.

Stray input reached the windowed game during one check (a delete-profile
prompt and the Extra Features page appeared in a run that only pressed
Start); the retail profile files were unchanged afterwards (09:52 times).

Not checked: Android frame rate with this APK (the reason for the change),
D3D12, the demo at run time, pixel-exact comparison with the old shaders.

## 2026-10-19: GPU vertex programs on native Vulkan/D3D12; retail menu without Xbox Live

**Why.** The user's Android logs (`C:/Users/Admin/Desktop/logs/xbox-*-err.txt`,
08:51-08:52) show steady-state samples of 12-25 FPS with `vertex` 17-49 ms of
a 27-70 ms executor; draw 1.4-10 ms, present 3-16 ms. The native encoders ran
every NV2A vertex program in the CPU interpreter (D3D11 translates them to
HLSL and compiles at run time, which Android cannot do).

**Change.** `vs_uber` (`s_hw_hlsl_uber`, nv2a_hw_d3d11.inc) is compiled
offline to SPIR-V and DXIL by `tools/build-native-shaders.py` and interprets
the program on the GPU: `nv2a_vsh_pack_gpu` (nv2a_vsh_interp.c) packs the
decoded instructions, one uint4 each, cached by program generation; the
constants (3 KB) and the program are snapshotted per change into pools and
pushed as vertex uniform buffers 1 and 2 only when they change. Each batch's
distinct vertices go up as their raw input registers (`fetch_attr`, the same
reads as the interpreter, at most eight inputs) with a 16-bit index ring.
The interpreter remains for programs that write constants, have no FINAL or
read more than eight inputs, and with `RESOT_NATIVE_CPU_VSH=1`. The CPU
checks of the D3D11 path (glow-composite corners, flat 2D bounds for the
widened picture) are kept.

**Checks.** `python tools/check-hlsl.py` passes all nine entries (new:
`vs_uber`); DXC built `vs_uber.spirv` (22,224 bytes) and `.dxil` (12,076).
`tools/recomp.ps1 -BuildOnly` passes for both targets
(`logs/uber-demo-build.txt`, `uber-retail-build.txt`).

Windows retail, native Vulkan, same scripted 130-second run as the HUD check
(`./tools/run.ps1 -Target xbox-retail -Seconds 130 -Windowed -NoVsync
-SnapshotEvery 15 -Set @{RESOT_RENDERER='vulkan'; RECOMP_PAD_SCRIPT=...}`):
- GPU programs (`logs/uber-gpu/`): `vertex` 0.02-0.03 ms; menu executor
  4.6-6.7 ms; first courtyard 66-124 FPS, executor 3.7-10.4 ms. Snapshots
  (title, main menu, cutscene, courtyard with tutorial text and health bar,
  landscape view) look right; compared by eye only, not pixel by pixel.
- `RESOT_NATIVE_CPU_VSH=1` (`logs/uber-cpu/`): menu `vertex` 11.6-12.1 ms,
  executor 16.2-16.6 ms, 51-54 FPS. At this slower rate the timed presses
  selected Xbox Live at about 35 s and the title launched `dashupdate.xbe`
  and exited, so the gameplay part of the comparison is missing.
- One texture upload per frame appeared in the GPU run's samples and not in
  the CPU run; a traced 40-second run (`RESOT_TEX_DEBUG`, removed) showed
  only first uses in the texture cache (127, none re-decoded) and 0.0
  uploads per frame. Its source was not identified.

Not checked: Android (APK built, not run on a device); D3D12 at run time;
the demo at run time with this build; fog, lighting and skinning programs
compared numerically against the interpreter; programs that fall back.

**Xbox Live menu (retail).** `RESOT_MENU_TRACE=1` (`logs/uber-gpu/menutrace.txt`)
shows the main menu's choices: Start New Game (return `0x00234B78`), Load
Saved Game, Options, Xbox Live (`0x00234D3A`, text `0B008C4E:56`), Extra
Features. The handle goes to `[ebp+0x288]`, which only the bind at
`0x00235406` reads (scan of `0x00230000-0x00238000`). Wrappers of
`0x002A3910` and `0x00116660` skip exactly those two calls; the skipped
bind returns what `0x00116660`'s epilogue (`0x00116765-0x00116799`) would.
`RESOT_XBOX_LIVE_MENU=1` keeps it. The pause menu's Xbox Live choice
(`0x001A33F6`) is unchanged.

`tools/recomp.ps1 -Target xbox-retail` (full relift: 13 functions wrapped as
`sub_X_gen`, was 11) passed (`logs/live-retail-recomp.txt`). A traced run
(`logs/live-menu/`) shows the main page built as Start New Game, Load Saved
Game, Options, Extra Features, then reSOT Options; snapshots show that list
with no gap. The trace shows the remaining choices bound to actions (A3, A4,
A5, A7 and the reSOT entry A8) and no bind for the removed one. Scripted
presses could not reliably reach Extra Features (the profile page consumed
them), so choosing each remaining entry was not exercised.

Final builds after these changes: both `-BuildOnly` builds and
`tools/build-android.ps1` pass (`logs/uber-android-build.txt`,
`bin/reSOT-android.apk`, 21.7 MB); the Android build's generated shader
header contains `vs_uber`.

## 2026-10-19: Look sensitivity, F5 renderer line, Android retail profile search

**Look sensitivity** (25–200%, steps of 25, default 100%) is in reSOT
Options → Controls of both games' main menus, in Windows F7 → Controls and in
the Android menus. It is saved as `[Controls] LookSensitivityPercent`. The
gain is applied after the title's own radial deadzone, to the float result of
the right-stick normalizer: demo XBE `0x000C05D0` called from `0x000C08AD`
(return `0x000C08B2`), retail XBE `0x000DBDE0` called from `0x000DC0BD`
(return `0x000DC0C2`); `python tools/xbe-dis.py` confirms both call pairs
(left pair first, then the right pair). Keyboard camera keys, controller right
stick and the Android touch look all reach the game as that stick, so all of
them are scaled; movement (left pair) is not. `python tools/test-look-sensitivity.py`
passes 4/4 (Windows and Android option code, each target). Not checked in the
game: how the camera feels at 25% and 200%, and whether the right stick also
drives anything other than the camera.

**F5** shows `Renderer:` with the backend that actually initialized
(`nv2a_hw_backend`: Direct3D 11, Direct3D 12, Vulkan, or Software), so a
fallback is reported rather than the saved preference. Same row on Android.
Not yet seen on screen.

**Android retail "damaged profile"** on a profile created from scratch with
the previous APK. The user's logs show `options.cfg` and `pop2.sav` written
and read back at their expected sizes. The POSIX `NtQueryDirectoryFile` kept
a directory search alive until end of directory; XAPI's FindFirstFile stops
after one exact-name answer and closes the handle, and a later directory
opened at the same reused handle value inherited the old search's cursor and
pattern (wrong name or size). The Windows backend already freed this on close.
Android retail now frees the search (and its `DIR`) in both `NtClose` paths.
Not unit-tested: no host test covers the POSIX directory search, and no phone
run has created, reloaded and selected a profile with this APK.

Build checks: `tools/recomp.ps1 -Target xbox-demo -BuildOnly` and the retail
equivalent pass (`logs/look-demo-build.txt`, `look-retail-build.txt`);
`tools/build-android.ps1` passes (`logs/look-android-build.txt`,
`bin/reSOT-android.apk`, 21.6 MB). No shaders changed. Nothing was run in
the game for this entry.

## 2026-10-19: Android crash logs, native vertex buffers and device Hor+

Inputs: `C:/Users/Admin/Desktop/logs/xbox-demo-err.txt` (301525 bytes)
and `xbox-retail-err.txt` (717162 bytes), supplied by the user. Both identify
the supported XBE hashes and the system Vulkan driver. Demo terminates in
`sub_002EF6CD+0x22C`, signal 11, guest address `0xFFFFFFBE`, ESI zero.
Earlier messages report forced DPC delivery and a dispatch owner (tid 1004)
that other guest threads cannot acquire. Retail reaches sampled 1.23 GPU FPS
and 2.4 native FPS, about 747 draws/frame; its final timing sample reports
185.82 ms vertex, 352.97 ms draw and 559.05 ms present. Those counters are
sampled windows, not a sum or a controlled benchmark; no texture uploads
are reported in that sample.

Source inspection found that demo interrupt return restored IRQL but could
leave a recursive guest dispatch reference acquired by a callback that
lowered and raised IRQL. The demo epilogue now restores that edge, and demo
DPCs remain pending while another thread owns dispatch rather than running
unprotected after 250 ms. Retail keeps its existing dispatch policy.
`python tools/test-demo-dispatch.py` passes using the production HAL helper
bodies: recursive reference release, already-lowered return, raised saved
IRQL, and 10000 refused DPC polls. This proves the ownership correction;
the available log does not identify the exact leaking callback or prove
the new APK eliminates the device crash.

Native rendering previously cycled a 16 MB GPU vertex buffer and 16 MB
staging buffer on every flushed run. Visibility and state transitions can
flush many small runs. GPU vertices now append across submissions until
the ring wraps; only wrapping cycles its backing storage. Staging starts
at 64 KB and grows to the largest required run. Draw order is preserved.
The GPU regression uploads disjoint regions and wraps/cycles while earlier
copies remain queued, then checks readback on D3D12 and Vulkan; both pass.
Actual Adreno performance improvement has not been measured.

The new retail log shows successful creation of `SaveMeta.xbx`, `pop2.sav`
and `options.cfg`; missing-file probes precede creation and do not establish
failed writes. The existing local append-policy, relative-path and migration
corrections are retained. `SaveFoldersTest` and `retail_save_random_write`
pass. Bounded `[SAVE READ]`/`[SAVE WRITE]` diagnostics now include offsets,
byte counts and resulting sizes for retail UDATA `.sav`/`.cfg` files on
Android. A create-save, process exit, relaunch and load cycle is still needed
on the phone; the supplied logs contain no such persistence evidence.

Android selects `RECOMP_HW_ASPECT` from the fullscreen drawable before either
target's projection hooks or renderer initialize. For example 2400x1080
selects 20:9; projection and culling use the same ratio, with the existing HUD
policy. Explicit environment overrides remain effective. Windows retains
its default. Startup dimensions/ratio are logged; device appearance and
window resizing after startup have not been validated.

Build checks: `python tools/check-hlsl.py` passes all seven shaders;
`tools/recomp.ps1 -Target xbox-demo -BuildOnly`, retail equivalent, and
`tools/build-android.ps1` pass (logs `demo-oct19-build.txt`,
`retail-oct19-build.txt`, `android-oct19-build.txt`). Build tools required
execution outside the sandbox for MSBuild/Gradle native services.
`adb devices` returned no attached device; no phone installation or runtime
validation was performed here.

## 2026-10-18: shared internal resolution, Android retail files and driver picker

User reports a large Android speed improvement at lower resolution. Windows
now uses the same six internal scale choices in both reSOT Options and F7,
stored as `Graphics/InternalResolutionPercent` (100 default). The obsolete
window-size index is ignored. Both native GPU encoders and D3D11 resize
their main color/depth targets and viewport/scissor coordinates independently
of the physical window. Guest-sized effect targets remain separate. F11 is
the only fullscreen toggle and is handled before options input capture.

Fresh phone log `C:/Users/Admin/Desktop/logs/xbox-retail-err.txt` (23:25)
shows profile/file requests for `SaveMeta.xbx`, `pop2.sav`, `options.cfg` and
`saveimage.xbx`, and ends with `Swapchain composition not supported!`.
It does not establish successful save persistence. Source inspection found
POSIX `O_APPEND` incorrectly enabled whenever append permission was present,
even alongside write/full access. Android retail now reserves it for append
only access, honors explicit write offsets/EOF and seek failures, retries
interrupted writes and reports flush failures. Relative object paths also
respect their directory handle, as the Windows backend does.

Android retail's resolved partition1 UDATA/TDATA now map to ordinary folders
under `files/saves/xbox-retail/`. Java copies missing files from the previous
game-directory and UserData/TitleData locations, preserving originals and
newer destination files. Copies publish only after a complete synced write.
Bare device images remain needed for boot/cache compatibility and are now
under `.devices`; old root images are retained. Demo storage is unchanged.

Android AlertDialog's message hid its driver choice list. Removed that
message and added an explicit **Install ZIP…** document-picker button.
Native Vulkan combines the background clear with the front blit and, unlike
D3D12's fixed sampler heap, submits offscreen rendering and presentation in
one command buffer. Backgrounded windows defer presentation, and unsupported
swapchain changes are retried instead of aborting. Android executor timing
now uses the host clock; previous zero totals yielded negative attribution.
Frequent retail path logging is bounded to avoid synchronous I/O per lookup.

Checks performed:

- `python tools/check-hlsl.py`: seven shader checks passed.
- `tools/recomp.ps1 -Target xbox-retail -BuildOnly`, demo equivalent and
  `tools/build-android.ps1`: passed; logs `internal-save-*-build.txt`.
- `python tools/run-build-tool.py cmake --build build/tests/native-gpu --config Release`
  and CTest: **5/5 passed**, both GPU APIs, label probe, scale edges and
  full-access header rewrite/close/reopen regression. The latter exercises
  the production access policy through equivalent Windows CRT file I/O,
  not the complete Android kernel bridge.
- JVM `SaveFoldersTest`: profile/save copy, repeated migration, original
  preservation and newer destination preservation passed. Existing
  `GpuDriversImportTest` passed. These do not test Android UI/native loading.
- `tools/run.ps1 -Target xbox-retail -Seconds 25 -Windowed -NoVsync`
  with Vulkan and scripted A presses: ran to timed stop, late menu samples
  53–66 FPS with changing draw counts; not a controlled comparison.
- A 15-second Vulkan run with temporary INI internal percent 75 logged
  `Internal resolution: 75% (360p for 480-line guest)` and reached a
  52 FPS menu sample, then timed stop, no fatal error. Original INI restored.
  Evidence: `logs/internal-save-vulkan-75-err.txt`. This is not evidence of
  live UI cycling, fullscreen transitions or gameplay correctness.

Still needed on the phone: create profile/save, close process, relaunch and
load; verify migration with real prior saves; background/resume rendering;
picker visibility/import and actual custom driver identity; frame-rate
comparison in the same scene. No phone persistence fix or FPS gain is
claimed on the strength of these builds or host tests.

## 2026-10-18: Android-only internal resolution and custom Adreno driver support

The user reports Windows Vulkan performance improved and the movie stutter is
resolved on both hosts. Android frame rate remains low; they identify the GPU
as **Adreno 750**. They request Android-only internal resolution controls and
an experiment with libadrenotools. No new phone log or driver package was
provided with this request.

Android's resolution choice now cycles 50%, 75%, 100%, 150%, 225%, 300% of
the guest view (240p/360p/480p/720p/1080p/1440p for its 480-line main target),
saved as `Graphics/InternalResolutionPercent`. The new default is 100%/480p,
instead of the previous 2x rendering. The native encoder applies this to main
color/depth targets, viewport/scissor edges, readback dimensions and query
pixel normalization. It flushes/submits outstanding draws before retiring old
targets when a setting changes. Guest-sized effects, decoded movie pixels,
the physical window and final presentation remain separately sized. Windows
uses its previous integer scaling and resolution options unchanged.

The Android launcher now imports standard driver ZIPs (root `meta.json` with
`name`, `libraryName`, optional `minApi`), validates paths/duplicates/entry and
size bounds plus ELF64 little-endian AArch64 shared-library identity, and
stores them in app-private internal storage. Selection uses separate private
preferences, so saving game options cannot erase it. System/installed driver
choices apply on the next game process. No custom driver binary is bundled
or downloaded automatically.

Integrated upstream libadrenotools at
`8fae8ce254dfc1344527e05301e43f37dea2df80`, liblinkernsbypass submodule at
`aa3975893d83ef1bc84c321ec60c65fbf1287887`. SDL's Android loader is patched
to resolve Vulkan entry points via the chosen isolated loader; normal SDL
loader ownership/refcounting remains intact. A preflight instance/device
enumeration checks basic usability; failure keeps system Vulkan selected.
That is not proof of custom-driver use: upstream can fall back internally,
and later SDL-required features can still fail. The native log records the
probe device and requested library; upstream hook messages are in logcat.
No custom-driver run or speedup on Adreno 750 has been observed here.

Checks performed:

- `python tools/check-hlsl.py`: seven checks passed.
- `tools/build-android.ps1`: both targets and all four hook DSOs built;
  release APK `bin/reSOT-android.apk` is approximately 21.6 MB. It is smaller
  because legacy packaging compresses the libraries, then extracts them at
  install time as libadrenotools requires. Log:
  `logs/android-scale-driver-build.txt`.
- ZIP inventory confirms `libSDL3.so`, both game DSOs, launcher DSO,
  `libmain_hook.so`, `libhook_impl.so`, `libfile_redirect_hook.so` and
  `libgsl_alloc_hook.so`, plus both BSD dependency licence notices.
- NDK `llvm-readelf --dyn-syms` confirms SDL exports
  `RESOT_SetAndroidVulkanGetInstanceProcAddr` and `RESOT_GetVulkanQueryAPI`;
  retail's ELF dependencies are all packaged SDL/system libraries.
  The merged manifest has `extractNativeLibs=true`.
- `tools/recomp.ps1 -Target xbox-retail -BuildOnly` and the demo equivalent
  passed (`logs/android-scale-windows-*-build.txt`). No changes were made to
  `port/windows` for this request.
- Rebuilt `build/tests/native-gpu`; CTest **4/4 passed**, including both GPU
  APIs, the metadata probe and internal-size/scissor-edge arithmetic.
- Compiled production `GpuDrivers.java` and
  `port/android/tests/GpuDriversImportTest.java` with JDK javac and Android
  API 36's android.jar into `build/tests/android-driver-import`, then ran
  `com.fulger.resot.GpuDriversImportTest` on the JVM: valid ZIP/arm64, traversal,
  absolute paths, duplicate canonical paths, entry count, wrong architecture
  and truncated ELF cases passed. This tests importer/ELF helpers, not the
  Android picker, preference UI, or native loader on a phone.
- Ran `tools/patch-sdl-android-driver.py` twice successfully (idempotent).

Device checks still needed: live resolution cycling, target recreation and
picture/occlusion correctness at each scale; launcher layout and ZIP import;
custom-driver identity, loading and performance comparison on the user's
Adreno 750. No new Android FPS claim follows from a successful build or these
host-side tests. Lower resolution only addresses GPU pixel work; the CPU
vertex interpreter remains a potential bottleneck.

## 2026-10-18: Android retail boot confirmed; option refresh and native performance

The user confirms retail now runs on Android after the Partition1 volume-open
correction. They report stale value labels in the retail main-menu reSOT
Options page (values update only after leaving/reopening), Bink stutter on
both Vulkan hosts, and low Vulkan frame rate. This confirms device boot and
menu progress, not complete rendering/audio/gameplay accuracy.

Found that `resot_guest_read_word` unconditionally rejected every non-Windows
read. Retail's existing label-refresh hook therefore could not resolve any
text object on Android, despite the options revision changing. Android now
accepts bounded reads in main/contiguous RAM and committed, readable extended
VM regions, while rejecting reserved/guarded ranges and arithmetic overflow.
Resetting Android bindings also marks the labels dirty. Windows retains its
existing VirtualQuery checks. Android label behavior after this change still
needs the device retest.

Native Vulkan/D3D12 idle presentation used the generic 100-ms repaint interval
even while PVIDEO was active. Bink movies that do not issue guest flips were
therefore composed at at most 10 Hz. Live overlays now bypass that idle limit
and follow the host presentation thread; idle screens keep the old interval.
The final Windows retail Vulkan run without scripted input records **50.0,
51.0, 52.0 and 53.0 Hz movie composition**, across the initial overlays.
Composition cadence is not the decoded frame rate, audiovisual synchronization,
or a visual comparison with the console. Android playback is not retested here.

The shared CPU vertex interpreter now decodes instructions once per program
generation, reads only operands consumed by each MAC/ILU operation, and exposes
the used-input mask so the executor fetches only those attributes. Paired
operations still read their operands before writes; constant writes remain
live. Native queued draws now retain only the 64-byte vertex uniform header,
instead of copying the unused roughly 3 KB D3D11 constant tail for every draw.
Both native hosts now log vertex/draw/executor/present timings; Android's vertex
timer is enabled through the existing compatibility clock.

Windows observations with retail Vulkan, VSync off and the saved FPS limit 0:

- Before: last three five-second samples **38.0, 40.2, 38.6 FPS**, at
  **155.2, 153.2, 153.0 draws/frame** (`logs/vulkan-perf-before-err.txt`).
- After: late samples **61.8, 61.0, 55.8 FPS**, at
  **153.2, 153.0, 153.0 draws/frame** (`logs/vulkan-perf-timings-err.txt`).
  The latest half-second timings at these points show **9.68–10.37 ms vertex
  interpretation**, **13.64–13.87 ms executor**, **1.98–2.15 ms present**.
- These are separate wall-clock runs with animated menu scenery, different
  warm-up lengths and no identical-frame replay. They suggest an improvement;
  they are not a controlled benchmark or a level-wide FPS guarantee. Earlier
  after-change windows at around 200 draws/frame still measured 25–35 FPS.
  CPU vertex execution remains a significant limit. Android performance is
  unmeasured after the change.

Commands and checks:

- `python tools/check-hlsl.py`: seven shader checks passed.
- `tools/recomp.ps1 -Target xbox-retail -BuildOnly` and the demo equivalent:
  both final Windows builds passed.
- `tools/build-android.ps1`: final APK built with both targets;
  `bin/reSOT-android.apk` (50.8 MB). Build logs use `vulkan-perf-*-build.txt`.
- CMake build + CTest of `build/tests/vsh`: epilogue, sparse/poisoned inputs,
  changed start slot, word-by-word program uploads and missing program passed.
- Differential harness in `build/tests/vsh-differential`: **10,000 randomized
  programs** compared to the pre-change interpreter from Git HEAD, including
  context writes and poisoning unused inputs with NaNs; outputs and constants
  agreed. This local harness contains no game code or assets.
- Rebuilt `build/tests/native-gpu`; CTest: D3D12, Vulkan and guest metadata probe
  **3/3 passed**. The probe test exercises Windows; Android metadata checks
  compile but have not been executed on a device here.
- Baseline and after runs: `tools/run.ps1 -Target xbox-retail -Seconds 40
  -Windowed -NoVsync -Set @{RESOT_RENDERER='vulkan';RECOMP_PAD_SCRIPT=
  '2000:a:200,5000:a:200,8000:a:200,12000:a:200';RECOMP_FPS_LIMIT='0'}`;
  the timings run used 45 seconds. The saved INI already had FPSLimit=0,
  VSync=0, PostProcessing=0. These saved preferences were not changed.
- Final movie run: `tools/run.ps1 -Target xbox-retail -Seconds 15 -Windowed
  -NoVsync -Set @{RESOT_RENDERER='vulkan'}`; log retained as
  `logs/vulkan-movie-cadence-err.txt`.

## 2026-10-18: Android retail Partition1 volume-directory failure isolated

Latest user log `C:/Users/Admin/Desktop/logs/xbox-retail-err.txt`, PID 6497,
records all six partition backings ready. The first volume open then fails:
kernel call #21, ordinal 202, returning to retail XBE `0x0033744A`, requests
`\\Device\\Harddisk0\\partition1\\` and returns `0xC000003A`. Only three
more kernel calls follow before `HalReturnToFirmware(2)`. The mutex FORTIFY
messages seen on the previous build no longer appear.

The previous storage correction was incomplete: Windows explicitly redirects
directory opens of a device image to its parent for free-space queries;
POSIX still called `open(Partition1.img, O_DIRECTORY)`. This necessarily
fails with ENOTDIR, which its status conversion maps to `0xC000003A`.
The lifted retail routine at `0x00337414` checks the open at `0x0033744A`
before issuing the volume-size query. Added the directory redirect only for
Android retail bare partition devices 0–5. Byte-oriented device opens retain
the image file; ordinary directories and assets do not use this exception.
POSIX open failures now retain path, options and errno in the release log.

The supplied demo log separately records `active renderer: vulkan native`
and menu/options hooks, followed by continued file/audio/kernel activity.
This establishes renderer initialization and guest progress, without visual
evidence or a claim that gameplay, output or controls are correct.

Commands: `python tools/check-hlsl.py` (7/7 passed),
`tools/build-android.ps1` (release APK built with both targets), and
`tools/recomp.ps1 -Target xbox-retail -BuildOnly` plus the demo equivalent
(both passed). Build logs: `logs/fix-android-volume-build.txt`,
`logs/fix-xbox-retail-volume-build.txt`, `logs/fix-xbox-demo-volume-build.txt`.
The updated Android volume-query path has not been run on a device here;
successful retail boot and subsequent rendering remain unverified.

## 2026-10-18: Android retail exits after memory initialization

New user logs from `C:/Users/Admin/Desktop/logs/` (latest session PID 29328,
also reproduced in the two preceding archived runs) confirm that the earlier
memory fix passed its previous stopping point: extended VMA reserves 191 MB,
the tiled alias check passes, memory initialization completes, and the guest
entry executes. Options also log `post-processing off`.

The title then requests `HalReturnToFirmware(2)` with launch-data type 1 and
words `1,0,2,0,...`, before any native renderer initialization is logged.
`FORTIFY: pthread_mutex_lock called on a destroyed mutex` follows during
process exit. This is an explicit guest dashboard handoff, followed by a host
shutdown error; the log contains no Vulkan initialization error.

Comparing the Windows run and source found missing Android storage parity:
Windows provides raw Partition0/Partition5 image files for XAPI's cache mount,
while the POSIX path treated those device names as a directory or untranslated
host path. The Android log reaches the same title-directory/metadata setup
before exiting. Missing partition backing is the inferred next startup blocker;
the provided log's first-200-call budget does not record the exact failed
open. Added sparse raw partition backing and the same partition-table geometry
as Windows, guarded by Android + retail. Bare devices map to images; paths
inside partitions retain directory translation. Guest paths and partition
creation results now appear on stderr for the device retest.

Android `ExitProcess` now flushes the logs and uses `_exit`, avoiding C-library
shutdown handlers destroying mutexes while audio/SDL/logging threads remain
alive. Other POSIX hosts keep their existing exit behavior.

Validation commands: `python tools/check-hlsl.py` passed all seven checks;
`tools/build-android.ps1` built both game libraries and the release APK
(`bin/reSOT-android.apk`, 50.8 MB);
`tools/recomp.ps1 -Target xbox-retail -BuildOnly` and the demo equivalent
both passed. Logs: `logs/fix-android-storage-build.txt`,
`logs/fix-retail-storage-build.txt`, `logs/fix-demo-storage-build.txt`.
No Android device run, sparse-storage behavior on the user's filesystem,
successful cache mount, rendering, audio or gameplay is claimed by these builds.

## 2026-10-18: Android retail pre-entry hang and native texture staging

User-provided `xbox-retail-err.txt` from Android (PID 23530) ends memory
initialization at `RAM mirror: 28/28`, with `ext-vma=1` and zero KickOffs
over ten seconds, followed by the user's close request. This is before
`xbox_MemoryLayoutInit: complete` and before entry into the game. Inspection
found that `host_free_run` loops indefinitely when the POSIX `VirtualQuery`
returns `MEM_FREE` with `RegionSize=0`. Android now reserves extended VMA
directly inside its owned guest range; the scan also stops on a non-advancing
query. No retail addresses, seeds or lifted code changed. This explains the
observed stopping point; successful Android boot after the change has **not**
been observed. `adb devices` found no connected devices.

The shared Vulkan/D3D12 encoder now keeps a texture upload transfer buffer,
growing it as needed and cycling its storage before overwriting it. Previously
each texture, movie or options-panel upload created and released a buffer.
This removes repeated resource creation; no measured performance gain is
claimed. Android defaults to `Graphics/PostProcessing=0`; Windows stays at
`1`, and saved INI values take precedence on both hosts.

Commands run:

- `python tools/check-hlsl.py`: all seven shader checks passed.
- `tools/recomp.ps1 -Target xbox-retail -BuildOnly` and the equivalent
  `xbox-demo` command: both Windows Release builds passed.
- `tools/build-android.ps1`: release APK built with both targets, including
  the Android options default; output `bin/reSOT-android.apk` (50.8 MB).
- `python tools/run-build-tool.py ctest --test-dir build/tests/native-gpu -C Release --output-on-failure`:
  native D3D12/Vulkan GPU checks and guest-label probe passed (3/3). These
  standalone tests do not exercise the changed texture upload helper.
- `tools/run.ps1 -Target xbox-retail -Seconds 35 -Windowed -Set
  @{RESOT_RENDERER='vulkan';RECOMP_PAD_SCRIPT='3000:a:200,6000:a:200,10000:a:200,15000:start:200,20000:a:200'}`:
  native Vulkan executed 159,138 draws; sampled windows after startup reported
  28.6–40.6 FPS (initial window 2.0 FPS). No fatal error in the captured log.
  This was a runtime smoke test, without visual inspection or a baseline A/B
  comparison; it does not establish correct gameplay or improved frame rate.

Build logs: `logs/fix-retail-build.txt`, `logs/fix-demo-build.txt`,
`logs/fix-android-build.txt`; run log: `logs/xbox-retail-err.txt`.

## 2026-10-18 (night): Android ISO installation, first runs reported by the user

**Update, third APK (Java ISO reader, handle registry):** the user reports
that the installation from ISO and the game's start now work on their phone.
What the game shows (rendering, audio, controls, frame rate) has not been
described yet and is unverified; which disc and device were used is not
recorded.

**Reported by the user on their phone, first APK:**

- Install from ISO failed: *Installation failed: open error: /proc/self/fd/124
  permission denied*. extract-xiso opened the picked document by path, which
  Android refuses. Replaced by `XisoExtractor.java`, which reads the granted
  descriptor's FileChannel (the approach of halo-ce-universal); the `:xiso`
  service and the native extract-xiso run are gone from the Android build.
- An extracted demo folder copied to `files/xbox-demo` started and the game
  process ended. The user's `xbox_kernel.log` stops after `Path init`
  (`game=/storage/emulated/0/Android/data/com.fulger.resot/files/xbox-demo`)
  and `Unrecognized Xbox path: ERRasser.log`; a Windows run of the same demo
  continues from there with `NtReleaseMutant` and `AvSetDisplayMode`.
  The user's `files/logs/xbox-demo-err.txt` shows that the game got much
  further than the kernel log suggests: memory mapped at offset
  `0x74EDE71000`, BF reads, the widescreen hooks, `KeConnectInterrupt` for
  vector 3, `[NV2A] first submission: ring base 0x80004000` and
  `[NV2A] vblank -> ISR claimed it`, then
  `[CRASH] signal 11 ... fault addr=0x2AA24C` with eax=0x002AA24C,
  esi=0x002AA0B8 (the D3D device), edi=0xFD000000. In the lifted vblank
  handler `sub_0029F730` the next call after the last logged instruction
  (`in al, dx` at 0x0029F7AD) is the import at [0x0031C794] with
  esi+0x194 = 0x002AA24C, KeSetEvent on the device's event (XBE 0x0029F7F8).
  `bridge_KeSetEvent` falls back to `SetEvent((HANDLE)guest_va)` for a KEVENT
  it does not know; Windows refuses that handle (its guest offset is 0x10000,
  and the call fails harmlessly), the POSIX `win32_compat` dereferenced it.
  Fixed in `win32_compat.c`: every handle is looked up in a registry of live
  objects and an unknown one gets the Win32 failure (`ERROR_INVALID_HANDLE`,
  `WAIT_FAILED`). Not yet run on the device; the Windows build does not use
  this file. The crash report now also names the routine at PC and LR
  (`dladdr`).

**Checked here:** the extractor, compiled with the desktop JDK 21
(`javac`, a small harness calling `XisoExtractor.extractAll`), on
`Prince of Persia - The Sands of Time (USA).iso` (2,500,657,152 bytes):
171 files, 2,499,878,784 bytes in 3.2 s; `default.xbe` SHA-256
`753C58B1...E379` (the supported retail build); every one of the 171 files
byte-identical (`cmp`) to `Assets/xbox-retail` (whose extra files are the
game's saves and cache). Not checked: a demo ISO (none on this machine), the
extractor on the device, cancelling, a full-storage failure.

Also changed: case-insensitive name matching on Android (`kernel_path.c`,
`host_files.c` for the launcher's detection and the game's start-up check).
`.\tools\build-android.ps1`: `BUILD SUCCESSFUL`, APK 50.8 MB. Not run.

## 2026-10-18: first Android build (one APK, both targets, Vulkan)

**Built, not run.** No Android device was connected (`adb devices` listed
none), so nothing below has executed on Android: boot, the AArch64 MMIO
decoder, the 4 GB reservation, rendering, audio, touch and controller input,
the launcher and the ISO installation are all unverified there.

- `.\tools\build-android.ps1` (NDK 29.0.14206865, CMake 3.30.3, AGP 9.0.1,
  Gradle 9.1.0, compileSdk 36, minSdk 29): `BUILD SUCCESSFUL`,
  `bin/reSOT-android.apk`, 50.8 MB, package `com.fulger.resot` 0.1.0, signed
  with the debug key (`apksigner verify`). It holds `libresot_demo.so`
  (21.1 MB), `libresot_retail.so` (26.5 MB), `libSDL3.so` and
  `libresot_launcher.so` for arm64-v8a, the logo, the Atlantis MF face and the
  licences under `assets/licenses/`. Both game libraries link with
  `-Wl,--no-undefined`; `SDL_main` and the three `TouchControls` JNI
  functions are exported; `libSDL3.so` exports `RESOT_GetVulkanQueryAPI`.
- Before Gradle, the same `port/android/CMakeLists.txt` built by hand
  (`cmake -G Ninja` with the NDK toolchain): every lifted file of both
  targets compiles for AArch64 with clang, with no change to
  `source/*/gen`. Leaving out `src/nv2a` and `src/d3d` was needed to link:
  `nv2a_pb_replay.c`, `nv2a_pgraph_d3d11.c`, `nv2a_core.c` and
  `nv2a_pb_test.c` reference the D3D8 layer and xemu's register model, which
  nothing on Windows pulls from their static libraries either.
- The shared changes (GPU backend split by `RESOT_HW_D3D11`, `fb_present.c`,
  `scene.c`, the MMIO decoder, `win32_compat`, the SDL export) were rebuilt
  for Windows: `.\tools\recomp.ps1 -Target xbox-demo -BuildOnly` and
  `-Target xbox-retail -BuildOnly` both rebuilt `bin/sot-xbox-*.exe` with no
  errors; the warnings in the touched files are the existing ones. The
  Windows executables were **not run** after these changes.

Not checked: anything at run time on Android; whether the device's Vulkan
driver offers `occlusionQueryPrecise` (the retail game refuses the native
renderer without it); behaviour when the app goes to the background (the
game keeps running and the swapchain may disappear); case-sensitivity of
game file names on devices whose shared storage is not case-insensitive;
reading an ISO from a cloud document provider.

## 2026-10-18: native D3D12/Vulkan options and encoder; joystick bindings

**Joystick swapped in game.** The user's pad is an XInput Xbox 360
controller. A probe of `XInputGetState` (xinput1_4, all four slots, 30 s,
the user pressing A B X Y) read slot 0 as A=0x1000, B=0x2000, X=0x4000,
Y=0x8000: the system reports the buttons correctly, and the host chain
(`xinput_device.c` -> `options.c` filter -> `xbox_HlePadState`) is an
identity with the default bindings and was not changed by 7b82563. The
player's `resot-options.ini` held `[Joystick] Action5=2` (Jump on B) and
`Action9=0` (Cancel unbound). Two ways that file gets rewritten were found:

- A capture opened from the game's Joystick page took the next new pad
  press; the pad has no Esc, so pressing B to leave bound B. Now a capture
  is armed only once every pad input is released, Back cancels one opened
  from the game's menu, and an untouched one lapses after 8 s.
- A run with `RECOMP_PAD_SCRIPT` saved whatever its timed presses changed.
  A smoke run here with the demo's old script logged `post-processing
  off/on/off`, `FPS limit: 0` and `host VSync off` and wrote them into
  `bin/resot-options.ini` (restored to its previous `[Launcher]`-only
  content afterwards). Scripted runs (`RECOMP_PAD_SCRIPT`/`RECOMP_PAD_LIVE`)
  now keep option changes for the run only (`[OPTIONS] scripted pad:
  changes not saved`).

Not checked: the user rebinding from the game's menu with the new capture,
and gameplay with the pad after the ini reset.

**Post-processing on the native backends.** `hw_postprocess_candidate`
looked for the glow's 160x120 source among the D3D11 surfaces only, which
are empty when SDL GPU renders, so `PostProcessing=0` had no effect there.
The native encoder now answers it from its own surfaces
(`ng_postprocess_source`). VSync off falls back to mailbox where immediate
presentation is not offered, instead of to VSync.

**Encoder.** One persistent vertex transfer buffer cycled on map (it was
created and released at every flush); one vertex-buffer binding per pass
with draws selecting their run by first vertex; pipeline, sampler and
uniform pushes skipped when identical to the previous draw. The D3D12
sampler-heap guard now counts sampler descriptors actually written (budget
1536, as before) instead of 192 draws, and Vulkan has no such submit
limit. Overlay and F5/F6 panel images are kept and cycled instead of
created every frame; the overlay uploads only when its serial moves.

Checks: `tools/recomp.ps1 -Target xbox-demo -BuildOnly` and `-Target
xbox-retail -BuildOnly` (both built; only existing warnings). Isolated runs,
the executable copied to a scratch folder with its own ini
(`PostProcessing=0`, `VSync=1`, `FPSLimit=60`), a frame trace mid-run:

| Run | Renderer line | Glow composite | FPS samples (5 s windows) |
| --- | --- | --- | --- |
| demo, 55 s, D3D12 | `d3d12 native (SDL GPU direct3d12)` | `skipped frame=1706` | 47, 60, 87, 56, 49, 46, 46, 53, 43, 46 |
| demo, 55 s, Vulkan | `vulkan native (SDL GPU vulkan)` | `skipped frame=1204` | 30, 39, 50, 50, 44, 36, 45, 41, 48, 45 |
| retail, 90 s, Vulkan | `vulkan native`, queries ABI 1 | no `[POSTFX]` line in the traced frame | 12, 30, 29, 32, 39, 29, 33, 42, 36, 36, 42 |
| retail, 90 s, D3D12 | `d3d12 native`, queries ABI 1 | no `[POSTFX]` line in the traced frame | 15, 52, 54, 59, 56, 49, 45, 40, 47, 46, 38 |

The pad script reached reSOT Options in every run and turned the FPS limit
to None and VSync off partway (logged, not saved), so the samples mix
settings and scenes; they are not a before/after comparison. No `fatal`
line in any run. Retail logged zero visibility queries, as in the earlier
retail runs. Not checked: the picture (no readback or screenshot), the
retail glow skip, gameplay, a controlled performance comparison with
7b82563.

## 2026-10-18: both targets, HUD anchored to the sides at 16:9

The HUD passes through the Hor+ projection hook, so it arrives with its 4:3
proportions, centred. The renderer's HUD rule (`hw_classify_screen`,
`hw_hud_shift` in `nv2a_hw_d3d11.inc`, also used by the native D3D12/Vulkan
path) no longer keeps the demo's old anchor: a flat, depth-test-off batch
inside the projected 4:3 frame, wholly on one side of the centre, in the top
or bottom band, moves 80 px (16:9) to that side. `RECOMP_HW_HUD_EDGE=0` keeps
it in the 4:3 frame. Frame traces now print `hud -1/0/1`, and the CPU path
prints a bbox for its flat batches.

Checks: `python tools/check-hlsl.py` (seven entries passed), `git diff
--check`, `tools/recomp.ps1 -Target xbox-demo -BuildOnly` and `-Target
xbox-retail -BuildOnly` (both built).

Retail, before and after, the same pad timeline with frame traces at 80, 105
and 125 s:

```powershell
./tools/run.ps1 -Target xbox-retail -Seconds 130 -Windowed -SnapshotEvery 5 -Set @{
  RECOMP_PAD_SCRIPT='15000:start:400,25000:start:400,35000:a:400,45000:start:400,60000:a:400,75000:a:400,90000:start:400,100000:a:400,110000:a:400'
  RECOMP_FRAME_TRACE='logs/retail-hud-after.flag'
}
```

Before: the health bar batches were x=107.531..250.892, y=36.531..68.531
(top left, already narrowed by the projection); the readback showed the bar
about a quarter of the way in from the left edge. After: the same three
batches are traced `hud -1`; the 45-120 s readbacks
(`logs/retail-hud-after/`) show the bar near the left edge in the first
courtyard, the centred tutorial text ("left thumbstick controls Prince",
"Run toward edge and press A to jump") and the cutscene bars unchanged. No
other batch was classified as HUD in the traced frames.

Demo: the user ran the new build and confirmed the HUD is moved correctly.
A scripted demo run (`RECOMP_PAD_SCRIPT='22000:start:800,28000:a:800,62000:start:800,70000:start:800,78000:start:800,100000:start:800,140000:start:800'`)
stayed on the menus' Controller page from 65 s and exited by itself at about
140 s with no crash report in its log (why was not established). Its traced
frame classified nothing as HUD (the menu logo and text are not w=1); the
Controller page was not compared with a build before this change.

Not checked: a right-side or bottom HUD element (none was seen in either
game), other ratios than 16:9, the native D3D12/Vulkan path at runtime (same
constant, built only), the software rasteriser (no widescreen 2D handling),
every HUD state (sand tanks full, enemy fights, rewind), or the console.

## 2026-10-18: native D3D12/Vulkan retail bring-up and hardware visibility queries

Both native renderer selections now initialize on retail, without D3D11On12,
DXVK or a D3D11 device in the native path. The first retail level was reached
and its GPU readback visually inspected with each API. These are experimental
bring-up results, not a claim of complete gameplay correctness or parity with
D3D11 performance. The prior entry's unconditional retail fallback is superseded.

**Native query implementation.** Added published extension sources under
`port/third_party/sdl-gpu-query/` and `tools/patch-sdl-gpu-query.py`. They compile
inside pinned SDL 3.4.18 driver translation units and expose query ABI 1;
private SDL structures do not cross the DLL boundary. D3D12 allocates native
occlusion query heaps and resolves counters into readback resources. Vulkan
uses precise occlusion query pools; its device feature is enabled when
supported. Query objects are retained through SDL GPU submission fences.
Unsupported capability, missing ABI or a mismatched ABI causes an explicit
D3D11 fallback during retail initialization, before guest draws.

Retail's `0x000CE32E`/`0x000CE366` visibility requests route through
`nv2a_hw_native_visibility.inc`. Reset/resolve happen outside render passes,
begin/end inside one pass. The controller normalizes host samples to guest
pixels, keeps immutable FIFO report snapshots across CLEAR and repeated
GET_REPORT, and polls without waits or forced submissions. Only report issuance
submits pending query work; normal rendering submissions also assign fences.
Clears and host overlays are excluded. Query allocation/device failures abort
with a diagnostic rather than fabricating a completed report.
Demo does not enable retail's query semantics.

**Reproducible dependency build.** Ran `tools/setup-native-gpu.ps1` successfully
using cached, hash-checked official archives. In addition to the SDK/DXC hashes
already recorded below, SDL's official source ZIP is checked against SHA-256
`9CD42377704398796071B8597CD7E21DA254A43BAD98C4199739647ADC13FA6F`.
The installer extracts sources, applies the published additions and compiles an
altered SDL3.dll. Its licence and `SDL3-RESOT.txt` accompany portable builds.
`dumpbin /exports bin/SDL3.dll` showed both versioned query API getters;
`dumpbin /dependents` listed only Windows system DLLs. No separate Visual C++
runtime DLL or SDK is required by the player. A full portable asset-copy run
was not performed; packaging's dependency list and PowerShell syntax were checked.

**Builds/tests.** `python tools/check-hlsl.py` passed all seven checks.
`tools/recomp.ps1 -Target xbox-retail -BuildOnly` and the demo equivalent built.
No generated C, seed lists or XBE hash checks were changed.

```powershell
cmake -S port/third_party/xboxrecomp/tests/nv2a_native_gpu -B build/tests/native-gpu -A x64
cmake --build build/tests/native-gpu --config Release
ctest --test-dir build/tests/native-gpu -C Release --output-on-failure
```

All three tests passed. On both actual native GPUs, a 64x64 scissored draw
returned 4096 samples, while the identical draw rejected by LESS depth testing
returned zero. Report normalization produced 2048 and 1024 guest pixels;
a cumulative mixed-scale report produced 5120. Tests also checked repeated
snapshots, CLEAR before submission, reports staying pending before submission,
a cleared counter without GET_REPORT retiring after its fence, an empty report,
disabled counting and rejection of an incompatible ABI. Existing color/scissor
readbacks and actual 128x128 -> 192x160 swapchain resize checks still pass.
The third test exercises the metadata-read fix described below with readable,
read-only, guard, uncommitted, crossing-region and overflow inputs, without
consuming a guard page or raising an exception. These tests contain no game data.

**Retail Vulkan run:**

```powershell
./tools/run.ps1 -Target xbox-retail -Seconds 150 -Windowed -DumpFrames -SnapshotEvery 5 -Set @{
  RESOT_RENDERER='vulkan'; RESOT_GPU_DEBUG='1'
  RECOMP_PAD_SCRIPT='15000:start:400,25000:start:400,35000:a:400,45000:start:400,60000:a:400,75000:a:400,90000:start:400,100000:a:400,110000:a:400'
  RECOMP_PAD_LIVE='logs/native-retail-live.txt'
}
```

A live `lup:6000` input was appended during the run. The process was stopped
at the requested 150 seconds; no crash or SDL GPU error was logged. Native
Vulkan/query ABI initialization was logged. Readbacks showed the Prince in
the first courtyard with the movement tutorial and later on the ramparts with
the sword tutorial (`logs/native-retail-vulkan-150s.txt` / `.bmp`). The final
five-second sample logged 1,620,901 native draws cumulatively and 15.9 FPS;
other in-level samples were roughly 18–40 FPS. These are diagnostic samples,
not controlled benchmarks. Vertex programs still run on the CPU.

**Retail D3D12 and menu crash.** A first 30-second native D3D12 run rendered the
menu/garden. A longer attempt reached first-level platforms, but exited around
the 90-second Start input with an access violation reading guest `0xA7F52955`.
The stack passed through retail `0x00417F85` (the hand-written XInput state
hook). Its optional native-label refresh was walking stale main-menu choice
handles through `TEXT_MANAGER=0x007584F0`, object table +0x44 and text pointer
+0x9C. The failure was in this host-added label refresh, not a reported GPU
validation error. No lifted code or function boundaries were edited.

`source/xbox-retail/target_hooks.c` now probes each optional metadata word
before dereferencing it, performs address arithmetic without 32-bit wrapping,
rejects stale vector bounds and still requires the existing text-action vtable
and reSOT text-group reference before refreshing a label. The shared probe is
`port/game/guest_probe.h`; it checks committed readable host regions and
rejects guards without triggering the crash handler. It does not swallow
exceptions from lifted game execution.

Repeated the same pad timeline through 110 seconds, using native D3D12,
`RESOT_GPU_DEBUG=1`, `-Seconds 115 -SnapshotEvery 5` (no live movement file).
The process survived to the requested 115-second limit. Its log explicitly
skipped unreadable `0xA7F52955` and three other stale words, with no crash or
SDL GPU error. The final GPU readback showed the Prince in the first courtyard
with the movement tutorial (`logs/native-retail-d3d12-fixed115s.txt` / `.bmp`).
The final sampled cumulative draw count was 1,123,840; in-level five-second
samples included 21–43 FPS. The final header extraction of the same probe and
latest UI strings were rebuilt successfully.

**Important scope of visibility validation:** both real game runs logged zero
visibility queries/reports in these particular scenes. Hardware query counts,
snapshot lifetime and normalization are proven by the GPU tests above; the
retail game's own nonzero GET_REPORT traffic was not observed in these runs.
Do not describe this as game-level validation of every visibility-test user.

**Fallback/regressions.** A copied retail executable with the unmodified SDK
SDL3.dll logged the missing retail query extension, then initialized native
D3D11 and rendered a surface in a 12-second run
(`logs/native-retail-old-sdl-err.txt`). The versioned getters also reject an
unsupported ABI in both synthetic tests. Existing saves were copied to ignored
`build/retail-native-UDATA-backup/` before the long runs; comparison found no
changes to pre-existing save files at that point.

The final retail D3D11 build and demo native D3D12/Vulkan builds each ran
for 12 seconds after the extension changes, reported the requested active API,
and were stopped at the requested limit without a crash or SDL GPU error
(`logs/native-retail-d3d11-regression.txt` and
`logs/native-retail-demo-*-regression.txt`). A final comparison after all runs
found no changes to pre-existing files in the backed-up retail UDATA tree.

**Remaining limits:** native GPU vertex-program translation and performance
parity, border-address sampling, full stencil, full-level progression, long
sessions, save/load on native renderers, manual F7 renderer switching/restart,
full native-menu lifecycle validation, and comparison to a console. D3D11
remains the default. The native retail options are enabled and usable for
further testing, with the preceding limits explicit.

## 2026-10-18: native D3D12/Vulkan demo encoder; retail migration incomplete

**Scope:** replaced D3D11On12 and DXVK in the active renderer with
`nv2a_hw_native.inc`, an explicit SDL GPU encoder selecting `direct3d12` or
`vulkan`. It uses native resources, pipelines, GPU draws, uploads, submission
and fenced readback with embedded DXIL/SPIR-V combiner shaders. It does not
create a D3D11 device on either native path. NV2A vertex programs still use
the existing CPU interpreter; GPU vertex-program translation is unfinished.
No guest addresses, seeds, generated C or XBE checks were changed.

**Retail is not migrated:** native initialization explicitly logs a D3D11
fallback, because retail XBE `0x000CE32E`/`0x000CE366` needs real occlusion
reports and SDL GPU 3.4 exposes no query API. F7 names the native choices,
shows the actual active API separately and reports the retail query limit.
No fabricated visibility results are used. Both targets still default to D3D11.
The old interop sources/tests were preserved locally under ignored
`build/native-migration-backup/` before retiring them from the active tree.
Earlier entries below describe the superseded translation paths.

**Build/dependencies:** `tools/setup-native-gpu.ps1` was run against the
checked official SDL3 3.4.18 and DXC v1.9.2609 archives, using their SHA-256
values recorded in that script. `tools/setup-vulkan.ps1` now forwards to it.
`python tools/check-hlsl.py` passed all seven D3D11/shared-HLSL checks.
`tools/recomp.ps1 -Target xbox-demo -BuildOnly` and the corresponding retail
command both built. The CMake step compiles six host shader entry points to
both DXIL and SPIR-V and embeds them; player folders need only SDL3.dll,
not DXC. Packaging copies SDL3.dll and its licence, never the old DXVK DLLs.
A complete portable asset-copy/package run was not performed for this change.

**Synthetic GPU tests:**

```powershell
cmake -S port/third_party/xboxrecomp/tests/nv2a_native_gpu -B build/tests/native-gpu -A x64
cmake --build build/tests/native-gpu --config Release
ctest --test-dir build/tests/native-gpu -C Release --output-on-failure
```

Both tests passed. Each selects its requested native driver, draws alternating
red/green scissored triangles with the embedded NV2A host shader, fences and
checks exact GPU readback pixels inside/outside the scissor. Each acquires
real presentable images and verifies swapchain dimensions change from
128x128 to 192x160. No D3D11 headers/libraries or game bytes are used by these
tests. The first hidden-window Vulkan test did not acquire a swapchain image;
the final test was corrected to show its window and require non-null images
and exact dimensions, then both tests were rerun successfully.

**Demo observations:** a 20-second D3D12 run and a 30-second Vulkan run,
using `tools/run.ps1 -Target xbox-demo -Windowed -DumpFrames -Set
@{RESOT_RENDERER='d3d12'}` / `'vulkan'` with scripted A/Start inputs, selected
the requested native SDL GPU driver. GPU readbacks were visually inspected:
D3D12 showed the demo menu, Vulkan the animated palace/garden sequence after
Start. These captures are local ignored diagnostics, not new README media.
This proves native draws/readback for those frames, not gameplay correctness.

**Problems found and addressed:** DXC retains unused pixel-input semantics;
`ps_solid` now declares no interpolants in the native shader build, allowing
it to link to the fullscreen vertex shader. Initial per-draw transfers and
copy/render passes ran at roughly 16–21 FPS in sampled menu/transition windows.
Immutable draw snapshots now share uploads and compatible render passes.
Longer D3D12 runs then exposed `CopyDescriptorsSimple` destination-heap error
646. Inspection of SDL 3.4.18's official D3D12 source showed its table writer
checks the current descriptor index but not index plus the table size against
its 2048-sampler heap. Mixing one-slot host blits and eight-slot guest draws
can cross the boundary. The frontend now limits each submission to 192 draws
(at most 1536 sampler descriptors), and submits offscreen composition before
acquiring the swapchain image. The upstream SDL DLL is unchanged.

**Final bounded D3D12 run:**

```powershell
./tools/run.ps1 -Target xbox-demo -Seconds 55 -Windowed -DumpFrames -Set @{
  RESOT_RENDERER='d3d12'; RESOT_GPU_DEBUG='1'
  RECOMP_PAD_SCRIPT='2000:a:200,6000:a:200,12000:a:200,22000:start:600,28000:a:600,45000:start:600'
}
```

Stopped at the requested 55 seconds, with no SDL/D3D12 validation error in
`logs/native-d3d12-bounded.txt`; the earlier descriptor error was not repeated.
The log reached the demo's `0101_Entree`/`0101_Porte` load and 595,229 total
native draws. Five-second samples ranged from 25.4 to 63.0 FPS after the
initial 34.0 sample. The dump was inspected but was an earlier palace/garden
frame; the run did not continuously capture every later scene. This is not a
claim that Entree gameplay renders correctly or that native performance is
comparable to the existing D3D11/GPU-vertex path.

**Final bounded Vulkan run:** the same scripted A/Start inputs (without the
last 45-second Start), with `RESOT_RENDERER='vulkan'`, `RESOT_GPU_DEBUG='1'`
and `-Seconds 45`, stopped at the requested limit. It selected `SDL GPU
vulkan`, loaded `0101_Entree`/`0101_Porte` and recorded 350,887 native draws;
no SDL GPU error was logged (`logs/native-vulkan-bounded.txt`). Five-second
samples ranged from 10.2 FPS around a transition to 63.4 FPS. Its readback
was inspected and likewise showed an earlier palace/garden frame, so later
level appearance remains unverified. Native performance is not yet at parity
with D3D11. `dumpbin /dependents bin/SDL3.dll` listed only Windows system
DLLs, without a separately required Visual C++ runtime DLL.

**Fallback regressions:** demo D3D11 ran for 10 seconds and reported
`active renderer: Direct3D 11`. Retail native selections each ran for 12
seconds and explicitly reported the missing native visibility queries,
then `active renderer: Direct3D 11` (`logs/native-retail-*-fallback.txt`).
A copied demo EXE under `build/native-no-sdl/`, without SDL3.dll, ran for
10 seconds: its explicit missing-DLL log and D3D11 initialization confirmed
delayed loading keeps the fallback usable.

**Not validated/unfinished:** native retail visibility queries and retail
native draws, native GPU vertex-program translation, border-address sampling
(currently clamped), full stencil, complete level progression, long sessions,
save/load on native renderers, F7 mouse selection/restart in a manual session,
and comparison to console output. The native backends remain experimental;
the user's full request to migrate both executables is not complete.

## 2026-10-18: optional Vulkan execution through DXVK; D3D11 default retained

Added `Vulkan` to the F7 renderer choices, applied after restart. The host
loads unmodified DXVK 3.1.1 x64 `dxgi.dll` and `d3d11.dll` by absolute path
from `renderers/vulkan/` beside the executable. It passes DXVK's own factory
and adapter explicitly, verifies `IDXGIVkInteropDevice` and non-null Vulkan
instance/physical-device/device handles, then uses the shared NV2A D3D11
encoder. This is D3D11-to-Vulkan translation, **not native Vulkan encoding**.
There are no guest-address or seed changes. Failure to create the backend
logs a native D3D11 fallback. Successful DXVK modules remain loaded for the
process lifetime, including their asynchronous workers.

`d3d11` is still the default for missing/invalid preferences. The saved
selection and active backend are separate; `RESOT_RENDERER=vulkan` overrides
only this run and is not copied into the saved choice when another setting
is saved. The local development INI was left at `Renderer=d3d11`.

**Dependency:** ran `./tools/setup-vulkan.ps1`, downloading the official
3.1.1 release archive and verifying SHA-256
`40565b4a724aadc4433fa4e010b4b23916d9b1f1baeee64e17186db94f54e608`.
Rerunning with the verified cache also passed. DLLs, licence and version
metadata are under ignored `bin/renderers/vulkan/`; the installer and licence
are published, not the DLLs. Network download required execution outside
the sandbox. `tools/package.ps1` now copies this optional subdirectory and
checks its completeness; a full portable packaging run was not repeated.
DXVK writes additional logs beside the game and its own shader cache under
`%LOCALAPPDATA%/dxvk` by default.

**Build:** `python tools/check-hlsl.py` passed all seven entries;
`./tools/recomp.ps1 -Target xbox-demo -BuildOnly` and the equivalent retail
command passed. Final builds include the saved-vs-environment distinction.

**GPU tests:** configured/built
`port/third_party/xboxrecomp/tests/nv2a_vulkan` in `build/tests-nv2a-vulkan`,
then ran `python tools/run-build-tool.py ctest --test-dir
build/tests-nv2a-vulkan -C Release -V`: all three tests passed, none skipped.
The DXVK test verifies real Vulkan handles, 12 presents, exact alternating
BGRA color readbacks and resize to 192x96. A native D3D11 test uses the same
installed-DXVK directory and rejects a DXVK interop interface on the native
device. A separate executable without DXVK verifies failed-load cleanup,
then native D3D11 rendering/readback/resize. These are synthetic host tests,
not proof of complete game correctness.

**Default regression on the final build:** removed the `RESOT_RENDERER`
environment override and ran `./tools/run.ps1 -Target xbox-demo -Windowed
-Seconds 15`, with `Renderer=d3d11` saved and DXVK still installed. The log
reports `active renderer: Direct3D 11`, continued drawing until the harness
stopped it, and no Present failure. The INI still reads `Renderer=d3d11`.
Evidence: `logs/vulkan-native-default-demo.txt`. The existing D3D12 GPU
smoke test was rerun and passed (`ctest --test-dir build/tests-nv2a-d3d12
-C Release --output-on-failure`). Both PowerShell scripts parse successfully;
`git diff --check` reports no whitespace errors.

**Game, separately for each XBE:**
`./tools/run.ps1 -Target xbox-demo -Windowed -Seconds 20 -DumpFrames -Set
@{RESOT_RENDERER='vulkan'}` and the same command for `xbox-retail`.
Both runs report verified Vulkan handles and `active renderer: Vulkan (DXVK)`.
GPU surface readbacks were visually inspected: demo Start menu over the
garden; retail Start New Game menu over the garden. Neither log reports a
Present/backbuffer failure; the harness stopped both at 20 seconds.
Initial samples were slow (including first-use compilation); later samples
were about 56 FPS demo and 96 FPS retail. The scenes and compilation state
differ, so these are observations, not an API performance comparison.
DXVK logs identify NVIDIA GeForce RTX 3060, driver 595.97.0.
Ignored evidence: `logs/vulkan-{demo,retail}-boot.{txt,bmp}` and
`bin/sot-xbox-{demo,retail}_{d3d11,dxgi}.log`.

**Not checked:** F7 mouse selection followed by an actual restart; extended
gameplay, audio/visual parity, Vulkan fullscreen/live resolution changes in
the game, unsupported GPU/driver recovery (only missing DLLs tested), or
portable distribution on another machine. The Vulkan path remains optional.

## 2026-10-18: optional D3D12 execution through D3D11On12

Added a D3D12 device/direct queue and a two-buffer flip-discard swap chain
to the NV2A pushbuffer renderer. Existing D3D11 draw/resource commands use
Microsoft D3D11On12; this is **not a native D3D12 draw encoder**. Backbuffers
are wrapped individually, acquired for composition, released to PRESENT
and flushed before DXGI presentation. Resize drops wrapped references and
waits for the queue fence. D3D12/D3D11On12 entry points load from system DLLs
at run time; device initialization failure logs a fallback to D3D11.

F7 Graphics saves `Graphics/Renderer=d3d11|d3d12` in `resot-options.ini`;
restart applies it. The panel names the active backend independently of
the saved choice. `RESOT_RENDERER` overrides the INI for a run. D3D11 remains
the default; Vulkan remains unavailable. No guest addresses or seeds changed.

**Build checks:** `python tools/check-hlsl.py` passed all seven entries;
`./tools/recomp.ps1 -Target xbox-demo -BuildOnly` and the equivalent
`-Target xbox-retail` passed. MSBuild required execution outside the sandbox
after its FileTracker failed with access denied.

**GPU check:** configured/built
`port/third_party/xboxrecomp/tests/nv2a_d3d12` in `build/tests-nv2a-d3d12`,
then ran `python tools/run-build-tool.py ctest --test-dir
build/tests-nv2a-d3d12 -C Release -V`. Passed (not skipped): 12 presents,
both flip buffers used, exact BGRA readback of alternating red/green/blue,
and resize to 192x96 with subsequent readbacks. The first test exposed
dependence on D3D11 already being loaded; explicitly loading the system
D3D11 DLL corrected it and the test then passed.

**Game checks, separately for each XBE:**
`./tools/run.ps1 -Target xbox-demo -Windowed -Seconds 25 -DumpFrames -Set
@{RESOT_RENDERER='d3d12'; RECOMP_PAD_SCRIPT='2000:a:200,6000:a:200,12000:a:200,18000:a:200'}`
and the same command with `-Target xbox-retail`. Both logs report
`active renderer: Direct3D 12 (D3D11On12)`, with no Present/backbuffer error
reported. Demo readback shows the menu garden and Camera selected; retail
readback shows the garden with letterbox bars. Both runs were stopped by
the 25-second harness. After initial lower-rate samples they reported about
60 FPS; the logs show the saved VSync preference off (a brief scripted
retail menu toggle enabled and disabled it). These are menu observations,
not comparative benchmarks.
Logs/readbacks: ignored `logs/d3d12-{demo,retail}-boot.{txt,bmp}`.

**D3D11 regression:** `./tools/run.ps1 -Target xbox-demo -Windowed -Seconds
15 -Set @{RESOT_RENDERER='d3d11'}` on the final build reported the D3D11
backend and continued rendering until the harness stopped it, with no
Present error reported (`logs/d3d11-demo-regression.txt`). Retail D3D11
regression was not rerun in this change.

**Not checked:** F7 mouse selection and persistence through an actual restart,
unsupported-GPU fallback, in-game fullscreen/resolution switching, sustained
gameplay, visual parity with D3D11 or the console, or relative performance.
Synthetic GPU resize success does not validate the game's entire resize/UI
path. Native D3D12 command encoding remains future work.

## 2026-10-18: replacement logo and Windows icons

Replaced `docs/media/reSOT.png` with the user's Downloads `reSOT_logo.png`
(byte-for-byte). The README and launcher resource 202 already reference this
asset. Converted it to `port/windows/res/resot.ico`, preserving transparency
and proportions with transparent square padding, at 16/24/32/48/64/128/256 px.
The executable and launcher window both use icon resource 1.

**Run:** `python tools/check-hlsl.py` (seven shader entries passed),
`./tools/recomp.ps1 -Target xbox-demo -BuildOnly` and
`./tools/recomp.ps1 -Target xbox-retail -BuildOnly` (both passed).
**Checked:** loaded both built executables as resource data with Windows
`LoadLibraryExW`; embedded PNG resource 202 matches the new PNG byte-for-byte,
and all seven icon images in group 1 match the replacement ICO.
**Not checked:** live launcher appearance or Windows Explorer icon caching.

## 2026-10-18: F7 portable options panel restored, both targets built

Recovered the host options overlay from the user's older project snapshot
`rePOP-1a066d08c09940b45706fba0b8bf8655bb89612d`, integrating it with the
current shared settings and native menu APIs in `port/windows/src/options.c`.
F7 toggles options; F6 still routes to diagnostics. Options take display
priority while open and suppress game input. Graphics and bindings share
`resot-options.ini` with the native menu; F5/F6/F7 are reserved during binding
capture. The scripted-input background-focus allowance is preserved.

**Run:** `python tools/check-hlsl.py` (all seven shader entries passed),
`./tools/recomp.ps1 -Target xbox-demo -BuildOnly` and
`./tools/recomp.ps1 -Target xbox-retail -BuildOnly` (both completed and wrote
the executables in `bin/`). The first sandboxed demo build failed with
MSBuild FileTracker access denied; the build passed outside the sandbox.
**Not checked:** opening, clicking, resizing or rebinding in a running game,
the visual layout, or interaction with the diagnostics panel at runtime.
Existing user verification of the native menu does not validate this overlay.

## 2026-10-18 (evening): xbox-demo, audio stutter in the bath fight

The user reported stuttering audio and 120 -> 85-90 FPS in the bath area
(`06_GP24_Bath_Fight`, `2401_LowerBath`/`UpperBath`).

**Run:** `tools/run.ps1 -Windowed -Set @{RECOMP_APU_WAV='logs/apu-out.wav';
RESOT_PROFILE_MS='2'}`, played by the user to the bath fight. **Seen:** the
recorded output had about five gaps a second of exact digital zero, each one
to four 256-sample frames long plus 32 samples, all starting on a frame
boundary; the APU frame thread was not late (`late 0`). The frame thread
emitted silence while DirectSound held the front end (FECTL trapped or
halted). **Change** (`apu_core.c`, `RESOT_RUNTIME_DEMO`): wait for the front
end, as xemu does, and make the frames up afterwards (up to 16). The `[APU]`
line now also reports lateness, the longest block, the longest wait for the
APU lock and the time the front end was held. Hot `getenv` calls were made
one-time (APU MMIO fault handler, ack-thread fence tick, `recomp_unimpl`).
**Seen after:** the user heard no stutter; 76 s of recording had one gap of a
frame or more against hundreds before; front end held up to 348 ms per ten
seconds with no new XAudio2 starvation. The XAudio2 queue now sits at 10-11
frames (about 55 ms) instead of 6. **Not checked:** xbox-retail (unchanged),
other levels, a full play-through.

The frame drop is not fixed. In the same scene the title thread spent 33-62%
of its samples in `xbox_Nv2aWaitClear` (KickOff waiting for the executor).
A ten-second `[KICK]` line now counts KickOff waits and the executor's time.
**Run:** `run.ps1 -Windowed -Seconds 80 -Set @{RECOMP_PAD_SCRIPT=
'30000:start:800,36000:a:800,42000:a:800'; RESOT_PROFILE_MS='2'}`.
**Seen:** about 20 KickOffs per frame (22261 in 10 s at 112 fps), nearly all
of them waiting for the executor to come back from the segment before: the
title and the executor run in lockstep. Three experiments, none kept:

- KickOff never waiting: the main menu hung. The title filled the ring;
  D3D's space wait `sub_0029D010` (argument 1) polls NV register 0x400B10
  against the fence dword, which nothing emulates (fence 0x3F, register 0).
  Mirroring the fence into that register got past it, and the title then
  blocked in `sub_0029D290` on an event only a GPU interrupt would set
  (`logs/kick-nowait-menu-test4.txt`).
- The title up to 3 segments ahead (cleared while DMA_GET matched one of the
  last three PUTs): menus and the scripted level ran, but the user's run
  crashed entering the hourglass room (`0103_Hourglass`) with the executor
  following a JUMP to 0x8E7EF754, outside contiguous memory
  (`pb_scan_to`, `logs/hourglass-crash-kick-ahead3.txt`).
- The same with fences reported reached only when GET == PUT: the executor
  ran 2000-2400 draws and 500 000 triangles a frame instead of about 400 and
  40 000, at 50 fps, and the user saw many graphical defects.

Overlapping the title with the executor needs the executor to keep its own
copy of what it has not yet consumed, or real fence/interrupt emulation; it
is not a change to the KickOff wait alone.

**Hourglass room crash (pre-existing).** The committed build (`ce2de3a`,
changes stashed, `recomp.ps1 -BuildOnly`), hourglass room loaded with the
hidden "Load Map" menu: the picture showed, then the ack thread faulted in
`pb_scan_to` reading 0x8DA53F24 (`logs/hourglass-head-run.txt`). The walk
had followed a CALL or a JUMP past the 64 MB of physical memory; `pb_walk`,
which runs CALLs, had no bound. It now stops at the end of the contiguous
window like `pb_scan_to` and logs `[PB] walk left physical memory` with the
word that sent it there. **Seen after:** no crash and no `[PB] walk` line;
the room showed at about 90 fps (1273-1294 draws, executor 7 ms a frame),
then the picture blurred and went black with "Work in progress" in the
corner while the title kept drawing the same 1112 draws a frame. **Not
checked:** whether that fade is the demo's own end of an unfinished map
(the committed build crashed before reaching that moment); what produced
the out-of-range CALL.

**Shader compile stalls (xbox-demo).** In the hourglass room the user saw
7 fps, later 1 fps (the 1 fps run was a test with `RECOMP_HW_SHADER_CACHE=0`).
The log had `cold shader vs_prog compiled in 157.16 ms`, KickOff waits up to
158 ms, a 160 ms APU stall and `[IRQL] ... held by tid ... for >100 ms`: each
vertex program met for the first time was compiled on the executor, under the
dispatch lock. 37 programs dumped from the first level (`RECOMP_HW_VSH_DUMP=
all`) compiled offline in 24-158 ms (mean 69) at the current flags,
`SKIP_OPTIMIZATION` mean 44, `LEVEL0` mean 71: the flags are not the answer.
**Change** (`nv2a_hw_d3d11.inc`, `RESOT_RUNTIME_DEMO`, `RESOT_ASYNC_VSH=0`
restores the old path): a program missing from the disk cache is compiled
on a background thread and its batches use the vertex interpreter until it
is ready. **Seen:** scripted run with an empty cache: KickOff wait max 23.5 ms
against 245 ms before, no new APU starvation, no IRQL warning, interpreted
draws up to 17 a frame while compiling. The user then played the hourglass
room: lowest 80 fps, no crash. Restarted from the beginning and played to
the point that used to crash (`05_GP14_Jardin`, `1401_Cour`): no crash; drops
to 67-78 fps where draws reach 850-1090 a frame with the executor at
7.3-7.5 ms (no shader compiled then). **Not checked:** xbox-retail; whether
the interpreter frames differ visibly from the GPU ones.

**Batch reuse across frames (xbox-demo).** Batch reuse was limited to one
frame, so static meshes were converted and uploaded every frame; 89% of
batches missed. A batch now stays valid while the vertex/index ring
generation that holds it lasts (rings 64 MB / 8 MB, 8192 entries), and its
source range is hashed in full -- from its lowest to its highest index, once
per executed segment -- instead of 64 sampled dwords (`nv2a_hw_d3d11.inc`,
`RESOT_RUNTIME_DEMO`). Hashing from vertex 0 put `hw_reuse_key` at 56-60% of
the executor and 47 fps; from the lowest index it is 6-8%. **Run:** the
scripted 80 s run above. **Seen:** reuse about 80% (3.4 M hits, 0.77 M
misses), 7-14 thousand vertices uploaded a frame instead of 50-80 thousand,
executor 3.4-4.3 ms at 478-655 draws (before 4.4-4.9 ms at 400-470). The user
played the garden (`05_GP14_Jardin`): steady 93-100 fps at about 880 draws
(was 67-78), executor 5.4 ms, title 5.3 ms; drops to about 43 fps while the
level loads (title 15-20 ms a frame) and the user still finds the drops too
deep. **Not checked:** a visual comparison frame by frame; xbox-retail.

What is left is the lockstep: a frame costs the title's time plus the
executor's. Overlapping them needs the executor to own what it has not yet
consumed (see the three failed attempts above).

## 2026-10-18 (later): launcher finds both games; blue restyle

The launcher now keeps one folder per game (`[Launcher] DemoDir`,
`RetailDir`) and scans the folders beside the executable, so with the demo
and the retail game both installed both buttons start their own folder; the
first version started the last extracted folder whatever was chosen. The
desert, dunes and arch were removed; the screen is night blue with luminous
blue edges and white-blue lettering on a blue glow, with the golden sand kept.

**Run:** a folder with `sot-xbox-retail.exe` (rebuilt with
`tools/recomp.ps1 -Target xbox-retail -BuildOnly`), the earlier
`sot-xbox-demo.exe`, the extracted demo ISO and a junction `retail` to
`Assets/xbox-retail`, no `resot-options.ini`. **Seen:** both buttons enabled,
"E3 2003 demo" and "NTSC retail" under them with their folders (screenshot).
Enter from the retail executable: `[LAUNCHER] start`, retail booted on
`retail` with `ext-vma=1`. Left, Enter: `[LAUNCHER] handed off`, the demo
booted on `pop4demounused.xiso` with `ext-vma=0`. The ini then held both
`DemoDir` and `RetailDir`. Each game was stopped after it booted; nothing was
played. From the rebuilt demo executable, same folder: Enter started the
demo on `pop4demounused.xiso`; Right, Enter handed off and retail booted on
`retail` with `ext-vma=1`. **Not checked:** gameplay after either start.

## 2026-10-18: one runtime for both targets; launcher and ISO installation

**Runtime merge.** `port/third_party/xboxrecomp-demo` and `-retail` became
one tree, `port/third_party/xboxrecomp`, compiled per build tree with
`RESOT_RUNTIME_DEMO` or `RESOT_RUNTIME_RETAIL`. Check: each changed source
(`apu_core.c`, `guest_vmem.c`, `kernel_bridge.c`, `kernel_file.c`,
`kernel_hal.c`, `nv2a_pb_exec.c` with `nv2a_hw_d3d11.inc`,
`xbox_memory_layout.c`, `fb_present.c`) was preprocessed (`cl /EP`) per
target and compared token by token with that target's previous copy. Left
differences: equivalent rewrites (a `{}` case block, parentheses, an empty
visibility poll in the demo), declarations, the retail DMA-token helpers
compiled but not called in the demo, and diagnostics that only run with an
environment variable and are now shared (`RECOMP_TRACE_WRITES`,
`RESOT_CLOCK_CHECK`, the demo's `RECOMP_FRAME_TRACE`/`RECOMP_HW_GLOW_DUMP`
output, which retail now writes in the demo's per-flip form).
`python tools/check-hlsl.py`, `test-apu-dma.py`, `test-apu-irq.py`,
`test-retail-io-apc.py`, `test-retail-save-io.py`, `test-visibility.py`,
`test-audio-resampler.py` and `tools/tests/test_seed_scan.py` passed.
`test-apu-irq.py` did not link before this change (its harness lacked the
dispatch-lock functions the demo dispatcher already called); stubs added.
`tools/recomp.ps1 -BuildOnly` built both executables with no errors.
Not checked: gameplay of either target on the merged runtime beyond the
launch below.

**Launcher.** `launcher.c` replaces the folder picker. Seen: the screen on
`Assets/xbox-demo` named the demo from its `default.xbe` hash, with Start
Demo enabled and Start Game disabled (screenshot). The user, in a folder with
only the two executables, chose `pop4demounused.xiso.iso` from the retail
executable; it was extracted (608 MB, `default.xbe`, `prince.bf`, `sound`,
`video`, `preview.*`), `[Launcher] GameDir=pop4demounused.xiso` was saved,
and Start Demo handed over to `sot-xbox-demo.exe`, which booted on that
folder with `ext-vma=0` (no retail default leaked); the user reports it
works. Also seen: the child `--resot-extract-xiso -l` listing of the retail
ISO through a pipe (171 files, 2,499,878,784 bytes). Not checked: a retail
extraction end to end, cancel, insufficient disk space, an ISO path outside
the code page.

## 2026-10-18: user verification update, both targets

The user reports the following for both `xbox-demo` and `xbox-retail`:
portable launch, F5 overlay and video skip confirmed; external game folder,
options and F6 diagnostics verified; movie audio and video verified; menus,
controller and keyboard verified; frame rate 120+ FPS; audio corrected;
save crash resolved. The README status table reflects these reports.

**Command:** not supplied; these are user observations, with no new agent
build or runtime test. Frame rate, audio and save/load remain partial:
the tested scenes, duration and settings were not specified, and broader
performance, audio, save/load and memory-unit validation is incomplete.
Rendering and Hor+ status are unchanged. No console comparison was supplied.

## 2026-10-17 (night): retail reSOT Options, F6 diagnostics panel

**Retail menu map.** The retail XBE's menu library was matched routine by
routine to the demo's and checked in its code (addresses in
`source/xbox-retail/target_hooks.c`). `RESOT_MENU_TRACE=1` run
(`logs/retail-menu-trace-err.txt`): the main menu (init 0x002345D0) has
Start New Game, Load Saved Game, Options, Xbox Live, Extra Features; the
pause menu (0x001A2D60) has Pause, Options (Sound, Display, Camera,
Controller), Language, Game Over and the Xbox Live pages; 0x002849C0 builds
Load Saved Game and Making of; the 19-choice grid of 0x002C5FB0 is the Xbox
Live name keyboard. `RESOT_TEXT_DUMP` shows that group 0x0B0041D2 still holds
"View Cutscenes" (5), "Special" (7) and "Special Load Map" (8), but no
routine of the XBE builds a page with them: there is no hidden level select
to re-link in retail. (Dumping group 0x0B004619 faulted in 0x000F84A0: it is
not a text group; the dump is a trace-only tool.)

**Retail reSOT Options.** "reSOT Options" is added to the main page before
its close (0x00234D86) and its nine pages are built before the next page
(0x00234DC8), with xmm1 = 0.4 and flags 5; message choices are taken in the
0x00039B20 override; labels refresh through 0x00038DD0 (eax = 1).
`tools/recomp.ps1 -Target xbox-retail -SkipAnalysis`
(`logs/retail-native-build.txt`), then a run with `RESOT_MENU_TRACE=1`
(`logs/retail-native-err.txt`): `9 pages, 63 of 63 choices bound, main entry
000000A9 bound`, and `reSOT labels refreshed (55, revision N)` after each
change. The user checked the retail pages and reported them working.
**Not checked:** returning to the main menu from a level (the pages are
rebuilt for each new main menu by design, not yet seen).

**F6 diagnostics.** F6 is now a diagnostics panel (`port/windows/src/diag.c`)
fed by new runtime counters in both copies (`xbox_DiagRenderer`,
`xbox_DiagAudio`, `xbox_DiagDpc`, `xbox_DiagMemory`, marked RE-SoT); the old
options panel was removed from `options.c`, whose settings are reached from
the game's menu. Demo run, F6 then Ctrl+Shift+C (`logs/diag-f6-demo.png`):
the panel showed frame, executor, renderer, reuse, heap, contiguous, host,
audio, DPC, IRQL, world and log lines; the clipboard held 94 lines
(12 measurements, 80 log lines). The user then checked the demo build.
**Not checked:** the panel in retail by us; the click on Copy (only the
keyboard shortcut was driven).

## 2026-10-17 (night): xbox-demo, reSOT Options pages placed and live

- Two faults in the native reSOT Options pages, both in
  `source/xbox-demo/target_hooks.c`. (1) 0x0023F110 takes the column's left
  edge in xmm0 (stored at +0x294); every game page passes 0.4 from
  0x003339EC, our pages passed whatever xmm0 held, so Graphics and the
  binding pages started at different places and ran off the right edge.
  `native_build_page` now sets xmm0 = 0.4 and restores it. (2) A choice's
  label is copied into its text object only when 0x000605C0 runs the text
  actions (page changes), so a changed value kept its old label.
  `options.c` now counts changes (`resot_native_revision`), and the
  XInputGetState hook runs 0x000605C0 for our value choices when the count
  moves, after checking that the text object still carries the injected
  reference (text action vtable 0x0032380C, group 0x0B00FE00).
- `python tools/check-hlsl.py` ok; `tools/recomp.ps1 -Target xbox-demo
  -BuildOnly` (`logs/resot-options-fix-build.txt`).
- Run with `RESOT_MENU_TRACE=1` (`logs/resot-options-fix-run.txt`): stderr
  shows `reSOT labels refreshed (55, revision N)` after each change. The user
  checked the pages in this build and reported the layout and the labels
  correct. **Not checked:** a capture of the binding pages after the fix by
  us; the labels after returning to the menu from a level.

## 2026-10-17 (evening): xbox-demo, Language entry removed

- `source/xbox-demo/target_hooks.c`: the hidden-menu table now adds only
  "Load Map" before Quit; the Language page (+0x284) stays unlinked.
  `nv2a_hw_text.inc` (menu text capture, no longer used) removed from the
  demo runtime with its three call sites.
- `python tools/check-hlsl.py` ok; `tools/recomp.ps1 -Target xbox-demo
  -BuildOnly` linked after a transient LNK1104 lock on the exe.
- `bin/sot-xbox-demo.exe` run for 40 s: stderr shows `"Load Map" choice
  00000042 added to the main page` and `opens page 00000007`, no Language
  line. **Not checked:** the menu on screen, selecting Load Map in this build.

## 2026-10-17 (afternoon): batch reuse, uniprocessor dispatch lock

**Demo frame rate.** `tools/run.ps1 -Target xbox-demo -Windowed -Seconds 100
-Set @{RECOMP_PAD_SCRIPT='15000:start:500,22000:a:500,50000:start:500';
RESOT_PROFILE_MS='2'}` at the user's flicker location in the first level
reported 26 fps: 4,600 draws, 720k vertices per frame, 35 ms executor and
3.5 ms title per frame; the executor thread's samples were 30% `fetch_attr`
and 22% `hw_draw_program_batch`. A frame trace shows ~1,290 instances per
frame of the same three vegetation batches (same arrays and index list,
different instance constants). Both runtime copies now reuse the host vertex
and index ranges of an identical batch already uploaded in the same frame
and ring generation (`HwReuse` in `nv2a_hw_d3d11.inc`; key: index list,
attribute layout; content: sampled source bytes). After `python
tools/check-hlsl.py` and `tools/recomp.ps1 -Target xbox-demo -BuildOnly`
(`logs/issue-2026-10-17/demo-reuse-build.txt`), the same scripted run
reported 42-44 fps, 71-76k vertices and 9.3 ms draw calls per frame, 20 ms
executor. The remaining executor time was not profiled. Not checked: whether
any batch is reused with stale content (no visual difference was looked for
beyond the user's play).

**Demo flicker.** In the paired traces, the frame without the sword lacks the
draws of three textures (`80BDB000`, `80C17000`, `813C8000`) that the frame
with it has: the title did not submit them. The user reports flicker, and
sometimes distorted objects, unchanged at 43 fps and at `-Aspect 4:3
-Set @{RESOT_NO_FOV_HOOK='1'}`, so neither frame rate nor the widescreen
projection/culling hooks explain it. The user recalled it did not happen
originally; it was first reported 2026-10-16, the day ordered GPU fences
became the default. With `tools/run.ps1 -Target xbox-demo -Windowed -Set
@{RESOT_ORDERED_FENCES='0'}` the user played to the same place and saw no
flicker. The demo's default is now the poll mirror; `RESOT_ORDERED_FENCES=1`
selects ordered release. The mechanism (the title omitting draws while the
previous frame's fences are still pending behind the executor) is inferred,
not traced in the title. The ordered release had been added for a "rare
distorted vertex" report that a person never confirmed; that report could
return. Retail still defaults to ordered fences and was not checked for the
same symptom. `tools/recomp.ps1 -Target xbox-demo -BuildOnly`
(`demo-fence-build.txt`) passed; a 90 s scripted run logged `ordered GPU
fences: off`, no crash, audio in every window. That run and the user's ran
uncapped (90-217 fps) because the user's options set VSync off and no FPS
limit; whether the demo's simulation speed is correct above 60 fps was not
measured.

**Dispatch lock (both copies).** DPCs and timer DPCs ran on the kernel timer
thread, and the APU ISR on the APU thread, while guest threads were at raised
IRQL and concurrently with each other, which the single-CPU console never
allows. `kernel_hal.c` now gives a guest thread a recursive lock from its
raise to DISPATCH_LEVEL until it lowers (bounded 100 ms wait, then logged);
DPC drains, timer DPCs and the APU ISR run only while holding it and never
wait for it (after 250 ms / 300 polls they run anyway, logged).
`KeSynchronizeExecution` raises to 16 around its routine. Retail's VP now
waits up to 2 ms for a voice DirectSound holds locked and otherwise defers it,
as xemu does, and logs a non-persistent stream that runs out of segments. The
demo copy got the same; its audio-only gate from 2026-10-16 is superseded
(the scope hooks no longer take it: gate then dispatch versus dispatch then
gate would stall).

Before this, the demo's ISR-only gate had not stopped the audio crash: the
user's run at 12:37 with that build faulted in `sub_002EF6CD+0x219` at guest
address `0xFFFFFFBE`, with registers identical to the 2026-10-16 crash.

Builds: `tools/recomp.ps1 -Target xbox-retail -BuildOnly`
(`retail-dispatch-build.txt`) and `-Target xbox-demo -BuildOnly`
(`demo-dispatch-build.txt`) passed. Retail, 90 s with the pad script from
2026-10-15: no crash, no forced-DPC/ISR or stream-end lines, audio non-silent
in every 10 s window, 110-140 fps (300-540 draws). Demo, 150 s scripted in
Entree: no crash, audio non-silent in every window, 39-41 fps. Not checked:
the retail music/speech dropouts the user reported and the demo garden lever
crash, both need human play; neither is established as fixed.

## 2026-10-17: retail revisit confirmed; normal-launch memory policy

The user confirms that the corrected-memory retail playthrough passed the
previous failure point; saving was **not** tested. The original A/B run's
latest-log file was replaced by a subsequent launch. That later log ends
with `[FBWIN] close requested`, not a crash; it does not prove that the A/B
run itself finished normally. It is preserved as
`logs/issue-2026-10-17/retail-last-normal-close.txt`.

Retail now selects `RECOMP_EXT_VMA=1` by default through its target header.
An explicit `RECOMP_EXT_VMA=0` retains the comparison path. The demo's policy
is being checked separately. Direct launches archive previous diagnostics in
`logs/history/` before opening the latest-log name; if archiving fails, the
host appends instead of truncating. The developer run script also preserves
its previous log pair. Session headers record target, PID, XBE hash and the
selected VMA policy. Build/runtime checks for this update follow below.

The F5 scene reader's previous fixed 64 MB checks would reject worlds and
lookup arrays allocated in virtual heaps. It now also accepts fully committed
tracked ranges; reserved/unmapped ranges remain rejected.

`python tools/test-visibility.py` passed 1/1 on D3D11 WARP after correcting
the harness include order. The production query manager returned the expected
counts for visible and depth-occluded geometry, repeated reports, clear/reuse,
continued counting and render-scale normalization. Retail now uses these
asynchronous queries rather than returning a constant zero visibility count;
the demo was not changed because usage of this API was not established there.
This has not yet been validated in a retail gameplay run.

`python tools/test-retail-save-io.py` passed 1/1 using real runtime bridges
and a synthetic file under `build/`: write/event/flush/close/reopen/readback,
explicit offset, truncation, EOF and invalid-handle flush. The retail backend
now propagates a failed host flush rather than always returning success.
The game's checkpoint serializer and existing user saves were not exercised.
Test logs are under `logs/issue-2026-10-17/`.

`python tools/check-hlsl.py` passed 14 entries, then
`tools/recomp.ps1 -Target xbox-retail -BuildOnly` passed
(`logs/issue-2026-10-17/retail-build.txt`). Its EXE was copied to the existing
portable retail folder. Normal-launch defaults, F5 with virtual heaps and
log-history retention still need a launch with this build.

The user chose to reproduce demo flickering first. The existing tested demo
build was launched with VMA off, scripted entry to Entree, a frame-dump prefix
and one-frame method tracing. With the camera held still, the user reports
blinking of the Prince's sword, scene props and wall vegetation. Local
`temporal-0.bmp` and `temporal-7.bmp` show the sword present/absent from the
same viewpoint. Two complete traces are preserved in
`logs/issue-2026-10-17/demo-temporal-traces.txt`. Each contains thousands of
repeated draws with identical geometry/bounds; their cause and relation to
the flicker are under investigation. No flicker fix has been validated.

The previous demo session requested title exit through `HalReturnToFirmware`
without a recorded native exception; its log is preserved as
`logs/issue-2026-10-17/demo-repro-ended.txt`. This alone does not establish
why the title exited. After `python tools/check-hlsl.py` passed all 14 entries,
`tools/recomp.ps1 -Target xbox-demo -BuildOnly` passed with expanded constant
and program tracing and frame-numbered, synchronized GPU captures. The first
capture (`demo-paired_flip5868_after.bmp`) shows the opening cinematic;
flickering gameplay still needs matching captures with this build.

The subsequent user-positioned capture pair provides matching gameplay
evidence: `demo-paired_flip9544_before.bmp` and `_after.bmp` omit the sword,
while `demo-paired_flip10004_before.bmp` and `_after.bmp` show it from the same
viewpoint. The difference already exists before glow compositing. Full method,
program and constant data for both frames is preserved in
`logs/issue-2026-10-17/demo-paired-gameplay-trace.txt`. This localizes the
observed sword disappearance to the scene rendering or its submission, but
does not yet identify the cause.

## 2026-10-16: reported gameplay failures, audio IRQ and cube maps

The user reports angle-dependent object disappearance in the demo's first
level and a crash while operating a garden lever. Retail is reported to
crash at the second ladder in the first level and when saving, with a
damaged-save warning on subsequent profile selection. These reports reopen
gameplay validation; the earlier demo milestone did not establish completion.

The existing portable demo log records an audio-worker access violation in
`sub_002EF6CD+0x219`, guest address `0xFFFFFFBE`, through `apu_deliver_irq`.
It is preserved locally as `logs/issue-2026-10-16/demo-user-crash.txt`.
The demo APU dispatcher no longer overrides a raised guest IRQL after 50
polls. `python tools/test-apu-irq.py` passed: 10,000 masked dispatch attempts
retain the pending line, then one delivery follows unmasking. This tests
the production dispatcher with mocks. A subsequent audit of the demo's
DirectSound ISR followed 38 directly reachable routines and resolved its
heap callback in this XBE. Entry hooks on its IRQL scopes `0x002E9F30` /
`0x002E9F52` now share a recursive audio-only gate with the ISR; interrupt
dispatch tries the gate without waiting and rechecks IRQL. A second test
uses real Windows threads to cover guest-first and ISR-first acquisition,
nested scopes and deferred delivery (2/2 tests passed). The garden lever
crash is not established as fixed by these host tests.

Both hardware renderers now upload six cube-map faces and sample a
`TextureCube` using xyz coordinates. The existing per-target CPU decoder
and face/mip stride supply the pixels; the cache also distinguishes cube
shape and mip count. `python tools/check-hlsl.py` passed all seven entries
for each target. A Direct3D 11 WARP harness sampled six coloured faces in
the axis directions and read back the expected BGRA values. This establishes
host resource/view/sampling behavior, not real guest face contents or
correct appearance in a game scene. Stencil, bump-env and dot-product
texture modes remain incomplete. The reported flickering is unresolved.

`tools/recomp.ps1 -Target xbox-demo -BuildOnly` passed after these changes
(`logs/issue-2026-10-16/demo-build.txt`); MSBuild first failed in the sandbox
with FileTracker `E_ACCESSDENIED` and succeeded outside it. This first build
preceded the scope hooks, which require a subsequent relift. No seeds changed.

The retail portable executable was launched for a human reproduction. The
user passed the second ladder without a crash, chose **not** to save at the
save point, advanced, then returned there and crashed. The preserved log
`logs/issue-2026-10-16/retail-repro-crash.txt` records repeated heap allocation
failures (50,831,040 / 50,855,936 bytes used), followed by a bad-pointer read
in `sub_000CF790+0x162` on the world/render path. This reproduction does not
establish that a save write caused the crash.

Retail's virtual-memory bridge charged pure MEM_RESERVE requests to the
physical heap and reduced reservations that did not fit, including a
non-page-aligned 68,398-byte result. An optional fix extends the existing
`RECOMP_EXT_VMA=1` tracker to choose an address for null-base reservations,
grant the full requested range and commit only requested pages. Host I/O
validation accepts these ranges only when all pages are committed. The
demo was checked independently: its log also has a 1 MB null-base reserve
followed by 4 KB commits, and its bridge has the same flaw. Its latest audio
crash log has no allocation failure; an older pre-reclaim freeze log does.
The fix was ported to its own runtime and tested separately.

The memory-regression suites for both copies passed 4/4 tests, covering
default, reclaim, extended VMA and 128 MB-map modes. Extended-VMA tests cover
full null-base reservation, oversized failure without clamping, commit,
decommit, zeroed recommit, release/reuse and host I/O access checks. The option
remains off by default: a retail startup probe with it enabled immediately
showed DirectSound physical-address requests for high virtual memory, which
the existing APU decoder could not translate. That probe was stopped before
using it as gameplay validation; see `retail-vma-audio-probe.txt` in the same
local log directory. Physical DMA handling needs validation alongside the
reservation change.

Retail subsequently gained a page-token translation namespace for APU DMA
outside the legacy 64 MB RAM and heap aliases. The mapper preserves page
offsets, serializes publication, and invalidates tokens on virtual-memory
decommit/release. `python tools/test-apu-dma.py` passed 1/1, including actual
production resolver/SG lookup, nonadjacent tokens, multibyte and ADPCM reads
across guest pages, concurrent mapping, revocation, reuse and exhaustion.
These tokens translate host-backed guest addresses; they do not model the
console's physical page accounting or pin pages for in-flight DMA.

Retail's I/O APC dispatcher also now restores the interrupted register,
floating-point and SIMD context and avoids popping stdcall callback arguments
twice. `python tools/test-retail-io-apc.py` passed 1/1. This isolated correction
does not establish that checkpoint saving/loading works. The zero-filled,
correctly signed `pop2.sav` files examined read-only are profile placeholders:
the retail XBE explicitly creates them at `0x000D9BE0`. Its checkpoint writer
instead uses `0x00102900` -> `0x000D9030`, a `%02d_%03d_%d.sav` name and a
36,220-byte payload. `RECOMP_TRACE_WRITES=1` now records the open file's actual
path, buffer, requested/written bytes and status for subsequent save tests.

Both updated executables built. The demo's scope hooks required
`tools/recomp.ps1 -Target xbox-demo -SkipAnalysis`
(`logs/issue-2026-10-16/demo-relift-build.txt`); generation inserted both
entry hooks. `tools/run.ps1 -Target xbox-demo -Windowed -Seconds 65 -Set
@{RECOMP_PAD_SCRIPT='15000:start:500,22000:a:500,50000:start:500'}` loaded
`0101_Entree`, continued rendering and delivered audio interrupts without
an allocation failure or crash in its log (`demo-audio-gate-smoke65.txt`).
The script stopped the process at 65 seconds; this did not reach the garden.

Retail was rebuilt (`retail-dma-build.txt`) and launched with
`RECOMP_EXT_VMA=1; RECOMP_TRACE_WRITES=1` for another human playthrough.
The log confirms high-VA APU mappings. The user hears audio but reports some
sounds missing, probably already present in the previous version; the new
mapper is not thereby proved to be a regression or fully correct. DSP effects
remain incomplete. Full checkpoint/revisit and save/load verification are
still required.

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

The unpaused before/after post-processing captures were taken as
`logs/demo-defer-unpaused-*` and `logs/demo-snapshot-unpaused-*`; they were
deleted in the 2026-10-17 logs cleanup and are no longer available. Traced render
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


### 2026-10-22: retail missing music investigation

User reports no retail menu or battle music, with menu effects audible; user also confirms cutscene audio is no longer delayed. Existing device log shows archive opens and sustained APU output but does not identify music voices. Added bounded APU-MUSIC onset, first-signal routing and early stream-stop diagnostics. Audio decoding, routing and queue behavior are unchanged. Ran python tools/check-hlsl.py (10 entries pass), tools/recomp.ps1 -Target xbox-demo -BuildOnly and -Target xbox-retail -BuildOnly. Android release build and installation recorded in logs/retail-music-build-android.txt. No game launch or listening test by agent. Music cause and restoration are NOT verified. Previous APK and edited source preserved in logs/retail-music-backup/.


2026-10-22 retail device diagnostic follow-up: pulled files/logs/xbox-retail-err.txt without launching the game. Voices 64-68 have looping PCM buffer formats and no first-signal trace; voices 69-71 reach bins 0/1 with envelope 1. No early stream-stop trace observed. One 10-second interval has zero nonsilent blocks with output queue 9 and no dropped blocks at that point. This does not identify which voices carry music or establish the root cause. See logs/retail-music-analysis.txt. No runtime behavior changes or APK installation in this follow-up.


### 2026-10-22: retail synchronous streaming completion ordering

User reports that clearing app data does not restore menu/gameplay music;
cutscene music remains audible and cutscene timing is now correct.
Passive shell/ADB capture of the already running retail process (no launch or
input by agent) found looping PCM voices 64-68 active and unpaused. Voice 68
has a progressing cursor. Streaming item 0x744B8990 has item+0=0xFFFEADD9 and
item+4=0x20000 in the captured session. These are session heap addresses,
not XBE constants. Binary snapshots remain ignored under logs/music-*.bin.
This does not by itself identify the voice content or prove music restoration.

Source evidence: retail generated C for 0x00095E80 and 0x00095F60 polls the
task backend while holding manager+0x2C. Callback 0x00096130 originally updates
item+0/+4 synchronously. The prior override deferred even callbacks already
holding this lock until another acquisition, allowing the consumer at
0x00095BE0 to see completed chunks before their byte counts were published.
kernel_rtl.c now tracks recursive manager-lock ownership in TLS and performs
the original counter updates immediately for those callbacks. Other-thread
callbacks retain the queued path; cancellation cleanup remains in place.
Demo behavior, audio output pacing and cutscene queue recovery are unchanged.

Checks: python tools/check-hlsl.py, tools/recomp.ps1 -Target xbox-demo
-BuildOnly, tools/recomp.ps1 -Target xbox-retail -BuildOnly, and
tools/build-android.ps1. Build logs are logs/retail-music-fix-*.txt.
Previous source/APK/Windows executables: logs/retail-music-fix-before/.
Compilation does not establish listening correctness; no game launch or
playback test by agent. User must confirm menu/battle music and cutscene sync.
REA native provider was unconfigured; static conclusions use published lifted
C and passive ADB snapshots, not REA decompilation Evidence.

Deployment: adb install -r bin/reSOT-android.apk returned Success. New APK SHA-256: 9612886DFE2820F78E9E8B188FC4ADF9430F7F5FE51C1BFCB40AB08211FDA911. User listening confirmation pending.


### 2026-10-22: music still absent after synchronous callback follow-up

User reports no menu/gameplay music after the previous APK. Its listening outcome is a failure to restore music. No claim of restored music is made. Passive ADB heap capture of the running session traces driver 0x004210C8 through TAdder 0x00424C28, ThemePath 0x00425238, TFader 0x00426148, rate conversion and the resource reader. The pending source request remains at completed bytes 0xFFFEADD9 and pending 0x20000. Addresses above identify retail XBE vtables; session heap addresses are only in ignored logs/music-heap2.bin. This demonstrates the previous change was insufficient, not which individual completion was lost.

Restricted stream_discard_removed_locked to the verified cancellation release at retail call 0x00095B30 (return 0x00095B36). Previously every scheduler lock release ran removed-item cleanup, without establishing cancellation. Added a 32-line completion trace (queued/owned/applied/cancelled) to distinguish completion delivery from cleanup on the next user run. No output queue, pitch, decoder or renderer changes. Checks: python tools/check-hlsl.py; Windows demo/retail BuildOnly; Android release build. Logs: logs/retail-music-cleanup-*.txt. Previous APK and edited source: logs/retail-music-cleanup-before/. No game launch or listening test by agent. Restoration remains unverified.

Deployment blocked: adb install -r returned no devices/emulators found. This follow-up APK is built but NOT installed on the device. Previous installed APK remains the user-tested version without music.

Deployment follow-up: device reconnected; adb install -r bin/reSOT-android.apk returned Success. Game not launched by agent. User music listening confirmation pending.
