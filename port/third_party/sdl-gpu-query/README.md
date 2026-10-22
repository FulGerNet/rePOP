# reSOT native GPU query extension

Selective descriptor binding was withdrawn after the Android user reported
a drop from over 100 FPS to 88 FPS in the same location. The full four-set
bind is restored; material descriptor caching remains enabled. The helper
and contract test are retained as experimental evidence, not active code.

`resot_descriptor_cache_vulkan.inc` adds a 64-slot command-local material
descriptor lookup. Eligible fragment sets contain up to eight combined
texture/sampler bindings and no storage resources. The complete key includes
the descriptor-set layout and all active image-view/sampler identities; a
hash collision becomes a miss. A previous A set can be reused after A/B/A
material switches without allocating/updating it again. Sets stay immutable
and owned by SDL's command-buffer descriptor pool. Fresh recordings clear
lookup identities, and larger/storage layouts use the upstream builder.
The technique was compared with Black's per-frame material cache, without
copying code; reSOT uses a bounded command-buffer lifetime to match SDL's
existing resource/fence ownership.

The Vulkan patch also preserves graphics descriptor handles and tracked
resource identities across render-pass boundaries in the same command buffer.
An identical cached resource-layout object leaves existing descriptor dirty
flags intact rather than marking every set dirty on every PSO change. Changed
resources, cycled texture views, UBO backing changes and different layouts
still invalidate the affected sets. Command-buffer acquisition resets all
state. Uniform-offset-only updates omit zero-write vkUpdateDescriptorSets.
This follows Vulkan's descriptor-layout compatibility/binding lifetime rules;
compute and graphics have separate descriptor bind points. No persistent
descriptor contents are overwritten while earlier draws use them.
See tools/patch-sdl-gpu-query.py for the version-checked/idempotent source
patch. This is shared by Android Vulkan and Windows Vulkan; D3D12 is unchanged.

SDL GPU 3.4.18 does not expose occlusion queries in its public API. These
MIT-licensed additions compile inside the pinned SDL D3D12/Vulkan driver
translation units and expose a small versioned ABI. reSOT never guesses a
private SDL structure layout across the DLL boundary.

`tools/setup-native-gpu.ps1` downloads and SHA-256-checks the official SDL
3.4.18 source archive, applies `tools/patch-sdl-gpu-query.py`, and builds a
shared SDL3.dll in ignored `build/deps/sdl-query-build/`. The source archive
and SDK remain ignored. The additions and patching tool are published here;
the upstream zlib licence remains in the source tree and accompanies the
DLL. `SDL3-RESOT.txt` identifies the DLL as an altered build. This is not an
unmodified upstream SDL binary.

The exports `RESOT_GetD3D12QueryAPI(1)` and `RESOT_GetVulkanQueryAPI(1)` return
the table in `resot_gpu_query.h`. A mismatched ABI is rejected. D3D12 uses
`ID3D12QueryHeap` and `ResolveQueryData` into readback memory. Vulkan uses
precise `VkQueryPool` occlusion counters; the patch enables
`occlusionQueryPrecise` when supported, and rejects unavailable capability.
No D3D11 object is involved. Reset/resolve occur outside render passes,
begin/end inside one render pass. The caller owns lifetime and must retain
queries through the SDL GPU submission fence before reading or destroying
them. The driver additions do not wait, submit, or fabricate results.

`nv2a_hw_native_visibility.inc` implements retail's counter/report lifetime,
supersampling normalization, asynchronous polling, FIFO immutable snapshots,
and resource retirement. Native retail initialization checks ABI and actual
query allocation; missing support produces an explicit D3D11 fallback.

`resot_pipeline_cache_vulkan.inc` adds a persistent `VkPipelineCache`: SDL
3.4.18 creates Vulkan graphics pipelines without one, and Adreno took up to a
second per pipeline on every run. `RESOT_SetVulkanPipelineCachePath(path)`
(before creating the device) names the file; `RESOT_SaveVulkanPipelineCache`
writes it when pipelines were created since the last save. The driver
validates the data and ignores another device's.

The synthetic tests in `xboxrecomp/tests/nv2a_native_gpu/` exercise both real
GPU query implementations, visible/occluded samples, counter scales,
repeated reports, and CLEAR before submission. These tests contain no game
data. Demo does not enable the retail query semantics.
