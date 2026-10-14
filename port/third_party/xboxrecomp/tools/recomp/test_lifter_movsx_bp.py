"""RE-SoT: MOVSX from every 16-bit register sign-extends, bp and sp included."""
from . import config
from .translator import FunctionTranslator


def _translate(hex_bytes):
    b = bytes.fromhex(hex_bytes + "c3")
    base = 0x10000
    config._install([config.Section('.text', base, len(b), 0, len(b), True)],
                    entry_point=base, kernel_thunk_addr=base, origin='movsx-bp')
    db = {base: dict(start=hex(base), end=base + len(b), _addr=base, size=len(b))}
    return FunctionTranslator(b, db).translate_function(base, db[base])


def test_movsx_from_bp_sign_extends():
    assert "ebp = SX16(LO16(ebp));" in _translate("0fbfed")   # movsx ebp, bp


def test_movsx_from_sp_sign_extends():
    assert "eax = SX16(LO16(esp));" in _translate("0fbfc4")   # movsx eax, sp


def test_movsx_from_di_sign_extends():
    assert "ebx = SX16(LO16(edi));" in _translate("0fbfdf")   # movsx ebx, di
