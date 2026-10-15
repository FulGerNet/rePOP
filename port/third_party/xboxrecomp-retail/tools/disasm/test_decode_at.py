"""
Self-check for Engine.decode_at (sweep realignment).

Run: py -3 tools/disasm/test_decode_at.py

linear_sweep decodes each section as a single stream and resyncs only by
skipping one byte when capstone fails. Where it runs through data -- a jump
table, padding, an embedded constant -- it emerges misaligned and stays out of
phase until it happens to fall back into step. Everything downstream keys off
engine.instructions, so an address the sweep stepped over does not exist:
recursive_descent stops dead there because it only reads that dict, and
_pass_call_targets silently dropped the candidate.

On Halo 2276 that discarded 46 direct call targets -- provable function starts,
one of them 16-aligned in a 5.7 KB hole and named in its own caller's call list.
31 of the 46 come back with this.
"""

import os
import sys

sys.path.insert(0, os.path.join(os.path.dirname(__file__), "..", ".."))

from tools.disasm.engine import DisasmEngine  # noqa: E402


class _Section:
    def __init__(self, va, data, executable=True):
        self.virtual_addr = va
        self.virtual_size = len(data)
        self.executable = executable
        self.name = ".text"


class _Image:
    """Minimal duck-typed BinaryImage."""
    def __init__(self, *sections):
        self._secs = sections
        self.base_address = min(s.virtual_addr for s in sections)
        self.image_size = max(s.virtual_addr + s.virtual_size
                              for s in sections) - self.base_address

    def get_section_at_va(self, va):
        for s in self._secs:
            if s.virtual_addr <= va < s.virtual_addr + s.virtual_size:
                return s
        return None

    def get_section_data(self, section):
        return section.data


def _engine(va, data, executable=True):
    s = _Section(va, data, executable)
    s.data = data
    img = _Image(s)
    return DisasmEngine(img), s


BASE = 0x00010000


def test_decode_at_reaches_an_address_the_sweep_stepped_over():
    #  0x10000: 90                       nop
    #  0x10001: b9 78 56 34 12           mov ecx, 0x12345678   <- swallows 0x10002..5
    #  0x10006: 33 c0                    xor eax, eax          <- the real target
    #  0x10008: c3                       ret
    data = b"\x90\xb9\x78\x56\x34\x12\x33\xc0\xc3"
    eng, _ = _engine(BASE, data)
    # Simulate a sweep that went out of phase: pretend it only landed on 0x10001.
    eng.decode_at(BASE + 1)
    assert (BASE + 6) in eng.instructions, "resync should have covered 0x10006"

    # Now the misalignment case: nothing decoded at all, ask for 0x10006 directly.
    eng2, _ = _engine(BASE, data)
    added = eng2.decode_at(BASE + 6)
    assert added >= 1, added
    assert (BASE + 6) in eng2.instructions
    assert eng2.instructions[BASE + 6].mnemonic == "xor", \
        eng2.instructions[BASE + 6].mnemonic


def test_decode_at_stops_on_resync_and_does_not_evict():
    data = b"\x90\x90\x90\x33\xc0\xc3"
    eng, sec = _engine(BASE, data)
    eng.linear_sweep(sec)
    before = dict(eng.instructions)
    # Every address is already decoded here, so decoding at one adds nothing new
    # and must not replace what is there -- an eviction would corrupt whichever
    # function already walks that chain.
    eng.decode_at(BASE + 3)
    assert len(eng.instructions) == len(before)
    for a, i in before.items():
        assert eng.instructions[a] is i, "decode_at evicted an existing insn"


def test_decode_at_refuses_non_executable_and_out_of_range():
    data = b"\x33\xc0\xc3"
    s = _Section(BASE, data, executable=False)
    s.data = data
    eng = DisasmEngine(_Image(s))
    assert eng.decode_at(BASE) == 0, "must not decode a non-executable section"

    eng2, _ = _engine(BASE, data)
    assert eng2.decode_at(BASE + 0x9999) == 0, "must not decode outside the section"


def test_decode_at_stops_at_a_terminator():
    #  ret immediately, then junk that must not be pulled in
    data = b"\xc3" + b"\x00" * 32
    eng, _ = _engine(BASE, data)
    added = eng.decode_at(BASE)
    assert added == 1, added
    assert eng.instructions[BASE].is_ret


def test_probe_accepts_a_function_body_and_rejects_fill():
    """
    probes_as_function_body is the corroboration _pass_call_targets requires
    before manufacturing a function at a call target the sweep stepped over.
    It replaced a 16-byte alignment test that dropped Wreckless's _mtinitlocks
    (unaligned, packed straight after a jump table) and accepted all-zero fill.
    """
    #  push esi / push edi / xor eax,eax / inc eax / pop edi / pop esi / ret
    body = bytes.fromhex("5657 33c0 40 5f5e c3".replace(" ", ""))
    #  two nops of padding put the body at an unaligned start -- the
    #  _mtinitlocks shape exactly
    eng, _ = _engine(BASE, bytes.fromhex("9090") + body)
    assert eng.probes_as_function_body(BASE + 2),         "a body reaching a ret is a function start whatever its alignment"

    #  all-zero fill decodes forever as `add [eax], al` and never terminates
    eng2, _ = _engine(BASE, bytes(4096))
    assert not eng2.probes_as_function_body(BASE),         "zero fill must not read as a function"

    #  a lone 0xff at the end of the section: undecodable, runs off the end
    eng3, _ = _engine(BASE, bytes.fromhex("ff"))
    assert not eng3.probes_as_function_body(BASE)


def test_probe_does_not_mutate_the_sweep():
    eng, _ = _engine(BASE, bytes.fromhex("9090565733c0c3"))
    before = dict(eng.instructions)
    eng.probes_as_function_body(BASE + 2)
    assert eng.instructions == before,         "probing must not record instructions the sweep did not produce"


def test_probe_follows_a_tail_jump():
    #  push esi / jmp $+2 -- a tail call is a legitimate function ending
    eng, _ = _engine(BASE, bytes.fromhex("56eb00c3"))
    assert eng.probes_as_function_body(BASE)


def _run():
    fns = [v for k, v in sorted(globals().items()) if k.startswith("test_")]
    for fn in fns:
        fn()
        print("  ok  %s" % fn.__name__)
    print("%d checks passed" % len(fns))


if __name__ == "__main__":
    _run()
