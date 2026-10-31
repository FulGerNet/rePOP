# Regression tests

## Android diagnostic archive and expiry

Run `python tools/test-diagnostic-archive.py` with a JDK on PATH. It uses the
production Java packager and expiry code with synthetic files: both targets,
two latest histories per stream, duplicate roots, bounded head/tail capture,
truncation reporting, empty installations, symlink exclusion, preservation
of original logs, and deletion of expired ZIPs/interrupted workspaces.
Fixtures and classes stay in ignored build/diagnostic-archive-tests/.
It does not exercise Android URI grants, sharesheet UI, JobScheduler timing,
actual logcat permissions or Activity lifecycle; those require a device.

## Eye-plane depth reconstruction

The native GPU suite (`ctest --test-dir build/tests/native-gpu -C Release
--output-on-failure`) compares a triangle crossing the eye in homogeneous
clip space with the same triangle reconstructed through production
`vs_finish`. Coverage must match exactly and interpolated depth must agree
within one color quantization step on Vulkan and D3D12. This catches the
per-vertex depth clamp that made the demo bridge appear transparent.
The test shaders contain only synthetic geometry, and are excluded from
production shader bundles.

The same suite exercises the production shadow footprint helper with affine
Q=0, positive/negative homogeneous representations, small nonzero Q and
outside-map coordinates. It checks actual GPU color/coverage readbacks on
Vulkan and D3D12. The device uses production's minimal feature contract.
Set `RESOT_GPU_NONPRECISE_QUERIES=1` and run the `native_vulkan` test to check
ordinary query begin/end/readback and ordering without the precise flag.
These local tests do not establish rendering correctness on an affected phone.

The depthless Z16 caster regression compares independent clip-space coverage,
the unflagged `afc13cc` path, and the corrected production caster policy.
Synthetic screen Z exceeds 65535: reference and corrected coverage must match
exactly, while the regression path must render zero pixels. The existing
eye-crossing test remains active with normal scene depth, so restoring the
global clamp instead of the narrow caster policy fails the suite.

## Android contextual overlay

Run `python tools/test-touch-overlay.py` with a JDK on PATH. This exercises
the app's production visibility/fade policy: automatic hiding, transparent
toggle reactivation, visible-pad toggle persistence, hidden FPS artwork,
menu/cinematic overrides, Back/Confirm visibility,
restoration of saved gameplay preferences, and layout editing. It uses no
game files or Android device and writes classes under ignored
`build/touch-overlay-tests/`. Canvas rendering, touch hit testing and JNI
controller delivery still require the Android build and device checks.

## Menu pointer (Windows host test, both Xbox layouts)

Run `python tools/test-menu-pointer.py`. It compiles the production shared
mouse/touch bridge against synthetic guest objects for both target layouts.
Checks include row selection, separate direction/activation releases, a single
activation per tap, drag cancellation, page changes during a press, physical
input priority, the retail name keyboard grid, idle movie polling, Bink taps, cinematic viewport state,
pillarbox misses and invalid guest metadata. Products stay in
`build/menu-pointer-tests/`. This does not replace mouse testing in the actual
window or Android device touch/lifecycle validation.

Run `python tools/test-apu-irq.py` on Windows to compile the demo's actual APU
interrupt dispatcher with mock kernel/guest callbacks. It checks that 10,000
masked polls preserve the pending IRQ and that removing the mask delivers
once. A second executable includes the production audio gate and uses real
Windows threads to force both acquisition orders: an IRQ defers while a guest
scope owns the gate; a guest scope cannot enter while the IRQ owns it.
Nested guest scopes and scopes entered from an ISR are checked too. Products
stay in ignored `build/apu-irq-tests/`. These tests do not exercise the garden
lever, the complete guest ISR, or every DirectSound path in the game.

## Retail I/O callbacks

Run `python tools/test-retail-io-apc.py` to exercise the production callback
dispatcher with lifted, manual and kernel stdcall callbacks and nested
completion. It verifies stack balance and preservation of the interrupted
integer, floating-point and SIMD context. It does not execute the game's
save serializer or establish that saving and loading a checkpoint works.

## Virtual memory

For each target, configure `port/third_party/xboxrecomp-<target>/tests/memory_regressions`
with CMake, build `memory_regressions_test`, then run CTest. The four modes
cover default allocation, heap reclaim, extended virtual memory and its
128 MB-map fallback. Null-base reserve/commit/decommit/release tests use the
runtime's synthetic test XBE, with no game files. Extended VMA remains
opt-in; its tests do not validate device DMA or game behavior.

## Audio resampler

Run `python tools/test-audio-resampler.py` from the repository root, with
CMake and a C compiler available (on Windows, the same MSVC environment used
to build the game). Build products stay in ignored `build/audio-tests/`.

The runner compiles `test-audio-resampler.c` twice, including each target's
actual `apu_resample.h`, and runs both executables through CTest. The tests
measure the duration and zero-crossing frequencies of one-second mono and
stereo signals at 12, 24, 44.1, 48 and 96 kHz, resampled to 48 kHz. They also
exercise pitch changes between output blocks, short source segments,
temporary underruns, inclusive final samples, loops, seeks, reused voices
and independent voice histories.

These CPU tests do not exercise the APU's guest-memory decoder, hardware
stream notifications, output device, envelope/filter processing or game
audio. Those paths still require runtime validation. Linear interpolation
does not provide a dedicated anti-alias filter for downsampling.

## Cube map host sampling

Run `python tools/test-cubemap.py` on Windows with CMake and MSVC. It creates
no window and needs no game files: Direct3D 11 WARP samples six synthetic
BGRA faces in the +X, -X, +Y, -Y, +Z, -Z directions and reads back the results.
The test also verifies that the default SRV is a TextureCube. Build products
stay in ignored `build/cubemap-tests/`.

This validates the host API conventions used by both renderers; it does not
execute their guest texture decoder, validate guest face strides, render-to-cube
updates, authored mip chains or the game's reflections. Run
`python tools/check-hlsl.py` separately to compile both production shaders.

## Release integrity, versions and launcher notices

`python tools/test-release-trust.py` uses the production Java verifier on the
actual release APK and two negative fixtures: changed DEX bytes and a complete
APK signed with a disposable unrelated test key. It checks API 29-36 policies,
missing-file Retry status and stable-version ordering, including existing
reSOTv tags. Test keys/artifacts remain in ignored build/release-trust-tests.
This runs on the JVM, not an Android phone.

`python tools/test-release-update.py` compiles the production Windows parser
and checks nested/body decoys, draft/prerelease flags, truncation, duplicate
fields, malformed responses and numeric version ordering.
`python tools/test-launcher-update.py` renders the actual Windows popup to
build/launcher-update-tests/launcher-update.bmp without showing a window or
loading game files. It tests hit areas, Enter default Close and Escape.
`--live` additionally exercises the production WinHTTP request to GitHub.
The test-only newer tag in the preview does not represent a published release.
The existing look-sensitivity test now covers preset migration, normal-menu
cycles excluding Off, INI writes and the four-item layout on both hosts/titles.

## Native texture upload and mip readback

The native GPU suite also uploads synthetic BGRA textures and compares every
generated mip against independent CPU filtering, through the production
`nv2a_texture_probe.h` readback checker. Cases are 64x32, 32x64, 64x64, 1x64
and 64x1, on Vulkan and D3D12. Base upload must match exactly; mip level L
allows L channel quantization steps. A deliberately wrong expected base pixel
must report exactly one mismatch. The rectangular case failed at its last mip
before the SDL extent correction; all 14 suite tests pass afterward. This
contains no game textures and does not establish handset rendering correctness.

## Retail extended-VA audio DMA

Run `python tools/test-apu-dma.py` on Windows with CMake and MSVC. It compiles
the production retail DMA mapping/locking wrappers, physical resolver and SGE
page lookup into an isolated harness. No game files, window or game process
are used; build products stay in ignored `build/apu-dma-tests/`.

It checks stable 28-bit tokens, offsets, SG pages with deliberately nonadjacent
tokens, multibyte samples and 36-byte ADPCM reads across a guest page boundary,
concurrent mapping, release/invalidation, slot reuse/exhaustion and unchanged
legacy RAM/image/contiguous/heap-alias resolution. The 112 MB token namespace
is host address translation capacity, not console physical memory accounting.
Actual game audio and buffer lifetime coordination require runtime validation.

## Retail visibility queries

Run `python tools/test-visibility.py` on Windows with CMake and MSVC. It tests
the production retail query manager on D3D11 WARP with real depth-occluded
and visible full-screen triangles. Checks cover pending publication, repeated
reports, clear/reset before readback, continued counting after a report,
FIFO completion, slot reuse, and normalization across render scales. Products
stay in ignored `build/visibility-tests/`. No game files or window are used.
The renderer integration and the cause of the reported flickering still need
in-game validation; this test does not simulate a removed graphics device.

## Native framebuffer alias lifetime

`python tools/test-native-surface-alias.py` compiles the production retail
RAM fingerprint, alias check and GPU-producer marking functions with synthetic
guest RAM. It covers current-frame GPU writes, later RAM reuse, repeated
texture stages, retained scanout ownership and restoring the alias after
a new GPU draw. No window, game data or controller input is used. This is
a lifetime-policy regression; manual GPU rendering remains a separate check.
