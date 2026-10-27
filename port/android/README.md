# reSOT for Android

After 0.3.4: the Vulkan shaders no longer declare the SPIR-V extensions
`SPV_GOOGLE_hlsl_functionality1` / `SPV_GOOGLE_user_type`, which older Mali
drivers reject at the first pipeline (closing the game after Start Game,
GitHub #8, #9). Not yet confirmed on a Mali device. The Windows Vulkan
renderer uses the same shaders, so `port/windows` needs no separate change.

Version 0.4.0 adds Special Load Map and Cheats (in reSOT Options, as on
Windows) and the same HD menu font. Version 0.3.4 stops a rejected graphics pipeline from closing the game (Mali
reports), releases a stuck D3D wait and brings the definitive logo and the
animated Prince of Persia title to the launcher. Version 0.3.3 ran the game and the GPU executor in parallel on retail, fixes
a retail mid-game freeze, reduces audio crackle and brings the new animated
logo. Version 0.3.2 added Reduced/Standard/Full graphics presets and a background
stable-release check with optional Update / Close buttons styled like the
launcher. The displayed version is 0.4.0. Offline/rate-limit errors are ignored.
No game files, logs or settings are uploaded; GitHub receives the normal HTTPS
request and reSOT version in its User-Agent. Update opens the official release
page, without downloading/installing an executable automatically.

One app, **com.fulger.resot**, for both Xbox builds of Prince of Persia: The
Sands of Time: the E3 2003 demo and the NTSC retail game. arm64-v8a, Android
10 (API 29) or later, a Vulkan 1.0 GPU. Rendering is the native SDL GPU
encoder on Vulkan, the same code as the Windows build's optional Vulkan
renderer (`port/third_party/xboxrecomp/src/kernel/nv2a_hw_native.inc`); there
is no Direct3D 11 on Android.

**State: device validation in progress.** User logs show both games running
on Android. A new Sand Birds crash (2026-10-20, 11:09) persisted after the
dispatch-timeout fix: the APU could overwrite a pending idle-voice trap's
handle before DirectSound read it. Trap latching and VP scan ordering are
corrected; synthetic APU and IRQL tests pass separately for both targets.
Retail now also restores callback lock ownership and defers callbacks while
dispatch is owned, without timeout bypasses. User-reported loss of all audio
during the Extra Features making-of was not reproduced in a baseline retest.
The corrected APK is installed: the user confirms audio persists through
the video and return to the menu, and the Sand Birds retest records about
260 s of audio followed by a regular exit without a crash. The user confirms
the two fixes; broader gameplay/audio validation remains incomplete.
See the latest audio entry in `docs/VALIDATION.md`. The user
confirms system UI responsiveness after the scheduling changes, but demo
menu performance still fluctuates at 40–57 FPS. Renewed ADB tests measured
the subsequent retail performance build at about 29–31 FPS at 480p and
36–38 FPS at 360p in the title screen. Save/load persistence and sustained 60 FPS
remain under validation; see [VALIDATION.md](../../docs/VALIDATION.md).

## What is in the APK

Version 0.3.1 (versionCode 6) aligns the upgraded retail health-bar outline
(confirmed by the user), recognizes literal-text popup choices such as
Yes/No, and supports tapping both retail save-carousel arrows. The launcher
shows the installed package version at the upper left, reSOT and Prince of
Persia in Atlantis, and The Sands of Time in the normal badge font. The demo
bridge and retail LowerBath light corrections are confirmed on the test phone.

Version 0.3.0 (Android versionCode 5) includes the original retail music-stream
completion path, the demo menu lifecycle correction and removal of retail's
pause Xbox Live entry. Tap native menu rows directly; swipe right to go back
or use Android Back. The pad overlay hides automatically in menus, Bink movies
and camera scenes with cinematic bars, then restores the player's gameplay
visibility preference. The FPS button is visible with the pad while its panel
is closed. It becomes invisible when the pad is hidden or the panel is open;
its usual touch area remains active to open/close the panel. The top-centre
eye toggle stays visible with the pad and fades to zero opacity over 450 ms
only when the pad is hidden; its hit area stays active. Tap that same spot
to reopen the full pad, including during menus or cutscenes. This override
lasts until the next scene-context change and does not replace the saved
gameplay preference.

While the full pad is hidden in a menu or cutscene, matching blue/gold Back
and right-arrow Confirm buttons appear at the bottom left and right. They
send the normal B/A actions; Confirm also skips Bink playback. They disappear
when the full pad is reopened and are not shown during ordinary gameplay.
Held input is cleared on context changes, cancellation and backgrounding.
Physical pads and keyboard remain available. The final overlay build and
host Java policy tests pass; device rendering/touch and music listening after
the streaming restoration remain unverified.

These floating controls are Android-specific. Windows uses its existing
mouse/controller controls, right-click Back and F5 FPS shortcut.

Version 0.2.0 (Android versionCode 4) bundles
[the supplied Android defaults](default-options.ini): Vulkan, unlimited FPS,
VSync/glow/logs off, 480p (100%), post-processing Low and look sensitivity 200%.
The launcher or direct game startup creates a missing INI from the packaged
asset; an existing INI is retained. The effect-quality and logging repairs are
included; no further gameplay tests were run after the user's confirmation.

The preceding 0.1.1 release keeps the Vulkan specialization and
adds power follow-ups: display refresh follows the selected FPS cap,
inactive timer scans use fewer locks, and eligible frames use an exact
internal-size snapshot with one final upscale. Movies, native panels and
letterboxing retain the general compositor. Windows retains its full-size
compositor because this optimization targets mobile bandwidth. Thermal
improvement is not established; background/resume testing remains partial.
The user reports that the intermittent black-on-return issue did not recur
in the final retest. See [validation](../../docs/VALIDATION.md).

Vulkan specialization update (2026-10-20): complex pixel combiners now use
cached SPIR-V variants alongside the simple shaders. On SM8635, retail's
480p title improved from about 31 to 59 FPS. Demo opening scenes include
54–59 FPS windows, with later 46–51 FPS windows. The user reports about 60
with drops to 49 and accepts this result for now. First-use shader stalls
remain; full-game sustained 60 FPS is unverified. The APK is installed; see
[the study](../../docs/VULKAN-PERFORMANCE.md).

| Library | Contents |
| --- | --- |
| `libresot_demo.so` | `source/xbox-demo/gen` (lifted from the user's demo XBE), the shared runtime built with `RESOT_RUNTIME_DEMO`, the Android host (`src/`) |
| `libresot_retail.so` | the same for `xbox-retail` with `RESOT_RUNTIME_RETAIL` |
| `libSDL3.so` | SDL 3.4.18 with reSOT's Vulkan occlusion-query extension (`port/third_party/sdl-gpu-query`; the retail game needs it) |
| `libresot_launcher.so` | demo/retail detection by `default.xbe` SHA-256 |

No game data is packaged. The lifted C is built from `source/<target>/gen`,
which `tools/recomp.ps1` produces from the user's own XBEs; like the Windows
executables, the APK is a local build for the person who owns the discs.

For developer frame captures, create `frame-trace-enable` in the app's
external files folder before starting the game, then create `frame-trace.flag`
there when the desired scene is visible. The existing frame tracer records
one complete frame in `logs/xbox-retail-err.txt` (or the demo log). Remove
both files and restart to disable capture and its per-frame file checks.
Windows provides the same tracer through `RECOMP_FRAME_TRACE`.

## Game files

The launcher keeps the games in the app's external files folder:

```text
Android/data/com.fulger.resot/files/
  xbox-demo/      default.xbe  prince.bf  video/  sound/  ...
  xbox-retail/    default.xbe  prince.bf  shaders.bin  VIDEO/  SOUND/  ...
  saves/<target>/ the games' saves (kept when a game is reinstalled)
  logs/           <target>-err.txt, <target>-out.txt, history/
  resot-options.ini
```

**Install from ISO** asks for the disc image with the system file picker,
extracts the whole disc except `$SystemUpdate` (what `extract-xiso -x -s`
does on Windows; Cancel stops it), tells the demo from the retail game by
`default.xbe` and moves it to `xbox-demo` or `xbox-retail`. The disc is read
in Java (`XisoExtractor.java`, the XDVDFS format as extract-xiso reads it,
plain and whole-disc images) straight from the file descriptor the picker
grants: Android refuses to reopen that document by path (`/proc/self/fd/N`:
permission denied), which is how extract-xiso opens its input. Installing the other disc as well leaves both installed. With
no game installed the picker opens by itself, as the Windows launcher does.
The ISO must be a local, seekable file (a cloud document that is not on the
device cannot be read).

An extracted disc can also be copied there from a computer; any folder in
`files/` with game files is found. File and folder names are matched without
regard to case (the retail disc has `VIDEO/` and `SOUND/`, the game asks in
other spellings), as on Windows, also on devices whose storage is
case-sensitive. Unlike Windows, **`default.xbe` must be in
the game folder**: the Android libraries do not embed it, read it from there
and refuse it unless its SHA-256 is the one in `source/<target>/target.h`.

## Launcher

The title screen is the Windows launcher's (`port/windows/src/launcher.c`),
redrawn with Android's canvas in `LauncherView.java`: the same layout, the
night-blue ground with its rosettes and eight-point stars, gold rules and
twin diamonds, gold hexagonal buttons, logo and Prince of Persia title with the same animated sand, Atlantis MF face (when
`port/windows/res/AtlantisMF.ttf` is present; see
[LICENSING.md](../../docs/LICENSING.md)), drifting sand, Start Demo / Start
Game with what is installed under each, Install from ISO and the extraction
progress. Touch, a controller (d-pad, A, B) or a keyboard drives it.

Unlike the fixed Windows window, it fills the whole screen: the system bars
are hidden (a swipe from an edge shows them), it draws under a display
cutout, and launcher.c's 1000 x 640 plane is scaled to the screen's height and
widened to its shape, so the ground, the gold rules and the footer reach the
edges of a 20:9 phone while the middle column stays centred; the footer
links and the close button keep clear of the cutout. The Windows window's
one-pixel gold edge is left out. **Keep the two launchers alike**: a change
to one belongs in the other.

## Controls

A Bluetooth or USB controller plays as the Xbox pad (SDL3 gamepad mapping).
Without one, an overlay is drawn over the game (`TouchControls.java`):

| Touch | Xbox | Prince of Persia |
| --- | --- | --- |
| bottom left: gold-ringed blue stick, follows the thumb | left stick | move |
| right side: drag anywhere free | right stick | camera |
| upper right of the action arc: jumping figure | A | jump |
| | B | cancel / drop |
| bottom of the action arc: sword | X | sword |
| | Y | dagger |
| hourglass | L trigger | rewind (the Sands) |
| shield, inside the action arc | R trigger | special action |
| | black / white | alternate view / camera look |
| | right stick click | reset camera |
| | START / BACK, d-pad | pause, back, menus |
| top centre (eye) | | tap: show/hide the overlay; hold: move the controls, then SAVE (RESET restores) |
| top left FPS | | the FPS / current WOW / active Renderer panel (F5 on Windows) |

The touch artwork uses original Canvas medallions: engraved gold rims,
blue centres and blue pressed highlights, inspired by the supplied Warrior
Within mobile references with Sands of Time colours. The default layout puts
movement at bottom left, pause/back beside the central overlay toggle, rewind at upper right and the main actions in an arc
at bottom right. All Xbox mappings remain available. The gold layout uses
separate saved position keys so older blue-layout coordinates do not override
the new defaults; hold the eye to move controls and SAVE to retain them.
The upper-left corner is reserved for the FPS toggle and the game HUD;
pause, back and rewind use new position keys to apply this clearance on upgrade.
Windows keeps keyboard/controller input because it has no mobile touch overlay.
Device appearance and multi-touch gameplay still require validation.

The overlay hides itself when a controller is connected. The game's rumble
drives the controller, or the phone's vibrator. The Android back key is B.
A hardware keyboard and mouse work with the Windows layout (WASD, Space,
mouse buttons...). The game's own reSOT Options pages (FPS limit, VSync,
post-processing, keyboard and joystick bindings) work as on Windows and are
saved in `resot-options.ini`. On Android, the resolution entry cycles the
**internal rendering resolution**, without resizing the fullscreen surface:
240p (0.5x), 360p (0.75x), 480p (1x), 720p (1.5x), 1080p (2.25x), and
1440p (3x), relative to the game's 480-line view. Width follows the aspect
ratio. The default is now **480p/1x** (previous Android rendering used 2x).
The INI key is `[Graphics] InternalResolutionPercent=100` (allowed values:
50, 75, 100, 150, 225, 300). A change takes effect when the next guest render
target is used. Auxiliary targets follow the effect-quality budget, movies
retain their decoded size, and final presentation still fills the device.
Lower internal resolutions reduce GPU pixel work only.
The retail renderer shares the white light-map border correction, forming
sand-tank HUD alignment and bulk P8/ARGB upload conversion with Windows
(2026-10-19). Vulkan caches pipeline lookups and cycles changed 2D images.
The APK builds and host Vulkan GPU tests pass; device gameplay after
these changes remains under validation. See `docs/VALIDATION.md`.
The native renderer for both targets now also uses smaller exact shaders for common
single-stage combiners, with separate opaque and alpha-tested entries.
On the connected SM8635 phone, the retail main menu at 480p improved from
16.5-17.1 to about 24-25 FPS (2026-10-19); gameplay and other devices still
need validation. Complex combiners and cube maps retain the full shader.
The demo independently uses the same eligible states (device frame trace,
2026-10-19). Enabling this path raised its 480p title/menu from about
27.5 FPS to 62.9–63.1 FPS in steady five-second windows on the same phone;
the first playable scenes still included 33.8–53.3 FPS windows. These are
window averages, not a sustained 60 FPS gameplay claim. Bulk P8/ARGB
conversion and cycling changed 2D textures are enabled for the demo too.
Vertex operand/swizzle reductions, pipeline caching, pipeline lookup,
staging-buffer reuse and GPU vertex programs were already shared.

The 2026-10-20 performance build packs a GPU vertex program's referenced
inputs into a 16/32/64/128-byte vertex, rather than always transferring eight
float4 values (128 bytes). Attribute conversion and the GPU program remain
the same. Unused input locations alias an existing slot and are never read
by that packed program. Unchanged viewport, scissor and blend constants are
also retained within each render pass. These changes apply to demo and
retail and to Windows' native Vulkan encoder; D3D12 retains its fixed input
pitch because SDL 3.4.18 caches vertex-buffer views across pipeline changes.
The state-command reduction applies to both native encoders; D3D11 is unchanged.
No FPS improvement is claimed without a device measurement.

The retail small-register vertex path also removes writes to unused outputs
and unread temporaries, disabling MAC/ILU calculations with no remaining
destination. Address-register updates and paired ILU destinations are preserved.
This operates on runtime program copies, with the generic shader as fallback;
the demo retains its existing shader selection. Host Vulkan/D3D12 pixel
comparisons pass; power consumption is not measured.

ADB retail checks later on 2026-10-20 found about 29-31 FPS at 480p,
36-38 FPS in the 360p title windows, and up to 48-49 FPS at 240p
(the 240p run used the preceding APK). These are animated title-screen window
averages, with uncontrolled temperatures, not sustained gameplay results.
The final APK removes empty instructions from eligible retail vertex programs
and keeps original/remapped program snapshots distinct. Its 480p run showed
no clear FPS gain from those changes. The `0101_Porte` opening cutscene was
also reached. See the validation log for settings and limits.

Android runtime workers start at normal Linux priority instead of inheriting
very high priorities observed in the device samples. The frame limiter sleeps
through its final remainder instead of polling. Native buffers are 16 MB for
vertices and 2 MB for indices for both mobile targets; Windows D3D11 retains
its larger demo reuse ring. SDL's standard two frames in flight is restored
after the one-frame responsiveness experiment. Windows does not need Android's
thread-priority normalization or mobile memory budget.

Tap **FPS** at the top left to show the panel. Its button becomes invisible
while the panel is open or the touch pad is hidden; tapping the same spot
still opens/closes the panel. The icon returns when the pad is visible and
the panel is closed. Windows uses F5 and
has no corresponding touch button.
**Game behavior** (the Windows F7 panel's Tutorials, Dagger of time and
Cheats) has no Android panel yet: this host keeps `[Game] Tutorials` in the
INI and applies it (retail), and leaves the dagger as the game has it. Cheats and Special Load Map are in reSOT Options, in the
game's own menus, as on Windows.
**Look sensitivity** is in **reSOT Options → Controls** in both games:
25–200% in steps of 25, default 200%, with 100% retaining the original speed. It applies
to controller, keyboard/mouse and the touch camera, after the game's original
stick deadzone; movement sensitivity is unchanged. The setting is stored as
`[Controls] LookSensitivityPercent`, and the same option is in Windows F7.
Android now selects Hor+ from the fullscreen drawable's width/height before
starting either game (for example, a 2400x1080 drawable uses 20:9). Projection
and culling widen together; the existing HUD policy keeps its proportions.
The selected dimensions and aspect are logged at startup. An explicit
`RECOMP_HW_ASPECT` override takes precedence. Windows keeps its 16:9 default;
this automatic choice follows the Android device's drawable at game startup.
Windows now exposes the same internal resolution choices in the main menu
and F7; F11 alone changes fullscreen/window mode.
Both hosts default to `PostProcessingQuality=1` (Low) in `[Graphics]`. Both default to `TextureGlowEffect=0`. Existing
saved values take precedence; `PostProcessing` is an obsolete key.
Retail's option-label refresh now reads its text-object metadata on Android;
previously that metadata probe was implemented only on Windows, so values
appeared stale until the page reopened. Device validation of this correction
is pending.

The shared native renderer services live movie overlays at the presentation
thread's cadence instead of the generic 100-ms idle repaint interval. NV2A
vertex programs now run on the GPU (`vs_uber`, compiled offline to SPIR-V, so
no shader compiler is needed on the phone); in earlier device logs the CPU
interpreter took 17–49 ms of every frame. With that APK the phone then waited
31–90 ms a frame for the GPU: the vertex and pixel shaders indexed local
register arrays, which Adreno keeps in slow private memory. The named-register
rewrite then compiled so slowly on Adreno that the screen stayed black for a
long time after the intro movies. Android therefore now runs vertex programs
on the CPU spread over worker threads (`[VSH] CPU vertex programs: N worker
thread(s)` in the log; on Windows, 6 threads cut the interpreter from about
12 to 4.3 ms a frame), with the original pixel shader (`ps_main_arr`).
Windows keeps the GPU interpreter. The phone then showed two more costs: up
to a second to create each pipeline of the main pixel shader, on every run,
and worker threads woken through semaphores costing more than they saved.
Pipelines are now kept in a `VkPipelineCache` saved as `vulkan-pipelines.bin`
in the game's data folder; with it the driver compiled the main pixel shader
once (320 ms) and reused it for every later pipeline (0.3-0.5 ms), even on
the first run. Spinning worker threads then stalled the renderer, so Android
is back on the same path as Windows: vertex programs on the GPU (`vs_uber`),
no vertex worker threads, and pixels sampling only the textures a draw binds.
Device frame rate with this APK is not yet validated; `[HW native] pipeline …
created in … ms` lines show driver compile times. The startup log line `[HW] active renderer`
says whether programs run on the GPU or the CPU. Native timing logs
distinguish movie composition Hz from guest frame rate.

The cache does not cover a state combination the phone has never seen: in
2026-10-20 retail logs a new pipeline of the main pixel shader still took
0.15–1.8 s, and entering an area that needed several of them froze the game
for seconds (12 s in total in one run). Android therefore compiles the
pipelines of guest draws on two background threads (`resot-pso`); a draw
whose pipeline is not ready yet is skipped, so a new material can appear a
few frames late instead of the game stopping. The same threads write
`vulkan-pipelines.bin`. The log says `[HW native] pipeline compilation:
background …` at start-up, marks such creations `(background)`, and reports
`background pipelines: N compiled, M guest draws skipped` every 5 s.
`RESOT_ASYNC_PIPELINES=0` restores compilation on the renderer thread.
Windows keeps compiling on the renderer thread unless `RESOT_ASYNC_PIPELINES=1`.

## Custom Adreno Vulkan drivers

The Android launcher has **GPU driver…** → **Install driver ZIP…**, plus
**Use system driver** and **Use installed**. Import a driver package compatible
with your GPU and Android version (for example, a suitable Turnip package for
Adreno 750). The ZIP must contain `meta.json` at its root, with `name`,
`libraryName` and optionally `minApi`, and the named arm64 `.so`. reSOT does
not download or include a custom GPU driver and does not install anything
into Android's system driver folders. Changes apply on the next game start.

The importer validates paths, duplicate entries, size/entry limits and ELF
architecture, then stores the package in app-private internal storage.
Previous imported directories are retained because a running game may still
have libraries mapped from them. Selecting the system driver leaves the
installed package available for later comparison.

The app uses [libadrenotools](https://github.com/bylaws/libadrenotools), pinned
to `8fae8ce254dfc1344527e05301e43f37dea2df80`, with liblinkernsbypass pinned
by its submodule. SDL's Android Vulkan entry-point lookup is patched by
`tools/patch-sdl-android-driver.py` to use the isolated loader; the hooks are
extracted into `nativeLibraryDir` (`useLegacyPackaging=true`). A failed loader
or device-enumeration probe leaves the system loader selected. A driver may
still fail later or fall back internally; check `[DRIVER]` in the game log and
adrenotools messages in logcat. No custom-driver speedup has been measured here.

This driver selector exists only on Android, as requested; the Windows
launcher has no Android driver-loading facility.

## Build

Requirements: Windows 10/11 x64 with the Windows build's prerequisites
([port/windows/README.md](../windows/README.md)) and lifted sources for the
targets (`tools/recomp.ps1 -Target xbox-demo` / `xbox-retail`), Android SDK
with platform 36, NDK **29.0.14206865** and CMake **3.30.3**, a JDK 17 or
later, Python 3.

```powershell
.\tools\build-android.ps1            # bin/reSOT-android.apk (release, signed with the debug key)
.\tools\build-android.ps1 -Debug     # bin/reSOT-android-debug.apk
.\tools\build-android.ps1 -Install   # and adb install it
```

`tools/setup-android.ps1` (run by the build) puts the pinned SDL source (with
`tools/patch-sdl-gpu-query.py` applied), DXC and Gradle 9.1.0 in
`build/deps`, checked by SHA-256. The host shaders are compiled from the same
HLSL as on Windows (`tools/build-native-shaders.py`, SPIR-V). The release
APK is signed with this computer's debug key so it installs; sign it with a
release key before handing it to anyone.

## How the Android host differs from Windows

| Windows (`port/windows/src`) | Android (`port/android/src`) |
| --- | --- |
| `main.c`: WinMain, embedded XBE, vectored exception handler | `main_android.c`: SDL_main, XBE read from the game folder and hashed, SIGSEGV handler; the game on a 64 MB-stack thread |
| x86-64 MMIO decoder (`mmio_decode.h`) | the AArch64 decoder in the same header: LDR/STR forms, LDP/STP, LDAR/STLR |
| D3D11 by default, D3D12/Vulkan optional | Vulkan only, the same native encoder |
| `xinput_device.c` (XInput, keyboard) | `input_android.c` (SDL3 gamepads, keyboard, touch) |
| `apu_xaudio2.c` | `audio_android.c` (SDL3 audio stream, same queue policy) |
| `options.c` (F7 panel, INI via Win32) | `options_android.c` (same settings and bindings, no panel) |
| `launcher.c` (GDI), extract-xiso in a child process | `LauncherActivity.java`, `LauncherView.java`, `XisoExtractor.java` |
| `diag.c` (F6), thread dump, profiler | not ported |

The guest's 4 GB address space is reserved in one piece (PROT_NONE) before
anything is mapped into it, because an Android process has the ART heap and
its libraries in places a fixed Xbox aperture could otherwise hit.

Retail saves and profiles are ordinary files under
`Android/data/com.fulger.resot/files/saves/xbox-retail/UDATA/5553001d/`.
Title data lives in the adjacent `TDATA` folder. On the first launch after
updating, files from the installed game's `UDATA`/`TDATA` and the old
`UserData`/`TitleData` folders are copied when missing; originals and newer
destination files are preserved. No reinstall or data clearing is needed.

Synthetic sparse `Partition0.img` through `Partition5.img` are now kept in
`saves/xbox-retail/.devices/` for bare Xbox disk requests. They contain boot
and utility-device compatibility data, not the profile/save folders.
Old root-level images are retained; they are not migrated or used as save files.
The raw partition table and utility/cache devices are required during XAPI
startup. Directory opens used to query a partition's free space use the image's
parent directory; byte reads still use the image. Random-access writes, relative directory opens and flush error reporting
were corrected for Android retail. Host regression tests pass; save/create,
close-app, reopen and load must still be checked on the phone. The demo's
storage path has not received this retail-specific change.

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

### On-screen console logs

Only the INI can enable the Android log overlay; there is no Android menu
switch. In `Android/data/com.fulger.resot/files/resot-options.ini`, set:

```ini
[Diagnostics]
ConsoleLogs=1
```

Restart the game after changing this value. `ConsoleLogs=0` disables it.
The overlay reads `logs/xbox-demo-err.txt` and `logs/xbox-demo-out.txt`, or
the retail equivalents, inside the same app files folder. Errors are red,
warnings yellow; recent rows scroll and fade. Normal file logging is retained.


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
(2026-10-22), shared with Windows Vulkan. It compares the complete source data,
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

Graphics test build (2026-10-24): the shared shadow footprint filter now
honors the sampler's affine Q=0 convention. Synthetic GPU readbacks pass;
visible character shadows still need confirmation in demo and retail.
Vulkan initialization requests only features actually used by reSOT. Retail
also accepts ordinary hardware occlusion counts when precise counts are
unavailable; light intensity can differ on these devices.

Adreno 640 and Mali/Immortalis provisionally compute Xbox vertex programs on
the CPU while retaining Vulkan rasterization and compact fragment shaders.
New Samsung logs show compact shaders compile and submit, then report
VK_ERROR_DEVICE_LOST. New Poco logs confirm reference-only shaders did not
fix the colored corruption and ran slowly. The subsequent CPU-vertex test
also leaves the Poco corruption present; Samsung confirmation is pending.
CPU vertex execution may reduce performance. Raw-geometry reuse applies to the GPU-vertex path, which
remains unchanged on other GPUs (including the user's working Adreno 735).
The reduced Vulkan feature contract and shadow/scene-depth fixes remain.
Logs print the GPU, policy, first-frame resource stages, pipeline start/end
and pending waits. For developer A/B checks, place an ASCII `gpu-compatibility` file in
the app's data folder (`Android/data/com.fulger.resot/files/` with the normal
launcher): `1` forces reference shaders, `0` restores optimized shaders;
remove it to restore automatic selection. Restart the game after changes.
The shared Windows Vulkan encoder supports the same selection through
`RESOT_NATIVE_COMPAT=1` or `0`.
Developer override `RESOT_NATIVE_CPU_VSH=0` restores GPU vertices, and `1`
forces CPU vertices. Full reference-shader mode is now explicit-only, rather
than a device default. Logs additionally report driver name/version/info and
the physical-device Vulkan API version when available.

Shadow regression follow-up: the user still reports absent Vulkan/D3D12
shadows and angle-dependent D3D11 shadows. Commit `afc13cc` removed the
screen-depth clamp globally. Both games' traced depthless shadow casters
declare Z16 yet emit depth far outside its range, so hardware clipping erased
the silhouettes. The old clamp is restored only for the known RGB565 256x256
caster passes without a depth buffer/test or blending. Scene and receiver
depth remain unchanged, retaining the fix for geometry showing through.
GPU readbacks reproduce an empty map before and restored coverage after;
the eye-crossing scene regression still passes. Gameplay confirmation pending.

The user subsequently confirms the shadow problem resolved. On the reported
Samsung SM-A175F (MediaTek MT6789, Mali-G57 MC2, Android 16), the earlier
archive showed movies followed by a loading stall without a recorded crash.
The subsequent compact-shader test completes guest pipeline compilation and
submission, then reports Vulkan device loss and aborts. The current
CPU-vertex candidate still needs device confirmation; updated Samsung retail
behavior has not been established.

### Sharing diagnostics

Prior Poco X3 Pro isolation logs showed corruption with CPU vertex execution,
so that isolation did not resolve the issue. They identify Adreno 640 driver
512.502.0, build date 2021-11-18, Vulkan API 1.1.128. A separate reproducible
SDL 3.4.18 defect has now been corrected: rectangular mip dimensions became
zero instead of remaining one. The updated APK passes desktop Vulkan/D3D12
texture readback tests; Poco and Samsung acceptance remains unverified.
Shadow caster and scene depth behavior are unchanged by this correction.

Developer override RESOT_TEXTURE_PROBE=1 logs bounded `[TEXCHECK]`
comparisons of decoded pixels against uploaded GPU textures and generated
mips: at most twelve 2D images, two per format, capped at one million base
pixels. Only hashes and error counts are logged. Enabling this adds startup
GPU waits. The release defaults to no readbacks; `RESOT_TEXTURE_PROBE=0` disables them. Normal
rendering still uses the original texture contents and sampling.

Tap the version badge at the launcher's upper left. reSOT prepares a ZIP in
the background and opens Android's native share menu. It includes retained
current demo/retail stdout/stderr, the kernel log, up to two historical logs
per target/stream, options, device/SoC/RAM/Android information, installed APK
fingerprint, app-UID logcat and recent exit/ANR/native-crash records when the
OS makes them available. Native tombstones retain their protobuf format.
No game files, saves, driver binaries or shader caches are collected. Log
text may contain local paths. Large text files keep their beginning and end;
report.txt records truncation and collection failures.

Normal logging and original files are unchanged. The ZIP is created only
on request, under private cache, and exposed through a read-only content URI
with temporary permission. It is deleted 30 seconds after returning to the
launcher, after either sharing or cancelling; the delay lets a receiving app
open the file. Android does not reliably report actual send completion.
An expiry job removes abandoned exports after 15 minutes when Android allows
the job to run (deadline requested at 30 minutes); reopening the launcher
also clears leftovers. An open file descriptor remains readable after the
temporary path is removed. A recipient's own copy is controlled by that app.

Pure Java archive/expiry tests and the release APK build pass. A valid
Samsung archive was subsequently received from the user. Cancellation and
real lifecycle cleanup timing still need device verification; no Android
device was connected to the development machine for these checks.

Touch pictograms now show an eye for first-person look, a camera for overhead
view, a runner/wall action for RT, and a jumping figure with motion marks for A.
Bindings and saved control placement are preserved.

Android thermal events temporarily cap rendering at 90/60/45/30 FPS for
Light/Moderate/Severe/Critical heat reports. A lower selected FPS limit wins;
cooling restores the configured limit after 30 seconds. The saved preference
is unchanged; display refresh follows the effective cap. Android SDL audio
also recovers stale queues after a backlog/stall and uses a smaller prime.
The retail APU scheduler now tolerates short Android scheduling delays without
immediately discarding elapsed audio time. Cutscene sync and thermal benefit
await user testing; the APK was installed without launching it.

### APK publisher integrity (v0.3.2, versionCode 7)

Before launcher initialization and before loading game libraries after task
restoration, the maintained Android apksig verifier validates the installed
APK v2/v3 contents and requires the current publisher certificate. The pin
matches the existing APK signing key, preserving normal in-place updates.
Offline operation, installer, phone/GPU, settings, saves and custom GPU drivers
are irrelevant to verification. I/O errors offer Retry and Close; modified or
re-signed APKs cannot start the game and link to official GitHub releases.
No debuggable-flag bypass or server availability dependency is used.

The signing identity remains the existing local Android debug keystore, to
preserve upgrade compatibility. Keep this key private and backed up. The build
script validates its public fingerprint before copying the APK; accidental
key regeneration fails packaging. Independent source forks must explicitly
set their public certificate pin in ReleaseTrust.java. APK self-verification
can itself be patched by a repackager; it is not a malware scanner or a
guarantee against an attacker controlling the OS/checker.

The user confirms the previous mip-fix APK resolves both Poco texture
corruption and operation on the tested MediaTek/Samsung device. The 0.3.2
release keeps that fix and its CPU-vertex profile. TEXCHECK GPU readbacks are
now opt-in via RESOT_TEXTURE_PROBE=1, avoiding diagnostic startup waits.
Actual 0.3.2 popup/preset behavior still needs handset validation.
