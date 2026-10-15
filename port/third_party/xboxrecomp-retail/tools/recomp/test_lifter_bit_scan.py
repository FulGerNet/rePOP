"""Bit scan lifting: value, the zero case, and the flag it publishes.

Originally contributed in #16 alongside a second implementation. The lifter
already had one, reached earlier in lift_instruction, and the two disagreed on
where ZF lives -- the contributed body wrote `_flags` while the flag path read
the `_fa`/`_fb` snapshot, so a jcc after a bit scan would have read a stale
value. These tests were rewritten against the surviving implementation, which
publishes ZF through the same snapshot a `cmp src, 0` leaves and so composes
with everything else that reads flags.
"""

from tools.recomp.disasm import BasicBlock, Instruction, Operand
from tools.recomp.lifter import Lifter, lift_basic_block


def _reg(name, size=4):
    op = Operand("reg")
    op.reg = name
    op.size = size
    return op


def _scan(mnemonic, dst="eax", src="ecx", size=4):
    insn = Instruction(0, 3, mnemonic, f"{dst}, {src}", "0fbcc1")
    insn.operands = [_reg(dst, size), _reg(src, size)]
    return insn


def test_bsf_scans_from_the_low_bit():
    body = "".join(Lifter().lift_instruction(_scan("bsf")))
    assert "_bs_i = 0" in body and "_bs_i++" in body


def test_bsr_scans_from_the_high_bit():
    body = "".join(Lifter().lift_instruction(_scan("bsr")))
    assert "_bs_i = 31" in body and "_bs_i--" in body


def test_zero_source_leaves_the_destination_untouched():
    # The architecture leaves the destination undefined for a zero source, so
    # the lift must not invent a value -- the write sits behind the guard.
    body = "".join(Lifter().lift_instruction(_scan("bsf")))
    assert "if (_bs_v) {" in body


def test_zero_flag_is_published_through_the_compare_snapshot():
    body = "".join(Lifter().lift_instruction(_scan("bsf")))
    assert "_fa = _bs_v" in body and "_fb = 0" in body


def test_jnz_after_a_scan_reads_that_snapshot():
    scan = _scan("bsr")
    jump = Instruction(3, 2, "jne", "0x10", "750b")
    jump.jump_target = 0x10
    lifter = Lifter()
    lifter.func_start = 0
    lifter.func_end = 0x20
    generated, _ = lift_basic_block(
        lifter, BasicBlock(start=0, instructions=[scan, jump]))
    assert "_fa" in generated[-1] and "goto loc_00000010;" in generated[-1]
