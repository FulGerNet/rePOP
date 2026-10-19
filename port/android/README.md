# reSOT for Android

One app, **com.fulger.resot**, for both Xbox builds of Prince of Persia: The
Sands of Time: the E3 2003 demo and the NTSC retail game. arm64-v8a, Android
10 (API 29) or later, a Vulkan 1.0 GPU. Rendering is the native SDL GPU
encoder on Vulkan, the same code as the Windows build's optional Vulkan
renderer (`port/third_party/xboxrecomp/src/kernel/nv2a_hw_native.inc`); there
is no Direct3D 11 on Android.

**State: device validation in progress.** User logs show both games running
on Android. The 2026-10-19 demo log ends in an audio-service crash; the retail
log shows severe frame-rate drops. Save/load persistence and the latest
corrections still need device validation; see [VALIDATION.md](../../docs/VALIDATION.md).

## What is in the APK

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
redrawn with Android's canvas in `LauncherView.java`: the same 1000 x 640
layout, colours, logo, Atlantis MF face (when `port/windows/res/AtlantisMF.ttf`
is present; see [LICENSING.md](../../docs/LICENSING.md)), drifting sand,
Start Demo / Start Game with what is installed under each, Install from ISO
and the extraction progress. Touch, a controller (d-pad, A, B) or a keyboard
drives it. **Keep the two launchers alike**: a change to one belongs in the
other.

## Controls

A Bluetooth or USB controller plays as the Xbox pad (SDL3 gamepad mapping).
Without one, an overlay is drawn over the game (`TouchControls.java`):

| Touch | Xbox | Prince of Persia |
| --- | --- | --- |
| left side: a stick where the thumb lands | left stick | move |
| right side: drag anywhere free | right stick | camera |
| big button | A | jump |
| | B | cancel / drop |
| | X | sword |
| | Y | dagger |
| hourglass | L trigger | rewind (the Sands) |
| | R trigger | special action |
| | black / white | alternate view / camera look |
| | right stick click | reset camera |
| | START / BACK, d-pad | pause, back, menus |
| top centre (eye) | | tap: show/hide the overlay; hold: move the controls, then SAVE (RESET restores) |
| top left FPS | | the FPS / current WOW / active Renderer panel (F5 on Windows) |

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
target is used. Postprocess targets retain their guest resolution, movies
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

Tap **FPS** at the top left to show the panel. Its button becomes invisible
while the panel is open; tapping the same spot closes the panel and restores
the button. The invisible touch area remains active. Windows uses F5 and
has no corresponding touch button.
**Look sensitivity** is in **reSOT Options → Controls** in both games:
25–200% in steps of 25, with 100% retaining the original speed. It applies
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
Android defaults to `PostProcessing=0` in `[Graphics]` to reduce GPU work;
Windows keeps `PostProcessing=1`. An existing saved value takes precedence:
set it to `0` in an existing Android INI or turn it off in the game's options.
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
