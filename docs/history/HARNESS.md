# Prince Xbox-demo recomp

**NON PRENDERE CODICE O INVENTARE LETTORI 3D DA JADE TOOLKIT.** The PoP Tools
are reference material only. Derive the runtime from the original XBE;
the older, authentic `Jade Source Code` may be used after comparing against
this demo's binary. The first scene after the main menu is **Entree** (BF 15).

The runtime now decodes original eight-byte `(key, type)` records used by
the XBE world-list routine `0x29240` and AI-model routine `0x10A430`.
The Menu_wow AI-model links and recovered XBE callbacks are documented in
`../GhidraProjects/SOT_XBOX_main_menu_ai_links.md`.
The original `.ova` variable block and `.ofc` node block now decode in
`src/ai_variables.cpp` and `src/ai_function.cpp`; the New Game variable,
map-change variable, and `load map` branch are traced in
`../GhidraProjects/SOT_XBOX_menu_var_ofc_trace.md`.

`prince.exe` is an XBE-led Windows host, not a BF scene viewer. It does not link
Jade Toolkit and deliberately contains no free camera, F11 debug panel,
placeholder Hall, procedural Prince actor or guessed geometry.

The executable verifies that it can locate the original `default.xbe`, starts
from the recovered `SOT_DemoMain` boundary at `0x000110B0`, preserves the
recovered clear/present frame ordering, and translates the exact startup call
to `SOT_RequestDemoInt` at `0x000138A0` for `e3_intro.int`. The latter's
duplicate suppression, queue and `e3_trail.int` transition are covered by tests.
The `SOT_RequestDemoInt` transition now follows the recovered cleanup and
timeline calls at `0x19000`, `0x10AFA0`, and `0x10B230`. The host state models
the release order and timing effects. Actual Bink decoder and D3D resource
release still require the corresponding platform backends; INT playback and
scene loading are not connected yet.

Build and validate:

```powershell
cmake -S . -B build-msvc
cmake --build build-msvc --config Release
ctest --test-dir build-msvc -C Release --output-on-failure
.\build-msvc\prince.exe --smoke
```

The reverse-engineering evidence is kept under `../GhidraProjects`, notably
`SOT_XBOX_int_request.md`, `SOT_XBOX_asset_runtime.md` and
`SOT_XBOX_original_runtime_graph.md`.

The former Jade Toolkit based BF inspection targets are historical tooling,
excluded from the default build. They can be enabled only for comparison with
`-DSOT_BUILD_LEGACY_BF_TOOLS=ON`; they are not a source for the recomp runtime.
