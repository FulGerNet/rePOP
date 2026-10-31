# reSOT reuse

Imported from the local reSOT working tree on 2026-10-22 (HEAD
`d8190090c15186dd55d419ee3a20f6231bac4189`, including its current local fixes).
reSOT itself is untouched. This is a separate rePOP checkout on branch reWW.

The complete vendored XboxRecomp source, tools, tests, headers, attribution and
licenses are retained. This includes the current x86 lifter fixes for flags,
carry, widths, FPU/SSE state, call/return frames, indirect dispatch, SEH and MMIO;
the Xbox kernel, memory reservations, file/save I/O, scheduling, NV2A renderers,
texture/combiner/query fixes, APU/audio, OHCI and input implementations.
`RESOT_RUNTIME_RETAIL=1` is an explicit compatibility baseline for this first
WW port, not a statement that the inherited rendering/audio policies have been
validated on WW. `REWW_RUNTIME=1` distinguishes the consumer for later changes.
Existing `RE-SoT` comments preserve the origin of inherited fixes.

The Windows launcher, ISO installer (extract-xiso), options, diagnostics,
crash handler, register declarations, watchdog, sampling profiler and thread
dump are reused. The launcher recognizes the WW hash and disc files, exposes
one retail target, and uses WW titles. The font is retained from the user's
local SoT setup; its provenance and licensing are unchanged. The SoT title
image/icon are omitted. The scene diagnostic provider returns Unknown until
WW globals have been established.

The source sorter and seed scanner are reused. Function groups are based on
XBE section names, strings/source paths, AI tables and conservative neighboring
function inference, with evidence in the output. SoT seeds are never imported.
Functions without evidence go to unsorted. `--all` requests lifting every
detected routine; static detection is not a guarantee of complete runtime coverage.
When the sibling SoT retail analysis exists, the sorter also uses unique
normalized code matches to transfer folder assignments, with the originating
SoT function recorded in each placement. This improves organization without
transferring SoT seed addresses or function implementations to WW.

No Jade world, projection, menu pointer, or Bink replacement addresses are copied
from SoT. The DSP acknowledgement default `gp+0x810` was initially omitted,
then enabled after paired WW/SoT disassembly established the same GP scratch
handshake (see WW-HOOKS.md).
WW DSOUND bounds come directly from its section header. Additional WW hook
evidence is recorded separately in WW-HOOKS.md when available.

Two layout corrections are specific to this port: initial TLS and its CRT
slot are heap allocations rather than fixed addresses inside the image;
the complete 8 MB stack starts at 0x00A00000, above the WW image end
0x0097B160, and the runtime heap consequently starts at 0x01200000.
An integration test checks the layout against the actual XBE section table.

This request targets Windows. The Android application is not copied or claimed
to build for WW. Runtime Android sources are retained as part of XboxRecomp.

## Renderer reuse audit, 2026-10-23

Before the WW-specific surface reuse correction below, the vendored GPU
renderer and `port/render` matched the local reSOT code. Host
F7 options, F6 diagnostics, scripted pad, audio and native D3D12/Vulkan encoders
are present. The pipeline had deployed the **stock SDK SDL3.dll**, which lacks
reSOT's native occlusion query ABI and forced native backends back to D3D11.
`tools/native-runtime.py` now reads the x64 PE exports before staging the
query-enabled DLL. It retains the local runtime in ignored `build/deps/`,
reuses a sibling source-built DLL when first provisioning, and never silently
substitutes the stock SDK DLL. The published SDL patch/setup scripts are reused
from reSOT, including attribution. Setup downloads are explicit and hash-checked.
The export check does not replace the runtime's ABI/capability/query-allocation
checks. `tools/smoke-renderer.py` checks the backend that actually initialized
and captures the GPU readback rather than relying on software pixel counters.

SoT's projection/culling, native menu injection, menu pointer, Bink EOF hook and
world/scene addresses remain title-specific work. These are not safely portable
by copying target_hooks.c. An independent WW frame-clock comparison found the
normal path already uses measured elapsed microseconds; the SoT timer fix is
therefore not enabled globally. The fixed-refresh branch needs separate runtime
evidence before any correction is applied. See VALIDATION.md for observations.

## CPU reuse of render-target memory (RE-WW)

WW reuses menu post-processing memory for RGB32 Bink frames. The inherited
GPU texture lookup selected a host render target solely by guest address,
preferring matching width or the most recent shape. It could therefore sample
old menu pixels after the CPU had written a correctly decoded movie there.
The shared D3D11/D3D12/Vulkan fix records a bounded RAM fingerprint after a
color draw/clear and checks it before selecting render-target aliases. A change
invalidates every same-address alias without freeing in-flight images, forcing
a guest texture upload. Valid feedback and the existing glow shape preference
remain in place. Depth-only draws and failed/empty draws do not claim color.
GPU reacquisition also retires sibling shapes with obsolete RAM baselines if
the CPU rewrite happened before any intervening texture lookup.

`reww_surface_ownership.h` uses the same approximately 2,048-word sampling
approach as the existing CPU texture cache, with the last word, tail bytes and
length included. CPU texture hashes use that helper too. This is a sampled
coherency guard, not exact CPU write tracking: unsampled changes and collisions
can escape detection. Tests explicitly cover that limitation. Alias-backed CPU
textures bypass the once-per-frame check so same-frame rewrites can upload;
known dirty transitions bypass even the matching-content-hash shortcut.
The invalidation groups share an exact base address; partial overlaps at
different base addresses are not tracked. No title-specific addresses, decoder replacement or forced pixel alpha are
part of this fix. Validation and actual capture paths are in VALIDATION.md.

## Continued reuse audit and writable smoke storage — 2026-10-23

A byte comparison against the current sibling checkout found no missing files
under XboxRecomp src, tools/recomp (excluding Python caches), or port/render.
port/render is identical. Runtime differences are limited to kernel_hal.c,
nv2a_hw_d3d11.inc, nv2a_hw_native.inc, nv2a_pb_exec.c and the two
xbox_memory_layout files. The lifter/translator contain WW follow-ups.
This confirms source reuse coverage, not equivalent game behavior. Windows host
differences include the WW launcher, target setup, diagnostics and options;
SoT icon/resource files remain intentionally omitted. Game-specific hooks still
need WW evidence before migration.

REWW_SAVE_DIR now passes an optional save root to the inherited xbox_path_init.
Renderer smoke runs put sparse disk images and saves under their ignored run
folder. This allows startup in a writable workspace and makes scripted runs
independent of existing shared xboxrecomp profiles. Direct runs without the
override keep the inherited save location. Fresh profiles can require a
different input timeline from earlier runs using existing saves.

## WW audio physical namespace and geometric cold paths

The RE-WW APU resolver selects allocated contiguous physical pages before the
numerically overlapping image range. DirectSound ordinary RAM remains in the
inherited explicit heap-alias and DMA-token namespaces, resolved first.
reSOT's policy is unchanged. The cinematic PCM corruption was a bus-address
selection error; neither volume reduction nor a replacement audio decoder is
part of the correction. `smoke-renderer.py --audio` reuses the existing APU WAV
writer and enables bounded source-format diagnostics for reproduction.

The shared cold-entry recovery now admits SSE comparisons as local flag
snapshot producers. This recovers WW geometric continuations which previously
called direct unresolved stubs, skipping their stack epilogues. Compiled
fixtures verify actual generated stack restoration with ordered and unordered
inputs. COMISD/UCOMISD register operands now read the double lane. Runtime
rendering observations and remaining limitations are in VALIDATION.md.

## Active color-target sampling (RE-WW)

WW's color-adjustment pass reads the same guest color surface it writes.
Frame-trace queries and per-draw pixel readback showed valid world colors
before that pass and white immediately afterward. Both inherited backends
returned no texture for an active-target alias, selecting their white fallback.
The runtime now makes a pre-draw GPU snapshot, shared across stages within the
draw and renewed for the next draw. D3D11 preserves RTV/DSV bindings around the
copy. The native encoder flushes queued users and cycles the snapshot backing,
using the same SDL copy/retirement facilities as frame composition. Snapshots
are released with resized/reused surfaces. Original guest shaders, combiner
state, alpha and RAM stay authoritative.

This corrects a demonstrated host resource hazard without importing any SoT
projection, scene globals or game addresses. The first 3D ship scene and early
combat tutorial are now visible in inspected D3D12 captures. The native Vulkan
implementation shares the correction; a Vulkan 3D runtime check is separate
from the D3D12/D3D11 tests recorded in VALIDATION.md.
