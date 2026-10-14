# reSOT on Windows

The Windows build: a 64-bit executable per target, Direct3D 11, XInput and
XAudio2.

## Requirements

- Windows 10/11 x64, a Direct3D 11 GPU
- Visual Studio with the C++ desktop workload (the scripts default to the
  `Visual Studio 18 2026` generator; pass `-Generator` for another)
- CMake 3.20+
- Python 3.10+ with `capstone` (`pip install capstone`)

The game files go in `Assets/<target>/` first; see "Supply your game files"
in the [README](../../README.md#supply-your-game-files).

## Build

```powershell
.\tools\recomp.ps1 -Target xbox-demo      # analyse, lift and build (about 12 minutes)
.\tools\recomp.ps1 -Target xbox-retail
.\tools\recomp.ps1 -BuildOnly             # after editing port/ (host, overrides, runtime)
```

The lifted C goes to `source/<target>/gen` (ignored by Git). The executables
land in `bin/` as `sot-xbox-demo.exe` and `sot-xbox-retail.exe`, with the
reSOT icon (`port/windows/res`).

The build is 16:9 (Hor+) by default. To build the original 4:3 instead,
configure with an empty `RESOT_ASPECT`; `run.ps1 -Aspect` (or
`RECOMP_HW_ASPECT`) overrides either at run time:

```powershell
cmake -S . -B build -DRESOT_ASPECT=""     # then .\tools\recomp.ps1 -BuildOnly
.\tools\run.ps1 -Pad -Aspect 4:3          # a 16:9 build shown 4:3
```

## Run

```powershell
.\tools\run.ps1 -Pad                      # the demo
.\tools\run.ps1 -Target xbox-retail -Pad
```

Start the game through the script, not by double-clicking the executable: the
runtime is configured through environment variables the script sets.
`.\tools\shortcut.ps1` puts a desktop shortcut, "reSOT - Xbox demo", that
runs `run.ps1 -Pad` with a double click (`-Target xbox-retail` for the
retail build, `-Arguments '-Fullscreen'` for extra switches). `-Pad`
plugs in an emulated Xbox controller; an XInput pad works, and so does the
keyboard while the game window has the focus:

| Keyboard | Xbox pad |
| --- | --- |
| Enter / Backspace | Start / Back |
| Arrow keys | D-pad |
| Z, X, A, S | A, B, X, Y |
| Q, E | White, Black |
| 1, 3 | Left trigger, right trigger |
| Numpad 8 2 4 6 | Left stick |
| I K J L | Right stick |
| Shift, Ctrl | Left / right stick click |

`-Aspect 16:9` (or any `w:h`; 16:9 is the default build's) widens the
picture Hor+: more scene at the sides, the same vertical view, the 2D at its
original 4:3 size. `-Fullscreen`
opens a borderless window over the monitor, `-NoVsync` stops waiting for the
display, `-NoAudio` leaves the sound hardware out.

Diagnostics go to `logs/<target>-err.txt`. Useful switches: `-Software` (CPU
rasteriser, for comparison), `-Seconds N`, `-SnapshotEvery S` (frame dumps in
`logs/fb`), `-Set @{RECOMP_HW_SCALE='3'}` (internal resolution multiple),
`-Set @{RECOMP_APU_WAV='out.wav'}` (record the sound). More in
[docs/RECOMP.md](../../docs/RECOMP.md).
