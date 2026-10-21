<p align="center">
  <img src="docs/media/reSOT.png" alt="reSOT" width="192">
</p>

<p align="center">
  <a href="https://www.buymeacoffee.com/fulger" target="_blank"><img src="https://www.buymeacoffee.com/assets/img/custom_images/orange_img.png" alt="Buy Me A Coffee" height="37" width="170" style="height: 37px !important;width: 170px !important;box-shadow: 0px 3px 2px 0px rgba(190, 190, 190, 0.5) !important;-webkit-box-shadow: 0px 3px 2px 0px rgba(190, 190, 190, 0.5) !important;"></a>
</p>

# reSOT

Static recompilation of the original Xbox builds of
**Prince of Persia: The Sands of Time** into native Windows executables
and one native Android app for both games (device validation in progress).

<img src="docs/media/gameplay-xbox-retail.jpg" alt="The Xbox retail game recompiled, 16:9: the ramparts cutscene, the Vizier's guard, the Prince in the courtyard, a wall run, a ladder, the inner courtyard, two sword fights, the pause menu">

*The Xbox retail game, recompiled, at 16:9 (Hor+), from one run
(2026-10-17) through the first areas (`0101_Porte`, `0102_Rempart_Couloir`):
a cutscene on the ramparts, the Vizier's guard, the courtyard, the wall-run
and ladder tutorials, two fights and the pause menu. Captures of the game
window; inputs from the scripted pad (`RECOMP_PAD_SCRIPT` / `RECOMP_PAD_LIVE`),
not a person. In the two cutscene frames the F5 panel, which sat on the
letterbox bar, was painted over in black.*

<img src="docs/media/gameplay-xbox-demo.jpg" alt="The Xbox demo recompiled, 16:9: main menu, intro, the Prince waking, the Vizier's soldiers, explosions on the ramparts, a ledge, the Sands of Time transition">

*The Xbox demo, recompiled, at 16:9 (Hor+), from one scripted 185-second
run (2026-10-14): main menu, the intro, the first level's opening, the
soldiers' scene, the ramparts under fire, a ledge prompt, the transition into
the next section. Frame dumps from the game window; inputs from a pad script,
not a person.*

| Target | Source executable | State |
| --- | --- | --- |
| `xbox-demo` | E3 2003 demo, `default.xbe` built 2003-07-18 | Runs movies, menus, pause and the scripted level sections at about 58-60 FPS with VSync; played by a person to the third level without a freeze. Compact F5 and F6 options added. User confirms corrected audio and 120+ FPS (2026-10-18); intermittent visual defects remain under validation; no console comparison. Dedicated Vulkan shaders exercised on PC and Android (2026-10-21), with validation limits below |
| `xbox-retail` | NTSC retail, title `0x5553001D`, `default.xbe` built 2003-10-20 | Bring-up: first playable level reached by the user and a scripted run. The invalid-refresh timestep that caused extreme slow motion is corrected: gameplay measured 9.003 real seconds / 9.008 simulation seconds with the fix. User confirms corrected audio, 120+ FPS and the save-crash fix (2026-10-18); full-level accuracy and broader audio/visual validation remain incomplete. Dedicated Vulkan shaders exercised on PC and Android (2026-10-21) |

The existing post-processing quality selector now budgets auxiliary effect
buffers and projected shadows as well as recognized blur/bloom chains, on
both hosts and targets. The user confirms that it works (2026-10-20).
The in-game selector offers Low/Mid/High; Off remains accessible via the INI
and Windows F7. Both hosts now default to Low (2026-10-21); compilation
and runtime validation of this menu/default change are recorded below.
The [effect study](docs/POST-PROCESSING.md) records the remaining water,
motion-blur and other effect-identification gaps. Windows native renderers
also synchronize SDL window borders when F11 leaves fullscreen; that separate
correction still awaits confirmation. See [VALIDATION.md](docs/VALIDATION.md).

Retail's forming sand-tank ring now follows the rest of the HUD on ultrawide
Android displays; the user confirms its corrected alignment (2026-10-21).
The shared correction also builds on Windows. See [VALIDATION.md](docs/VALIDATION.md).

Vulkan now translates supported vertex programs to dedicated SPIR-V and
optimizes complex fragment programs before pipeline creation, on Windows and
Android for both targets. Compiled programs are cached on disk; reference
pipelines can draw while dedicated pipelines compile. GPU comparisons pass,
and initial PC/device scenes were inspected (2026-10-21). This does not establish
a controlled FPS improvement or sustained 60 FPS: demo device scenes still
include about 49�50 FPS windows. See [the shader study](docs/VULKAN-PERFORMANCE.md).

The log viewers have a source-selection repair: Windows follows the logger's
actual file path, and Android reads the `logs/` subfolder. Output from these
repairs still awaits user confirmation.

Android touch controls now use gold-rimmed blue medallions and a mobile action
arc inspired by the supplied Warrior Within references (2026-10-21).
The user approves the appearance on device; pause/back/rewind have since been
moved beside the central overlay toggle (pause/back) and to the upper right
(rewind) to clear the HUD and FPS panel. That adjustment
awaits device confirmation; see
[VALIDATION.md](docs/VALIDATION.md).

**Both targets remain under gameplay validation.** The user reports
angle-dependent object flickering in the demo's first level and a crash at
the garden lever, and a retail crash at the second ladder of its first level
(2026-10-16). The user reports the save crash resolved (2026-10-18);
full save/load validation remains incomplete.
Build and runtime observations are recorded in [VALIDATION.md](docs/VALIDATION.md).

The goal is both games fully playable from the user's own disc files, with
the generated code readable enough to be replaced by hand-written source
function by function. Retail and the remaining accuracy and validation work are still ahead.

reSOT does not contain the game. You supply the files from discs you own.
The lifted C in `source/<target>/gen` is published with the project
([AGENTS.md](AGENTS.md)); game data, executables and extracted assets are not.

## How it works

An Xbox executable is 32-bit x86 code. reSOT lifts every routine of
`default.xbe` to C with [xboxrecomp](https://github.com/sp00nznet/xboxrecomp)
(vendored and patched under `port/third_party/xboxrecomp`, one runtime for
both targets that is compiled for one of them per build tree, the per-target
fixes chosen with `RESOT_RUNTIME_DEMO` / `RESOT_RUNTIME_RETAIL`) and links the
result against that Windows replacement for the console:

```text
default.xbe ──► disassemble ──► find functions ──► lift to C ──► MSVC x64
                                                       │
            ┌──────────────────────────────────────────┘
            ▼
   lifted game + XDK code          (source/<target>/gen/<folder>, generated)
            │ kernel calls, GPU pushbuffer, USB, overlay registers
            ▼
   runtime (port/third_party/xboxrecomp/src, built for this target)
     kernel    files, threads, timers, interrupts
     nv2a      pushbuffer executor ─► Direct3D 11 (register combiners in HLSL)
     video     window, PVIDEO overlay (Bink movies)
     usb/input emulated OHCI controller, keyboard or XInput pad
```

The game's own code runs: its BigFile loader, the Jade engine, the compiled
AI functions, the Bink decoder and even the statically linked Xbox Direct3D,
which keeps writing NV2A commands that the runtime executes on the host GPU.
Details, addresses and the fixes that were needed are in
[docs/RECOMP.md](docs/RECOMP.md).

## Supply your game files

Copy the contents of your own discs into `Assets/`. These folders are ignored
by Git.

```text
Assets/
  xbox-demo/     default.xbe  prince.bf  video/  sound/
  xbox-retail/   default.xbe  prince.bf  shaders.bin  VIDEO/  SOUND/  MEDIA/  POP1/  POP2/
```

Supported executables (SHA-256 of `default.xbe`); other revisions are refused
because every address in the project belongs to these files:

```text
xbox-demo    79C1A47828630AB0D4E5DD19B1FD036FFA58EA2C0FE729B0D3456DAC3E79D4F5
xbox-retail  753C58B191279BF4D1A8B28A936DF36AA222ED566487AB1FBDFCD090E91EE379
```

## Platforms

For players: double-click the target's executable in its portable folder.
Keep your game data beside it (demo and retail in separate folders), or
select the data folder when asked. `default.xbe` is a build input and is
embedded in the compiled EXE; it is not required beside the player EXE.
Space / controller A skips videos; F5 toggles the FPS / Current WOW panel;
F6 toggles the diagnostics panel (copyable with Ctrl+Shift+C); F7 opens
`reSOT Options` for graphics and controls, also available in the game's main menu. See the [Windows instructions](port/windows/README.md#play-portable-folder)
for the folder contents and packaging from a local build.

| Platform | Instructions |
| --- | --- |
| Windows 10/11 x64 (Direct3D 11, XInput, XAudio2; MSVC, CMake) | [port/windows/README.md](port/windows/README.md): requirements, build, run, controls |
| Android 10+ arm64 (Vulkan via SDL GPU, SDL3 input and audio; NDK, Gradle): one app, `com.fulger.resot`, for both games, installed from their ISOs | [port/android/README.md](port/android/README.md): game files, touch controls, build |

In short, on Windows:

```powershell
.\tools\recomp.ps1 -Target xbox-demo      # analyse, lift and build
.\tools\run.ps1                           # play the demo, full screen
.\tools\shortcut.ps1                      # desktop shortcut that does the same
```

## Development status

Version 0.2.0 bundles the user's platform-specific INI defaults: unlimited
FPS, VSync/glow/logs off and 200% look sensitivity on both hosts; Windows
uses D3D11, 720p and post-processing Low, Android uses Vulkan, 480p and
post-processing Off. Missing INIs are created from the bundled templates;
existing preferences survive upgrades. This release includes the effect-quality
and logging changes below. No further gameplay tests were run after the
user confirmed the option works and requested that testing stop.

Version 0.1.1 includes Android power follow-ups: display refresh follows
the FPS limit, inactive timer scans use fewer locks, and eligible frames
keep their internal-size snapshot until the final upscale. Thermal benefit
and broader background/resume behavior remain under validation; an
intermittent black-on-return report did not recur in the user's final retest.

Vulkan specialization update (2026-10-20): an OpenCE rendering study led to
cached constant combiner programs for Android and Windows Vulkan. Retail's
480p title improved from about 31 to 59 FPS on SM8635. Demo opening scenes
include 54–59 FPS windows, with later 46–51 FPS windows. The user reports
about 60 FPS with drops to 49 and accepts this result for now. Both Windows
targets and the APK build; all 8 GPU/support tests pass, including 64
specialized-combiner comparisons. First-use shader stalls remain; sustained
60 FPS throughout both games is unverified. See
[the study](docs/VULKAN-PERFORMANCE.md) and [validation](docs/VALIDATION.md).

Windows/Android parity audit (2026-10-20): the applicable recent APU/IRQL,
texture and native-renderer corrections are already shared. Both Windows
targets build; 8 GPU/support tests and 4 target APU/IRQL tests pass. Six
20-second Windows startup checks (demo/retail, D3D11/Vulkan/D3D12) reached
title/menu images with non-silent audio production and no recorded crash
or backend fallback. These are not full-game checks or performance gains.
See [PLATFORM-PARITY.md](docs/PLATFORM-PARITY.md) for the per-component audit
and intentional host/backend differences.

Android optimization update (2026-10-20): retail's small vertex interpreter
now skips calculations whose results are unused. Android and both Windows
builds pass, with 8/8 native GPU/support tests including Vulkan/D3D12 shader
pixel comparisons. ADB retail title checks measured about 29-31 FPS at 480p,
36-38 FPS at 360p and up to 48-49 FPS at 240p across sequential runs;
the last vertex changes showed no clear gain at 480p. Power improvement
and sustained gameplay performance remain unverified;
see [VALIDATION.md](docs/VALIDATION.md).

🟢 works in the runs recorded in [VALIDATION.md](docs/VALIDATION.md) ·
🟡 partial · ⚪ not started. A green cell means "observed working here", not
"matches the console".

| Component | Xbox demo | Xbox retail |
| --- | --- | --- |
| Shared effect-quality selector (Windows/Android) | 🟡 expanded to auxiliary buffers and projected shadows; builds and support tests pass; user confirms the option works (2026-10-20, target unspecified); [all-effects audit remains partial](docs/POST-PROCESSING.md) | 🟡 independent shadow/bloom trace evidence, shared implementation builds; broader water/time-effect identification remains incomplete |
| Lift and build | 🟢 11,215 functions (2 of them written by hand: the D3D KickOff), 0 failed | 🟢 14,418 functions (2 by hand: the D3D KickOff), 0 failed |
| Boot to first frame | 🟢 | 🟢 |
| Portable launch / F5 overlay / video skip | 🟢 verified by the user (2026-10-18) | 🟢 verified by the user (2026-10-18) |
| External game folder / options / F6 diagnostics (F7 panel restored: both builds pass, in-game check pending) | 🟢 verified by the user (2026-10-18), including Load Map; launcher with ISO installation run once by the user (demo ISO, 2026-10-18) | 🟢 verified by the user (2026-10-18); no hidden level select exists in this XBE |
| Movies (Bink via overlay) | 🟢 audio and video verified by the user (2026-10-18) | 🟢 audio and video verified by the user (2026-10-18) |
| Menus | 🟢 verified by the user (2026-10-18) | 🟢 verified by the user (2026-10-18); Xbox Live removed from the main menu (2026-10-19) |
| Native D3D12 (optional in F7; restart required; SDL GPU, no 11On12) | 🟡 GPU vertex programs; 20-second Windows menu check with non-silent audio and no recorded crash (2026-10-20); native GPU readbacks pass; broader gameplay/performance validation pending | 🟡 GPU vertex programs; 20-second Windows menu check with non-silent audio and no recorded crash (2026-10-20); native visibility and vertex-program GPU tests pass; full gameplay/performance validation pending |
| Native Vulkan (optional in F7; restart required; SDL GPU, no DXVK) | 🟡 GPU vertex programs; 20-second Windows menu check with non-silent audio and no recorded crash (2026-10-20); Android menu/gameplay observations below; broader validation pending | 🟡 vertex programs on the GPU (`vs_uber`, 2026-10-19): scripted run to the first courtyard, menu executor 4.6–6.7 ms (CPU interpreter 16.2–16.6 ms), courtyard 66–124 FPS, snapshots correct by eye; retail light-map borders and cycled texture lifetime pass host Vulkan/D3D12 GPU readbacks; simple combiner shaders plus reduced native vertex-interpreter operand work measured about 27-28 FPS at 480p on the connected phone (was 16.9 generic, then 24.7 fragment-only; 2026-10-19); 30 FPS minimum remains unmet; broader gameplay/performance validation pending |
| In-level rendering | 🟡 projected shadows; cube-map upload/sampling implemented and host GPU test passed, game appearance unverified; first-level flickering/distortion traced to ordered GPU fences: gone for the user with them off (2026-10-17), now the demo default; no stencil | 🟡 substantial retail gameplay reported without crashes (2026-10-19); black garden panels traced to missing white light-map borders and corrected, confirmed by the user; forming sand-tank ring aligned in GPU readback; other scenes and console accuracy remain unverified |
| Wide picture (Hor+) | 🟡 16:9 by default (`RESOT_ASPECT`); fills a 16:9 monitor with `-Fullscreen` or F11; culling widened to the new sides; pause backdrop expanded; HUD at its 4:3 proportions and anchored to the screen's left edge, confirmed by the user (2026-10-18); the menu garden is not modelled past its 4:3 edge | 🟡 16:9 by default; demo's projection and culling hooks ported to the retail addresses, projected-UI policy on (menu backdrop full width); dialog text wider than its box at 16:9; health bar anchored to the left edge in first-level readbacks (2026-10-18), tutorial text unchanged |
| Frame rate | 🟡 120+ FPS reported by the user (2026-10-18); first-use shader stalls moved off the executor (hourglass room: lowest 80 fps, was 7); batches reused across frames (garden 93-100 fps at ~880 draws, was 67-78); title and executor still run in lockstep; broader performance validation incomplete | 🟡 latest user session: 302 timing windows, median 146.3 FPS, minimum 48.6 (not frame percentiles); P8/ARGB upload conversion optimized, native pipeline lookup and texture reuse improved (2026-10-19); matched-scene and Android performance comparison pending |
| Controller / keyboard | 🟢 verified by the user (2026-10-18) | 🟢 verified by the user (2026-10-18) |
| Audio | 🟡 audio corrected, confirmed by the user (2026-10-18); bath-fight stutter fixed, user confirmed. Android Sand Birds crash (2026-10-20): APU idle-trap overwrite corrected; APU/IRQL tests pass, device retest records about 260 s of audio and a regular exit without a crash; user confirms the fix | 🟡 audio corrected, confirmed by the user (2026-10-18). Android making-of audio loss (2026-10-20): dispatch timeout bypasses and callback lock leak corrected; APU/IRQL tests pass, user confirms audio persists through the video and return to the menu; broader audio validation incomplete |
| Save / load, memory unit | 🟡 save crash reported resolved by the user (2026-10-18); full save/load and memory-unit validation incomplete | 🟡 save crash reported resolved by the user (2026-10-18); Android random-write and migration corrections pass host tests (2026-10-19); "damaged profile" on Android traced to a stale directory search, fix built, device save/relaunch/load still unverified |
| Virtual memory reservations | 🟡 reserve/commit fix tested on synthetic input; optional, gameplay with this option not checked | 🟡 corrected reserve/commit and audio address translation; user passed the previous crash point; checkpoint save/load still untested |
| Xbox Live (retail only) | n/a | ⚪ not planned |
| Android (arm64, Vulkan; one APK for both) | 🟡 demo-specific draw evidence checked and native simple shaders enabled (2026-10-19): SM8635 480p title/menu improves from about 27.5 to 62.9–63.1 FPS in steady timing windows; first playable scenes include 33.8–53.3 FPS windows, so sustained 60 FPS gameplay remains unmet. Bulk texture conversion and image cycling also enabled; recurring audio-ISR crash (Reception Hall, guest read at 0xFFFFFFBE) addressed by mapping the full flash mirror, not yet replayed there (2026-10-20); see validation log | 🟡 user confirms runs and videos corrected; logs show severe FPS drops on Adreno 750; native vertex-buffer reuse, save diagnostics and device-width Hor+ built (2026-10-19), GPU vertex programs left the phone waiting on the GPU (8–18 FPS, long black screen before the menu); Vulkan pipeline cache removed the per-pipeline compile stalls (0.3–0.5 ms after the first, device log); GPU vertex programs with bound-only texture sampling rebuilt (2026-10-19), frame rate not yet seen on the device; white light-map borders, forming-tank alignment, bulk texture conversion and native cache optimizations built into the APK; single-stage fragment specialization measured on SM8635: menu 16.5–17.1 to 24.6–24.8 FPS at 480p; FPS touch button hides while its panel is visible, same spot closes it; broader device persistence/performance validation pending; seconds-long freezes traced to new-pipeline compiles (up to 1.8 s each), now compiled in the background with draws skipped until ready (built 2026-10-20, menu 58–59 FPS, not yet seen in a new area) |
| Android scheduling / next Vulkan draw optimization (2026-10-20) | 🟡 system UI responsive per user; menu 40–57 FPS; compact vertex inputs and state-command reuse built locally, demo device measurement pending | 🟡 renewed ADB tests: final APK title about 29–31 FPS at 480p, 36–38 at 360p; preceding APK up to 48–49 at 240p; opening cutscene reached; sustained gameplay performance unverified |
| Checked against the console | ⚪ | ⚪ |

Android update (2026-10-20): the user confirms that system UI no longer lags
with the scheduling/stability build, but reports demo menu fluctuations of
40–57 FPS. The subsequent performance build restores SDL's two frames in
flight, packs native vertex inputs into 16/32/64/128 bytes instead of always
128, and skips unchanged viewport/scissor/blend commands. Both targets share
these native-encoder changes (compact inputs on Vulkan; state-command reuse
also on D3D12). Renewed retail phone tests measured the final build at
29–31 FPS at 480p and 36–38 FPS at 360p in the title. Sustained 60 FPS remains
unachieved. See [VALIDATION.md](docs/VALIDATION.md).

## Repository layout

```text
reSOT/
  source/                one folder per Xbox executable (the game side)
    xbox-demo/           target.h (addresses of that XBE), seed_functions.json,
                         target_hooks.c, gen/ (lifted C by folder: main, engine,
                         render, sound, ai, scripts, xdk/..., see gen/README.md)
    xbox-retail/         the same for the retail build
  port/                  what replaces the console
    windows/src/         Windows host: entry point, launcher (title screen, ISO install), crash report, profiler
    windows/res/         icon, version resource, launcher face (AtlantisMF.ttf, see docs/LICENSING.md)
    android/             Android app: native host (src/), NDK CMakeLists.txt, Gradle project, launcher, touch controls (app/)
    game/                hand-written overrides the lifted code calls
    third_party/xboxrecomp/      recompiler (tools/) and Xbox runtime (src/) for both targets, patched; changes marked RE-SoT
    third_party/extract-xiso/    extract-xiso 2.7.1, unchanged: the launcher's ISO installation
  tools/                 recomp.ps1, build-android.ps1, run.ps1, shortcut.ps1, seed-scan.py, sort-functions.py, xbe-dis.py, check-hlsl.py
  docs/                  RECOMP.md, VALIDATION.md, LICENSING.md, history/, media/ (logo, screenshots)
  research/              analysis databases and Ghidra notes (ignored)
  Assets/                your game files (ignored)
  bin/ build/<target>/ logs/   outputs (ignored)
```

## Contributing

Read [AGENTS.md](AGENTS.md) first: it is short and it is the rule set. In
brief: never commit game files, executables or extracted assets, and never
edit `source/<target>/gen` by hand (`tools/recomp.ps1` writes it); fix behaviour in
`port/`, the target's `target.h`, hooks and seed list, or the runtime; record
the XBE address that justifies every target-specific change; and write down
what you actually observed in `docs/VALIDATION.md`.

## Licence

reSOT's own files are MIT. `port/third_party/xboxrecomp` is MIT with
LGPL-2.1-or-later parts taken from xemu; `port/third_party/extract-xiso` is
under its own BSD-style licence. The game, its assets and the C
generated from its executables belong to their owners and are not covered.
See [LICENSE](LICENSE) and [docs/LICENSING.md](docs/LICENSING.md).

*Prince of Persia* is a trademark of Ubisoft. This project is not affiliated
with or endorsed by Ubisoft or Microsoft.
