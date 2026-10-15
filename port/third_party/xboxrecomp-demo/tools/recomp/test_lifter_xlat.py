"""Tests for XLAT/XLATB lifting."""

from tools.recomp.lifter import Instruction, Lifter


def test_xlat_uses_ebx_and_zero_extended_al():
    insn = Instruction(0x1000, 1, "xlatb", "", "d7")

    assert Lifter().lift_instruction(insn) == [
        "SET_LO8(eax, MEM8(ebx + LO8(eax))); /* xlatb */",
    ]


def test_address_size_override_uses_wrapped_bx_address():
    insn = Instruction(0x1000, 2, "xlatb", "", "67d7")

    assert Lifter().lift_instruction(insn) == [
        "SET_LO8(eax, MEM8((uint16_t)(LO16(ebx) + LO8(eax)))); "
        "/* xlatb */",
    ]
