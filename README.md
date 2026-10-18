<p align="center">
  <img src="docs/media/reSOT.png" alt="reSOT" width="192">
</p>

<p align="center">
  <a href="https://www.buymeacoffee.com/fulger" target="_blank"><img src="https://www.buymeacoffee.com/assets/img/custom_images/orange_img.png" alt="Buy Me A Coffee" height="37" width="170" style="height: 37px !important;width: 170px !important;box-shadow: 0px 3px 2px 0px rgba(190, 190, 190, 0.5) !important;-webkit-box-shadow: 0px 3px 2px 0px rgba(190, 190, 190, 0.5) !important;"></a>
</p>

# reSOT

Static recompilation of the original Xbox builds of
**Prince of Persia: The Sands of Time** into native Windows executables.

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
| `xbox-demo` | E3 2003 demo, `default.xbe` built 2003-07-18 | Runs movies, menus, pause and the scripted level sections at about 58-60 FPS with VSync; played by a person to the third level without a freeze. Compact F5 and F6 options added. User confirms corrected audio and 120+ FPS (2026-10-18); intermittent visual defects remain under validation; no console comparison |
| `xbox-retail` | NTSC retail, title `0x5553001D`, `default.xbe` built 2003-10-20 | Bring-up: first playable level reached by the user and a scripted run. The invalid-refresh timestep that caused extreme slow motion is corrected: gameplay measured 9.003 real seconds / 9.008 simulation seconds with the fix. User confirms corrected audio, 120+ FPS and the save-crash fix (2026-10-18); full-level accuracy and broader audio/visual validation remain incomplete |

**Both targets remain under gameplay validation.** The user reports
angle-dependent object flickering in the demo's first level and a crash at
the garden lever, and a retail crash at the second ladder of its first level
(2026-10-16). The user reports the save crash resolved (2026-10-18);
full save/load validation remains incomplete.
Build and runtime observations are recorded in [VALIDATION.md](docs/VALIDATION.md).

The goal is both games fully playable from the user's own disc files, with
the generated code readable enough to be replaced by hand-written source
function by function. Retail and the remaining accuracy and validation work are still ahead.

reSOT does not contain the game. You supply the files from discs you own;
the C that is generated from them stays on your machine.

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
   lifted game + XDK code          (source/<target>/gen, generated, never committed)
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

In short, on Windows:

```powershell
.\tools\recomp.ps1 -Target xbox-demo      # analyse, lift and build
.\tools\run.ps1                           # play the demo, full screen
.\tools\shortcut.ps1                      # desktop shortcut that does the same
```

## Development status

🟢 works in the runs recorded in [VALIDATION.md](docs/VALIDATION.md) ·
🟡 partial · ⚪ not started. A green cell means "observed working here", not
"matches the console".

| Component | Xbox demo | Xbox retail |
| --- | --- | --- |
| Lift and build | 🟢 11,215 functions (2 of them written by hand: the D3D KickOff), 0 failed | 🟢 14,418 functions (2 by hand: the D3D KickOff), 0 failed |
| Boot to first frame | 🟢 | 🟢 |
| Portable launch / F5 overlay / video skip | 🟢 verified by the user (2026-10-18) | 🟢 verified by the user (2026-10-18) |
| External game folder / options / F6 diagnostics (F7 panel restored: both builds pass, in-game check pending) | 🟢 verified by the user (2026-10-18), including Load Map; launcher with ISO installation run once by the user (demo ISO, 2026-10-18) | 🟢 verified by the user (2026-10-18); no hidden level select exists in this XBE |
| Movies (Bink via overlay) | 🟢 audio and video verified by the user (2026-10-18) | 🟢 audio and video verified by the user (2026-10-18) |
| Menus | 🟢 verified by the user (2026-10-18) | 🟢 verified by the user (2026-10-18) |
| Native D3D12 (optional in F7; restart required; SDL GPU, no 11On12) | 🟡 builds; 55-second demo run and menu GPU readback checked (2026-10-18); vertex programs on CPU; 25–63 FPS in sampled windows; gameplay validation pending | 🟡 builds; 115-second retail run and first-level GPU readback checked (2026-10-18), after stale menu-label fix; native visibility contract passes GPU tests; full gameplay/performance validation pending |
| Native Vulkan (optional in F7; restart required; SDL GPU, no DXVK) | 🟡 builds; 45-second demo run and animated scene GPU readback checked (2026-10-18); vertex programs on CPU; 10–63 FPS in sampled windows; gameplay validation pending | 🟡 builds; 150-second retail run reached first-level courtyard and ramparts; GPU readbacks checked (2026-10-18); native visibility contract passes GPU tests; full gameplay validation pending |
| In-level rendering | 🟡 projected shadows; cube-map upload/sampling implemented and host GPU test passed, game appearance unverified; first-level flickering/distortion traced to ordered GPU fences: gone for the user with them off (2026-10-17), now the demo default; no stencil | 🟡 first playable level reached; cube-map upload/sampling implemented and host GPU test passed, game appearance unverified; rendering accuracy incomplete |
| Wide picture (Hor+) | 🟡 16:9 by default (`RESOT_ASPECT`); fills a 16:9 monitor with `-Fullscreen` or Alt+Enter/F11; culling widened to the new sides; pause backdrop expanded and upper-left HUD double compression removed, including sand crescents (see validation); the menu garden is not modelled past its 4:3 edge | 🟡 16:9 by default; demo's projection and culling hooks ported to the retail addresses, projected-UI policy on (menu backdrop full width); dialog text wider than its box at 16:9; HUD not reached |
| Frame rate | 🟡 120+ FPS reported by the user (2026-10-18); first-use shader stalls moved off the executor (hourglass room: lowest 80 fps, was 7); batches reused across frames (garden 93-100 fps at ~880 draws, was 67-78); title and executor still run in lockstep; broader performance validation incomplete | 🟡 120+ FPS reported by the user (2026-10-18); broader performance validation incomplete |
| Controller / keyboard | 🟢 verified by the user (2026-10-18) | 🟢 verified by the user (2026-10-18) |
| Audio | 🟡 audio corrected, confirmed by the user (2026-10-18); bath-fight stutter fixed, user confirmed (2026-10-18 evening); broader audio validation incomplete | 🟡 audio corrected, confirmed by the user (2026-10-18); broader audio validation incomplete |
| Save / load, memory unit | 🟡 save crash reported resolved by the user (2026-10-18); full save/load and memory-unit validation incomplete | 🟡 save crash reported resolved by the user (2026-10-18); full save/load and memory-unit validation incomplete |
| Virtual memory reservations | 🟡 reserve/commit fix tested on synthetic input; optional, gameplay with this option not checked | 🟡 corrected reserve/commit and audio address translation; user passed the previous crash point; checkpoint save/load still untested |
| Xbox Live (retail only) | n/a | ⚪ not planned |
| Checked against the console | ⚪ | ⚪ |

## Repository layout

```text
reSOT/
  source/                one folder per Xbox executable (the game side)
    xbox-demo/           target.h (addresses of that XBE), seed_functions.json,
                         target_hooks.c, gen/ (lifted C: generated, ignored)
    xbox-retail/         the same for the retail build
  port/                  what replaces the console
    windows/src/         Windows host: entry point, launcher (title screen, ISO install), crash report, profiler
    windows/res/         icon, version resource, launcher face (AtlantisMF.ttf, see docs/LICENSING.md)
    game/                hand-written overrides the lifted code calls
    third_party/xboxrecomp/      recompiler (tools/) and Xbox runtime (src/) for both targets, patched; changes marked RE-SoT
    third_party/extract-xiso/    extract-xiso 2.7.1, unchanged: the launcher's ISO installation
  tools/                 recomp.ps1, run.ps1, shortcut.ps1, seed-scan.py, xbe-dis.py, check-hlsl.py
  docs/                  RECOMP.md, VALIDATION.md, LICENSING.md, history/, media/ (logo, screenshots)
  research/              analysis databases and Ghidra notes (ignored)
  Assets/                your game files (ignored)
  bin/ build/<target>/ logs/   outputs (ignored)
```

## Contributing

Read [AGENTS.md](AGENTS.md) first: it is short and it is the rule set. In
brief: never commit game files or generated code; fix behaviour in
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
