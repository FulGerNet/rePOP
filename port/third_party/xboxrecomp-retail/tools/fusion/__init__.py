"""White-room readers for Microsoft's shipped Xbox BC (Ficl/Fission) modules.

These parse *publicly distributed retail binaries* (the recompiled `xefu_*`/`xeo3_*`
DLLs in a BC package) to extract facts useful to this project: a per-title symbol
table, the guest address map, and the source/title identity. No Microsoft code, IR,
or output is copied into or emitted by this toolkit -- see docs/technical/ms-fusion-*.md.
"""
