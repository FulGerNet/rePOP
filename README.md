<p align="center">
  <img src="docs/media/reSOT.png" alt="reSOT" width="192">
</p>

<p align="center">
  <a href="https://www.buymeacoffee.com/fulger" target="_blank"><img src="https://www.buymeacoffee.com/assets/img/custom_images/orange_img.png" alt="Buy Me A Coffee" height="37" width="170" style="height: 37px !important;width: 170px !important;box-shadow: 0px 3px 2px 0px rgba(190, 190, 190, 0.5) !important;-webkit-box-shadow: 0px 3px 2px 0px rgba(190, 190, 190, 0.5) !important;"></a>
</p>

# reSOT

Static recompilation of the original Xbox builds of
**Prince of Persia: The Sands of Time** into native Windows executables.

<img src="docs/media/gameplay-xbox-demo.jpg" alt="The Xbox demo recompiled, 16:9: main menu, intro, the Prince waking, the Vizier's soldiers, explosions on the ramparts, a ledge, the Sands of Time transition">

*The Xbox demo, recompiled, at 16:9 (Hor+), from one scripted 185-second
run (2026-10-14): main menu, the intro, the first level's opening, the
soldiers' scene, the ramparts under fire, a ledge prompt, the transition into
the next section. Frame dumps from the game window; inputs from a pad script,
not a person.*

| Target | Source executable | State |
| --- | --- | --- |
| `xbox-demo` | E3 2003 demo, `default.xbe` built 2003-07-18 | Runs: movies, menus, pause menu and the level sections reached by a scripted pad, at 55-60 fps with vsync, with sound and a Hor+ 16:9 picture (the default build); played by a person to the third level and its movie without a freeze (guest heap reclaim on). Sound not checked by a person; not validated against the console |
| `xbox-retail` | NTSC retail, title `0x5553001D`, `default.xbe` built 2003-10-20 | Not started: files staged, entry point and D3D fence layout located. Planned after the demo |

The goal is both games fully playable from the user's own disc files, with
the generated code readable enough to be replaced by hand-written source
function by function. **Neither target is there yet.**

reSOT does not contain the game. You supply the files from discs you own;
the C that is generated from them stays on your machine.

## How it works

An Xbox executable is 32-bit x86 code. reSOT lifts every routine of
`default.xbe` to C with [xboxrecomp](https://github.com/sp00nznet/xboxrecomp)
(vendored and patched under `port/third_party/xboxrecomp`) and links the result
against a Windows replacement for the console:

```text
default.xbe ──► disassemble ──► find functions ──► lift to C ──► MSVC x64
                                                       │
            ┌──────────────────────────────────────────┘
            ▼
   lifted game + XDK code          (source/<target>/gen, generated, never committed)
            │ kernel calls, GPU pushbuffer, USB, overlay registers
            ▼
   runtime (port/third_party/xboxrecomp/src)
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
| Lift and build | 🟢 11,215 functions (2 of them written by hand: the D3D KickOff), 0 failed | ⚪ |
| Boot to first frame | 🟢 | ⚪ |
| Movies (Bink via overlay) | 🟢 picture; 🟡 sound produced, not checked by ear | ⚪ |
| Menus | 🟢 main and pause | ⚪ |
| In-level rendering | 🟡 character shadows drawn (projected silhouettes); no stencil or cube maps | ⚪ |
| Wide picture (Hor+) | 🟡 16:9 by default (`RESOT_ASPECT`); fills a 16:9 monitor with `-Fullscreen` or Alt+Enter/F11; culling widened to the new sides; the menu garden is not modelled past its 4:3 edge | ⚪ |
| Frame rate | 🟢 60 fps (vsync) in every 5 s window after start-up in the runs of 2026-10-14 (afternoon); about half a core in the menu, one core in the intro scene | ⚪ |
| Controller / keyboard | 🟡 keyboard in the PC version's layout, mouse buttons and mouse camera, XInput pad or joystick through XAPI replaced on port 0 (no USB enumeration); played to the third level by a person, the camera keys' Xbox buttons not confirmed | ⚪ |
| Audio | 🟡 DirectSound runs on the emulated APU, no DSP effects; not checked by ear | ⚪ |
| Save / load, memory unit | ⚪ | ⚪ |
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
    windows/src/         Windows host: entry point, crash report, profiler
    windows/res/         icon and version resource of the executables
    game/                hand-written overrides the lifted code calls
    third_party/xboxrecomp/   recompiler (tools/) and Xbox runtime (src/), patched; changes marked RE-SoT
  tools/                 recomp.ps1, run.ps1, shortcut.ps1, seed-scan.py, xbe-dis.py, check-hlsl.py
  docs/                  RECOMP.md, VALIDATION.md, LICENSING.md, history/, media/ (logo, screenshots)
  research/              analysis databases and Ghidra notes (ignored)
  Assets/                your game files (ignored)
  bin/ build/ logs/      outputs (ignored)
```

## Contributing

Read [AGENTS.md](AGENTS.md) first: it is short and it is the rule set. In
brief: never commit game files or generated code; fix behaviour in
`port/`, the target's `target.h`, hooks and seed list, or the runtime; record
the XBE address that justifies every target-specific change; and write down
what you actually observed in `docs/VALIDATION.md`.

## Licence

reSOT's own files are MIT. `port/third_party/xboxrecomp` is MIT with
LGPL-2.1-or-later parts taken from xemu. The game, its assets and the C
generated from its executables belong to their owners and are not covered.
See [LICENSE](LICENSE) and [docs/LICENSING.md](docs/LICENSING.md).

*Prince of Persia* is a trademark of Ubisoft. This project is not affiliated
with or endorsed by Ubisoft or Microsoft.
