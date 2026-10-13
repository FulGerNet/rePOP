"""
Self-check for fall-through into the next function.

Run: py -3 tools/recomp/test_fallthrough.py

The disassembler splits a straight-line run of code into separate functions at
any address something else targets. A function's last instruction can then be an
ordinary one (or a conditional jump) that just runs off the end into the next
function -- x86 executes that fall-through. A C function body ends instead,
silently dropping whatever the next function does.

In Burnout 3 this was an 8-byte esp leak: sub_00013F6F (one `mov`, no terminator)
fell into sub_00013F75's shared `pop ebx; ret`. Split apart, the pop and the ret
never ran, so the caller sub_000165F0 restored ebx from the wrong slot and the
title's main loop (sub_00156400 -> sub_000165F0 while flag == ebx) exited after a
single iteration. The fix emits the fall-through as an explicit tail call.
"""

import os
import sys

sys.path.insert(0, os.path.join(os.path.dirname(__file__), "..", ".."))

from tools.recomp import config  # noqa: E402
from tools.recomp.translator import FunctionTranslator  # noqa: E402

BASE = 0x00010000

# mov cl, [0x004A1C77]  -> 8A 0D 77 1C 4A 00   (6 bytes, no control transfer)
MOV_CL = bytes.fromhex("8A0D771C4A00")
# pop ebx; ret          -> 5B C3
POP_RET = bytes.fromhex("5BC3")
# ret                   -> C3
RET = bytes.fromhex("C3")
# jmp $ (EB FE, to self, an intra-function unconditional jump) then a pad byte
JMP_SELF = bytes.fromhex("EBFE")


def _setup(image):
    # One code section, VA BASE -> file offset 0, so byte n is at VA BASE+n.
    config._install(
        [config.Section(".text", BASE, len(image), 0x0000, len(image), True)],
        entry_point=BASE, kernel_thunk_addr=BASE, origin="fallthrough-test")
    return image


def _func_db(placements):
    """placements: list of (va, size); build contiguous func_db entries."""
    db = {}
    for va, size in placements:
        db[va] = {"start": f"0x{va:08X}", "end": va + size,
                  "_addr": va, "size": size}
    return db


def _translate(image, db, va):
    ft = FunctionTranslator(image, db)
    return ft.translate_function(va, db[va])


def test_fallthrough_emits_tail_call():
    # func A: one mov, no terminator, at BASE; func B: pop ebx; ret right after.
    image = _setup(MOV_CL + POP_RET)
    db = _func_db([(BASE, len(MOV_CL)), (BASE + len(MOV_CL), len(POP_RET))])
    c = _translate(image, db, BASE)
    nxt = BASE + len(MOV_CL)
    assert f"sub_{nxt:08X}(); return;" in c, c
    assert "fallthrough" in c, c
    print("ok  fallthrough_emits_tail_call")


def test_ret_terminated_gets_no_tail_call():
    # A function that ends in `ret` already exits; it must not gain a tail call.
    image = _setup(MOV_CL + RET)
    db = _func_db([(BASE, len(MOV_CL) + len(RET))])
    c = _translate(image, db, BASE)
    assert "fall through" not in c, c
    print("ok  ret_terminated_gets_no_tail_call")


def test_pop_ret_terminated_gets_no_tail_call():
    image = _setup(POP_RET)
    db = _func_db([(BASE, len(POP_RET))])
    c = _translate(image, db, BASE)
    assert "fall through" not in c, c
    print("ok  pop_ret_terminated_gets_no_tail_call")


def test_unconditional_jmp_is_not_fallthrough():
    # Last instruction is an unconditional jmp: control leaves, no fall-through.
    image = _setup(JMP_SELF)
    db = _func_db([(BASE, len(JMP_SELF))])
    c = _translate(image, db, BASE)
    assert "fall through" not in c, c
    print("ok  unconditional_jmp_is_not_fallthrough")


def test_fallthrough_target_off_section_is_skipped():
    # If `end` is past the mapped code, there is nothing to tail-call: the guard
    # is is_code_address(end). Place the mov at the very end of the section.
    image = _setup(MOV_CL)
    db = _func_db([(BASE, len(MOV_CL))])   # end == BASE+6 == section end (data)
    c = _translate(image, db, BASE)
    assert "fall through" not in c, c
    print("ok  fallthrough_target_off_section_is_skipped")


if __name__ == "__main__":
    test_fallthrough_emits_tail_call()
    test_ret_terminated_gets_no_tail_call()
    test_pop_ret_terminated_gets_no_tail_call()
    test_unconditional_jmp_is_not_fallthrough()
    test_fallthrough_target_off_section_is_skipped()
    print("\nall passed")
