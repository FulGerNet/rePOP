# Audio resampler regression tests

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
