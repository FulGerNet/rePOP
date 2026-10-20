# Effect quality

The existing `Graphics/PostProcessingQuality` selector remains Off/Low/Mid/High.
Release 0.1.2 defaults to Low on Windows and Off on Android, as supplied by
the user; existing INIs take precedence.
No new setting was added. The policy is shared by Windows D3D11, Windows native
D3D12/Vulkan and Android Vulkan, compiled for demo and retail separately.
The user confirms that it works (2026-10-20); the confirmation did not specify
a target, backend, scene or individual effect.

## What the selector controls

| Rendering work | Off | Low | Mid | High |
| --- | --- | --- | --- | --- |
| Recognized screen-space blur/bloom chains and their fullscreen composites | Omitted | 50% auxiliary width/height | 75% auxiliary width/height | Original auxiliary resolution |
| Recognized projected character shadows | Caster and dependent receiver draws omitted | 128×128 maps | 192×192 maps | 256×256 maps |
| Other auxiliary targets, from 40×30 through 512×512 | 25% width/height; material draws retained | 50% | 75% | Original resolution |
| Tiny pyramid levels, including retail 20×15 and 10×7 | Recognized chain draws omitted | Original resolution | Original resolution | Original resolution |
| Full-width display/history buffers, HUD and base scene geometry | Preserved | Preserved | Preserved | Preserved |

The last row follows the separate internal-resolution setting. The existing
texture-glow switch still gates the independently identified final glow
composite. Guest filter offsets, shader coefficients, animation and game
timing are preserved. High retains the developer `RECOMP_HW_FX_SCALE` override.

Previously, only targets learned from a recognized fullscreen draw received
Low/Mid scaling. Shadow maps were excluded. Learning during a draw could
also recreate a surface after its clear. Auxiliary quality is now chosen at
the first clear, without waiting for a draw to identify its effect.
Retail's 40-pixel viewport has a 48-pixel allocation width because of pitch
padding; the budget uses the viewport dimensions rather than confusing these
two widths.

## Evidence and coverage

Demo's `android-demo-simple-trace.txt` (frame 2743) and
`options-xbox-demo-q3-err.txt`, and retail's `retail-hud-after-err.txt`
(including frame 3615), independently record 256×256 RGB565 caster targets,
512-byte pitch, depth off, no depth allocation and blending off. Retail also
records projected receivers sampling those maps with ZERO / ONE_MINUS_SRC_COLOR
and depth writes off. Demo's receiver behavior was established in the
2026-10-15 shadow investigation in [VALIDATION.md](VALIDATION.md).

The shadow policy records the resolved allocation when a caster is encountered
and requires same-frame provenance and an enabled texture stage before
omitting a receiver. A static 256×256 texture alone is insufficient. The
allocation addresses in local traces are not fixed XBE addresses.

The screen chains differ. Demo has 320×240 ping-pong passes and the
160×120/80×60 chain. Retail continues through 40×30, 20×15 and 10×7 and samples
four pyramid levels in its composite. Each game's original combiners remain
intact. Local trace inventories can be reproduced with:

```powershell
python tools/audit-effect-trace.py logs/android-demo-simple-trace.txt logs/retail-hud-after-err.txt
```

Requested frame traces now record `[FX-SOURCE]` on all hardware backends:
source dimensions, age in frames, destination viewport, quality, enabled
texture mode, depth and blend state. This distinguishes an actual sampled
render target from a texture merely bound to an unused stage. It also exposes
previous-frame dependencies for further temporal-effect investigation.

## Remaining all-effects audit

This is an expansion of the selector, **not a completed identification of every
visual effect in both games**. The following boundaries matter:

| Family | Established coverage | Remaining work |
| --- | --- | --- |
| Spatial blur, bloom, glow | Independently traced chains in both targets | Compare more scenes and the original console |
| Projected shadows | Caster states in both targets; separate receiver evidence | Wider levels, softness and intensity comparison |
| Water reflections/refraction, ripples | Auxiliary render targets receive the common budget if used | Identify actual water passes in each XBE/scene; direct animated materials and authored reflection textures are not selectively changed |
| Motion blur, rewind/time-power trails and temporal distortion | Source age is now traced; auxiliary buffers share the budget | Identify and verify their specific producers/composites; full-size history copies are deliberately retained |
| Sand, dust, smoke, fire, sprites, lens flares | Existing game geometry/shaders remain present | Individual pass identities and optional-cost controls are not established |
| Fog, lighting, cubemap reflections and animated material UVs | Existing renderer behavior preserved | No new independent quality reduction; do not assume these are fullscreen post effects |
| Cinematic bars, fades, pause layers and HUD | No blanket suppression of transparent or fullscreen geometry | Wider transition/HUD checks, including the previously reported demo Off HUD defect |

The renderer still documents gaps such as stencil and bump-env/dot-product
texture modes. A quality selector cannot establish that those effects render
correctly. The nearby Jade source tree was consulted only as a comparison
reference; no code or target addresses were copied from it.

Builds and the exact limits of execution checks are in
[VALIDATION.md](VALIDATION.md). The user requested that further testing stop
after confirming the option works.
