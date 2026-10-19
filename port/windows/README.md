# reSOT on Windows

The Windows build: a 64-bit executable per target, Direct3D 11 (default),
experimental native D3D12/Vulkan for the demo, XInput and XAudio2.

## Play (portable folder)

Double-click `sot-xbox-demo.exe` or `sot-xbox-retail.exe`. Keep that target's
`prince.bf`, `video/` and `sound/` beside the executable;
retail also needs `shaders.bin`, `MEDIA/`, `POP1/` and `POP2/`. Use your own
supported Xbox disc files, as listed in the main README. The executable
embeds its checked Xbox image during compilation, so `default.xbe` is needed
to build, not to play. Its embedded copy is also verified before starting.
Demo and retail need separate folders.

The executable opens on the reSOT screen: the logo, a link to the GitHub
repository, the installed games and two buttons, Start Demo and Start Game.
It looks for games beside the executable, in the folders remembered in
`resot-options.ini` (`[Launcher] DemoDir`, `RetailDir`, relative to the
executable when inside its folder) and in every folder beside the
executable, and tells the demo from the retail game by `default.xbe`'s
SHA-256 or, without it, by the files only one of them has. Each button is
enabled when its game is installed somewhere and its executable is available
(this one, or the other target's beside it, `sot-xbox-demo.exe` <->
`sot-xbox-retail.exe`, which is then started on that folder); under it are
the build found and its folder. With the demo and the retail game both
installed, both buttons work from either executable. Enter starts the
focused button (at first, this executable's game), the arrow keys move
between buttons, Esc closes.

Without any game, a file dialog asks for the game's Xbox ISO. The launcher
runs extract-xiso (`port/third_party/extract-xiso`, built into the
executable and run in a child copy of it) to extract it into a folder named
after the ISO beside the executable, without the disc's `$SystemUpdate`;
the screen shows its progress and can cancel it. `Install from ISO...`
installs another disc, for example the other game. `run.ps1`
(`RESOT_LAUNCHER_CONFIGURED`) and `RESOT_ASSET_DIR` with
`RESOT_SKIP_LAUNCHER=1` go straight to the game.

The app starts full screen with graphics, audio, keyboard and controller
enabled. Space or controller A skips a Bink video, including videos whose
original skip permission is disabled. F5 opens/closes the compact translucent top-left panel
with game FPS, `Current WOW` (the loaded BF world's own name, `None`
when no world is loaded), and `Renderer:` showing the active Direct3D 11,
Direct3D 12, Vulkan or software renderer. F11 changes window mode; Alt+F4 exits.
F6 opens the translucent diagnostics panel. Like F5 it leaves the game
playable. It shows, twice a second: frame rate and frame time with the
current graphics settings; executor time (interpreter, draw calls), present
and title time; draws, triangles, vertices and texture uploads per frame;
batch reuse hits and misses; guest heap and contiguous memory; the host
process's memory and CPU; active APU voices (2D, 3D, multipass), streaming
voices and voices held by a DirectSound lock; DPCs queued and run per second;
threads at raised IRQL and IRQL transitions per second; the current world;
and the last lines of this run's log. Ctrl+Shift+C or the Copy button puts
all of it, with the last 80 log lines, on the clipboard.

F7 opens/closes the restored `reSOT Options` overlay (demo and retail);
Esc or its X button also closes it. Expand Graphics or Controls to edit
settings. Double-click a binding to change it, right-click to clear it;
scroll to reach the remaining actions. The overlay captures game input
while open. F6 remains assigned to diagnostics; while options are open,
the options surface takes display priority. The same settings remain in
the game's main menu under `reSOT Options`:
 Graphics has the FPS limiter (30/60/120/None), VSync, post-processing
and internal rendering resolution (240p, 360p, 480p, 720p, 1080p, 1440p);
each choice cycles its value. Resolution changes from either menu or F7 preserve the current
fullscreen/window state; only F11 toggles it, including while F7 is open.
The INI key is `[Graphics] InternalResolutionPercent` (50/75/100/150/225/300,
default 100). The old `Resolution` window-size index is no longer used.
The labels assume a 480-line guest target; aspect ratio remains unchanged.
Movies and options retain display resolution; effects retain guest resolution.
 Controls has **Look sensitivity** (25–200% in steps of 25, default 100%),
also in F7, and the keyboard and joystick
bindings in three pages each; choosing a binding waits for the next key,
mouse button or joystick input (Esc cancels), and `Reset all bindings`
restores the defaults. A joystick binding is taken only after every pad
input has been released, so the press that opened the row is never bound;
from the game's menu, Back cancels it and an untouched one lapses after
8 seconds (pressing B to leave the page used to bind B). The game's own
timing can still limit FPS. Settings are saved in `resot-options.ini`
beside the executable, except in runs with `RECOMP_PAD_SCRIPT` or
`RECOMP_PAD_LIVE`: their scripted presses can reach these pages, so their
changes last only for that run.
Look sensitivity uses `[Controls] LookSensitivityPercent` and scales only
the right-stick camera values after the original deadzone. It applies to
keyboard/mouse and controller look, including full deflection above 100%;
the Android counterpart applies the same setting to touch look too.
F7 Graphics selects `Direct3D 11`, `D3D12 (native)` or `Vulkan (native)`
after restarting the game. The two native modes use SDL GPU's D3D12/Vulkan
command encoders, with DXIL/SPIR-V shaders, native GPU resources and GPU draws.
They do not create a D3D11 device or use D3D11On12/DXVK. NV2A vertex programs
currently run in the CPU interpreter, so performance differs from D3D11.

Run `./tools/setup-native-gpu.ps1` once before building, and again when
upgrading from a native build without retail queries. It downloads pinned,
SHA-256-checked SDL3/DXC SDKs and SDL3 sources, applies the published
`port/third_party/sdl-gpu-query/` additions, then builds SDL3.dll with native
D3D12/Vulkan occlusion queries. Visual Studio and CMake are build requirements.
The player executable needs that SDL3.dll, its licence and `SDL3-RESOT.txt`,
which identifies this altered SDL build. It needs no compiler or SDK.
Host shaders are embedded at build time; DXC is not a runtime requirement.
`tools/setup-vulkan.ps1` forwards to this installer. Existing DXVK files under
`renderers/vulkan/` are ignored and no longer packaged.

**Native backends are experimental on both demo and retail.** Retail now
uses actual hardware visibility queries, read asynchronously after submission
fences, with immutable reports that survive counter clears. An older SDL DLL
without the query extension or a device without the required query capability
produces an explicit D3D11 fallback. Demo does not enable retail's report rules.
Border-address sampling currently clamps to the texture edge; broader gameplay
validation remains pending. Stencil support is still incomplete, as on the
D3D11 renderer. NV2A vertex programs run on the GPU in `vs_uber`, a shader
compiled offline that interprets the program (no shader compiler at run
time); programs that write constants or read more than eight inputs still use
the CPU interpreter. `RESOT_NATIVE_CPU_VSH=1` puts every program back on the
CPU, for comparison.

`RESOT_RENDERER=d3d11`, `d3d12` or `vulkan` overrides the saved choice for one
run. D3D11 stays the default. The panel reports the actual active backend,
separately from the saved choice. Missing SDL3.dll, unsupported drivers or
initialization failure log a D3D11 fallback. `RESOT_GPU_DEBUG=1` enables SDL's
native GPU validation where available. Logs remain beside the executable.
Save data stays in
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

Both targets share the runtime in `port/third_party/xboxrecomp`; each has
its own build tree, `build/<target>`, which compiles it for that target
(`RESOT_RUNTIME_DEMO` or `RESOT_RUNTIME_RETAIL`). `-BuildOnly` rebuilds only
the target named. The lifted C goes to `source/<target>/gen` (ignored by
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
original 4:3 size; the in-game HUD moves out to the screen's sides
(`-Set @{RECOMP_HW_HUD_EDGE='0'}` keeps it in the 4:3 frame). The game opens as a borderless window over the whole
monitor; `-Windowed` opens a window instead, and F11 switches
between the two while it runs. `-NoVsync` stops waiting for the
display, `-NoAudio` leaves the sound hardware out.

Diagnostics go to `logs/<target>-err.txt`; previous runs are kept in
`logs/history/` so relaunching does not erase a crash. Retail uses separate
virtual reservations and committed pages by default; developers can compare
the previous allocator with `-Set @{RECOMP_EXT_VMA='0'}`. That comparison
path can exhaust the guest heap during gameplay.

Useful switches: `-Software` (CPU
rasteriser, for comparison), `-Seconds N`, `-SnapshotEvery S` (frame dumps in
`logs/fb`), `-Set @{RECOMP_HW_SCALE='3'}` (internal resolution multiple),
`-Set @{RECOMP_APU_WAV='out.wav'}` (record the sound). More in
[docs/RECOMP.md](../../docs/RECOMP.md).
