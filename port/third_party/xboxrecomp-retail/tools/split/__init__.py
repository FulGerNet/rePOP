"""Split an Xbox binary into one assembly file per function, for decompilation.

The recompiler and a decompilation project want the same three things out of a
binary -- where the functions are, what shape each one is, and what bytes it
contains -- and this exposes them without the recompiler's opinion about what
to do next.
"""
