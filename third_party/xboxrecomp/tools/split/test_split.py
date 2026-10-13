"""Self-check for the function splitter.

Run: py -3 -m pytest tools/split/test_split.py

The one property that matters: the bytes that go into a .s come back out of it
unchanged. Everything else in the file is a comment for a human, but if the db
directives drift from the original encoding then a decomp built on them stops
matching the shipped binary and the whole point is gone.
"""

import os
import re
import tempfile

from .splitter import _split_hex, write_function


class _Insn:
    def __init__(self, address, bytes_hex, mnemonic="nop", op_str="",
                 call_target=None, jump_target=None):
        self.address = address
        self.bytes_hex = bytes_hex
        self.size = len(bytes_hex) // 2
        self.mnemonic = mnemonic
        self.op_str = op_str
        self.call_target = call_target
        self.jump_target = jump_target


class _Func:
    def __init__(self, start, end, name="sub_00001000"):
        self.start = start
        self.end = end
        self.name = name
        self.section = ".text"
        self.confidence = 0.9
        self.detection_method = "prologue"
        self.num_instructions = 0
        self.called_by = []
        self.calls_to = []

    @property
    def size(self):
        return self.end - self.start


def _emitted_bytes(path):
    """Every byte the .s actually assembles to, in order."""
    out = []
    for line in open(path, encoding="utf-8"):
        line = line.split(";", 1)[0]           # strip the disassembly comment
        m = re.match(r"\s*db\s+(.*)", line)
        if not m:
            continue
        for tok in m.group(1).split(","):
            tok = tok.strip()
            if tok:
                out.append(int(tok, 16))
    return bytes(out)


def test_unbroken_hex_is_split_per_byte():
    # bytes_hex arrives as one string, not whitespace-separated. Splitting on
    # whitespace produced a single huge literal per instruction and every
    # emitted file was wrong while looking plausible.
    assert _split_hex("558bec") == ["55", "8b", "ec"]
    assert _split_hex("c3") == ["c3"]
    assert _split_hex("") == []


def test_emitted_bytes_match_the_original_encoding():
    insns = [
        _Insn(0x1000, "55", "push", "ebp"),
        _Insn(0x1001, "8bec", "mov", "ebp, esp"),
        _Insn(0x1003, "e857feffff", "call", "0xf5f", call_target=0xF5F),
        # Longer than one db line, so the continuation path is covered too.
        _Insn(0x1008, "0f1f840000000000660f1f440000", "nop", "word ptr [eax]"),
        _Insn(0x1016, "c3", "ret", ""),
    ]
    func = _Func(0x1000, 0x1017)
    func.num_instructions = len(insns)
    expect = bytes.fromhex("".join(i.bytes_hex for i in insns))

    with tempfile.TemporaryDirectory() as tmp:
        path = os.path.join(tmp, "f.s")
        write_function(path, func, insns, None, lambda a: "sub_%08X" % a)
        assert _emitted_bytes(path) == expect

        text = open(path, encoding="utf-8").read()
        # The callee is named, because "call 0xf5f" is not a lead to follow.
        assert "sub_00000F5F" in text
        # And the function is labelled so it can be referenced.
        assert "sub_00001000:" in text


def test_branch_targets_inside_the_function_become_labels():
    insns = [
        _Insn(0x2000, "eb02", "jmp", "0x2004", jump_target=0x2004),
        _Insn(0x2002, "6690", "xchg", "ax, ax"),
        _Insn(0x2004, "c3", "ret", ""),
    ]
    func = _Func(0x2000, 0x2005, name="sub_00002000")
    func.num_instructions = len(insns)

    with tempfile.TemporaryDirectory() as tmp:
        path = os.path.join(tmp, "f.s")
        write_function(path, func, insns, None, lambda a: "sub_%08X" % a)
        text = open(path, encoding="utf-8").read()
        assert ".L_00002004:" in text
        # Still byte-exact with a label in the middle.
        assert _emitted_bytes(path) == bytes.fromhex("eb0266 90c3".replace(" ", ""))
