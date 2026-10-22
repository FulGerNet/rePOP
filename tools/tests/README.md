# Regression tests

## Menu pointer (Windows host test, both Xbox layouts)

Run `python tools/test-menu-pointer.py`. It compiles the production shared
mouse/touch bridge against synthetic guest objects for both target layouts.
Checks include row selection, separate direction/activation releases, a single
activation per tap, drag cancellation, page changes during a press, physical
input priority, idle movie polling, Bink taps, cinematic viewport state,
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
