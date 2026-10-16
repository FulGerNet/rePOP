# reSOT on Windows

The Windows build: a 64-bit executable per target, Direct3D 11, XInput and
XAudio2.

## Play (portable folder)

Double-click `sot-xbox-demo.exe` or `sot-xbox-retail.exe`. Keep that target's
`prince.bf`, `video/` and `sound/` beside the executable;
retail also needs `shaders.bin`, `MEDIA/`, `POP1/` and `POP2/`. Use your own
supported Xbox disc files, as listed in the main README. The executable
embeds its checked Xbox image during compilation, so `default.xbe` is needed
to build, not to play. Its embedded copy is also verified before starting.
Demo and retail need separate folders.
If required files are missing, a folder picker asks for their location. Select
the folder containing `prince.bf`, `video/` and `sound/`; an invalid selection can
be corrected, and Cancel exits without starting the game.

The app starts full screen with graphics, audio, keyboard and controller
enabled. Space or controller A skips a Bink video, including videos whose
original skip permission is disabled. F5 opens/closes the compact translucent top-left panel
with game FPS and `Current WOW`, the loaded BF world's own name (`None`
when no world is loaded). Alt+Enter/F11 changes window mode; Alt+F4 exits.
F6 opens the translucent `reSOT Options` panel. Click Graphics or Controls
to expand/collapse that section; use the right scrollbar or mouse wheel.
Graphics contains a live FPS limiter (30/60/120/None), VSync On/Off,
Post-processing On/Off and
screen resolution choices. The resolution sets the game window's client
size; Monitor uses the desktop in a borderless window. The game's own
timing can still limit FPS. Direct3D 11 is the active renderer; Direct3D 12
and Vulkan are placeholders marked unavailable. To remove both host limits,
select FPS None and VSync Off; changing VSync alone keeps the selected FPS cap.
In Controls, choose Keyboard + Mouse or Joystick and double-click a binding
to capture a replacement. Esc cancels capture, right-click clears a binding,
and Reset restores the defaults. Game input is suppressed while F6 is open.
Settings are saved in `resot-options.ini` beside the executable.
Logs and shader caches are kept beside the executable. Save data stays in
that game folder, so keep it writable.

After building, `./tools/package.ps1 -Target xbox-demo` (or `xbox-retail`)
copies the executable and your game files into `bin/portable/<target>/`.
This folder needs no development tools. It contains your disc files: do not
redistribute it. Packaging again preserves existing save folders.

## Build requirements

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
.\tools\recomp.ps1 -Target xbox-retail -BuildOnly   # after editing port/ (host, overrides, runtime)
```

Each target has its own runtime copy (`port/third_party/xboxrecomp-demo`,
`-retail`) and its own build tree, `build/<target>`; `-BuildOnly` rebuilds
only the target named. The lifted C goes to `source/<target>/gen` (ignored by
Git). The executables
land in `bin/` as `sot-xbox-demo.exe` and `sot-xbox-retail.exe`, with the
reSOT icon (`port/windows/res`).

The build is 16:9 (Hor+) by default. To build the original 4:3 instead,
configure with an empty `RESOT_ASPECT`; `run.ps1 -Aspect` (or
`RECOMP_HW_ASPECT`) overrides either at run time:

```powershell
cmake -S . -B build/xbox-demo -DRESOT_TARGET=xbox-demo -DRESOT_ASPECT=""   # then recomp.ps1 -Target xbox-demo -BuildOnly
.\tools\run.ps1 -Pad -Aspect 4:3          # a 16:9 build shown 4:3
```

## Run

```powershell
.\tools\run.ps1                           # the demo, full screen
.\tools\run.ps1 -Windowed                 # in a window
.\tools\run.ps1 -Target xbox-retail
```

Alt+F4 or the window's close button exits the game process, including its
rendering and audio threads.

Double-clicking also works directly from `bin/`: select the game folder in
the picker when the files are not beside the executable.
`RESOT_ASSET_DIR` explicitly overrides the game folder. The script remains
useful for diagnostic settings and captures and selects `Assets/<target>/`.
`.\tools\shortcut.ps1` puts a desktop shortcut, "reSOT - Xbox demo", that
runs `run.ps1` with a double click, full screen (`-Target xbox-retail` for
the retail build, `-Arguments '-Windowed'` for extra switches).

The game always has a controller on port 0, without the emulated USB bus:
an XInput pad (an Xbox controller, on any of Windows' four slots), else any
other joystick or pad Windows sees, with the keyboard and mouse merged on
top while the game window has the focus (`RECOMP_KEYBOARD=0` turns them
off):

The keyboard follows the PC version's default layout (its Controls -
Keyboard screen), each action on the Xbox button that does it:

| Action | Keys | Xbox pad |
| --- | --- | --- |
| Move | W A S D, arrow keys | Left stick (arrows also the d-pad) |
| Walk toggle | Left Shift, Keypad . | Left stick at walking deflection |
| Jump | Space, Right Ctrl | A |
| Special action | Right mouse button | Right trigger |
| Sword attack | Left mouse button | X |
| Use dagger | E, middle mouse button | Y |
| Cancel | C, Keypad 1 | B |
| Rewind | R, Right Shift | Left trigger |
| Camera look | F, Delete | White |
| Alternate view | Q, End | Black |
| Reset camera | X | Right stick click |
| Start | Esc, Enter | Start |
| (back) | Backspace | Back |
| Camera | Mouse movement | Right stick |

The camera-look, alternate-view and reset-camera buttons are the ones left
on the pad once the others are placed; that the game uses them for those is
still to be checked in play. `-Set @{RECOMP_MOUSE_SPEED='60'}` (1-100,
default 43 as on the PC) scales the mouse, `RECOMP_WALK_DEFLECTION`
(default 12000 of 32767) is how far walking pushes the stick. The pointer
is hidden over the picture; the menus do not follow it. A joystick that is not an XInput device
uses buttons 1-4 as A B X Y, 5/6 white/black, 7/8 the triggers, 9 Back,
10 Start, its hat as the d-pad. `-UsbPad` brings back the old emulated USB
pad, for comparison.

`-Aspect 16:9` (or any `w:h`; 16:9 is the default build's) widens the
picture Hor+: more scene at the sides, the same vertical view, the 2D at its
original 4:3 size. The game opens as a borderless window over the whole
monitor; `-Windowed` opens a window instead, and Alt+Enter or F11 switch
between the two while it runs. `-NoVsync` stops waiting for the
display, `-NoAudio` leaves the sound hardware out.

Diagnostics go to `logs/<target>-err.txt`. Useful switches: `-Software` (CPU
rasteriser, for comparison), `-Seconds N`, `-SnapshotEvery S` (frame dumps in
`logs/fb`), `-Set @{RECOMP_HW_SCALE='3'}` (internal resolution multiple),
`-Set @{RECOMP_APU_WAV='out.wav'}` (record the sound). More in
[docs/RECOMP.md](../../docs/RECOMP.md).
