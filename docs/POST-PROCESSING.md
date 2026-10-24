# Effect quality

Version 0.3.2 replaces the separate quality/glow controls with one Graphics
preset, shared by both titles and Windows D3D11/D3D12/Vulkan and Android Vulkan.
New defaults are Standard on both hosts. The old Low setting brought no FPS
benefit in the user's test; no speedup is claimed for the replacement presets.

| Rendering work | Debug Off | Reduced | Standard | Full |
| --- | --- | --- | --- | --- |
| Recognized screen-space chains | Omitted | 50% auxiliary width/height | Former High resolution | Same as Standard |
| Recognized projected character shadows | Retained at reduced map resolution | Caster and proven receiver draws omitted | 256x256 maps | 256x256 maps |
| Other auxiliary targets, 40x30 through 512x512 | 25% dimensions | 50% dimensions | Original resolution | Original resolution |
| Tiny bloom tail levels | Recognized chain draws omitted | Original resolution | Original resolution | Original resolution |
| Final texture glow composite | Omitted | Omitted | Omitted | Enabled |
| Scene depth, HUD, display/history buffers and timing | Preserved | Preserved | Preserved | Preserved |

`[Graphics] GraphicsPreset=0/1/2/3` stores Off/Reduced/Standard/Full. Only INI
and Windows F7 select Off; normal menus cycle 1,2,3. Legacy High/Mid map to
Standard, Low to Reduced, enabled glow to Full unless Off; explicit new keys
take priority. The standalone TextureGlowEffect control/key is removed on
save. Guest filter coefficients and animation are unchanged; the existing
RECOMP_HW_FX_SCALE developer override still applies at full effect resolution.

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


## 2026-10-22 follow-up: shadows independent of screen-effect Off

The previous omission policy is superseded: character shadow caster/receiver
draws are retained at Off, with the existing 25% auxiliary resolution budget.
Known receivers use bounded projective sampling to avoid smearing the edge of
the shadow map onto walls. RGB565 texture samples have implicit alpha one,
including host BGRA targets whose alpha stayed at the black clear value.
Both hosts and targets build; no new runtime tests were performed at the user's
explicit request. Retail shadow visibility at High and demo wall artifacts still
need user verification. Earlier validation entries describe the old policy.
