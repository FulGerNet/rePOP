# reSOT development rules

This repository recompiles the **Xbox** builds of Prince of Persia: The Sands
of Time to native Windows executables. The game's code is lifted to C from
the user's own `default.xbe`. The generated C in `source/<target>/gen/` must
be published with the executable descriptions, the platform layer that
replaces the console, and the tools. Start with [README.md](README.md).

## Layout

| Path | Contents |
| --- | --- |
| `source/<target>/` | One Xbox executable: `target.h` (its XBE facts, each with its address), `seed_functions.json`, `target_hooks.c` (entry hooks with that XBE's addresses), `gen/` (the lifted C: generated, published) |
| `port/windows/src/` | The Windows host: entry point, window, crash report, thread dump, profiler (`main.c`); launcher: title screen, demo/retail detection, ISO installation (`launcher.c`); `port/windows/res/`: icon, version resource, launcher face |
| `port/game/` | Hand-written code the lifted game calls, shared by the targets: manual overrides and indirect-call diagnostics (`recomp_manual.c`) |
| `port/third_party/xboxrecomp/` | The vendored recompiler (`tools/`) and Xbox runtime (`src/`: kernel, NV2A on Direct3D 11, APU, USB, input, video), shared by both targets; per-target behaviour under `#if RESOT_RUNTIME_DEMO` / `RESOT_RUNTIME_RETAIL`; local changes marked `RE-SoT` |
| `port/third_party/extract-xiso/` | extract-xiso 2.7.1, unchanged, built into the executables for the launcher's ISO installation |
| `tools/` | `recomp.ps1` (lift and build), `run.ps1`, `shortcut.ps1`, `seed-scan.py`, `xbe-dis.py`, `check-hlsl.py` |
| `docs/` | `RECOMP.md`, `VALIDATION.md`, `LICENSING.md`, `history/`, `media/` (logo and the README's screenshots) |
| `Assets/`, `research/` | The user's game files and the analysis that quotes them (ignored) |
| `bin/`, `build*/`, `logs/` | Outputs (ignored) |

## Rules

- The project recompiles the **Xbox** builds of Prince of Persia: The Sands of Time only: `xbox-demo` and `xbox-retail`. They are different executables: keep their addresses, seed lists and evidence apart (`source/<target>/`, `research/<target>/`). Nothing learned on one is true of the other until it is checked in that XBE.
- Never commit game files, executables, extracted assets, Ghidra databases, disassembly listings. `Assets/`, `research/`, `bin/`, `build*/` and `logs/` are ignored for that reason. The generated source in `source/<target>/gen/` must be published; this exception does not include game data, executables or extracted assets.
- `source/<target>/gen` is produced by `tools/recomp.ps1` from the user's XBE. Never edit it by hand. Change behaviour in `port/windows` (host), `port/game` (hand-written overrides), in the target's `target.h`, `target_hooks.c` and `seed_functions.json`, or in the shared runtime, `port/third_party/xboxrecomp` (mark every change there with `RE-SoT` and say why in the comment).
- Both targets build from one runtime, each in its own tree (`build/<target>`), compiled with `RESOT_RUNTIME_DEMO` or `RESOT_RUNTIME_RETAIL` (`src/kernel/resot_runtime.h`). A runtime fix checked on one target goes under that target's `#if`; it reaches the other only after it is checked against that XBE. Both executables share `port/windows` and `port/game`.
- Every target-specific constant carries the XBE address it came from. Preserve the SHA-256 checks in `tools/recomp.ps1`; an address is only valid for the hashed file.
- Rebuild the seed list only with `tools/recomp.ps1 -Seeds` (unseeded baseline) or add observed targets with `-Observed <log>`. A wrong seed splits a function and corrupts callee-saved registers far from the cause; find that with `-AbiCheck` builds (`run.ps1 -Abi`).
- Check shaders with `python tools/check-hlsl.py` before rebuilding. Runtime-only edits need `recomp.ps1 -BuildOnly`; lifter or seed changes need the full run.
- Jade Toolkit and the other PoP tools in the surrounding workspace are comparison references. Do not copy their code into the project.
- Say what was observed, not what is hoped. Update the README status table and `docs/VALIDATION.md` when a component changes state, with the command that was run, what was seen and what was not checked. "Builds", "boots", "renders" and "plays correctly" are different claims; a component is not "working" on the strength of a build or of one screenshot.
- The first scene after the demo's menu is Entree (BF entry 15).

## Documents

| Document | About |
| --- | --- |
| [README.md](README.md) | What the project is, status, game files, layout |
| [port/windows/README.md](port/windows/README.md) | Building and running on Windows, controls, switches |
| [docs/RECOMP.md](docs/RECOMP.md) | The pipeline, addresses, runtime changes, diagnostics |
| [docs/VALIDATION.md](docs/VALIDATION.md) | What was run and observed |
| [docs/LICENSING.md](docs/LICENSING.md) | Licences and what is not covered |
| [port/third_party/xboxrecomp/README.md](port/third_party/xboxrecomp/README.md) | The vendored toolkit and runtime |
