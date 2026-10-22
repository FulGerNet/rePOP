import unittest

from .disasm import BasicBlock, Instruction
from .lifter import Lifter, lift_basic_block


def _lift(*instructions):
    lifted, _ = lift_basic_block(
        Lifter(), BasicBlock(start=0, instructions=list(instructions)))
    return "\n".join(lifted)


class DirectionFlagLifterTest(unittest.TestCase):
    """EFLAGS.DF decides which way the string instructions walk.

    It used to lift to a comment, so every one of them walked forwards. The
    instruction that exposed it is MSVC's strrchr, which is `std` followed by
    `repne scasb` from the terminator *backwards*; scanning forwards ran off
    the end of the string and returned a pointer into whatever followed it.
    """

    def test_cld_and_std_assign_the_flag(self):
        generated = _lift(
            Instruction(0, 1, "std", "", "fd"),
            Instruction(1, 1, "cld", "", "fc"),
        )

        self.assertIn("g_df = 1;", generated)
        self.assertIn("g_df = 0;", generated)

    def test_repne_scasb_steps_by_the_direction_flag(self):
        generated = _lift(Instruction(0, 2, "repne scasb", "", "f2ae"))

        self.assertIn("RECOMP_DF_STEP(1)", generated)
        # The whole point: no unconditional forward step survives.
        self.assertNotIn("edi++;", generated)

    def test_rep_movsb_uses_the_block_copy_only_when_it_cannot_overlap(self):
        generated = _lift(Instruction(0, 2, "rep movsb", "", "f3a4"))

        # memcpy is still there for the common case, but guarded: it is only
        # reached when the ranges provably do not overlap.
        self.assertIn("memcpy(_d, _s, (size_t)_n)", generated)
        self.assertIn("(uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi", generated)

    def test_rep_movsb_propagates_an_overlapping_forward_copy(self):
        """The LZ run case: distance 1, length N repeats one byte N times.

        rep movs copies an element at a time, so a forward copy whose
        destination is inside the source reads what it has just written.
        memcpy is undefined there and a vectorised one reads ahead, which
        silently corrupts every run a decompressor emits.
        """
        generated = _lift(Instruction(0, 2, "rep movsb", "", "f3a4"))

        # An explicit ascending byte loop, not memmove: memmove would give the
        # copy-through-a-temporary answer, which is a different result.
        self.assertIn("for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u);", generated)
        self.assertNotIn("memmove", generated)

    def test_rep_movs_never_memcpys_a_hardware_window(self):
        """A copy touching 0xFD000000 and up goes a word at a time.

        Those windows can be trapped for MMIO, and the fault handler decodes
        ordinary moves, not the vector loads a host memcpy uses.
        """
        for text, raw in (("rep movsb", "f3a4"), ("rep movsw", "66f3a5"), ("rep movsd", "f3a5")):
            generated = _lift(Instruction(0, 2, text, "", raw))
            self.assertIn("esi < 0xFD000000u && edi < 0xFD000000u", generated)

    def test_rep_movsb_backward_case_is_still_a_loop(self):
        generated = _lift(Instruction(0, 2, "rep movsb", "", "f3a4"))

        self.assertIn("MEM8(edi + _i*_st) = MEM8(esi + _i*_st)", generated)

    def test_rep_movsd_overlap_steps_by_dwords(self):
        # Element granularity matters: a dword-at-a-time propagation is not
        # the same sequence of bytes as a byte-at-a-time one.
        generated = _lift(Instruction(0, 2, "rep movsd", "", "f3a5"))

        self.assertIn("MEM32(edi + _i*4u) = MEM32(esi + _i*4u)", generated)
        self.assertIn("(uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi", generated)

    def test_unprefixed_string_ops_step_by_the_direction_flag(self):
        for mnemonic, size in (("movsb", 1), ("stosw", 2), ("lodsd", 4)):
            with self.subTest(mnemonic=mnemonic):
                generated = _lift(Instruction(0, 1, mnemonic, "", "a4"))
                self.assertIn(f"RECOMP_DF_STEP({size})", generated)


if __name__ == "__main__":
    unittest.main()
