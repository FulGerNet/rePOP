# Licensing and private inputs

The root LICENSE is inherited from reSOT. Vendored component licenses, notices
and authors remain in `port/third_party/xboxrecomp/` and
`port/third_party/extract-xiso/`. These licenses do not grant rights to Ubisoft's
game, disc content, generated game code, logo or fonts.

The XBE and disc files must be supplied by the user. `Assets/`, `research/`,
`build*/`, `bin/`, and `logs/` are ignored. The executable embeds the checked
XBE as a resource for local use; binaries must not be mistaken for freely
redistributable runtime-only artifacts. No binaries or game assets are committed.

The generated C is retained in source/xbox-retail/gen as in reSOT. It is derived
from the game and is not relicensed by the host's LICENSE. The AtlantisMF.ttf
font is copied from the user's local reSOT setup and ignored; no new license is
asserted. CMake embeds it only when present and otherwise uses a Windows font.
SDL3 and compiler dependency attribution remains in the local dependency trees.
