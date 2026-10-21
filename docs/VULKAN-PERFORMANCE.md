# Vulkan performance study — 2026-10-20

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
