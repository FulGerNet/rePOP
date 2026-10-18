# reSOT for Android

One app, **com.fulger.resot**, for both Xbox builds of Prince of Persia: The
Sands of Time: the E3 2003 demo and the NTSC retail game. arm64-v8a, Android
10 (API 29) or later, a Vulkan 1.0 GPU. Rendering is the native SDL GPU
encoder on Vulkan, the same code as the Windows build's optional Vulkan
renderer (`port/third_party/xboxrecomp/src/kernel/nv2a_hw_native.inc`); there
is no Direct3D 11 on Android.

**State: first build.** The APK builds and both game libraries link
(see [VALIDATION.md](../../docs/VALIDATION.md)). It has not yet been run on a
device: boot, rendering, audio, input and the ISO installation are unverified
on Android.

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
| top left FPS | | the FPS / current WOW panel (F5 on Windows) |

The overlay hides itself when a controller is connected. The game's rumble
drives the controller, or the phone's vibrator. The Android back key is B.
A hardware keyboard and mouse work with the Windows layout (WASD, Space,
mouse buttons...). The game's own reSOT Options pages (FPS limit, VSync,
post-processing, keyboard and joystick bindings) work as on Windows and are
saved in `resot-options.ini`; the resolution is the device's.

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
