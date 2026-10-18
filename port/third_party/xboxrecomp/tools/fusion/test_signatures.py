"""The masker is the non-trivial logic: it must wildcard operands that differ
between games (branch targets, absolute addresses) and keep everything else, or
signatures neither transfer (too strict) nor stay unique (too loose)."""
from tools.fusion.signatures import masked_pattern, PAT_LEN

LO, HI = 0x10000, 0x400000   # a plausible XBE image range


def _mask_for(code):
    _, mask = masked_pattern(code, 0x11000, LO, HI)
    return mask


def test_call_rel32_target_is_wildcarded():
    # E8 <rel32> call ; the 4 rel bytes vary per game -> wildcard, opcode fixed
    m = _mask_for(b"\xE8\x11\x22\x33\x00")
    assert m[0] == 0 and m[1:5] == b"\x01\x01\x01\x01"


def test_absolute_disp32_is_wildcarded():
    # A1 <disp32> mov eax,[abs] ; abs address varies -> wildcard
    m = _mask_for(b"\xA1\x00\x00\x20\x00")   # [0x200000], in image range
    assert m[0] == 0 and m[1:5] == b"\x01\x01\x01\x01"


def test_small_struct_offset_is_kept():
    # 8B 45 08 mov eax,[ebp+8] ; small disp is a struct offset, NOT an address
    m = _mask_for(b"\x8B\x45\x08\x90")
    assert sum(m[:3]) == 0   # nothing wildcarded


def test_small_immediate_constant_is_kept():
    # B8 34 12 00 00 mov eax,0x1234 ; a constant, not an address -> keep
    m = _mask_for(b"\xB8\x34\x12\x00\x00")
    assert sum(m[:5]) == 0


def test_typical_prologue_is_fully_fixed():
    # push ebp; mov ebp,esp; sub esp,0x10; push esi -> all structural
    m = _mask_for(b"\x55\x8B\xEC\x83\xEC\x10\x56")
    assert sum(m) == 0


def test_pattern_capped_at_pat_len():
    pat, mask = masked_pattern(b"\x90" * 64, 0x11000, LO, HI)
    assert len(pat) == PAT_LEN and len(mask) == PAT_LEN


if __name__ == "__main__":
    import sys
    fns = [v for k, v in sorted(globals().items()) if k.startswith("test_")]
    for f in fns:
        f(); print("ok", f.__name__)
    print(f"{len(fns)} passed")
