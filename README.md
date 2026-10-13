# reSOT

Static recompilation of the original Xbox builds of
**Prince of Persia: The Sands of Time** into native Windows executables.

| Target | Source executable | State |
| --- | --- | --- |
| `xbox-demo` | E3 2003 demo, `default.xbe` built 2003-07-18 | Runs: movies, menus, pause menu and the first two level sections at about 15-35 fps. No audio. Not validated against the console |
| `xbox-retail` | NTSC retail, title `0x5553001D`, `default.xbe` built 2003-10-20 | Not started: files staged, entry point and D3D fence layout located. Planned after the demo |

The goal is both games fully playable from the user's own disc files, with
the generated code readable enough to be replaced by hand-written source
function by function. **Neither target is there yet.**

reSOT does not contain the game. You supply the files from discs you own;
the C that is generated from them stays on your machine.

## How it works

An Xbox executable is 32-bit x86 code. reSOT lifts every routine of
`default.xbe` to C with [xboxrecomp](https://github.com/sp00nznet/xboxrecomp)
(vendored and patched under `third_party/xboxrecomp`) and links the result
against a Windows replacement for the console:

```text
default.xbe ──► disassemble ──► find functions ──► lift to C ──► MSVC x64
                                                       │
            ┌──────────────────────────────────────────┘
            ▼
   lifted game + XDK code          (src/<target>/gen, generated, never committed)
            │ kernel calls, GPU pushbuffer, USB, overlay registers
            ▼
   runtime (third_party/xboxrecomp/src)
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

## Requirements

- Windows 10/11 x64, a Direct3D 11 GPU
- Visual Studio with the C++ desktop workload (the scripts default to the
  `Visual Studio 18 2026` generator; pass `-Generator` for another)
- CMake 3.20+
- Python 3.10+ with `capstone` (`pip install capstone`)

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

## Build

```powershell
.\tools\recomp.ps1 -Target xbox-demo      # analyse, lift and build (about 12 minutes)
.\tools\recomp.ps1 -Target xbox-retail
.\tools\recomp.ps1 -BuildOnly             # after editing the runtime or src/common
```

The executables land in `bin/` as `sot-xbox-demo.exe` and `sot-xbox-retail.exe`.

## Run

```powershell
.\tools\run.ps1 -Pad                      # the demo
.\tools\run.ps1 -Target xbox-retail -Pad
```

Start the game through the script, not by double-clicking the executable: the
runtime is configured through environment variables the script sets. `-Pad`
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

Diagnostics go to `logs/<target>-err.txt`. Useful switches: `-Software` (CPU
rasteriser, for comparison), `-Seconds N`, `-SnapshotEvery S` (frame dumps in
`logs/fb`), `-Set @{RECOMP_HW_SCALE='3'}` (internal resolution multiple).

## Development status

🟢 works in the runs recorded in [VALIDATION.md](docs/VALIDATION.md) ·
🟡 partial · ⚪ not started. A green cell means "observed working here", not
"matches the console".

| Component | Xbox demo | Xbox retail |
| --- | --- | --- |
| Lift and build | 🟢 11,364 functions, 0 failed | ⚪ |
| Boot to first frame | 🟢 | ⚪ |
| Movies (Bink via overlay) | 🟢 picture, ⚪ sound | ⚪ |
| Menus | 🟢 main and pause | ⚪ |
| In-level rendering | 🟡 no shadows, stencil or cube maps | ⚪ |
| Frame rate | 🟡 14-37 fps in the level sections | ⚪ |
| Controller / keyboard | 🟡 menus work, gameplay not validated by play | ⚪ |
| Audio | ⚪ | ⚪ |
| Save / load, memory unit | ⚪ | ⚪ |
| Xbox Live (retail only) | n/a | ⚪ not planned |
| Checked against the console | ⚪ | ⚪ |

## Repository layout

```text
reSOT/
  src/
    common/            host entry point and hand-written overrides, shared
    xbox-demo/         target.h (addresses of that XBE), seed_functions.json, gen/ (generated)
    xbox-retail/       the same for the retail build
  third_party/xboxrecomp/   recompiler (tools/) and Xbox runtime (src/), patched; changes marked RE-SoT
  tools/               recomp.ps1, run.ps1, seed-scan.py, xbe-dis.py, check-hlsl.py
  docs/                RECOMP.md, VALIDATION.md, LICENSING.md, history/
  research/            analysis databases and Ghidra notes (ignored)
  Assets/              your game files (ignored)
  bin/ build/ logs/    outputs (ignored)
```

## Contributing

Read [AGENTS.md](AGENTS.md) first: it is short and it is the rule set. In
brief: never commit game files or generated code; fix behaviour in
`src/common`, the target's `target.h` and seed list, or the runtime; record
the XBE address that justifies every target-specific change; and write down
what you actually observed in `docs/VALIDATION.md`.

## Licence

reSOT's own files are MIT. `third_party/xboxrecomp` is MIT with
LGPL-2.1-or-later parts taken from xemu. The game, its assets and the C
generated from its executables belong to their owners and are not covered.
See [LICENSE](LICENSE) and [docs/LICENSING.md](docs/LICENSING.md).

*Prince of Persia* is a trademark of Ubisoft. This project is not affiliated
with or endorsed by Ubisoft or Microsoft.
