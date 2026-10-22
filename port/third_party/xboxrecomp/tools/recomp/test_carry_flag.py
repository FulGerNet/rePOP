"""
Self-check for carry-flag production.

Run: py -3 tools/recomp/test_carry_flag.py

Regression guard for the bug where `_cf` was declared in every function
containing adc/sbb but never assigned by anything. Every carry read as 0, so
multi-word arithmetic silently lost the carry into the high word, and the
`shr ecx, 1` / `rep stosd` / `adc ecx, ecx` idiom MSVC emits to handle an odd
trailing element always recovered 0 instead of the shifted-out bit.
"""

import os
import sys

sys.path.insert(0, os.path.join(os.path.dirname(__file__), "..", ".."))

from tools.recomp.lifter import Lifter  # noqa: E402


class _Op:
    def __init__(self, text, type="reg", reg=None, size=4, mem_size=None, imm=0):
        self.text = text
        self.type = type
        self.reg = reg
        self.size = size
        self.mem_size = mem_size
        self.imm = imm


class _Insn:
    def __init__(self, mnemonic, operands):
        self.mnemonic = mnemonic
        self.operands = operands


def _lift(mnemonic, ops, needs_cf=True):
    lifter = Lifter()
    lifter.needs_cf = needs_cf
    return "\n".join(lifter.lift_instruction(_Insn(mnemonic, ops)))


EAX = _Op("eax", reg="eax")
EDX = _Op("edx", reg="edx")
ECX = _Op("ecx", reg="ecx")
ONE = _Op("1", type="imm", imm=1)


def test_add_produces_carry():
    out = _lift("add", [EAX, EDX])
    assert "_cf =" in out, out
    # CF must be read from the operands *before* the destination is written.
    assert out.index("_cf =") < out.index("eax ="), out


def test_sub_produces_borrow():
    out = _lift("sub", [EAX, EDX])
    assert "_cf =" in out, out
    assert "<" in out, out


def test_shr_produces_shifted_out_bit():
    # The exact idiom from Halo geometry.c: shr ecx,1 / rep stosd / adc ecx,ecx
    out = _lift("shr", [ECX, ONE])
    assert "_cf =" in out, out
    assert ") - 1" in out, out


def test_adc_consumes_and_reproduces_carry():
    out = _lift("adc", [EDX, ECX])
    assert "_cf" in out, out
    # Carry-out for the next word in the chain.
    assert "_cf = (int)((_t >>" in out, out


def test_logical_ops_clear_carry():
    out = _lift("and", [EAX, EDX])
    assert "_cf = 0" in out, out


def test_no_cost_when_function_has_no_carry_consumer():
    out = _lift("add", [EAX, EDX], needs_cf=False)
    assert "_cf" not in out, out


if __name__ == "__main__":
    failures = 0
    for name, fn in sorted(globals().items()):
        if not name.startswith("test_"):
            continue
        try:
            fn()
            print(f"  ok   {name}")
        except AssertionError as exc:
            failures += 1
            print(f"  FAIL {name}\n{exc}")
    print("carry flag: " + ("OK" if not failures else f"{failures} FAILED"))
    sys.exit(1 if failures else 0)
