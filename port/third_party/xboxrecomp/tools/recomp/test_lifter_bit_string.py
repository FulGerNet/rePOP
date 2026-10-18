"""bt/bts with a memory bit base address a bit string, not one dword.

MSVC builds strpbrk, strspn and strcspn out of a 256-bit character map pushed
onto the stack: eight zero dwords, "bts [esp], eax" for each character of the
set, "bt [esp], eax" for each character of the string. Masking the offset to 31
folds all eight dwords onto the first, and the map aliases mod 32 -- '?' (0x3F)
sets the bit '_' (0x5F) then tests.

Half-Life 2's CRT stats a path for wildcards before opening it, so every path
containing an underscore was rejected as if it held a '?'. Its archives are
zip0_xbox.xzp and zip0_xbox_english.xzp, so the engine found no content at all
while paths without an underscore opened normally.
"""
import unittest

from .disasm import BasicBlock, Instruction, Operand
from .lifter import Lifter, lift_basic_block


def _mem_esp():
    return Operand(type="mem", mem_base="esp", mem_index=None, mem_scale=1,
                   mem_disp=0, mem_size=4)


def _lift(mnemonic, bit_operand):
    insn = Instruction(0, 4, mnemonic, "dword ptr [esp], eax", "0fab0424")
    insn.operands = [_mem_esp(), bit_operand]
    lifter = Lifter()
    lifter.needs_cf = True
    lifted, _ = lift_basic_block(
        lifter, BasicBlock(start=0, instructions=[insn]))
    return chr(10).join(lifted)


class BitStringTest(unittest.TestCase):
    def test_bts_selects_the_dword_by_offset(self):
        generated = _lift("bts", Operand(type="reg", reg="eax"))
        self.assertIn("(((int32_t)(eax) >> 5) * 4)", generated)
        self.assertIn("(eax) & 31", generated)

    def test_bt_selects_the_dword_by_offset(self):
        generated = _lift("bt", Operand(type="reg", reg="eax"))
        self.assertIn("(((int32_t)(eax) >> 5) * 4)", generated)

    def test_immediate_offset_stays_within_the_addressed_dword(self):
        # An immediate bit offset really is limited to 0..31 of the dword the
        # operand names, so it must NOT be turned into a string index.
        generated = _lift("bts", Operand(type="imm", imm=7))
        self.assertNotIn(">> 5", generated)

    def test_register_bit_base_still_masks(self):
        insn = Instruction(0, 3, "bts", "edx, eax", "0fabc2")
        insn.operands = [Operand(type="reg", reg="edx"),
                         Operand(type="reg", reg="eax")]
        lifter = Lifter()
        lifter.needs_cf = True
        lifted, _ = lift_basic_block(
            lifter, BasicBlock(start=0, instructions=[insn]))
        generated = chr(10).join(lifted)
        self.assertIn("eax & 31", generated)
        self.assertNotIn(">> 5", generated)


class StrpbrkMapTest(unittest.TestCase):
    """The aliasing the bug produced, stated as arithmetic."""

    def test_question_mark_and_underscore_alias_when_folded(self):
        self.assertEqual(ord("?") & 31, ord("_") & 31)

    def test_they_do_not_alias_as_a_bit_string(self):
        self.assertNotEqual((ord("?") >> 5, ord("?") & 31),
                            (ord("_") >> 5, ord("_") & 31))
