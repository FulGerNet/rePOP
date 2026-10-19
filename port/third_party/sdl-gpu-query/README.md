# reSOT native GPU query extension

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
