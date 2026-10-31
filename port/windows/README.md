# reSOT on Windows

Version 0.4.2 brings the HD menu logos, the retail name keyboard fix for the
mouse and the sand tank HUD fix. `RESOT_HD_LOGO=0` keeps the game's logo.
Version 0.4.1 carries the retail rendering, crash and loading-hang fixes.
The Android launcher's logs tip is not here: the Windows version plate is
not a button, the logs are files in `bin/logs`. Version 0.4.0 adds Special Load Map and Cheats (in reSOT Options), the
F7 Game behavior section and an HD menu font fitted onto the game's own sheet from the Atlantis MF face (Direct3D 12 and Vulkan
renderers; `RESOT_HD_FONT=0` keeps the original sheet, `RESOT_HD_FONT=sheet` only enlarges it). Version 0.3.4 stops a rejected graphics pipeline from closing the game (Mali
reports), releases a stuck D3D wait and brings the definitive logo and the
animated Prince of Persia title to the launcher. Version 0.3.3 ran the game and the GPU executor in parallel on retail, fixes
a retail mid-game freeze, reduces audio crackle and brings the new animated
logo. Version 0.3.2 added Reduced/Standard/Full graphics presets and a background
stable-release check with optional Update / Close buttons styled like the
launcher. The displayed version is 0.4.2. Offline/rate-limit errors are ignored.
No game files, logs or settings are uploaded; GitHub receives the normal HTTPS
request and reSOT version in its User-Agent. Update opens the official release
page, without downloading/installing an executable automatically.

Version 0.3.1 adds the extended retail health-bar alignment, literal-text
popup selection and mouse input for retail save-carousel arrows. The launcher
shows its current version at the upper left: reSOT and Prince of Persia use
Atlantis, and The Sands of Time keeps the normal badge font. The shared
renderer also includes the confirmed Android bridge/LowerBath corrections;
these exact Windows scene viewpoints have not been revisited.

Version 0.3.0 restores retail menu music (confirmed by the user), rebuilds the
demo's custom menu entries on returning to the title, and hides retail Xbox
Live in pause Options. Point at a native menu row with the mouse; left-click
selects it and right-click goes back. The normal controller/keyboard remains
available. Clicks are cancelled across page changes or loss of focus.


Version 0.2.0 bundles [the supplied Windows defaults](default-options.ini):
D3D11, unlimited FPS, VSync/glow/logs off, 720p (150%), post-processing Low
and look sensitivity 200%. A missing INI is created before the launcher;
existing preferences are retained. The release ZIP contains no separate INI;
the executable creates it on first launch from its embedded defaults.
No ISO or game-installation path is bundled.
It also includes the effect-quality and
logging repairs recorded in [validation](../../docs/VALIDATION.md).

The preceding 0.1.1 release includes the shared timer lock reduction and APU/
IRQL and Vulkan changes. Android display/lifecycle controls are host-specific;
Windows retains its full-size compositor. See [validation](../../docs/VALIDATION.md).

Vulkan specialization update (2026-10-20): the optional native Vulkan
renderer shares Android's cached constant combiner programs. Both target
builds and all 8 GPU/support tests pass; a 20-second retail Vulkan startup
check reaches the title. Initial shader compilation can still stall. See
[the study](../../docs/VULKAN-PERFORMANCE.md).

The Windows build: a 64-bit executable per target, Direct3D 11 (default),
experimental native D3D12/Vulkan for both targets, XInput and XAudio2.

The Android correction/optimization audit is in
[PLATFORM-PARITY.md](../../docs/PLATFORM-PARITY.md). Shared APU/IRQL fixes
and native renderer optimizations also compile into these executables;
Android-specific host changes and intentional backend differences are
listed there.

## Play (portable folder)

Double-click `sot-xbox-demo.exe` or `sot-xbox-retail.exe`. Keep that target's
`prince.bf`, `video/` and `sound/` beside the executable;
retail also needs `shaders.bin`, `MEDIA/`, `POP1/` and `POP2/`. Use your own
supported Xbox disc files, as listed in the main README. The executable
embeds its checked Xbox image during compilation, so `default.xbe` is needed
to build, not to play. Its embedded copy is also verified before starting.
Demo and retail need separate folders.

The executable opens on the reSOT screen: the reSOT logo, the Prince of Persia title
(its sand streaming and shedding grains), a link to the GitHub
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
Android keeps its FPS touch area available when the gameplay overlay is
hidden, but hides the artwork until the pad is visible and the FPS panel is
closed. The overlay toggle stays visible with the pad and fades out only
when the pad is hidden, retaining its hit area. Contextual Back/Confirm
buttons appear in menus and cutscenes. These
floating controls are Android-specific; Windows uses F5 for FPS, mouse or
controller menu input and right-click Back.
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
settings. **Game behavior** holds the game's own switches: Tutorials On/Off
(retail; saved as `[Game] Tutorials` and applied at every map load), Dagger
of time (Game / On / Off) and Cheats On/Off (the same switch as reSOT
Options > Cheats); neither of these two is saved. Double-click a binding to change it, right-click to clear it;
scroll to reach the remaining actions. The overlay captures game input
while open. F6 remains assigned to diagnostics; while options are open,
the options surface takes display priority. The same settings remain in
the game's main menu under `reSOT Options`:
 Graphics has the FPS limiter (30/60/120/None), VSync, post-processing
and internal rendering resolution (240p, 360p, 480p, 720p, 1080p, 1440p);
each choice cycles its value. Resolution changes from either menu or F7 preserve the current
fullscreen/window state; only F11 toggles it, including while F7 is open.
The INI key is `[Graphics] InternalResolutionPercent` (50/75/100/150/225/300,
default 150). The old `Resolution` window-size index is no longer used.
The labels assume a 480-line guest target; aspect ratio remains unchanged.
Movies and options retain display resolution; auxiliary effects follow effect quality.
 Controls has **Look sensitivity** (25–200% in steps of 25, default 200%),
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
They do not create a D3D11 device or use D3D11On12/DXVK. Supported NV2A vertex
programs run on the GPU; unsupported programs retain the CPU interpreter.

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
Retail white light-map borders and forming sand-tank alignment share the
Android corrections and pass host GPU readbacks; broader gameplay
validation remains pending. Stencil support is still incomplete, as on the
D3D11 renderer. NV2A vertex programs run on the GPU in `vs_uber`, a shader
compiled offline that interprets the program (no shader compiler at run
time); programs that write constants or read more than eight inputs still use
the CPU interpreter. `RESOT_NATIVE_CPU_VSH=1` puts every program back on the
CPU, for comparison. `RESOT_ASYNC_PIPELINES=1` compiles new D3D12/Vulkan
pipelines on background threads and skips their draws until ready, as
Android does by default (see port/android/README.md); off on Windows, where
no compile stall has been measured.

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
the target named. The lifted C goes to `source/<target>/gen` (published with
the project). The executables
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

### Graphics preset (v0.3.2)

`[Graphics] GraphicsPreset=0/1/2/3` selects debug Off / Reduced / Standard /
Full. New installations default to Standard. Reduced uses 50% auxiliary-effect
width/height and skips independently recognized shadow casters and their
receivers; Standard uses the former High quality without final texture glow;
Full adds that glow. Display/history buffers, tiny bloom levels, HUD, scene
depth and game timing remain protected. Reduced does not promise an FPS gain
on CPU-bound scenes. Unknown effects/materials are not arbitrarily removed.

The normal in-game menu cycles Reduced, Standard, Full. Debug Off is retained
only through `GraphicsPreset=0` and Windows F7. If loaded, the normal menu
shows Debug Off until the user changes the preset. The separate Texture glow
effect option is gone. Legacy PostProcessingQuality High/Mid migrate to
Standard, Low to Reduced, Off stays Off; a legacy enabled glow selects Full
unless Off was explicitly selected. New GraphicsPreset values take priority.
Saving removes the obsolete keys. See [effect coverage](../../docs/POST-PROCESSING.md).

F11 synchronizes the adopted SDL window's border and resize flags with Win32
when switching native Vulkan/D3D12 between fullscreen and a movable, resizable
window. Console logs read the existing session files live, including startup,
without redirecting game output. The host supplies the exact file paths it
opened; external disk redirects are resolved from the actual stdout/stderr
FILE descriptors. A visible console header reports each source or an open
error. Existing INI settings are retained.

The F7-only `Console logs` switch is saved as `[Diagnostics] ConsoleLogs=1`.
Error messages are red; warnings are yellow. The original file logs remain
in `logs/<target>-err.txt` and `logs/<target>-out.txt`.


Vulkan uses dedicated translated vertex programs and optimized complex fragment
programs for demo and retail. The host compiler (glslang/SPIRV-Tools) is built
from pinned sources with `tools/setup-shader-compiler.ps1`, also called by the
platform dependency setup script. Players need no separate shader compiler.
Optimized modules are stored in `shadercache/`; Vulkan's driver pipeline cache
is separate. Compilation uses background workers by default on both hosts,
with reference pipelines available during compilation. First-use draw skips
can still occur until a pipeline is ready. `RESOT_NATIVE_TRANSLATE=0` and
`RESOT_NATIVE_SPECIALIZE=0` are developer comparison switches;
`RESOT_ASYNC_PIPELINES=0` forces synchronous compilation. See
[the shader study](../../docs/VULKAN-PERFORMANCE.md) and
[validation](../../docs/VALIDATION.md) for scope and observed results.

## Developer packet performance comparisons

The shared executor batches only pure shader/constant/index/inline payloads.
`RESOT_PB_PAYLOAD_BATCH=0` selects scalar dispatch. Surveys, verbose method
logging and active frame traces retain the original per-word path.

For same-session developer comparisons, `RESOT_PB_PAYLOAD_CONTROL` may point
to an ASCII file containing one digit: 0 scalar/query reuse on, 1 batched/reuse
on, 2 scalar/reuse off, 3 batched/reuse off. It is polled at the slow diagnostic
cadence; wait at least 15 seconds after changing it before measuring. Production
defaults are batched uploads and Vulkan query reuse off; D3D12 keeps reuse.
The log reports mode and cumulative batched words/packets. Compare the same
scene, camera, settings, draw counts and warm caches; discard mode transitions.

On Android, creating `pb-payload-control` in the app's external files directory
before game startup enables this optional control. Remove it after testing.
Windows uses the environment path directly (e.g. the run script's `-Set`).
This is diagnostic-only; no launcher/options UI or game defaults are changed.


Vulkan reuses input geometry already uploaded into its vertex/index rings
(2026-10-22), shared with Android. It compares the complete source data,
indices and input state before each reuse. A changed/cycled range uses the
normal path. Snapshot storage is bounded to 16 MiB; inline and oversized
inputs remain uncached. Draws, constants, visibility and graphics quality stay
unchanged. RESOT_NATIVE_GEOMETRY_CACHE=0 disables this developer feature.
RESOT_NATIVE_GEOMETRY_CONTROL may point to an ASCII 0/1 file polled every five
seconds for comparisons. Android enables this optional control only when
geometry-cache-control exists in the app files folder at game startup.
Compare identical views with warm caches; counters alone do not establish FPS.
See [validation](../../docs/VALIDATION.md) for the installed build's limits.


Shadow follow-up (2026-10-22): known projected character shadows are retained
even when screen post-processing is Off, at that setting's reduced map size.
RGB565 targets sample with implicit alpha one and known projected receivers
are bounded to the shadow footprint. Shared Windows/Android builds compile;
visual correctness remains for the user's gameplay check.

Android-only audio queue recovery and thermal FPS budgeting use SDL audio and
PowerManager respectively; Windows keeps its XAudio2 queue and user-selected
frame cap. The Android overlay icon changes do not alter Windows input mappings.

Graphics test build (2026-10-24): Vulkan requests only used device features.
The shared shadow filter accepts affine Q=0 coordinates; GPU readbacks pass,
but demo/retail character shadows still need gameplay confirmation. Vulkan
offers reference GPU shaders as an explicit developer override;
`RESOT_NATIVE_COMPAT=1` forces that mode and `0` restores optimized shaders.
Geometry caching remains enabled. Device corruption and black-frame reports
are still pending phone validation; this fallback may reduce performance.
Retail devices without precise occlusion use actual conservative hardware
counts, which can change light intensity. Android uses the same implementation
and an optional app-data `gpu-compatibility` file for developer A/B checks.

Samsung/Poco follow-up: Mali/Immortalis and Adreno 640 now provisionally use
CPU vertex transformation with compact fragment pipelines, avoiding duplicate
large reference compilations. This is shared by Windows Vulkan and Android
Vulkan. The prior reference-only default did not fix the Poco corruption;
Samsung's compact GPU shaders compiled but lost the Vulkan device during
execution. The new candidate is an isolation test, not a confirmed fix.
RESOT_NATIVE_CPU_VSH=0/1 explicitly selects GPU/CPU vertices. Other GPUs,
including Adreno 735, retain their existing GPU path and geometry reuse.
New startup/pipeline diagnostics identify resource, translator, driver and
submission progress; an affected Mali run is still needed to confirm whether
this resolves either device report. Logs also identify driver/API versions.

Shadow regression follow-up: commit `afc13cc` removed the depth clamp for
all draws, including depthless Z16 character-shadow maps. Their traced screen
depth exceeds the declared Z16 range in both games. Restore the old clamp
only for known RGB565 256x256 caster passes with no depth buffer/test or
blending, on D3D11, D3D12 and Vulkan. Scene/receiver depth and the fix for
objects showing through remain unchanged. GPU caster and eye-crossing tests
pass; updated gameplay shadows still need confirmation.

The user subsequently confirms the shadow issue resolved. Broader gameplay
and GPU coverage remain limited to the reported tests.

The shared SDL patch also corrects zero-sized rectangular mip extents in
Vulkan/D3D12 and common blit source UV dimensions. Synthetic GPU readback
reproduced corrupt final mip contents before the correction; all tested levels
now pass on both backends. D3D11's separate mip path is unchanged. Android
Poco/Samsung validation of this correction is still pending.

The new tap-version-to-share diagnostic ZIP is Android-only: it integrates
Android's native sharesheet, temporary URI grants and app lifecycle. Windows
keeps the existing logs/ and logs/history/ files and run.ps1 capture workflow;
its version badge remains a display label. No Windows launcher layout or
wording changes accompany this platform-specific sharing action.

The Android publisher-integrity check is APK-specific. Windows has the same
optional release-notice behavior and launcher styling; it does not compare
Windows executables against Android signing certificates. Checks run only
when the launcher is shown, not during launcher-skipping scripted game runs.
