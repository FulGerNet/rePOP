# Android / Windows correction audit — 2026-10-20

Reviewed the Android bring-up and optimization changes from `e703efa`
through `9e4ed65`, plus the uncommitted Sand Birds / making-of audio fixes.
Compared host code, runtime platform guards, shader generation, SDL setup
and the Windows DLL actually present in `bin/`. Generated game C was not
modified. This is a review of those changes, not proof of complete platform
equivalence or full-game correctness.

## Findings

No additional missing Windows runtime correction was identified in the
reviewed changes. Most fixes described as Android work are already compiled
into both Windows targets through the shared runtime. The current Windows
executables include the latest audio corrections. Renderer optimizations
apply to the backend named below; Android's Vulkan path is not equivalent
to Windows' default D3D11 path.

| Change investigated | Windows state | Evidence / applicability |
| --- | --- | --- |
| Pending APU idle request overwritten; Sand Birds crash | Shared by both targets and hosts | `apu_vp.c` latches the trap and stops the scan; `apu_core.c` serializes MMIO writes |
| Dispatch timeout bypasses, callback ownership leak, unbounded DPC drain | Shared by both targets and hosts | `kernel_hal.c`, `kernel_bridge.c`, `apu_core.c`; ownership/contention and APU tests pass in both target modes |
| Bulk P8/ARGB texture decode, changing-texture lifetime | Already present | `nv2a_texture_upload.h`, `nv2a_hw_d3d11.inc`, `nv2a_hw_native.inc`; native texture cycling is shared by Vulkan/D3D12 |
| Retail white light-map borders and forming sand-tank alignment | Already present in D3D11 and native paths | Shared border/vertex policy; native GPU readback tests cover the contracts |
| GPU vertex programs, pure operand-read reductions, exact simple fragment shaders | Already present in native Vulkan/D3D12 | `nv2a_hw_native.inc`, `tools/build-native-shaders.py`; D3D11 uses its existing translated vertex shaders and combiner path |
| Retail small-register vertex interpreter and unused ALU elimination | Already present in native Vulkan/D3D12 | `resot_native_vsh.h`; retains the retail target restriction, not a platform restriction |
| Compact vertex inputs | Already present on Windows Vulkan | D3D12 intentionally retains its fixed pitch: SDL 3.4.18 caches vertex-buffer views across pipeline changes; removing this restriction would reintroduce the tested failure |
| Vertex/staging ring reuse, pipeline lookup, unchanged viewport/scissor/blend reuse | Already present in native Vulkan/D3D12 | Shared queue and encoder in `nv2a_hw_native.inc` |
| Persistent Vulkan pipeline cache | Already present on Windows Vulkan | Windows setup runs the shared SDL patch. `bin/SDL3.dll` exports both cache functions and both native-query APIs; runtime selects a cache beside the executable |
| Internal resolution, look sensitivity, actual-renderer F5 label, launcher restyle | Already present | Windows host/options and shared framebuffer path; the hosts retain their documented input/window differences |
| Retail random save writes, relative opens, directory-search cleanup, failed flush reporting | Equivalent Windows behavior already exists | Native Win32 access/offset writes and root-directory handles do not have the POSIX `O_APPEND` bug; Windows also drops enumeration state on close and reports retail flush failure |

## Android-specific changes retained

- Android's POSIX file descriptor/path handling, app save migration and
  case matching replace host behavior already provided by Win32. They
  cannot be copied into the Windows backend as POSIX operations.
- AArch64 SIGSEGV/MMIO decoding and 16-KB page handling have a separate
  Windows x64 VEH / AC97 implementation.
- Adreno custom driver import, JNI, Android SDL event-wait changes, touch
  controls, cutout/system bars and surface lifecycle belong to the Android
  host. Windows uses its own window procedure, XInput and XAudio2.
- Normalizing POSIX worker scheduling and avoiding a mobile busy-wait tail
  address Android scheduling. Windows retains its native thread creation
  and existing frame-pacing policy; no Windows scheduling problem was
  demonstrated by this audit.
- The demo's larger desktop vertex/index rings support D3D11 batch reuse.
  Android's smaller rings are a mobile memory policy, not an absent fix.
- Android chooses its drawable aspect; Windows retains the documented
  configurable 16:9 default. This review does not change either default.

## Verification and documentation

Commands and observed Windows runs are recorded in [VALIDATION.md](VALIDATION.md).
Shader checks, 8 native GPU/support tests and 4 APU/IRQL target tests pass.
Both Windows executables build. Brief D3D11/Vulkan/D3D12 startup checks
cover each target; they do not validate Sand Birds gameplay, a complete
making-of playback or a save/relaunch/load cycle on Windows.

Corrected obsolete Windows documentation that described native backends as
demo-only or CPU-only, and the packaged controls text that still advertised
Alt+Enter after F11 became the sole fullscreen toggle. No extra runtime
port or speculative graphics optimization was necessary for this audit.
