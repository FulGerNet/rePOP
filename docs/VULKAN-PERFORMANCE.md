# Vulkan performance study — 2026-10-20

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


## 2026-10-21: live retail profile and resource overhead

The user confirms a substantial improvement with the scheduling/cache
revision below, and clarifies that dips toward 20 FPS predate it. The live
Android retail session was sampled without restarting or changing options.
Evidence: ignored logs/vulkan-audit-retail-live.txt and
vulkan-audit-retail-simpleperf*.txt / vulkan-audit-retail-executor-*.txt.

| Five-second FPS | Draws/frame | Executor ms/frame | Draw preparation ms (inside executor) | Present ms | Cumulative reference waits |
| --- | --- | --- | --- | --- | --- |
| 43.7 | 824.0 | 16.47 | 3.82 | 2.88 | 22.2 ms |
| 31.1 | 1141.0 | 24.47 | 9.04 | 3.29 | 23.7 ms |
| 25.6 | 1467.0 | 28.57 | 6.72 | 5.89 | 23.7 ms |
| 25.4 | 1590.6 | 28.34 | 6.80 | 3.65 | 23.7 ms |

CPU timings are the latest half-second snapshot, unlike five-second FPS;
these are correlated observations, not an exact additive frame budget.
The log cannot resolve every instantaneous 20 FPS dip. An earlier 17.6 FPS
startup/loading window is excluded from gameplay analysis. Reference waits
are cumulative, stay unchanged across the slow windows, and do not explain
them. Zero compilation-skipped draws; texture uploads stay near one/frame.

Root `simpleperf record -p 2301 -g --duration 8` acquired 67,373 CPU-cycle
samples (107 kernel samples lost). The executor thread accounts for 56.77%
of process cycles, with 53.92% in the scanner and callees. Within that thread,
self samples include method dispatch 7.52%, scanner 5.35%, memmove 4.51%,
and Vulkan descriptor updates 3.06%. Libraries: runtime 41.04%, Adreno driver
20.34%, kernel 14.69%, libc 13.12%, SDL 4.87%. These are CPU samples, not GPU
time or wall-time percentages. A GPU-busy read was about 44%; one frequency
read was 255 MHz. Single asynchronous readings cannot establish a GPU-load
history. Thermal HAL current readings were CPU about 55-57 C, GPU 49-52 C,
status 0; older cached temperatures were much higher. This does not rule out
every vendor frequency limit or thermal effect earlier in the session.

Shared Windows/Android changes, without modifying guest addresses, shader
math, resolution, quality, draw order or visibility samples:

- Shader cache path snapshots use the global mutex; independent disk I/O,
  validation and atomic saves no longer hold it. Full-input equality and
  SPIR-V validation remain mandatory; failed writes remove temporary files.
- Pipeline completion uses a condition broadcast instead of 1 ms polling.
  Missing reference jobs for a run are queued before waiting, and pipelines
  are resolved before its upload/render encoding.
- Unchanged packed-program generations reuse the last translated vertex
  entry. Changed generations still hash and compare complete programs.
- Identical constant uploads no longer dirty their generation, avoiding
  redundant 3 KB snapshots/uniform pushes. Upload cursor progression,
  signed zero, NaN payloads and changed bits remain exact.
- Up to 64 completed native visibility resources are pooled. Samples are
  copied to immutable report segments before reuse; the submission fence
  must complete, and the query is reset outside its next render pass.
  Pending queries and report ordering remain unchanged. Adjacent checks of
  the same pending fence are collapsed within a poll. Allocated/reused/idle
  counters distinguish resource reuse from missing work.

The later query-pool revision builds for Windows demo/retail and Android,
but is **not installed over the active Android game**. Its device FPS effect
and demo device behavior remain unmeasured. The user's improvement report
concerns the preceding scheduling/cache revision, not this later pool.
See [VALIDATION.md](VALIDATION.md) for actual commands and GPU regressions.
Remaining priorities: CPU packet decoding, Vulkan encoding/submission and
GPU timestamps on the same heavy view, before attributing all residual cost
to CPU or shader execution.

Re-read Black's local native/vulkan.cpp and native/vk_shader.cpp, without
copying code. Online primary references:
[Khronos pipeline management](https://docs.vulkan.org/samples/latest/samples/performance/pipeline_cache/README.html),
[SDL GPU](https://wiki.libsdl.org/SDL3/CategoryGPU), and
[Khronos query reset and availability rules](https://docs.vulkan.org/spec/latest/chapters/queries.html).


Compared the local OpenCE source as a reference; no code was copied.
OpenCE uses OpenGL ES on Android, rather than Vulkan.

| OpenCE reference | reSOT finding / action |
| --- | --- |
| `port/linux/src/nv2a_vsh.c`, `d3d8_gl.c`: translate vertex programs to GLSL and cache compiled variants | Native reSOT still uses the `vs_uber` GPU interpreter; dedicated vertex translation remains future work. |
| `port/linux/src/nv2a_psh.c`, `d3d8_gl.c`: generate fragment shaders from program state, separately from uniforms | Added cached Vulkan specialization for complex combiners, alongside the existing simple shaders. |
| `d3d8_gl.c`: state/uniform caches, smaller mobile streaming rings, batched visibility | reSOT already caches native state, appends/cycles uploads and preserves retail visibility ordering. No buffer sizes, query results or game waits were changed here. |

The shader generator emits host SPIR-V templates for 1/2/4/8 stages. Forty
integer specialization constants describe combiner words, control, alpha
comparison and enable state. Defaults are patched from an immutable draw
snapshot before SDL shader creation, allowing the Vulkan driver to fold
register selection and unused stages. Colors, texture scales/borders and
the alpha reference remain uniforms. The 256-entry cache compares full
keys, canonicalizes unused trailing stage words and retains the generic
shader if full or shader creation fails. `RESOT_NATIVE_SPECIALIZE=0`
disables this path for developer comparisons. Android and Windows Vulkan
share it; D3D11/D3D12 retain their existing shaders. No game data or
generated game C changed.

Retail's 480p title improved from about 31 to 59 FPS on the connected
SM8635 phone. The final demo run includes 58–60 FPS title windows,
54–59 FPS opening scenes and later 46–51 FPS windows at 518–690 draws/frame.
The user reports approximately 60 FPS with drops to about 49 and accepts
this improvement for now. First-use compilation still blocks: some compact
pipelines took 0.35–0.88 s. The existing disk cache remains enabled.
Sustained 60 FPS throughout both games is not established.

See [VALIDATION.md](VALIDATION.md) for commands and local evidence.

## 2026-10-21: dedicated programs after Black Android / Halo CE study

Read-only comparison of the user-supplied source checkouts:

| Reference | Observation | reSOT implementation |
| --- | --- | --- |
| `Black-Android-main/native/vulkan.cpp`: `EnsureVertexShader`, `EnsurePixelShader`, `Module` | HLSL is produced per vertex/pixel program and shader modules and pipelines are cached. | Translate every vertex program accepted by reSOT's existing native admission checks into straight-line GLSL, then optimized SPIR-V. |
| `Black-Android-main/native/vk_shader.cpp` | glslang translates HLSL; SPIR-V files have a translation-version suffix. Its optimizer is disabled. Opaque texture/sampler helpers are specialized to avoid invalid SPIR-V on Mali. | Use glslang's GLSL frontend for vertex shaders and SPIRV-Tools for optimization and validation. Fragment translation starts from reSOT's existing DXC SPIR-V, preserving the SDL combined-sampler ABI. No opaque HLSL parameter adaptation is needed. |
| `halo-ce-universal/port/linux/src/nv2a_vsh.c`, `nv2a_psh.c`, `d3d8_gl.c` | Xbox programs become GLSL; fragment program state has a cache key separate from uniforms. Shader/program objects and state/uniform changes are cached. This renderer uses OpenGL/GLES, not Vulkan. | Full packed-program equality for vertex cache hits; full immutable combiner-key equality for fragment hits. Constants, viewport, colors and alpha reference remain uniforms. |

No code was copied from either reference. Black's external SDK translator is
not in the supplied checkout; its integration was inspected, not its missing
implementation. Neither port supplies reSOT-specific shader math or addresses.

The new path is shared by **Windows Vulkan and Android Vulkan**, and by
**demo and retail**. It translates the packed program that each executable
actually submits; it uses no cross-target address assumptions. D3D11 already
translates vertex programs to HLSL and retains its existing behavior. D3D12
retains its existing native interpreter and fragment shaders in this change.

Vertex translation emits direct register accesses, swizzles, operations and
masked writes in instruction order, with both MAC/ILU sources evaluated before
either write. Relative constant indexing and paired ILU R1 writes are retained.
Position conversion, fog, HUD placement and math helpers are derived from
reSOT's existing HLSL during the host build. No per-vertex opcode loop remains.
Programs rejected by existing native admission checks retain their existing
CPU path. No new NV2A effect semantics or unsupported texture modes are added.

For complex fragment programs, the existing 40-word specialization key is
patched into SPIR-V, then frozen, folded and optimized **before** SDL/driver
pipeline creation. This removes immutable register selection, inactive stages
and disabled discard branches. The already dedicated simple shaders and host
movie/blit/solid/panel shaders are retained. Program entries now use stable
allocated objects in hash buckets with full-key comparison, replacing the
256-program ceiling; bucket count does not limit the number of programs.

Compilation/optimization runs on the existing pipeline workers with per-program
locks and failure memoization. While a translated pipeline compiles, a reference
pipeline can render the same immutable draw snapshots. Reference pipeline jobs
are prioritized; if neither pipeline is ready, the existing first-use draw skip
still applies. This does not establish hitch-free cold startup. A failed shader
translation uses the existing reference shader in its pipeline. Successful
direct vertex draws omit the interpreter's program-uniform upload.

The versioned disk cache stores the complete input alongside optimized SPIR-V;
cache hits compare the input and validate the cached module before use. This is
separate from the existing driver pipeline cache. glslang 16.0.0 and its pinned
`known_good.json` SPIRV-Tools/Headers revisions are fetched unchanged with
`tools/setup-shader-compiler.ps1`, under ignored `build/deps`. Upstream notices
are included by Windows packaging and Android's license assets.

Developer comparisons: `RESOT_NATIVE_TRANSLATE=0` disables vertex translation;
`RESOT_NATIVE_SPECIALIZE=0` disables complex-fragment specialization. Neither
switch changes the user's post-processing quality. Tests and measured results
are recorded in [VALIDATION.md](VALIDATION.md).

## 2026-10-21: retail fountain transition and remaining performance work

The supplied Android log (`Desktop/logs/xbox-retail-err.txt`, 13:56–14:01)
does not show a uniform shader slowdown. Before the fountain, native windows
reach 58.6/75.6/64.3 FPS. Immediately after `1401_MgcFntRm` merges, float-like
payload words are interpreted as pushbuffer jumps outside physical RAM:
`2436106C` at `800E8EA8`, then `3F000000` at `800E8C38`. These are observed
packet-stream failures, not evidence that a particular translated opcode is
wrong. Pipeline count grows from 225 to 452, then 737; skipped draws grow
from 367 to 6,243. Corrupt state can itself create many bogus shader/PSO keys.
The user clarified that the final sub-1-FPS windows followed backgrounding,
and that reopening showed only the Java touch overlay. Do not use those
windows as an active-gameplay benchmark or conflate that report with the
partially black courtyard screenshot.

Changes in this revision:

- Retail's legacy completion mirror snapshots the producer time before the
  executor scan and publishes that snapshot afterwards. Previously it
  published before reading submitted guest memory, allowing premature reuse.
  This addresses a concrete race; the exact fountain route still needs device
  confirmation. Fully decoded ordered fences are **not** made the default:
  that experiment stalled Windows retail startup at one flip in 35 seconds.
  Demo retains its separately validated mirror policy.
- A missing translated PSO now falls back to a reference PSO that must finish
  before drawing. Missing reference PSOs no longer discard guest geometry,
  render-target writes, or retail visibility samples. Translation remains on
  workers. First-use reference compilation can hitch; accumulated wait count
  and time are logged explicitly. This is a correctness tradeoff, not a claim
  of hitch-free compilation.
- Pipeline lookup canonicalizes blend factors/operation while blending is
  disabled, depth comparison/write while depth testing is disabled, and
  front-face winding while culling is disabled. Target attachment presence
  remains part of the key. This reduces redundant PSOs without changing
  shader math, resolution, effect quality or guest visibility decisions.

Windows retail's final 35-second Vulkan menu check records 75 background
PSOs, zero skipped guest draws, and 33 cold reference waits totalling 51.9 ms.
Steady windows are 154.4–160.2 FPS. Earlier menu evidence recorded 79 PSOs and
157–168 FPS; these different runs are **not** a controlled speed comparison.
The new initial Android courtyard screenshot has textured walls at 31 FPS,
zero skipped draws and 55 reference waits totalling 150.5 ms. It is a
different view from the supplied failure and does not establish a fix there.

### Priorities after the Black source review

Re-read `native/vulkan.cpp` (`EnsureVertexShader`, `EnsurePixelShader`,
`EnsurePipeline`, `BindTargetTexture`) and `native/vk_shader.cpp` from the
local Black checkout, without copying code. Black already separates program
translation, module caching and complete PSO creation; reSOT now has those
same layers and additionally optimizes frozen fragment programs. Replacing
GLSL with HLSL alone would not remove a remaining measured bottleneck.

| Priority | Proposed experiment | Required evidence before enabling |
| --- | --- | --- |
| 1 | Eliminate command-stream corruption and verify repeated background/resume cycles before timing shaders. | Same fountain route, no out-of-RAM PB walks, correct walls, zero missing draws; distinguish surface recovery from guest scene corruption. |
| 2 | Record and prewarm observed canonical **reference** PSOs before room entry, then queue translated PSOs. Persist descriptions using complete program keys, never runtime pointers. | Lower cold-wait time on the same route; bounded loading time and memory; identical visibility counts and image readbacks. A disk SPIR-V hit alone does not mean a ready PSO. |
| 3 | Profile executor vertex fetch, texture hashing/decode, upload/copy and render-pass breaks separately from GPU time. | Same save, camera, internal resolution and Low setting; warm caches; sustained samples on both Windows and Android. Existing executor time includes several kinds of work and cannot identify GPU saturation. |
| 4 | Experiment with output-limited vertex variants for simple fragments and direct fragment generation for the remaining complex combiners. | GPU readback equivalence for all operations, paired writes, alpha/border/fog cases; reduced GPU time/register pressure on Adreno and a Windows GPU, not merely smaller SPIR-V. |
| 5 | Compare render-pass/upload batching across visibility boundaries, preserving exact report ordering. | Lower CPU submission cost and mobile bandwidth with unchanged query samples. Do not replace occlusion results or skip passes to raise FPS. |

The original run already uses simple combiners for 5,691,659 of 6,197,213
draws (91.8%) and admits direct vertex translation for 5,890,851 (95.1%).
Further work only on the generic fragment interpreter covers a small share
of draw count; draw count is not GPU cost, so a GPU measurement is still
needed. Sustainable high performance cannot be promised from the title
screen, a short FPS peak, or a reduced shader instruction count.


## 2026-10-22: compact constants / reduced vertex exports rejected

Read Black's Vulkan shader/module, pipeline and draw integration again, without
copying code. Online primary references: [Khronos descriptor and buffer
management](https://github.com/KhronosGroup/Vulkan-Samples/blob/main/samples/performance/descriptor_management/README.adoc)
and [tile-based rendering guidance](https://docs.vulkan.org/guide/latest/tile_based_rendering_best_practices.html).
Their recommendations motivate reducing per-draw work; they do not prove a gain
on this device or in reSOT.

The experiment compacted static constant references into dense vertex UBOs,
kept all 192 vectors for relative addressing/reference shaders, compared actual
uploaded values, and removed d1/t1/t2/t3 exports only for the exact simple
fragment path. GPU vertex readbacks pass, both Windows targets and Android
build, and the retail Android title shows 83.5% lower constant-upload traffic.
The user nevertheless reports about 100 to 80 FPS at previously faster locations.
Reduced bytes and passing pixel tests did not translate into an acceptable
performance result. The cause was not isolated; do not claim the GPU, compiler,
CPU repacking or cache warmup is responsible without a controlled measurement.

WITHDRAWN: the prior source, both Windows executables and original installed
Android APK were restored. Material caching and all pre-existing changes remain.
The rejected variant and evidence are retained in ignored logs for future study.
See VALIDATION.md for commands, rollback paths and test limits.


## 2026-10-22: bounded exact input-geometry cache

User corrected the earlier 100 FPS comparison: another build reached it mostly
in empty views. It is not a controlled compact-shader regression measurement.
The other chat's confirmed material-cache APK and the restored base have the
same SHA-256. Material reuse is preserved as the baseline.

Unlike the existing D3D11 path, the native Vulkan path still fetched/converted
and uploaded every input mesh repeatedly. Add resot_geometry_cache.h and reuse
already encoded vertex/index ranges across frames, while keeping all instance
constants and guest draw/query ordering live. Source admission is exact: full
index equality, complete ordered layouts/current values, merged source spans
compared byte-for-byte. A hash collision cannot admit stale geometry. Inline
payloads, spans larger than 256 KiB, invalid addresses and the 16 MiB snapshot
budget fall back to the existing path. Cache size is 2048 lookup entries.

Reserve ring space before queuing, flush before cycling either ring, invalidate
all cached ranges by generation on wrap, and address both cached and fresh
ranges with absolute draw offsets. All-hit runs need no staging or copy pass.
No extra per-mesh GPU allocations, visibility approximation or distance culling
was introduced. SDL retains ownership/barriers/retirement of the existing rings.
General primary references: [Khronos synchronization examples](https://docs.vulkan.org/guide/latest/synchronization_examples.html)
and [descriptor/buffer management](https://github.com/KhronosGroup/Vulkan-Samples/blob/main/samples/performance/descriptor_management/README.adoc).
Their results are not reSOT performance measurements.

Both Windows targets and Android build, exact cache validation and the short
existing Vulkan GPU check pass. Android retail gameplay reuses geometry and the
user reports good FPS. The final log has over a million hits and 7.30 GB of
cumulative geometry uploads avoided (not resident memory). Snapshot memory is
14.97 MB in that log. No same-scene off/on comparison, thermal profile, stable
60/100 FPS, demo-device gameplay or Windows-gameplay validation was performed.
The optional A/B file was removed and the game is left running, cache enabled.
See VALIDATION.md for precise commands, evidence, developer switches and rollback.
