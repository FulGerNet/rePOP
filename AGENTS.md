# reSOT development rules

- The project recompiles the **Xbox** builds of Prince of Persia: The Sands of Time only: `xbox-demo` and `xbox-retail`. They are different executables: keep their addresses, seed lists and evidence apart (`src/<target>/`, `research/<target>/`). Nothing learned on one is true of the other until it is checked in that XBE.
- Never commit game files, executables, extracted assets, Ghidra databases, disassembly listings or generated code. `Assets/`, `research/`, `src/*/gen/`, `bin/`, `build*/` and `logs/` are ignored for that reason.
- `src/<target>/gen` is produced by `tools/recomp.ps1` from the user's XBE. Never edit it by hand. Change behaviour in `src/common` (host, hand-written overrides), in the target's `target.h` and `seed_functions.json`, or in `third_party/xboxrecomp` (mark every change there with `RE-SoT` and say why in the comment).
- Every target-specific constant carries the XBE address it came from. Preserve the SHA-256 checks in `tools/recomp.ps1`; an address is only valid for the hashed file.
- Rebuild the seed list only with `tools/recomp.ps1 -Seeds` (unseeded baseline) or add observed targets with `-Observed <log>`. A wrong seed splits a function and corrupts callee-saved registers far from the cause; find that with `-AbiCheck` builds (`run.ps1 -Abi`).
- Check shaders with `python tools/check-hlsl.py` before rebuilding. Runtime-only edits need `recomp.ps1 -BuildOnly`; lifter or seed changes need the full run.
- Jade Toolkit and the other PoP tools in the surrounding workspace are comparison references. Do not copy their code into the project.
- Say what was observed, not what is hoped. Update the README status table and `docs/VALIDATION.md` when a component changes state, with the command that was run, what was seen and what was not checked. "Builds", "boots", "renders" and "plays correctly" are different claims; a component is not "working" on the strength of a build or of one screenshot.
- The first scene after the demo's menu is Entree (BF entry 15).
