/**
 * PoP Warrior Within Xbox retail - unsorted, chunk 0
 * Functions no evidence places
 * Functions: 250 (0x00012000 - 0x00017B27)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_00012000
 * Original: 0x00012000 - 0x00012020 (32 bytes, 12 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012000: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x57D6C0;
    if (TEST_Z(_fa, _fb)) goto loc_00012019; /* je: equal / zero */

loc_00012010: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00012016u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00012016: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012019: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012020
 * Original: 0x00012020 - 0x0001203F (31 bytes, 11 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012020: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x57D6BC;
    if (TEST_Z(_fa, _fb)) goto loc_00012039; /* je: equal / zero */

loc_00012030: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00012036u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00012036: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012039: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012050
 * Original: 0x00012050 - 0x00012053 (3 bytes, 1 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012050(void)
{

loc_00012050: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012060
 * Original: 0x00012060 - 0x00012091 (49 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00012060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012060: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00012067u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_00012067: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001208E; /* je: equal / zero */

loc_0001206E: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x57D6C0;
    MEM32(eax) = 0x57D6E0;
    MEM32(eax + 0xC) = 0x57F9CC;
    esp += 4; return; /* ret */

loc_0001208E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00012062
 * Original: 0x00012062 - 0x00012091 (47 bytes, 12 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00012062(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012062: ;
    PUSH32(esp, 0x00012067u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_00012067: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001208E; /* je: equal / zero */

loc_0001206E: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x57D6C0;
    MEM32(eax) = 0x57D6E0;
    MEM32(eax + 0xC) = 0x57F9CC;
    esp += 4; return; /* ret */

loc_0001208E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000120A0
 * Original: 0x000120A0 - 0x000120C3 (35 bytes, 11 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000120A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000120A0: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000120A7u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_000120A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000120C0; /* je: equal / zero */

loc_000120AE: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax) = 0x57D6C8;
    esp += 4; return; /* ret */

loc_000120C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000120D0
 * Original: 0x000120D0 - 0x0001214C (124 bytes, 51 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000120D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000120D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 9);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x57D720);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x000120EFu); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_000120EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000120FA; /* jne: not equal / not zero */

loc_000120F3: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x13);
    goto loc_00012136;

loc_000120FA: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x57D72C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0001210Eu); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_0001210E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012119; /* jne: not equal / not zero */

loc_00012112: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    goto loc_00012136;

loc_00012119: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x57D738);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0001212Du); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_0001212D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012145; /* jne: not equal / not zero */

loc_00012131: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x15);

loc_00012136: ;
    PUSH32(esp, 0x0001213Bu); RECOMP_ABI_CALL(0x0045AF40u, sub_0045AF40); /* call 0x0045AF40 */

loc_0001213B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00012145u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00012145: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012150
 * Original: 0x00012150 - 0x0001217B (43 bytes, 21 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012150: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, edi);
    edi = eax + 1;
    goto loc_00012160;

    /* nop */

loc_00012160: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012160; /* jne: not equal / not zero */

loc_00012167: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00012176u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00012176: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012180
 * Original: 0x00012180 - 0x000121F2 (114 bytes, 50 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012180: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00012193; /* jae: above or equal (unsigned >=) */

loc_0001218E: ;
    PUSH32(esp, 0x00012193u); RECOMP_ABI_CALL(0x0047D6C0u, sub_0047D6C0); /* call 0x0047D6C0 */

loc_00012193: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebp));
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) edx = eax; /* cmovb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000121D8; /* je: equal / zero */

loc_000121A9: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edx;
    if (CMP_AE(_fa, _fb)) ecx = ebx; /* cmovae */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000121BD; /* jb: below (unsigned <) */

loc_000121B8: ;
    eax = MEM32(esi + 4);
    goto loc_000121C0;

loc_000121BD: ;
    eax = esi + 4;

loc_000121C0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = eax + ebp;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    if ((_flags != 0)) goto loc_000121D4; /* je: equal / zero */

loc_000121CF: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_000121D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000121EC; /* jne: not equal / not zero */

loc_000121D8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000121E5; /* jae: above or equal (unsigned >=) */

loc_000121DC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_000121E5: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

loc_000121EC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000121A0
 * Original: 0x000121A0 - 0x000121F2 (82 bytes, 38 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000121A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000121A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) edx = eax; /* cmovb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000121D8; /* je: equal / zero */

loc_000121A9: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edx;
    if (CMP_AE(_fa, _fb)) ecx = ebx; /* cmovae */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000121BD; /* jb: below (unsigned <) */

loc_000121B8: ;
    eax = MEM32(esi + 4);
    goto loc_000121C0;

loc_000121BD: ;
    eax = esi + 4;

loc_000121C0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = eax + ebp;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    if ((_flags != 0)) goto loc_000121D4; /* je: equal / zero */

loc_000121CF: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_000121D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000121EC; /* jne: not equal / not zero */

loc_000121D8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000121E5; /* jae: above or equal (unsigned >=) */

loc_000121DC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_000121E5: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

loc_000121EC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000121A2
 * Original: 0x000121A2 - 0x000121F2 (80 bytes, 37 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000121A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000121A2: ;
    if (_flags /* cmovb */) edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000121D8; /* je: equal / zero */

loc_000121A9: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edx;
    if (CMP_AE(_fa, _fb)) ecx = ebx; /* cmovae */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000121BD; /* jb: below (unsigned <) */

loc_000121B8: ;
    eax = MEM32(esi + 4);
    goto loc_000121C0;

loc_000121BD: ;
    eax = esi + 4;

loc_000121C0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = eax + ebp;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    if ((_flags != 0)) goto loc_000121D4; /* je: equal / zero */

loc_000121CF: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_000121D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000121EC; /* jne: not equal / not zero */

loc_000121D8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000121E5; /* jae: above or equal (unsigned >=) */

loc_000121DC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_000121E5: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

loc_000121EC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000121D4
 * Original: 0x000121D4 - 0x000121F2 (30 bytes, 16 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000121D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000121D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000121EC; /* jne: not equal / not zero */

loc_000121D8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000121E5; /* jae: above or equal (unsigned >=) */

loc_000121DC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_000121E5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

loc_000121EC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00012200
 * Original: 0x00012200 - 0x00012231 (49 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00012200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012200: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00012207u); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_00012207: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001222E; /* je: equal / zero */

loc_0001220E: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x57D6C0;
    MEM32(eax) = 0x57F3B8;
    MEM32(eax + 0xC) = 0x57F850;
    esp += 4; return; /* ret */

loc_0001222E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001223E
 * Original: 0x0001223E - 0x00012240 (2 bytes, 2 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001223E(void)
{

loc_0001223E: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00012240
 * Original: 0x00012240 - 0x00012263 (35 bytes, 11 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00012240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012240: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00012247u); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_00012247: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012260; /* je: equal / zero */

loc_0001224E: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax) = 0x57F3A0;
    esp += 4; return; /* ret */

loc_00012260: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0001226C
 * Original: 0x0001226C - 0x00012270 (4 bytes, 4 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001226C(void)
{

loc_0001226C: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00012270
 * Original: 0x00012270 - 0x000123EC (380 bytes, 125 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012270: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x57D748);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0001228Fu); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_0001228F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123DE; /* je: equal / zero */

loc_00012297: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x57D7C8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000122ABu); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_000122AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000122D1; /* jne: not equal / not zero */

loc_000122AF: ;
    PUSH32(esp, eax);
    ebx = 1;
    PUSH32(esp, 0x11);
    MEM32(0x91EAF8) = ebx;
    PUSH32(esp, 0x000122C2u); RECOMP_ABI_CALL(0x0045C8E0u, sub_0045C8E0); /* call 0x0045C8E0 */

loc_000122C2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000122CAu); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_000122CA: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000122D1: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x57D750);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000122E5u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_000122E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012309; /* jne: not equal / not zero */

loc_000122E9: ;
    PUSH32(esp, 0x57D750);
    PUSH32(esp, 0x000122F3u); RECOMP_ABI_CALL(0x00013E30u, sub_00013E30); /* call 0x00013E30 */

loc_000122F3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000122FBu); RECOMP_ABI_CALL(0x000128F0u, sub_000128F0); /* call 0x000128F0 */

loc_000122FB: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00012302u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00012302: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00012309: ;
    PUSH32(esp, 0x57D768);
    ecx = esi;
    PUSH32(esp, 0x00012315u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_00012315: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012339; /* jne: not equal / not zero */

loc_00012319: ;
    PUSH32(esp, 0x57D768);
    PUSH32(esp, 0x00012323u); RECOMP_ABI_CALL(0x00013E30u, sub_00013E30); /* call 0x00013E30 */

loc_00012323: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001232Bu); RECOMP_ABI_CALL(0x000128F0u, sub_000128F0); /* call 0x000128F0 */

loc_0001232B: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00012332u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00012332: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00012339: ;
    PUSH32(esp, 0x57D784);
    ecx = esi;
    PUSH32(esp, 0x00012345u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_00012345: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012369; /* jne: not equal / not zero */

loc_00012349: ;
    PUSH32(esp, 0x57D784);
    PUSH32(esp, 0x00012353u); RECOMP_ABI_CALL(0x00013E30u, sub_00013E30); /* call 0x00013E30 */

loc_00012353: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001235Bu); RECOMP_ABI_CALL(0x000128F0u, sub_000128F0); /* call 0x000128F0 */

loc_0001235B: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00012362u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00012362: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00012369: ;
    PUSH32(esp, 0x57D7A0);
    ecx = esi;
    PUSH32(esp, 0x00012375u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_00012375: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123D9; /* je: equal / zero */

loc_00012379: ;
    PUSH32(esp, 0x57D7AC);
    ecx = esi;
    PUSH32(esp, 0x00012385u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_00012385: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123D9; /* je: equal / zero */

loc_00012389: ;
    PUSH32(esp, 0x57D7B8);
    ecx = esi;
    PUSH32(esp, 0x00012395u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_00012395: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123D9; /* je: equal / zero */

loc_00012399: ;
    PUSH32(esp, 0x57D7C0);
    ecx = esi;
    PUSH32(esp, 0x000123A5u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_000123A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123D9; /* je: equal / zero */

loc_000123A9: ;
    PUSH32(esp, 0x57D7D8);
    ecx = esi;
    PUSH32(esp, 0x000123B5u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_000123B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123D9; /* je: equal / zero */

loc_000123B9: ;
    PUSH32(esp, 0x57D7EC);
    ecx = esi;
    PUSH32(esp, 0x000123C5u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_000123C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123D9; /* je: equal / zero */

loc_000123C9: ;
    PUSH32(esp, 0x57D800);
    ecx = esi;
    PUSH32(esp, 0x000123D5u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_000123D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000123E5; /* jne: not equal / not zero */

loc_000123D9: ;
    PUSH32(esp, 0x000123DEu); RECOMP_ABI_CALL(0x000128F0u, sub_000128F0); /* call 0x000128F0 */

loc_000123DE: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x000123E5u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_000123E5: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001228A
 * Original: 0x0001228A - 0x000123EC (354 bytes, 114 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001228A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001228A: ;
    PUSH32(esp, 0x0001228Fu); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_0001228F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123DE; /* je: equal / zero */

loc_00012297: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x57D7C8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000122ABu); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_000122AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000122D1; /* jne: not equal / not zero */

loc_000122AF: ;
    PUSH32(esp, eax);
    ebx = 1;
    PUSH32(esp, 0x11);
    MEM32(0x91EAF8) = ebx;
    PUSH32(esp, 0x000122C2u); RECOMP_ABI_CALL(0x0045C8E0u, sub_0045C8E0); /* call 0x0045C8E0 */

loc_000122C2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000122CAu); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_000122CA: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000122D1: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x57D750);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000122E5u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_000122E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012309; /* jne: not equal / not zero */

loc_000122E9: ;
    PUSH32(esp, 0x57D750);
    PUSH32(esp, 0x000122F3u); RECOMP_ABI_CALL(0x00013E30u, sub_00013E30); /* call 0x00013E30 */

loc_000122F3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000122FBu); RECOMP_ABI_CALL(0x000128F0u, sub_000128F0); /* call 0x000128F0 */

loc_000122FB: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00012302u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00012302: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00012309: ;
    PUSH32(esp, 0x57D768);
    ecx = esi;
    PUSH32(esp, 0x00012315u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_00012315: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012339; /* jne: not equal / not zero */

loc_00012319: ;
    PUSH32(esp, 0x57D768);
    PUSH32(esp, 0x00012323u); RECOMP_ABI_CALL(0x00013E30u, sub_00013E30); /* call 0x00013E30 */

loc_00012323: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001232Bu); RECOMP_ABI_CALL(0x000128F0u, sub_000128F0); /* call 0x000128F0 */

loc_0001232B: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00012332u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00012332: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00012339: ;
    PUSH32(esp, 0x57D784);
    ecx = esi;
    PUSH32(esp, 0x00012345u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_00012345: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012369; /* jne: not equal / not zero */

loc_00012349: ;
    PUSH32(esp, 0x57D784);
    PUSH32(esp, 0x00012353u); RECOMP_ABI_CALL(0x00013E30u, sub_00013E30); /* call 0x00013E30 */

loc_00012353: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001235Bu); RECOMP_ABI_CALL(0x000128F0u, sub_000128F0); /* call 0x000128F0 */

loc_0001235B: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00012362u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00012362: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00012369: ;
    PUSH32(esp, 0x57D7A0);
    ecx = esi;
    PUSH32(esp, 0x00012375u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_00012375: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123D9; /* je: equal / zero */

loc_00012379: ;
    PUSH32(esp, 0x57D7AC);
    ecx = esi;
    PUSH32(esp, 0x00012385u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_00012385: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123D9; /* je: equal / zero */

loc_00012389: ;
    PUSH32(esp, 0x57D7B8);
    ecx = esi;
    PUSH32(esp, 0x00012395u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_00012395: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123D9; /* je: equal / zero */

loc_00012399: ;
    PUSH32(esp, 0x57D7C0);
    ecx = esi;
    PUSH32(esp, 0x000123A5u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_000123A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123D9; /* je: equal / zero */

loc_000123A9: ;
    PUSH32(esp, 0x57D7D8);
    ecx = esi;
    PUSH32(esp, 0x000123B5u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_000123B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123D9; /* je: equal / zero */

loc_000123B9: ;
    PUSH32(esp, 0x57D7EC);
    ecx = esi;
    PUSH32(esp, 0x000123C5u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_000123C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123D9; /* je: equal / zero */

loc_000123C9: ;
    PUSH32(esp, 0x57D800);
    ecx = esi;
    PUSH32(esp, 0x000123D5u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_000123D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000123E5; /* jne: not equal / not zero */

loc_000123D9: ;
    PUSH32(esp, 0x000123DEu); RECOMP_ABI_CALL(0x000128F0u, sub_000128F0); /* call 0x000128F0 */

loc_000123DE: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x000123E5u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_000123E5: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000122AF
 * Original: 0x000122AF - 0x000123EC (317 bytes, 102 insns)
 * Folder: unsorted (none)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000122AF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000122AF: ;
    PUSH32(esp, eax);
    ebx = 1;
    PUSH32(esp, 0x11);
    MEM32(0x91EAF8) = ebx;
    PUSH32(esp, 0x000122C2u); RECOMP_ABI_CALL(0x0045C8E0u, sub_0045C8E0); /* call 0x0045C8E0 */

loc_000122C2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000122CAu); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_000122CA: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012309; /* jne: not equal / not zero */

loc_000122E9: ;
    PUSH32(esp, 0x57D750);
    PUSH32(esp, 0x000122F3u); RECOMP_ABI_CALL(0x00013E30u, sub_00013E30); /* call 0x00013E30 */

loc_000122F3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000122FBu); RECOMP_ABI_CALL(0x000128F0u, sub_000128F0); /* call 0x000128F0 */

loc_000122FB: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00012302u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00012302: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00012309: ;
    PUSH32(esp, 0x57D768);
    ecx = esi;
    PUSH32(esp, 0x00012315u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_00012315: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012339; /* jne: not equal / not zero */

loc_00012319: ;
    PUSH32(esp, 0x57D768);
    PUSH32(esp, 0x00012323u); RECOMP_ABI_CALL(0x00013E30u, sub_00013E30); /* call 0x00013E30 */

loc_00012323: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001232Bu); RECOMP_ABI_CALL(0x000128F0u, sub_000128F0); /* call 0x000128F0 */

loc_0001232B: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00012332u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00012332: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00012339: ;
    PUSH32(esp, 0x57D784);
    ecx = esi;
    PUSH32(esp, 0x00012345u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_00012345: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012369; /* jne: not equal / not zero */

loc_00012349: ;
    PUSH32(esp, 0x57D784);
    PUSH32(esp, 0x00012353u); RECOMP_ABI_CALL(0x00013E30u, sub_00013E30); /* call 0x00013E30 */

loc_00012353: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001235Bu); RECOMP_ABI_CALL(0x000128F0u, sub_000128F0); /* call 0x000128F0 */

loc_0001235B: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00012362u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00012362: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00012369: ;
    PUSH32(esp, 0x57D7A0);
    ecx = esi;
    PUSH32(esp, 0x00012375u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_00012375: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123D9; /* je: equal / zero */

loc_00012379: ;
    PUSH32(esp, 0x57D7AC);
    ecx = esi;
    PUSH32(esp, 0x00012385u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_00012385: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123D9; /* je: equal / zero */

loc_00012389: ;
    PUSH32(esp, 0x57D7B8);
    ecx = esi;
    PUSH32(esp, 0x00012395u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_00012395: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123D9; /* je: equal / zero */

loc_00012399: ;
    PUSH32(esp, 0x57D7C0);
    ecx = esi;
    PUSH32(esp, 0x000123A5u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_000123A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123D9; /* je: equal / zero */

loc_000123A9: ;
    PUSH32(esp, 0x57D7D8);
    ecx = esi;
    PUSH32(esp, 0x000123B5u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_000123B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123D9; /* je: equal / zero */

loc_000123B9: ;
    PUSH32(esp, 0x57D7EC);
    ecx = esi;
    PUSH32(esp, 0x000123C5u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_000123C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000123D9; /* je: equal / zero */

loc_000123C9: ;
    PUSH32(esp, 0x57D800);
    ecx = esi;
    PUSH32(esp, 0x000123D5u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_000123D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000123E5; /* jne: not equal / not zero */

loc_000123D9: ;
    PUSH32(esp, 0x000123DEu); RECOMP_ABI_CALL(0x000128F0u, sub_000128F0); /* call 0x000128F0 */

loc_000123DE: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x000123E5u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_000123E5: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000123F0
 * Original: 0x000123F0 - 0x00012747 (855 bytes, 247 insns)
 * Folder: unsorted (none)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000123F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000123F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x81 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001242F; /* jne: not equal / not zero */

loc_00012401: ;
    ecx = MEM32(0x5B3314);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001242F; /* jne: not equal / not zero */

loc_0001240B: ;
    PUSH32(esp, 0x00012410u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00012410: ;
    esi = 0x91F28C;
    PUSH32(esp, 0x0001241Au); RECOMP_ABI_CALL(0x0001B6F0u, sub_0001B6F0); /* call 0x0001B6F0 */

loc_0001241A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00012423u); RECOMP_ABI_CALL(0x0045AFE0u, sub_0045AFE0); /* call 0x0045AFE0 */

loc_00012423: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0001242F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012475; /* jne: not equal / not zero */

loc_00012436: ;
    PUSH32(esp, 0x0001243Bu); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_0001243B: ;
    SET_LO8(eax, MEM8(0x91F2A0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012456; /* jne: not equal / not zero */

loc_00012444: ;
    SET_LO8(eax, MEM8(0x91F2A1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012456; /* jne: not equal / not zero */

loc_0001244D: ;
    SET_LO8(eax, MEM8(0x91F2A2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012460; /* je: equal / zero */

loc_00012456: ;
    esi = 0x91F28C;
    PUSH32(esp, 0x00012460u); RECOMP_ABI_CALL(0x0001B3F0u, sub_0001B3F0); /* call 0x0001B3F0 */

loc_00012460: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00012469u); RECOMP_ABI_CALL(0x0045AFE0u, sub_0045AFE0); /* call 0x0045AFE0 */

loc_00012469: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00012475: ;
    xmm0 = XMM_SCALAR(MEMF(0x586634)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x5866A8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x91F28C)); /* movss */
    PUSH32(esp, ebx);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    edx = MEM32(ebp + 0x1C);
    ebx = (int32_t)xmm2.f[0]; /* cvttss2si */
    xmm2 = XMM_SCALAR(MEMF(0x91F290)); /* movss */
    PUSH32(esp, edi);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    eax = (int32_t)xmm2.f[0]; /* cvttss2si */
    xmm2 = XMM_SCALAR(MEMF(0x91F294)); /* movss */
    PUSH32(esp, 0xB);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x57D814);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    ecx = (int32_t)xmm2.f[0]; /* cvttss2si */
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0);
    ecx = ebp;
    MEM8(esp + 0x21) = 0;
    MEM8(esp + 0x22) = 0;
    MEM8(esp + 0x23) = 0;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x000124F6u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_000124F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012563; /* jne: not equal / not zero */

loc_000124FA: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001252E; /* jne: not equal / not zero */

loc_00012501: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00012563; /* jle: less or equal (signed <=) */

loc_00012506: ;
    eax = MEM32(ebx * 4 + 0x59A22C);
    esi = MEM32(0x91EB44);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    edi = 1;
    PUSH32(esp, 0x0001251Fu); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_0001251F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012525u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012525: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 4) = 0;
    goto loc_0001255E;

loc_0001252E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012563; /* jne: not equal / not zero */

loc_00012533: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00012563; /* jge: greater or equal (signed >=) */

loc_00012538: ;
    ecx = MEM32(ebx * 4 + 0x59A230);
    esi = MEM32(0x91EB44);
    PUSH32(esp, ecx);
    edi = 1;
    PUSH32(esp, 0x00012550u); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_00012550: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012556u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012556: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 4) = 1;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0001255E: ;
    MEM8(esp + 0x11) = 1;

loc_00012563: ;
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x57D820);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x00012577u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00012577: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012600; /* jne: not equal / not zero */

loc_0001257F: ;
    eax = MEM32(esp + 0x24);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000125BF; /* jne: not equal / not zero */

loc_0001258A: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00012600; /* jle: less or equal (signed <=) */

loc_00012593: ;
    ecx = MEM32(eax * 4 + 0x59A254);
    esi = MEM32(0x91EB44);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    edi = 1;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000125B0u); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_000125B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000125B6u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000125B6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 4) = 0;
    goto loc_000125FB;

loc_000125BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012600; /* jne: not equal / not zero */

loc_000125C4: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00012600; /* jge: greater or equal (signed >=) */

loc_000125CD: ;
    edx = MEM32(eax * 4 + 0x59A258);
    esi = MEM32(0x91EB44);
    PUSH32(esp, edx);
    edi = 1;
    PUSH32(esp, 0x000125E5u); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_000125E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000125EBu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000125EB: ;
    MEM8(eax + 4) = 1;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;

loc_000125FB: ;
    MEM8(esp + 0x12) = 1;

loc_00012600: ;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x57D830);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x00012614u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00012614: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001269D; /* jne: not equal / not zero */

loc_0001261C: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001265C; /* jne: not equal / not zero */

loc_00012627: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001269D; /* jle: less or equal (signed <=) */

loc_00012630: ;
    edx = MEM32(eax * 4 + 0x59A27C);
    esi = MEM32(0x91EB44);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edi = 1;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0001264Du); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_0001264D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012653u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012653: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 4) = 0;
    goto loc_00012698;

loc_0001265C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001269D; /* jne: not equal / not zero */

loc_00012661: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001269D; /* jge: greater or equal (signed >=) */

loc_0001266A: ;
    eax = MEM32(eax * 4 + 0x59A280);
    esi = MEM32(0x91EB44);
    PUSH32(esp, eax);
    edi = 1;
    PUSH32(esp, 0x00012682u); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_00012682: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012688u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012688: ;
    MEM8(eax + 4) = 1;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;

loc_00012698: ;
    MEM8(esp + 0x13) = 1;

loc_0001269D: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000126E1; /* je: equal / zero */

loc_000126A5: ;
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x586634); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    MEMF(0x91F28C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);

loc_000126C6: ;
    PUSH32(esp, 0x91F28C);
    PUSH32(esp, 0x000126D0u); RECOMP_ABI_CALL(0x0001B190u, sub_0001B190); /* call 0x0001B190 */

loc_000126D0: ;
    PUSH32(esp, 0x000126D5u); RECOMP_ABI_CALL(0x0045AE90u, sub_0045AE90); /* call 0x0045AE90 */

loc_000126D5: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000126E1: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001270E; /* je: equal / zero */

loc_000126E9: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x14); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x586634); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    MEMF(0x91F290) = xmm0.f[0]; /* movss */
    PUSH32(esp, 1);
    goto loc_000126C6;

loc_0001270E: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001273B; /* je: equal / zero */

loc_00012716: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x586634); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    MEMF(0x91F294) = xmm0.f[0]; /* movss */
    PUSH32(esp, 2);
    goto loc_000126C6;

loc_0001273B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000124FC
 * Original: 0x000124FC - 0x00012747 (587 bytes, 171 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000124FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000124FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001252E; /* jne: not equal / not zero */

loc_00012501: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00012563; /* jle: less or equal (signed <=) */

loc_00012506: ;
    eax = MEM32(ebx * 4 + 0x59A22C);
    esi = MEM32(0x91EB44);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    edi = 1;
    PUSH32(esp, 0x0001251Fu); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_0001251F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012525u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012525: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 4) = 0;
    goto loc_0001255E;

loc_0001252E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012563; /* jne: not equal / not zero */

loc_00012533: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00012563; /* jge: greater or equal (signed >=) */

loc_00012538: ;
    ecx = MEM32(ebx * 4 + 0x59A230);
    esi = MEM32(0x91EB44);
    PUSH32(esp, ecx);
    edi = 1;
    PUSH32(esp, 0x00012550u); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_00012550: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012556u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012556: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 4) = 1;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0001255E: ;
    MEM8(esp + 0x11) = 1;

loc_00012563: ;
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x57D820);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x00012577u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00012577: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012600; /* jne: not equal / not zero */

loc_0001257F: ;
    eax = MEM32(esp + 0x24);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000125BF; /* jne: not equal / not zero */

loc_0001258A: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00012600; /* jle: less or equal (signed <=) */

loc_00012593: ;
    ecx = MEM32(eax * 4 + 0x59A254);
    esi = MEM32(0x91EB44);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    edi = 1;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000125B0u); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_000125B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000125B6u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000125B6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 4) = 0;
    goto loc_000125FB;

loc_000125BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012600; /* jne: not equal / not zero */

loc_000125C4: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00012600; /* jge: greater or equal (signed >=) */

loc_000125CD: ;
    edx = MEM32(eax * 4 + 0x59A258);
    esi = MEM32(0x91EB44);
    PUSH32(esp, edx);
    edi = 1;
    PUSH32(esp, 0x000125E5u); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_000125E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000125EBu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000125EB: ;
    MEM8(eax + 4) = 1;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;

loc_000125FB: ;
    MEM8(esp + 0x12) = 1;

loc_00012600: ;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x57D830);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x00012614u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00012614: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001269D; /* jne: not equal / not zero */

loc_0001261C: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001265C; /* jne: not equal / not zero */

loc_00012627: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001269D; /* jle: less or equal (signed <=) */

loc_00012630: ;
    edx = MEM32(eax * 4 + 0x59A27C);
    esi = MEM32(0x91EB44);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edi = 1;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0001264Du); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_0001264D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012653u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012653: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 4) = 0;
    goto loc_00012698;

loc_0001265C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001269D; /* jne: not equal / not zero */

loc_00012661: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001269D; /* jge: greater or equal (signed >=) */

loc_0001266A: ;
    eax = MEM32(eax * 4 + 0x59A280);
    esi = MEM32(0x91EB44);
    PUSH32(esp, eax);
    edi = 1;
    PUSH32(esp, 0x00012682u); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_00012682: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012688u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012688: ;
    MEM8(eax + 4) = 1;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;

loc_00012698: ;
    MEM8(esp + 0x13) = 1;

loc_0001269D: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000126E1; /* je: equal / zero */

loc_000126A5: ;
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x586634); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    MEMF(0x91F28C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);

loc_000126C6: ;
    PUSH32(esp, 0x91F28C);
    PUSH32(esp, 0x000126D0u); RECOMP_ABI_CALL(0x0001B190u, sub_0001B190); /* call 0x0001B190 */

loc_000126D0: ;
    PUSH32(esp, 0x000126D5u); RECOMP_ABI_CALL(0x0045AE90u, sub_0045AE90); /* call 0x0045AE90 */

loc_000126D5: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000126E1: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001270E; /* je: equal / zero */

loc_000126E9: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x14); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x586634); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    MEMF(0x91F290) = xmm0.f[0]; /* movss */
    PUSH32(esp, 1);
    goto loc_000126C6;

loc_0001270E: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001273B; /* je: equal / zero */

loc_00012716: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x586634); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    MEMF(0x91F294) = xmm0.f[0]; /* movss */
    PUSH32(esp, 2);
    goto loc_000126C6;

loc_0001273B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012556
 * Original: 0x00012556 - 0x00012747 (497 bytes, 145 insns)
 * Folder: unsorted (none)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012556(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012556: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 4) = 1;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x11) = 1;
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x57D820);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x00012577u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00012577: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012600; /* jne: not equal / not zero */

loc_0001257F: ;
    eax = MEM32(esp + 0x24);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000125BF; /* jne: not equal / not zero */

loc_0001258A: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00012600; /* jle: less or equal (signed <=) */

loc_00012593: ;
    ecx = MEM32(eax * 4 + 0x59A254);
    esi = MEM32(0x91EB44);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    edi = 1;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000125B0u); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_000125B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000125B6u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000125B6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 4) = 0;
    goto loc_000125FB;

loc_000125BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012600; /* jne: not equal / not zero */

loc_000125C4: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00012600; /* jge: greater or equal (signed >=) */

loc_000125CD: ;
    edx = MEM32(eax * 4 + 0x59A258);
    esi = MEM32(0x91EB44);
    PUSH32(esp, edx);
    edi = 1;
    PUSH32(esp, 0x000125E5u); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_000125E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000125EBu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000125EB: ;
    MEM8(eax + 4) = 1;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;

loc_000125FB: ;
    MEM8(esp + 0x12) = 1;

loc_00012600: ;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x57D830);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x00012614u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00012614: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001269D; /* jne: not equal / not zero */

loc_0001261C: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001265C; /* jne: not equal / not zero */

loc_00012627: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001269D; /* jle: less or equal (signed <=) */

loc_00012630: ;
    edx = MEM32(eax * 4 + 0x59A27C);
    esi = MEM32(0x91EB44);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edi = 1;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0001264Du); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_0001264D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012653u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012653: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 4) = 0;
    goto loc_00012698;

loc_0001265C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001269D; /* jne: not equal / not zero */

loc_00012661: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001269D; /* jge: greater or equal (signed >=) */

loc_0001266A: ;
    eax = MEM32(eax * 4 + 0x59A280);
    esi = MEM32(0x91EB44);
    PUSH32(esp, eax);
    edi = 1;
    PUSH32(esp, 0x00012682u); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_00012682: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012688u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012688: ;
    MEM8(eax + 4) = 1;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;

loc_00012698: ;
    MEM8(esp + 0x13) = 1;

loc_0001269D: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000126E1; /* je: equal / zero */

loc_000126A5: ;
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x586634); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    MEMF(0x91F28C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);

loc_000126C6: ;
    PUSH32(esp, 0x91F28C);
    PUSH32(esp, 0x000126D0u); RECOMP_ABI_CALL(0x0001B190u, sub_0001B190); /* call 0x0001B190 */

loc_000126D0: ;
    PUSH32(esp, 0x000126D5u); RECOMP_ABI_CALL(0x0045AE90u, sub_0045AE90); /* call 0x0045AE90 */

loc_000126D5: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000126E1: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001270E; /* je: equal / zero */

loc_000126E9: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x14); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x586634); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    MEMF(0x91F290) = xmm0.f[0]; /* movss */
    PUSH32(esp, 1);
    goto loc_000126C6;

loc_0001270E: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001273B; /* je: equal / zero */

loc_00012716: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x586634); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    MEMF(0x91F294) = xmm0.f[0]; /* movss */
    PUSH32(esp, 2);
    goto loc_000126C6;

loc_0001273B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012579
 * Original: 0x00012579 - 0x00012747 (462 bytes, 133 insns)
 * Folder: unsorted (none)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012579(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012579: ;
    if (_flags /* jne: not equal / not zero */) goto loc_00012600;

loc_0001257F: ;
    eax = MEM32(esp + 0x24);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000125BF; /* jne: not equal / not zero */

loc_0001258A: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00012600; /* jle: less or equal (signed <=) */

loc_00012593: ;
    ecx = MEM32(eax * 4 + 0x59A254);
    esi = MEM32(0x91EB44);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    edi = 1;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000125B0u); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_000125B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000125B6u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000125B6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 4) = 0;
    goto loc_000125FB;

loc_000125BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012600; /* jne: not equal / not zero */

loc_000125C4: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00012600; /* jge: greater or equal (signed >=) */

loc_000125CD: ;
    edx = MEM32(eax * 4 + 0x59A258);
    esi = MEM32(0x91EB44);
    PUSH32(esp, edx);
    edi = 1;
    PUSH32(esp, 0x000125E5u); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_000125E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000125EBu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000125EB: ;
    MEM8(eax + 4) = 1;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;

loc_000125FB: ;
    MEM8(esp + 0x12) = 1;

loc_00012600: ;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x57D830);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x00012614u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00012614: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001269D; /* jne: not equal / not zero */

loc_0001261C: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001265C; /* jne: not equal / not zero */

loc_00012627: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001269D; /* jle: less or equal (signed <=) */

loc_00012630: ;
    edx = MEM32(eax * 4 + 0x59A27C);
    esi = MEM32(0x91EB44);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edi = 1;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0001264Du); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_0001264D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012653u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012653: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 4) = 0;
    goto loc_00012698;

loc_0001265C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001269D; /* jne: not equal / not zero */

loc_00012661: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001269D; /* jge: greater or equal (signed >=) */

loc_0001266A: ;
    eax = MEM32(eax * 4 + 0x59A280);
    esi = MEM32(0x91EB44);
    PUSH32(esp, eax);
    edi = 1;
    PUSH32(esp, 0x00012682u); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_00012682: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012688u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012688: ;
    MEM8(eax + 4) = 1;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;

loc_00012698: ;
    MEM8(esp + 0x13) = 1;

loc_0001269D: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000126E1; /* je: equal / zero */

loc_000126A5: ;
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x586634); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    MEMF(0x91F28C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);

loc_000126C6: ;
    PUSH32(esp, 0x91F28C);
    PUSH32(esp, 0x000126D0u); RECOMP_ABI_CALL(0x0001B190u, sub_0001B190); /* call 0x0001B190 */

loc_000126D0: ;
    PUSH32(esp, 0x000126D5u); RECOMP_ABI_CALL(0x0045AE90u, sub_0045AE90); /* call 0x0045AE90 */

loc_000126D5: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000126E1: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001270E; /* je: equal / zero */

loc_000126E9: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x14); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x586634); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    MEMF(0x91F290) = xmm0.f[0]; /* movss */
    PUSH32(esp, 1);
    goto loc_000126C6;

loc_0001270E: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001273B; /* je: equal / zero */

loc_00012716: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x586634); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    MEMF(0x91F294) = xmm0.f[0]; /* movss */
    PUSH32(esp, 2);
    goto loc_000126C6;

loc_0001273B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0001270E
 * Original: 0x0001270E - 0x00012747 (57 bytes, 18 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001270E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001270E: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001273B; /* je: equal / zero */

loc_00012716: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x586634); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    MEMF(0x91F294) = xmm0.f[0]; /* movss */
    PUSH32(esp, 2);
    g_seh_ebp = ebp; sub_000126C6(); return; /* tail jmp 0x000126C6 */

loc_0001273B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0001274E
 * Original: 0x0001274E - 0x00012750 (2 bytes, 2 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001274E(void)
{

loc_0001274E: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00012750
 * Original: 0x00012750 - 0x000128EF (415 bytes, 127 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012750: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0x57F540);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00012763u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012763: ;
    ecx = MEM32(0x91EB44);
    SET_LO8(edx, MEM8(ecx + 0x1E));
    xmm0 = XMM_SCALAR(MEMF(0x586634)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x5866A8)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(eax + 4) = LO8(edx);
    xmm2 = XMM_SCALAR(MEMF(0x91F28C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    ebp = (int32_t)xmm2.f[0]; /* cvttss2si */
    xmm2 = XMM_SCALAR(MEMF(0x91F290)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    ebx = (int32_t)xmm2.f[0]; /* cvttss2si */
    xmm2 = XMM_SCALAR(MEMF(0x91F294)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    eax = (int32_t)xmm2.f[0]; /* cvttss2si */
    MEM32(esp + 0x14) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000127D0: ;
    ecx = MEM32(esi * 4 + 0x59A230);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000127DEu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000127DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    MEM8(eax + 4) = LO8(edx);
    if (CMP_L(_fas, _fbs)) goto loc_000127D0; /* jl: less (signed <) */

loc_000127EF: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000127F3: ;
    eax = MEM32(esi * 4 + 0x59A258);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00012801u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012801: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    MEM8(eax + 4) = LO8(ecx);
    if (CMP_L(_fas, _fbs)) goto loc_000127F3; /* jl: less (signed <) */

loc_00012812: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00012814: ;
    edx = MEM32(esi * 4 + 0x59A280);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00012822u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012822: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    MEM8(eax + 4) = LO8(ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00012814; /* jl: less (signed <) */

loc_00012837: ;
    eax = MEM32(0x91EAF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012884; /* jne: not equal / not zero */

loc_00012841: ;
    edx = MEM32(0x5B3310);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8C);
    _fa = (uint32_t)(MEM32(edx + 0x5B33A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x5B33A8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012870; /* jne: not equal / not zero */

loc_00012856: ;
    eax = MEM32(0x91EF30);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x5E3120);
    PUSH32(esp, 0x586230);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001286Du); RECOMP_ABI_CALL(0x000D8140u, sub_000D8140); /* call 0x000D8140 */

loc_0001286D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012870: ;
    MEM32(0x91EAF8) = ebp;
    PUSH32(esp, 0x0001287Bu); RECOMP_ABI_CALL(0x000128F0u, sub_000128F0); /* call 0x000128F0 */

loc_0001287B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00012884: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012870; /* jne: not equal / not zero */

loc_00012889: ;
    ecx = MEM32(0x5B3310);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    eax = MEM32(ecx + 0x5B33A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000128D1; /* jne: not equal / not zero */

loc_000128A0: ;
    edx = MEM32(0x91EF30);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x5E3120);
    PUSH32(esp, 0x586230);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000128B8u); RECOMP_ABI_CALL(0x000D8140u, sub_000D8140); /* call 0x000D8140 */

loc_000128B8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    MEM32(0x91EAF8) = ebp;
    PUSH32(esp, 0x000128C5u); RECOMP_ABI_CALL(0x0045AFE0u, sub_0045AFE0); /* call 0x0045AFE0 */

loc_000128C5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000128D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012870; /* jne: not equal / not zero */

loc_000128D6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    MEM32(0x91EAF8) = ebp;
    PUSH32(esp, 0x000128E3u); RECOMP_ABI_CALL(0x0045AFE0u, sub_0045AFE0); /* call 0x0045AFE0 */

loc_000128E3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000128CD
 * Original: 0x000128CD - 0x000128EF (34 bytes, 15 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000128CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000128CD: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    MEM32(0x91EAF8) = ebp;
    PUSH32(esp, 0x000128E3u); RECOMP_ABI_CALL(0x0045AFE0u, sub_0045AFE0); /* call 0x0045AFE0 */

loc_000128E3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000128F0
 * Original: 0x000128F0 - 0x00012CA8 (952 bytes, 297 insns)
 * Folder: unsorted (none)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000128F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000128F0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x5B35F4);
    eax = MEM32(0x596CA0);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5867B4); /* mulss */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x38) = eax;
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, 0x0001291Cu); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_0001291C: ;
    PUSH32(esp, 0x57D750);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012927u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012927: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012951; /* je: equal / zero */

loc_0001292E: ;
    eax = MEM32(eax + 0x28);
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x50); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x586658); /* addss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012951; /* je: equal / zero */

loc_00012946: ;
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(eax + 0x50) = edx;

loc_00012951: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, 0x57F3F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012962u); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00012962: ;
    PUSH32(esp, 0xF);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00012973u); RECOMP_ABI_CALL(0x0047D937u, sub_0047D937); /* call 0x0047D937 */

loc_00012973: ;
    ecx = MEM32(0x5B35F4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012986u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012986: ;
    PUSH32(esp, 0x57D75C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012991u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012991: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000129B6; /* je: equal / zero */

loc_00012998: ;
    edi = MEM32(eax + 0x28);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000129A5u); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_000129A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = edi + 0xC;
    PUSH32(esp, 0x000129B6u); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_000129B6: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000129C6u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_000129C6: ;
    PUSH32(esp, 0x57D768);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000129D1u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000129D1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000129FB; /* je: equal / zero */

loc_000129D8: ;
    eax = MEM32(eax + 0x28);
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x50); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x586658); /* addss */
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000129FB; /* je: equal / zero */

loc_000129F0: ;
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(eax + 0x50) = ecx;

loc_000129FB: ;
    PUSH32(esp, esi);
    edx = esp + 0xC;
    PUSH32(esp, 0x57F3F4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00012A0Bu); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00012A0B: ;
    PUSH32(esp, 0xF);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00012A1Cu); RECOMP_ABI_CALL(0x0047D937u, sub_0047D937); /* call 0x0047D937 */

loc_00012A1C: ;
    ecx = MEM32(0x5B35F4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012A2Fu); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012A2F: ;
    PUSH32(esp, 0x57D778);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012A3Au); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012A3A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012A5F; /* je: equal / zero */

loc_00012A41: ;
    edi = MEM32(eax + 0x28);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00012A4Eu); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_00012A4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    PUSH32(esp, 0x00012A5Fu); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_00012A5F: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012A6Fu); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012A6F: ;
    PUSH32(esp, 0x57D784);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012A7Au); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012A7A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012AA4; /* je: equal / zero */

loc_00012A81: ;
    eax = MEM32(eax + 0x28);
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x50); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x586658); /* addss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012AA4; /* je: equal / zero */

loc_00012A99: ;
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(eax + 0x50) = edx;

loc_00012AA4: ;
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, 0x57F3F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012AB4u); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00012AB4: ;
    PUSH32(esp, 0xF);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00012AC5u); RECOMP_ABI_CALL(0x0047D937u, sub_0047D937); /* call 0x0047D937 */

loc_00012AC5: ;
    ecx = MEM32(0x5B35F4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012AD8u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012AD8: ;
    PUSH32(esp, 0x57D794);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012AE3u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012AE3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012B08; /* je: equal / zero */

loc_00012AEA: ;
    edi = MEM32(eax + 0x28);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012AF7u); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_00012AF7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = edi + 0xC;
    PUSH32(esp, 0x00012B08u); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_00012B08: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012B18u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012B18: ;
    PUSH32(esp, 0x57D7D8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012B23u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012B23: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00012B38; /* je: equal / zero */

loc_00012B2B: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012B38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B35u); } /* indirect call */
    }

loc_00012B38: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012B48u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012B48: ;
    PUSH32(esp, 0x57D7EC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012B53u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012B53: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012B68; /* je: equal / zero */

loc_00012B5A: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012B68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B65u); } /* indirect call */
    }

loc_00012B68: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012B78u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012B78: ;
    PUSH32(esp, 0x57D800);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012B83u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012B83: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012B98; /* je: equal / zero */

loc_00012B8A: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012B98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B95u); } /* indirect call */
    }

loc_00012B98: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012BA8u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012BA8: ;
    PUSH32(esp, 0x57D7A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012BB3u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012BB3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00012BC4; /* je: equal / zero */

loc_00012BBB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012BC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012BC1u); } /* indirect call */
    }

loc_00012BC4: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012BD4u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012BD4: ;
    PUSH32(esp, 0x57D7AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012BDFu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012BDF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012BEF; /* je: equal / zero */

loc_00012BE6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012BEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012BECu); } /* indirect call */
    }

loc_00012BEF: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012BFFu); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012BFF: ;
    PUSH32(esp, 0x57D7B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012C0Au); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012C0A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C1A; /* je: equal / zero */

loc_00012C11: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012C1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012C17u); } /* indirect call */
    }

loc_00012C1A: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012C2Au); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012C2A: ;
    PUSH32(esp, 0x57D7C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012C35u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012C35: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C45; /* je: equal / zero */

loc_00012C3C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012C45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012C42u); } /* indirect call */
    }

loc_00012C45: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012C55u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012C55: ;
    PUSH32(esp, 0x57D7B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012C60u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012C60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C70; /* je: equal / zero */

loc_00012C67: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00012C70u); RECOMP_ABI_CALL(0x004617B0u, sub_004617B0); /* call 0x004617B0 */

loc_00012C70: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012C80u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012C80: ;
    PUSH32(esp, 0x57D7C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012C8Bu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012C8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C9B; /* je: equal / zero */

loc_00012C92: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00012C9Bu); RECOMP_ABI_CALL(0x004617B0u, sub_004617B0); /* call 0x004617B0 */

loc_00012C9B: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0x00012CA4u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_00012CA4: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00012A0D
 * Original: 0x00012A0D - 0x00012CA8 (667 bytes, 213 insns)
 * Folder: unsorted (none)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012A0D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012A0D: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00012A1Cu); RECOMP_ABI_CALL(0x0047D937u, sub_0047D937); /* call 0x0047D937 */

loc_00012A1C: ;
    ecx = MEM32(0x5B35F4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012A2Fu); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012A2F: ;
    PUSH32(esp, 0x57D778);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012A3Au); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012A3A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012A5F; /* je: equal / zero */

loc_00012A41: ;
    edi = MEM32(eax + 0x28);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00012A4Eu); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_00012A4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    PUSH32(esp, 0x00012A5Fu); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_00012A5F: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012A6Fu); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012A6F: ;
    PUSH32(esp, 0x57D784);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012A7Au); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012A7A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012AA4; /* je: equal / zero */

loc_00012A81: ;
    eax = MEM32(eax + 0x28);
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x50); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x586658); /* addss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012AA4; /* je: equal / zero */

loc_00012A99: ;
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(eax + 0x50) = edx;

loc_00012AA4: ;
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, 0x57F3F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012AB4u); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00012AB4: ;
    PUSH32(esp, 0xF);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00012AC5u); RECOMP_ABI_CALL(0x0047D937u, sub_0047D937); /* call 0x0047D937 */

loc_00012AC5: ;
    ecx = MEM32(0x5B35F4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012AD8u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012AD8: ;
    PUSH32(esp, 0x57D794);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012AE3u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012AE3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012B08; /* je: equal / zero */

loc_00012AEA: ;
    edi = MEM32(eax + 0x28);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012AF7u); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_00012AF7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = edi + 0xC;
    PUSH32(esp, 0x00012B08u); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_00012B08: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012B18u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012B18: ;
    PUSH32(esp, 0x57D7D8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012B23u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012B23: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00012B38; /* je: equal / zero */

loc_00012B2B: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012B38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B35u); } /* indirect call */
    }

loc_00012B38: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012B48u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012B48: ;
    PUSH32(esp, 0x57D7EC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012B53u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012B53: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012B68; /* je: equal / zero */

loc_00012B5A: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012B68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B65u); } /* indirect call */
    }

loc_00012B68: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012B78u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012B78: ;
    PUSH32(esp, 0x57D800);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012B83u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012B83: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012B98; /* je: equal / zero */

loc_00012B8A: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012B98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B95u); } /* indirect call */
    }

loc_00012B98: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012BA8u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012BA8: ;
    PUSH32(esp, 0x57D7A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012BB3u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012BB3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00012BC4; /* je: equal / zero */

loc_00012BBB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012BC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012BC1u); } /* indirect call */
    }

loc_00012BC4: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012BD4u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012BD4: ;
    PUSH32(esp, 0x57D7AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012BDFu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012BDF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012BEF; /* je: equal / zero */

loc_00012BE6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012BEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012BECu); } /* indirect call */
    }

loc_00012BEF: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012BFFu); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012BFF: ;
    PUSH32(esp, 0x57D7B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012C0Au); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012C0A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C1A; /* je: equal / zero */

loc_00012C11: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012C1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012C17u); } /* indirect call */
    }

loc_00012C1A: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012C2Au); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012C2A: ;
    PUSH32(esp, 0x57D7C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012C35u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012C35: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C45; /* je: equal / zero */

loc_00012C3C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012C45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012C42u); } /* indirect call */
    }

loc_00012C45: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012C55u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012C55: ;
    PUSH32(esp, 0x57D7B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012C60u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012C60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C70; /* je: equal / zero */

loc_00012C67: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00012C70u); RECOMP_ABI_CALL(0x004617B0u, sub_004617B0); /* call 0x004617B0 */

loc_00012C70: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012C80u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012C80: ;
    PUSH32(esp, 0x57D7C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012C8Bu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012C8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C9B; /* je: equal / zero */

loc_00012C92: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00012C9Bu); RECOMP_ABI_CALL(0x004617B0u, sub_004617B0); /* call 0x004617B0 */

loc_00012C9B: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0x00012CA4u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_00012CA4: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00012A91
 * Original: 0x00012A91 - 0x00012CA8 (535 bytes, 174 insns)
 * Folder: unsorted (none)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012A91(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012A91: ;
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012AA4; /* je: equal / zero */

loc_00012A99: ;
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(eax + 0x50) = edx;

loc_00012AA4: ;
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, 0x57F3F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012AB4u); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00012AB4: ;
    PUSH32(esp, 0xF);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00012AC5u); RECOMP_ABI_CALL(0x0047D937u, sub_0047D937); /* call 0x0047D937 */

loc_00012AC5: ;
    ecx = MEM32(0x5B35F4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012AD8u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012AD8: ;
    PUSH32(esp, 0x57D794);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012AE3u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012AE3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012B08; /* je: equal / zero */

loc_00012AEA: ;
    edi = MEM32(eax + 0x28);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012AF7u); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_00012AF7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = edi + 0xC;
    PUSH32(esp, 0x00012B08u); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_00012B08: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012B18u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012B18: ;
    PUSH32(esp, 0x57D7D8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012B23u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012B23: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00012B38; /* je: equal / zero */

loc_00012B2B: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012B38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B35u); } /* indirect call */
    }

loc_00012B38: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012B48u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012B48: ;
    PUSH32(esp, 0x57D7EC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012B53u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012B53: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012B68; /* je: equal / zero */

loc_00012B5A: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012B68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B65u); } /* indirect call */
    }

loc_00012B68: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012B78u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012B78: ;
    PUSH32(esp, 0x57D800);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012B83u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012B83: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012B98; /* je: equal / zero */

loc_00012B8A: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012B98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012B95u); } /* indirect call */
    }

loc_00012B98: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012BA8u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012BA8: ;
    PUSH32(esp, 0x57D7A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012BB3u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012BB3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00012BC4; /* je: equal / zero */

loc_00012BBB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012BC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012BC1u); } /* indirect call */
    }

loc_00012BC4: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012BD4u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012BD4: ;
    PUSH32(esp, 0x57D7AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012BDFu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012BDF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012BEF; /* je: equal / zero */

loc_00012BE6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012BEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012BECu); } /* indirect call */
    }

loc_00012BEF: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012BFFu); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012BFF: ;
    PUSH32(esp, 0x57D7B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012C0Au); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012C0A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C1A; /* je: equal / zero */

loc_00012C11: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012C1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012C17u); } /* indirect call */
    }

loc_00012C1A: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012C2Au); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012C2A: ;
    PUSH32(esp, 0x57D7C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012C35u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012C35: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C45; /* je: equal / zero */

loc_00012C3C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012C45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012C42u); } /* indirect call */
    }

loc_00012C45: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012C55u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012C55: ;
    PUSH32(esp, 0x57D7B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012C60u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012C60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C70; /* je: equal / zero */

loc_00012C67: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00012C70u); RECOMP_ABI_CALL(0x004617B0u, sub_004617B0); /* call 0x004617B0 */

loc_00012C70: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012C80u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012C80: ;
    PUSH32(esp, 0x57D7C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012C8Bu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012C8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C9B; /* je: equal / zero */

loc_00012C92: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00012C9Bu); RECOMP_ABI_CALL(0x004617B0u, sub_004617B0); /* call 0x004617B0 */

loc_00012C9B: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0x00012CA4u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_00012CA4: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00012BEC
 * Original: 0x00012BEC - 0x00012CA8 (188 bytes, 59 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012BEC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012BEC: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012BEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012BECu); } /* indirect call */
    }

loc_00012BEF: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012BFFu); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012BFF: ;
    PUSH32(esp, 0x57D7B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012C0Au); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012C0A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C1A; /* je: equal / zero */

loc_00012C11: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012C1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012C17u); } /* indirect call */
    }

loc_00012C1A: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012C2Au); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012C2A: ;
    PUSH32(esp, 0x57D7C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012C35u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012C35: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C45; /* je: equal / zero */

loc_00012C3C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00012C45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00012C42u); } /* indirect call */
    }

loc_00012C45: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012C55u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012C55: ;
    PUSH32(esp, 0x57D7B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012C60u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012C60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C70; /* je: equal / zero */

loc_00012C67: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00012C70u); RECOMP_ABI_CALL(0x004617B0u, sub_004617B0); /* call 0x004617B0 */

loc_00012C70: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012C80u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00012C80: ;
    PUSH32(esp, 0x57D7C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012C8Bu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012C8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012C9B; /* je: equal / zero */

loc_00012C92: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00012C9Bu); RECOMP_ABI_CALL(0x004617B0u, sub_004617B0); /* call 0x004617B0 */

loc_00012C9B: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0x00012CA4u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_00012CA4: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00012C9B
 * Original: 0x00012C9B - 0x00012CA8 (13 bytes, 4 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012C9B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012C9B: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0x00012CA4u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_00012CA4: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00012CAF
 * Original: 0x00012CAF - 0x00012CB0 (1 bytes, 1 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012CAF(void)
{

loc_00012CAF: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00012CB0
 * Original: 0x00012CB0 - 0x00012CE1 (49 bytes, 22 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00012CB0: ;
    edx = MEM32(esp + 8);
    eax = edx;
    PUSH32(esp, esi);
    esi = eax + 1;
    /* nop */

loc_00012CC0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00012CC0; /* jne: not equal / not zero */

loc_00012CC7: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00012CDAu); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00012CDA: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00012CF0
 * Original: 0x00012CF0 - 0x00012CF8 (8 bytes, 2 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012CF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000152B0(); return; /* tail jmp 0x000152B0 */

}

/**
 * sub_00012D00
 * Original: 0x00012D00 - 0x00012D31 (49 bytes, 13 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00012D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012D00: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00012D07u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_00012D07: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012D2E; /* je: equal / zero */

loc_00012D0E: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x57D6C0;
    MEM32(eax) = 0x57F54C;
    MEM32(eax + 0xC) = 0x57F9CC;
    esp += 4; return; /* ret */

loc_00012D2E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00012D40
 * Original: 0x00012D40 - 0x00012D64 (36 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00012D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012D40: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00012D47u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_00012D47: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012D61; /* je: equal / zero */

loc_00012D50: ;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax) = 0x57F588;
    esp += 4; return; /* ret */

loc_00012D61: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00012D70
 * Original: 0x00012D70 - 0x00012D9A (42 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00012D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012D70: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00012D77u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_00012D77: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012D97; /* je: equal / zero */

loc_00012D7E: ;
    ecx = 1;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = LO8(ecx);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax) = 0x57F588;
    esp += 4; return; /* ret */

loc_00012D97: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00012DA0
 * Original: 0x00012DA0 - 0x00012DCA (42 bytes, 12 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00012DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012DA0: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00012DA7u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_00012DA7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012DC7; /* je: equal / zero */

loc_00012DAE: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 2;
    MEM32(eax) = 0x57F588;
    esp += 4; return; /* ret */

loc_00012DC7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00012DB5
 * Original: 0x00012DB5 - 0x00012DCA (21 bytes, 6 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00012DB5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012DB5: ;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 2;
    MEM32(eax) = 0x57F588;
    esp += 4; return; /* ret */

}

/**
 * sub_00012DD0
 * Original: 0x00012DD0 - 0x00012DFA (42 bytes, 12 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00012DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012DD0: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00012DD7u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_00012DD7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012DF7; /* je: equal / zero */

loc_00012DDE: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 3;
    MEM32(eax) = 0x57F588;
    esp += 4; return; /* ret */

loc_00012DF7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00012E00
 * Original: 0x00012E00 - 0x00012E6D (109 bytes, 41 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012E00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x91EB04);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x57D960) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x57D960;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012E1Du); RECOMP_ABI_CALL(0x00012FD0u, sub_00012FD0); /* call 0x00012FD0 */

loc_00012E1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x91EAFC);
    edi = ecx + eax;
    if (CMP_L(_fas, _fbs)) goto loc_00012E58; /* jl: less (signed <) */

loc_00012E2A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00012E58; /* jae: above or equal (unsigned >=) */

loc_00012E2F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00012E35u); RECOMP_ABI_CALL(0x00013230u, sub_00013230); /* call 0x00013230 */

loc_00012E35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012E60; /* je: equal / zero */

loc_00012E3C: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    eax = edi + 1;
    PUSH32(esp, edx);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00012E50u); RECOMP_ABI_CALL(0x00031810u, sub_00031810); /* call 0x00031810 */

loc_00012E50: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00012E58u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00012E58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00012E60: ;
    PUSH32(esp, 0x00012E65u); RECOMP_ABI_CALL(0x0045AEC0u, sub_0045AEC0); /* call 0x0045AEC0 */

loc_00012E65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012E70
 * Original: 0x00012E70 - 0x00012E7A (10 bytes, 3 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012E70: ;
    PUSH32(esp, 0x00012E75u); RECOMP_ABI_CALL(0x0045AE90u, sub_0045AE90); /* call 0x0045AE90 */

loc_00012E75: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012E80
 * Original: 0x00012E80 - 0x00012F47 (199 bytes, 64 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012E80: ;
    PUSH32(esp, esi);
    esi = MEM32(0x91EB04);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x57D960) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x57D960;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012EA5; /* je: equal / zero */

loc_00012E9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012F40; /* jne: not equal / not zero */

loc_00012EA5: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x00012EAEu); RECOMP_ABI_CALL(0x00012FD0u, sub_00012FD0); /* call 0x00012FD0 */

loc_00012EAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00012F40; /* jl: less (signed <) */

loc_00012EB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    ecx = MEM32(0x91EAFC);
    if (CMP_AE(_fa, _fb)) goto loc_00012EE5; /* jae: above or equal (unsigned >=) */

loc_00012EC1: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x26 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012EE5; /* jne: not equal / not zero */

loc_00012EC6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012EE5; /* jb: below (unsigned <) */

loc_00012ECB: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x91EAFC) = ecx;

loc_00012ED4: ;
    PUSH32(esp, 0x00012ED9u); RECOMP_ABI_CALL(0x0045AE90u, sub_0045AE90); /* call 0x0045AE90 */

loc_00012ED9: ;
    PUSH32(esp, 0x00012EDEu); RECOMP_ABI_CALL(0x00013020u, sub_00013020); /* call 0x00013020 */

loc_00012EDE: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00012EE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012F40; /* jb: below (unsigned <) */

loc_00012EEA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00012F40; /* jge: greater or equal (signed >=) */

loc_00012EEF: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x28 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012F40; /* jne: not equal / not zero */

loc_00012EF4: ;
    esi = MEM32(esi + 8);
    edx = ecx + 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00012F40; /* jae: above or equal (unsigned >=) */

loc_00012EFE: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91EAFC) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012ED4; /* jb: below (unsigned <) */

loc_00012F0D: ;
    edx = MEM32(0x91EB00);
    eax = eax + eax * 4 + -25;
    ecx = eax * 2 + 0x57D850;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00012F25u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00012F25: ;
    ecx = MEM32(0x91EB00);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012F34u); RECOMP_ABI_CALL(0x00460900u, sub_00460900); /* call 0x00460900 */

loc_00012F34: ;
    PUSH32(esp, 0x00012F39u); RECOMP_ABI_CALL(0x00013020u, sub_00013020); /* call 0x00013020 */

loc_00012F39: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00012F40: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012F50
 * Original: 0x00012F50 - 0x00012F99 (73 bytes, 15 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012F50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012F50: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    MEM32(0x91EAFC) = 0;
    MEM32(0x59A2A8) = 0xF2;
    MEM32(0x91EB04) = eax;
    MEM32(0x91EB00) = ecx;
    PUSH32(esp, 0x00012F7Bu); RECOMP_ABI_CALL(0x00013020u, sub_00013020); /* call 0x00013020 */

loc_00012F7B: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x49742400);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00012F91u); RECOMP_ABI_CALL(0x000E1FC0u, sub_000E1FC0); /* call 0x000E1FC0 */

loc_00012F91: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012FA0
 * Original: 0x00012FA0 - 0x00012FD0 (48 bytes, 13 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012FA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012FA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(0x91EAFC) = eax;
    MEM32(0x59A2A8) = 0xF2;
    MEM32(0x91EB04) = eax;
    MEM32(0x91EB00) = eax;
    PUSH32(esp, 0x00012FC8u); RECOMP_ABI_CALL(0x000E1FC0u, sub_000E1FC0); /* call 0x000E1FC0 */

loc_00012FC8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012FD0
 * Original: 0x00012FD0 - 0x0001301A (74 bytes, 38 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012FD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x57D850;
    /* nop */

loc_00012FE0: ;
    eax = esi;
    edx = eax + 1;

loc_00012FE5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012FE5; /* jne: not equal / not zero */

loc_00012FEC: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00012FFDu); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00012FFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013014; /* je: equal / zero */

loc_00013001: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x57D8E6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x57D8E6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00012FE0; /* jl: less (signed <) */

loc_0001300D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00013014: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00013020
 * Original: 0x00013020 - 0x00013227 (519 bytes, 160 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013020: ;
    eax = MEM32(0x91EB00);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013223; /* je: equal / zero */

loc_00013030: ;
    eax = MEM32(0x59A2AC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0xF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00013074; /* jne: not equal / not zero */

loc_00013042: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013046: ;
    eax = MEM32(0x5960C0);
    ecx = MEM32(esi + eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x57D900);
    PUSH32(esp, 0x00013059u); RECOMP_ABI_CALL(0x0047EA8Du, sub_0047EA8D); /* call 0x0047EA8D */

loc_00013059: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001306E; /* je: equal / zero */

loc_00013060: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB58 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00013046; /* jb: below (unsigned <) */

loc_0001306C: ;
    goto loc_00013074;

loc_0001306E: ;
    MEM32(0x59A2AC) = edi;

loc_00013074: ;
    eax = MEM32(0x91EB04);
    ecx = MEM32(0x59A2A8);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x57D960) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x57D960;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000130CD; /* jne: not equal / not zero */

loc_0001308F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000130A0;

loc_00013095: ;
    eax = MEM32(esp + 0x14);
    /* nop */

loc_000130A0: ;
    edx = MEM32(0x5960C0);
    ecx = MEM32(esi + edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000130B2u); RECOMP_ABI_CALL(0x0047EA8Du, sub_0047EA8D); /* call 0x0047EA8D */

loc_000130B2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000130C7; /* je: equal / zero */

loc_000130B9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB58 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00013095; /* jb: below (unsigned <) */

loc_000130C5: ;
    goto loc_000130CD;

loc_000130C7: ;
    MEM32(0x59A2A8) = edi;

loc_000130CD: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = 0x57D850;
    MEM32(esp + 0x18) = 0xF;
    /* nop */

loc_000130E0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x91EB00);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000130F1u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000130F1: ;
    edx = MEM32(0x91EAFC);
    esi = eax;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 8);
    ebp = edx + ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    ecx = esi;
    if (CMP_AE(_fa, _fb)) goto loc_000131AF; /* jae: above or equal (unsigned >=) */

loc_00013110: ;
    PUSH32(esp, 1);
    MEM8(esi + 4) = 1;
    PUSH32(esp, 0x0001311Bu); RECOMP_ABI_CALL(0x004617B0u, sub_004617B0); /* call 0x004617B0 */

loc_0001311B: ;
    esi = MEM32(esi + 0x28);
    edi = MEM32(esi + 0x54);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0001313B; /* je: equal / zero */

loc_00013127: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x57D844);
    PUSH32(esp, 0x00013132u); RECOMP_ABI_CALL(0x004642C0u, sub_004642C0); /* call 0x004642C0 */

loc_00013132: ;
    MEM32(esi + 0x54) = 0;
    goto loc_00013147;

loc_0001313B: ;
    PUSH32(esp, 0x57D844);
    PUSH32(esp, 0x00013145u); RECOMP_ABI_CALL(0x00462F30u, sub_00462F30); /* call 0x00462F30 */

loc_00013145: ;
    edi = eax;

loc_00013147: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000131BA; /* je: equal / zero */

loc_0001314B: ;
    ecx = MEM32(0x91EB04);
    edx = ecx;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(edx + 0x57D96C);
    eax = ZX8(MEM8(eax + ebp));
    if (CMP_EQ(_fa, _fb)) goto loc_00013169; /* je: equal / zero */

loc_00013164: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001316A; /* jne: not equal / not zero */

loc_00013169: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0001316A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013197; /* je: equal / zero */

loc_0001316F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    ecx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00013180; /* jl: less (signed <) */

loc_00013178: ;
    ecx = eax + -32;
    edx = 1;

loc_00013180: ;
    esi = MEM32(edx * 4 + 0x91F0DC);
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, esi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000131A4; /* je: equal / zero */

loc_00013197: ;
    ecx = MEM32(0x59A2A8);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x28) = ecx;
    goto loc_000131BA;

loc_000131A4: ;
    edx = MEM32(0x59A2AC);
    MEM32(edi + 0x28) = edx;
    goto loc_000131BA;

loc_000131AF: ;
    PUSH32(esp, 0);
    MEM8(esi + 4) = 0;
    PUSH32(esp, 0x000131BAu); RECOMP_ABI_CALL(0x004617B0u, sub_004617B0); /* call 0x004617B0 */

loc_000131BA: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_000130E0; /* jne: not equal / not zero */

loc_000131D5: ;
    eax = MEM32(0x91EB00);
    PUSH32(esp, 0x57D8E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000131E5u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000131E5: ;
    ecx = MEM32(0x91EAFC);
    edx = MEM32(0x91EB00);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    PUSH32(esp, 0x57D8F4);
    PUSH32(esp, edx);
    MEM8(eax + 4) = LO8(ecx);
    PUSH32(esp, 0x00013204u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00013204: ;
    ecx = MEM32(0x91EAFC);
    edx = MEM32(esp + 0x24);
    esi = MEM32(edx + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    POP32(esp, esi);
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    POP32(esp, ebp);
    MEM8(eax + 4) = LO8(ecx);
    POP32(esp, ebx);

loc_00013223: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013116
 * Original: 0x00013116 - 0x00013227 (273 bytes, 85 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013116(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013116: ;
    PUSH32(esp, 0x0001311Bu); RECOMP_ABI_CALL(0x004617B0u, sub_004617B0); /* call 0x004617B0 */

loc_0001311B: ;
    esi = MEM32(esi + 0x28);
    edi = MEM32(esi + 0x54);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0001313B; /* je: equal / zero */

loc_00013127: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x57D844);
    PUSH32(esp, 0x00013132u); RECOMP_ABI_CALL(0x004642C0u, sub_004642C0); /* call 0x004642C0 */

loc_00013132: ;
    MEM32(esi + 0x54) = 0;
    goto loc_00013147;

loc_0001313B: ;
    PUSH32(esp, 0x57D844);
    PUSH32(esp, 0x00013145u); RECOMP_ABI_CALL(0x00462F30u, sub_00462F30); /* call 0x00462F30 */

loc_00013145: ;
    edi = eax;

loc_00013147: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000131BA; /* je: equal / zero */

loc_0001314B: ;
    ecx = MEM32(0x91EB04);
    edx = ecx;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(edx + 0x57D96C);
    eax = ZX8(MEM8(eax + ebp));
    if (CMP_EQ(_fa, _fb)) goto loc_00013169; /* je: equal / zero */

loc_00013164: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001316A; /* jne: not equal / not zero */

loc_00013169: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0001316A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013197; /* je: equal / zero */

loc_0001316F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    ecx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00013180; /* jl: less (signed <) */

loc_00013178: ;
    ecx = eax + -32;
    edx = 1;

loc_00013180: ;
    esi = MEM32(edx * 4 + 0x91F0DC);
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, esi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000131A4; /* je: equal / zero */

loc_00013197: ;
    ecx = MEM32(0x59A2A8);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x28) = ecx;
    goto loc_000131BA;

loc_000131A4: ;
    edx = MEM32(0x59A2AC);
    MEM32(edi + 0x28) = edx;
    goto loc_000131BA;

    PUSH32(esp, 0);
    MEM8(esi + 4) = 0;
    PUSH32(esp, 0x000131BAu); RECOMP_ABI_CALL(0x004617B0u, sub_004617B0); /* call 0x004617B0 */

loc_000131BA: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_000130E0(); return; } /* jne: not equal / not zero */

loc_000131D5: ;
    eax = MEM32(0x91EB00);
    PUSH32(esp, 0x57D8E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000131E5u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000131E5: ;
    ecx = MEM32(0x91EAFC);
    edx = MEM32(0x91EB00);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    PUSH32(esp, 0x57D8F4);
    PUSH32(esp, edx);
    MEM8(eax + 4) = LO8(ecx);
    PUSH32(esp, 0x00013204u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00013204: ;
    ecx = MEM32(0x91EAFC);
    edx = MEM32(esp + 0x24);
    esi = MEM32(edx + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    POP32(esp, esi);
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    POP32(esp, ebp);
    MEM8(eax + 4) = LO8(ecx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013178
 * Original: 0x00013178 - 0x00013227 (175 bytes, 53 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013178(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013178: ;
    ecx = eax + -32;
    edx = 1;
    esi = MEM32(edx * 4 + 0x91F0DC);
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, esi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000131A4; /* je: equal / zero */

loc_00013197: ;
    ecx = MEM32(0x59A2A8);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x28) = ecx;
    goto loc_000131BA;

loc_000131A4: ;
    edx = MEM32(0x59A2AC);
    MEM32(edi + 0x28) = edx;
    goto loc_000131BA;

    PUSH32(esp, 0);
    MEM8(esi + 4) = 0;
    PUSH32(esp, 0x000131BAu); RECOMP_ABI_CALL(0x004617B0u, sub_004617B0); /* call 0x004617B0 */

loc_000131BA: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_000130E0(); return; } /* jne: not equal / not zero */

loc_000131D5: ;
    eax = MEM32(0x91EB00);
    PUSH32(esp, 0x57D8E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000131E5u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000131E5: ;
    ecx = MEM32(0x91EAFC);
    edx = MEM32(0x91EB00);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    PUSH32(esp, 0x57D8F4);
    PUSH32(esp, edx);
    MEM8(eax + 4) = LO8(ecx);
    PUSH32(esp, 0x00013204u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00013204: ;
    ecx = MEM32(0x91EAFC);
    edx = MEM32(esp + 0x24);
    esi = MEM32(edx + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    POP32(esp, esi);
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    POP32(esp, ebp);
    MEM8(eax + 4) = LO8(ecx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013228
 * Original: 0x00013228 - 0x00013230 (8 bytes, 8 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013228(void)
{

loc_00013228: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00013230
 * Original: 0x00013230 - 0x00013285 (85 bytes, 31 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00013230: ;
    ecx = MEM32(0x91EB04);
    eax = ecx;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = MEM32(eax + 0x57D96C);
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(edx + eax));
    if (CMP_EQ(_fa, _fb)) goto loc_00013252; /* je: equal / zero */

loc_0001324D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013253; /* jne: not equal / not zero */

loc_00013252: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00013253: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001325B; /* jne: not equal / not zero */

loc_00013258: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0001325B: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0001326C; /* jl: less (signed <) */

loc_00013264: ;
    ecx = eax + -32;
    edx = 1;

loc_0001326C: ;
    eax = MEM32(edx * 4 + 0x91F0DC);
    PUSH32(esp, esi);
    esi = 1;
    if (LO8(ecx)) _cf = (int)(((esi) >> (32 - (LO8(ecx)))) & 1);
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013290
 * Original: 0x00013290 - 0x000132B0 (32 bytes, 12 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013290: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi;
    PUSH32(esp, 0x0001329Au); RECOMP_ABI_CALL(0x000132B0u, sub_000132B0); /* call 0x000132B0 */

loc_0001329A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000132AA; /* je: equal / zero */

loc_000132A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000132A7u); RECOMP_ABI_CALL(0x0047D86Eu, sub_0047D86E); /* call 0x0047D86E */

loc_000132A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000132AA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000132B0
 * Original: 0x000132B0 - 0x000132B7 (7 bytes, 2 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000132B0(void)
{

loc_000132B0: ;
    MEM32(eax) = 0x57D6BC;
    esp += 4; return; /* ret */

}

/**
 * sub_000132C0
 * Original: 0x000132C0 - 0x000132C8 (8 bytes, 2 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000132C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000132C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00014F10(); return; /* tail jmp 0x00014F10 */

}

/**
 * sub_000132D0
 * Original: 0x000132D0 - 0x00013301 (49 bytes, 13 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000132D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000132D0: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000132D7u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_000132D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000132FE; /* je: equal / zero */

loc_000132DE: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x57D6C0;
    MEM32(eax) = 0x57F5DC;
    MEM32(eax + 0xC) = 0x57F9CC;
    esp += 4; return; /* ret */

loc_000132FE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013310
 * Original: 0x00013310 - 0x00013333 (35 bytes, 11 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00013310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013310: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00013317u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_00013317: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013330; /* je: equal / zero */

loc_0001331E: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax) = 0x57F5C4;
    esp += 4; return; /* ret */

loc_00013330: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013340
 * Original: 0x00013340 - 0x0001357F (575 bytes, 181 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013340: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x81 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013398; /* jne: not equal / not zero */

loc_0001334E: ;
    ecx = MEM32(0x5B3314);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013398; /* jne: not equal / not zero */

loc_00013358: ;
    PUSH32(esp, 0x0001335Du); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_0001335D: ;
    SET_LO8(eax, MEM8(0x91F2B7));
    SET_LO8(ecx, MEM8(0x91F2B8));
    edx = MEM32(0x91F2BC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM8(0x91F29A) = LO8(eax);
    MEM8(0x91F29B) = LO8(ecx);
    MEM32(0x91F29C) = edx;
    MEM8(0x91F2A0) = 0;
    PUSH32(esp, 0x0001338Fu); RECOMP_ABI_CALL(0x0045AFE0u, sub_0045AFE0); /* call 0x0045AFE0 */

loc_0001338F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_00013398: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000133DD; /* jne: not equal / not zero */

loc_000133A0: ;
    PUSH32(esp, 0x000133A5u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_000133A5: ;
    SET_LO8(eax, MEM8(0x91F2A0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000133C0; /* jne: not equal / not zero */

loc_000133AE: ;
    SET_LO8(eax, MEM8(0x91F2A1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000133C0; /* jne: not equal / not zero */

loc_000133B7: ;
    SET_LO8(eax, MEM8(0x91F2A2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000133CA; /* je: equal / zero */

loc_000133C0: ;
    esi = 0x91F28C;
    PUSH32(esp, 0x000133CAu); RECOMP_ABI_CALL(0x0001B3F0u, sub_0001B3F0); /* call 0x0001B3F0 */

loc_000133CA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000133D3u); RECOMP_ABI_CALL(0x0045AFE0u, sub_0045AFE0); /* call 0x0045AFE0 */

loc_000133D3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_000133DD: ;
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x57D9B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000133F8u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_000133F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013463; /* jne: not equal / not zero */

loc_000133FC: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013408; /* je: equal / zero */

loc_00013403: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013463; /* jne: not equal / not zero */

loc_00013408: ;
    SET_LO8(eax, MEM8(0x91F29A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001343A; /* jne: not equal / not zero */

loc_00013411: ;
    PUSH32(esp, 0x00013416u); RECOMP_ABI_CALL(0x0045AE90u, sub_0045AE90); /* call 0x0045AE90 */

loc_00013416: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x57D9BC);
    PUSH32(esp, 0x00013422u); RECOMP_ABI_CALL(0x00013C40u, sub_00013C40); /* call 0x00013C40 */

loc_00013422: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM8(0x91F29A) = 1;
    MEM8(0x91F2A0) = 1;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_0001343A: ;
    PUSH32(esp, 0x0001343Fu); RECOMP_ABI_CALL(0x0045AE90u, sub_0045AE90); /* call 0x0045AE90 */

loc_0001343F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x57D9CC);
    PUSH32(esp, 0x0001344Bu); RECOMP_ABI_CALL(0x00013C40u, sub_00013C40); /* call 0x00013C40 */

loc_0001344B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM8(0x91F29A) = 0;
    MEM8(0x91F2A0) = 1;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_00013463: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 8);
    PUSH32(esp, 0x57D9E0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00013477u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00013477: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000134E2; /* jne: not equal / not zero */

loc_0001347B: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013487; /* je: equal / zero */

loc_00013482: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000134E2; /* jne: not equal / not zero */

loc_00013487: ;
    SET_LO8(eax, MEM8(0x91F29B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000134B9; /* jne: not equal / not zero */

loc_00013490: ;
    PUSH32(esp, 0x00013495u); RECOMP_ABI_CALL(0x0045AE90u, sub_0045AE90); /* call 0x0045AE90 */

loc_00013495: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x57D9EC);
    PUSH32(esp, 0x000134A1u); RECOMP_ABI_CALL(0x00013C40u, sub_00013C40); /* call 0x00013C40 */

loc_000134A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM8(0x91F29B) = 1;
    MEM8(0x91F2A0) = 1;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_000134B9: ;
    PUSH32(esp, 0x000134BEu); RECOMP_ABI_CALL(0x0045AE90u, sub_0045AE90); /* call 0x0045AE90 */

loc_000134BE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x57D9FC);
    PUSH32(esp, 0x000134CAu); RECOMP_ABI_CALL(0x00013C40u, sub_00013C40); /* call 0x00013C40 */

loc_000134CA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM8(0x91F29B) = 0;
    MEM8(0x91F2A0) = 1;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_000134E2: ;
    PUSH32(esp, 0x57D9A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000134EDu); RECOMP_ABI_CALL(0x00012CB0u, sub_00012CB0); /* call 0x00012CB0 */

loc_000134ED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013578; /* je: equal / zero */

loc_000134F8: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    esi = MEM32(0x91F29C);
    if (CMP_NE(_fa, _fb)) goto loc_0001350D; /* jne: not equal / not zero */

loc_00013505: ;
    PUSH32(esp, 0x0001350Au); RECOMP_ABI_CALL(0x0045AE90u, sub_0045AE90); /* call 0x0045AE90 */

loc_0001350A: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00013518;

loc_0001350D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013578; /* jne: not equal / not zero */

loc_00013512: ;
    PUSH32(esp, 0x00013517u); RECOMP_ABI_CALL(0x0045AE90u, sub_0045AE90); /* call 0x0045AE90 */

loc_00013517: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00013518: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00013521; /* jle: less or equal (signed <=) */

loc_0001351D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0001352A;

loc_00013521: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001352A; /* jge: greater or equal (signed >=) */

loc_00013525: ;
    esi = 3;

loc_0001352A: ;
    PUSH32(esp, ebp);
    eax = esi;
    ecx = 0x91F28C;
    PUSH32(esp, 0x00013537u); RECOMP_ABI_CALL(0x0001B240u, sub_0001B240); /* call 0x0001B240 */

loc_00013537: ;
    ecx = MEM32(0x5B35F4);
    edi = MEM32(0x91F29C);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001354Du); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_0001354D: ;
    ebp = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013551: ;
    edx = MEM32(esi * 4 + 0x59A2B0);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0001355Fu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_0001355F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM8(eax + 4) = LO8(ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00013551; /* jl: less (signed <) */

loc_00013570: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_00013578: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00013580
 * Original: 0x00013580 - 0x00013657 (215 bytes, 72 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013580: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x57F540);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00013592u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00013592: ;
    ecx = MEM32(0x91EB44);
    SET_LO8(edx, MEM8(ecx + 0x1E));
    ecx = MEM32(0x5B35F4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(eax + 4) = LO8(edx);
    SET_LO8(eax, MEM8(0x91F29A));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_000135C6; /* je: equal / zero */

loc_000135BA: ;
    PUSH32(esp, 0x000135BFu); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_000135BF: ;
    PUSH32(esp, 0x57D9BC);
    goto loc_000135D0;

loc_000135C6: ;
    PUSH32(esp, 0x000135CBu); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_000135CB: ;
    PUSH32(esp, 0x57D9CC);

loc_000135D0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000135D6u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000135D6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000135E6; /* je: equal / zero */

loc_000135DD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000135E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000135E3u); } /* indirect call */
    }

loc_000135E6: ;
    ecx = MEM32(0x5B35F4);
    SET_LO8(eax, MEM8(0x91F29B));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_00013606; /* je: equal / zero */

loc_000135FA: ;
    PUSH32(esp, 0x000135FFu); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_000135FF: ;
    PUSH32(esp, 0x57D9EC);
    goto loc_00013610;

loc_00013606: ;
    PUSH32(esp, 0x0001360Bu); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_0001360B: ;
    PUSH32(esp, 0x57D9FC);

loc_00013610: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013616u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00013616: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013626; /* je: equal / zero */

loc_0001361D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00013626u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013623u); } /* indirect call */
    }

loc_00013626: ;
    edi = MEM32(0x91F29C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00013630: ;
    eax = MEM32(esi * 4 + 0x59A2B0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0001363Eu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_0001363E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM8(eax + 4) = LO8(ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00013630; /* jl: less (signed <) */

loc_0001364F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001363E
 * Original: 0x0001363E - 0x00013657 (25 bytes, 12 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001363E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001363E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM8(eax + 4) = LO8(ecx);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00013630(); return; } /* jl: less (signed <) */

loc_0001364F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013660
 * Original: 0x00013660 - 0x00013691 (49 bytes, 13 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00013660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013660: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00013667u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_00013667: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001368E; /* je: equal / zero */

loc_0001366E: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x57D6C0;
    MEM32(eax) = 0x57F664;
    MEM32(eax + 0xC) = 0x57F9CC;
    esp += 4; return; /* ret */

loc_0001368E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000136A0
 * Original: 0x000136A0 - 0x00013712 (114 bytes, 38 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000136A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000136A0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x81 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000136D7; /* jne: not equal / not zero */

loc_000136AE: ;
    eax = MEM32(0x5B3314);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000136D7; /* jne: not equal / not zero */

loc_000136B7: ;
    PUSH32(esp, 0x000136BCu); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_000136BC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000136C5u); RECOMP_ABI_CALL(0x0045AFE0u, sub_0045AFE0); /* call 0x0045AFE0 */

loc_000136C5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x91EB08) = 0;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_000136D7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x25 (32-bit) */
    eax = MEM32(0x91EB08);
    if (CMP_NE(_fa, _fb)) goto loc_000136E8; /* jne: not equal / not zero */

loc_000136E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000136E8; /* jle: less or equal (signed <=) */

loc_000136E5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000136F3;

loc_000136E8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x27 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001370D; /* jne: not equal / not zero */

loc_000136ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001370D; /* jge: greater or equal (signed >=) */

loc_000136F2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000136F3: ;
    PUSH32(esp, 1);
    MEM32(0x91EB08) = eax;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013705u); RECOMP_ABI_CALL(0x0045AF40u, sub_0045AF40); /* call 0x0045AF40 */

loc_00013705: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0001370D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00013720
 * Original: 0x00013720 - 0x00013764 (68 bytes, 18 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013720: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD;
    edi = esp + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x0001373Au); RECOMP_ABI_CALL(0x00013A00u, sub_00013A00); /* call 0x00013A00 */

loc_0001373A: ;
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x30) = ecx;
    ecx = esp + 4;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x34) = 0x32;
    MEM32(esp + 0x2C) = 0x3E7;
    PUSH32(esp, 0x0001375Fu); RECOMP_ABI_CALL(0x000E27E0u, sub_000E27E0); /* call 0x000E27E0 */

loc_0001375F: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013770
 * Original: 0x00013770 - 0x000137B4 (68 bytes, 18 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013770: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD;
    edi = esp + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x0001378Au); RECOMP_ABI_CALL(0x00013A00u, sub_00013A00); /* call 0x00013A00 */

loc_0001378A: ;
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x30) = ecx;
    ecx = esp + 4;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x34) = 0x32;
    MEM32(esp + 0x2C) = 0x3E9;
    PUSH32(esp, 0x000137AFu); RECOMP_ABI_CALL(0x000E27E0u, sub_000E27E0); /* call 0x000E27E0 */

loc_000137AF: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000137BB
 * Original: 0x000137BB - 0x000137C0 (5 bytes, 5 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000137BB(void)
{

loc_000137BB: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000137C0
 * Original: 0x000137C0 - 0x00013827 (103 bytes, 28 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000137C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000137C0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x000137C9u); RECOMP_ABI_CALL(0x000304B0u, sub_000304B0); /* call 0x000304B0 */

loc_000137C9: ;
    MEM32(eax + 4) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD;
    edi = esp + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x000137E6u); RECOMP_ABI_CALL(0x00013A00u, sub_00013A00); /* call 0x00013A00 */

loc_000137E6: ;
    SET_LO8(ecx, MEM8(esp + 0x3C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x34) = 0x32;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0xE00016C;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0001381B; /* je: equal / zero */

loc_0001380B: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013814u); RECOMP_ABI_CALL(0x000E2BF0u, sub_000E2BF0); /* call 0x000E2BF0 */

loc_00013814: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0001381B: ;
    ecx = esp;
    PUSH32(esp, 0x00013823u); RECOMP_ABI_CALL(0x000E27E0u, sub_000E27E0); /* call 0x000E27E0 */

loc_00013823: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013830
 * Original: 0x00013830 - 0x0001386C (60 bytes, 16 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013830(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013830: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD;
    edi = esp + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x0001384Au); RECOMP_ABI_CALL(0x00013A00u, sub_00013A00); /* call 0x00013A00 */

loc_0001384A: ;
    ecx = esp + 4;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x34) = 0x32;
    MEM32(esp + 0x2C) = 6;
    PUSH32(esp, 0x00013867u); RECOMP_ABI_CALL(0x000E27E0u, sub_000E27E0); /* call 0x000E27E0 */

loc_00013867: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013870
 * Original: 0x00013870 - 0x000138B4 (68 bytes, 18 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013870: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD;
    edi = esp + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x0001388Au); RECOMP_ABI_CALL(0x00013A00u, sub_00013A00); /* call 0x00013A00 */

loc_0001388A: ;
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x30) = ecx;
    ecx = esp + 4;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x34) = 0x32;
    MEM32(esp + 0x2C) = 0x15;
    PUSH32(esp, 0x000138AFu); RECOMP_ABI_CALL(0x000E27E0u, sub_000E27E0); /* call 0x000E27E0 */

loc_000138AF: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000138C0
 * Original: 0x000138C0 - 0x00013904 (68 bytes, 18 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000138C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000138C0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD;
    edi = esp + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x000138DAu); RECOMP_ABI_CALL(0x00013A00u, sub_00013A00); /* call 0x00013A00 */

loc_000138DA: ;
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x30) = ecx;
    ecx = esp + 4;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x34) = 0x32;
    MEM32(esp + 0x2C) = 0x14;
    PUSH32(esp, 0x000138FFu); RECOMP_ABI_CALL(0x000E27E0u, sub_000E27E0); /* call 0x000E27E0 */

loc_000138FF: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013910
 * Original: 0x00013910 - 0x00013954 (68 bytes, 17 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013910: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD;
    edi = esp + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x0001392Au); RECOMP_ABI_CALL(0x00013A00u, sub_00013A00); /* call 0x00013A00 */

loc_0001392A: ;
    ecx = esp + 4;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x34) = 0x32;
    MEM32(esp + 0x2C) = 7;
    MEM32(esp + 0x30) = 0x3E8;
    PUSH32(esp, 0x0001394Fu); RECOMP_ABI_CALL(0x000E27E0u, sub_000E27E0); /* call 0x000E27E0 */

loc_0001394F: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013960
 * Original: 0x00013960 - 0x000139A4 (68 bytes, 17 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013960: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD;
    edi = esp + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x0001397Au); RECOMP_ABI_CALL(0x00013A00u, sub_00013A00); /* call 0x00013A00 */

loc_0001397A: ;
    ecx = esp + 4;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x34) = 0x32;
    MEM32(esp + 0x2C) = 0xBBC;
    MEM32(esp + 0x30) = 0;
    PUSH32(esp, 0x0001399Fu); RECOMP_ABI_CALL(0x000E27E0u, sub_000E27E0); /* call 0x000E27E0 */

loc_0001399F: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000139B0
 * Original: 0x000139B0 - 0x000139F4 (68 bytes, 17 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000139B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000139B0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD;
    edi = esp + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x000139CAu); RECOMP_ABI_CALL(0x00013A00u, sub_00013A00); /* call 0x00013A00 */

loc_000139CA: ;
    ecx = esp + 4;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x34) = 0x32;
    MEM32(esp + 0x2C) = 3;
    MEM32(esp + 0x30) = 0xBB9;
    PUSH32(esp, 0x000139EFu); RECOMP_ABI_CALL(0x000E27E0u, sub_000E27E0); /* call 0x000E27E0 */

loc_000139EF: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00013A00
 * Original: 0x00013A00 - 0x00013A77 (119 bytes, 38 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013A00: ;
    eax = MEM32(0x91EB44);
    SET_LO8(ecx, MEM8(eax + 0x1E));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = 0x842580;
    if (CMP_EQ(_fa, _fb)) goto loc_00013A36; /* je: equal / zero */

loc_00013A11: ;
    PUSH32(esp, 0xE0001F6);
    PUSH32(esp, 0x00013A1Bu); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00013A1B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = 0xE0001F6;
    if (CMP_EQ(_fa, _fb)) goto loc_00013A2A; /* je: equal / zero */

loc_00013A28: ;
    ecx = eax;

loc_00013A2A: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    goto loc_00013A59;

loc_00013A36: ;
    PUSH32(esp, 0xB0044CA);
    PUSH32(esp, 0x00013A40u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00013A40: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = 0xB0044CA;
    if (CMP_EQ(_fa, _fb)) goto loc_00013A4F; /* je: equal / zero */

loc_00013A4D: ;
    ecx = eax;

loc_00013A4F: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));

loc_00013A59: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00013A67u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00013A67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013A71; /* jne: not equal / not zero */

loc_00013A6F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013A71: ;
    MEM32(0x953220) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00013A77
 * Original: 0x00013A77 - 0x00013A7C (5 bytes, 5 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013A77(void)
{

loc_00013A77: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00013A7C
 * Original: 0x00013A7C - 0x00013A80 (4 bytes, 4 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013A7C(void)
{

loc_00013A7C: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00013A80
 * Original: 0x00013A80 - 0x00013C20 (416 bytes, 136 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013A80: ;
    SET_LO8(ecx, MEM8(0x91ED80));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, ebp);
    ebp = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00013C1E; /* je: equal / zero */

loc_00013A94: ;
    SET_LO8(edx, MEM8(0x91ED81));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013C1E; /* je: equal / zero */

loc_00013AA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_00013B02; /* ja: above (unsigned >) */

loc_00013AA9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x13C20); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00013AB0u) goto loc_00013AB0;
    if (_jt == 0x00013ACBu) goto loc_00013ACB;
    if (_jt == 0x00013AD2u) goto loc_00013AD2;
    if (_jt == 0x00013ADEu) goto loc_00013ADE;
    if (_jt == 0x00013AEAu) goto loc_00013AEA;
    if (_jt == 0x00013AF6u) goto loc_00013AF6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00013AB0: ;
    esi = 0xF00E0006u;

loc_00013AB5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013B3E; /* jne: not equal / not zero */

loc_00013ABE: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013B3E; /* jne: not equal / not zero */

loc_00013AC2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013B06; /* jne: not equal / not zero */

loc_00013AC7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00013B3C;

loc_00013ACB: ;
    esi = 0xF00E0005u;
    goto loc_00013AB5;

loc_00013AD2: ;
    ebp = 1;
    esi = 0xF00A0004u;
    goto loc_00013AB5;

loc_00013ADE: ;
    ebp = 1;
    esi = 0xF00A0003u;
    goto loc_00013AB5;

loc_00013AEA: ;
    ebp = 1;
    esi = 0xF00A0006u;
    goto loc_00013AB5;

loc_00013AF6: ;
    ebp = 1;
    esi = 0xF00A0008u;
    goto loc_00013AB5;

loc_00013B02: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00013B5A;

loc_00013B06: ;
    eax = esi;
    eax = eax & 0xF0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF0000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013B3A; /* jne: not equal / not zero */

loc_00013B14: ;
    eax = MEM32(0x91ED74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013B25; /* je: equal / zero */

loc_00013B1D: ;
    esi = esi & 0xFFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00013B3A;

loc_00013B25: ;
    ecx = esi;
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00013B33u); RECOMP_ABI_CALL(0x0043BDC0u, sub_0043BDC0); /* call 0x0043BDC0 */

loc_00013B33: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013B3C; /* jne: not equal / not zero */

loc_00013B3A: ;
    eax = esi;

loc_00013B3C: ;
    esi = eax;

loc_00013B3E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013B5A; /* jne: not equal / not zero */

loc_00013B43: ;
    eax = MEM32(0x59A2C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013B5A; /* je: equal / zero */

loc_00013B4D: ;
    PUSH32(esp, 0x00013B52u); RECOMP_ABI_CALL(0x00032600u, sub_00032600); /* call 0x00032600 */

loc_00013B52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013C1D; /* jne: not equal / not zero */

loc_00013B5A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x00013B63u); RECOMP_ABI_CALL(0x00013A00u, sub_00013A00); /* call 0x00013A00 */

loc_00013B63: ;
    ebx = eax;
    SET_LO8(eax, MEM8(0x91ED80));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013C0D; /* je: equal / zero */

loc_00013B72: ;
    _fa = (uint32_t)(MEM8(0x91ED81)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x91ED81), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013C0D; /* je: equal / zero */

loc_00013B7F: ;
    SET_LO8(eax, MEM8(0x59A52C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013C0D; /* je: equal / zero */

loc_00013B8C: ;
    eax = MEM32(0x91ED74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013BA0; /* je: equal / zero */

loc_00013B95: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00013B9Bu); RECOMP_ABI_CALL(0x0043BDC0u, sub_0043BDC0); /* call 0x0043BDC0 */

loc_00013B9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_00013BA0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013C0D; /* je: equal / zero */

loc_00013BA4: ;
    eax = ebp;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00013BE7; /* je: equal / zero */

loc_00013BAB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00013BE0; /* je: equal / zero */

loc_00013BAE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(0x59A4F4);
    if ((_fa != 0)) goto loc_00013BEE; /* jne: not equal / not zero */

loc_00013BB6: ;
    PUSH32(esp, 0xFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00013BC9u); RECOMP_ABI_CALL(0x0043B450u, sub_0043B450); /* call 0x0043B450 */

loc_00013BC9: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00013C10; /* jne: not equal / not zero */

loc_00013BD3: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00013BDBu); RECOMP_ABI_CALL(0x000328C0u, sub_000328C0); /* call 0x000328C0 */

loc_00013BDB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00013C10;

loc_00013BE0: ;
    eax = MEM32(0x59A4F8);
    goto loc_00013BB6;

loc_00013BE7: ;
    eax = MEM32(0x59A4FC);
    goto loc_00013BF2;

loc_00013BEE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013BB6; /* jne: not equal / not zero */

loc_00013BF2: ;
    PUSH32(esp, 0xFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00013C06u); RECOMP_ABI_CALL(0x0043B450u, sub_0043B450); /* call 0x0043B450 */

loc_00013C06: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    goto loc_00013C10;

loc_00013C0D: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00013C10: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00013C1D; /* jne: not equal / not zero */

loc_00013C17: ;
    MEM32(0x59A2C4) = esi;

loc_00013C1D: ;
    POP32(esp, esi);

loc_00013C1E: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00013B5A
 * Original: 0x00013B5A - 0x00013C20 (198 bytes, 73 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013B5A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013B5A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x00013B63u); RECOMP_ABI_CALL(0x00013A00u, sub_00013A00); /* call 0x00013A00 */

loc_00013B63: ;
    ebx = eax;
    SET_LO8(eax, MEM8(0x91ED80));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013C0D; /* je: equal / zero */

loc_00013B72: ;
    _fa = (uint32_t)(MEM8(0x91ED81)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x91ED81), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013C0D; /* je: equal / zero */

loc_00013B7F: ;
    SET_LO8(eax, MEM8(0x59A52C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013C0D; /* je: equal / zero */

loc_00013B8C: ;
    eax = MEM32(0x91ED74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013BA0; /* je: equal / zero */

loc_00013B95: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00013B9Bu); RECOMP_ABI_CALL(0x0043BDC0u, sub_0043BDC0); /* call 0x0043BDC0 */

loc_00013B9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_00013BA0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013C0D; /* je: equal / zero */

loc_00013BA4: ;
    eax = ebp;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00013BE7; /* je: equal / zero */

loc_00013BAB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00013BE0; /* je: equal / zero */

loc_00013BAE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(0x59A4F4);
    if ((_fa != 0)) goto loc_00013BEE; /* jne: not equal / not zero */

loc_00013BB6: ;
    PUSH32(esp, 0xFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00013BC9u); RECOMP_ABI_CALL(0x0043B450u, sub_0043B450); /* call 0x0043B450 */

loc_00013BC9: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00013C10; /* jne: not equal / not zero */

loc_00013BD3: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00013BDBu); RECOMP_ABI_CALL(0x000328C0u, sub_000328C0); /* call 0x000328C0 */

loc_00013BDB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00013C10;

loc_00013BE0: ;
    eax = MEM32(0x59A4F8);
    goto loc_00013BB6;

loc_00013BE7: ;
    eax = MEM32(0x59A4FC);
    goto loc_00013BF2;

loc_00013BEE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013BB6; /* jne: not equal / not zero */

loc_00013BF2: ;
    PUSH32(esp, 0xFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00013C06u); RECOMP_ABI_CALL(0x0043B450u, sub_0043B450); /* call 0x0043B450 */

loc_00013C06: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    goto loc_00013C10;

loc_00013C0D: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00013C10: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00013C1D; /* jne: not equal / not zero */

loc_00013C17: ;
    MEM32(0x59A2C4) = esi;

loc_00013C1D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00013C40
 * Original: 0x00013C40 - 0x00013C6F (47 bytes, 17 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013C40: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00013C50u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00013C50: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013C5Bu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00013C5B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013C6E; /* je: equal / zero */

loc_00013C62: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00013C6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013C6Bu); } /* indirect call */
    }

loc_00013C6E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013C70
 * Original: 0x00013C70 - 0x00013C9F (47 bytes, 16 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013C70: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00013C80u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00013C80: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013C8Bu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00013C8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013C9E; /* je: equal / zero */

loc_00013C92: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00013C9Eu); RECOMP_ABI_CALL(0x004617B0u, sub_004617B0); /* call 0x004617B0 */

loc_00013C9E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013CA0
 * Original: 0x00013CA0 - 0x00013D65 (197 bytes, 79 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013CA0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00013CB4u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00013CB4: ;
    ebp = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00013CB8: ;
    ecx = MEM32(ebp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00013CCF; /* je: equal / zero */

loc_00013CC3: ;
    eax = MEM32(ebp + 0x28);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013CD3; /* jne: not equal / not zero */

loc_00013CCF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00013CE6;

loc_00013CD3: ;
    ecx = MEM32(ebp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013CDE; /* jne: not equal / not zero */

loc_00013CDA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00013CE6;

loc_00013CDE: ;
    eax = MEM32(ebp + 0x28);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00013CE6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00013D60; /* jge: greater or equal (signed >=) */

loc_00013CEA: ;
    eax = MEM32(ebp + 0x24);
    esi = MEM32(eax + edx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = eax + edx * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00013D56; /* je: equal / zero */

loc_00013CF7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00013CFDu); RECOMP_ABI_CALL(0x00460270u, sub_00460270); /* call 0x00460270 */

loc_00013CFD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013D56; /* je: equal / zero */

loc_00013D04: ;
    eax = ebx;
    ecx = esi + 8;
    edi = eax + 1;
    /* nop */

loc_00013D10: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013D10; /* jne: not equal / not zero */

loc_00013D17: ;
    edx = MEM32(ecx + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00013D26u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00013D26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, MEM8(esi + 0xD0));
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00013D49; /* jne: not equal / not zero */

loc_00013D32: ;
    SET_LO8(eax, LO8(eax) | 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0xD0) = LO8(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00013D3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013D3Cu); } /* indirect call */
    }

loc_00013D3F: ;
    edx = MEM32(esp + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00013CB8;

loc_00013D49: ;
    edx = MEM32(esi);
    SET_LO8(eax, LO8(eax) & 0xFE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0xD0) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00013D56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00013D53u); } /* indirect call */
    }

loc_00013D56: ;
    edx = MEM32(esp + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00013CB8;

loc_00013D60: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00013D70
 * Original: 0x00013D70 - 0x00013DAB (59 bytes, 22 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013D70: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00013D80u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00013D80: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013D8Bu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00013D8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013DAA; /* je: equal / zero */

loc_00013D92: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00013D9Cu); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_00013D9C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00013DA9u); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_00013DA9: ;
    POP32(esp, esi);

loc_00013DAA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013D80
 * Original: 0x00013D80 - 0x00013DAB (43 bytes, 18 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013D80: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013D8Bu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00013D8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013DAA; /* je: equal / zero */

loc_00013D92: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00013D9Cu); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_00013D9C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00013DA9u); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_00013DA9: ;
    POP32(esp, esi);

loc_00013DAA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013D90
 * Original: 0x00013D90 - 0x00013DAB (27 bytes, 12 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013D90: ;
    if (_flags /* je: equal / zero */) goto loc_00013DAA;

loc_00013D92: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00013D9Cu); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_00013D9C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00013DA9u); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_00013DA9: ;
    POP32(esp, esi);

loc_00013DAA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013DB0
 * Original: 0x00013DB0 - 0x00013DE6 (54 bytes, 20 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013DB0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x91EB44);
    PUSH32(esp, 0x00013DBCu); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_00013DBC: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013DC7u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00013DC7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013DE4; /* je: equal / zero */

loc_00013DCE: ;
    esi = MEM32(eax + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00013DD7u); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_00013DD7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00013DE4u); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_00013DE4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013DF0
 * Original: 0x00013DF0 - 0x00013E2B (59 bytes, 22 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013DF0: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00013E00u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00013E00: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013E0Bu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00013E0B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013E2A; /* je: equal / zero */

loc_00013E12: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00013E1Cu); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_00013E1C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi + 0x38;
    PUSH32(esp, 0x00013E29u); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_00013E29: ;
    POP32(esp, esi);

loc_00013E2A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00013E30
 * Original: 0x00013E30 - 0x00013E68 (56 bytes, 17 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013E30: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00013E40u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00013E40: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013E4Bu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00013E4B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013E53; /* jne: not equal / not zero */

loc_00013E52: ;
    esp += 4; return; /* ret */

loc_00013E53: ;
    edx = MEM32(eax + 0x28);
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x50); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x586658); /* addss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    esp += 4; return; /* ret */

}

/**
 * sub_00013E70
 * Original: 0x00013E70 - 0x00013E8F (31 bytes, 14 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013E70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00013E7Eu); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_00013E7E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00013E8Au); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_00013E8A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013E90
 * Original: 0x00013E90 - 0x00013F8A (250 bytes, 107 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013E90: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    edx = MEM32(ebx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_00013EA2; /* jb: below (unsigned <) */

loc_00013E9D: ;
    eax = MEM32(ebx + 4);
    goto loc_00013EA5;

loc_00013EA2: ;
    eax = ebx + 4;

loc_00013EA5: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00013EE4; /* jb: below (unsigned <) */

loc_00013EAD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    eax = ebx + 4;
    if (CMP_B(_fa, _fb)) goto loc_00013EB9; /* jb: below (unsigned <) */

loc_00013EB5: ;
    ecx = MEM32(eax);
    goto loc_00013EBB;

loc_00013EB9: ;
    ecx = eax;

loc_00013EBB: ;
    edi = MEM32(ebx + 0x14);
    ecx = ecx + edi * 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00013EE4; /* jbe: below or equal (unsigned <=) */

loc_00013EC5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00013ECC; /* jb: below (unsigned <) */

loc_00013ECA: ;
    eax = MEM32(eax);

loc_00013ECC: ;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebx;
    PUSH32(esp, 0x00013EDEu); RECOMP_ABI_CALL(0x00013F90u, sub_00013F90); /* call 0x00013F90 */

loc_00013EDE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00013EE4: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x7FFFFFFE (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00013EF8; /* jbe: below or equal (unsigned <=) */

loc_00013EF1: ;
    ecx = ebx;
    PUSH32(esp, 0x00013EF8u); RECOMP_ABI_CALL(0x0047D700u, sub_0047D700); /* call 0x0047D700 */

loc_00013EF8: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00013F1A; /* jae: above or equal (unsigned >=) */

loc_00013EFF: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x00013F0Bu); RECOMP_ABI_CALL(0x00014120u, sub_00014120); /* call 0x00014120 */

loc_00013F0B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */

loc_00013F0D: ;
    if (CMP_BE(_fa, _fb)) goto loc_00013F81; /* jbe: below or equal (unsigned <=) */

loc_00013F0F: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00013F46; /* jb: below (unsigned <) */

loc_00013F15: ;
    edi = MEM32(ebx + 4);
    goto loc_00013F49;

loc_00013F1A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013F0D; /* jne: not equal / not zero */

loc_00013F1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00013F35; /* jb: below (unsigned <) */

loc_00013F26: ;
    eax = MEM32(ebx + 4);
    MEM16(eax) = LO16(ebp);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00013F35: ;
    POP32(esp, ebp);
    eax = ebx + 4;
    POP32(esp, edi);
    MEM16(eax) = 0;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00013F46: ;
    edi = ebx + 4;

loc_00013F49: ;
    eax = ebp + ebp;
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 8 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00013F78; /* jb: below (unsigned <) */

loc_00013F66: ;
    ecx = MEM32(ebx + 4);
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM16(eax + ecx) = 0;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00013F78: ;
    ecx = ebx + 4;
    MEM16(eax + ecx) = 0;

loc_00013F81: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00013ED5
 * Original: 0x00013ED5 - 0x00013F8A (181 bytes, 77 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013ED5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013ED5: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebx;
    PUSH32(esp, 0x00013EDEu); RECOMP_ABI_CALL(0x00013F90u, sub_00013F90); /* call 0x00013F90 */

loc_00013EDE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    ecx = ebx;
    PUSH32(esp, 0x00013EF8u); RECOMP_ABI_CALL(0x0047D700u, sub_0047D700); /* call 0x0047D700 */

loc_00013EF8: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00013F1A; /* jae: above or equal (unsigned >=) */

loc_00013EFF: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x00013F0Bu); RECOMP_ABI_CALL(0x00014120u, sub_00014120); /* call 0x00014120 */

loc_00013F0B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */

loc_00013F0D: ;
    if (CMP_BE(_fa, _fb)) goto loc_00013F81; /* jbe: below or equal (unsigned <=) */

loc_00013F0F: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00013F46; /* jb: below (unsigned <) */

loc_00013F15: ;
    edi = MEM32(ebx + 4);
    goto loc_00013F49;

loc_00013F1A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013F0D; /* jne: not equal / not zero */

loc_00013F1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00013F35; /* jb: below (unsigned <) */

loc_00013F26: ;
    eax = MEM32(ebx + 4);
    MEM16(eax) = LO16(ebp);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00013F35: ;
    POP32(esp, ebp);
    eax = ebx + 4;
    POP32(esp, edi);
    MEM16(eax) = 0;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00013F46: ;
    edi = ebx + 4;

loc_00013F49: ;
    eax = ebp + ebp;
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 8 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00013F78; /* jb: below (unsigned <) */

loc_00013F66: ;
    ecx = MEM32(ebx + 4);
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM16(eax + ecx) = 0;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00013F78: ;
    ecx = ebx + 4;
    MEM16(eax + ecx) = 0;

loc_00013F81: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00013F90
 * Original: 0x00013F90 - 0x00014094 (260 bytes, 107 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013F90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), esi (32-bit) */
    ebx = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_00013FA8; /* jae: above or equal (unsigned >=) */

loc_00013FA3: ;
    PUSH32(esp, 0x00013FA8u); RECOMP_ABI_CALL(0x0047D6C0u, sub_0047D6C0); /* call 0x0047D6C0 */

loc_00013FA8: ;
    ebp = MEM32(edi + 0x14);
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) ebp = eax; /* cmovb */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013FD9; /* jne: not equal / not zero */

loc_00013FBA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x00013FC6u); RECOMP_ABI_CALL(0x000140A0u, sub_000140A0); /* call 0x000140A0 */

loc_00013FC6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x00013FD0u); RECOMP_ABI_CALL(0x000140A0u, sub_000140A0); /* call 0x000140A0 */

loc_00013FD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00013FD9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x7FFFFFFE (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00013FE8; /* jbe: below or equal (unsigned <=) */

loc_00013FE1: ;
    ecx = ebx;
    PUSH32(esp, 0x00013FE8u); RECOMP_ABI_CALL(0x0047D700u, sub_0047D700); /* call 0x0047D700 */

loc_00013FE8: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00014014; /* jae: above or equal (unsigned >=) */

loc_00013FEF: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x00013FFBu); RECOMP_ABI_CALL(0x00014120u, sub_00014120); /* call 0x00014120 */

loc_00013FFB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */

loc_00013FFD: ;
    if (CMP_BE(_fa, _fb)) goto loc_0001408B; /* jbe: below or equal (unsigned <=) */

loc_00014003: ;
    ecx = MEM32(edi + 0x18);
    eax = 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014040; /* jb: below (unsigned <) */

loc_0001400F: ;
    edx = MEM32(edi + 4);
    goto loc_00014043;

loc_00014014: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013FFD; /* jne: not equal / not zero */

loc_00014018: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_0001402F; /* jb: below (unsigned <) */

loc_00014020: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(eax) = LO16(ebp);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0001402F: ;
    POP32(esp, edi);
    eax = ebx + 4;
    POP32(esp, esi);
    MEM16(eax) = 0;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00014040: ;
    edx = edi + 4;

loc_00014043: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0001404D; /* jb: below (unsigned <) */

loc_00014048: ;
    edi = MEM32(ebx + 4);
    goto loc_00014050;

loc_0001404D: ;
    edi = ebx + 4;

loc_00014050: ;
    eax = ebp + ebp;
    esi = edx + esi * 2;
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 8 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00014082; /* jb: below (unsigned <) */

loc_00014070: ;
    ecx = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(eax + ecx) = 0;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00014082: ;
    ecx = ebx + 4;
    MEM16(eax + ecx) = 0;

loc_0001408B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00013F98
 * Original: 0x00013F98 - 0x00014094 (252 bytes, 102 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013F98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013F98: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), esi (32-bit) */
    ebx = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_00013FA8; /* jae: above or equal (unsigned >=) */

loc_00013FA3: ;
    PUSH32(esp, 0x00013FA8u); RECOMP_ABI_CALL(0x0047D6C0u, sub_0047D6C0); /* call 0x0047D6C0 */

loc_00013FA8: ;
    ebp = MEM32(edi + 0x14);
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) ebp = eax; /* cmovb */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013FD9; /* jne: not equal / not zero */

loc_00013FBA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x00013FC6u); RECOMP_ABI_CALL(0x000140A0u, sub_000140A0); /* call 0x000140A0 */

loc_00013FC6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x00013FD0u); RECOMP_ABI_CALL(0x000140A0u, sub_000140A0); /* call 0x000140A0 */

loc_00013FD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00013FD9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x7FFFFFFE (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00013FE8; /* jbe: below or equal (unsigned <=) */

loc_00013FE1: ;
    ecx = ebx;
    PUSH32(esp, 0x00013FE8u); RECOMP_ABI_CALL(0x0047D700u, sub_0047D700); /* call 0x0047D700 */

loc_00013FE8: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00014014; /* jae: above or equal (unsigned >=) */

loc_00013FEF: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x00013FFBu); RECOMP_ABI_CALL(0x00014120u, sub_00014120); /* call 0x00014120 */

loc_00013FFB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */

loc_00013FFD: ;
    if (CMP_BE(_fa, _fb)) goto loc_0001408B; /* jbe: below or equal (unsigned <=) */

loc_00014003: ;
    ecx = MEM32(edi + 0x18);
    eax = 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014040; /* jb: below (unsigned <) */

loc_0001400F: ;
    edx = MEM32(edi + 4);
    goto loc_00014043;

loc_00014014: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013FFD; /* jne: not equal / not zero */

loc_00014018: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_0001402F; /* jb: below (unsigned <) */

loc_00014020: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(eax) = LO16(ebp);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0001402F: ;
    POP32(esp, edi);
    eax = ebx + 4;
    POP32(esp, esi);
    MEM16(eax) = 0;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00014040: ;
    edx = edi + 4;

loc_00014043: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0001404D; /* jb: below (unsigned <) */

loc_00014048: ;
    edi = MEM32(ebx + 4);
    goto loc_00014050;

loc_0001404D: ;
    edi = ebx + 4;

loc_00014050: ;
    eax = ebp + ebp;
    esi = edx + esi * 2;
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 8 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00014082; /* jb: below (unsigned <) */

loc_00014070: ;
    ecx = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(eax + ecx) = 0;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00014082: ;
    ecx = ebx + 4;
    MEM16(eax + ecx) = 0;

loc_0001408B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00014048
 * Original: 0x00014048 - 0x00014094 (76 bytes, 31 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014048(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014048: ;
    edi = MEM32(ebx + 4);
    goto loc_00014050;

    edi = ebx + 4;

loc_00014050: ;
    eax = ebp + ebp;
    esi = edx + esi * 2;
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 8 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00014082; /* jb: below (unsigned <) */

loc_00014070: ;
    ecx = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(eax + ecx) = 0;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00014082: ;
    ecx = ebx + 4;
    MEM16(eax + ecx) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000140A0
 * Original: 0x000140A0 - 0x0001411B (123 bytes, 52 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000140A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000140A0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_000140B3; /* jae: above or equal (unsigned >=) */

loc_000140AE: ;
    PUSH32(esp, 0x000140B3u); RECOMP_ABI_CALL(0x0047D6C0u, sub_0047D6C0); /* call 0x0047D6C0 */

loc_000140B3: ;
    eax = MEM32(esi + 0x14);
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) edi = eax; /* cmovb */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00014113; /* jbe: below or equal (unsigned <=) */

loc_000140C5: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    PUSH32(esp, ebx);
    ebx = esi + 4;
    if (CMP_B(_fa, _fb)) goto loc_000140D5; /* jb: below (unsigned <) */

loc_000140D1: ;
    edx = MEM32(ebx);
    goto loc_000140D7;

loc_000140D5: ;
    edx = ebx;

loc_000140D7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000140E0; /* jb: below (unsigned <) */

loc_000140DC: ;
    ecx = MEM32(ebx);
    goto loc_000140E2;

loc_000140E0: ;
    ecx = ebx;

loc_000140E2: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = edi + ebp;
    edx = edx + eax * 2;
    PUSH32(esp, edx);
    eax = ecx + ebp * 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000140F7u); RECOMP_ABI_CALL(0x0047D990u, sub_0047D990); /* call 0x0047D990 */

loc_000140F7: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0001410C; /* jb: below (unsigned <) */

loc_0001410A: ;
    ebx = MEM32(ebx);

loc_0001410C: ;
    MEM16(ebx + eax * 2) = 0;
    POP32(esp, ebx);

loc_00014113: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014120
 * Original: 0x00014120 - 0x00014195 (117 bytes, 41 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00014120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014120: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x48C300);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = eax;
    ebx = ebx | 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x7FFFFFFE (32-bit) */
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(ebp + -16) = esp;
    MEM32(ebp + -20) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_0001415A; /* jbe: below or equal (unsigned <=) */

loc_00014156: ;
    ebx = eax;
    goto loc_0001417C;

loc_0001415A: ;
    edi = MEM32(esi + 0x18);
    eax = 0xAAAAAAABu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = edi;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0001417C; /* jae: above or equal (unsigned >=) */

loc_0001416E: ;
    eax = 0x7FFFFFFE;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0001417C; /* ja: above (unsigned >) */

loc_00014179: ;
    ebx = ecx + edi;

loc_0001417C: ;
    ecx = ebx + ebx + 2;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001418Du); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_0001418D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    g_seh_ebp = ebp; sub_000141BB(); return; /* tail jmp 0x000141BB */

}

/**
 * sub_00014188
 * Original: 0x00014188 - 0x00014195 (13 bytes, 4 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014188(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014188: ;
    PUSH32(esp, 0x0001418Du); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_0001418D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    g_seh_ebp = ebp; sub_000141BB(); return; /* tail jmp 0x000141BB */

}

/**
 * sub_00014195
 * Original: 0x00014195 - 0x000141B5 (32 bytes, 11 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014195(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014195: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -24) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = esp;
    PUSH32(esp, eax);
    MEM8(ebp + -4) = 2;
    PUSH32(esp, 0x000141ACu); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_000141AC: ;
    MEM32(ebp + 8) = eax;
    eax = 0x141B5;
    esp += 4; return; /* ret */

}

/**
 * sub_000141B5
 * Original: 0x000141B5 - 0x0001422E (121 bytes, 43 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000141B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000141B5: ;
    ebx = MEM32(ebp + -24);
    esi = MEM32(ebp + -20);
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000141E7; /* jbe: below or equal (unsigned <=) */

loc_000141C2: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000141CD; /* jb: below (unsigned <) */

loc_000141C8: ;
    esi = MEM32(esi + 4);
    goto loc_000141D0;

loc_000141CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000141D0: ;
    edi = MEM32(ebp + 8);
    ecx = edx + edx;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    esi = MEM32(ebp + -20);

loc_000141E7: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000141FC; /* jb: below (unsigned <) */

loc_000141ED: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000141F6u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_000141F6: ;
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000141FC: ;
    ecx = MEM32(ebp + 8);
    eax = esi + 4;
    MEM16(eax) = 0;
    MEM32(eax) = ecx;
    MEM32(esi + 0x18) = ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    MEM32(esi + 0x14) = edx;
    POP32(esp, edi);
    if (CMP_AE(_fa, _fb)) eax = ecx; /* cmovae */
    ecx = MEM32(ebp + -12);
    POP32(esp, esi);
    MEM16(eax + edx * 2) = 0;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000141BB
 * Original: 0x000141BB - 0x0001422E (115 bytes, 41 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000141BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000141BB: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000141E7; /* jbe: below or equal (unsigned <=) */

loc_000141C2: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000141CD; /* jb: below (unsigned <) */

loc_000141C8: ;
    esi = MEM32(esi + 4);
    goto loc_000141D0;

loc_000141CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000141D0: ;
    edi = MEM32(ebp + 8);
    ecx = edx + edx;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    esi = MEM32(ebp + -20);

loc_000141E7: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000141FC; /* jb: below (unsigned <) */

loc_000141ED: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000141F6u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_000141F6: ;
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000141FC: ;
    ecx = MEM32(ebp + 8);
    eax = esi + 4;
    MEM16(eax) = 0;
    MEM32(eax) = ecx;
    MEM32(esi + 0x18) = ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    MEM32(esi + 0x14) = edx;
    POP32(esp, edi);
    if (CMP_AE(_fa, _fb)) eax = ecx; /* cmovae */
    ecx = MEM32(ebp + -12);
    POP32(esp, esi);
    MEM16(eax + edx * 2) = 0;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000141C8
 * Original: 0x000141C8 - 0x0001422E (102 bytes, 36 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000141C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000141C8: ;
    esi = MEM32(esi + 4);
    goto loc_000141D0;

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000141D0: ;
    edi = MEM32(ebp + 8);
    ecx = edx + edx;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    esi = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000141FC; /* jb: below (unsigned <) */

loc_000141ED: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000141F6u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_000141F6: ;
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000141FC: ;
    ecx = MEM32(ebp + 8);
    eax = esi + 4;
    MEM16(eax) = 0;
    MEM32(eax) = ecx;
    MEM32(esi + 0x18) = ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    MEM32(esi + 0x14) = edx;
    POP32(esp, edi);
    if (CMP_AE(_fa, _fb)) eax = ecx; /* cmovae */
    ecx = MEM32(ebp + -12);
    POP32(esp, esi);
    MEM16(eax + edx * 2) = 0;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0001422E
 * Original: 0x0001422E - 0x00014260 (50 bytes, 20 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001422E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001422E: ;
    esi = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014243; /* jb: below (unsigned <) */

loc_00014237: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00014240u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00014240: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014243: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esi + 0x18) = 7;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, eax);
    MEM16(esi + 4) = LO16(eax);
    PUSH32(esp, 0x0001425Au); RECOMP_ABI_CALL(0x004816B1u, sub_004816B1); /* call 0x004816B1 */

loc_0001425A: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00014260
 * Original: 0x00014260 - 0x00014273 (19 bytes, 6 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014260: ;
    eax = MEM32(esp + 4);
    ecx = eax + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001426Du); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_0001426D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014280
 * Original: 0x00014280 - 0x000142B1 (49 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00014280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014280: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00014287u); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_00014287: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000142AE; /* je: equal / zero */

loc_0001428E: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x57D6C0;
    MEM32(eax) = 0x57F6B8;
    MEM32(eax + 0xC) = 0x57F850;
    esp += 4; return; /* ret */

loc_000142AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000142BD
 * Original: 0x000142BD - 0x000142C0 (3 bytes, 3 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000142BD(void)
{

loc_000142BD: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000142C0
 * Original: 0x000142C0 - 0x000142E7 (39 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000142C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000142C0: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000142C7u); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_000142C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000142E4; /* je: equal / zero */

loc_000142CE: ;
    SET_LO8(ecx, 1);
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = LO8(ecx);
    MEM32(eax) = 0x57F6A0;
    MEM8(eax + 0xC) = LO8(ecx);
    esp += 4; return; /* ret */

loc_000142E4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000142F0
 * Original: 0x000142F0 - 0x00014305 (21 bytes, 4 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000142F0(void)
{

loc_000142F0: ;
    MEM32(ecx + 0xC) = 0x57F850;
    MEM32(ecx + 0xC) = 0x57D6C0;
    MEM32(ecx) = 0x57D6BC;
    esp += 4; return; /* ret */

}

/**
 * sub_00014310
 * Original: 0x00014310 - 0x00014585 (629 bytes, 196 insns)
 * Folder: unsorted (none)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014310: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x48C900);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x596CA0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x91EB44);
    esi = edi + 0xC;
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00014362; /* jne: not equal / not zero */

loc_00014349: ;
    edx = MEM32(0x59A370);
    ecx = MEM32(0x5B35F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00014360u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001435Du); } /* indirect call */
    }

loc_00014360: ;
    MEM32(esi) = eax;

loc_00014362: ;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014381; /* jne: not equal / not zero */

loc_00014367: ;
    edx = MEM32(0x59A378);
    ecx = MEM32(0x5B35F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0001437Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001437Bu); } /* indirect call */
    }

loc_0001437E: ;
    MEM32(edi + 0x14) = eax;

loc_00014381: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0001438Au); RECOMP_ABI_CALL(0x00017570u, sub_00017570); /* call 0x00017570 */

loc_0001438A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014392; /* jne: not equal / not zero */

loc_0001438E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000143A2;

loc_00014392: ;
    ecx = MEM32(0x59A3D8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001439Fu); RECOMP_ABI_CALL(0x00460650u, sub_00460650); /* call 0x00460650 */

loc_0001439F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000143A2: ;
    PUSH32(esp, 0x57DA10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000143ADu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000143AD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    eax = MEM32(edi + 0x28);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    MEM32(esp + 0x50) = 7;
    MEM32(esp + 0x4C) = ebx;
    MEM16(esp + 0x3C) = LO16(ebx);
    PUSH32(esp, 0x000143D6u); RECOMP_ABI_CALL(0x00013F90u, sub_00013F90); /* call 0x00013F90 */

loc_000143D6: ;
    esi = MEM32(esp + 0x5C);
    PUSH32(esp, 6);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x58) = ebx;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 0x57DA1C);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000143F4u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_000143F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014480; /* jne: not equal / not zero */

loc_000143FC: ;
    PUSH32(esp, 0x00014401u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00014401: ;
    _fa = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x40), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014439; /* jne: not equal / not zero */

loc_00014407: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x26);
    MEM32(0x91EB0C) = 5;
    PUSH32(esp, 0x00014419u); RECOMP_ABI_CALL(0x0045C8E0u, sub_0045C8E0); /* call 0x0045C8E0 */

loc_00014419: ;
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014479; /* jb: below (unsigned <) */

loc_00014425: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001442Fu); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0001442F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    goto loc_00014568;

loc_00014439: ;
    _fa = (uint32_t)(MEM32(esp + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x44), 8 (32-bit) */
    ebx = MEM32(esp + 0x30);
    if (CMP_AE(_fa, _fb)) goto loc_00014448; /* jae: above or equal (unsigned >=) */

loc_00014444: ;
    ebx = esp + 0x30;

loc_00014448: ;
    PUSH32(esp, 0x0001444Du); RECOMP_ABI_CALL(0x000D5040u, sub_000D5040); /* call 0x000D5040 */

loc_0001444D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014461; /* je: equal / zero */

loc_00014451: ;
    PUSH32(esp, 0);
    MEM32(0x91EB0C) = 2;
    PUSH32(esp, 0x23);
    goto loc_00014468;

loc_00014461: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x24);

loc_00014468: ;
    PUSH32(esp, 0x0001446Du); RECOMP_ABI_CALL(0x0045C8E0u, sub_0045C8E0); /* call 0x0045C8E0 */

loc_0001446D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x2C;
    PUSH32(esp, 0x00014479u); RECOMP_ABI_CALL(0x00014A00u, sub_00014A00); /* call 0x00014A00 */

loc_00014479: ;
    SET_LO8(eax, 1);
    goto loc_00014568;

loc_00014480: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 6);
    PUSH32(esp, 0x57DA24);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00014493u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00014493: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000144BD; /* jne: not equal / not zero */

loc_00014497: ;
    eax = MEM32(esp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014552; /* je: equal / zero */

loc_000144A3: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x000144B0u); RECOMP_ABI_CALL(0x000140A0u, sub_000140A0); /* call 0x000140A0 */

loc_000144B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    goto loc_00014540;

loc_000144BD: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 5);
    PUSH32(esp, 0x57DA2C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000144D0u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_000144D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 0x40);
    if (CMP_NE(_fa, _fb)) goto loc_00014502; /* jne: not equal / not zero */

loc_000144D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00014552; /* jae: above or equal (unsigned >=) */

loc_000144DD: ;
    PUSH32(esp, 0x562694);
    PUSH32(esp, 0x000144E7u); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_000144E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x562694;
    edx = esp + 0x2C;
    PUSH32(esp, 0x000144F8u); RECOMP_ABI_CALL(0x00014BA0u, sub_00014BA0); /* call 0x00014BA0 */

loc_000144F8: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    goto loc_00014540;

loc_00014502: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00014552; /* jae: above or equal (unsigned >=) */

loc_00014507: ;
    eax = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014512u); RECOMP_ABI_CALL(0x00465400u, sub_00465400); /* call 0x00465400 */

loc_00014512: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = esp + 0x30;
    MEM8(esp + 0x58) = 1;
    PUSH32(esp, 0x00014529u); RECOMP_ABI_CALL(0x00014AB0u, sub_00014AB0); /* call 0x00014AB0 */

loc_00014529: ;
    ecx = esp + 0x10;
    MEM8(esp + 0x54) = 0;
    PUSH32(esp, 0x00014537u); RECOMP_ABI_CALL(0x00014A00u, sub_00014A00); /* call 0x00014A00 */

loc_00014537: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);

loc_00014540: ;
    ecx = MEM32(edi + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0001454Bu); RECOMP_ABI_CALL(0x00013F90u, sub_00013F90); /* call 0x00013F90 */

loc_0001454B: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00014552u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00014552: ;
    _fa = (uint32_t)(MEM32(esp + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x44), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014566; /* jb: below (unsigned <) */

loc_00014559: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00014563u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00014563: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014566: ;
    SET_LO8(eax, LO8(ebx));

loc_00014568: ;
    ecx = MEM32(esp + 0x4C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x40);
    POP32(esp, ebx);
    PUSH32(esp, 0x0001457Fu); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_0001457F: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014585
 * Original: 0x00014585 - 0x00014590 (11 bytes, 11 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014585(void)
{

loc_00014585: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00014590
 * Original: 0x00014590 - 0x00014735 (421 bytes, 130 insns)
 * Folder: unsorted (none)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014590: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x48D6C8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x596CA0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x81 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000145E5; /* jne: not equal / not zero */

loc_000145C5: ;
    _fa = (uint32_t)(MEM32(0x952CA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x952CA0), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000145E5; /* je: equal / zero */

loc_000145CD: ;
    _fa = (uint32_t)(MEM32(0x5B3314)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5B3314), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000145E5; /* jne: not equal / not zero */

loc_000145D5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0x000145E0u); RECOMP_ABI_CALL(0x0045AF40u, sub_0045AF40); /* call 0x0045AF40 */

loc_000145E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);

loc_000145E5: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x82 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001470D; /* jne: not equal / not zero */

loc_000145F1: ;
    PUSH32(esp, edi);
    edi = MEM32(0x91EB44);
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    esi = edi + 0xC;
    if (CMP_NE(_fa, _fb)) goto loc_0001461B; /* jne: not equal / not zero */

loc_00014602: ;
    edx = MEM32(0x59A370);
    ecx = MEM32(0x5B35F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00014619u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014616u); } /* indirect call */
    }

loc_00014619: ;
    MEM32(esi) = eax;

loc_0001461B: ;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001463A; /* jne: not equal / not zero */

loc_00014620: ;
    edx = MEM32(0x59A378);
    ecx = MEM32(0x5B35F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00014637u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014634u); } /* indirect call */
    }

loc_00014637: ;
    MEM32(edi + 0x14) = eax;

loc_0001463A: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00014643u); RECOMP_ABI_CALL(0x00017570u, sub_00017570); /* call 0x00017570 */

loc_00014643: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001464B; /* jne: not equal / not zero */

loc_00014647: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0001465B;

loc_0001464B: ;
    ecx = MEM32(0x59A3D8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014658u); RECOMP_ABI_CALL(0x00460650u, sub_00460650); /* call 0x00460650 */

loc_00014658: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001465B: ;
    PUSH32(esp, 0x57DA10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014666u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00014666: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    MEM32(esp + 0x34) = 7;
    MEM32(esp + 0x30) = ebp;
    MEM16(esp + 0x20) = LO16(ebp);
    PUSH32(esp, 0x0001468Fu); RECOMP_ABI_CALL(0x00013F90u, sub_00013F90); /* call 0x00013F90 */

loc_0001468F: ;
    MEM32(esp + 0x38) = ebp;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    edx = MEM32(esp + 0x14);
    eax = edx;
    if (CMP_AE(_fa, _fb)) goto loc_000146A6; /* jae: above or equal (unsigned >=) */

loc_000146A2: ;
    eax = esp + 0x14;

loc_000146A6: ;
    edi = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    eax = eax + edi * 2;
    ecx = edx;
    if (CMP_AE(_fa, _fb)) goto loc_000146B8; /* jae: above or equal (unsigned >=) */

loc_000146B4: ;
    ecx = esp + 0x14;

loc_000146B8: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    edi = esp + 0x1C;
    PUSH32(esp, 0x000146C8u); RECOMP_ABI_CALL(0x00014A30u, sub_00014A30); /* call 0x00014A30 */

loc_000146C8: ;
    esi = MEM32(esi + 0x28);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x000146DBu); RECOMP_ABI_CALL(0x00013F90u, sub_00013F90); /* call 0x00013F90 */

loc_000146DB: ;
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), 8 (32-bit) */
    SET_LO8(ebx, 1);
    POP32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_000146FA; /* jb: below (unsigned <) */

loc_000146ED: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000146F7u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_000146F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000146FA: ;
    MEM32(esp + 0x24) = 7;
    MEM32(esp + 0x20) = ebp;
    MEM16(esp + 0x10) = LO16(ebp);
    goto loc_00014711;

loc_0001470D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014716; /* je: equal / zero */

loc_00014711: ;
    PUSH32(esp, 0x00014716u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00014716: ;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x20);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    PUSH32(esp, 0x0001472Fu); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_0001472F: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014740
 * Original: 0x00014740 - 0x000148AB (363 bytes, 104 insns)
 * Folder: unsorted (none)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014740: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x48D6C8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x596CA0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x91EB44);
    esi = edi + 0xC;
    MEM32(esp + 0x28) = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001478B; /* jne: not equal / not zero */

loc_00014772: ;
    edx = MEM32(0x59A370);
    ecx = MEM32(0x5B35F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00014789u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014786u); } /* indirect call */
    }

loc_00014789: ;
    MEM32(esi) = eax;

loc_0001478B: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000147AC; /* jne: not equal / not zero */

loc_00014792: ;
    edx = MEM32(0x59A378);
    ecx = MEM32(0x5B35F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000147A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000147A6u); } /* indirect call */
    }

loc_000147A9: ;
    MEM32(edi + 0x14) = eax;

loc_000147AC: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x000147B5u); RECOMP_ABI_CALL(0x00017570u, sub_00017570); /* call 0x00017570 */

loc_000147B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000147C9; /* je: equal / zero */

loc_000147B9: ;
    ecx = MEM32(0x59A3D8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000147C6u); RECOMP_ABI_CALL(0x00460650u, sub_00460650); /* call 0x00460650 */

loc_000147C6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000147C9: ;
    PUSH32(esp, 0x57DA10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000147D4u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000147D4: ;
    eax = MEM32(eax + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEM32(esp + 0x30) = 7;
    MEM32(esp + 0x2C) = 0;
    MEM16(esp + 0x1C) = 0;
    PUSH32(esp, 0x00014802u); RECOMP_ABI_CALL(0x00013F90u, sub_00013F90); /* call 0x00013F90 */

loc_00014802: ;
    MEM32(esp + 0x34) = 0;
    eax = MEM32(esp + 0x24);
    ebx = MEM32(esp + 0x10);
    esi = 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0001481F; /* jae: above or equal (unsigned >=) */

loc_0001481B: ;
    ebx = esp + 0x10;

loc_0001481F: ;
    PUSH32(esp, 0x00014824u); RECOMP_ABI_CALL(0x000D5040u, sub_000D5040); /* call 0x000D5040 */

loc_00014824: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014845; /* jne: not equal / not zero */

loc_00014828: ;
    PUSH32(esp, 0x0001482Du); RECOMP_ABI_CALL(0x000D5040u, sub_000D5040); /* call 0x000D5040 */

loc_0001482D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014838; /* je: equal / zero */

loc_00014831: ;
    edi = ebx;
    PUSH32(esp, 0x00014838u); RECOMP_ABI_CALL(0x000D7420u, sub_000D7420); /* call 0x000D7420 */

loc_00014838: ;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014845; /* je: equal / zero */

loc_0001483E: ;
    ecx = ebx;
    PUSH32(esp, 0x00014845u); RECOMP_ABI_CALL(0x000D7250u, sub_000D7250); /* call 0x000D7250 */

loc_00014845: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), esi (32-bit) */
    ebx = MEM32(esp + 0x10);
    if (CMP_AE(_fa, _fb)) goto loc_00014853; /* jae: above or equal (unsigned >=) */

loc_0001484F: ;
    ebx = esp + 0x10;

loc_00014853: ;
    PUSH32(esp, 0x00014858u); RECOMP_ABI_CALL(0x000D5040u, sub_000D5040); /* call 0x000D5040 */

loc_00014858: ;
    PUSH32(esp, 0x0001485Du); RECOMP_ABI_CALL(0x000D50D0u, sub_000D50D0); /* call 0x000D50D0 */

loc_0001485D: ;
    edx = MEM32(0x91EB44);
    eax = 0x91F28C;
    MEM8(edx + 0x20) = 1;
    PUSH32(esp, 0x00014871u); RECOMP_ABI_CALL(0x0001B340u, sub_0001B340); /* call 0x0001B340 */

loc_00014871: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00014878u); RECOMP_ABI_CALL(0x0045B6D0u, sub_0045B6D0); /* call 0x0045B6D0 */

loc_00014878: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_B(_fa, _fb)) goto loc_00014893; /* jb: below (unsigned <) */

loc_00014886: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014890u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00014890: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014893: ;
    ecx = MEM32(esp + 0x20);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x000148A7u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_000148A7: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000147AE
 * Original: 0x000147AE - 0x000148AB (253 bytes, 71 insns)
 * Folder: unsorted (none)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000147AE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000147AE: ;
    ecx = edi;
    PUSH32(esp, 0x000147B5u); RECOMP_ABI_CALL(0x00017570u, sub_00017570); /* call 0x00017570 */

loc_000147B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000147C9; /* je: equal / zero */

loc_000147B9: ;
    ecx = MEM32(0x59A3D8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000147C6u); RECOMP_ABI_CALL(0x00460650u, sub_00460650); /* call 0x00460650 */

loc_000147C6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000147C9: ;
    PUSH32(esp, 0x57DA10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000147D4u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000147D4: ;
    eax = MEM32(eax + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEM32(esp + 0x30) = 7;
    MEM32(esp + 0x2C) = 0;
    MEM16(esp + 0x1C) = 0;
    PUSH32(esp, 0x00014802u); RECOMP_ABI_CALL(0x00013F90u, sub_00013F90); /* call 0x00013F90 */

loc_00014802: ;
    MEM32(esp + 0x34) = 0;
    eax = MEM32(esp + 0x24);
    ebx = MEM32(esp + 0x10);
    esi = 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0001481F; /* jae: above or equal (unsigned >=) */

loc_0001481B: ;
    ebx = esp + 0x10;

loc_0001481F: ;
    PUSH32(esp, 0x00014824u); RECOMP_ABI_CALL(0x000D5040u, sub_000D5040); /* call 0x000D5040 */

loc_00014824: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014845; /* jne: not equal / not zero */

loc_00014828: ;
    PUSH32(esp, 0x0001482Du); RECOMP_ABI_CALL(0x000D5040u, sub_000D5040); /* call 0x000D5040 */

loc_0001482D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014838; /* je: equal / zero */

loc_00014831: ;
    edi = ebx;
    PUSH32(esp, 0x00014838u); RECOMP_ABI_CALL(0x000D7420u, sub_000D7420); /* call 0x000D7420 */

loc_00014838: ;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014845; /* je: equal / zero */

loc_0001483E: ;
    ecx = ebx;
    PUSH32(esp, 0x00014845u); RECOMP_ABI_CALL(0x000D7250u, sub_000D7250); /* call 0x000D7250 */

loc_00014845: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), esi (32-bit) */
    ebx = MEM32(esp + 0x10);
    if (CMP_AE(_fa, _fb)) goto loc_00014853; /* jae: above or equal (unsigned >=) */

loc_0001484F: ;
    ebx = esp + 0x10;

loc_00014853: ;
    PUSH32(esp, 0x00014858u); RECOMP_ABI_CALL(0x000D5040u, sub_000D5040); /* call 0x000D5040 */

loc_00014858: ;
    PUSH32(esp, 0x0001485Du); RECOMP_ABI_CALL(0x000D50D0u, sub_000D50D0); /* call 0x000D50D0 */

loc_0001485D: ;
    edx = MEM32(0x91EB44);
    eax = 0x91F28C;
    MEM8(edx + 0x20) = 1;
    PUSH32(esp, 0x00014871u); RECOMP_ABI_CALL(0x0001B340u, sub_0001B340); /* call 0x0001B340 */

loc_00014871: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00014878u); RECOMP_ABI_CALL(0x0045B6D0u, sub_0045B6D0); /* call 0x0045B6D0 */

loc_00014878: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_B(_fa, _fb)) goto loc_00014893; /* jb: below (unsigned <) */

loc_00014886: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014890u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00014890: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014893: ;
    ecx = MEM32(esp + 0x20);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x000148A7u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_000148A7: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00014819
 * Original: 0x00014819 - 0x000148AB (146 bytes, 43 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014819(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014819: ;
    if (_flags /* jae: above or equal (unsigned >=) */) goto loc_0001481F;

loc_0001481B: ;
    ebx = esp + 0x10;

loc_0001481F: ;
    PUSH32(esp, 0x00014824u); RECOMP_ABI_CALL(0x000D5040u, sub_000D5040); /* call 0x000D5040 */

loc_00014824: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014845; /* jne: not equal / not zero */

loc_00014828: ;
    PUSH32(esp, 0x0001482Du); RECOMP_ABI_CALL(0x000D5040u, sub_000D5040); /* call 0x000D5040 */

loc_0001482D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014838; /* je: equal / zero */

loc_00014831: ;
    edi = ebx;
    PUSH32(esp, 0x00014838u); RECOMP_ABI_CALL(0x000D7420u, sub_000D7420); /* call 0x000D7420 */

loc_00014838: ;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014845; /* je: equal / zero */

loc_0001483E: ;
    ecx = ebx;
    PUSH32(esp, 0x00014845u); RECOMP_ABI_CALL(0x000D7250u, sub_000D7250); /* call 0x000D7250 */

loc_00014845: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), esi (32-bit) */
    ebx = MEM32(esp + 0x10);
    if (CMP_AE(_fa, _fb)) goto loc_00014853; /* jae: above or equal (unsigned >=) */

loc_0001484F: ;
    ebx = esp + 0x10;

loc_00014853: ;
    PUSH32(esp, 0x00014858u); RECOMP_ABI_CALL(0x000D5040u, sub_000D5040); /* call 0x000D5040 */

loc_00014858: ;
    PUSH32(esp, 0x0001485Du); RECOMP_ABI_CALL(0x000D50D0u, sub_000D50D0); /* call 0x000D50D0 */

loc_0001485D: ;
    edx = MEM32(0x91EB44);
    eax = 0x91F28C;
    MEM8(edx + 0x20) = 1;
    PUSH32(esp, 0x00014871u); RECOMP_ABI_CALL(0x0001B340u, sub_0001B340); /* call 0x0001B340 */

loc_00014871: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00014878u); RECOMP_ABI_CALL(0x0045B6D0u, sub_0045B6D0); /* call 0x0045B6D0 */

loc_00014878: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_B(_fa, _fb)) goto loc_00014893; /* jb: below (unsigned <) */

loc_00014886: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014890u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00014890: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014893: ;
    ecx = MEM32(esp + 0x20);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x000148A7u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_000148A7: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000148B0
 * Original: 0x000148B0 - 0x000149D9 (297 bytes, 89 insns)
 * Folder: unsorted (none)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000148B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000148B0: ;
    eax = MEM32(0x91EB44);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(eax + 0x20));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000148D3; /* je: equal / zero */

loc_000148BF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 9);
    PUSH32(esp, 0x000148CAu); RECOMP_ABI_CALL(0x0045AF40u, sub_0045AF40); /* call 0x0045AF40 */

loc_000148CA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000148D3: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, 0x57F704);
    PUSH32(esp, ebp);
    MEM32(0x91EF38) = 1;
    MEM32(0x91EF30) = 0;
    MEM8(eax + 0x20) = 0;
    PUSH32(esp, 0x000148FBu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000148FB: ;
    ecx = MEM32(0x952CA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x57DA10);
    PUSH32(esp, ebp);
    MEM8(eax + 4) = LO8(ecx);
    PUSH32(esp, 0x00014914u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00014914: ;
    eax = MEM32(0x91EB0C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000149BF; /* jne: not equal / not zero */

loc_00014924: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000149BF; /* je: equal / zero */

loc_0001492F: ;
    PUSH32(esp, edi);
    edi = MEM32(0x91EB44);
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0xC;
    if (CMP_NE(_fa, _fb)) goto loc_00014958; /* jne: not equal / not zero */

loc_00014940: ;
    eax = MEM32(0x59A370);
    ecx = MEM32(0x5B35F4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00014956u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014953u); } /* indirect call */
    }

loc_00014956: ;
    MEM32(esi) = eax;

loc_00014958: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014978; /* jne: not equal / not zero */

loc_0001495F: ;
    eax = MEM32(0x59A378);
    ecx = MEM32(0x5B35F4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00014975u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014972u); } /* indirect call */
    }

loc_00014975: ;
    MEM32(edi + 0x14) = eax;

loc_00014978: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00014981u); RECOMP_ABI_CALL(0x00017570u, sub_00017570); /* call 0x00017570 */

loc_00014981: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00014996; /* je: equal / zero */

loc_00014986: ;
    ecx = MEM32(0x59A3D8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014993u); RECOMP_ABI_CALL(0x00460650u, sub_00460650); /* call 0x00460650 */

loc_00014993: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014996: ;
    PUSH32(esp, 0x57DA10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000149A1u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000149A1: ;
    esi = MEM32(eax + 0x28);
    PUSH32(esp, 0x57F6F4);
    PUSH32(esp, 0x000149AEu); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_000149AE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x57F6F4);
    ecx = esi + 0xC;
    PUSH32(esp, 0x000149BFu); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_000149BF: ;
    PUSH32(esp, ebp);
    MEM32(0x91EB0C) = 0;
    PUSH32(esp, 0x000149CFu); RECOMP_ABI_CALL(0x004603B0u, sub_004603B0); /* call 0x004603B0 */

loc_000149CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001490C
 * Original: 0x0001490C - 0x000149D9 (205 bytes, 62 insns)
 * Folder: unsorted (none)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001490C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001490C: ;
    MEM8(eax + 4) = LO8(ecx);
    PUSH32(esp, 0x00014914u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00014914: ;
    eax = MEM32(0x91EB0C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000149BF; /* jne: not equal / not zero */

loc_00014924: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000149BF; /* je: equal / zero */

loc_0001492F: ;
    PUSH32(esp, edi);
    edi = MEM32(0x91EB44);
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0xC;
    if (CMP_NE(_fa, _fb)) goto loc_00014958; /* jne: not equal / not zero */

loc_00014940: ;
    eax = MEM32(0x59A370);
    ecx = MEM32(0x5B35F4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00014956u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014953u); } /* indirect call */
    }

loc_00014956: ;
    MEM32(esi) = eax;

loc_00014958: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014978; /* jne: not equal / not zero */

loc_0001495F: ;
    eax = MEM32(0x59A378);
    ecx = MEM32(0x5B35F4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00014975u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014972u); } /* indirect call */
    }

loc_00014975: ;
    MEM32(edi + 0x14) = eax;

loc_00014978: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00014981u); RECOMP_ABI_CALL(0x00017570u, sub_00017570); /* call 0x00017570 */

loc_00014981: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00014996; /* je: equal / zero */

loc_00014986: ;
    ecx = MEM32(0x59A3D8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014993u); RECOMP_ABI_CALL(0x00460650u, sub_00460650); /* call 0x00460650 */

loc_00014993: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014996: ;
    PUSH32(esp, 0x57DA10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000149A1u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000149A1: ;
    esi = MEM32(eax + 0x28);
    PUSH32(esp, 0x57F6F4);
    PUSH32(esp, 0x000149AEu); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_000149AE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x57F6F4);
    ecx = esi + 0xC;
    PUSH32(esp, 0x000149BFu); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_000149BF: ;
    PUSH32(esp, ebp);
    MEM32(0x91EB0C) = 0;
    PUSH32(esp, 0x000149CFu); RECOMP_ABI_CALL(0x004603B0u, sub_004603B0); /* call 0x004603B0 */

loc_000149CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001499C
 * Original: 0x0001499C - 0x000149D9 (61 bytes, 17 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001499C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001499C: ;
    PUSH32(esp, 0x000149A1u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000149A1: ;
    esi = MEM32(eax + 0x28);
    PUSH32(esp, 0x57F6F4);
    PUSH32(esp, 0x000149AEu); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_000149AE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x57F6F4);
    ecx = esi + 0xC;
    PUSH32(esp, 0x000149BFu); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_000149BF: ;
    PUSH32(esp, ebp);
    MEM32(0x91EB0C) = 0;
    PUSH32(esp, 0x000149CFu); RECOMP_ABI_CALL(0x004603B0u, sub_004603B0); /* call 0x004603B0 */

loc_000149CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000149E0
 * Original: 0x000149E0 - 0x000149F2 (18 bytes, 6 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000149E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000149E0: ;
    eax = MEM32(0x5B3310);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    MEM8(ecx + 0xC) = LO8(eax);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014A00
 * Original: 0x00014A00 - 0x00014A27 (39 bytes, 14 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014A00: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014A15; /* jb: below (unsigned <) */

loc_00014A09: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014A12u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00014A12: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014A15: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = 7;
    MEM32(esi + 0x14) = eax;
    MEM16(esi + 4) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014A30
 * Original: 0x00014A30 - 0x00014A8E (94 bytes, 41 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014A30: ;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18), 8 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = edi + 4;
    if (CMP_B(_fa, _fb)) goto loc_00014A3F; /* jb: below (unsigned <) */

loc_00014A3B: ;
    eax = MEM32(ebx);
    goto loc_00014A41;

loc_00014A3F: ;
    eax = ebx;

loc_00014A41: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014A4D; /* jne: not equal / not zero */

loc_00014A49: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00014A53;

loc_00014A4D: ;
    esi = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00014A53: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014A5F; /* je: equal / zero */

loc_00014A5B: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00014A5F: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00014A68u); RECOMP_ABI_CALL(0x000140A0u, sub_000140A0); /* call 0x000140A0 */

loc_00014A68: ;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014A7E; /* jb: below (unsigned <) */

loc_00014A6E: ;
    eax = MEM32(ebx);
    ecx = eax + esi * 2;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00014A7E: ;
    eax = ebx;
    ecx = eax + esi * 2;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00014A90
 * Original: 0x00014A90 - 0x00014AAA (26 bytes, 9 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014A90: ;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 8 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_B(_fa, _fb)) goto loc_00014AA2; /* jb: below (unsigned <) */

loc_00014A9A: ;
    ecx = MEM32(ecx + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

loc_00014AA2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014AB0
 * Original: 0x00014AB0 - 0x00014B9A (234 bytes, 92 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00014AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014AB0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = eax;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00014AC7; /* jae: above or equal (unsigned >=) */

loc_00014AC0: ;
    ecx = ebx;
    PUSH32(esp, 0x00014AC7u); RECOMP_ABI_CALL(0x0047D6C0u, sub_0047D6C0); /* call 0x0047D6C0 */

loc_00014AC7: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(ebx + 0x14);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) edi = eax; /* cmovb */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00014AE4; /* ja: above (unsigned >) */

loc_00014ADD: ;
    ecx = ebx;
    PUSH32(esp, 0x00014AE4u); RECOMP_ABI_CALL(0x0047D700u, sub_0047D700); /* call 0x0047D700 */

loc_00014AE4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00014B92; /* jbe: below or equal (unsigned <=) */

loc_00014AEC: ;
    ebp = MEM32(ebx + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x7FFFFFFE (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00014B00; /* jbe: below or equal (unsigned <=) */

loc_00014AF9: ;
    ecx = ebx;
    PUSH32(esp, 0x00014B00u); RECOMP_ABI_CALL(0x0047D700u, sub_0047D700); /* call 0x0047D700 */

loc_00014B00: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00014B28; /* jae: above or equal (unsigned >=) */

loc_00014B07: ;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x00014B13u); RECOMP_ABI_CALL(0x00014120u, sub_00014120); /* call 0x00014120 */

loc_00014B13: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */

loc_00014B15: ;
    if (CMP_BE(_fa, _fb)) goto loc_00014B92; /* jbe: below or equal (unsigned <=) */

loc_00014B17: ;
    ecx = MEM32(esi + 0x18);
    eax = 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014B52; /* jb: below (unsigned <) */

loc_00014B23: ;
    esi = MEM32(esi + 4);
    goto loc_00014B55;

loc_00014B28: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014B15; /* jne: not equal / not zero */

loc_00014B2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00014B42; /* jb: below (unsigned <) */

loc_00014B34: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    MEM16(eax) = LO16(ebp);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00014B42: ;
    POP32(esp, edi);
    eax = ebx + 4;
    POP32(esp, esi);
    MEM16(eax) = 0;
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00014B52: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014B55: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), eax (32-bit) */
    edx = ebx + 4;
    if (CMP_B(_fa, _fb)) goto loc_00014B61; /* jb: below (unsigned <) */

loc_00014B5D: ;
    eax = MEM32(edx);
    goto loc_00014B63;

loc_00014B61: ;
    eax = edx;

loc_00014B63: ;
    ecx = edi + edi;
    edi = MEM32(esp + 0x10);
    esi = esi + edi * 2;
    edi = MEM32(ebx + 0x14);
    edi = eax + edi * 2;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 8 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00014B8C; /* jb: below (unsigned <) */

loc_00014B8A: ;
    edx = MEM32(edx);

loc_00014B8C: ;
    MEM16(edx + ebp * 2) = 0;

loc_00014B92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014BA0
 * Original: 0x00014BA0 - 0x00014CAC (268 bytes, 118 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014BA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = edx;
    edx = MEM32(ebx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = ecx;
    if (CMP_B(_fa, _fb)) goto loc_00014BB7; /* jb: below (unsigned <) */

loc_00014BB2: ;
    eax = MEM32(ebx + 4);
    goto loc_00014BBA;

loc_00014BB7: ;
    eax = ebx + 4;

loc_00014BBA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014BF0; /* jb: below (unsigned <) */

loc_00014BBE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    eax = ebx + 4;
    if (CMP_B(_fa, _fb)) goto loc_00014BCA; /* jb: below (unsigned <) */

loc_00014BC6: ;
    ecx = MEM32(eax);
    goto loc_00014BCC;

loc_00014BCA: ;
    ecx = eax;

loc_00014BCC: ;
    ebp = MEM32(ebx + 0x14);
    ecx = ecx + ebp * 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00014BF0; /* jbe: below or equal (unsigned <=) */

loc_00014BD6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014BDD; /* jb: below (unsigned <) */

loc_00014BDB: ;
    eax = MEM32(eax);

loc_00014BDD: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, esi);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0x00014BEBu); RECOMP_ABI_CALL(0x00014AB0u, sub_00014AB0); /* call 0x00014AB0 */

loc_00014BEB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00014BF0: ;
    ecx = MEM32(ebx + 0x14);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00014C03; /* ja: above (unsigned >) */

loc_00014BFC: ;
    ecx = ebx;
    PUSH32(esp, 0x00014C03u); RECOMP_ABI_CALL(0x0047D700u, sub_0047D700); /* call 0x0047D700 */

loc_00014C03: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00014CA5; /* jbe: below or equal (unsigned <=) */

loc_00014C0B: ;
    ebp = MEM32(ebx + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x7FFFFFFE (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00014C1F; /* jbe: below or equal (unsigned <=) */

loc_00014C18: ;
    ecx = ebx;
    PUSH32(esp, 0x00014C1Fu); RECOMP_ABI_CALL(0x0047D700u, sub_0047D700); /* call 0x0047D700 */

loc_00014C1F: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00014C41; /* jae: above or equal (unsigned >=) */

loc_00014C26: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x00014C32u); RECOMP_ABI_CALL(0x00014120u, sub_00014120); /* call 0x00014120 */

loc_00014C32: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */

loc_00014C34: ;
    if (CMP_BE(_fa, _fb)) goto loc_00014CA5; /* jbe: below or equal (unsigned <=) */

loc_00014C36: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014C69; /* jb: below (unsigned <) */

loc_00014C3C: ;
    eax = MEM32(ebx + 4);
    goto loc_00014C6C;

loc_00014C41: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014C34; /* jne: not equal / not zero */

loc_00014C45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00014C5A; /* jb: below (unsigned <) */

loc_00014C4D: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(eax) = LO16(ebp);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00014C5A: ;
    POP32(esp, edi);
    eax = ebx + 4;
    POP32(esp, esi);
    MEM16(eax) = 0;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00014C69: ;
    eax = ebx + 4;

loc_00014C6C: ;
    edx = MEM32(ebx + 0x14);
    ecx = edi + edi;
    edi = eax + edx * 2;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 8 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00014C9C; /* jb: below (unsigned <) */

loc_00014C8C: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(eax + ebp * 2) = 0;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00014C9C: ;
    eax = ebx + 4;
    MEM16(eax + ebp * 2) = 0;

loc_00014CA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00014C81
 * Original: 0x00014C81 - 0x00014CAC (43 bytes, 20 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014C81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014C81: ;
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 8 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00014C9C; /* jb: below (unsigned <) */

loc_00014C8C: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(eax + ebp * 2) = 0;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00014C9C: ;
    eax = ebx + 4;
    MEM16(eax + ebp * 2) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00014CB0
 * Original: 0x00014CB0 - 0x00014CE1 (49 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00014CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014CB0: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00014CB7u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_00014CB7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014CDE; /* je: equal / zero */

loc_00014CBE: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x57D6C0;
    MEM32(eax) = 0x57F7BC;
    MEM32(eax + 0xC) = 0x57F9CC;
    esp += 4; return; /* ret */

loc_00014CDE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00014CF0
 * Original: 0x00014CF0 - 0x00014D13 (35 bytes, 11 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00014CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014CF0: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00014CF7u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_00014CF7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014D10; /* je: equal / zero */

loc_00014CFE: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax) = 0x57F7A4;
    esp += 4; return; /* ret */

loc_00014D10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00014D20
 * Original: 0x00014D20 - 0x00014DAC (140 bytes, 45 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014D20: ;
    eax = MEM32(0x91EB14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(0x91EB10) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00014D67; /* jne: not equal / not zero */

loc_00014D34: ;
    xmm0 = XMM_SCALAR(MEMF(0x586658)); /* movss */
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x49742400);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    MEM32(0x91EB14) = 1;
    MEMF(0x91EB18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00014D64u); RECOMP_ABI_CALL(0x000E1FC0u, sub_000E1FC0); /* call 0x000E1FC0 */

loc_00014D64: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014D67: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014D7A; /* je: equal / zero */

loc_00014D6E: ;
    eax = MEM32(esi + 0x28);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014D7E; /* jne: not equal / not zero */

loc_00014D7A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00014D91;

loc_00014D7E: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014D89; /* jne: not equal / not zero */

loc_00014D85: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00014D91;

loc_00014D89: ;
    ecx = MEM32(esi + 0x28);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00014D91: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00014DA6; /* jle: less or equal (signed <=) */

loc_00014D97: ;
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + eax * 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM8(edx + 5) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_00014D97; /* jl: less (signed <) */

loc_00014DA6: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014DB0
 * Original: 0x00014DB0 - 0x00014DBF (15 bytes, 3 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014DB0(void)
{

loc_00014DB0: ;
    MEM32(0x91EB10) = 0;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014DC0
 * Original: 0x00014DC0 - 0x00014EBE (254 bytes, 66 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014DC0: ;
    eax = MEM32(0x91EB14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_00014EB8; /* ja: above (unsigned >) */

loc_00014DD0: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x14EC0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00014DD7u) goto loc_00014DD7;
    if (_jt == 0x00014E25u) goto loc_00014E25;
    if (_jt == 0x00014E51u) goto loc_00014E51;
    if (_jt == 0x00014E84u) goto loc_00014E84;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00014DD7: ;
    xmm0 = XMM_SCALAR(MEMF(0x91EB18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(0x91EB18) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00014EB8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00014DF9: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x57F804;
    MEM32(0x91EB14) = 2;
    PUSH32(esp, 0x00014E1Cu); RECOMP_ABI_CALL(0x000316F0u, sub_000316F0); /* call 0x000316F0 */

loc_00014E1C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_00014E25: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x57F7F8;
    MEM32(0x91EB14) = 3;
    PUSH32(esp, 0x00014E48u); RECOMP_ABI_CALL(0x000316F0u, sub_000316F0); /* call 0x000316F0 */

loc_00014E48: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_00014E51: ;
    xmm0 = XMM_SCALAR(MEMF(0x5866AC)); /* movss */
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x91EB14) = 4;
    MEMF(0x91EB18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00014E7Bu); RECOMP_ABI_CALL(0x000E1FC0u, sub_000E1FC0); /* call 0x000E1FC0 */

loc_00014E7B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_00014E84: ;
    xmm0 = XMM_SCALAR(MEMF(0x91EB18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(0x91EB18) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00014EB8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00014EA2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x91EB14) = 0;
    PUSH32(esp, 0x00014EB5u); RECOMP_ABI_CALL(0x0045AFE0u, sub_0045AFE0); /* call 0x0045AFE0 */

loc_00014EB5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014EB8: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014E7B
 * Original: 0x00014E7B - 0x00014EBE (67 bytes, 18 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014E7B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00014E7B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x91EB14) = 0;
    PUSH32(esp, 0x00014EB5u); RECOMP_ABI_CALL(0x0045AFE0u, sub_0045AFE0); /* call 0x0045AFE0 */

loc_00014EB5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014EB8: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014EBE
 * Original: 0x00014EBE - 0x00014ED0 (18 bytes, 8 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014EBE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014EBE: ;
    edi = edi;
    SET_LO8(eax, MEM8(ebx + LO8(eax))); /* xlatb */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x5100014E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), LO8(ecx) (8-bit) */

    g_seh_ebp = ebp; sub_00014ED0(); return; /* fallthrough 0x00014ED0 */

}

/**
 * sub_00014ED0
 * Original: 0x00014ED0 - 0x00014F01 (49 bytes, 13 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00014ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014ED0: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00014ED7u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_00014ED7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014EFE; /* je: equal / zero */

loc_00014EDE: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x57D6C0;
    MEM32(eax) = 0x57F814;
    MEM32(eax + 0xC) = 0x57F9CC;
    esp += 4; return; /* ret */

loc_00014EFE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00014ED7
 * Original: 0x00014ED7 - 0x00014F01 (42 bytes, 11 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00014ED7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014ED7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014EFE; /* je: equal / zero */

loc_00014EDE: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x57D6C0;
    MEM32(eax) = 0x57F814;
    MEM32(eax + 0xC) = 0x57F9CC;
    esp += 4; return; /* ret */

loc_00014EFE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00014F10
 * Original: 0x00014F10 - 0x00014F2E (30 bytes, 11 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014F10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00014F18u); RECOMP_ABI_CALL(0x000142F0u, sub_000142F0); /* call 0x000142F0 */

loc_00014F18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014F28; /* je: equal / zero */

loc_00014F1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00014F25u); RECOMP_ABI_CALL(0x0047D86Eu, sub_0047D86E); /* call 0x0047D86E */

loc_00014F25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014F28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014F30
 * Original: 0x00014F30 - 0x0001506D (317 bytes, 117 insns)
 * Folder: unsorted (none)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014F30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0xD);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x57DA34);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x00014F4Fu); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00014F4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014F62; /* jne: not equal / not zero */

loc_00014F53: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x00014F5Du); RECOMP_ABI_CALL(0x0045AF40u, sub_0045AF40); /* call 0x0045AF40 */

loc_00014F5D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);

loc_00014F62: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x57DA44);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00014F76u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00014F76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014F89; /* jne: not equal / not zero */

loc_00014F7A: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00014F84u); RECOMP_ABI_CALL(0x0045AF40u, sub_0045AF40); /* call 0x0045AF40 */

loc_00014F84: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);

loc_00014F89: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x57DA54);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00014F9Du); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00014F9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014FB0; /* jne: not equal / not zero */

loc_00014FA1: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x00014FABu); RECOMP_ABI_CALL(0x0045AF40u, sub_0045AF40); /* call 0x0045AF40 */

loc_00014FAB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);

loc_00014FB0: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, 7);
    PUSH32(esp, 0x57DA64);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00014FC4u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00014FC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001505D; /* jne: not equal / not zero */

loc_00014FCC: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, edi);
    edi = MEM32(0x91EB44);
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0xC;
    ebx = ecx + 0x10;
    if (CMP_NE(_fa, _fb)) goto loc_00014FFE; /* jne: not equal / not zero */

loc_00014FE6: ;
    eax = MEM32(0x59A370);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00014FF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00014FF3u); } /* indirect call */
    }

loc_00014FF6: ;
    ecx = MEM32(0x5B35F4);
    MEM32(esi) = eax;

loc_00014FFE: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015018; /* jne: not equal / not zero */

loc_00015005: ;
    eax = MEM32(0x59A378);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00015015u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015012u); } /* indirect call */
    }

loc_00015015: ;
    MEM32(edi + 0x14) = eax;

loc_00015018: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00015021u); RECOMP_ABI_CALL(0x00017570u, sub_00017570); /* call 0x00017570 */

loc_00015021: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0001502A; /* jne: not equal / not zero */

loc_00015026: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0001503C;

loc_0001502A: ;
    ecx = MEM32(0x59A3C8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015037u); RECOMP_ABI_CALL(0x00460650u, sub_00460650); /* call 0x00460650 */

loc_00015037: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_0001503C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00015046u); RECOMP_ABI_CALL(0x00465020u, sub_00465020); /* call 0x00465020 */

loc_00015046: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001504Cu); RECOMP_ABI_CALL(0x004603B0u, sub_004603B0); /* call 0x004603B0 */

loc_0001504C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00015056u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00015056: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0001505D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015066; /* je: equal / zero */

loc_00015061: ;
    PUSH32(esp, 0x00015066u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00015066: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001502A
 * Original: 0x0001502A - 0x0001506D (67 bytes, 26 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001502A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001502A: ;
    ecx = MEM32(0x59A3C8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015037u); RECOMP_ABI_CALL(0x00460650u, sub_00460650); /* call 0x00460650 */

loc_00015037: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00015046u); RECOMP_ABI_CALL(0x00465020u, sub_00465020); /* call 0x00465020 */

loc_00015046: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001504Cu); RECOMP_ABI_CALL(0x004603B0u, sub_004603B0); /* call 0x004603B0 */

loc_0001504C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00015056u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00015056: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    PUSH32(esp, 0x00015066u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00015066: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015070
 * Original: 0x00015070 - 0x000150A1 (49 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00015070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015070: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00015077u); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_00015077: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001509E; /* je: equal / zero */

loc_0001507E: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x57D6C0;
    MEM32(eax) = 0x57F858;
    MEM32(eax + 0xC) = 0x57F850;
    esp += 4; return; /* ret */

loc_0001509E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000150B0
 * Original: 0x000150B0 - 0x000150D3 (35 bytes, 11 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000150B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000150B0: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000150B7u); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_000150B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000150D0; /* je: equal / zero */

loc_000150BE: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax) = 0x57F894;
    esp += 4; return; /* ret */

loc_000150D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000150E0
 * Original: 0x000150E0 - 0x0001516F (143 bytes, 49 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000150E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000150E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 5);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x57DB58);
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000150FEu); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_000150FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001512E; /* jne: not equal / not zero */

loc_00015102: ;
    PUSH32(esp, 1);
    MEM32(0x91ED50) = ebx;
    PUSH32(esp, 0x0001510Fu); RECOMP_ABI_CALL(0x0045B070u, sub_0045B070); /* call 0x0045B070 */

loc_0001510F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00015117u); RECOMP_ABI_CALL(0x00013830u, sub_00013830); /* call 0x00013830 */

loc_00015117: ;
    ecx = MEM32(0x91EB44);
    MEM8(ecx + 0x1E) = LO8(ebx);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00015127u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00015127: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0001512E: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 4);
    PUSH32(esp, 0x57DB60);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00015141u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00015141: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015168; /* jne: not equal / not zero */

loc_00015145: ;
    eax = 3;
    PUSH32(esp, 0x0001514Fu); RECOMP_ABI_CALL(0x00013A80u, sub_00013A80); /* call 0x00013A80 */

loc_0001514F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x13);
    MEM8(0x91EB21) = 1;
    PUSH32(esp, 0x0001515Eu); RECOMP_ABI_CALL(0x0045C8E0u, sub_0045C8E0); /* call 0x0045C8E0 */

loc_0001515E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00015168u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00015168: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015170
 * Original: 0x00015170 - 0x00015235 (197 bytes, 53 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015170: ;
    eax = MEM32(0x91EB44);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(eax + 0x1E) = 1;
    SET_LO8(eax, MEM8(0x91ED80));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000151A5; /* jne: not equal / not zero */

loc_00015188: ;
    _fa = (uint32_t)(MEM8(0x91ED81)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x91ED81), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000151A5; /* jne: not equal / not zero */

loc_00015190: ;
    ecx = MEM32(0x91ED8C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = 0x17;
    PUSH32(esp, 0x000151A5u); RECOMP_ABI_CALL(0x00035400u, sub_00035400); /* call 0x00035400 */

loc_000151A5: ;
    _fa = (uint32_t)(MEM8(0x91EB21)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x91EB21), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001522C; /* je: equal / zero */

loc_000151AD: ;
    edx = MEM32(0x5B3310);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8C);
    ecx = MEM32(edx + 0x5B33A8);
    eax = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM8(0x91EB21) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0001522C; /* jne: not equal / not zero */

loc_000151CE: ;
    PUSH32(esp, edi);
    MEM32(0x91ED50) = ebx;
    PUSH32(esp, 0x000151DAu); RECOMP_ABI_CALL(0x00013A80u, sub_00013A80); /* call 0x00013A80 */

loc_000151DA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000151E1u); RECOMP_ABI_CALL(0x0045B070u, sub_0045B070); /* call 0x0045B070 */

loc_000151E1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000151E9u); RECOMP_ABI_CALL(0x000304B0u, sub_000304B0); /* call 0x000304B0 */

loc_000151E9: ;
    MEM32(eax + 4) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD;
    edi = esp + 8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esp + 8) = ebx;
    PUSH32(esp, 0x00015202u); RECOMP_ABI_CALL(0x00013A00u, sub_00013A00); /* call 0x00013A00 */

loc_00015202: ;
    ecx = esp + 8;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x38) = 0x32;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = 0xE00016C;
    PUSH32(esp, 0x00015223u); RECOMP_ABI_CALL(0x000E27E0u, sub_000E27E0); /* call 0x000E27E0 */

loc_00015223: ;
    eax = MEM32(0x91EB44);
    MEM8(eax + 0x1E) = LO8(ebx);
    POP32(esp, edi);

loc_0001522C: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001523A
 * Original: 0x0001523A - 0x00015240 (6 bytes, 6 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001523A(void)
{

loc_0001523A: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00015240
 * Original: 0x00015240 - 0x00015271 (49 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00015240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015240: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00015247u); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_00015247: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001526E; /* je: equal / zero */

loc_0001524E: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x57D6C0;
    MEM32(eax) = 0x57F8C4;
    MEM32(eax + 0xC) = 0x57F850;
    esp += 4; return; /* ret */

loc_0001526E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015270
 * Original: 0x00015270 - 0x00015271 (1 bytes, 1 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015270(void)
{

loc_00015270: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00015280
 * Original: 0x00015280 - 0x000152A3 (35 bytes, 11 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00015280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015280: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00015287u); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_00015287: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000152A0; /* je: equal / zero */

loc_0001528E: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax) = 0x57F8AC;
    esp += 4; return; /* ret */

loc_000152A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000152A7
 * Original: 0x000152A7 - 0x000152B0 (9 bytes, 9 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000152A7(void)
{

loc_000152A7: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000152B0
 * Original: 0x000152B0 - 0x000152CE (30 bytes, 11 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000152B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000152B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000152B8u); RECOMP_ABI_CALL(0x000142F0u, sub_000142F0); /* call 0x000142F0 */

loc_000152B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000152C8; /* je: equal / zero */

loc_000152BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000152C5u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_000152C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000152C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000152D0
 * Original: 0x000152D0 - 0x000153F3 (291 bytes, 103 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000152D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000152D0: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(0x59A360)); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x586648); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(esp + 4) = ecx;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000152F4; /* jnp: not parity */

loc_000152ED: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000152F4: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 7);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x57DB74);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00015310u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00015310: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001532F; /* jne: not equal / not zero */

loc_00015314: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);

loc_00015318: ;
    PUSH32(esp, 0x0001531Du); RECOMP_ABI_CALL(0x0045AF40u, sub_0045AF40); /* call 0x0045AF40 */

loc_0001531D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00015327u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00015327: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0001532F: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x57DB7C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00015343u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00015343: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001534E; /* jne: not equal / not zero */

loc_00015347: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2C);
    goto loc_00015318;

loc_0001534E: ;
    PUSH32(esp, 0x57DB88);
    ecx = esi;
    PUSH32(esp, 0x0001535Au); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_0001535A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001538A; /* jne: not equal / not zero */

loc_0001535E: ;
    eax = 3;
    PUSH32(esp, 0x00015368u); RECOMP_ABI_CALL(0x00013A80u, sub_00013A80); /* call 0x00013A80 */

loc_00015368: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x13);
    MEM8(0x91EB22) = 1;
    PUSH32(esp, 0x00015378u); RECOMP_ABI_CALL(0x0045C8E0u, sub_0045C8E0); /* call 0x0045C8E0 */

loc_00015378: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00015382u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00015382: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0001538A: ;
    PUSH32(esp, 0x57DB68);
    ecx = esi;
    PUSH32(esp, 0x00015396u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_00015396: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000153AE; /* jne: not equal / not zero */

loc_0001539A: ;
    PUSH32(esp, 0x0001539Fu); RECOMP_ABI_CALL(0x00015440u, sub_00015440); /* call 0x00015440 */

loc_0001539F: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x000153A6u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_000153A6: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000153AE: ;
    PUSH32(esp, 0x57DB90);
    ecx = esi;
    PUSH32(esp, 0x000153BAu); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_000153BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000153C8; /* jne: not equal / not zero */

loc_000153BE: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2B);
    goto loc_00015318;

loc_000153C8: ;
    PUSH32(esp, 0x57DBD0);
    ecx = esi;
    PUSH32(esp, 0x000153D4u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_000153D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015327; /* jne: not equal / not zero */

loc_000153DC: ;
    MEM32(0x91ED90) = 1;
    PUSH32(esp, 0x000153EBu); RECOMP_ABI_CALL(0x00013960u, sub_00013960); /* call 0x00013960 */

loc_000153EB: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015306
 * Original: 0x00015306 - 0x000153F3 (237 bytes, 84 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015306(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015306: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00015310u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00015310: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001532F; /* jne: not equal / not zero */

loc_00015314: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);

loc_00015318: ;
    PUSH32(esp, 0x0001531Du); RECOMP_ABI_CALL(0x0045AF40u, sub_0045AF40); /* call 0x0045AF40 */

loc_0001531D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00015327u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00015327: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0001532F: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x57DB7C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00015343u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00015343: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001534E; /* jne: not equal / not zero */

loc_00015347: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2C);
    goto loc_00015318;

loc_0001534E: ;
    PUSH32(esp, 0x57DB88);
    ecx = esi;
    PUSH32(esp, 0x0001535Au); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_0001535A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001538A; /* jne: not equal / not zero */

loc_0001535E: ;
    eax = 3;
    PUSH32(esp, 0x00015368u); RECOMP_ABI_CALL(0x00013A80u, sub_00013A80); /* call 0x00013A80 */

loc_00015368: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x13);
    MEM8(0x91EB22) = 1;
    PUSH32(esp, 0x00015378u); RECOMP_ABI_CALL(0x0045C8E0u, sub_0045C8E0); /* call 0x0045C8E0 */

loc_00015378: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00015382u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00015382: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0001538A: ;
    PUSH32(esp, 0x57DB68);
    ecx = esi;
    PUSH32(esp, 0x00015396u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_00015396: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000153AE; /* jne: not equal / not zero */

loc_0001539A: ;
    PUSH32(esp, 0x0001539Fu); RECOMP_ABI_CALL(0x00015440u, sub_00015440); /* call 0x00015440 */

loc_0001539F: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x000153A6u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_000153A6: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000153AE: ;
    PUSH32(esp, 0x57DB90);
    ecx = esi;
    PUSH32(esp, 0x000153BAu); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_000153BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000153C8; /* jne: not equal / not zero */

loc_000153BE: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2B);
    goto loc_00015318;

loc_000153C8: ;
    PUSH32(esp, 0x57DBD0);
    ecx = esi;
    PUSH32(esp, 0x000153D4u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_000153D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015327; /* jne: not equal / not zero */

loc_000153DC: ;
    MEM32(0x91ED90) = 1;
    PUSH32(esp, 0x000153EBu); RECOMP_ABI_CALL(0x00013960u, sub_00013960); /* call 0x00013960 */

loc_000153EB: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000153FD
 * Original: 0x000153FD - 0x00015400 (3 bytes, 3 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000153FD(void)
{

loc_000153FD: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00015400
 * Original: 0x00015400 - 0x00015440 (64 bytes, 19 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015400: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x81 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015414; /* je: equal / zero */

loc_0001540D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x84) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x84 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001543B; /* jne: not equal / not zero */

loc_00015414: ;
    eax = MEM32(0x5B3314);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001543B; /* jne: not equal / not zero */

loc_0001541D: ;
    PUSH32(esp, 0x00015422u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00015422: ;
    ecx = MEM32(0x91EB44);
    PUSH32(esp, 0);
    MEM8(ecx + 0x1F) = 1;
    PUSH32(esp, 0x00015433u); RECOMP_ABI_CALL(0x0045B070u, sub_0045B070); /* call 0x0045B070 */

loc_00015433: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0001543B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015440
 * Original: 0x00015440 - 0x00015452 (18 bytes, 6 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015440(void)
{

loc_00015440: ;
    eax = MEM32(0x91EB44);
    PUSH32(esp, 0);
    MEM8(eax + 0x1F) = 1;
    PUSH32(esp, 0x00015450u); RECOMP_ABI_CALL(0x0045B070u, sub_0045B070); /* call 0x0045B070 */

loc_00015450: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00015460
 * Original: 0x00015460 - 0x0001554A (234 bytes, 66 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015460: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(esp + 4) = ecx;
    PUSH32(esp, 0x0001546Du); RECOMP_ABI_CALL(0x00036B70u, sub_00036B70); /* call 0x00036B70 */

loc_0001546D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015496; /* je: equal / zero */

loc_00015473: ;
    PUSH32(esp, 0x00015478u); RECOMP_ABI_CALL(0x00036B70u, sub_00036B70); /* call 0x00036B70 */

loc_00015478: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015496; /* je: equal / zero */

loc_0001547D: ;
    _fa = (uint32_t)(MEM8(0x5B3321)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5B3321), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015496; /* jne: not equal / not zero */

loc_00015485: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x57DBD0);
    PUSH32(esp, 0x00015491u); RECOMP_ABI_CALL(0x00013C70u, sub_00013C70); /* call 0x00013C70 */

loc_00015491: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000154BF;

loc_00015496: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000154A5u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_000154A5: ;
    PUSH32(esp, 0x57DBD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000154B0u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000154B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000154BF; /* je: equal / zero */

loc_000154B7: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x000154BFu); RECOMP_ABI_CALL(0x004617B0u, sub_004617B0); /* call 0x004617B0 */

loc_000154BF: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x44);
    PUSH32(esp, 0x000154C9u); RECOMP_ABI_CALL(0x00015550u, sub_00015550); /* call 0x00015550 */

loc_000154C9: ;
    _fa = (uint32_t)(MEM8(0x91EB22)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x91EB22), LO8(ebx) (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00015541; /* je: equal / zero */

loc_000154D2: ;
    eax = MEM32(0x5B3310);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    _fa = (uint32_t)(MEM32(eax + 0x5B33A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x5B33A8), 2 (32-bit) */
    MEM8(0x91EB22) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00015541; /* jne: not equal / not zero */

loc_000154EC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000154F2u); RECOMP_ABI_CALL(0x000304B0u, sub_000304B0); /* call 0x000304B0 */

loc_000154F2: ;
    MEM32(eax + 4) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD;
    edi = esp + 0xC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, 0x0001550Bu); RECOMP_ABI_CALL(0x00013A00u, sub_00013A00); /* call 0x00013A00 */

loc_0001550B: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x3C) = 0x32;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = 0xE00016C;
    PUSH32(esp, 0x0001552Cu); RECOMP_ABI_CALL(0x000E27E0u, sub_000E27E0); /* call 0x000E27E0 */

loc_0001552C: ;
    ecx = MEM32(0x91EB44);
    PUSH32(esp, 1);
    MEM8(ecx + 0x1F) = 1;
    PUSH32(esp, 0x0001553Du); RECOMP_ABI_CALL(0x0045B070u, sub_0045B070); /* call 0x0045B070 */

loc_0001553D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_00015541: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015538
 * Original: 0x00015538 - 0x0001554A (18 bytes, 7 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015538(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015538: ;
    PUSH32(esp, 0x0001553Du); RECOMP_ABI_CALL(0x0045B070u, sub_0045B070); /* call 0x0045B070 */

loc_0001553D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015550
 * Original: 0x00015550 - 0x000155F2 (162 bytes, 52 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015550: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x57DB90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001555Cu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_0001555C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00015564u); RECOMP_ABI_CALL(0x000304B0u, sub_000304B0); /* call 0x000304B0 */

loc_00015564: ;
    _fa = (uint32_t)(MEM32(eax + 0x2A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2A8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015595; /* jne: not equal / not zero */

loc_0001556D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00015573u); RECOMP_ABI_CALL(0x000304B0u, sub_000304B0); /* call 0x000304B0 */

loc_00015573: ;
    ebx = MEM32(eax + 0x90);
    ebx = ebx >> 0x11;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x00015584u); RECOMP_ABI_CALL(0x000304B0u, sub_000304B0); /* call 0x000304B0 */

loc_00015584: ;
    SET_LO8(eax, MEM8(eax + 0x92));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0001559C; /* jne: not equal / not zero */

loc_00015591: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000155D7; /* jne: not equal / not zero */

loc_00015595: ;
    PUSH32(esp, 0x57DB9C);
    goto loc_000155AC;

loc_0001559C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000155A7; /* je: equal / zero */

loc_000155A0: ;
    PUSH32(esp, 0x57DBC0);
    goto loc_000155AC;

loc_000155A7: ;
    PUSH32(esp, 0x57DBA8);

loc_000155AC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000155B2u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000155B2: ;
    eax = MEM32(eax + 0x28);
    ecx = MEM32(eax + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000155DE; /* jb: below (unsigned <) */

loc_000155C3: ;
    eax = MEM32(eax + 4);
    edi = eax;
    PUSH32(esp, 0x57DB90);
    PUSH32(esp, 0x000155D2u); RECOMP_ABI_CALL(0x00013DF0u, sub_00013DF0); /* call 0x00013DF0 */

loc_000155D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000155D7: ;
    PUSH32(esp, 0x57DBB4);
    goto loc_000155AC;

loc_000155DE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x57DB90);
    PUSH32(esp, 0x000155EDu); RECOMP_ABI_CALL(0x00013DF0u, sub_00013DF0); /* call 0x00013DF0 */

loc_000155ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000155FF
 * Original: 0x000155FF - 0x00015600 (1 bytes, 1 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000155FF(void)
{

loc_000155FF: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00015600
 * Original: 0x00015600 - 0x000156BC (188 bytes, 50 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00015600: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x59A360)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x586648)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp) = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000156A9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0001561F: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x40); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(0x59A360) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000156A9; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00015635: ;
    eax = MEM32(0x91EB44);
    SET_LO8(ecx, MEM8(eax + 0x1E));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    MEMF(0x59A360) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00015651; /* je: equal / zero */

loc_0001564D: ;
    MEM8(eax + 0x1F) = 1;

loc_00015651: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00015657u); RECOMP_ABI_CALL(0x0045B070u, sub_0045B070); /* call 0x0045B070 */

loc_00015657: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x91EB22) = LO8(ebx);
    PUSH32(esp, 0x00015665u); RECOMP_ABI_CALL(0x000304B0u, sub_000304B0); /* call 0x000304B0 */

loc_00015665: ;
    MEM32(eax + 4) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD;
    edi = esp + 0xC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, 0x0001567Eu); RECOMP_ABI_CALL(0x00013A00u, sub_00013A00); /* call 0x00013A00 */

loc_0001567E: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x3C) = 0x32;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = 0xE00016C;
    PUSH32(esp, 0x0001569Fu); RECOMP_ABI_CALL(0x000E27E0u, sub_000E27E0); /* call 0x000E27E0 */

loc_0001569F: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000156A9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    PUSH32(esp, 0x000156B3u); RECOMP_ABI_CALL(0x00015550u, sub_00015550); /* call 0x00015550 */

loc_000156B3: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015668
 * Original: 0x00015668 - 0x000156BC (84 bytes, 24 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015668(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015668: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD;
    edi = esp + 0xC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, 0x0001567Eu); RECOMP_ABI_CALL(0x00013A00u, sub_00013A00); /* call 0x00013A00 */

loc_0001567E: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x3C) = 0x32;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = 0xE00016C;
    PUSH32(esp, 0x0001569Fu); RECOMP_ABI_CALL(0x000E27E0u, sub_000E27E0); /* call 0x000E27E0 */

loc_0001569F: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015675
 * Original: 0x00015675 - 0x000156BC (71 bytes, 20 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015675(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015675: ;
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, 0x0001567Eu); RECOMP_ABI_CALL(0x00013A00u, sub_00013A00); /* call 0x00013A00 */

loc_0001567E: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x3C) = 0x32;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = 0xE00016C;
    PUSH32(esp, 0x0001569Fu); RECOMP_ABI_CALL(0x000E27E0u, sub_000E27E0); /* call 0x000E27E0 */

loc_0001569F: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000156C0
 * Original: 0x000156C0 - 0x000156F1 (49 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000156C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000156C0: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000156C7u); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_000156C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000156EE; /* je: equal / zero */

loc_000156CE: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x57D6C0;
    MEM32(eax) = 0x57F918;
    MEM32(eax + 0xC) = 0x57F850;
    esp += 4; return; /* ret */

loc_000156EE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015700
 * Original: 0x00015700 - 0x00015723 (35 bytes, 11 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00015700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015700: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00015707u); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_00015707: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015720; /* je: equal / zero */

loc_0001570E: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax) = 0x57F900;
    esp += 4; return; /* ret */

loc_00015720: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015730
 * Original: 0x00015730 - 0x00015735 (5 bytes, 2 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015730(void)
{

loc_00015730: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001573A
 * Original: 0x0001573A - 0x00015740 (6 bytes, 6 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001573A(void)
{

loc_0001573A: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00015740
 * Original: 0x00015740 - 0x000157FD (189 bytes, 58 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015740: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    MEM32(0x5B5B20) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00015762; /* je: equal / zero */

loc_00015757: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x84) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x84 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000157F8; /* jne: not equal / not zero */

loc_00015762: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x1C);
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x57DBD8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0001577Bu); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_0001577B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000157F8; /* jne: not equal / not zero */

loc_0001577F: ;
    eax = MEM32(0x952CA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000157DB; /* jne: not equal / not zero */

loc_00015788: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015792u); RECOMP_ABI_CALL(0x000D6BB0u, sub_000D6BB0); /* call 0x000D6BB0 */

loc_00015792: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015798u); RECOMP_ABI_CALL(0x000D6C60u, sub_000D6C60); /* call 0x000D6C60 */

loc_00015798: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000157BE; /* jne: not equal / not zero */

loc_0001579F: ;
    MEM32(0x5B5B20) = 1;
    PUSH32(esp, 0x000157AEu); RECOMP_ABI_CALL(0x000D6CC0u, sub_000D6CC0); /* call 0x000D6CC0 */

loc_000157AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x000157B6u); RECOMP_ABI_CALL(0x0045C8E0u, sub_0045C8E0); /* call 0x0045C8E0 */

loc_000157B6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_000157BE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000157C5u); RECOMP_ABI_CALL(0x0045B070u, sub_0045B070); /* call 0x0045B070 */

loc_000157C5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x000157D0u); RECOMP_ABI_CALL(0x0045BA10u, sub_0045BA10); /* call 0x0045BA10 */

loc_000157D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 12; return; /* ret 8 */

loc_000157DB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000157E2u); RECOMP_ABI_CALL(0x0045B070u, sub_0045B070); /* call 0x0045B070 */

loc_000157E2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0x000157EDu); RECOMP_ABI_CALL(0x0045BA10u, sub_0045BA10); /* call 0x0045BA10 */

loc_000157ED: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 12; return; /* ret 8 */

loc_000157F8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015744
 * Original: 0x00015744 - 0x000157FD (185 bytes, 57 insns)
 * Folder: unsorted (none)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015744(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015744: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    MEM32(0x5B5B20) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00015762; /* je: equal / zero */

loc_00015757: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x84) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x84 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000157F8; /* jne: not equal / not zero */

loc_00015762: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x1C);
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x57DBD8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0001577Bu); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_0001577B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000157F8; /* jne: not equal / not zero */

loc_0001577F: ;
    eax = MEM32(0x952CA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000157DB; /* jne: not equal / not zero */

loc_00015788: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015792u); RECOMP_ABI_CALL(0x000D6BB0u, sub_000D6BB0); /* call 0x000D6BB0 */

loc_00015792: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015798u); RECOMP_ABI_CALL(0x000D6C60u, sub_000D6C60); /* call 0x000D6C60 */

loc_00015798: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000157BE; /* jne: not equal / not zero */

loc_0001579F: ;
    MEM32(0x5B5B20) = 1;
    PUSH32(esp, 0x000157AEu); RECOMP_ABI_CALL(0x000D6CC0u, sub_000D6CC0); /* call 0x000D6CC0 */

loc_000157AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x000157B6u); RECOMP_ABI_CALL(0x0045C8E0u, sub_0045C8E0); /* call 0x0045C8E0 */

loc_000157B6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_000157BE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000157C5u); RECOMP_ABI_CALL(0x0045B070u, sub_0045B070); /* call 0x0045B070 */

loc_000157C5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x000157D0u); RECOMP_ABI_CALL(0x0045BA10u, sub_0045BA10); /* call 0x0045BA10 */

loc_000157D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 12; return; /* ret 8 */

loc_000157DB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000157E2u); RECOMP_ABI_CALL(0x0045B070u, sub_0045B070); /* call 0x0045B070 */

loc_000157E2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0x000157EDu); RECOMP_ABI_CALL(0x0045BA10u, sub_0045BA10); /* call 0x0045BA10 */

loc_000157ED: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 12; return; /* ret 8 */

loc_000157F8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015800
 * Original: 0x00015800 - 0x000158B4 (180 bytes, 54 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015800: ;
    eax = MEM32(0x5B5B20);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015832; /* jne: not equal / not zero */

loc_0001580D: ;
    eax = MEM32(0x5B3310);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    _fa = (uint32_t)(MEM32(eax + 0x5B33A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x5B33A8), 4 (32-bit) */
    MEM32(0x5B5B20) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00015832; /* jne: not equal / not zero */

loc_00015827: ;
    PUSH32(esp, 0x0001582Cu); RECOMP_ABI_CALL(0x000D6A20u, sub_000D6A20); /* call 0x000D6A20 */

loc_0001582C: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00015832: ;
    eax = MEM32(0x59FCA4);
    PUSH32(esp, esi);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM8(0x5B330C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0001584D; /* je: equal / zero */

loc_00015846: ;
    eax = esi;
    PUSH32(esp, 0x0001584Du); RECOMP_ABI_CALL(0x000D5F70u, sub_000D5F70); /* call 0x000D5F70 */

loc_0001584D: ;
    MEM32(0x59FCA4) = esi;
    MEM32(0x91EF54) = ebx;
    MEM32(0x91EF38) = ebx;
    MEM32(0x59FCB0) = ebx;
    PUSH32(esp, 0x0001586Au); RECOMP_ABI_CALL(0x0045ADF0u, sub_0045ADF0); /* call 0x0045ADF0 */

loc_0001586A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00015870: ;
    _fa = (uint32_t)(MEM8(0x91ED80)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x91ED80), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000158A7; /* je: equal / zero */

loc_00015878: ;
    _fa = (uint32_t)(MEM8(0x91ED81)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x91ED81), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000158A7; /* je: equal / zero */

loc_00015881: ;
    eax = esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00015898; /* je: equal / zero */

loc_00015887: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00015891; /* je: equal / zero */

loc_0001588A: ;
    eax = MEM32(0x59A50C);
    goto loc_0001589D;

loc_00015891: ;
    eax = MEM32(0x59A508);
    goto loc_0001589D;

loc_00015898: ;
    eax = MEM32(0x59A510);

loc_0001589D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000158A4u); RECOMP_ABI_CALL(0x0043A2E0u, sub_0043A2E0); /* call 0x0043A2E0 */

loc_000158A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000158A7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00015870; /* jl: less (signed <) */

loc_000158AD: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015805
 * Original: 0x00015805 - 0x000158B4 (175 bytes, 53 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015805(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015805: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015832; /* jne: not equal / not zero */

loc_0001580D: ;
    eax = MEM32(0x5B3310);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    _fa = (uint32_t)(MEM32(eax + 0x5B33A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x5B33A8), 4 (32-bit) */
    MEM32(0x5B5B20) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00015832; /* jne: not equal / not zero */

loc_00015827: ;
    PUSH32(esp, 0x0001582Cu); RECOMP_ABI_CALL(0x000D6A20u, sub_000D6A20); /* call 0x000D6A20 */

loc_0001582C: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00015832: ;
    eax = MEM32(0x59FCA4);
    PUSH32(esp, esi);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM8(0x5B330C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0001584D; /* je: equal / zero */

loc_00015846: ;
    eax = esi;
    PUSH32(esp, 0x0001584Du); RECOMP_ABI_CALL(0x000D5F70u, sub_000D5F70); /* call 0x000D5F70 */

loc_0001584D: ;
    MEM32(0x59FCA4) = esi;
    MEM32(0x91EF54) = ebx;
    MEM32(0x91EF38) = ebx;
    MEM32(0x59FCB0) = ebx;
    PUSH32(esp, 0x0001586Au); RECOMP_ABI_CALL(0x0045ADF0u, sub_0045ADF0); /* call 0x0045ADF0 */

loc_0001586A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00015870: ;
    _fa = (uint32_t)(MEM8(0x91ED80)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x91ED80), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000158A7; /* je: equal / zero */

loc_00015878: ;
    _fa = (uint32_t)(MEM8(0x91ED81)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x91ED81), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000158A7; /* je: equal / zero */

loc_00015881: ;
    eax = esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00015898; /* je: equal / zero */

loc_00015887: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00015891; /* je: equal / zero */

loc_0001588A: ;
    eax = MEM32(0x59A50C);
    goto loc_0001589D;

loc_00015891: ;
    eax = MEM32(0x59A508);
    goto loc_0001589D;

loc_00015898: ;
    eax = MEM32(0x59A510);

loc_0001589D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000158A4u); RECOMP_ABI_CALL(0x0043A2E0u, sub_0043A2E0); /* call 0x0043A2E0 */

loc_000158A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000158A7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00015870; /* jl: less (signed <) */

loc_000158AD: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000158B5
 * Original: 0x000158B5 - 0x000158B8 (3 bytes, 3 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000158B5(void)
{

loc_000158B5: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000158B8
 * Original: 0x000158B8 - 0x000158C0 (8 bytes, 8 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000158B8(void)
{

loc_000158B8: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000158C0
 * Original: 0x000158C0 - 0x000158CC (12 bytes, 3 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000158C0(void)
{

loc_000158C0: ;
    MEM8(0x5B330C) = 0;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000158D0
 * Original: 0x000158D0 - 0x00015901 (49 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000158D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000158D0: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000158D7u); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_000158D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000158FE; /* je: equal / zero */

loc_000158DE: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x57D6C0;
    MEM32(eax) = 0x57F96C;
    MEM32(eax + 0xC) = 0x57F850;
    esp += 4; return; /* ret */

loc_000158FE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015910
 * Original: 0x00015910 - 0x00015933 (35 bytes, 11 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00015910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015910: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00015917u); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_00015917: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015930; /* je: equal / zero */

loc_0001591E: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax) = 0x57F954;
    esp += 4; return; /* ret */

loc_00015930: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015940
 * Original: 0x00015940 - 0x00015A51 (273 bytes, 86 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015940: ;
    ecx = MEM32(0x5B3314);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x81 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015986; /* jne: not equal / not zero */

loc_00015954: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015986; /* jne: not equal / not zero */

loc_00015958: ;
    PUSH32(esp, 0x0001595Du); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_0001595D: ;
    SET_LO8(ecx, MEM8(0x91F2C0));
    PUSH32(esp, 0x91F28C);
    PUSH32(esp, 0x0001596Du); RECOMP_ABI_CALL(0x0001B270u, sub_0001B270); /* call 0x0001B270 */

loc_0001596D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM8(0x91F2A2) = 0;
    PUSH32(esp, 0x0001597Du); RECOMP_ABI_CALL(0x0045AFE0u, sub_0045AFE0); /* call 0x0045AFE0 */

loc_0001597D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00015986: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000159CD; /* jne: not equal / not zero */

loc_0001598D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000159CD; /* jne: not equal / not zero */

loc_00015991: ;
    PUSH32(esp, 0x00015996u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00015996: ;
    SET_LO8(eax, MEM8(0x91F2A0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000159B1; /* jne: not equal / not zero */

loc_0001599F: ;
    SET_LO8(eax, MEM8(0x91F2A1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000159B1; /* jne: not equal / not zero */

loc_000159A8: ;
    SET_LO8(eax, MEM8(0x91F2A2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000159BB; /* je: equal / zero */

loc_000159B1: ;
    esi = 0x91F28C;
    PUSH32(esp, 0x000159BBu); RECOMP_ABI_CALL(0x0001B3F0u, sub_0001B3F0); /* call 0x0001B3F0 */

loc_000159BB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000159C4u); RECOMP_ABI_CALL(0x0045AFE0u, sub_0045AFE0); /* call 0x0045AFE0 */

loc_000159C4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000159CD: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x1C);
    PUSH32(esp, 9);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x57DBEC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000159E6u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_000159E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015A4B; /* jne: not equal / not zero */

loc_000159EA: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000159F6; /* je: equal / zero */

loc_000159F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015A4B; /* jne: not equal / not zero */

loc_000159F6: ;
    eax = MEM32(0x59FC94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015A25; /* je: equal / zero */

loc_000159FF: ;
    PUSH32(esp, 0x00015A04u); RECOMP_ABI_CALL(0x0045AE90u, sub_0045AE90); /* call 0x0045AE90 */

loc_00015A04: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x57DC08);
    PUSH32(esp, 0x00015A10u); RECOMP_ABI_CALL(0x00013C40u, sub_00013C40); /* call 0x00013C40 */

loc_00015A10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x91F28C);
    PUSH32(esp, 0x00015A1Fu); RECOMP_ABI_CALL(0x0001B270u, sub_0001B270); /* call 0x0001B270 */

loc_00015A1F: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00015A25: ;
    PUSH32(esp, 0x00015A2Au); RECOMP_ABI_CALL(0x0045AE90u, sub_0045AE90); /* call 0x0045AE90 */

loc_00015A2A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x57DBF8);
    PUSH32(esp, 0x00015A36u); RECOMP_ABI_CALL(0x00013C40u, sub_00013C40); /* call 0x00013C40 */

loc_00015A36: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, 1);
    PUSH32(esp, 0x91F28C);
    PUSH32(esp, 0x00015A45u); RECOMP_ABI_CALL(0x0001B270u, sub_0001B270); /* call 0x0001B270 */

loc_00015A45: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00015A4B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015A10
 * Original: 0x00015A10 - 0x00015A51 (65 bytes, 21 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015A10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x91F28C);
    PUSH32(esp, 0x00015A1Fu); RECOMP_ABI_CALL(0x0001B270u, sub_0001B270); /* call 0x0001B270 */

loc_00015A1F: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    PUSH32(esp, 1);
    PUSH32(esp, 0x57DBF8);
    PUSH32(esp, 0x00015A36u); RECOMP_ABI_CALL(0x00013C40u, sub_00013C40); /* call 0x00013C40 */

loc_00015A36: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, 1);
    PUSH32(esp, 0x91F28C);
    PUSH32(esp, 0x00015A45u); RECOMP_ABI_CALL(0x0001B270u, sub_0001B270); /* call 0x0001B270 */

loc_00015A45: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015A2C
 * Original: 0x00015A2C - 0x00015A51 (37 bytes, 12 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015A2C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015A2C: ;
    PUSH32(esp, 0x57DBF8);
    PUSH32(esp, 0x00015A36u); RECOMP_ABI_CALL(0x00013C40u, sub_00013C40); /* call 0x00013C40 */

loc_00015A36: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, 1);
    PUSH32(esp, 0x91F28C);
    PUSH32(esp, 0x00015A45u); RECOMP_ABI_CALL(0x0001B270u, sub_0001B270); /* call 0x0001B270 */

loc_00015A45: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015A31
 * Original: 0x00015A31 - 0x00015A51 (32 bytes, 11 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015A31(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015A31: ;
    PUSH32(esp, 0x00015A36u); RECOMP_ABI_CALL(0x00013C40u, sub_00013C40); /* call 0x00013C40 */

loc_00015A36: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, 1);
    PUSH32(esp, 0x91F28C);
    PUSH32(esp, 0x00015A45u); RECOMP_ABI_CALL(0x0001B270u, sub_0001B270); /* call 0x0001B270 */

loc_00015A45: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015A5E
 * Original: 0x00015A5E - 0x00015A60 (2 bytes, 2 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015A5E(void)
{

loc_00015A5E: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00015A60
 * Original: 0x00015A60 - 0x00015AC8 (104 bytes, 32 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015A60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x57F540);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015A6Fu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00015A6F: ;
    ecx = MEM32(0x91EB44);
    SET_LO8(edx, MEM8(ecx + 0x1E));
    ecx = MEM32(0x5B35F4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(eax + 4) = LO8(edx);
    eax = MEM32(0x59FC94);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_00015AA3; /* je: equal / zero */

loc_00015A97: ;
    PUSH32(esp, 0x00015A9Cu); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00015A9C: ;
    PUSH32(esp, 0x57DBF8);
    goto loc_00015AAD;

loc_00015AA3: ;
    PUSH32(esp, 0x00015AA8u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00015AA8: ;
    PUSH32(esp, 0x57DC08);

loc_00015AAD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015AB3u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00015AB3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015AC3; /* je: equal / zero */

loc_00015ABA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00015AC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00015AC0u); } /* indirect call */
    }

loc_00015AC3: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015AD0
 * Original: 0x00015AD0 - 0x00015AEF (31 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015AD0: ;
    eax = MEM32(ecx + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015AD8; /* jne: not equal / not zero */

loc_00015AD7: ;
    esp += 4; return; /* ret */

loc_00015AD8: ;
    ecx = MEM32(ecx + 0x54);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015AF0
 * Original: 0x00015AF0 - 0x00015B21 (49 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00015AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015AF0: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00015AF7u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_00015AF7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015B1E; /* je: equal / zero */

loc_00015AFE: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x57D6C0;
    MEM32(eax) = 0x57F9D4;
    MEM32(eax + 0xC) = 0x57F9CC;
    esp += 4; return; /* ret */

loc_00015B1E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015B30
 * Original: 0x00015B30 - 0x00015B54 (36 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00015B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015B30: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00015B37u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_00015B37: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015B51; /* je: equal / zero */

loc_00015B40: ;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = 1;
    MEM32(eax) = 0x57F9B4;
    MEM8(eax + 0xC) = LO8(ecx);
    esp += 4; return; /* ret */

loc_00015B51: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015B60
 * Original: 0x00015B60 - 0x00015B83 (35 bytes, 11 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00015B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015B60: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00015B67u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_00015B67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015B80; /* je: equal / zero */

loc_00015B6E: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax) = 0x57F9A8;
    esp += 4; return; /* ret */

loc_00015B80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015B87
 * Original: 0x00015B87 - 0x00015B8C (5 bytes, 5 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015B87(void)
{

loc_00015B87: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00015B8C
 * Original: 0x00015B8C - 0x00015B90 (4 bytes, 4 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015B8C(void)
{

loc_00015B8C: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00015B90
 * Original: 0x00015B90 - 0x00015CFC (364 bytes, 106 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015B90: ;
    eax = 0xCB20;
    PUSH32(esp, 0x00015B9Au); RECOMP_ABI_CALL(0x0047F310u, sub_0047F310); /* call 0x0047F310 */

loc_00015B9A: ;
    eax = MEM32(0x596CA0);
    ecx = MEM32(esp + 0xCB24);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xCB2C) = eax;
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, 0x57DC14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x00015BC7u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00015BC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015CE2; /* jne: not equal / not zero */

loc_00015BCF: ;
    ecx = MEM32(0x91EB2C);
    edi = MEM32(ecx + 0x3C);
    edx = MEM32(0x5E314C);
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x214);
    ecx = MEM32(esi + 0x5B5B2C);
    eax = MEM32(edx + ecx * 4);
    eax = MEM32(eax + 0x94);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x34 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015C2C; /* jne: not equal / not zero */

loc_00015BFD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    eax = 4;
    PUSH32(esp, 0x00015C0Fu); RECOMP_ABI_CALL(0x00031810u, sub_00031810); /* call 0x00031810 */

loc_00015C0F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xCB1C);
    PUSH32(esp, 0x00015C23u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_00015C23: ;
    _fb = (uint32_t)(0xCB20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCB20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00015C2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x35) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x35 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015C60; /* jne: not equal / not zero */

loc_00015C31: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    eax = 5;
    PUSH32(esp, 0x00015C43u); RECOMP_ABI_CALL(0x00031810u, sub_00031810); /* call 0x00031810 */

loc_00015C43: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xCB1C);
    PUSH32(esp, 0x00015C57u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_00015C57: ;
    _fb = (uint32_t)(0xCB20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCB20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00015C60: ;
    eax = MEM32(esi + 0x5B5B28);
    edx = MEM32(edx + eax * 4);
    eax = MEM32(edx + 0x94);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x57FA10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015C80u); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00015C80: ;
    ecx = MEM32(esi + 0x5B5B28);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0xCA1C);
    eax = esp + 0x124;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015C9Eu); RECOMP_ABI_CALL(0x000D4FA0u, sub_000D4FA0); /* call 0x000D4FA0 */

loc_00015C9E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015CD4; /* jne: not equal / not zero */

loc_00015CA5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x52);
    MEM32(0x91EB24) = 2;
    PUSH32(esp, 0x00015CB7u); RECOMP_ABI_CALL(0x0045C8E0u, sub_0045C8E0); /* call 0x0045C8E0 */

loc_00015CB7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xCB1C);
    PUSH32(esp, 0x00015CCBu); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_00015CCB: ;
    _fb = (uint32_t)(0xCB20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCB20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00015CD4: ;
    eax = edi;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00015CDDu); RECOMP_ABI_CALL(0x00016650u, sub_00016650); /* call 0x00016650 */

loc_00015CDD: ;
    PUSH32(esp, 0x00015CE2u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00015CE2: ;
    ecx = MEM32(esp + 0xCB28);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    PUSH32(esp, 0x00015CF3u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_00015CF3: ;
    _fb = (uint32_t)(0xCB20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCB20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015BB8
 * Original: 0x00015BB8 - 0x00015CFC (324 bytes, 95 insns)
 * Folder: unsorted (none)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015BB8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015BB8: ;
    PUSH32(esp, 0x57DC14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x00015BC7u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00015BC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015CE2; /* jne: not equal / not zero */

loc_00015BCF: ;
    ecx = MEM32(0x91EB2C);
    edi = MEM32(ecx + 0x3C);
    edx = MEM32(0x5E314C);
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x214);
    ecx = MEM32(esi + 0x5B5B2C);
    eax = MEM32(edx + ecx * 4);
    eax = MEM32(eax + 0x94);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x34 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015C2C; /* jne: not equal / not zero */

loc_00015BFD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    eax = 4;
    PUSH32(esp, 0x00015C0Fu); RECOMP_ABI_CALL(0x00031810u, sub_00031810); /* call 0x00031810 */

loc_00015C0F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xCB1C);
    PUSH32(esp, 0x00015C23u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_00015C23: ;
    _fb = (uint32_t)(0xCB20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCB20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00015C2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x35) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x35 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015C60; /* jne: not equal / not zero */

loc_00015C31: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    eax = 5;
    PUSH32(esp, 0x00015C43u); RECOMP_ABI_CALL(0x00031810u, sub_00031810); /* call 0x00031810 */

loc_00015C43: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xCB1C);
    PUSH32(esp, 0x00015C57u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_00015C57: ;
    _fb = (uint32_t)(0xCB20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCB20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00015C60: ;
    eax = MEM32(esi + 0x5B5B28);
    edx = MEM32(edx + eax * 4);
    eax = MEM32(edx + 0x94);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x57FA10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015C80u); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00015C80: ;
    ecx = MEM32(esi + 0x5B5B28);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0xCA1C);
    eax = esp + 0x124;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015C9Eu); RECOMP_ABI_CALL(0x000D4FA0u, sub_000D4FA0); /* call 0x000D4FA0 */

loc_00015C9E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015CD4; /* jne: not equal / not zero */

loc_00015CA5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x52);
    MEM32(0x91EB24) = 2;
    PUSH32(esp, 0x00015CB7u); RECOMP_ABI_CALL(0x0045C8E0u, sub_0045C8E0); /* call 0x0045C8E0 */

loc_00015CB7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xCB1C);
    PUSH32(esp, 0x00015CCBu); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_00015CCB: ;
    _fb = (uint32_t)(0xCB20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCB20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00015CD4: ;
    eax = edi;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00015CDDu); RECOMP_ABI_CALL(0x00016650u, sub_00016650); /* call 0x00016650 */

loc_00015CDD: ;
    PUSH32(esp, 0x00015CE2u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00015CE2: ;
    ecx = MEM32(esp + 0xCB28);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    PUSH32(esp, 0x00015CF3u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_00015CF3: ;
    _fb = (uint32_t)(0xCB20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCB20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015CBC
 * Original: 0x00015CBC - 0x00015CFC (64 bytes, 18 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015CBC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015CBC: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xCB1C);
    PUSH32(esp, 0x00015CCBu); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_00015CCB: ;
    _fb = (uint32_t)(0xCB20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCB20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    PUSH32(esp, 0x00015CE2u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00015CE2: ;
    ecx = MEM32(esp + 0xCB28);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    PUSH32(esp, 0x00015CF3u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_00015CF3: ;
    _fb = (uint32_t)(0xCB20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCB20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015D00
 * Original: 0x00015D00 - 0x00015D05 (5 bytes, 2 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015D00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015D00: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015D10
 * Original: 0x00015D10 - 0x00015D49 (57 bytes, 18 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015D10: ;
    SET_LO8(eax, MEM8(0x91EB39));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015D44; /* je: equal / zero */

loc_00015D19: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x81 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015D44; /* jne: not equal / not zero */

loc_00015D25: ;
    eax = MEM32(0x5B3314);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015D44; /* jne: not equal / not zero */

loc_00015D2E: ;
    PUSH32(esp, 0x00015D33u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00015D33: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00015D3Cu); RECOMP_ABI_CALL(0x0045AFE0u, sub_0045AFE0); /* call 0x0045AFE0 */

loc_00015D3C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00015D44: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015D50
 * Original: 0x00015D50 - 0x00015E84 (308 bytes, 85 insns)
 * Folder: unsorted (none)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015D50: ;
    SET_LO8(eax, MEM8(0x91EB38));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00015D8E; /* jne: not equal / not zero */

loc_00015D64: ;
    PUSH32(esp, 0x00015D69u); RECOMP_ABI_CALL(0x000139B0u, sub_000139B0); /* call 0x000139B0 */

loc_00015D69: ;
    PUSH32(esp, 0x57DC34);
    PUSH32(esp, esi);
    MEM8(0x91EB39) = LO8(ebx);
    PUSH32(esp, 0x00015D7Au); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00015D7A: ;
    PUSH32(esp, 0x57DC44);
    PUSH32(esp, esi);
    MEM8(eax + 4) = LO8(ebx);
    PUSH32(esp, 0x00015D88u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00015D88: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 4) = LO8(ebx);

loc_00015D8E: ;
    eax = MEM32(0x91EB24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015DC8; /* jne: not equal / not zero */

loc_00015D98: ;
    eax = MEM32(0x5B3310);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    _fa = (uint32_t)(MEM32(eax + 0x5B33A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x5B33A8), 2 (32-bit) */
    MEM32(0x91EB24) = ebx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00015EF6(); return; } /* jne: not equal / not zero */

loc_00015DB6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00015DBDu); RECOMP_ABI_CALL(0x0045AFE0u, sub_0045AFE0); /* call 0x0045AFE0 */

loc_00015DBD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00015DC8: ;
    ecx = 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015E0C; /* jne: not equal / not zero */

loc_00015DD1: ;
    edx = MEM32(0x5B3310);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8C);
    _fa = (uint32_t)(MEM32(edx + 0x5B33A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x5B33A8), ecx (32-bit) */
    MEM32(0x91EB24) = ebx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00015EF6(); return; } /* jne: not equal / not zero */

loc_00015DEF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1B);
    MEM32(0x91EB24) = 3;
    PUSH32(esp, 0x00015E01u); RECOMP_ABI_CALL(0x0045C8E0u, sub_0045C8E0); /* call 0x0045C8E0 */

loc_00015E01: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00015E0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00015E9F(); return; } /* jne: not equal / not zero */

loc_00015E15: ;
    eax = MEM32(0x5B3310);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    _fa = (uint32_t)(MEM32(eax + 0x5B33A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x5B33A8), ecx (32-bit) */
    MEM32(0x91EB24) = ebx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00015EF6(); return; } /* jne: not equal / not zero */

loc_00015E32: ;
    ecx = MEM32(0x91EB2C);
    eax = MEM32(ecx + 0x3C);
    ecx = MEM32(0x5E314C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x214);
    edx = MEM32(eax + 0x5B5B28);
    edx = MEM32(ecx + edx * 4);
    ecx = MEM32(edx + 0x94);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x5B5B2C);
    PUSH32(esp, 0x00015E62u); RECOMP_ABI_CALL(0x000D4E90u, sub_000D4E90); /* call 0x000D4E90 */

loc_00015E62: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00015E6Au); RECOMP_ABI_CALL(0x000D6830u, sub_000D6830); /* call 0x000D6830 */

loc_00015E6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00015E84(); return; } /* je: equal / zero */

loc_00015E6E: ;
    PUSH32(esp, 0x00015E73u); RECOMP_ABI_CALL(0x000160C0u, sub_000160C0); /* call 0x000160C0 */

loc_00015E73: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015E79u); RECOMP_ABI_CALL(0x004603B0u, sub_004603B0); /* call 0x004603B0 */

loc_00015E79: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015DE9
 * Original: 0x00015DE9 - 0x00015E84 (155 bytes, 41 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015DE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015DE9: ;
    if (_flags /* jne: not equal / not zero */) { g_seh_ebp = ebp; sub_00015EF6(); return; }

loc_00015DEF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1B);
    MEM32(0x91EB24) = 3;
    PUSH32(esp, 0x00015E01u); RECOMP_ABI_CALL(0x0045C8E0u, sub_0045C8E0); /* call 0x0045C8E0 */

loc_00015E01: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    eax = MEM32(0x5B3310);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    _fa = (uint32_t)(MEM32(eax + 0x5B33A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x5B33A8), ecx (32-bit) */
    MEM32(0x91EB24) = ebx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00015EF6(); return; } /* jne: not equal / not zero */

loc_00015E32: ;
    ecx = MEM32(0x91EB2C);
    eax = MEM32(ecx + 0x3C);
    ecx = MEM32(0x5E314C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x214);
    edx = MEM32(eax + 0x5B5B28);
    edx = MEM32(ecx + edx * 4);
    ecx = MEM32(edx + 0x94);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x5B5B2C);
    PUSH32(esp, 0x00015E62u); RECOMP_ABI_CALL(0x000D4E90u, sub_000D4E90); /* call 0x000D4E90 */

loc_00015E62: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00015E6Au); RECOMP_ABI_CALL(0x000D6830u, sub_000D6830); /* call 0x000D6830 */

loc_00015E6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00015E84(); return; } /* je: equal / zero */

loc_00015E6E: ;
    PUSH32(esp, 0x00015E73u); RECOMP_ABI_CALL(0x000160C0u, sub_000160C0); /* call 0x000160C0 */

loc_00015E73: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015E79u); RECOMP_ABI_CALL(0x004603B0u, sub_004603B0); /* call 0x004603B0 */

loc_00015E79: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015E84
 * Original: 0x00015E84 - 0x00015E9F (27 bytes, 12 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015E84(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015E84: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00015E8Bu); RECOMP_ABI_CALL(0x0045AFE0u, sub_0045AFE0); /* call 0x0045AFE0 */

loc_00015E8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015E94u); RECOMP_ABI_CALL(0x004603B0u, sub_004603B0); /* call 0x004603B0 */

loc_00015E94: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015E9F
 * Original: 0x00015E9F - 0x00015F10 (113 bytes, 37 insns)
 * Folder: unsorted (none)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015E9F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015E9F: ;
    PUSH32(esp, 0x57DC14);
    PUSH32(esp, esi);
    MEM32(0x91EB34) = 0xFFFFFFFFu;
    MEM32(0x91EB28) = esi;
    PUSH32(esp, 0x00015EBAu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00015EBA: ;
    SET_LO8(ecx, MEM8(edi + 0xC));
    eax = MEM32(eax + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    MEM32(0x91EB2C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00015EF6; /* jne: not equal / not zero */

loc_00015ECC: ;
    PUSH32(esp, 0x57DC24);
    ecx = eax;
    PUSH32(esp, 0x00015ED8u); RECOMP_ABI_CALL(0x00467800u, sub_00467800); /* call 0x00467800 */

loc_00015ED8: ;
    ecx = MEM32(0x91EB2C);
    PUSH32(esp, 0x57DC2C);
    MEM32(0x59A364) = eax;
    PUSH32(esp, 0x00015EEDu); RECOMP_ABI_CALL(0x00467800u, sub_00467800); /* call 0x00467800 */

loc_00015EED: ;
    MEM32(0x59A368) = eax;
    MEM8(edi + 0xC) = 1;

loc_00015EF6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015EFCu); RECOMP_ABI_CALL(0x004603B0u, sub_004603B0); /* call 0x004603B0 */

loc_00015EFC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015EF6
 * Original: 0x00015EF6 - 0x00015F10 (26 bytes, 17 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015EF6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015EF6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015EFCu); RECOMP_ABI_CALL(0x004603B0u, sub_004603B0); /* call 0x004603B0 */

loc_00015EFC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015F10
 * Original: 0x00015F10 - 0x00015F1C (12 bytes, 3 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015F10(void)
{

loc_00015F10: ;
    MEM8(0x91EB38) = 0;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015F20
 * Original: 0x00015F20 - 0x00016092 (370 bytes, 123 insns)
 * Folder: unsorted (none)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015F20: ;
    SET_LO8(eax, MEM8(0x91EB38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    ebx = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00015F3B; /* jne: not equal / not zero */

loc_00015F2F: ;
    MEM8(0x91EB38) = LO8(ebx);

loc_00015F35: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00015F3B: ;
    eax = MEM32(0x59FC80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x59FC80) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00015F35; /* jne: not equal / not zero */

loc_00015F4A: ;
    SET_LO8(eax, MEM8(0x91EB39));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_00015FB7; /* jne: not equal / not zero */

loc_00015F5A: ;
    PUSH32(esp, 0x57DC34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00015F65u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00015F65: ;
    PUSH32(esp, 0x57DC44);
    PUSH32(esp, edi);
    MEM8(eax + 4) = LO8(ebx);
    PUSH32(esp, 0x00015F73u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00015F73: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 4) = LO8(ebx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00015F80: ;
    eax = MEM32(0x5960C0);
    ecx = MEM32(esi + eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x57DC68);
    PUSH32(esp, 0x00015F93u); RECOMP_ABI_CALL(0x0047EA8Du, sub_0047EA8D); /* call 0x0047EA8D */

loc_00015F93: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FA0; /* jne: not equal / not zero */

loc_00015F9A: ;
    MEM32(0x91EB3C) = ebp;

loc_00015FA0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB58 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00015F80; /* jb: below (unsigned <) */

loc_00015FAC: ;
    PUSH32(esp, 0x00015FB1u); RECOMP_ABI_CALL(0x000160C0u, sub_000160C0); /* call 0x000160C0 */

loc_00015FB1: ;
    MEM8(0x91EB39) = LO8(ebx);

loc_00015FB7: ;
    eax = MEM32(0x91EB2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016068; /* je: equal / zero */

loc_00015FC4: ;
    esi = MEM32(eax + 0x3C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x91EB34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x91EB34) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015FE6; /* je: equal / zero */

loc_00015FCF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x91EB34) = esi;
    PUSH32(esp, 0x00015FDCu); RECOMP_ABI_CALL(0x00013A80u, sub_00013A80); /* call 0x00013A80 */

loc_00015FDC: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015FE3u); RECOMP_ABI_CALL(0x000164D0u, sub_000164D0); /* call 0x000164D0 */

loc_00015FE3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015FE6: ;
    PUSH32(esp, 0x57DC50);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00015FF1u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00015FF1: ;
    edx = MEM32(0x91EB2C);
    ecx = MEM32(edx + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    PUSH32(esp, 0x57DC5C);
    PUSH32(esp, edi);
    MEM8(eax + 4) = LO8(ecx);
    PUSH32(esp, 0x00016010u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00016010: ;
    esi = eax;
    eax = MEM32(0x91EB2C);
    ecx = MEM32(eax + 0x50);
    edi = MEM32(eax + 0x8C);
    ebp = MEM32(eax + 0x38);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001603F; /* jne: not equal / not zero */

loc_0001602A: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, edi);
    MEM8(esi + 4) = LO8(edx);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0001603F: ;
    edx = MEM32(eax + 0x54);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, edi);
    MEM8(esi + 4) = LO8(edx);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00016068: ;
    PUSH32(esp, 0x57DC50);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00016073u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00016073: ;
    PUSH32(esp, 0x57DC5C);
    PUSH32(esp, edi);
    MEM8(eax + 4) = 0;
    PUSH32(esp, 0x00016082u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00016082: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 4) = 0;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000160A0
 * Original: 0x000160A0 - 0x000160BB (27 bytes, 8 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000160A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000160A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0x20C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x20C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000160BAu); RECOMP_ABI_CALL(0x003D09D3u, sub_003D09D3); /* call 0x003D09D3 */

loc_000160BA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000160BB
 * Original: 0x000160BB - 0x000160BE (3 bytes, 3 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000160BB(void)
{

loc_000160BB: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000160BE
 * Original: 0x000160BE - 0x000160C0 (2 bytes, 2 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000160BE(void)
{

loc_000160BE: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000160C0
 * Original: 0x000160C0 - 0x000164CA (1034 bytes, 276 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000160C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000160C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x48C8E1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x390) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x390;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x596CA0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x394) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000160F5u); RECOMP_ABI_CALL(0x000D6830u, sub_000D6830); /* call 0x000D6830 */

loc_000160F5: ;
    ecx = MEM32(0x91EB2C);
    edi = eax;
    MEM32(esp + 0x14) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016106u); RECOMP_ABI_CALL(0x00468260u, sub_00468260); /* call 0x00468260 */

loc_00016106: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00016216; /* jbe: below or equal (unsigned <=) */

loc_00016112: ;
    edi = 0x5B5B2C;
    goto loc_00016120;

    /* nop */

loc_00016120: ;
    eax = MEM32(0x5E314C);
    MEM32(edi + -4) = esi;
    ecx = MEM32(eax + esi * 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016134u); RECOMP_ABI_CALL(0x0047E6EAu, sub_0047E6EA); /* call 0x0047E6EA */

loc_00016134: ;
    edx = MEM32(0x5E314C);
    MEM32(edi) = eax;
    eax = MEM32(edx + esi * 4);
    eax = MEM32(eax + 0x94);
    eax = eax & 0xFC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(edi + 4) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0xAC008878u);
    eax = 0x842580;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    MEM32(esp + 0x28) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016170u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00016170: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = 0xAC008878u;
    if (CMP_EQ(_fa, _fb)) goto loc_0001617F; /* je: equal / zero */

loc_0001617D: ;
    ecx = eax;

loc_0001617F: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x5F4398) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5F4398;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016197u); RECOMP_ABI_CALL(0x000DA2F0u, sub_000DA2F0); /* call 0x000DA2F0 */

loc_00016197: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000161AF; /* je: equal / zero */

loc_0001619F: ;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x1C) = 0xAC008878u;
    MEM32(esp + 0x20) = eax;

loc_000161AF: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000161B9u); RECOMP_ABI_CALL(0x000E4DB0u, sub_000E4DB0); /* call 0x000E4DB0 */

loc_000161B9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x90;

loc_000161C3: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000161C3; /* jne: not equal / not zero */

loc_000161CD: ;
    PUSH32(esp, 0x100);
    edx = esp + 0x94;
    PUSH32(esp, edx);
    eax = edi + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000161E3u); RECOMP_ABI_CALL(0x0047D937u, sub_0047D937); /* call 0x0047D937 */

loc_000161E3: ;
    edx = MEM32(0x5E314C);
    eax = MEM32(edx + esi * 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi + 0x208;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016201u); RECOMP_ABI_CALL(0x003D0DC6u, sub_003D0DC6); /* call 0x003D0DC6 */

loc_00016201: ;
    eax = MEM32(esp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x214;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016120; /* jb: below (unsigned <) */

loc_00016214: ;
    edi = eax;

loc_00016216: ;
    PUSH32(esp, 0x160A0);
    PUSH32(esp, 0x214);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5B5B28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001622Bu); RECOMP_ABI_CALL(0x0047DD40u, sub_0047DD40); /* call 0x0047DD40 */

loc_0001622B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0001649D; /* jbe: below or equal (unsigned <=) */

loc_0001623A: ;
    edi = 0x5B5B34;
    /* nop */

loc_00016240: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp;
    MEM32(esp + 0x30) = esp;
    MEM32(esi + 0x18) = 7;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, edi);
    MEM16(esi + 4) = LO16(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016262u); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_00016262: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001626Eu); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_0001626E: ;
    edx = esp + 0x94;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001627Bu); RECOMP_ABI_CALL(0x004655C0u, sub_004655C0); /* call 0x004655C0 */

loc_0001627B: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x3A8) = ebx;
    ecx = MEM32(0x91EB2C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016291u); RECOMP_ABI_CALL(0x00468620u, sub_00468620); /* call 0x00468620 */

loc_00016291: ;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x3A4) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esp + 0x8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x8C), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000162B7; /* jb: below (unsigned <) */

loc_000162AA: ;
    eax = MEM32(esp + 0x78);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000162B4u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_000162B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000162B7: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp;
    eax = 7;
    MEM32(esp + 0x38) = esp;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, edi);
    MEM32(esp + 0xAC) = eax;
    MEM32(esp + 0xA8) = ebx;
    MEM16(esp + 0x98) = LO16(ebx);
    MEM16(esi + 4) = LO16(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000162EBu); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_000162EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000162F7u); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_000162F7: ;
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016301u); RECOMP_ABI_CALL(0x004655C0u, sub_004655C0); /* call 0x004655C0 */

loc_00016301: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x3A4) = 1;
    edx = MEM32(0x59A364);
    ecx = MEM32(0x91EB2C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016327u); RECOMP_ABI_CALL(0x00467A60u, sub_00467A60); /* call 0x00467A60 */

loc_00016327: ;
    MEM32(esp + 0x3A4) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esp + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x54), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016346; /* jb: below (unsigned <) */

loc_00016339: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016343u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00016343: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016346: ;
    eax = MEM32(edi + -12);
    ecx = MEM32(0x5E314C);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    MEM8(0x9564D0) = LO8(ebx);
    MEM32(esp + 0x58) = 7;
    MEM32(esp + 0x54) = ebx;
    MEM16(esp + 0x44) = LO16(ebx);
    edx = MEM32(ecx + eax * 4);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x88;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001637Au); RECOMP_ABI_CALL(0x003D0DC6u, sub_003D0DC6); /* call 0x003D0DC6 */

loc_0001637A: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016389u); RECOMP_ABI_CALL(0x003D08F3u, sub_003D08F3); /* call 0x003D08F3 */

loc_00016389: ;
    edx = ZX16(MEM16(esp + 0x2E));
    eax = ZX16(MEM16(esp + 0x2C));
    ecx = ZX16(MEM16(esp + 0x24));
    PUSH32(esp, edx);
    edx = ZX16(MEM16(esp + 0x2E));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esp + 0x2E));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5863C0);
    PUSH32(esp, 0x9564D0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000163B6u); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_000163B6: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000163C0;

    /* nop */

loc_000163C0: ;
    SET_LO8(ecx, MEM8(eax + 0x9564D0));
    MEM8(esp + eax + 0x90) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000163C0; /* jne: not equal / not zero */

loc_000163D2: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0x198;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000163ECu); RECOMP_ABI_CALL(0x0047D937u, sub_0047D937); /* call 0x0047D937 */

loc_000163EC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp;
    eax = esp + 0x1AC;
    MEM32(esp + 0x38) = esp;
    MEM32(esi + 0x18) = 7;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, eax);
    MEM16(esi + 4) = LO16(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016410u); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_00016410: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x1B0;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016423u); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_00016423: ;
    edx = esp + 0x74;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001642Du); RECOMP_ABI_CALL(0x004655C0u, sub_004655C0); /* call 0x004655C0 */

loc_0001642D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    MEM32(esp + 0x3A8) = 2;
    eax = MEM32(0x59A368);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x91EB2C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00016452u); RECOMP_ABI_CALL(0x00467A60u, sub_00467A60); /* call 0x00467A60 */

loc_00016452: ;
    MEM32(esp + 0x3A4) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x70), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016471; /* jb: below (unsigned <) */

loc_00016464: ;
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0001646Eu); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0001646E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016471: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x214;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x70) = 7;
    MEM32(esp + 0x6C) = ebx;
    MEM16(esp + 0x5C) = LO16(ebx);
    MEM32(esp + 0x18) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00016240; /* jb: below (unsigned <) */

loc_0001649D: ;
    eax = MEM32(0x91EB2C);
    MEM8(eax + 0x6C) = MEM8(eax + 0x6C) | 6;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x39C);
    MEM32(eax + 0x3C) = ebx;
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x394);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000164C3u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_000164C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00016240
 * Original: 0x00016240 - 0x000164CA (650 bytes, 168 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016240: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp;
    MEM32(esp + 0x30) = esp;
    MEM32(esi + 0x18) = 7;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, edi);
    MEM16(esi + 4) = LO16(ebx);
    PUSH32(esp, 0x00016262u); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_00016262: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0001626Eu); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_0001626E: ;
    edx = esp + 0x94;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001627Bu); RECOMP_ABI_CALL(0x004655C0u, sub_004655C0); /* call 0x004655C0 */

loc_0001627B: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x3A8) = ebx;
    ecx = MEM32(0x91EB2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016291u); RECOMP_ABI_CALL(0x00468620u, sub_00468620); /* call 0x00468620 */

loc_00016291: ;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x3A4) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esp + 0x8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x8C), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000162B7; /* jb: below (unsigned <) */

loc_000162AA: ;
    eax = MEM32(esp + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000162B4u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_000162B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000162B7: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp;
    eax = 7;
    MEM32(esp + 0x38) = esp;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, edi);
    MEM32(esp + 0xAC) = eax;
    MEM32(esp + 0xA8) = ebx;
    MEM16(esp + 0x98) = LO16(ebx);
    MEM16(esi + 4) = LO16(ebx);
    PUSH32(esp, 0x000162EBu); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_000162EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000162F7u); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_000162F7: ;
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00016301u); RECOMP_ABI_CALL(0x004655C0u, sub_004655C0); /* call 0x004655C0 */

loc_00016301: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x3A4) = 1;
    edx = MEM32(0x59A364);
    ecx = MEM32(0x91EB2C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016327u); RECOMP_ABI_CALL(0x00467A60u, sub_00467A60); /* call 0x00467A60 */

loc_00016327: ;
    MEM32(esp + 0x3A4) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esp + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x54), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016346; /* jb: below (unsigned <) */

loc_00016339: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00016343u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00016343: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016346: ;
    eax = MEM32(edi + -12);
    ecx = MEM32(0x5E314C);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    MEM8(0x9564D0) = LO8(ebx);
    MEM32(esp + 0x58) = 7;
    MEM32(esp + 0x54) = ebx;
    MEM16(esp + 0x44) = LO16(ebx);
    edx = MEM32(ecx + eax * 4);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x88;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001637Au); RECOMP_ABI_CALL(0x003D0DC6u, sub_003D0DC6); /* call 0x003D0DC6 */

loc_0001637A: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00016389u); RECOMP_ABI_CALL(0x003D08F3u, sub_003D08F3); /* call 0x003D08F3 */

loc_00016389: ;
    edx = ZX16(MEM16(esp + 0x2E));
    eax = ZX16(MEM16(esp + 0x2C));
    ecx = ZX16(MEM16(esp + 0x24));
    PUSH32(esp, edx);
    edx = ZX16(MEM16(esp + 0x2E));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esp + 0x2E));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5863C0);
    PUSH32(esp, 0x9564D0);
    PUSH32(esp, 0x000163B6u); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_000163B6: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000163C0;

loc_000163C0: ;
    SET_LO8(ecx, MEM8(eax + 0x9564D0));
    MEM8(esp + eax + 0x90) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000163C0; /* jne: not equal / not zero */

loc_000163D2: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0x198;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000163ECu); RECOMP_ABI_CALL(0x0047D937u, sub_0047D937); /* call 0x0047D937 */

loc_000163EC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp;
    eax = esp + 0x1AC;
    MEM32(esp + 0x38) = esp;
    MEM32(esi + 0x18) = 7;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, eax);
    MEM16(esi + 4) = LO16(ebx);
    PUSH32(esp, 0x00016410u); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_00016410: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x1B0;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00016423u); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_00016423: ;
    edx = esp + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001642Du); RECOMP_ABI_CALL(0x004655C0u, sub_004655C0); /* call 0x004655C0 */

loc_0001642D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    MEM32(esp + 0x3A8) = 2;
    eax = MEM32(0x59A368);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x91EB2C);
    PUSH32(esp, 0x00016452u); RECOMP_ABI_CALL(0x00467A60u, sub_00467A60); /* call 0x00467A60 */

loc_00016452: ;
    MEM32(esp + 0x3A4) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x70), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016471; /* jb: below (unsigned <) */

loc_00016464: ;
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001646Eu); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0001646E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016471: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x214;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x70) = 7;
    MEM32(esp + 0x6C) = ebx;
    MEM16(esp + 0x5C) = LO16(ebx);
    MEM32(esp + 0x18) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00016240; /* jb: below (unsigned <) */

loc_0001649D: ;
    eax = MEM32(0x91EB2C);
    MEM8(eax + 0x6C) = MEM8(eax + 0x6C) | 6;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x39C);
    MEM32(eax + 0x3C) = ebx;
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x394);
    PUSH32(esp, 0x000164C3u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_000164C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000162AE
 * Original: 0x000162AE - 0x000164CA (540 bytes, 141 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000162AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000162AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000162B4u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_000162B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp;
    eax = 7;
    MEM32(esp + 0x38) = esp;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, edi);
    MEM32(esp + 0xAC) = eax;
    MEM32(esp + 0xA8) = ebx;
    MEM16(esp + 0x98) = LO16(ebx);
    MEM16(esi + 4) = LO16(ebx);
    PUSH32(esp, 0x000162EBu); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_000162EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000162F7u); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_000162F7: ;
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00016301u); RECOMP_ABI_CALL(0x004655C0u, sub_004655C0); /* call 0x004655C0 */

loc_00016301: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x3A4) = 1;
    edx = MEM32(0x59A364);
    ecx = MEM32(0x91EB2C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016327u); RECOMP_ABI_CALL(0x00467A60u, sub_00467A60); /* call 0x00467A60 */

loc_00016327: ;
    MEM32(esp + 0x3A4) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esp + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x54), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016346; /* jb: below (unsigned <) */

loc_00016339: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00016343u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00016343: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016346: ;
    eax = MEM32(edi + -12);
    ecx = MEM32(0x5E314C);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    MEM8(0x9564D0) = LO8(ebx);
    MEM32(esp + 0x58) = 7;
    MEM32(esp + 0x54) = ebx;
    MEM16(esp + 0x44) = LO16(ebx);
    edx = MEM32(ecx + eax * 4);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x88;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001637Au); RECOMP_ABI_CALL(0x003D0DC6u, sub_003D0DC6); /* call 0x003D0DC6 */

loc_0001637A: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00016389u); RECOMP_ABI_CALL(0x003D08F3u, sub_003D08F3); /* call 0x003D08F3 */

loc_00016389: ;
    edx = ZX16(MEM16(esp + 0x2E));
    eax = ZX16(MEM16(esp + 0x2C));
    ecx = ZX16(MEM16(esp + 0x24));
    PUSH32(esp, edx);
    edx = ZX16(MEM16(esp + 0x2E));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esp + 0x2E));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5863C0);
    PUSH32(esp, 0x9564D0);
    PUSH32(esp, 0x000163B6u); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_000163B6: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000163C0;

    /* nop */

loc_000163C0: ;
    SET_LO8(ecx, MEM8(eax + 0x9564D0));
    MEM8(esp + eax + 0x90) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000163C0; /* jne: not equal / not zero */

loc_000163D2: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0x198;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000163ECu); RECOMP_ABI_CALL(0x0047D937u, sub_0047D937); /* call 0x0047D937 */

loc_000163EC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp;
    eax = esp + 0x1AC;
    MEM32(esp + 0x38) = esp;
    MEM32(esi + 0x18) = 7;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, eax);
    MEM16(esi + 4) = LO16(ebx);
    PUSH32(esp, 0x00016410u); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_00016410: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x1B0;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00016423u); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_00016423: ;
    edx = esp + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001642Du); RECOMP_ABI_CALL(0x004655C0u, sub_004655C0); /* call 0x004655C0 */

loc_0001642D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    MEM32(esp + 0x3A8) = 2;
    eax = MEM32(0x59A368);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x91EB2C);
    PUSH32(esp, 0x00016452u); RECOMP_ABI_CALL(0x00467A60u, sub_00467A60); /* call 0x00467A60 */

loc_00016452: ;
    MEM32(esp + 0x3A4) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x70), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016471; /* jb: below (unsigned <) */

loc_00016464: ;
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001646Eu); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0001646E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016471: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x214;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x70) = 7;
    MEM32(esp + 0x6C) = ebx;
    MEM16(esp + 0x5C) = LO16(ebx);
    MEM32(esp + 0x18) = eax;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00016240(); return; } /* jb: below (unsigned <) */

loc_0001649D: ;
    eax = MEM32(0x91EB2C);
    MEM8(eax + 0x6C) = MEM8(eax + 0x6C) | 6;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x39C);
    MEM32(eax + 0x3C) = ebx;
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x394);
    PUSH32(esp, 0x000164C3u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_000164C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00016315
 * Original: 0x00016315 - 0x000164CA (437 bytes, 115 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016315(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016315: ;
    ecx = MEM32(0x91EB2C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016327u); RECOMP_ABI_CALL(0x00467A60u, sub_00467A60); /* call 0x00467A60 */

loc_00016327: ;
    MEM32(esp + 0x3A4) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esp + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x54), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016346; /* jb: below (unsigned <) */

loc_00016339: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00016343u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00016343: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016346: ;
    eax = MEM32(edi + -12);
    ecx = MEM32(0x5E314C);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    MEM8(0x9564D0) = LO8(ebx);
    MEM32(esp + 0x58) = 7;
    MEM32(esp + 0x54) = ebx;
    MEM16(esp + 0x44) = LO16(ebx);
    edx = MEM32(ecx + eax * 4);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x88;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001637Au); RECOMP_ABI_CALL(0x003D0DC6u, sub_003D0DC6); /* call 0x003D0DC6 */

loc_0001637A: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00016389u); RECOMP_ABI_CALL(0x003D08F3u, sub_003D08F3); /* call 0x003D08F3 */

loc_00016389: ;
    edx = ZX16(MEM16(esp + 0x2E));
    eax = ZX16(MEM16(esp + 0x2C));
    ecx = ZX16(MEM16(esp + 0x24));
    PUSH32(esp, edx);
    edx = ZX16(MEM16(esp + 0x2E));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esp + 0x2E));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5863C0);
    PUSH32(esp, 0x9564D0);
    PUSH32(esp, 0x000163B6u); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_000163B6: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000163C0;

    /* nop */

loc_000163C0: ;
    SET_LO8(ecx, MEM8(eax + 0x9564D0));
    MEM8(esp + eax + 0x90) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000163C0; /* jne: not equal / not zero */

loc_000163D2: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0x198;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000163ECu); RECOMP_ABI_CALL(0x0047D937u, sub_0047D937); /* call 0x0047D937 */

loc_000163EC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp;
    eax = esp + 0x1AC;
    MEM32(esp + 0x38) = esp;
    MEM32(esi + 0x18) = 7;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, eax);
    MEM16(esi + 4) = LO16(ebx);
    PUSH32(esp, 0x00016410u); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_00016410: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x1B0;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00016423u); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_00016423: ;
    edx = esp + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001642Du); RECOMP_ABI_CALL(0x004655C0u, sub_004655C0); /* call 0x004655C0 */

loc_0001642D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    MEM32(esp + 0x3A8) = 2;
    eax = MEM32(0x59A368);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x91EB2C);
    PUSH32(esp, 0x00016452u); RECOMP_ABI_CALL(0x00467A60u, sub_00467A60); /* call 0x00467A60 */

loc_00016452: ;
    MEM32(esp + 0x3A4) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x70), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016471; /* jb: below (unsigned <) */

loc_00016464: ;
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001646Eu); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0001646E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016471: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x214;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x70) = 7;
    MEM32(esp + 0x6C) = ebx;
    MEM16(esp + 0x5C) = LO16(ebx);
    MEM32(esp + 0x18) = eax;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00016240(); return; } /* jb: below (unsigned <) */

loc_0001649D: ;
    eax = MEM32(0x91EB2C);
    MEM8(eax + 0x6C) = MEM8(eax + 0x6C) | 6;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x39C);
    MEM32(eax + 0x3C) = ebx;
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x394);
    PUSH32(esp, 0x000164C3u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_000164C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0001642D
 * Original: 0x0001642D - 0x000164CA (157 bytes, 39 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001642D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001642D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    MEM32(esp + 0x3A8) = 2;
    eax = MEM32(0x59A368);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x91EB2C);
    PUSH32(esp, 0x00016452u); RECOMP_ABI_CALL(0x00467A60u, sub_00467A60); /* call 0x00467A60 */

loc_00016452: ;
    MEM32(esp + 0x3A4) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x70), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016471; /* jb: below (unsigned <) */

loc_00016464: ;
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001646Eu); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0001646E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016471: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x214;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x70) = 7;
    MEM32(esp + 0x6C) = ebx;
    MEM16(esp + 0x5C) = LO16(ebx);
    MEM32(esp + 0x18) = eax;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00016240(); return; } /* jb: below (unsigned <) */

loc_0001649D: ;
    eax = MEM32(0x91EB2C);
    MEM8(eax + 0x6C) = MEM8(eax + 0x6C) | 6;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x39C);
    MEM32(eax + 0x3C) = ebx;
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x394);
    PUSH32(esp, 0x000164C3u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_000164C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000164C5
 * Original: 0x000164C5 - 0x000164CA (5 bytes, 4 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000164C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000164C5: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000164D0
 * Original: 0x000164D0 - 0x0001664D (381 bytes, 102 insns)
 * Folder: unsorted (none)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000164D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000164D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x48CACB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x628) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x628;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x596CA0);
    ecx = MEM32(0x5E314C);
    MEM32(esp + 0x624) = eax;
    eax = MEM32(esp + 0x638);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x214);
    eax = MEM32(eax + 0x5B5B28);
    edx = MEM32(ecx + eax * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x94);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    edi = edi & 0x3F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, 0xB004F7D);
    PUSH32(esp, 0x00016530u); RECOMP_ABI_CALL(0x000E4E20u, sub_000E4E20); /* call 0x000E4E20 */

loc_00016530: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001653Au); RECOMP_ABI_CALL(0x000E4DB0u, sub_000E4DB0); /* call 0x000E4DB0 */

loc_0001653A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x34;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016543: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016543; /* jne: not equal / not zero */

loc_0001654D: ;
    PUSH32(esp, 0x200);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x23C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016564u); RECOMP_ABI_CALL(0x0047D937u, sub_0047D937); /* call 0x0047D937 */

loc_00016564: ;
    ecx = MEM32(esp + 0x658);
    PUSH32(esp, 0x57DC34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00016576u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00016576: ;
    ebp = MEM32(eax + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp;
    edx = esp + 0x250;
    MEM32(esp + 0x2C) = esp;
    MEM32(esi + 0x18) = 7;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, edx);
    MEM16(esi + 4) = LO16(ebx);
    PUSH32(esp, 0x0001659Du); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_0001659D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x254;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000165B0u); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_000165B0: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000165BAu); RECOMP_ABI_CALL(0x004655C0u, sub_004655C0); /* call 0x004655C0 */

loc_000165BA: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ebp + 0xC;
    MEM32(esp + 0x64C) = ebx;
    PUSH32(esp, 0x000165D0u); RECOMP_ABI_CALL(0x00013F90u, sub_00013F90); /* call 0x00013F90 */

loc_000165D0: ;
    MEM32(esp + 0x640) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000165EF; /* jb: below (unsigned <) */

loc_000165E2: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000165ECu); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_000165EC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000165EF: ;
    eax = MEM32(esp + 0x64C);
    PUSH32(esp, 0x57DC44);
    PUSH32(esp, eax);
    MEM32(esp + 0x38) = 7;
    MEM32(esp + 0x34) = ebx;
    MEM16(esp + 0x24) = LO16(ebx);
    PUSH32(esp, 0x00016612u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00016612: ;
    ecx = MEM32(0x91EB3C);
    eax = MEM32(eax + 0x28);
    edx = ecx + edi + -1;
    ecx = MEM32(eax + 8);
    MEM32(ecx + 0x28) = edx;
    ecx = MEM32(esp + 0x640);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x63C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00016642u); RECOMP_ABI_CALL(0x0048171Au, sub_0048171A); /* call 0x0048171A */

loc_00016642: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x634) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x634;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00016650
 * Original: 0x00016650 - 0x0001667B (43 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016650: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = 1;
    PUSH32(esp, 0x0001665Du); RECOMP_ABI_CALL(0x00013A80u, sub_00013A80); /* call 0x00013A80 */

loc_0001665D: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x214);
    eax = MEM32(esi + 0x5B5B2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001666Fu); RECOMP_ABI_CALL(0x00013870u, sub_00013870); /* call 0x00013870 */

loc_0001666F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00016676u); RECOMP_ABI_CALL(0x0045B070u, sub_0045B070); /* call 0x0045B070 */

loc_00016676: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016680
 * Original: 0x00016680 - 0x000166B1 (49 bytes, 19 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016680: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = 7;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, edi);
    MEM16(esi + 4) = LO16(eax);
    PUSH32(esp, 0x0001669Eu); RECOMP_ABI_CALL(0x0047D978u, sub_0047D978); /* call 0x0047D978 */

loc_0001669E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000166AAu); RECOMP_ABI_CALL(0x00013E90u, sub_00013E90); /* call 0x00013E90 */

loc_000166AA: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000166C0
 * Original: 0x000166C0 - 0x000166DF (31 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000166C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000166C0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000166C8; /* jne: not equal / not zero */

loc_000166C7: ;
    esp += 4; return; /* ret */

loc_000166C8: ;
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000166E0
 * Original: 0x000166E0 - 0x00016711 (49 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000166E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000166E0: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000166E7u); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_000166E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001670E; /* je: equal / zero */

loc_000166EE: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x57D6C0;
    MEM32(eax) = 0x57FA34;
    MEM32(eax + 0xC) = 0x57F850;
    esp += 4; return; /* ret */

loc_0001670E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00016720
 * Original: 0x00016720 - 0x00016743 (35 bytes, 11 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00016720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016720: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00016727u); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_00016727: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016740; /* je: equal / zero */

loc_0001672E: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax) = 0x57FA1C;
    esp += 4; return; /* ret */

loc_00016740: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00016750
 * Original: 0x00016750 - 0x0001679A (74 bytes, 24 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016750: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x81 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016795; /* jne: not equal / not zero */

loc_0001675C: ;
    eax = MEM32(0x5B3314);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016795; /* jne: not equal / not zero */

loc_00016765: ;
    PUSH32(esp, 0x0001676Au); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_0001676A: ;
    eax = MEM32(0x952CA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_00016786; /* je: equal / zero */

loc_00016777: ;
    PUSH32(esp, 0x17);
    PUSH32(esp, 0x0001677Eu); RECOMP_ABI_CALL(0x0045AF40u, sub_0045AF40); /* call 0x0045AF40 */

loc_0001677E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00016786: ;
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x0001678Du); RECOMP_ABI_CALL(0x0045AF40u, sub_0045AF40); /* call 0x0045AF40 */

loc_0001678D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00016795: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000167A0
 * Original: 0x000167A0 - 0x000168B0 (272 bytes, 107 insns)
 * Folder: unsorted (none)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000167A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000167A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 7);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x57DC74);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x000167BFu); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_000167BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000167D2; /* jne: not equal / not zero */

loc_000167C3: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x000167CDu); RECOMP_ABI_CALL(0x0045AF40u, sub_0045AF40); /* call 0x0045AF40 */

loc_000167CD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);

loc_000167D2: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 8);
    PUSH32(esp, 0x57DC7C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000167E6u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_000167E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000167F9; /* jne: not equal / not zero */

loc_000167EA: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000167F4u); RECOMP_ABI_CALL(0x0045AF40u, sub_0045AF40); /* call 0x0045AF40 */

loc_000167F4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);

loc_000167F9: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 7);
    PUSH32(esp, 0x57DC88);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0001680Du); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_0001680D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001681F; /* jne: not equal / not zero */

loc_00016811: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001681Au); RECOMP_ABI_CALL(0x0045AF40u, sub_0045AF40); /* call 0x0045AF40 */

loc_0001681A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);

loc_0001681F: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x57DC90);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00016833u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00016833: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016846; /* jne: not equal / not zero */

loc_00016837: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00016841u); RECOMP_ABI_CALL(0x0045AF40u, sub_0045AF40); /* call 0x0045AF40 */

loc_00016841: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);

loc_00016846: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x57DCA0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0001685Au); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_0001685A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001686D; /* jne: not equal / not zero */

loc_0001685E: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x00016868u); RECOMP_ABI_CALL(0x0045AF40u, sub_0045AF40); /* call 0x0045AF40 */

loc_00016868: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);

loc_0001686D: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 8);
    PUSH32(esp, 0x57DCAC);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00016881u); RECOMP_ABI_CALL(0x00012180u, sub_00012180); /* call 0x00012180 */

loc_00016881: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000168A0; /* jne: not equal / not zero */

loc_00016885: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0001688Fu); RECOMP_ABI_CALL(0x0045AF40u, sub_0045AF40); /* call 0x0045AF40 */

loc_0001688F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00016899u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_00016899: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000168A0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000168A9; /* je: equal / zero */

loc_000168A4: ;
    PUSH32(esp, 0x000168A9u); RECOMP_ABI_CALL(0x0045AEF0u, sub_0045AEF0); /* call 0x0045AEF0 */

loc_000168A9: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000168B0
 * Original: 0x000168B0 - 0x000168BA (10 bytes, 3 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000168B0(void)
{

loc_000168B0: ;
    PUSH32(esp, 0x000168B5u); RECOMP_ABI_CALL(0x0045AE90u, sub_0045AE90); /* call 0x0045AE90 */

loc_000168B5: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000168BA
 * Original: 0x000168BA - 0x000168BB (1 bytes, 1 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000168BA(void)
{

loc_000168BA: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000168BB
 * Original: 0x000168BB - 0x000168C0 (5 bytes, 5 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000168BB(void)
{

loc_000168BB: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000168C0
 * Original: 0x000168C0 - 0x00016ABB (507 bytes, 165 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000168C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000168C0: ;
    PUSH32(esp, ecx);
    MEM32(esp) = ecx;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000168D4u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_000168D4: ;
    PUSH32(esp, 0x57DCA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000168DFu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000168DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000168EF; /* je: equal / zero */

loc_000168E6: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x000168EFu); RECOMP_ABI_CALL(0x004617B0u, sub_004617B0); /* call 0x004617B0 */

loc_000168EF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x57DCA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016901u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00016901: ;
    MEM8(eax + 4) = 0;
    eax = MEM32(0x91EB44);
    MEM8(eax + 0x1E) = 0;
    eax = MEM32(0x91EB44);
    SET_LO8(ecx, MEM8(eax + 0x23));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000169AE; /* je: equal / zero */

loc_00016921: ;
    ecx = MEM32(0x5B35F4);
    MEM8(eax + 0x23) = 0;
    eax = MEM32(0x91EB44);
    esi = eax + 0xC;
    edi = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    ebx = ecx + 0x10;
    if (CMP_NE(_fa, _fb)) goto loc_00016955; /* jne: not equal / not zero */

loc_0001693D: ;
    eax = MEM32(0x59A370);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0001694Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001694Au); } /* indirect call */
    }

loc_0001694D: ;
    ecx = MEM32(0x5B35F4);
    MEM32(esi) = eax;

loc_00016955: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001696F; /* jne: not equal / not zero */

loc_0001695C: ;
    eax = MEM32(0x59A378);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0001696Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016969u); } /* indirect call */
    }

loc_0001696C: ;
    MEM32(edi + 0x14) = eax;

loc_0001696F: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00016978u); RECOMP_ABI_CALL(0x00017570u, sub_00017570); /* call 0x00017570 */

loc_00016978: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016980; /* jne: not equal / not zero */

loc_0001697C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00016992;

loc_00016980: ;
    ecx = MEM32(0x59A3B0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001698Du); RECOMP_ABI_CALL(0x00460650u, sub_00460650); /* call 0x00460650 */

loc_0001698D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_00016992: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0001699Cu); RECOMP_ABI_CALL(0x00465020u, sub_00465020); /* call 0x00465020 */

loc_0001699C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000169A2u); RECOMP_ABI_CALL(0x004603B0u, sub_004603B0); /* call 0x004603B0 */

loc_000169A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000169AE: ;
    PUSH32(esp, 0x000169B3u); RECOMP_ABI_CALL(0x0045ADF0u, sub_0045ADF0); /* call 0x0045ADF0 */

loc_000169B3: ;
    eax = MEM32(0x91EB44);
    SET_LO8(ecx, MEM8(eax + 0x21));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edi = 1;
    MEM32(0x91EF38) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000169D7; /* je: equal / zero */

loc_000169CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax + 0x21) = 0;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000169D7: ;
    SET_LO8(eax, MEM8(0x91F2A3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000169FA; /* jne: not equal / not zero */

loc_000169E0: ;
    SET_LO8(eax, MEM8(0x91F2A4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000169F3; /* jne: not equal / not zero */

loc_000169E9: ;
    eax = 0x91F28C;
    PUSH32(esp, 0x000169F3u); RECOMP_ABI_CALL(0x0001B340u, sub_0001B340); /* call 0x0001B340 */

loc_000169F3: ;
    MEM8(0x91F2A3) = 1;

loc_000169FA: ;
    SET_LO8(eax, MEM8(0x91EB40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016A37; /* je: equal / zero */

loc_00016A03: ;
    edx = MEM32(0x5B3310);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8C);
    _fa = (uint32_t)(MEM32(edx + 0x5B33A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x5B33A8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016A30; /* jne: not equal / not zero */

loc_00016A18: ;
    PUSH32(esp, edi);
    MEM32(0x91ED48) = edi;
    PUSH32(esp, 0x00016A24u); RECOMP_ABI_CALL(0x0045B070u, sub_0045B070); /* call 0x0045B070 */

loc_00016A24: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00016A30: ;
    MEM8(0x91EB40) = 0;

loc_00016A37: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00016A3Du); RECOMP_ABI_CALL(0x000D6830u, sub_000D6830); /* call 0x000D6830 */

loc_00016A3D: ;
    PUSH32(esp, 0x57DC74);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x00016A4Au); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00016A4A: ;
    PUSH32(esp, 0x57DC7C);
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0x00016A57u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00016A57: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    ecx = edi;
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016A6Du); RECOMP_ABI_CALL(0x004617B0u, sub_004617B0); /* call 0x004617B0 */

loc_00016A6D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(ebx, MEM8(ebp + 0xD0));
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esp + 0x18));
    MEM8(ebp + 0xD0) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 0xD0));
    SET_LO8(edx, MEM8(edi + 0xD0));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(edi + 0xD0) = LO8(edx);
    PUSH32(esp, 0x00016AA8u); RECOMP_ABI_CALL(0x00016AC0u, sub_00016AC0); /* call 0x00016AC0 */

loc_00016AA8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016AAEu); RECOMP_ABI_CALL(0x004603B0u, sub_004603B0); /* call 0x004603B0 */

loc_00016AAE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000168CC
 * Original: 0x000168CC - 0x00016ABB (495 bytes, 161 insns)
 * Folder: unsorted (none)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000168CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000168CC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000168D4u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_000168D4: ;
    PUSH32(esp, 0x57DCA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000168DFu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_000168DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000168EF; /* je: equal / zero */

loc_000168E6: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x000168EFu); RECOMP_ABI_CALL(0x004617B0u, sub_004617B0); /* call 0x004617B0 */

loc_000168EF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x57DCA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016901u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00016901: ;
    MEM8(eax + 4) = 0;
    eax = MEM32(0x91EB44);
    MEM8(eax + 0x1E) = 0;
    eax = MEM32(0x91EB44);
    SET_LO8(ecx, MEM8(eax + 0x23));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000169AE; /* je: equal / zero */

loc_00016921: ;
    ecx = MEM32(0x5B35F4);
    MEM8(eax + 0x23) = 0;
    eax = MEM32(0x91EB44);
    esi = eax + 0xC;
    edi = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    ebx = ecx + 0x10;
    if (CMP_NE(_fa, _fb)) goto loc_00016955; /* jne: not equal / not zero */

loc_0001693D: ;
    eax = MEM32(0x59A370);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0001694Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001694Au); } /* indirect call */
    }

loc_0001694D: ;
    ecx = MEM32(0x5B35F4);
    MEM32(esi) = eax;

loc_00016955: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001696F; /* jne: not equal / not zero */

loc_0001695C: ;
    eax = MEM32(0x59A378);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0001696Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016969u); } /* indirect call */
    }

loc_0001696C: ;
    MEM32(edi + 0x14) = eax;

loc_0001696F: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00016978u); RECOMP_ABI_CALL(0x00017570u, sub_00017570); /* call 0x00017570 */

loc_00016978: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016980; /* jne: not equal / not zero */

loc_0001697C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00016992;

loc_00016980: ;
    ecx = MEM32(0x59A3B0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001698Du); RECOMP_ABI_CALL(0x00460650u, sub_00460650); /* call 0x00460650 */

loc_0001698D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_00016992: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0001699Cu); RECOMP_ABI_CALL(0x00465020u, sub_00465020); /* call 0x00465020 */

loc_0001699C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000169A2u); RECOMP_ABI_CALL(0x004603B0u, sub_004603B0); /* call 0x004603B0 */

loc_000169A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000169AE: ;
    PUSH32(esp, 0x000169B3u); RECOMP_ABI_CALL(0x0045ADF0u, sub_0045ADF0); /* call 0x0045ADF0 */

loc_000169B3: ;
    eax = MEM32(0x91EB44);
    SET_LO8(ecx, MEM8(eax + 0x21));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edi = 1;
    MEM32(0x91EF38) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000169D7; /* je: equal / zero */

loc_000169CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax + 0x21) = 0;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000169D7: ;
    SET_LO8(eax, MEM8(0x91F2A3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000169FA; /* jne: not equal / not zero */

loc_000169E0: ;
    SET_LO8(eax, MEM8(0x91F2A4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000169F3; /* jne: not equal / not zero */

loc_000169E9: ;
    eax = 0x91F28C;
    PUSH32(esp, 0x000169F3u); RECOMP_ABI_CALL(0x0001B340u, sub_0001B340); /* call 0x0001B340 */

loc_000169F3: ;
    MEM8(0x91F2A3) = 1;

loc_000169FA: ;
    SET_LO8(eax, MEM8(0x91EB40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016A37; /* je: equal / zero */

loc_00016A03: ;
    edx = MEM32(0x5B3310);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8C);
    _fa = (uint32_t)(MEM32(edx + 0x5B33A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x5B33A8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016A30; /* jne: not equal / not zero */

loc_00016A18: ;
    PUSH32(esp, edi);
    MEM32(0x91ED48) = edi;
    PUSH32(esp, 0x00016A24u); RECOMP_ABI_CALL(0x0045B070u, sub_0045B070); /* call 0x0045B070 */

loc_00016A24: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00016A30: ;
    MEM8(0x91EB40) = 0;

loc_00016A37: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00016A3Du); RECOMP_ABI_CALL(0x000D6830u, sub_000D6830); /* call 0x000D6830 */

loc_00016A3D: ;
    PUSH32(esp, 0x57DC74);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x00016A4Au); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00016A4A: ;
    PUSH32(esp, 0x57DC7C);
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0x00016A57u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00016A57: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    ecx = edi;
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016A6Du); RECOMP_ABI_CALL(0x004617B0u, sub_004617B0); /* call 0x004617B0 */

loc_00016A6D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(ebx, MEM8(ebp + 0xD0));
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esp + 0x18));
    MEM8(ebp + 0xD0) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 0xD0));
    SET_LO8(edx, MEM8(edi + 0xD0));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(edi + 0xD0) = LO8(edx);
    PUSH32(esp, 0x00016AA8u); RECOMP_ABI_CALL(0x00016AC0u, sub_00016AC0); /* call 0x00016AC0 */

loc_00016AA8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016AAEu); RECOMP_ABI_CALL(0x004603B0u, sub_004603B0); /* call 0x004603B0 */

loc_00016AAE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00016ABB
 * Original: 0x00016ABB - 0x00016AC0 (5 bytes, 5 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016ABB(void)
{

loc_00016ABB: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00016AC0
 * Original: 0x00016AC0 - 0x00016B62 (162 bytes, 52 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016AC0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x57DCAC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016ACCu); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00016ACC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00016AD4u); RECOMP_ABI_CALL(0x000304B0u, sub_000304B0); /* call 0x000304B0 */

loc_00016AD4: ;
    _fa = (uint32_t)(MEM32(eax + 0x2A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2A8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016B05; /* jne: not equal / not zero */

loc_00016ADD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00016AE3u); RECOMP_ABI_CALL(0x000304B0u, sub_000304B0); /* call 0x000304B0 */

loc_00016AE3: ;
    ebx = MEM32(eax + 0x90);
    ebx = ebx >> 0x11;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x00016AF4u); RECOMP_ABI_CALL(0x000304B0u, sub_000304B0); /* call 0x000304B0 */

loc_00016AF4: ;
    SET_LO8(eax, MEM8(eax + 0x92));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00016B0C; /* jne: not equal / not zero */

loc_00016B01: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016B47; /* jne: not equal / not zero */

loc_00016B05: ;
    PUSH32(esp, 0x57DCB8);
    goto loc_00016B1C;

loc_00016B0C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016B17; /* je: equal / zero */

loc_00016B10: ;
    PUSH32(esp, 0x57DCDC);
    goto loc_00016B1C;

loc_00016B17: ;
    PUSH32(esp, 0x57DCC4);

loc_00016B1C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016B22u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00016B22: ;
    eax = MEM32(eax + 0x28);
    ecx = MEM32(eax + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00016B4E; /* jb: below (unsigned <) */

loc_00016B33: ;
    eax = MEM32(eax + 4);
    edi = eax;
    PUSH32(esp, 0x57DCAC);
    PUSH32(esp, 0x00016B42u); RECOMP_ABI_CALL(0x00013DF0u, sub_00013DF0); /* call 0x00013DF0 */

loc_00016B42: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00016B47: ;
    PUSH32(esp, 0x57DCD0);
    goto loc_00016B1C;

loc_00016B4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x57DCAC);
    PUSH32(esp, 0x00016B5Du); RECOMP_ABI_CALL(0x00013DF0u, sub_00013DF0); /* call 0x00013DF0 */

loc_00016B5D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016B5D
 * Original: 0x00016B5D - 0x00016B62 (5 bytes, 3 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016B5D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016B5D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016B70
 * Original: 0x00016B70 - 0x00016BA4 (52 bytes, 16 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016B70: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(0x59A36C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x59A36C), 0x1E (32-bit) */
    MEM32(esp) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00016B98; /* jne: not equal / not zero */

loc_00016B7D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x00016B87u); RECOMP_ABI_CALL(0x00016AC0u, sub_00016AC0); /* call 0x00016AC0 */

loc_00016B87: ;
    MEM32(0x59A36C) = 0;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_00016B98: ;
    MEM32(0x59A36C) = MEM32(0x59A36C) + 1;
    _fa = (uint32_t)(MEM32(0x59A36C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00016BB0
 * Original: 0x00016BB0 - 0x00016C4D (157 bytes, 50 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016BB0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x48C8A8);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 0x00016BD0u); RECOMP_ABI_CALL(0x00462A40u, sub_00462A40); /* call 0x00462A40 */

loc_00016BD0: ;
    MEM32(esi + 4) = eax;
    MEM8(eax + 0x2D) = 1;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = eax;
    MEM32(esi + 8) = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM8(esi + 0x1D) = LO8(ebx);
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM8(esi + 0x1F) = LO8(ebx);
    MEM8(esi + 0x20) = LO8(ebx);
    MEM8(esi + 0x21) = LO8(ebx);
    MEM8(esi + 0x22) = LO8(ebx);
    MEM8(esi + 0x23) = LO8(ebx);
    PUSH32(esp, 0x00016C0Eu); RECOMP_ABI_CALL(0x00018B50u, sub_00018B50); /* call 0x00018B50 */

loc_00016C0E: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x28) = eax;
    MEM8(eax + 0x15) = 1;
    eax = MEM32(esi + 0x28);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 0x28);
    MEM32(eax) = eax;
    eax = MEM32(esi + 0x28);
    MEM32(eax + 8) = eax;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00016BC5
 * Original: 0x00016BC5 - 0x00016C4D (136 bytes, 45 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016BC5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016BC5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 0x00016BD0u); RECOMP_ABI_CALL(0x00462A40u, sub_00462A40); /* call 0x00462A40 */

loc_00016BD0: ;
    MEM32(esi + 4) = eax;
    MEM8(eax + 0x2D) = 1;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = eax;
    MEM32(esi + 8) = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM8(esi + 0x1D) = LO8(ebx);
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM8(esi + 0x1F) = LO8(ebx);
    MEM8(esi + 0x20) = LO8(ebx);
    MEM8(esi + 0x21) = LO8(ebx);
    MEM8(esi + 0x22) = LO8(ebx);
    MEM8(esi + 0x23) = LO8(ebx);
    PUSH32(esp, 0x00016C0Eu); RECOMP_ABI_CALL(0x00018B50u, sub_00018B50); /* call 0x00018B50 */

loc_00016C0E: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x28) = eax;
    MEM8(eax + 0x15) = 1;
    eax = MEM32(esi + 0x28);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 0x28);
    MEM32(eax) = eax;
    eax = MEM32(esi + 0x28);
    MEM32(eax + 8) = eax;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00016C50
 * Original: 0x00016C50 - 0x00016C7C (44 bytes, 20 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016C50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016C65u); RECOMP_ABI_CALL(0x00017FA0u, sub_00017FA0); /* call 0x00017FA0 */

loc_00016C65: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00016C6Eu); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00016C6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016C80
 * Original: 0x00016C80 - 0x00016CAC (44 bytes, 20 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016C80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016C95u); RECOMP_ABI_CALL(0x00018210u, sub_00018210); /* call 0x00018210 */

loc_00016C95: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00016C9Eu); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00016C9E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016CB0
 * Original: 0x00016CB0 - 0x00016D49 (153 bytes, 51 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016CB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x48CB33);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = edi;
    MEM32(esp + 0x18) = 1;
    PUSH32(esp, 0x00016CDCu); RECOMP_ABI_CALL(0x00017440u, sub_00017440); /* call 0x00017440 */

loc_00016CDC: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x18) = LO8(ebx);
    eax = MEM32(edi + 0x28);
    ecx = MEM32(eax);
    esi = edi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016CF6u); RECOMP_ABI_CALL(0x00018210u, sub_00018210); /* call 0x00018210 */

loc_00016CF6: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00016CFFu); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00016CFF: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    esi = edi;
    PUSH32(esp, 0x00016D23u); RECOMP_ABI_CALL(0x00017FA0u, sub_00017FA0); /* call 0x00017FA0 */

loc_00016D23: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00016D2Cu); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00016D2C: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00016D50
 * Original: 0x00016D50 - 0x00016D9C (76 bytes, 25 insns)
 * Folder: unsorted (none)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016D50: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x00016D58u); RECOMP_ABI_CALL(0x00016DA0u, sub_00016DA0); /* call 0x00016DA0 */

loc_00016D58: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016D79; /* jne: not equal / not zero */

loc_00016D5F: ;
    edx = MEM32(0x59A370);
    ecx = MEM32(0x5B35F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00016D76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016D73u); } /* indirect call */
    }

loc_00016D76: ;
    MEM32(esi + 0xC) = eax;

loc_00016D79: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016D9A; /* jne: not equal / not zero */

loc_00016D80: ;
    edx = MEM32(0x59A378);
    ecx = MEM32(0x5B35F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00016D97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016D94u); } /* indirect call */
    }

loc_00016D97: ;
    MEM32(esi + 0x14) = eax;

loc_00016D9A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016DA0
 * Original: 0x00016DA0 - 0x00017440 (1696 bytes, 566 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016DA0(void)
{

loc_00016DA0: ;
    PUSH32(esp, 0x17);
    PUSH32(esp, 1);
    PUSH32(esp, 0x19E00);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016DAFu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016DAF: ;
    PUSH32(esp, 0x17);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19E40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016DBEu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016DBE: ;
    PUSH32(esp, 0x16);
    PUSH32(esp, 1);
    PUSH32(esp, 0x14280);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016DCDu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016DCD: ;
    PUSH32(esp, 0x16);
    PUSH32(esp, 0);
    PUSH32(esp, 0x142C0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016DDCu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016DDC: ;
    PUSH32(esp, 9);
    PUSH32(esp, 1);
    PUSH32(esp, 0x166E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016DEBu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016DEB: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0);
    PUSH32(esp, 0x16720);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016DFAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016DFA: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 1);
    PUSH32(esp, 0x156C0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E09u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E09: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0);
    PUSH32(esp, 0x15700);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E18u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E18: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1BCE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E27u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E27: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1BD20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E36u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E36: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x19B50);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E45u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E45: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19CC0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E54u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E54: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    PUSH32(esp, 0x14ED0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E63u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E63: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E72u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E72: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12D00);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E81u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E81: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12DD0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E90u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E90: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12060);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E9Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E9F: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016EAEu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016EAE: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1C3A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016EBDu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016EBD: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C3E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016ECCu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016ECC: ;
    PUSH32(esp, 0x13);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12D00);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016EDBu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016EDB: ;
    PUSH32(esp, 0x13);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12D40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016EEAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016EEA: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12D00);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016EF9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016EF9: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12D70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F08u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F08: ;
    PUSH32(esp, 0x15);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12D00);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F17u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F17: ;
    PUSH32(esp, 0x15);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12DA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F26u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F26: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 1);
    PUSH32(esp, 0x14CB0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F35u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F35: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14CF0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F44u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F44: ;
    PUSH32(esp, 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x260F0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F53u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F53: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x26130);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F62u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F62: ;
    PUSH32(esp, 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x179E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F71u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F71: ;
    PUSH32(esp, 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x17A80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F80u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F80: ;
    PUSH32(esp, 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x17AC0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F8Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F8F: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 1);
    PUSH32(esp, 0x22400);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F9Eu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F9E: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 0);
    PUSH32(esp, 0x22440);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016FADu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016FAD: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 1);
    PUSH32(esp, 0x179E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016FBCu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016FBC: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 1);
    PUSH32(esp, 0x17A80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016FCBu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016FCB: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 1);
    PUSH32(esp, 0x17AC0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016FDAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016FDA: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, 0x262E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016FE9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016FE9: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x26320);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016FF8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016FF8: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 1);
    PUSH32(esp, 0x25A30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017007u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017007: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x25A70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017016u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017016: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1C9F0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017025u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017025: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1CA30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017034u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017034: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 1);
    PUSH32(esp, 0x25AF0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017043u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017043: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0);
    PUSH32(esp, 0x25B30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017052u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017052: ;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0);
    PUSH32(esp, 0x23D80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017061u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017061: ;
    PUSH32(esp, 0x22);
    PUSH32(esp, 1);
    PUSH32(esp, 0x23D40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017070u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017070: ;
    PUSH32(esp, 0x23);
    PUSH32(esp, 1);
    PUSH32(esp, 0x23D00);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001707Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001707F: ;
    PUSH32(esp, 0x23);
    PUSH32(esp, 0);
    PUSH32(esp, 0x23DB0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001708Eu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001708E: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 1);
    PUSH32(esp, 0x22DF0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001709Du); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001709D: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x22E30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000170ACu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000170AC: ;
    PUSH32(esp, 0x25);
    PUSH32(esp, 1);
    PUSH32(esp, 0x21B90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000170BBu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000170BB: ;
    PUSH32(esp, 0x25);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21BD0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000170CAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000170CA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12200);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000170D9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000170D9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12240);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000170E8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000170E8: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1BEA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000170F7u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000170F7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1BEE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017106u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017106: ;
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1BF10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017115u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017115: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1BF50);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017124u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017124: ;
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 0x132D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017133u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017133: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x13310);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017142u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017142: ;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x158D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017151u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017151: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x15910);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017160u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017160: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x15AF0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001716Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001716F: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x15B30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001717Eu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001717E: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x15B60);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001718Du); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001718D: ;
    PUSH32(esp, 0x27);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1A520);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001719Cu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001719C: ;
    PUSH32(esp, 0x27);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A560);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171ABu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171AB: ;
    PUSH32(esp, 0x27);
    PUSH32(esp, 2);
    PUSH32(esp, 0x15B60);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171BAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171BA: ;
    PUSH32(esp, 0x2A);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1A590);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171C9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171C9: ;
    PUSH32(esp, 0x2A);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A5D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171D8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171D8: ;
    PUSH32(esp, 0x26);
    PUSH32(esp, 1);
    PUSH32(esp, 0x15240);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171E7u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171E7: ;
    PUSH32(esp, 0x26);
    PUSH32(esp, 0);
    PUSH32(esp, 0x15280);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171F6u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171F6: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017205u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017205: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017214u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017214: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017223u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017223: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017232u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017232: ;
    PUSH32(esp, 0x2E);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017241u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017241: ;
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017250u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017250: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001725Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001725F: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001726Eu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001726E: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001727Du); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001727D: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001728Cu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001728C: ;
    PUSH32(esp, 0x31);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001729Bu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001729B: ;
    PUSH32(esp, 0x31);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172AAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172AA: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172B9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172B9: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172C8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172C8: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172D7u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172D7: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172E6u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172E6: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172F5u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172F5: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017304u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017304: ;
    PUSH32(esp, 0x35);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017313u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017313: ;
    PUSH32(esp, 0x35);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017322u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017322: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1B7D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017331u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017331: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1B810);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017340u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017340: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1D520);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001734Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001734F: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D5A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001735Eu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001735E: ;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1D560);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001736Du); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001736D: ;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D600);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001737Cu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001737C: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 1);
    PUSH32(esp, 0x21D80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001738Bu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001738B: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21DE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001739Au); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001739A: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x21E30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173A9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173A9: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21E70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173B8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173B8: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1CA70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173C7u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173C7: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1CB40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173D6u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173D6: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1CAD0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173E5u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173E5: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1CB10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173F4u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173F4: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19D40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017403u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017403: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 1);
    PUSH32(esp, 0x15070);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017412u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017412: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0);
    PUSH32(esp, 0x150B0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017421u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017421: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, 0x193E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017430u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017430: ;
    PUSH32(esp, 7);
    PUSH32(esp, 1);
    PUSH32(esp, 0x19410);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001743Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001743F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00016DD7
 * Original: 0x00016DD7 - 0x00017440 (1641 bytes, 547 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016DD7(void)
{

loc_00016DD7: ;
    PUSH32(esp, 0x00016DDCu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016DDC: ;
    PUSH32(esp, 9);
    PUSH32(esp, 1);
    PUSH32(esp, 0x166E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016DEBu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016DEB: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0);
    PUSH32(esp, 0x16720);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016DFAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016DFA: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 1);
    PUSH32(esp, 0x156C0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E09u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E09: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0);
    PUSH32(esp, 0x15700);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E18u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E18: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1BCE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E27u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E27: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1BD20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E36u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E36: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x19B50);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E45u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E45: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19CC0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E54u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E54: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    PUSH32(esp, 0x14ED0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E63u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E63: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E72u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E72: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12D00);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E81u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E81: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12DD0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E90u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E90: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12060);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E9Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E9F: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016EAEu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016EAE: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1C3A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016EBDu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016EBD: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C3E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016ECCu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016ECC: ;
    PUSH32(esp, 0x13);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12D00);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016EDBu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016EDB: ;
    PUSH32(esp, 0x13);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12D40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016EEAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016EEA: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12D00);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016EF9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016EF9: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12D70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F08u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F08: ;
    PUSH32(esp, 0x15);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12D00);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F17u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F17: ;
    PUSH32(esp, 0x15);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12DA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F26u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F26: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 1);
    PUSH32(esp, 0x14CB0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F35u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F35: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14CF0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F44u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F44: ;
    PUSH32(esp, 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x260F0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F53u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F53: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x26130);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F62u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F62: ;
    PUSH32(esp, 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x179E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F71u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F71: ;
    PUSH32(esp, 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x17A80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F80u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F80: ;
    PUSH32(esp, 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x17AC0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F8Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F8F: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 1);
    PUSH32(esp, 0x22400);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F9Eu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F9E: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 0);
    PUSH32(esp, 0x22440);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016FADu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016FAD: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 1);
    PUSH32(esp, 0x179E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016FBCu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016FBC: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 1);
    PUSH32(esp, 0x17A80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016FCBu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016FCB: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 1);
    PUSH32(esp, 0x17AC0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016FDAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016FDA: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, 0x262E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016FE9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016FE9: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x26320);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016FF8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016FF8: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 1);
    PUSH32(esp, 0x25A30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017007u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017007: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x25A70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017016u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017016: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1C9F0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017025u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017025: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1CA30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017034u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017034: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 1);
    PUSH32(esp, 0x25AF0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017043u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017043: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0);
    PUSH32(esp, 0x25B30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017052u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017052: ;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0);
    PUSH32(esp, 0x23D80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017061u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017061: ;
    PUSH32(esp, 0x22);
    PUSH32(esp, 1);
    PUSH32(esp, 0x23D40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017070u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017070: ;
    PUSH32(esp, 0x23);
    PUSH32(esp, 1);
    PUSH32(esp, 0x23D00);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001707Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001707F: ;
    PUSH32(esp, 0x23);
    PUSH32(esp, 0);
    PUSH32(esp, 0x23DB0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001708Eu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001708E: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 1);
    PUSH32(esp, 0x22DF0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001709Du); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001709D: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x22E30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000170ACu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000170AC: ;
    PUSH32(esp, 0x25);
    PUSH32(esp, 1);
    PUSH32(esp, 0x21B90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000170BBu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000170BB: ;
    PUSH32(esp, 0x25);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21BD0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000170CAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000170CA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12200);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000170D9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000170D9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12240);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000170E8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000170E8: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1BEA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000170F7u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000170F7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1BEE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017106u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017106: ;
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1BF10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017115u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017115: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1BF50);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017124u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017124: ;
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 0x132D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017133u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017133: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x13310);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017142u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017142: ;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x158D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017151u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017151: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x15910);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017160u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017160: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x15AF0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001716Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001716F: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x15B30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001717Eu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001717E: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x15B60);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001718Du); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001718D: ;
    PUSH32(esp, 0x27);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1A520);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001719Cu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001719C: ;
    PUSH32(esp, 0x27);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A560);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171ABu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171AB: ;
    PUSH32(esp, 0x27);
    PUSH32(esp, 2);
    PUSH32(esp, 0x15B60);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171BAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171BA: ;
    PUSH32(esp, 0x2A);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1A590);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171C9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171C9: ;
    PUSH32(esp, 0x2A);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A5D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171D8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171D8: ;
    PUSH32(esp, 0x26);
    PUSH32(esp, 1);
    PUSH32(esp, 0x15240);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171E7u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171E7: ;
    PUSH32(esp, 0x26);
    PUSH32(esp, 0);
    PUSH32(esp, 0x15280);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171F6u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171F6: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017205u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017205: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017214u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017214: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017223u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017223: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017232u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017232: ;
    PUSH32(esp, 0x2E);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017241u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017241: ;
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017250u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017250: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001725Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001725F: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001726Eu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001726E: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001727Du); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001727D: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001728Cu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001728C: ;
    PUSH32(esp, 0x31);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001729Bu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001729B: ;
    PUSH32(esp, 0x31);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172AAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172AA: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172B9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172B9: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172C8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172C8: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172D7u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172D7: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172E6u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172E6: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172F5u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172F5: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017304u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017304: ;
    PUSH32(esp, 0x35);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017313u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017313: ;
    PUSH32(esp, 0x35);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017322u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017322: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1B7D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017331u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017331: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1B810);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017340u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017340: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1D520);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001734Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001734F: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D5A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001735Eu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001735E: ;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1D560);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001736Du); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001736D: ;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D600);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001737Cu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001737C: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 1);
    PUSH32(esp, 0x21D80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001738Bu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001738B: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21DE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001739Au); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001739A: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x21E30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173A9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173A9: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21E70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173B8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173B8: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1CA70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173C7u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173C7: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1CB40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173D6u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173D6: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1CAD0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173E5u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173E5: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1CB10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173F4u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173F4: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19D40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017403u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017403: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 1);
    PUSH32(esp, 0x15070);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017412u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017412: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0);
    PUSH32(esp, 0x150B0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017421u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017421: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, 0x193E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017430u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017430: ;
    PUSH32(esp, 7);
    PUSH32(esp, 1);
    PUSH32(esp, 0x19410);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001743Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001743F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00016DF5
 * Original: 0x00016DF5 - 0x00017440 (1611 bytes, 537 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016DF5(void)
{

loc_00016DF5: ;
    PUSH32(esp, 0x00016DFAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016DFA: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 1);
    PUSH32(esp, 0x156C0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E09u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E09: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0);
    PUSH32(esp, 0x15700);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E18u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E18: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1BCE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E27u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E27: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1BD20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E36u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E36: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x19B50);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E45u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E45: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19CC0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E54u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E54: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    PUSH32(esp, 0x14ED0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E63u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E63: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E72u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E72: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12D00);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E81u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E81: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12DD0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E90u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E90: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12060);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016E9Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016E9F: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016EAEu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016EAE: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1C3A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016EBDu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016EBD: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C3E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016ECCu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016ECC: ;
    PUSH32(esp, 0x13);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12D00);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016EDBu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016EDB: ;
    PUSH32(esp, 0x13);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12D40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016EEAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016EEA: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12D00);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016EF9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016EF9: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12D70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F08u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F08: ;
    PUSH32(esp, 0x15);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12D00);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F17u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F17: ;
    PUSH32(esp, 0x15);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12DA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F26u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F26: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 1);
    PUSH32(esp, 0x14CB0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F35u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F35: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14CF0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F44u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F44: ;
    PUSH32(esp, 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x260F0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F53u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F53: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x26130);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F62u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F62: ;
    PUSH32(esp, 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x179E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F71u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F71: ;
    PUSH32(esp, 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x17A80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F80u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F80: ;
    PUSH32(esp, 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x17AC0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F8Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F8F: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 1);
    PUSH32(esp, 0x22400);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016F9Eu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016F9E: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 0);
    PUSH32(esp, 0x22440);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016FADu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016FAD: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 1);
    PUSH32(esp, 0x179E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016FBCu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016FBC: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 1);
    PUSH32(esp, 0x17A80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016FCBu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016FCB: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 1);
    PUSH32(esp, 0x17AC0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016FDAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016FDA: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, 0x262E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016FE9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016FE9: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x26320);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016FF8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00016FF8: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 1);
    PUSH32(esp, 0x25A30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017007u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017007: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x25A70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017016u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017016: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1C9F0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017025u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017025: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1CA30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017034u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017034: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 1);
    PUSH32(esp, 0x25AF0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017043u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017043: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0);
    PUSH32(esp, 0x25B30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017052u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017052: ;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0);
    PUSH32(esp, 0x23D80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017061u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017061: ;
    PUSH32(esp, 0x22);
    PUSH32(esp, 1);
    PUSH32(esp, 0x23D40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017070u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017070: ;
    PUSH32(esp, 0x23);
    PUSH32(esp, 1);
    PUSH32(esp, 0x23D00);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001707Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001707F: ;
    PUSH32(esp, 0x23);
    PUSH32(esp, 0);
    PUSH32(esp, 0x23DB0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001708Eu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001708E: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 1);
    PUSH32(esp, 0x22DF0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001709Du); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001709D: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x22E30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000170ACu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000170AC: ;
    PUSH32(esp, 0x25);
    PUSH32(esp, 1);
    PUSH32(esp, 0x21B90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000170BBu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000170BB: ;
    PUSH32(esp, 0x25);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21BD0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000170CAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000170CA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12200);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000170D9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000170D9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12240);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000170E8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000170E8: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1BEA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000170F7u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000170F7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1BEE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017106u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017106: ;
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1BF10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017115u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017115: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1BF50);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017124u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017124: ;
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 0x132D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017133u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017133: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x13310);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017142u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017142: ;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x158D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017151u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017151: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x15910);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017160u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017160: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x15AF0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001716Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001716F: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x15B30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001717Eu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001717E: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x15B60);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001718Du); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001718D: ;
    PUSH32(esp, 0x27);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1A520);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001719Cu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001719C: ;
    PUSH32(esp, 0x27);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A560);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171ABu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171AB: ;
    PUSH32(esp, 0x27);
    PUSH32(esp, 2);
    PUSH32(esp, 0x15B60);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171BAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171BA: ;
    PUSH32(esp, 0x2A);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1A590);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171C9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171C9: ;
    PUSH32(esp, 0x2A);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A5D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171D8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171D8: ;
    PUSH32(esp, 0x26);
    PUSH32(esp, 1);
    PUSH32(esp, 0x15240);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171E7u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171E7: ;
    PUSH32(esp, 0x26);
    PUSH32(esp, 0);
    PUSH32(esp, 0x15280);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171F6u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171F6: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017205u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017205: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017214u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017214: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017223u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017223: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017232u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017232: ;
    PUSH32(esp, 0x2E);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017241u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017241: ;
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017250u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017250: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001725Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001725F: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001726Eu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001726E: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001727Du); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001727D: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001728Cu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001728C: ;
    PUSH32(esp, 0x31);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001729Bu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001729B: ;
    PUSH32(esp, 0x31);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172AAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172AA: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172B9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172B9: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172C8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172C8: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172D7u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172D7: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172E6u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172E6: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172F5u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172F5: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017304u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017304: ;
    PUSH32(esp, 0x35);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017313u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017313: ;
    PUSH32(esp, 0x35);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017322u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017322: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1B7D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017331u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017331: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1B810);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017340u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017340: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1D520);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001734Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001734F: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D5A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001735Eu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001735E: ;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1D560);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001736Du); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001736D: ;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D600);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001737Cu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001737C: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 1);
    PUSH32(esp, 0x21D80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001738Bu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001738B: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21DE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001739Au); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001739A: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x21E30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173A9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173A9: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21E70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173B8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173B8: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1CA70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173C7u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173C7: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1CB40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173D6u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173D6: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1CAD0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173E5u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173E5: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1CB10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173F4u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173F4: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19D40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017403u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017403: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 1);
    PUSH32(esp, 0x15070);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017412u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017412: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0);
    PUSH32(esp, 0x150B0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017421u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017421: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, 0x193E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017430u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017430: ;
    PUSH32(esp, 7);
    PUSH32(esp, 1);
    PUSH32(esp, 0x19410);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001743Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001743F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001718D
 * Original: 0x0001718D - 0x00017440 (691 bytes, 231 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001718D(void)
{

loc_0001718D: ;
    PUSH32(esp, 0x27);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1A520);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001719Cu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001719C: ;
    PUSH32(esp, 0x27);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A560);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171ABu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171AB: ;
    PUSH32(esp, 0x27);
    PUSH32(esp, 2);
    PUSH32(esp, 0x15B60);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171BAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171BA: ;
    PUSH32(esp, 0x2A);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1A590);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171C9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171C9: ;
    PUSH32(esp, 0x2A);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A5D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171D8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171D8: ;
    PUSH32(esp, 0x26);
    PUSH32(esp, 1);
    PUSH32(esp, 0x15240);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171E7u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171E7: ;
    PUSH32(esp, 0x26);
    PUSH32(esp, 0);
    PUSH32(esp, 0x15280);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000171F6u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000171F6: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017205u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017205: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017214u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017214: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017223u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017223: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017232u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017232: ;
    PUSH32(esp, 0x2E);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017241u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017241: ;
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017250u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017250: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001725Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001725F: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001726Eu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001726E: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001727Du); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001727D: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001728Cu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001728C: ;
    PUSH32(esp, 0x31);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001729Bu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001729B: ;
    PUSH32(esp, 0x31);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172AAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172AA: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172B9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172B9: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172C8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172C8: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172D7u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172D7: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172E6u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172E6: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172F5u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172F5: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017304u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017304: ;
    PUSH32(esp, 0x35);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017313u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017313: ;
    PUSH32(esp, 0x35);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017322u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017322: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1B7D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017331u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017331: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1B810);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017340u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017340: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1D520);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001734Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001734F: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D5A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001735Eu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001735E: ;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1D560);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001736Du); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001736D: ;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D600);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001737Cu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001737C: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 1);
    PUSH32(esp, 0x21D80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001738Bu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001738B: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21DE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001739Au); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001739A: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x21E30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173A9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173A9: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21E70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173B8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173B8: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1CA70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173C7u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173C7: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1CB40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173D6u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173D6: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1CAD0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173E5u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173E5: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1CB10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173F4u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173F4: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19D40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017403u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017403: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 1);
    PUSH32(esp, 0x15070);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017412u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017412: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0);
    PUSH32(esp, 0x150B0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017421u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017421: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, 0x193E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017430u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017430: ;
    PUSH32(esp, 7);
    PUSH32(esp, 1);
    PUSH32(esp, 0x19410);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001743Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001743F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001727F
 * Original: 0x0001727F - 0x00017440 (449 bytes, 150 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001727F(void)
{

loc_0001727F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001728Cu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001728C: ;
    PUSH32(esp, 0x31);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001729Bu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001729B: ;
    PUSH32(esp, 0x31);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172AAu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172AA: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172B9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172B9: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172C8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172C8: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172D7u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172D7: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172E6u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172E6: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000172F5u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000172F5: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017304u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017304: ;
    PUSH32(esp, 0x35);
    PUSH32(esp, 1);
    PUSH32(esp, 0x13660);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017313u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017313: ;
    PUSH32(esp, 0x35);
    PUSH32(esp, 0);
    PUSH32(esp, 0x120A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017322u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017322: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1B7D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017331u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017331: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1B810);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017340u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017340: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1D520);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001734Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001734F: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D5A0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001735Eu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001735E: ;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1D560);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001736Du); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001736D: ;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D600);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001737Cu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001737C: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 1);
    PUSH32(esp, 0x21D80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001738Bu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001738B: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21DE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001739Au); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001739A: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x21E30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173A9u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173A9: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21E70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173B8u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173B8: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1CA70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173C7u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173C7: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1CB40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173D6u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173D6: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1CAD0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173E5u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173E5: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1CB10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000173F4u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_000173F4: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19D40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017403u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017403: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 1);
    PUSH32(esp, 0x15070);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017412u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017412: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0);
    PUSH32(esp, 0x150B0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017421u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017421: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, 0x193E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017430u); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_00017430: ;
    PUSH32(esp, 7);
    PUSH32(esp, 1);
    PUSH32(esp, 0x19410);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001743Fu); RECOMP_ABI_CALL(0x00017660u, sub_00017660); /* call 0x00017660 */

loc_0001743F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00017440
 * Original: 0x00017440 - 0x0001750E (206 bytes, 81 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017440: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 4);
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000174B4; /* je: equal / zero */

loc_00017454: ;
    esi = MEM32(ebp + 0x28);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000174A0; /* je: equal / zero */

loc_0001745D: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    MEM32(ecx) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(ecx + 4) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    MEM32(esi + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00017488; /* je: equal / zero */

loc_00017472: ;
    ebx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001747Au); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0001747A: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    eax = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00017472; /* jne: not equal / not zero */

loc_00017486: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00017488: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00017491u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00017491: ;
    PUSH32(esp, esi);
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0x0001749Au); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0001749A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x28) = ebx;

loc_000174A0: ;
    edx = esp + 0x10;
    PUSH32(esp, 0x000174A9u); RECOMP_ABI_CALL(0x00018290u, sub_00018290); /* call 0x00018290 */

loc_000174A9: ;
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017454; /* jne: not equal / not zero */

loc_000174B2: ;
    goto loc_000174B6;

loc_000174B4: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000174B6: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000174C4u); RECOMP_ABI_CALL(0x00017E40u, sub_00017E40); /* call 0x00017E40 */

loc_000174C4: ;
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(edi + 8) = ebx;
    MEM32(eax) = eax;
    eax = MEM32(edi + 4);
    PUSH32(esp, 1);
    MEM32(eax + 8) = eax;
    PUSH32(esp, 0x000174DFu); RECOMP_ABI_CALL(0x0045B070u, sub_0045B070); /* call 0x0045B070 */

loc_000174DF: ;
    esi = edi + 0xC;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 4;
    /* nop */

loc_000174F0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017502; /* je: equal / zero */

loc_000174F4: ;
    ecx = MEM32(0x5B35F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00017500u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000174FDu); } /* indirect call */
    }

loc_00017500: ;
    MEM32(esi) = ebx;

loc_00017502: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000174F0; /* jne: not equal / not zero */

loc_00017508: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0001744A
 * Original: 0x0001744A - 0x0001750E (196 bytes, 74 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001744A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001744A: ;
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000174B4; /* je: equal / zero */

loc_00017454: ;
    esi = MEM32(ebp + 0x28);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000174A0; /* je: equal / zero */

loc_0001745D: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    MEM32(ecx) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(ecx + 4) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    MEM32(esi + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00017488; /* je: equal / zero */

loc_00017472: ;
    ebx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001747Au); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0001747A: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    eax = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00017472; /* jne: not equal / not zero */

loc_00017486: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00017488: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00017491u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00017491: ;
    PUSH32(esp, esi);
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0x0001749Au); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0001749A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x28) = ebx;

loc_000174A0: ;
    edx = esp + 0x10;
    PUSH32(esp, 0x000174A9u); RECOMP_ABI_CALL(0x00018290u, sub_00018290); /* call 0x00018290 */

loc_000174A9: ;
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017454; /* jne: not equal / not zero */

loc_000174B2: ;
    goto loc_000174B6;

loc_000174B4: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000174B6: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000174C4u); RECOMP_ABI_CALL(0x00017E40u, sub_00017E40); /* call 0x00017E40 */

loc_000174C4: ;
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(edi + 8) = ebx;
    MEM32(eax) = eax;
    eax = MEM32(edi + 4);
    PUSH32(esp, 1);
    MEM32(eax + 8) = eax;
    PUSH32(esp, 0x000174DFu); RECOMP_ABI_CALL(0x0045B070u, sub_0045B070); /* call 0x0045B070 */

loc_000174DF: ;
    esi = edi + 0xC;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 4;
    /* nop */

loc_000174F0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017502; /* je: equal / zero */

loc_000174F4: ;
    ecx = MEM32(0x5B35F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00017500u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000174FDu); } /* indirect call */
    }

loc_00017500: ;
    MEM32(esi) = ebx;

loc_00017502: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000174F0; /* jne: not equal / not zero */

loc_00017508: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017510
 * Original: 0x00017510 - 0x0001756F (95 bytes, 36 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017510: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017521; /* jne: not equal / not zero */

loc_0001751A: ;
    SET_LO8(ecx, MEM8(edi + 0x1D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001756D; /* je: equal / zero */

loc_00017521: ;
    ecx = MEM32(0x5B3314);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001756D; /* jne: not equal / not zero */

loc_0001752B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001756D; /* je: equal / zero */

loc_0001752F: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = edi + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_0001754C; /* je: equal / zero */

loc_0001753A: ;
    ecx = MEM32(0x5B35F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00017546u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017543u); } /* indirect call */
    }

loc_00017546: ;
    MEM32(esi) = 0;

loc_0001754C: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0x18;
    if (CMP_EQ(_fa, _fb)) goto loc_00017568; /* je: equal / zero */

loc_00017556: ;
    ecx = MEM32(0x5B35F4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00017562u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001755Fu); } /* indirect call */
    }

loc_00017562: ;
    MEM32(esi) = 0;

loc_00017568: ;
    MEM8(edi + 0x1C) = 0;
    POP32(esp, esi);

loc_0001756D: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00017570
 * Original: 0x00017570 - 0x000175AE (62 bytes, 23 insns)
 * Folder: unsorted (none)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017570: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + esi * 4 + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000175A5; /* jne: not equal / not zero */

loc_00017580: ;
    edx = MEM32(esi * 4 + 0x59A370);
    ecx = MEM32(0x5B35F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00017598u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017595u); } /* indirect call */
    }

loc_00017598: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + esi * 4 + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000175A5; /* jne: not equal / not zero */

loc_000175A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000175A5: ;
    eax = MEM32(edi + esi * 4 + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000175B0
 * Original: 0x000175B0 - 0x00017655 (165 bytes, 57 insns)
 * Folder: unsorted (none)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000175B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000175B0: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000175D1; /* jne: not equal / not zero */

loc_000175B7: ;
    edx = MEM32(0x59A370);
    ecx = MEM32(0x5B35F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000175CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000175CBu); } /* indirect call */
    }

loc_000175CE: ;
    MEM32(esi + 0xC) = eax;

loc_000175D1: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000175F2; /* jne: not equal / not zero */

loc_000175D8: ;
    edx = MEM32(0x59A378);
    ecx = MEM32(0x5B35F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000175EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000175ECu); } /* indirect call */
    }

loc_000175EF: ;
    MEM32(esi + 0x14) = eax;

loc_000175F2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 9 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00017621; /* jae: above or equal (unsigned >=) */

loc_000175F7: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001761C; /* jne: not equal / not zero */

loc_000175FE: ;
    edx = MEM32(0x59A370);
    ecx = MEM32(0x5B35F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x57DCEC);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00017615u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017612u); } /* indirect call */
    }

loc_00017615: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00017640; /* je: equal / zero */

loc_0001761C: ;
    eax = MEM32(esi + 0xC);
    goto loc_0001763C;

loc_00017621: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x18 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0001762A; /* jae: above or equal (unsigned >=) */

loc_00017626: ;
    PUSH32(esp, 1);
    goto loc_00017635;

loc_0001762A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x26 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00017633; /* jae: above or equal (unsigned >=) */

loc_0001762F: ;
    PUSH32(esp, 3);
    goto loc_00017635;

loc_00017633: ;
    PUSH32(esp, 2);

loc_00017635: ;
    ecx = esi;
    PUSH32(esp, 0x0001763Cu); RECOMP_ABI_CALL(0x00017570u, sub_00017570); /* call 0x00017570 */

loc_0001763C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017643; /* jne: not equal / not zero */

loc_00017640: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00017643: ;
    ecx = MEM32(edi * 4 + 0x59A380);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00017651u); RECOMP_ABI_CALL(0x00460650u, sub_00460650); /* call 0x00460650 */

loc_00017651: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00017660
 * Original: 0x00017660 - 0x000177FD (413 bytes, 123 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017660: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x48C50B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(eax * 4 + 0x59A380);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x30) = 0xF;
    MEM32(esp + 0x2C) = ebx;
    MEM8(esp + 0x1C) = LO8(ebx);
    edi = eax + 1;
    edi = edi;

loc_000176A0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000176A0; /* jne: not equal / not zero */

loc_000176A7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000176B4u); RECOMP_ABI_CALL(0x00019200u, sub_00019200); /* call 0x00019200 */

loc_000176B4: ;
    esi = MEM32(esp + 0x60);
    MEM32(esp + 0x58) = ebx;
    eax = esp + 0x18;
    ebx = esp + 0x10;
    PUSH32(esp, 0x000176C9u); RECOMP_ABI_CALL(0x00017BF0u, sub_00017BF0); /* call 0x00017BF0 */

loc_000176C9: ;
    edi = MEM32(eax);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x58) = ebp;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000176E6; /* jb: below (unsigned <) */

loc_000176D9: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000176E3u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_000176E3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000176E6: ;
    esi = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM32(esp + 0x30) = 0xF;
    MEM32(esp + 0x2C) = ebx;
    MEM8(esp + 0x1C) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000177AE; /* jne: not equal / not zero */

loc_00017703: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0001770Au); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_0001770A: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x58) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0001772C; /* je: equal / zero */

loc_0001771F: ;
    PUSH32(esp, 0x00017724u); RECOMP_ABI_CALL(0x00017E80u, sub_00017E80); /* call 0x00017E80 */

loc_00017724: ;
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = ebx;
    goto loc_0001772E;

loc_0001772C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001772E: ;
    edx = MEM32(esp + 0x6C);
    MEM32(esp + 0x58) = ebp;
    ecx = MEM32(edx * 4 + 0x59A380);
    eax = ecx;
    ebp = edi;
    MEM32(esp + 0x4C) = 0xF;
    MEM32(esp + 0x48) = ebx;
    MEM8(esp + 0x38) = LO8(ebx);
    esi = eax + 1;

loc_00017754: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017754; /* jne: not equal / not zero */

loc_0001775B: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x00017768u); RECOMP_ABI_CALL(0x00019200u, sub_00019200); /* call 0x00019200 */

loc_00017768: ;
    eax = MEM32(esp + 0x60);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    MEM32(esp + 0x5C) = 2;
    PUSH32(esp, 0x0001777Eu); RECOMP_ABI_CALL(0x00017B30u, sub_00017B30); /* call 0x00017B30 */

loc_0001777E: ;
    MEM32(eax) = edi;
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esp + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x4C), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0001779C; /* jb: below (unsigned <) */

loc_0001778F: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00017799u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00017799: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001779C: ;
    MEM32(esp + 0x4C) = 0xF;
    MEM32(esp + 0x48) = ebx;
    MEM8(esp + 0x38) = LO8(ebx);
    goto loc_000177B1;

loc_000177AE: ;
    ebp = MEM32(edi + 0x28);

loc_000177B1: ;
    edi = MEM32(ebp + 4);
    ecx = MEM32(edi + 4);
    edx = MEM32(esp + 0x64);
    eax = MEM32(esp + 0x68);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    esi = esp + 0x18;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000177D2u); RECOMP_ABI_CALL(0x000182F0u, sub_000182F0); /* call 0x000182F0 */

loc_000177D2: ;
    ecx = 1;
    edx = ebp;
    esi = eax;
    PUSH32(esp, 0x000177E0u); RECOMP_ABI_CALL(0x00018320u, sub_00018320); /* call 0x00018320 */

loc_000177E0: ;
    ecx = MEM32(esp + 0x50);
    MEM32(edi + 4) = esi;
    edx = MEM32(esi + 4);
    POP32(esp, edi);
    MEM32(edx) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00017736
 * Original: 0x00017736 - 0x000177FD (199 bytes, 59 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017736(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017736: ;
    ecx = MEM32(edx * 4 + 0x59A380);
    eax = ecx;
    ebp = edi;
    MEM32(esp + 0x4C) = 0xF;
    MEM32(esp + 0x48) = ebx;
    MEM8(esp + 0x38) = LO8(ebx);
    esi = eax + 1;

loc_00017754: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017754; /* jne: not equal / not zero */

loc_0001775B: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x00017768u); RECOMP_ABI_CALL(0x00019200u, sub_00019200); /* call 0x00019200 */

loc_00017768: ;
    eax = MEM32(esp + 0x60);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    MEM32(esp + 0x5C) = 2;
    PUSH32(esp, 0x0001777Eu); RECOMP_ABI_CALL(0x00017B30u, sub_00017B30); /* call 0x00017B30 */

loc_0001777E: ;
    MEM32(eax) = edi;
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esp + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x4C), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0001779C; /* jb: below (unsigned <) */

loc_0001778F: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00017799u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00017799: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001779C: ;
    MEM32(esp + 0x4C) = 0xF;
    MEM32(esp + 0x48) = ebx;
    MEM8(esp + 0x38) = LO8(ebx);
    goto loc_000177B1;

    ebp = MEM32(edi + 0x28);

loc_000177B1: ;
    edi = MEM32(ebp + 4);
    ecx = MEM32(edi + 4);
    edx = MEM32(esp + 0x64);
    eax = MEM32(esp + 0x68);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    esi = esp + 0x18;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000177D2u); RECOMP_ABI_CALL(0x000182F0u, sub_000182F0); /* call 0x000182F0 */

loc_000177D2: ;
    ecx = 1;
    edx = ebp;
    esi = eax;
    PUSH32(esp, 0x000177E0u); RECOMP_ABI_CALL(0x00018320u, sub_00018320); /* call 0x00018320 */

loc_000177E0: ;
    ecx = MEM32(esp + 0x50);
    MEM32(edi + 4) = esi;
    edx = MEM32(esi + 4);
    POP32(esp, edi);
    MEM32(edx) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00017800
 * Original: 0x00017800 - 0x0001792A (298 bytes, 103 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017800: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x48C6E8);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C), 0x10 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_0001782C; /* jb: below (unsigned <) */

loc_00017827: ;
    ecx = MEM32(ecx + 8);
    goto loc_0001782F;

loc_0001782C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001782F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx;
    MEM32(esp + 0x2C) = 0xF;
    MEM32(esp + 0x28) = ebx;
    MEM8(esp + 0x18) = LO8(ebx);
    edi = eax + 1;

loc_00017846: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017846; /* jne: not equal / not zero */

loc_0001784D: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0001785Au); RECOMP_ABI_CALL(0x00019200u, sub_00019200); /* call 0x00019200 */

loc_0001785A: ;
    MEM32(esp + 0x38) = ebx;
    eax = esp + 0x14;
    ebx = esp + 0xC;
    PUSH32(esp, 0x0001786Bu); RECOMP_ABI_CALL(0x00017BF0u, sub_00017BF0); /* call 0x00017BF0 */

loc_0001786B: ;
    edi = MEM32(eax);
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x2C), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00017889; /* jb: below (unsigned <) */

loc_0001787C: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00017886u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00017886: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00017889: ;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x2C) = 0xF;
    MEM32(esp + 0x28) = ebx;
    MEM8(esp + 0x18) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00017916; /* je: equal / zero */

loc_000178A2: ;
    edi = MEM32(edi + 0x28);
    eax = MEM32(edi + 4);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017916; /* je: equal / zero */

loc_000178AE: ;
    edi = edi;

loc_000178B0: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x000178B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000178B0u); } /* indirect call */
    }

loc_000178B3: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000178F6; /* je: equal / zero */

loc_000178BA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000178DB; /* je: equal / zero */

loc_000178BD: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0001790F; /* jne: not equal / not zero */

loc_000178C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x14) = esp;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000178D0; /* je: equal / zero */

loc_000178CD: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000178D0: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x000178D9u); RECOMP_ABI_CALL(0x00460AF0u, sub_00460AF0); /* call 0x00460AF0 */

loc_000178D9: ;
    goto loc_0001790F;

loc_000178DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x14) = esp;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000178EB; /* je: equal / zero */

loc_000178E8: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000178EB: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x000178F4u); RECOMP_ABI_CALL(0x00460A10u, sub_00460A10); /* call 0x00460A10 */

loc_000178F4: ;
    goto loc_0001790F;

loc_000178F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x14) = esp;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00017906; /* je: equal / zero */

loc_00017903: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017906: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x0001790Fu); RECOMP_ABI_CALL(0x00461700u, sub_00461700); /* call 0x00461700 */

loc_0001790F: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000178B0; /* jne: not equal / not zero */

loc_00017916: ;
    ecx = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00017851
 * Original: 0x00017851 - 0x0001792A (217 bytes, 74 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017851(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017851: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0001785Au); RECOMP_ABI_CALL(0x00019200u, sub_00019200); /* call 0x00019200 */

loc_0001785A: ;
    MEM32(esp + 0x38) = ebx;
    eax = esp + 0x14;
    ebx = esp + 0xC;
    PUSH32(esp, 0x0001786Bu); RECOMP_ABI_CALL(0x00017BF0u, sub_00017BF0); /* call 0x00017BF0 */

loc_0001786B: ;
    edi = MEM32(eax);
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x2C), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00017889; /* jb: below (unsigned <) */

loc_0001787C: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00017886u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00017886: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00017889: ;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x2C) = 0xF;
    MEM32(esp + 0x28) = ebx;
    MEM8(esp + 0x18) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00017916; /* je: equal / zero */

loc_000178A2: ;
    edi = MEM32(edi + 0x28);
    eax = MEM32(edi + 4);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017916; /* je: equal / zero */

loc_000178AE: ;
    edi = edi;

loc_000178B0: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x000178B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000178B0u); } /* indirect call */
    }

loc_000178B3: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000178F6; /* je: equal / zero */

loc_000178BA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000178DB; /* je: equal / zero */

loc_000178BD: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0001790F; /* jne: not equal / not zero */

loc_000178C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x14) = esp;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000178D0; /* je: equal / zero */

loc_000178CD: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000178D0: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x000178D9u); RECOMP_ABI_CALL(0x00460AF0u, sub_00460AF0); /* call 0x00460AF0 */

loc_000178D9: ;
    goto loc_0001790F;

loc_000178DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x14) = esp;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000178EB; /* je: equal / zero */

loc_000178E8: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000178EB: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x000178F4u); RECOMP_ABI_CALL(0x00460A10u, sub_00460A10); /* call 0x00460A10 */

loc_000178F4: ;
    goto loc_0001790F;

loc_000178F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x14) = esp;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00017906; /* je: equal / zero */

loc_00017903: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017906: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x0001790Fu); RECOMP_ABI_CALL(0x00461700u, sub_00461700); /* call 0x00461700 */

loc_0001790F: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000178B0; /* jne: not equal / not zero */

loc_00017916: ;
    ecx = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00017930
 * Original: 0x00017930 - 0x00017976 (70 bytes, 27 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017930: ;
    SET_LO8(eax, MEM8(esp + 8));
    PUSH32(esp, ebx);
    ebx = MEM32(0x5B35F4);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0001794F; /* je: equal / zero */

loc_00017946: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x0001794Fu); RECOMP_ABI_CALL(0x00464BF0u, sub_00464BF0); /* call 0x00464BF0 */

loc_0001794F: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x00017958u); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_00017958: ;
    esi = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00017967u); RECOMP_ABI_CALL(0x00465020u, sub_00465020); /* call 0x00465020 */

loc_00017967: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001796Du); RECOMP_ABI_CALL(0x004603B0u, sub_004603B0); /* call 0x004603B0 */

loc_0001796D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00017946
 * Original: 0x00017946 - 0x00017976 (48 bytes, 18 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017946(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017946: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x0001794Fu); RECOMP_ABI_CALL(0x00464BF0u, sub_00464BF0); /* call 0x00464BF0 */

loc_0001794F: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x00017958u); RECOMP_ABI_CALL(0x000175B0u, sub_000175B0); /* call 0x000175B0 */

loc_00017958: ;
    esi = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00017967u); RECOMP_ABI_CALL(0x00465020u, sub_00465020); /* call 0x00465020 */

loc_00017967: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001796Du); RECOMP_ABI_CALL(0x004603B0u, sub_004603B0); /* call 0x004603B0 */

loc_0001796D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00017980
 * Original: 0x00017980 - 0x0001798E (14 bytes, 3 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017980: ;
    ecx = MEM32(0x5B35F4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00464BF0(); return; /* tail jmp 0x00464BF0 */

}

/**
 * sub_00017990
 * Original: 0x00017990 - 0x000179B3 (35 bytes, 14 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017990: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5B35F4);
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000179B1; /* jle: less or equal (signed <=) */

loc_000179A1: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000179AAu); RECOMP_ABI_CALL(0x00464BF0u, sub_00464BF0); /* call 0x00464BF0 */

loc_000179AA: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000179A1; /* jg: greater (signed >) */

loc_000179B1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000179C0
 * Original: 0x000179C0 - 0x000179D1 (17 bytes, 6 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000179C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000179C0: ;
    ecx = MEM32(0x5B35F4);
    edx = MEM32(ecx + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    esp += 4; return; /* ret */

}

/**
 * sub_000179E0
 * Original: 0x000179E0 - 0x00017A11 (49 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000179E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000179E0: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000179E7u); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_000179E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017A0E; /* je: equal / zero */

loc_000179EE: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x57D6C0;
    MEM32(eax) = 0x57FB0C;
    MEM32(eax + 0xC) = 0x57F850;
    esp += 4; return; /* ret */

loc_00017A0E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00017A20
 * Original: 0x00017A20 - 0x00017A73 (83 bytes, 30 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017A20: ;
    ecx = MEM32(0x5B35F4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00017A31u); RECOMP_ABI_CALL(0x00464AB0u, sub_00464AB0); /* call 0x00464AB0 */

loc_00017A31: ;
    esi = eax;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017A6D; /* jne: not equal / not zero */

loc_00017A3C: ;
    PUSH32(esp, 0x57DCF4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017A47u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00017A47: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017A60; /* jne: not equal / not zero */

loc_00017A4E: ;
    PUSH32(esp, 0x57DCFC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017A59u); RECOMP_ABI_CALL(0x004605D0u, sub_004605D0); /* call 0x004605D0 */

loc_00017A59: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017A6D; /* je: equal / zero */

loc_00017A60: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00017A67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00017A64u); } /* indirect call */
    }

loc_00017A67: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00017A6D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00017A80
 * Original: 0x00017A80 - 0x00017AB1 (49 bytes, 13 insns)
 * Folder: unsorted (none)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00017A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017A80: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00017A87u); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_00017A87: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017AAE; /* je: equal / zero */

loc_00017A8E: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x57D6C0;
    MEM32(eax) = 0x57FAD0;
    MEM32(eax + 0xC) = 0x57F850;
    esp += 4; return; /* ret */

loc_00017AAE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00017AC0
 * Original: 0x00017AC0 - 0x00017AF1 (49 bytes, 13 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00017AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017AC0: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00017AC7u); RECOMP_ABI_CALL(0x0047D740u, sub_0047D740); /* call 0x0047D740 */

loc_00017AC7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017AEE; /* je: equal / zero */

loc_00017ACE: ;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x57D6C0;
    MEM32(eax) = 0x57FA94;
    MEM32(eax + 0xC) = 0x57F850;
    esp += 4; return; /* ret */

loc_00017AEE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00017B00
 * Original: 0x00017B00 - 0x00017B05 (5 bytes, 2 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017B00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017B00: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00017B10
 * Original: 0x00017B10 - 0x00017B2A (26 bytes, 8 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017B10: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017B25; /* je: equal / zero */

loc_00017B1B: ;
    eax = 1;
    PUSH32(esp, 0x00017B25u); RECOMP_ABI_CALL(0x00013A80u, sub_00013A80); /* call 0x00013A80 */

loc_00017B25: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00017B27
 * Original: 0x00017B27 - 0x00017B2A (3 bytes, 1 insns)
 * Folder: unsorted (none)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017B27(void)
{

loc_00017B27: ;
    esp += 8; return; /* ret 4 */

}
