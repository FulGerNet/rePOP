"""Every helper the lifter emits must exist in the runtime header.

The lifter names helpers as strings, so nothing ties them to the runtime
that has to define them. A helper can be added to a lift rule and simply
never defined: the Python tests keep passing -- they only compare emitted
text -- and the failure surfaces much later as a compile error in the
generated C, on whichever title first happens to use that instruction.

This walks the helper names out of the lifter source and checks the header
actually defines each one.
"""

import pathlib
import re
import unittest

_ROOT = pathlib.Path(__file__).resolve().parents[2]
_LIFTER = _ROOT / "tools" / "recomp" / "lifter.py"
_RUNTIME = _ROOT / "templates" / "runtime" / "recomp_types.h"

# XMM_LOAD_/XMM_STORE_ are f-string prefixes completed with LOW/HIGH.
_PREFIXES = {"XMM_LOAD_": ("LOW", "HIGH"), "XMM_STORE_": ("LOW", "HIGH")}


def _emitted_helpers():
    src = _LIFTER.read_text(encoding="utf-8")
    names = set()
    for raw in re.findall(r"\bXMM_[A-Z0-9_]*", src):
        if raw in _PREFIXES:
            names.update(raw + half for half in _PREFIXES[raw])
        else:
            names.add(raw)
    return names


def _defined_helpers():
    src = _RUNTIME.read_text(encoding="utf-8")
    defined = set(re.findall(r"^\s*#define\s+(XMM_[A-Z0-9_]+)", src, re.M))
    # static inline functions count as definitions too
    defined.update(re.findall(r"\b(XMM_[A-Z0-9_]+)\s*\([^)]*\)\s*\{", src))
    # ...including the ones built by the lane-wise/bitwise generator macros
    defined.update(re.findall(r"^RECOMP_XMM_\w+\((XMM_[A-Z0-9_]+),", src, re.M))
    return defined


class RuntimeHelpersDefinedTest(unittest.TestCase):
    def test_every_emitted_xmm_helper_is_defined(self):
        missing = sorted(_emitted_helpers() - _defined_helpers())
        self.assertEqual(
            missing, [],
            "lifter emits XMM helpers the runtime header never defines; the "
            "generated C would not compile: " + ", ".join(missing))

    def test_xmm_registers_are_global_state(self):
        """PR #10 removed the function-local declaration, so the runtime has
        to supply the storage and map the guest names onto it."""
        runtime = _RUNTIME.read_text(encoding="utf-8")
        for i in range(8):
            self.assertIn(f"#define xmm{i} g_xmm{i}", runtime)
        self.assertIn("typedef union RecompXmm", runtime)
        main_c = (_ROOT / "templates" / "new-game" / "src" / "main.c").read_text(
            encoding="utf-8")
        self.assertIn("RecompXmm g_xmm0", main_c)


if __name__ == "__main__":
    unittest.main()
