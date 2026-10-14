"""
Self-check for manual_scan (the --exclude-manual source-of-truth scanner).

Run: py -3 tools/recomp/test_manual_scan.py

--exclude-manual reads what recomp_manual.c defines by hand and skips generating
those bodies, instead of maintaining a separate JSON list that drifts from the C.
The whole point is that the C file IS the list, so the parsing has to agree with
what the C compiler actually sees:

  - a definition (`void sub_X(void) {`) is skipped; a declaration (ends `;`) is
    not, or the generated body it needs would be dropped;
  - a definition inside `#if 0` is not a definition -- recomp_manual.c keeps
    disabled overrides as documentation, and counting one makes the generator
    skip a function that then nothing defines (an unresolved external);
  - a sub_X_gen wrapper means the manual code defines sub_X AND calls the
    generated body, so sub_X must still be emitted under the _gen name;
  - every sub_X the manual code merely mentions is 'referenced' and must keep
    that name through any renaming pass.
"""

import os
import sys
import tempfile

sys.path.insert(0, os.path.join(os.path.dirname(__file__), "..", ".."))

from tools.recomp.manual_scan import scan, strip_disabled, definition_names  # noqa: E402


SAMPLE = """\
#include "recomp_funcs.h"

/* A plain hand-written override: defined here, must not be generated. */
void sub_00011000(void) { g_esp += 4; return; }

/* Same-line and next-line brace forms both count as definitions. */
void sub_00022000(void)
{
    eax = 0;
}

/* A declaration, NOT a definition -- the generated body still links. */
void sub_00033000(void);

/* A wrapper: this file defines sub_00044000 and calls the generated body. */
extern void sub_00044000_gen(void);
void sub_00044000(void) { sub_00044000_gen(); eax = 1; }

/* A reference with no definition: the dispatch table names it. */
static void *tbl[] = { sub_00055000 };

#if 0
/* Disabled override kept as documentation -- must NOT count as defined. */
void sub_00066000(void) { nothing(); }
#endif
"""


def _write(tmp):
    p = os.path.join(tmp, "recomp_manual.c")
    with open(p, "w") as f:
        f.write(SAMPLE)
    return p


def test_scan_partitions_correctly():
    with tempfile.TemporaryDirectory() as tmp:
        skip, wrap, ref = scan(_write(tmp))
    # defined by hand (incl. the wrapper's own sub_X definition)
    assert skip == {0x11000, 0x22000, 0x44000}, [hex(a) for a in sorted(skip)]
    # wrapped
    assert wrap == {0x44000}, [hex(a) for a in sorted(wrap)]
    # every sub_ the file mentions at all
    assert {0x11000, 0x22000, 0x33000, 0x44000, 0x55000} <= ref, \
        [hex(a) for a in sorted(ref)]


def test_disabled_block_is_not_a_definition():
    with tempfile.TemporaryDirectory() as tmp:
        skip, _, _ = scan(_write(tmp))
    assert 0x66000 not in skip, "an #if 0 override was counted as defined"


def test_declaration_is_not_a_definition():
    with tempfile.TemporaryDirectory() as tmp:
        skip, _, _ = scan(_write(tmp))
    assert 0x33000 not in skip, "a forward declaration was counted as defined"


def test_strip_disabled_handles_nested_conditionals():
    src = ("void a(void){}\n"
           "#if 0\n"
           "  #ifdef X\n"
           "  void b(void){}\n"
           "  #endif\n"
           "void c(void){}\n"
           "#endif\n"
           "void d(void){}\n")
    live = strip_disabled(src)
    assert "void a" in live and "void d" in live
    assert "void b" not in live and "void c" not in live


def test_missing_file_excludes_nothing():
    skip, wrap, ref = scan("/no/such/recomp_manual.c")
    assert skip == set() and wrap == set() and ref == set()


def _run():
    fns = [v for k, v in sorted(globals().items()) if k.startswith("test_")]
    for fn in fns:
        fn()
        print("  ok  %s" % fn.__name__)
    print("%d checks passed" % len(fns))


if __name__ == "__main__":
    _run()
