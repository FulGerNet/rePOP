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
