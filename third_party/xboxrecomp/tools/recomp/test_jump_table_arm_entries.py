"""
Self-check for switch arms that land outside their dispatching function.

Run: py -3 tools/recomp/test_jump_table_arm_entries.py

A function list can cut one function at its own switch. The lifter then sees
arms past the dispatching entry's end and emits the indexed jump as an
indirect tail call, and the runtime dispatches the selected arm by address.
An arm that is not itself a function start has no generated body, so the
runtime stops. In Dead or Alive Xtreme Beach Volleyball, leaving the View
Collection screen reached 0xDE030, the shared exit of a split 4-way switch.

The pass gives such an arm its own entry, recovered from the code reachable
from it up to its table. It must not read into an adjacent table (whose arms
belong to another switch), and it must leave an arm alone when the arm cannot
run as a function of its own: a partial entry misbehaves silently, and a loud
unresolved dispatch is better.
"""

import os
import sys

sys.path.insert(0, os.path.join(os.path.dirname(__file__), "..", ".."))

from tools.recomp import config  # noqa: E402
from tools.recomp.translator import FunctionTranslator  # noqa: E402

BASE = 0x00010000
SPLIT = BASE + 0x10       # a false function start the switch runs across
ARM = BASE + 0x30         # an arm with no entry of its own
PIECE = BASE + 0x34       # another false start, inside the arm's code
TABLE = BASE + 0x40       # the split switch: SPLIT, ARM
NEXT_TABLE = BASE + 0x48  # SPLIT's own switch, right after it


def _entry(start, end):
    return {"start": f"0x{start:08X}", "end": end, "_addr": start,
            "size": end - start}


def _translator(func_db, arm_code):
    image = bytearray(b"\xCC" * 0x100)

    def put(va, data):
        image[va - BASE:va - BASE + len(data)] = data

    put(BASE, b"\xFF\x24\x85" + TABLE.to_bytes(4, "little"))       # jmp [eax*4+TABLE]
    put(SPLIT, b"\xFF\x24\x85" + NEXT_TABLE.to_bytes(4, "little"))
    put(SPLIT + 0x10, b"\xC3")
    put(SPLIT + 0x14, b"\xC3")
    put(ARM, arm_code)
    put(PIECE + 4, b"\xC3")
    for table, targets in ((TABLE, (SPLIT, ARM)),
                           (NEXT_TABLE, (SPLIT + 0x10, SPLIT + 0x14))):
        put(table, b"".join(t.to_bytes(4, "little") for t in targets))
    config._install(
        [config.Section(".text", BASE, len(image), 0x0000, len(image), True)],
        entry_point=BASE, kernel_thunk_addr=BASE, origin="jump-table-arm-test")
    return FunctionTranslator(bytes(image), func_db)


def _split_db():
    return {BASE: _entry(BASE, SPLIT), SPLIT: _entry(SPLIT, PIECE),
            PIECE: _entry(PIECE, TABLE)}


def test_arm_gets_an_entry_covering_its_reachable_code():
    translator = _translator(_split_db(), b"\xEB\x06")    # jmp PIECE + 4
    # The adjacent table's arms belong to SPLIT's own switch.
    assert translator.discover_jump_table_entries() == {ARM}
    assert translator.func_db[ARM]["end"] == PIECE + 5
    assert translator.func_db[PIECE]["end"] == TABLE
    code = translator.translate_function(ARM, translator.func_db[ARM])
    assert f"goto loc_{PIECE + 4:08X};" in code, code
    print("ok  arm_gets_an_entry_covering_its_reachable_code")


def test_switch_inside_its_function_adds_nothing():
    translator = _translator({BASE: _entry(BASE, TABLE)}, b"\xEB\x06")
    assert translator.discover_jump_table_entries() == set()
    print("ok  switch_inside_its_function_adds_nothing")


def test_arm_that_cannot_run_alone_is_left_unresolved():
    for name, code in (
            ("branches back to a non-entry", "ebf6"),     # jmp ARM - 8
            ("runs off its range", "eb07"),               # jmp to int3s
            ("reads the dispatcher's flags", "83d000c3"),  # adc eax, 0
            ("calls a missing body", "e84b000000c3")):    # call BASE+0x80
        translator = _translator(_split_db(), bytes.fromhex(code))
        assert translator.discover_jump_table_entries() == set(), name
    print("ok  arm_that_cannot_run_alone_is_left_unresolved")


if __name__ == "__main__":
    test_arm_gets_an_entry_covering_its_reachable_code()
    test_switch_inside_its_function_adds_nothing()
    test_arm_that_cannot_run_alone_is_left_unresolved()
    print("jump_table_arm_entries: ALL PASS")
