"""Self-check that the generated `ebp` local starts at a defined value.

ebp is the one callee-saved register declared as a function local rather than
reached through a global macro. It was declared without an initialiser, and a
function with a real "push ebp; mov ebp, esp" prologue reads it on its very
first statement -- PUSH32(esp, ebp) runs before "ebp = esp" gives it a value.

So the emitted function begins by pushing an indeterminate word. At -O0 that is
whatever the host stack held; from -O1 up it is poison the compiler may
propagate, and the word goes into the guest stack as a frame pointer that the
epilogue pops back and that frame walkers may follow.
"""

import unittest

from . import config
from .translator import FunctionTranslator


BASE = 0x00011000

# push ebp; mov ebp, esp; pop ebp; ret  -- a real frame.
PROLOGUE = bytes.fromhex("558BEC5DC3")
# mov eax, [ebp+8]; xor eax, eax; pop ebp; ret -- reads the caller's frame.
FRAMELESS = bytes.fromhex("8B450833C05DC3")

# Every global config._install writes, so one test cannot leak into another.
_CONFIG_GLOBALS = (
    "_SECTIONS", "SECTIONS", "_configured_from",
    "TEXT_VA_START", "TEXT_VA_END", "RDATA_VA_START", "RDATA_VA_END",
    "DATA_VA_START", "DATA_VA_END", "KERNEL_THUNK_ADDR", "ENTRY_POINT",
)


class EbpInitTest(unittest.TestCase):
    def setUp(self):
        self._saved = {k: getattr(config, k) for k in _CONFIG_GLOBALS}

    def tearDown(self):
        for k, v in self._saved.items():
            setattr(config, k, v)

    def _translate(self, image):
        config._install(
            [config.Section(".text", BASE, len(image), 0x0000, len(image), True)],
            entry_point=BASE, kernel_thunk_addr=BASE, origin="ebp-init-test")
        db = {BASE: {"start": f"0x{BASE:08X}", "end": BASE + len(image),
                     "_addr": BASE, "size": len(image)}}
        return FunctionTranslator(image, db).translate_function(BASE, db[BASE])

    def test_frame_function_declares_ebp_initialised(self):
        c = self._translate(PROLOGUE)
        self.assertIn("uint32_t ebp = 0;", c)
        # The pre-fix spelling. This is the whole bug: an uninitialised local.
        self.assertNotIn("uint32_t ebp;", c)

    def test_the_prologue_really_does_read_ebp_first(self):
        """Why the initialiser matters: the push precedes the assignment."""
        c = self._translate(PROLOGUE)
        push = c.index("PUSH32(esp, ebp)")
        assign = c.index("ebp = esp")
        decl = c.index("uint32_t ebp")
        self.assertLess(decl, push, c)
        self.assertLess(push, assign,
                        "push no longer precedes the assignment; this test's "
                        "premise needs rechecking:\n" + c)

    def test_frameless_function_still_inherits_the_caller_frame(self):
        """The initialiser must not displace the frameless inheritance."""
        c = self._translate(FRAMELESS)
        self.assertIn("uint32_t ebp = 0;", c)
        self.assertIn("ebp = g_ebp;", c)
        self.assertLess(c.index("uint32_t ebp = 0;"), c.index("ebp = g_ebp;"), c)


if __name__ == "__main__":
    unittest.main()
