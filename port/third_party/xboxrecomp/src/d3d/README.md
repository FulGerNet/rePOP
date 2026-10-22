# xbox_d3d8 — D3D8 to D3D11 Graphics Compatibility

Implements the Xbox's modified Direct3D 8 interface backed by a Direct3D 11 device. The Xbox D3D8 API is similar to PC D3D8 but has Xbox-specific extensions (push buffers, swizzled textures, pixel shader combiners, etc.).

## Files

| File | LOC | Purpose |
|------|-----|---------|
| `d3d8_xbox.h` | 716 | Public header — all D3D8 types, enums, COM interfaces |
| `d3d8_internal.h` | 129 | Internal wrapper structs (D3D8 interface → D3D11 resource) |
| `d3d8_device.c` | 1,107 | Device creation, render state, draw calls, frame present |
| `d3d8_resources.c` | 541 | Vertex/index buffers, textures, format conversion |
| `d3d8_shaders.c` | 529 | Shader compilation, input layout, constant buffers |
| `d3d8_states.c` | 350 | Render state translation (D3D8 → D3D11), sampler states |

## Quick Start

```c
#include "d3d8_xbox.h"

// Create D3D8 interface (creates D3D11 device internally)
IDirect3D8 *d3d = xbox_Direct3DCreate8(0);

// Create device (creates window, swap chain, render targets)
IDirect3DDevice8 *dev;
D3DPRESENT_PARAMETERS pp = { .BackBufferWidth = 640, .BackBufferHeight = 480 };
d3d->lpVtbl->CreateDevice(d3d, 0, 0, hwnd, 0, &pp, &dev);

// Standard D3D8 rendering
dev->lpVtbl->BeginScene(dev);
dev->lpVtbl->SetRenderState(dev, D3DRS_ZENABLE, TRUE);
dev->lpVtbl->SetTexture(dev, 0, texture);
dev->lpVtbl->DrawPrimitive(dev, D3DPT_TRIANGLELIST, 0, tri_count);
dev->lpVtbl->EndScene(dev);

// Present (also pumps Win32 message loop)
d3d8_PresentFrame();
```

## How It Works

The layer maintains two parallel states:

1. **D3D8 state** — what the game thinks is set (render states, textures, transforms)
2. **D3D11 state** — the actual GPU state (constant buffers, shader resource views, etc.)

On each draw call, dirty D3D8 state is flushed to D3D11:

```
Game calls SetRenderState(D3DRS_ZENABLE, TRUE)
  → Stores in d3d8_render_state[D3DRS_ZENABLE]
  → Marks depth state dirty

Game calls DrawPrimitive(...)
  → If depth dirty: create ID3D11DepthStencilState, bind it
  → If blend dirty: create ID3D11BlendState, bind it
  → If raster dirty: create ID3D11RasterizerState, bind it
  → Upload transform matrices to constant buffer
  → Issue ID3D11DeviceContext::Draw()
```

## Supported Features

### Render States (D3DRENDERSTATETYPE)

| Category | States | Status |
|----------|--------|--------|
| Depth | ZENABLE, ZWRITEENABLE, ZFUNC | Implemented |
| Blending | ALPHABLENDENABLE, SRCBLEND, DESTBLEND, BLENDOP | Implemented |
| Alpha test | ALPHATESTENABLE, ALPHAREF, ALPHAFUNC | Implemented |
| Culling | CULLMODE | Implemented |
| Fill | FILLMODE | Implemented |
| Fog | FOGENABLE, FOGCOLOR, FOGTABLEMODE, FOGSTART, FOGEND | Implemented |
| Stencil | STENCILENABLE, STENCILFUNC, STENCILREF, etc. | Implemented |
| Lighting | LIGHTING, AMBIENT | Partial |
| Xbox pixel shaders | PSALPHAINPUTS0-7, PSFINALCOMBINER* | Stubbed |

### Texture Stage States (D3DTEXTURESTAGESTATETYPE)

```c
D3DTSS_COLOROP, D3DTSS_COLORARG1, D3DTSS_COLORARG2  // Color combine
D3DTSS_ALPHAOP, D3DTSS_ALPHAARG1, D3DTSS_ALPHAARG2  // Alpha combine
D3DTSS_ADDRESSU, D3DTSS_ADDRESSV                      // Wrap modes
D3DTSS_MAGFILTER, D3DTSS_MINFILTER, D3DTSS_MIPFILTER  // Filtering
D3DTSS_MIPMAPLODBIAS, D3DTSS_MAXMIPLEVEL              // LOD control
D3DTSS_TEXCOORDINDEX                                   // UV set selection
D3DTSS_BORDERCOLOR                                     // Border color
```

### Texture Formats (D3DFORMAT)

All Xbox `D3DFMT_*` constants use the canonical XDK binary values (see
`d3d8_xbox.h`). Swizzled formats are unswizzled to linear at upload; every
`D3DFMT_LIN_*` variant maps to the same DXGI format as its swizzled
counterpart. Formats whose D3D11 layout differs are converted in software
at upload (YUV→BGRA, P8→palette-expanded BGRA, AL8→16-bit, R5G5B5A1/
R4G4B4A4→bit-reordered).

| Format | Code | D3D11/DXGI | Notes |
|--------|------|-----------|-------|
| D3DFMT_L8 | 0x00 | R8_UNORM | 8-bit luminance |
| D3DFMT_AL8 | 0x01 | R8G8_UNORM | 8-bit alpha+luma, expanded at upload |
| D3DFMT_A1R5G5B5 | 0x02 | B5G5R5A1 | |
| D3DFMT_X1R5G5B5 | 0x03 | B5G5R5A1 | |
| D3DFMT_A4R4G4B4 | 0x04 | B4G4R4A4 | |
| D3DFMT_R5G6B5 | 0x05 | B5G6R5 | |
| D3DFMT_A8R8G8B8 | 0x06 | B8G8R8A8 | |
| D3DFMT_X8R8G8B8 | 0x07 | B8G8R8X8 | |
| D3DFMT_X8L8V8U8 | 0x08 | R8G8B8A8_SNORM | signed bump, distinct value |
| D3DFMT_P8 | 0x0B | B8G8R8A8 | 8-bit palettized, expanded at upload |
| D3DFMT_DXT1 | 0x0C | BC1 | |
| D3DFMT_Q8W8V8U8 | 0x0D | R8G8B8A8_SNORM | signed bump, distinct value |
| D3DFMT_DXT3 | 0x0E | BC2 | also D3DFMT_DXT2 |
| D3DFMT_DXT5 | 0x0F | BC3 | also D3DFMT_DXT4 |
| D3DFMT_A8 | 0x19 | A8_UNORM | |
| D3DFMT_A8L8 | 0x1A | R8G8_UNORM | |
| D3DFMT_YUY2 / UYVY | 0x24 / 0x25 | B8G8R8A8 | YUV→BGRA at upload |
| D3DFMT_R6G5B5 | 0x27 | B5G6R5 | |
| D3DFMT_L6V5U5 | 0x09 | R8G8_SNORM | signed bump, sign-extended at upload, distinct value |
| D3DFMT_G8B8 | 0x28 | R8G8_UNORM | |
| D3DFMT_V8U8 | 0x0A | R8G8_SNORM | signed bump, distinct value |
| D3DFMT_R8B8 | 0x29 | R8G8_UNORM | |
| D3DFMT_D24S8 | 0x2A | D24_UNORM_S8_UINT | also F24S8 (0x2B) |
| D3DFMT_D16 | 0x2C | D16_UNORM | |
| D3DFMT_F16 | 0x2D | R16_FLOAT | no D3D11 float depth; falls back to D16 for DSV |
| D3DFMT_L16 | 0x32 | R16_UNORM | |
| D3DFMT_V16U16 | 0x33 | R16G16_SNORM | |
| D3DFMT_R5G5B5A1 | 0x38 | B5G5R5A1 | bit-reordered at upload |
| D3DFMT_R4G4B4A4 | 0x39 | B4G4R4A4 | bit-reordered at upload |
| D3DFMT_A8B8G8R8 | 0x3A | R8G8B8A8 | |
| D3DFMT_B8G8R8A8 | 0x3B | B8G8R8A8 | |
| D3DFMT_R8G8B8A8 | 0x3C | R8G8B8A8 | |
| D3DFMT_R16F | 0x21 | R16_FLOAT | |
| D3DFMT_R32F | 0x22 | R32_FLOAT | |
| D3DFMT_G16R16F | 0x23 | R16G16_FLOAT | |
| D3DFMT_G32R32F | 0x26 | R32G32_FLOAT | |
| D3DFMT_A16B16G16R16F | 0x34 | R16G16B16A16_FLOAT | |
| D3DFMT_A32B32G32R32F | 0x4B | R32G32B32A32_FLOAT | |
| D3DFMT_G16R16 | 0x42 | R16G16_UNORM | |
| D3DFMT_A16L16 | 0x43 | R16G16_UNORM | luma+alpha |
| D3DFMT_A16B16G16R16 | 0x44 | R16G16B16A16_UNORM | BGRA order in memory |
| D3DFMT_A32B32G32R32 | 0x45 | R32G32B32A32_FLOAT | no 128-bit UNORM in DXGI |
| D3DFMT_G32R32 | 0x46 | R32G32_FLOAT | no R32G32_UNORM in DXGI |
| D3DFMT_L32 | 0x47 | R32_FLOAT | 32-bit luminance |
| D3DFMT_A32L32 | 0x48 | R32G32_FLOAT | |
| D3DFMT_V32U32 | 0x49 | R32G32_FLOAT | signed bump |
| D3DFMT_Q16W16V16U16 | 0x4A | R16G16B16A16_SNORM | signed bump |
| D3DFMT_Q32W32V32U32 | 0x51 | R32G32B32A32_SINT | signed bump |
| D3DFMT_A2R10G10B10 | 0x4C | R10G10B10A2_UNORM | |
| D3DFMT_X2R10G10B10 | 0x4E | R10G10B10A2_UNORM | |
| D3DFMT_A2B10G10R10 | 0x4F | R10G10B10A2_UNORM | |
| D3DFMT_A2W10V10U10 | 0x50 | R10G10B10A2_UNORM | signed bump |
| D3DFMT_R10G11B11 | 0x52 | R11G11B10_FLOAT | no exact DXGI, approx |
| D3DFMT_R11G11B10 | 0x53 | R11G11B10_FLOAT | |
| D3DFMT_D24X8 | 0x54 | D24_UNORM_S8_UINT | stencil unused |
| D3DFMT_D24FS8 | 0x55 | D24_UNORM_S8_UINT | float depth approximated |
| D3DFMT_D32 | 0x56 | D32_FLOAT | fixed depth approximated as float |
| D3DFMT_DXN | 0x57 | BC5_UNORM | 2-channel normal compression |
| D3DFMT_DXT3A | 0x59 | BC2_UNORM | explicit-alpha DXT3 variant |
| D3DFMT_DXT5A | 0x5A | BC3_UNORM | alpha-only DXT5 variant |
| D3DFMT_CTX1 | 0x58 | BC1_UNORM | no exact DXGI, approx |
| D3DFMT_LIN_* | 0x10-0x78 | (same as base) | all linear variants, e.g. LIN_A1R5G5B5=0x10, LIN_L8=0x13, LIN_D16=0x30; signed LIN_X8L8V8U8=0x14, LIN_V8U8=0x15, LIN_L6V5U5=0x18 are distinct; extended formats (float/10-bit/16-32-bit pairs/DXN/DXT3A/DXT5A/CTX1) use LIN_ codes 0x5B-0x78 |
| D3DFMT_INDEX16/32 | 101/102 | R16_UINT / R32_UINT | index buffers |

Textures created with `D3DUSAGE_RENDERTARGET` also get `D3D11_BIND_RENDER_TARGET`
and can be rendered to through `tex_GetSurfaceLevel()` + `SetRenderTarget`.

### Cube & Volume Textures

`CreateCubeTexture` maps to a D3D11 `Texture2D` with `ArraySize=6` +
`D3D11_RESOURCE_MISC_TEXTURECUBE` (TEXTURECUBE SRV). Each face holds its own mip
chain; per-face `LockRect`/`UnlockRect` unswizzles + converts + uploads at
subresource `face*levels+level`. `GetCubeMapSurface` returns an array-sliced
RTV-backed surface (TEXTURE2DARRAY), so cube faces can be render targets.

`CreateVolumeTexture` maps to a D3D11 `Texture3D` with full mip chains.
`LockBox`/`UnlockBox` handle the Xbox 3D Z-order (round-robin interleaved bit)
swizzle and per-slice format conversion. `GetVolumeLevel` returns a ref-counted
`IDirect3DVolume8` wrapper that delegates to the parent texture.

### Multisampling

`MultiSampleType` is honored using the canonical XDK values (packed X/Y-grid
nibbles, e.g. 0x0011 = none, 0x0021 = 2-sample, 0x0041 = 4-sample, 0x1011 =
2-sample supersample). Sample counts are validated via
`CheckMultisampleQualityLevels` with a graceful fallback (9→8→4→2→1).
Supersample modes are approximated as MSAA. `GetDesc` reports the requested
Xbox type; `LockRect` on multisampled surfaces resolves through
`ResolveSubresource`.

### Primitive Types

```c
D3DPT_POINTLIST      // Individual points
D3DPT_LINELIST       // Line pairs
D3DPT_LINESTRIP      // Connected lines
D3DPT_TRIANGLELIST   // Triangle triples
D3DPT_TRIANGLESTRIP  // Connected triangles
D3DPT_TRIANGLEFAN    // Fan triangles
D3DPT_QUADLIST       // Xbox-specific: quad pairs (split into 2 tris each)
```

### Flexible Vertex Format (FVF)

```c
D3DFVF_XYZ           // float3 position (transformed by MVP)
D3DFVF_XYZRHW        // float4 pre-transformed position (screen space)
D3DFVF_NORMAL         // float3 normal vector
D3DFVF_DIFFUSE        // DWORD diffuse color (ARGB)
D3DFVF_SPECULAR       // DWORD specular color
D3DFVF_TEX0 - TEX4    // 0-4 texture coordinate sets (float2 each)
```

### Device Methods (70+ in IDirect3DDevice8Vtbl)

Key methods:

```c
// Scene management
BeginScene(), EndScene(), Clear()

// Transforms (VIEW, PROJECTION, WORLD, TEXTURE0-3)
SetTransform(type, &matrix), GetTransform(type, &matrix)

// Drawing
DrawPrimitive(type, start_vertex, prim_count)
DrawIndexedPrimitive(type, min_idx, num_verts, start_idx, prim_count)
DrawPrimitiveUP(type, prim_count, vertex_data, stride)
DrawIndexedPrimitiveUP(type, min_idx, num_verts, prim_count, idx_data, idx_fmt, vtx_data, stride)

// Resources
CreateTexture(w, h, levels, usage, fmt, pool, &texture)
CreateCubeTexture(edge, levels, usage, fmt, pool, &texture)    // 6-face, D3D11 TEXTURECUBE
CreateVolumeTexture(w, h, d, levels, usage, fmt, pool, &texture) // D3D11 Texture3D
CreateImageSurface(w, h, fmt, &surface)                        // lockable offscreen surface
CreateVertexBuffer(length, usage, fvf, pool, &buffer)
CreateIndexBuffer(length, usage, fmt, pool, &buffer)
SetTexture(stage, texture)
GetTexture(stage, &texture)          // AddRef'd copy of the bound texture
SetStreamSource(stream, buffer, stride)
GetStreamSource(stream, &buffer, &stride)
SetIndices(buffer, base_vertex_index)
GetIndices(&buffer, &base_vertex_index)

// State
SetRenderState(state, value)
SetTextureStageState(stage, type, value)
SetVertexShader(fvf_or_handle)
SetPixelShader(handle)

// Viewport
SetViewport(&viewport)

// Render targets
SetRenderTarget(surface, depth_surface)
CreateRenderTarget(w, h, fmt, multisample, lockable, &surface)
CreateDepthStencilSurface(w, h, fmt, multisample, &surface)
// Surface LockRect/UnlockRect are implemented via a D3D11_USAGE_STAGING
// copy: sub-rect locks supported, write-back unless D3DLOCK_READONLY.

// Xbox extensions
BeginPush(count, &push_ptr)   // Direct push buffer access
EndPush(push_ptr)
Swap(flags)                    // Xbox-style present
```

## Shaders

The D3D8 layer compiles fixed-function vertex and pixel shaders at startup:

- **Vertex shader**: Transforms position by WVP matrix, passes through color/texcoords; outputs 3-component texture coordinates per stage so cube maps (TCI reflection vectors) and volume textures get their full third component. Per-stage `D3DTSS_TEXCOORDINDEX` (TCI camera-space normal/position/reflection, sphere map) and texture matrices are applied in the VS.
- **Pixel shader**: The texture-object declarations are compiled per *texture signature* — the set of 2D/cube/volume textures bound to the 4 stages. The PS cache recompiles whenever a stage's texture type changes and samples with float2 (2D) or float3 (cube/volume) coordinates, so cube/volume SRVs sample correctly through the fixed-function path. The NV2A register-combiner path (`d3d8_combiners.c`) emits matching `TextureCube`/`Texture3D` declarations from the PS token's texture modes.

Xbox games that use custom vertex/pixel shader programs (via push buffer microcode) require the NV2A library for proper emulation.

## Known Caveats

- **Palettized (P8) textures**: indices are expanded to BGRA through the
  texture stage's palette at upload, and `dev_SetPalette` re-bakes any P8
  texture currently bound to that stage, so animated/colorized palettes work.
  `GetSurfaceLevel`/`LockRect` on a P8 surface returns the raw 8-bit indices
  (write-back on unlock re-bakes); sub-rect locks on P8 surfaces are not
  supported (whole-level only).
- **Signed (bump-map) formats** `V8U8`/`V16U16` map to `R8G8_SNORM`/`R16G16_SNORM`
  (true signed sampling). `Q8W8V8U8`/`X8L8V8U8` map to `R8G8B8A8_SNORM`.
  `L6V5U5` is sign-extended in software into `R8G8_SNORM` (the 6-bit L
  luminance channel is not preserved). Each signed format now has a distinct
  compact value in `d3d8_xbox.h` rather than aliasing its unsigned RGB
  counterpart.
- **Vertex texcoords** are parsed per-set from the FVF `D3DFVF_TEXCOORDSIZE*`
  fields (default `float2`). float1/3/4 sets map to `R32_FLOAT`/`R32G32B32_FLOAT`/
  `R32G32B32A32_FLOAT` in the input layout and to `float4` in the vertex shader
  input, so float3/float4 texcoords in vertex buffers are supported.
- **Extended formats** (float, 16/32-bit pairs, 10-bit, DXN/DXT3A/DXT5A/CTX1)
  are wired through conversion/bpp/swizzle. Formats whose memory layout does not
  match their DXGI target byte-for-byte are channel-swapped in software during
  upload: `A16B16G16R16`/`A32B32G32R32` reorder their in-memory BGRA to RGBA,
  and `A2R10G10B10`/`X2R10G10B10` swap the A and R fields into
  `R10G10B10A2`. R6G5B5 graphs are 4:3 compressed (they stretch to 4x3 on
  format introspection); run-tested scopes are covered by `tests/d3d8_smoke`
  (no D3D11 device needed), while DXN/DXT3A/DXT5A/CTX1 and the 10-bit float
  formats use approximate DXGI mappings and still warrant in-game validation.

## Xbox-Specific Differences from PC D3D8

1. **Swizzled textures** — Xbox textures use Morton-code (Z-order) swizzling. Linear formats are prefixed with `LIN_`.
2. **Push buffers** — Games can write GPU commands directly via `BeginPush`/`EndPush`.
3. **Pixel shader combiners** — Xbox uses register combiners instead of pixel shaders. Controlled via `D3DRS_PSALPHAINPUTS*` and `D3DRS_PSFINALCOMBINER*` render states.
4. **No shader model** — No vs_1_1/ps_1_1. Vertex programs are NV2A microcode, pixel processing uses fixed-function combiners.
5. **Tile memory** — Xbox has tile-based render targets. Abstracted away by this layer.
