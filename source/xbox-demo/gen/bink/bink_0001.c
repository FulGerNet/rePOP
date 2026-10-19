/**
 * PoP SoT xbox-demo - bink, chunk 1
 * RAD Bink video decoder
 * Functions: 19 (0x002BE890 - 0x00656D65)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_002BE890
 * Original: 0x002BE890 - 0x002BE8FF (111 bytes, 38 insns)
 * Folder: bink (section: BINKYUY2)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BE890: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BE8FE; /* jl: less (signed <) */

loc_002BE89B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 2;
    edi = edi >> 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_002BE8A3: ;
    ecx = MEM32(0x661AB4);
    eax = MEM32(0x661AA8);
    esi = MEM32(0x661AB0);
    ebx = ZX8(MEM8(esi));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(ecx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(eax + -1));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ZX8(MEM8(eax + -2));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x661AA8) = eax;
    eax = MEM32(0x661AA0);
    MEM32(0x661AB4) = ecx;
    MEM32(0x661AB0) = esi;
    MEM32(eax) = edx;
    ecx = MEM32(0x661AA0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x661AA0) = ecx;
    if ((_fa != 0)) goto loc_002BE8A3; /* jne: not equal / not zero */

loc_002BE8FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002BE8FE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BE900
 * Original: 0x002BE900 - 0x002BE9B8 (184 bytes, 55 insns)
 * Folder: bink (section: BINKYUY2)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE900: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp;
    /* nop */

loc_002BE910: ;
    edx = MEM32(0x661AB4);
    eax = MEM32(0x661AA8);
    esi = MEM32(0x661AB0);
    ebx = ZX8(MEM8(esi));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ecx, MEM8(eax + -1));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ZX8(MEM8(eax + -2));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x661AA8) = eax;
    eax = MEM32(0x661AA0);
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x661AB4) = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x661AB0) = esi;
    MEM32(eax) = ecx;
    edx = MEM32(0x661AAC);
    eax = ZX8(MEM8(edx + 1));
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF00FF00u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ZX8(MEM8(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x661AAC) = edx;
    edx = MEM32(0x661AA4);
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx) = eax;
    esi = MEM32(0x661AA0);
    edx = MEM32(0x661AA4);
    eax = 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(0x661AA0) = esi;
    MEM32(0x661AA4) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_002BE910; /* jg: greater (signed >) */

loc_002BE9AD: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE9C0
 * Original: 0x002BE9C0 - 0x002BEA31 (113 bytes, 55 insns)
 * Folder: bink (section: BINKYUY2)
 * CC: cdecl, 12 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002BE9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BE9C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esi;
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_002BE9D7; /* jne: not equal / not zero */

loc_002BE9D3: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi & 0xFFFFFFFCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002BE9D7: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    ecx = MEM32(ebp + 0x1C);
    if (TEST_Z(_fa, _fb)) goto loc_002BE9EB; /* je: equal / zero */

loc_002BE9DF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002BE9E5; /* je: equal / zero */

loc_002BE9E4: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002BE9E5: ;
    eax = MEM32(ebp + 0x24);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002BE9F4;

loc_002BE9EB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    eax = MEM32(ebp + 0x24);
    if (TEST_Z(_fa, _fb)) goto loc_002BE9F5; /* je: equal / zero */

loc_002BE9F3: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002BE9F4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002BE9F5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002BE9FA; /* je: equal / zero */

loc_002BE9F9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002BE9FA: ;
    edi = MEM32(ebp + 0x34);
    PUSH32(esp, 0x663EE0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x30);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BEA28u); RECOMP_ABI_CALL(0x002B4000u, sub_002B4000); /* call 0x002B4000 */

loc_002BEA28: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 52; return; /* ret 48 */

}

/**
 * sub_002BEA40
 * Original: 0x002BEA40 - 0x002BEA8E (78 bytes, 36 insns)
 * Folder: bink (section: BINKYUY2)
 * CC: cdecl, 14 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002BEA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BEA40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x3C);
    ecx = MEM32(ebp + 0x38);
    edx = MEM32(ebp + 0x34);
    PUSH32(esp, 0x663EE0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BEA87u); RECOMP_ABI_CALL(0x002B4430u, sub_002B4430); /* call 0x002B4430 */

loc_002BEA87: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 60; return; /* ret 56 */

}

/**
 * sub_002BEA90
 * Original: 0x002BEA90 - 0x002BEB6C (220 bytes, 60 insns)
 * Folder: bink (section: BINKYUY2)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEA90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x661AA0);
    ebp = MEM32(0x661AB0);
    ebx = MEM32(0x661AB4);
    edx = MEM32(0x661AA8);
    ecx = MEM32(esp + 0x14);
    ecx = edi + ecx * 8 + -16;
    /* nop */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BEAC0: ;
    mm1 = MMX_FROM32(MEM32(ebp)); /* movd */
    mm2 = MMX_FROM32(MEM32(ebx)); /* movd */
    mm6 = MMX_MEM(edx); /* movq */
    mm1 = MMX_PUNPCKLBW(mm1, mm2); /* punpcklbw */
    mm7 = mm6; /* movq */
    mm6 = MMX_PUNPCKLBW(mm6, mm1); /* punpcklbw */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMX_STORE(edi, mm6); /* movq */
    mm7 = MMX_PUNPCKHBW(mm7, mm1); /* punpckhbw */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MMX_STORE(edi + 8, mm7); /* movq */
    edi = edi + 0x10;
    if (CMP_B(_fa, _fb)) goto loc_002BEAC0; /* jb: below (unsigned <) */

loc_002BEAED: ;
    MEM32(0x661AA0) = edi;
    MEM32(0x661AA8) = edx;
    edi = MEM32(0x661AA4);
    ebp = MEM32(0x661AB0);
    ebx = MEM32(0x661AB4);
    edx = MEM32(0x661AAC);
    ecx = MEM32(esp + 0x14);
    ecx = edi + ecx * 8 + -16;
    /* nop */

loc_002BEB20: ;
    mm1 = MMX_FROM32(MEM32(ebp)); /* movd */
    mm2 = MMX_FROM32(MEM32(ebx)); /* movd */
    mm6 = MMX_MEM(edx); /* movq */
    mm1 = MMX_PUNPCKLBW(mm1, mm2); /* punpcklbw */
    mm7 = mm6; /* movq */
    mm6 = MMX_PUNPCKLBW(mm6, mm1); /* punpcklbw */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MMX_STORE(edi, mm6); /* movq */
    mm7 = MMX_PUNPCKHBW(mm7, mm1); /* punpckhbw */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MMX_STORE(edi + 8, mm7); /* movq */
    edi = edi + 0x10;
    if (CMP_B(_fa, _fb)) goto loc_002BEB20; /* jb: below (unsigned <) */

loc_002BEB4D: ;
    MEM32(0x661AA4) = edi;
    MEM32(0x661AB0) = ebp;
    MEM32(0x661AB4) = ebx;
    MEM32(0x661AAC) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002BEB80
 * Original: 0x002BEB80 - 0x002BEC1A (154 bytes, 45 insns)
 * Folder: bink (section: BINKYUY2)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEB80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    mm1 = MMX_MEM(0x336758); /* movq */
    esi = MEM32(0x661AA0);
    edi = MEM32(0x661AA4);
    ecx = MEM32(0x661AA8);
    edx = MEM32(0x661AAC);
    eax = MEM32(esp + 0x14);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x661AA0) = eax;
    /* nop */
    /* nop */
    /* nop */

loc_002BEBC0: ;
    mm5 = MMX_FROM32(MEM32(edx)); /* movd */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm5 = MMX_PUNPCKLBW(mm5, mm5); /* punpcklbw */
    mm3 = mm5; /* movq */
    mm3 = MMX_PUNPCKHBW(mm3, mm1); /* punpckhbw */
    MMX_STORE(edi + 8, mm3); /* movq */
    mm5 = MMX_PUNPCKLBW(mm5, mm1); /* punpcklbw */
    MMX_STORE(edi, mm5); /* movq */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm6 = MMX_FROM32(MEM32(ecx)); /* movd */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm6 = MMX_PUNPCKLBW(mm6, mm6); /* punpcklbw */
    mm4 = mm6; /* movq */
    mm4 = MMX_PUNPCKHBW(mm4, mm1); /* punpckhbw */
    MMX_STORE(esi + 8, mm4); /* movq */
    mm6 = MMX_PUNPCKLBW(mm6, mm1); /* punpcklbw */
    MMX_STORE(esi, mm6); /* movq */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x661AA0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002BEBC0; /* jb: below (unsigned <) */

loc_002BEC01: ;
    MEM32(0x661AA4) = edi;
    MEM32(0x661AA8) = ecx;
    MEM32(0x661AAC) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002BEC20
 * Original: 0x002BEC20 - 0x002BECD7 (183 bytes, 54 insns)
 * Folder: bink (section: BINKYUY2)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEC20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(0x661AA0);
    edi = MEM32(0x661AA4);
    ebp = MEM32(0x661AB0);
    ebx = MEM32(0x661AB4);
    ecx = MEM32(0x661AA8);
    edx = MEM32(0x661AAC);
    eax = MEM32(esp + 0x14);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x661AA0) = eax;

loc_002BEC56: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebp));
    mm1 = MMX_FROM32(eax); /* movd */
    SET_LO16(eax, MEM16(ebx));
    mm2 = MMX_FROM32(eax); /* movd */
    mm1 = MMX_PUNPCKLBW(mm1, mm2); /* punpcklbw */
    mm1 = MMX_PUNPCKLWD(mm1, mm1); /* punpcklwd */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm5 = MMX_FROM32(MEM32(edx)); /* movd */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm5 = MMX_PUNPCKLBW(mm5, mm5); /* punpcklbw */
    mm3 = mm5; /* movq */
    mm3 = MMX_PUNPCKHBW(mm3, mm1); /* punpckhbw */
    MMX_STORE(edi + 8, mm3); /* movq */
    mm5 = MMX_PUNPCKLBW(mm5, mm1); /* punpcklbw */
    MMX_STORE(edi, mm5); /* movq */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm6 = MMX_FROM32(MEM32(ecx)); /* movd */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm6 = MMX_PUNPCKLBW(mm6, mm6); /* punpcklbw */
    mm4 = mm6; /* movq */
    mm4 = MMX_PUNPCKHBW(mm4, mm1); /* punpckhbw */
    MMX_STORE(esi + 8, mm4); /* movq */
    mm6 = MMX_PUNPCKLBW(mm6, mm1); /* punpcklbw */
    MMX_STORE(esi, mm6); /* movq */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x661AA0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002BEC56; /* jb: below (unsigned <) */

loc_002BECB2: ;
    MEM32(0x661AA4) = edi;
    MEM32(0x661AB0) = ebp;
    MEM32(0x661AB4) = ebx;
    MEM32(0x661AA8) = ecx;
    MEM32(0x661AAC) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002BECE0
 * Original: 0x002BECE0 - 0x002BED67 (135 bytes, 39 insns)
 * Folder: bink (section: BINKYUY2)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BECE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BECE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    mm2 = MMX_MEM(0x336758); /* movq */
    esi = MEM32(0x661AA0);
    ecx = MEM32(0x661AA8);
    eax = MEM32(esp + 0x14);
    eax = esi + eax * 8;
    edi = edi;

loc_002BED00: ;
    mm1 = MMX_FROM32(MEM32(ecx)); /* movd */
    mm1 = MMX_PUNPCKLBW(mm1, mm2); /* punpcklbw */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MMX_STORE(esi + -8, mm1); /* movq */
    if (CMP_B(_fa, _fb)) goto loc_002BED00; /* jb: below (unsigned <) */

loc_002BED14: ;
    MEM32(0x661AA0) = eax;
    MEM32(0x661AA8) = ecx;
    edi = MEM32(0x661AA4);
    edx = MEM32(0x661AAC);
    eax = MEM32(esp + 0x14);
    eax = edi + eax * 8;
    /* nop */
    /* nop */

loc_002BED40: ;
    mm1 = MMX_FROM32(MEM32(edx)); /* movd */
    mm1 = MMX_PUNPCKLBW(mm1, mm2); /* punpcklbw */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MMX_STORE(edi + -8, mm1); /* movq */
    if (CMP_B(_fa, _fb)) goto loc_002BED40; /* jb: below (unsigned <) */

loc_002BED54: ;
    MEM32(0x661AA4) = edi;
    MEM32(0x661AAC) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002BED80
 * Original: 0x002BED80 - 0x002BEEAE (302 bytes, 90 insns)
 * Folder: bink (section: BINK16MX)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BED80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BED80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    mm7 = MMX_MEM(0x336750); /* movq */
    mm0 = MMX_MEM(0x336728); /* movq */
    mm2 = MMX_MEM(0x336740); /* movq */
    mm5 = MMX_MEM(0x336748); /* movq */
    esi = MEM32(0x661AA0);
    ecx = MEM32(0x661AA8);
    eax = MEM32(esp + 0x14);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */
    /* nop */

loc_002BEDC0: ;
    mm3 = MMX_FROM32(MEM32(ecx)); /* movd */
    mm4 = MMX_PXOR(mm4, mm4); /* pxor */
    mm6 = MMX_FROM32(MEM32(ecx + 4)); /* movd */
    mm3 = MMX_PUNPCKLBW(mm3, mm4); /* punpcklbw */
    mm3 = MMX_PSUBUSW(mm3, mm0); /* psubusw */
    mm6 = MMX_PUNPCKLBW(mm6, mm4); /* punpcklbw */
    mm6 = MMX_PSUBUSW(mm6, mm0); /* psubusw */
    mm3 = MMX_PMULHW(mm3, mm5); /* pmulhw */
    mm6 = MMX_PMULHW(mm6, mm5); /* pmulhw */
    /* nop */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm6 = MMX_PADDSW(mm6, mm7); /* paddsw */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    mm6 = MMX_PSUBUSW(mm6, mm7); /* psubusw */
    mm6 = MMX_PMULLW(mm6, mm2); /* pmullw */
    mm1 = mm3; /* movq */
    mm3 = MMX_PUNPCKLWD(mm3, mm3); /* punpcklwd */
    mm1 = MMX_PUNPCKHWD(mm1, mm1); /* punpckhwd */
    mm4 = mm6; /* movq */
    MMX_STORE(esi + -32, mm3); /* movq */
    mm6 = MMX_PUNPCKLWD(mm6, mm6); /* punpcklwd */
    MMX_STORE(esi + -24, mm1); /* movq */
    mm4 = MMX_PUNPCKHWD(mm4, mm4); /* punpckhwd */
    MMX_STORE(esi + -16, mm6); /* movq */
    MMX_STORE(esi + -8, mm4); /* movq */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002BEDC0; /* jb: below (unsigned <) */

loc_002BEE1B: ;
    MEM32(0x661AA0) = esi;
    MEM32(0x661AA8) = ecx;
    edi = MEM32(0x661AA4);
    edx = MEM32(0x661AAC);
    eax = MEM32(esp + 0x14);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_002BEE40: ;
    mm3 = MMX_FROM32(MEM32(edx)); /* movd */
    mm4 = MMX_PXOR(mm4, mm4); /* pxor */
    mm6 = MMX_FROM32(MEM32(edx + 4)); /* movd */
    mm3 = MMX_PUNPCKLBW(mm3, mm4); /* punpcklbw */
    mm3 = MMX_PSUBUSW(mm3, mm0); /* psubusw */
    mm6 = MMX_PUNPCKLBW(mm6, mm4); /* punpcklbw */
    mm6 = MMX_PSUBUSW(mm6, mm0); /* psubusw */
    mm3 = MMX_PMULHW(mm3, mm5); /* pmulhw */
    mm6 = MMX_PMULHW(mm6, mm5); /* pmulhw */
    /* nop */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm6 = MMX_PADDSW(mm6, mm7); /* paddsw */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    mm6 = MMX_PSUBUSW(mm6, mm7); /* psubusw */
    mm6 = MMX_PMULLW(mm6, mm2); /* pmullw */
    mm1 = mm3; /* movq */
    mm3 = MMX_PUNPCKLWD(mm3, mm3); /* punpcklwd */
    mm1 = MMX_PUNPCKHWD(mm1, mm1); /* punpckhwd */
    mm4 = mm6; /* movq */
    MMX_STORE(edi + -32, mm3); /* movq */
    mm6 = MMX_PUNPCKLWD(mm6, mm6); /* punpcklwd */
    MMX_STORE(edi + -24, mm1); /* movq */
    mm4 = MMX_PUNPCKHWD(mm4, mm4); /* punpckhwd */
    MMX_STORE(edi + -16, mm6); /* movq */
    MMX_STORE(edi + -8, mm4); /* movq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002BEE40; /* jb: below (unsigned <) */

loc_002BEE9B: ;
    MEM32(0x661AA4) = edi;
    MEM32(0x661AAC) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002BEEC0
 * Original: 0x002BEEC0 - 0x002BF11F (607 bytes, 137 insns)
 * Folder: bink (section: BINK16X2)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEEC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x661AA0);
    ebp = MEM32(0x661AB0);
    ebx = MEM32(0x661AB4);
    edx = MEM32(0x661AA8);
    eax = MEM32(esp + 0x14);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x661AA0) = eax;
    mm7 = MMX_MEM(0x336738); /* movq */
    /* nop */
    /* nop */
    /* nop */

loc_002BEF00: ;
    mm4 = MMX_FROM32(MEM32(edx)); /* movd */
    mm0 = MMX_PXOR(mm0, mm0); /* pxor */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(ebp));
    mm4 = MMX_PUNPCKLBW(mm4, mm0); /* punpcklbw */
    mm2 = MMX_FROM32(MEM32(eax * 4 + 0x6632C8)); /* movd */
    mm1 = MMX_FROM32(MEM32(eax * 4 + 0x662AC8)); /* movd */
    SET_LO8(eax, MEM8(ebp + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PSUBUSW(mm4, MMX_MEM(0x336728)); /* psubusw */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x6632C8)); /* movd */
    mm1 = MMX_PUNPCKLDQ(mm1, MMX_MEM(eax * 4 + 0x662AC8)); /* punpckldq */
    SET_LO8(eax, MEM8(ebx));
    mm4 = MMX_PSLLW(mm4, 2u); /* psllw */
    mm4 = MMX_PMULHW(mm4, MMX_MEM(0x336730)); /* pmulhw */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x662EC8)); /* movd */
    mm3 = MMX_FROM32(MEM32(eax * 4 + 0x6636C8)); /* movd */
    mm2 = MMX_PADDW(mm2, mm5); /* paddw */
    SET_LO8(eax, MEM8(ebx + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x662EC8)); /* movd */
    mm3 = MMX_PUNPCKLDQ(mm3, MMX_MEM(eax * 4 + 0x6636C8)); /* punpckldq */
    mm6 = MMX_PADDW(mm6, mm5); /* paddw */
    mm2 = MMX_PUNPCKLDQ(mm2, mm6); /* punpckldq */
    mm1 = MMX_PADDW(mm1, mm4); /* paddw */
    mm2 = MMX_PADDW(mm2, mm4); /* paddw */
    mm1 = MMX_PADDSW(mm1, mm7); /* paddsw */
    mm3 = MMX_PADDW(mm3, mm4); /* paddw */
    mm1 = MMX_PSUBUSW(mm1, mm7); /* psubusw */
    mm1 = MMX_PSRLW(mm1, MMX_MEM(0x663AE0).q); /* psrlw */
    mm2 = MMX_PADDSW(mm2, mm7); /* paddsw */
    mm1 = MMX_PSLLW(mm1, MMX_MEM(0x663AC8).q); /* psllw */
    mm2 = MMX_PSUBUSW(mm2, mm7); /* psubusw */
    mm2 = MMX_PSRLW(mm2, MMX_MEM(0x663AE8).q); /* psrlw */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm2 = MMX_PSLLW(mm2, MMX_MEM(0x663AD0).q); /* psllw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm3 = MMX_PSRLW(mm3, MMX_MEM(0x663AF0).q); /* psrlw */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm3 = MMX_PSLLW(mm3, MMX_MEM(0x663AD8).q); /* psllw */
    mm1 = MMX_POR(mm1, mm3); /* por */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = mm1; /* movq */
    mm1 = MMX_PUNPCKLWD(mm1, mm1); /* punpcklwd */
    eax = MEM32(0x661AA0);
    mm3 = MMX_PUNPCKHWD(mm3, mm3); /* punpckhwd */
    MMX_STORE(edi + -16, mm1); /* movq */
    MMX_STORE(edi + -8, mm3); /* movq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002BEF00; /* jb: below (unsigned <) */

loc_002BEFE6: ;
    MEM32(0x661AA8) = edx;
    edi = MEM32(0x661AA4);
    ebp = MEM32(0x661AB0);
    ebx = MEM32(0x661AB4);
    edx = MEM32(0x661AAC);
    eax = MEM32(esp + 0x14);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x661AA4) = eax;
    mm7 = MMX_MEM(0x336738); /* movq */
    /* nop */

loc_002BF020: ;
    mm4 = MMX_FROM32(MEM32(edx)); /* movd */
    mm0 = MMX_PXOR(mm0, mm0); /* pxor */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(ebp));
    mm4 = MMX_PUNPCKLBW(mm4, mm0); /* punpcklbw */
    mm2 = MMX_FROM32(MEM32(eax * 4 + 0x6632C8)); /* movd */
    mm1 = MMX_FROM32(MEM32(eax * 4 + 0x662AC8)); /* movd */
    SET_LO8(eax, MEM8(ebp + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PSUBUSW(mm4, MMX_MEM(0x336728)); /* psubusw */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x6632C8)); /* movd */
    mm1 = MMX_PUNPCKLDQ(mm1, MMX_MEM(eax * 4 + 0x662AC8)); /* punpckldq */
    SET_LO8(eax, MEM8(ebx));
    mm4 = MMX_PSLLW(mm4, 2u); /* psllw */
    mm4 = MMX_PMULHW(mm4, MMX_MEM(0x336730)); /* pmulhw */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x662EC8)); /* movd */
    mm3 = MMX_FROM32(MEM32(eax * 4 + 0x6636C8)); /* movd */
    mm2 = MMX_PADDW(mm2, mm5); /* paddw */
    SET_LO8(eax, MEM8(ebx + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x662EC8)); /* movd */
    mm3 = MMX_PUNPCKLDQ(mm3, MMX_MEM(eax * 4 + 0x6636C8)); /* punpckldq */
    mm6 = MMX_PADDW(mm6, mm5); /* paddw */
    mm2 = MMX_PUNPCKLDQ(mm2, mm6); /* punpckldq */
    mm1 = MMX_PADDW(mm1, mm4); /* paddw */
    mm2 = MMX_PADDW(mm2, mm4); /* paddw */
    mm1 = MMX_PADDSW(mm1, mm7); /* paddsw */
    mm3 = MMX_PADDW(mm3, mm4); /* paddw */
    mm1 = MMX_PSUBUSW(mm1, mm7); /* psubusw */
    mm1 = MMX_PSRLW(mm1, MMX_MEM(0x663AE0).q); /* psrlw */
    mm2 = MMX_PADDSW(mm2, mm7); /* paddsw */
    mm1 = MMX_PSLLW(mm1, MMX_MEM(0x663AC8).q); /* psllw */
    mm2 = MMX_PSUBUSW(mm2, mm7); /* psubusw */
    mm2 = MMX_PSRLW(mm2, MMX_MEM(0x663AE8).q); /* psrlw */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm2 = MMX_PSLLW(mm2, MMX_MEM(0x663AD0).q); /* psllw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm3 = MMX_PSRLW(mm3, MMX_MEM(0x663AF0).q); /* psrlw */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm3 = MMX_PSLLW(mm3, MMX_MEM(0x663AD8).q); /* psllw */
    mm1 = MMX_POR(mm1, mm3); /* por */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = mm1; /* movq */
    mm1 = MMX_PUNPCKLWD(mm1, mm1); /* punpcklwd */
    eax = MEM32(0x661AA4);
    mm3 = MMX_PUNPCKHWD(mm3, mm3); /* punpckhwd */
    MMX_STORE(edi + -16, mm1); /* movq */
    MMX_STORE(edi + -8, mm3); /* movq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002BF020; /* jb: below (unsigned <) */

loc_002BF106: ;
    MEM32(0x661AB0) = ebp;
    MEM32(0x661AB4) = ebx;
    MEM32(0x661AAC) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002BF120
 * Original: 0x002BF120 - 0x002BF418 (760 bytes, 170 insns)
 * Folder: bink (section: BINK16X2)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BF120: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x661AA0);
    ebp = MEM32(0x661AB0);
    ebx = MEM32(0x661AB4);
    edx = MEM32(0x661AA8);
    eax = MEM32(esp + 0x14);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x661AA0) = eax;
    mm7 = MMX_MEM(0x336738); /* movq */
    /* nop */
    /* nop */
    /* nop */

loc_002BF160: ;
    mm4 = MMX_FROM32(MEM32(edx)); /* movd */
    mm0 = MMX_PXOR(mm0, mm0); /* pxor */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(ebp));
    mm4 = MMX_PUNPCKLBW(mm4, mm0); /* punpcklbw */
    mm2 = MMX_FROM32(MEM32(eax * 4 + 0x6632C8)); /* movd */
    mm1 = MMX_FROM32(MEM32(eax * 4 + 0x662AC8)); /* movd */
    SET_LO8(eax, MEM8(ebp + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PSUBUSW(mm4, MMX_MEM(0x336728)); /* psubusw */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x6632C8)); /* movd */
    mm1 = MMX_PUNPCKLDQ(mm1, MMX_MEM(eax * 4 + 0x662AC8)); /* punpckldq */
    SET_LO8(eax, MEM8(ebx));
    mm4 = MMX_PSLLW(mm4, 2u); /* psllw */
    mm4 = MMX_PMULHW(mm4, MMX_MEM(0x336730)); /* pmulhw */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x662EC8)); /* movd */
    mm3 = MMX_FROM32(MEM32(eax * 4 + 0x6636C8)); /* movd */
    mm2 = MMX_PADDW(mm2, mm5); /* paddw */
    SET_LO8(eax, MEM8(ebx + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x662EC8)); /* movd */
    mm3 = MMX_PUNPCKLDQ(mm3, MMX_MEM(eax * 4 + 0x6636C8)); /* punpckldq */
    mm6 = MMX_PADDW(mm6, mm5); /* paddw */
    SET_LO8(eax, MEM8(ebp));
    mm2 = MMX_PUNPCKLDQ(mm2, mm6); /* punpckldq */
    mm1 = MMX_PSRLQ(mm1, 16u); /* psrlq */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x662AC8)); /* movd */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x6632C8)); /* movd */
    mm3 = MMX_PSRLQ(mm3, 16u); /* psrlq */
    SET_LO8(eax, MEM8(ebx));
    mm6 = MMX_PSLLQ(mm6, 48u); /* psllq */
    mm1 = MMX_POR(mm1, mm6); /* por */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x662EC8)); /* movd */
    mm5 = MMX_PADDW(mm5, mm6); /* paddw */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x6636C8)); /* movd */
    mm5 = MMX_PSLLQ(mm5, 48u); /* psllq */
    mm6 = MMX_PSLLQ(mm6, 48u); /* psllq */
    mm2 = MMX_POR(mm2, mm5); /* por */
    mm3 = MMX_POR(mm3, mm6); /* por */
    mm1 = MMX_PADDW(mm1, mm4); /* paddw */
    mm2 = MMX_PADDW(mm2, mm4); /* paddw */
    mm1 = MMX_PADDSW(mm1, mm7); /* paddsw */
    mm3 = MMX_PADDW(mm3, mm4); /* paddw */
    mm1 = MMX_PSUBUSW(mm1, mm7); /* psubusw */
    mm1 = MMX_PSRLW(mm1, MMX_MEM(0x663AE0).q); /* psrlw */
    mm2 = MMX_PADDSW(mm2, mm7); /* paddsw */
    mm1 = MMX_PSLLW(mm1, MMX_MEM(0x663AC8).q); /* psllw */
    mm2 = MMX_PSUBUSW(mm2, mm7); /* psubusw */
    mm2 = MMX_PSRLW(mm2, MMX_MEM(0x663AE8).q); /* psrlw */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm2 = MMX_PSLLW(mm2, MMX_MEM(0x663AD0).q); /* psllw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm3 = MMX_PSRLW(mm3, MMX_MEM(0x663AF0).q); /* psrlw */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm3 = MMX_PSLLW(mm3, MMX_MEM(0x663AD8).q); /* psllw */
    mm1 = MMX_POR(mm1, mm3); /* por */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = mm1; /* movq */
    mm1 = MMX_PUNPCKLWD(mm1, mm1); /* punpcklwd */
    eax = MEM32(0x661AA0);
    mm3 = MMX_PUNPCKHWD(mm3, mm3); /* punpckhwd */
    MMX_STORE(edi + -16, mm1); /* movq */
    MMX_STORE(edi + -8, mm3); /* movq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002BF160; /* jb: below (unsigned <) */

loc_002BF28F: ;
    MEM32(0x661AA8) = edx;
    edi = MEM32(0x661AA4);
    ebp = MEM32(0x661AB0);
    ebx = MEM32(0x661AB4);
    edx = MEM32(0x661AAC);
    eax = MEM32(esp + 0x14);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x661AA4) = eax;
    mm7 = MMX_MEM(0x336738); /* movq */
    /* nop */
    /* nop */

loc_002BF2D0: ;
    mm4 = MMX_FROM32(MEM32(edx)); /* movd */
    mm0 = MMX_PXOR(mm0, mm0); /* pxor */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(ebp));
    mm4 = MMX_PUNPCKLBW(mm4, mm0); /* punpcklbw */
    mm2 = MMX_FROM32(MEM32(eax * 4 + 0x6632C8)); /* movd */
    mm1 = MMX_FROM32(MEM32(eax * 4 + 0x662AC8)); /* movd */
    SET_LO8(eax, MEM8(ebp + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PSUBUSW(mm4, MMX_MEM(0x336728)); /* psubusw */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x6632C8)); /* movd */
    mm1 = MMX_PUNPCKLDQ(mm1, MMX_MEM(eax * 4 + 0x662AC8)); /* punpckldq */
    SET_LO8(eax, MEM8(ebx));
    mm4 = MMX_PSLLW(mm4, 2u); /* psllw */
    mm4 = MMX_PMULHW(mm4, MMX_MEM(0x336730)); /* pmulhw */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x662EC8)); /* movd */
    mm3 = MMX_FROM32(MEM32(eax * 4 + 0x6636C8)); /* movd */
    mm2 = MMX_PADDW(mm2, mm5); /* paddw */
    SET_LO8(eax, MEM8(ebx + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x662EC8)); /* movd */
    mm3 = MMX_PUNPCKLDQ(mm3, MMX_MEM(eax * 4 + 0x6636C8)); /* punpckldq */
    mm6 = MMX_PADDW(mm6, mm5); /* paddw */
    SET_LO8(eax, MEM8(ebp));
    mm2 = MMX_PUNPCKLDQ(mm2, mm6); /* punpckldq */
    mm1 = MMX_PSRLQ(mm1, 16u); /* psrlq */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x662AC8)); /* movd */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x6632C8)); /* movd */
    mm3 = MMX_PSRLQ(mm3, 16u); /* psrlq */
    SET_LO8(eax, MEM8(ebx));
    mm6 = MMX_PSLLQ(mm6, 48u); /* psllq */
    mm1 = MMX_POR(mm1, mm6); /* por */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x662EC8)); /* movd */
    mm5 = MMX_PADDW(mm5, mm6); /* paddw */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x6636C8)); /* movd */
    mm5 = MMX_PSLLQ(mm5, 48u); /* psllq */
    mm6 = MMX_PSLLQ(mm6, 48u); /* psllq */
    mm2 = MMX_POR(mm2, mm5); /* por */
    mm3 = MMX_POR(mm3, mm6); /* por */
    mm1 = MMX_PADDW(mm1, mm4); /* paddw */
    mm2 = MMX_PADDW(mm2, mm4); /* paddw */
    mm1 = MMX_PADDSW(mm1, mm7); /* paddsw */
    mm3 = MMX_PADDW(mm3, mm4); /* paddw */
    mm1 = MMX_PSUBUSW(mm1, mm7); /* psubusw */
    mm1 = MMX_PSRLW(mm1, MMX_MEM(0x663AE0).q); /* psrlw */
    mm2 = MMX_PADDSW(mm2, mm7); /* paddsw */
    mm1 = MMX_PSLLW(mm1, MMX_MEM(0x663AC8).q); /* psllw */
    mm2 = MMX_PSUBUSW(mm2, mm7); /* psubusw */
    mm2 = MMX_PSRLW(mm2, MMX_MEM(0x663AE8).q); /* psrlw */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm2 = MMX_PSLLW(mm2, MMX_MEM(0x663AD0).q); /* psllw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm3 = MMX_PSRLW(mm3, MMX_MEM(0x663AF0).q); /* psrlw */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm3 = MMX_PSLLW(mm3, MMX_MEM(0x663AD8).q); /* psllw */
    mm1 = MMX_POR(mm1, mm3); /* por */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = mm1; /* movq */
    mm1 = MMX_PUNPCKLWD(mm1, mm1); /* punpcklwd */
    eax = MEM32(0x661AA4);
    mm3 = MMX_PUNPCKHWD(mm3, mm3); /* punpckhwd */
    MMX_STORE(edi + -16, mm1); /* movq */
    MMX_STORE(edi + -8, mm3); /* movq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002BF2D0; /* jb: below (unsigned <) */

loc_002BF3FF: ;
    MEM32(0x661AB0) = ebp;
    MEM32(0x661AB4) = ebx;
    MEM32(0x661AAC) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002BF420
 * Original: 0x002BF420 - 0x002BF524 (260 bytes, 75 insns)
 * Folder: bink (section: BINK16M)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BF420: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    mm7 = MMX_MEM(0x336750); /* movq */
    mm0 = MMX_MEM(0x336728); /* movq */
    mm2 = MMX_MEM(0x336740); /* movq */
    mm5 = MMX_MEM(0x336748); /* movq */
    esi = MEM32(0x661AA0);
    ecx = MEM32(0x661AA8);
    eax = MEM32(esp + 0x14);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */
    /* nop */

loc_002BF460: ;
    mm3 = MMX_FROM32(MEM32(ecx)); /* movd */
    mm4 = MMX_PXOR(mm4, mm4); /* pxor */
    mm6 = MMX_FROM32(MEM32(ecx + 4)); /* movd */
    mm3 = MMX_PUNPCKLBW(mm3, mm4); /* punpcklbw */
    mm3 = MMX_PSUBUSW(mm3, mm0); /* psubusw */
    mm6 = MMX_PUNPCKLBW(mm6, mm4); /* punpcklbw */
    mm6 = MMX_PSUBUSW(mm6, mm0); /* psubusw */
    mm3 = MMX_PMULHW(mm3, mm5); /* pmulhw */
    mm6 = MMX_PMULHW(mm6, mm5); /* pmulhw */
    /* nop */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm6 = MMX_PADDSW(mm6, mm7); /* paddsw */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    mm6 = MMX_PSUBUSW(mm6, mm7); /* psubusw */
    mm6 = MMX_PMULLW(mm6, mm2); /* pmullw */
    MMX_STORE(esi + -16, mm3); /* movq */
    MMX_STORE(esi + -8, mm6); /* movq */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002BF460; /* jb: below (unsigned <) */

loc_002BF4A1: ;
    MEM32(0x661AA0) = esi;
    MEM32(0x661AA8) = ecx;
    edi = MEM32(0x661AA4);
    edx = MEM32(0x661AAC);
    eax = MEM32(esp + 0x14);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */
    /* nop */

loc_002BF4D0: ;
    mm3 = MMX_FROM32(MEM32(edx)); /* movd */
    mm4 = MMX_PXOR(mm4, mm4); /* pxor */
    mm6 = MMX_FROM32(MEM32(edx + 4)); /* movd */
    mm3 = MMX_PUNPCKLBW(mm3, mm4); /* punpcklbw */
    mm3 = MMX_PSUBUSW(mm3, mm0); /* psubusw */
    mm6 = MMX_PUNPCKLBW(mm6, mm4); /* punpcklbw */
    mm6 = MMX_PSUBUSW(mm6, mm0); /* psubusw */
    mm3 = MMX_PMULHW(mm3, mm5); /* pmulhw */
    mm6 = MMX_PMULHW(mm6, mm5); /* pmulhw */
    /* nop */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm6 = MMX_PADDSW(mm6, mm7); /* paddsw */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    mm6 = MMX_PSUBUSW(mm6, mm7); /* psubusw */
    mm6 = MMX_PMULLW(mm6, mm2); /* pmullw */
    MMX_STORE(edi + -16, mm3); /* movq */
    MMX_STORE(edi + -8, mm6); /* movq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002BF4D0; /* jb: below (unsigned <) */

loc_002BF511: ;
    MEM32(0x661AA4) = edi;
    MEM32(0x661AAC) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002BF620
 * Original: 0x002BF620 - 0x002BF7DA (442 bytes, 129 insns)
 * Folder: bink (section: BINK32MX)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BF620: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    mm0 = MMX_MEM(0x336728); /* movq */
    mm2 = MMX_MEM(0x336700); /* movq */
    mm5 = MMX_MEM(0x336730); /* movq */
    esi = MEM32(0x661AA0);
    ecx = MEM32(0x661AA8);
    eax = MEM32(esp + 0x14);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_002BF650: ;
    mm3 = MMX_FROM32(MEM32(ecx)); /* movd */
    mm4 = MMX_PXOR(mm4, mm4); /* pxor */
    mm6 = MMX_FROM32(MEM32(ecx + 4)); /* movd */
    mm3 = MMX_PUNPCKLBW(mm3, mm4); /* punpcklbw */
    mm3 = MMX_PSUBUSW(mm3, mm0); /* psubusw */
    mm6 = MMX_PUNPCKLBW(mm6, mm4); /* punpcklbw */
    mm6 = MMX_PSUBUSW(mm6, mm0); /* psubusw */
    mm3 = MMX_PSLLW(mm3, 2u); /* psllw */
    mm3 = MMX_PMULHW(mm3, mm5); /* pmulhw */
    mm6 = MMX_PSLLW(mm6, 2u); /* psllw */
    mm7 = MMX_MEM(0x336738); /* movq */
    mm6 = MMX_PMULHW(mm6, mm5); /* pmulhw */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm6 = MMX_PADDSW(mm6, mm7); /* paddsw */
    mm1 = mm3; /* movq */
    mm3 = MMX_PUNPCKLWD(mm3, mm3); /* punpcklwd */
    mm1 = MMX_PUNPCKHWD(mm1, mm1); /* punpckhwd */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    mm1 = MMX_PMULLW(mm1, mm2); /* pmullw */
    mm6 = MMX_PSUBUSW(mm6, mm7); /* psubusw */
    mm4 = mm6; /* movq */
    mm6 = MMX_PUNPCKLWD(mm6, mm6); /* punpcklwd */
    mm4 = MMX_PUNPCKHWD(mm4, mm4); /* punpckhwd */
    mm6 = MMX_PMULLW(mm6, mm2); /* pmullw */
    mm7 = mm3; /* movq */
    mm3 = MMX_PUNPCKLDQ(mm3, mm3); /* punpckldq */
    mm7 = MMX_PUNPCKHDQ(mm7, mm7); /* punpckhdq */
    mm4 = MMX_PMULLW(mm4, mm2); /* pmullw */
    MMX_STORE(esi + -64, mm3); /* movq */
    mm3 = mm1; /* movq */
    MMX_STORE(esi + -56, mm7); /* movq */
    mm1 = MMX_PUNPCKLDQ(mm1, mm1); /* punpckldq */
    mm3 = MMX_PUNPCKHDQ(mm3, mm3); /* punpckhdq */
    mm7 = mm6; /* movq */
    MMX_STORE(esi + -48, mm1); /* movq */
    mm6 = MMX_PUNPCKLDQ(mm6, mm6); /* punpckldq */
    MMX_STORE(esi + -40, mm3); /* movq */
    mm7 = MMX_PUNPCKHDQ(mm7, mm7); /* punpckhdq */
    MMX_STORE(esi + -32, mm6); /* movq */
    mm3 = mm4; /* movq */
    MMX_STORE(esi + -24, mm7); /* movq */
    mm4 = MMX_PUNPCKLDQ(mm4, mm4); /* punpckldq */
    mm3 = MMX_PUNPCKHDQ(mm3, mm3); /* punpckhdq */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MMX_STORE(esi + -16, mm4); /* movq */
    MMX_STORE(esi + -8, mm3); /* movq */
    if (CMP_B(_fa, _fb)) goto loc_002BF650; /* jb: below (unsigned <) */

loc_002BF6F7: ;
    MEM32(0x661AA0) = esi;
    MEM32(0x661AA8) = ecx;
    edi = MEM32(0x661AA4);
    edx = MEM32(0x661AAC);
    eax = MEM32(esp + 0x14);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */
    /* nop */

loc_002BF720: ;
    mm3 = MMX_FROM32(MEM32(edx)); /* movd */
    mm4 = MMX_PXOR(mm4, mm4); /* pxor */
    mm6 = MMX_FROM32(MEM32(edx + 4)); /* movd */
    mm3 = MMX_PUNPCKLBW(mm3, mm4); /* punpcklbw */
    mm3 = MMX_PSUBUSW(mm3, mm0); /* psubusw */
    mm6 = MMX_PUNPCKLBW(mm6, mm4); /* punpcklbw */
    mm6 = MMX_PSUBUSW(mm6, mm0); /* psubusw */
    mm3 = MMX_PSLLW(mm3, 2u); /* psllw */
    mm3 = MMX_PMULHW(mm3, mm5); /* pmulhw */
    mm6 = MMX_PSLLW(mm6, 2u); /* psllw */
    mm7 = MMX_MEM(0x336738); /* movq */
    mm6 = MMX_PMULHW(mm6, mm5); /* pmulhw */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm6 = MMX_PADDSW(mm6, mm7); /* paddsw */
    mm1 = mm3; /* movq */
    mm3 = MMX_PUNPCKLWD(mm3, mm3); /* punpcklwd */
    mm1 = MMX_PUNPCKHWD(mm1, mm1); /* punpckhwd */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    mm1 = MMX_PMULLW(mm1, mm2); /* pmullw */
    mm6 = MMX_PSUBUSW(mm6, mm7); /* psubusw */
    mm4 = mm6; /* movq */
    mm6 = MMX_PUNPCKLWD(mm6, mm6); /* punpcklwd */
    mm4 = MMX_PUNPCKHWD(mm4, mm4); /* punpckhwd */
    mm6 = MMX_PMULLW(mm6, mm2); /* pmullw */
    mm7 = mm3; /* movq */
    mm3 = MMX_PUNPCKLDQ(mm3, mm3); /* punpckldq */
    mm7 = MMX_PUNPCKHDQ(mm7, mm7); /* punpckhdq */
    mm4 = MMX_PMULLW(mm4, mm2); /* pmullw */
    MMX_STORE(edi + -64, mm3); /* movq */
    mm3 = mm1; /* movq */
    MMX_STORE(edi + -56, mm7); /* movq */
    mm1 = MMX_PUNPCKLDQ(mm1, mm1); /* punpckldq */
    mm3 = MMX_PUNPCKHDQ(mm3, mm3); /* punpckhdq */
    mm7 = mm6; /* movq */
    MMX_STORE(edi + -48, mm1); /* movq */
    mm6 = MMX_PUNPCKLDQ(mm6, mm6); /* punpckldq */
    MMX_STORE(edi + -40, mm3); /* movq */
    mm7 = MMX_PUNPCKHDQ(mm7, mm7); /* punpckhdq */
    MMX_STORE(edi + -32, mm6); /* movq */
    mm3 = mm4; /* movq */
    MMX_STORE(edi + -24, mm7); /* movq */
    mm4 = MMX_PUNPCKLDQ(mm4, mm4); /* punpckldq */
    mm3 = MMX_PUNPCKHDQ(mm3, mm3); /* punpckhdq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MMX_STORE(edi + -16, mm4); /* movq */
    MMX_STORE(edi + -8, mm3); /* movq */
    if (CMP_B(_fa, _fb)) goto loc_002BF720; /* jb: below (unsigned <) */

loc_002BF7C7: ;
    MEM32(0x661AA4) = edi;
    MEM32(0x661AAC) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002BF7E0
 * Original: 0x002BF7E0 - 0x002BFA59 (633 bytes, 161 insns)
 * Folder: bink (section: BINK32X2)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BF7E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x661AA0);
    edx = MEM32(0x661AA8);
    ebp = MEM32(0x661AB0);
    ebx = MEM32(0x661AB4);
    eax = MEM32(esp + 0x14);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x661AA0) = eax;
    mm7 = MMX_MEM(0x336738); /* movq */

loc_002BF811: ;
    mm4 = MMX_FROM32(MEM32(edx)); /* movd */
    mm0 = MMX_PXOR(mm0, mm0); /* pxor */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(ebp));
    mm4 = MMX_PUNPCKLBW(mm4, mm0); /* punpcklbw */
    mm2 = MMX_FROM32(MEM32(eax * 4 + 0x6632C8)); /* movd */
    mm1 = MMX_FROM32(MEM32(eax * 4 + 0x662AC8)); /* movd */
    SET_LO8(eax, MEM8(ebp + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PSUBUSW(mm4, MMX_MEM(0x336728)); /* psubusw */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x6632C8)); /* movd */
    mm1 = MMX_PUNPCKLDQ(mm1, MMX_MEM(eax * 4 + 0x662AC8)); /* punpckldq */
    SET_LO8(eax, MEM8(ebx));
    mm4 = MMX_PSLLW(mm4, 2u); /* psllw */
    mm4 = MMX_PMULHW(mm4, MMX_MEM(0x336730)); /* pmulhw */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x662EC8)); /* movd */
    mm3 = MMX_FROM32(MEM32(eax * 4 + 0x6636C8)); /* movd */
    mm2 = MMX_PADDW(mm2, mm5); /* paddw */
    SET_LO8(eax, MEM8(ebx + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x662EC8)); /* movd */
    mm3 = MMX_PUNPCKLDQ(mm3, MMX_MEM(eax * 4 + 0x6636C8)); /* punpckldq */
    mm6 = MMX_PADDW(mm6, mm5); /* paddw */
    mm2 = MMX_PUNPCKLDQ(mm2, mm6); /* punpckldq */
    mm1 = MMX_PADDW(mm1, mm4); /* paddw */
    mm2 = MMX_PADDW(mm2, mm4); /* paddw */
    mm1 = MMX_PADDSW(mm1, mm7); /* paddsw */
    mm3 = MMX_PADDW(mm3, mm4); /* paddw */
    mm1 = MMX_PSUBUSW(mm1, mm7); /* psubusw */
    mm2 = MMX_PADDSW(mm2, mm7); /* paddsw */
    mm4 = mm1; /* movq */
    mm2 = MMX_PSUBUSW(mm2, mm7); /* psubusw */
    mm1 = MMX_PUNPCKLWD(mm1, mm0); /* punpcklwd */
    mm5 = mm2; /* movq */
    mm2 = MMX_PUNPCKLWD(mm2, mm0); /* punpcklwd */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm2 = MMX_PSLLD(mm2, 8u); /* pslld */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm4 = MMX_PUNPCKHWD(mm4, mm0); /* punpckhwd */
    mm6 = mm3; /* movq */
    mm3 = MMX_PUNPCKLWD(mm3, mm0); /* punpcklwd */
    mm3 = MMX_PSLLD(mm3, 16u); /* pslld */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm1 = MMX_POR(mm1, mm3); /* por */
    mm5 = MMX_PUNPCKHWD(mm5, mm0); /* punpckhwd */
    mm3 = mm1; /* movq */
    mm6 = MMX_PUNPCKHWD(mm6, mm0); /* punpckhwd */
    mm5 = MMX_PSLLD(mm5, 8u); /* pslld */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm1 = MMX_PUNPCKLDQ(mm1, mm1); /* punpckldq */
    mm4 = MMX_POR(mm4, mm5); /* por */
    mm3 = MMX_PUNPCKHDQ(mm3, mm3); /* punpckhdq */
    MMX_STORE(edi + -32, mm1); /* movq */
    mm6 = MMX_PSLLD(mm6, 16u); /* pslld */
    MMX_STORE(edi + -24, mm3); /* movq */
    mm4 = MMX_POR(mm4, mm6); /* por */
    mm6 = mm4; /* movq */
    mm4 = MMX_PUNPCKLDQ(mm4, mm4); /* punpckldq */
    mm6 = MMX_PUNPCKHDQ(mm6, mm6); /* punpckhdq */
    eax = MEM32(0x661AA0);
    MMX_STORE(edi + -16, mm4); /* movq */
    MMX_STORE(edi + -8, mm6); /* movq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002BF811; /* jb: below (unsigned <) */

loc_002BF90F: ;
    MEM32(0x661AA8) = edx;
    edi = MEM32(0x661AA4);
    edx = MEM32(0x661AAC);
    ebp = MEM32(0x661AB0);
    ebx = MEM32(0x661AB4);
    eax = MEM32(esp + 0x14);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x661AA4) = eax;
    mm7 = MMX_MEM(0x336738); /* movq */

loc_002BF942: ;
    mm4 = MMX_FROM32(MEM32(edx)); /* movd */
    mm0 = MMX_PXOR(mm0, mm0); /* pxor */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(ebp));
    mm4 = MMX_PUNPCKLBW(mm4, mm0); /* punpcklbw */
    mm2 = MMX_FROM32(MEM32(eax * 4 + 0x6632C8)); /* movd */
    mm1 = MMX_FROM32(MEM32(eax * 4 + 0x662AC8)); /* movd */
    SET_LO8(eax, MEM8(ebp + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PSUBUSW(mm4, MMX_MEM(0x336728)); /* psubusw */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x6632C8)); /* movd */
    mm1 = MMX_PUNPCKLDQ(mm1, MMX_MEM(eax * 4 + 0x662AC8)); /* punpckldq */
    SET_LO8(eax, MEM8(ebx));
    mm4 = MMX_PSLLW(mm4, 2u); /* psllw */
    mm4 = MMX_PMULHW(mm4, MMX_MEM(0x336730)); /* pmulhw */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x662EC8)); /* movd */
    mm3 = MMX_FROM32(MEM32(eax * 4 + 0x6636C8)); /* movd */
    mm2 = MMX_PADDW(mm2, mm5); /* paddw */
    SET_LO8(eax, MEM8(ebx + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x662EC8)); /* movd */
    mm3 = MMX_PUNPCKLDQ(mm3, MMX_MEM(eax * 4 + 0x6636C8)); /* punpckldq */
    mm6 = MMX_PADDW(mm6, mm5); /* paddw */
    mm2 = MMX_PUNPCKLDQ(mm2, mm6); /* punpckldq */
    mm1 = MMX_PADDW(mm1, mm4); /* paddw */
    mm2 = MMX_PADDW(mm2, mm4); /* paddw */
    mm1 = MMX_PADDSW(mm1, mm7); /* paddsw */
    mm3 = MMX_PADDW(mm3, mm4); /* paddw */
    mm1 = MMX_PSUBUSW(mm1, mm7); /* psubusw */
    mm2 = MMX_PADDSW(mm2, mm7); /* paddsw */
    mm4 = mm1; /* movq */
    mm2 = MMX_PSUBUSW(mm2, mm7); /* psubusw */
    mm1 = MMX_PUNPCKLWD(mm1, mm0); /* punpcklwd */
    mm5 = mm2; /* movq */
    mm2 = MMX_PUNPCKLWD(mm2, mm0); /* punpcklwd */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm2 = MMX_PSLLD(mm2, 8u); /* pslld */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm4 = MMX_PUNPCKHWD(mm4, mm0); /* punpckhwd */
    mm6 = mm3; /* movq */
    mm3 = MMX_PUNPCKLWD(mm3, mm0); /* punpcklwd */
    mm3 = MMX_PSLLD(mm3, 16u); /* pslld */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm1 = MMX_POR(mm1, mm3); /* por */
    mm5 = MMX_PUNPCKHWD(mm5, mm0); /* punpckhwd */
    mm3 = mm1; /* movq */
    mm6 = MMX_PUNPCKHWD(mm6, mm0); /* punpckhwd */
    mm5 = MMX_PSLLD(mm5, 8u); /* pslld */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm1 = MMX_PUNPCKLDQ(mm1, mm1); /* punpckldq */
    mm4 = MMX_POR(mm4, mm5); /* por */
    mm3 = MMX_PUNPCKHDQ(mm3, mm3); /* punpckhdq */
    MMX_STORE(edi + -32, mm1); /* movq */
    mm6 = MMX_PSLLD(mm6, 16u); /* pslld */
    MMX_STORE(edi + -24, mm3); /* movq */
    mm4 = MMX_POR(mm4, mm6); /* por */
    mm6 = mm4; /* movq */
    mm4 = MMX_PUNPCKLDQ(mm4, mm4); /* punpckldq */
    mm6 = MMX_PUNPCKHDQ(mm6, mm6); /* punpckhdq */
    eax = MEM32(0x661AA4);
    MMX_STORE(edi + -16, mm4); /* movq */
    MMX_STORE(edi + -8, mm6); /* movq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002BF942; /* jb: below (unsigned <) */

loc_002BFA40: ;
    MEM32(0x661AAC) = edx;
    MEM32(0x661AB0) = ebp;
    MEM32(0x661AB4) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002BFD80
 * Original: 0x002BFD80 - 0x002BFECC (332 bytes, 98 insns)
 * Folder: bink (section: BINK32M)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BFD80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BFD80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    mm7 = MMX_MEM(0x336738); /* movq */
    mm0 = MMX_MEM(0x336728); /* movq */
    mm2 = MMX_MEM(0x336710); /* movq */
    mm5 = MMX_MEM(0x336730); /* movq */
    esi = MEM32(0x661AA0);
    ecx = MEM32(0x661AA8);
    eax = MEM32(esp + 0x14);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */
    /* nop */

loc_002BFDC0: ;
    mm3 = MMX_FROM32(MEM32(ecx)); /* movd */
    mm4 = MMX_PXOR(mm4, mm4); /* pxor */
    mm6 = MMX_FROM32(MEM32(ecx + 4)); /* movd */
    mm3 = MMX_PUNPCKLBW(mm3, mm4); /* punpcklbw */
    mm3 = MMX_PSUBUSW(mm3, mm0); /* psubusw */
    mm6 = MMX_PUNPCKLBW(mm6, mm4); /* punpcklbw */
    mm6 = MMX_PSUBUSW(mm6, mm0); /* psubusw */
    mm3 = MMX_PSLLW(mm3, 2u); /* psllw */
    mm3 = MMX_PMULHW(mm3, mm5); /* pmulhw */
    mm6 = MMX_PSLLW(mm6, 2u); /* psllw */
    mm6 = MMX_PMULHW(mm6, mm5); /* pmulhw */
    /* nop */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm6 = MMX_PADDSW(mm6, mm7); /* paddsw */
    mm1 = mm3; /* movq */
    mm3 = MMX_PUNPCKLWD(mm3, mm3); /* punpcklwd */
    mm1 = MMX_PUNPCKHWD(mm1, mm1); /* punpckhwd */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    mm1 = MMX_PMULLW(mm1, mm2); /* pmullw */
    mm6 = MMX_PSUBUSW(mm6, mm7); /* psubusw */
    mm4 = mm6; /* movq */
    mm6 = MMX_PUNPCKLWD(mm6, mm6); /* punpcklwd */
    mm4 = MMX_PUNPCKHWD(mm4, mm4); /* punpckhwd */
    mm6 = MMX_PMULLW(mm6, mm2); /* pmullw */
    MMX_STORE(esi + -32, mm3); /* movq */
    mm4 = MMX_PMULLW(mm4, mm2); /* pmullw */
    MMX_STORE(esi + -24, mm1); /* movq */
    MMX_STORE(esi + -16, mm6); /* movq */
    MMX_STORE(esi + -8, mm4); /* movq */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002BFDC0; /* jb: below (unsigned <) */

loc_002BFE29: ;
    MEM32(0x661AA0) = esi;
    MEM32(0x661AA8) = ecx;
    edi = MEM32(0x661AA4);
    edx = MEM32(0x661AAC);
    eax = MEM32(esp + 0x14);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_002BFE50: ;
    mm3 = MMX_FROM32(MEM32(edx)); /* movd */
    mm4 = MMX_PXOR(mm4, mm4); /* pxor */
    mm6 = MMX_FROM32(MEM32(edx + 4)); /* movd */
    mm3 = MMX_PUNPCKLBW(mm3, mm4); /* punpcklbw */
    mm3 = MMX_PSUBUSW(mm3, mm0); /* psubusw */
    mm6 = MMX_PUNPCKLBW(mm6, mm4); /* punpcklbw */
    mm6 = MMX_PSUBUSW(mm6, mm0); /* psubusw */
    mm3 = MMX_PSLLW(mm3, 2u); /* psllw */
    mm3 = MMX_PMULHW(mm3, mm5); /* pmulhw */
    mm6 = MMX_PSLLW(mm6, 2u); /* psllw */
    mm6 = MMX_PMULHW(mm6, mm5); /* pmulhw */
    /* nop */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm6 = MMX_PADDSW(mm6, mm7); /* paddsw */
    mm1 = mm3; /* movq */
    mm3 = MMX_PUNPCKLWD(mm3, mm3); /* punpcklwd */
    mm1 = MMX_PUNPCKHWD(mm1, mm1); /* punpckhwd */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    mm1 = MMX_PMULLW(mm1, mm2); /* pmullw */
    mm6 = MMX_PSUBUSW(mm6, mm7); /* psubusw */
    mm4 = mm6; /* movq */
    mm6 = MMX_PUNPCKLWD(mm6, mm6); /* punpcklwd */
    mm4 = MMX_PUNPCKHWD(mm4, mm4); /* punpckhwd */
    mm6 = MMX_PMULLW(mm6, mm2); /* pmullw */
    MMX_STORE(edi + -32, mm3); /* movq */
    mm4 = MMX_PMULLW(mm4, mm2); /* pmullw */
    MMX_STORE(edi + -24, mm1); /* movq */
    MMX_STORE(edi + -16, mm6); /* movq */
    MMX_STORE(edi + -8, mm4); /* movq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002BFE50; /* jb: below (unsigned <) */

loc_002BFEB9: ;
    MEM32(0x661AA4) = edi;
    MEM32(0x661AAC) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0065507A
 * Original: 0x0065507A - 0x00655087 (13 bytes, 6 insns)
 * Folder: bink (section: BINKDATA)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0065507A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0065507A: ;
    PUSH32(esp, esi);
    RECOMP_UNIMPL("salc", 0x0065507Bu); /* TODO: salc */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebx + 0x60));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebx + 0x60)); }
    SET_LO8(eax, MEM8(ebx + LO8(eax))); /* xlatb */
    if (ecx == 0) { g_seh_ebp = ebp; sub_006550E0(); return; } /* jecxz */

loc_00655082: ;
    ebx = 0x6D4E324B;

}

/**
 * sub_00655129
 * Original: 0x00655129 - 0x0065512F (6 bytes, 2 insns)
 * Folder: bink (section: BINKDATA)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00655129(void)
{

loc_00655129: ;
    edi = 0xDA9FFEFEu;
    esp += 4; return; /* ret */

}

/**
 * sub_00656C69
 * Original: 0x00656C69 - 0x00656D65 (252 bytes, 79 insns)
 * Folder: bink (section: BINKDATA)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00656C69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00656C69: ;
    _cf = 0; /* clc */
    SET_LO8(eax, MEM8(ebx + LO8(eax))); /* xlatb */
    ebp = 0xDF0E3F9;
    { uint64_t _t = (uint64_t)(MEM8(eax + -620165715)) + (uint64_t)(HI8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(eax + -620165715) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(eax + -620165715)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    RECOMP_UNIMPL("iretd", 0x00656C76u); /* TODO: iretd */

    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("daa", 0x00656C78u); /* TODO: daa */
    if (((0x17) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int8_t)(MEM8(0x4273D3D4))) >> ((((0x17) & 31u)) - 1)) & 1);
    MEM8(0x4273D3D4) = (uint32_t)(((int32_t)(int8_t)(MEM8(0x4273D3D4))) >> ((0x17) & 31u));
    _fa = (uint32_t)(MEM8(0x4273D3D4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sar result */
    if (_flags /* jo: overflow */) goto loc_00656CAF;

loc_00656C82: ;
    eax = 0x80556946u;
    RECOMP_UNIMPL("int1", 0x00656C87u); /* TODO: int1 */
    RECOMP_UNIMPL("aam 0x8a", 0x00656C88u); /* TODO: aam 0x8a */
    _cf = !_cf; /* cmc */
    _cf = !_cf; /* cmc */
    { uint64_t _t = (uint64_t)(MEM32(eax)) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00656C8E: ;
    if (ecx == 0) goto loc_00656C93; /* jecxz */

loc_00656C90: ;
    { uint32_t _tmp = edx;
    edx = eax;
    eax = _tmp; }
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + HI8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_00656C93: ;
    g_seh_ebp = ebp; sub_00656C3F(); return; /* tail jmp 0x00656C3F */

    (void)0; /* goto loc_00656CB1 - dead code, label not in function */

    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(eax)) >> 32) & 1);
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    SET_LO8(edx, 0x1E);
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fas < 0)) ? 0x80u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | ((_cf) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (add) */
    SET_LO8(edx, 0xBA);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -1368741126) = MEM32(ebp + -1368741126) ^ 0x242401;
    _fa = (uint32_t)(MEM32(ebp + -1368741126)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx | esp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00656CAF: ;
    ecx = ebp + 0x77;
    RECOMP_UNIMPL("das", 0x00656CB2u); /* TODO: das */
    MEM8(eax) = ROL8(MEM8(eax), 1);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_HI8(ebx, 0x24);
    PUSH32(esp, eax);
    g_df = 1; /* std */
    PUSH32(esp, 0x00656CC0u); RECOMP_ABI_CALL(0x09AD1059u, sub_09AD1059); /* call 0x09AD1059 */

loc_00656CC0: ;
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00656C5D(); return; } /* je: equal / zero */

loc_00656CC2: ;
    RECOMP_UNIMPL("outsd dx, dword ptr [esi]", 0x00656CC2u); /* TODO: outsd dx, dword ptr [esi] */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    ecx = _rc; }
    (void)0; /* goto loc_00656CF0 - dead code, label not in function */

    if (_flags /* jle: less or equal (signed <=) */) goto loc_00656C8E;

loc_00656CC8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + -85)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + -85) (32-bit) */
    _cf = (int)(_fa < _fb);
    _cf = 0; /* logical op clears CF */
    ebp = ebp ^ esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa == 0)) goto loc_00656CD8; /* jbe: below or equal (unsigned <=) */

loc_00656CCF: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | MEM32(eax + 2);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0xF0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0xF0)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0xF0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("in al, 0xf4", 0x00656CD4u); /* TODO: in al, 0xf4 */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */

loc_00656CD8: ;
    eax = ROL32(eax, LO8(ecx));
    { uint32_t _tmp = ebx;
    ebx = eax;
    eax = _tmp; }
    RECOMP_UNIMPL("int1", 0x00656CDBu); /* TODO: int1 */
    { uint32_t _tmp = esp;
    esp = eax;
    eax = _tmp; }
    RECOMP_UNIMPL("aad 0x75", 0x00656CDDu); /* TODO: aad 0x75 */
    RECOMP_UNIMPL("cli", 0x00656CDFu); /* TODO: cli */
    { uint32_t _tmp = MEM32(esp + eax + 0x61200120);
    MEM32(esp + eax + 0x61200120) = eax;
    eax = _tmp; }
    PUSH32(esp, edi);
    RECOMP_UNIMPL("out 0x6c, al", 0x00656CE8u); /* TODO: out 0x6c, al */
    _fa = (uint32_t)(MEM8(edi + 0x10080BA6)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x10080BA6), 0x78 (8-bit) */
    _cf = (int)(_fa < _fb);
    esp += 8937; return; /* ret 8933 */

    MEM16(ebx + -1) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebx - 1] */

    g_seh_ebp = ebp; sub_00656D65(); return; /* fallthrough 0x00656D65 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00656D65
 * Original: 0x00656D65 - 0x00663F94 (53807 bytes, 23 insns)
 * Folder: bink (section: BINKDATA)
 * CC: cdecl, 15753 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00656D65(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00656D65: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _tmp = edx;
    edx = eax;
    eax = _tmp; }
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    RECOMP_UNIMPL("aad 0x3c", 0x00656D68u); /* TODO: aad 0x3c */
    SET_LO8(eax, LO8(eax) ^ 0xEC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, g_recomp_eflags); /* pushfd */
    SET_HI8(ebx, HI8(ebx) | MEM8(ecx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esi = ROL32(esi, 1);
    if (_flags /* jle: less or equal (signed <=) */) (void)0; /* goto loc_00656D6B - dead code, label not in function */

loc_00656D73: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(ebx + -1773115308)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [ebx - 0x69af97ac] */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    ecx = _rc; }
    esp += 63019; return; /* ret 63015 */

    MEM32(ecx) = esi;
    SET_LO8(eax, MEM8(ebx + LO8(eax))); /* xlatb */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - HI8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    if (_flags /* jnp: not parity */) (void)0; /* goto loc_00656D94 - dead code, label not in function */

loc_00656D86: ;
    eax = eax & 0x42EBCF79;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, eax);
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_00656D2B(); return; } /* ja: above (unsigned >) */

loc_00656D8E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    if (CMP_GE(_fas, _fbs)) (void)0; /* goto loc_00656D99 - dead code, label not in function */ /* jge: greater or equal (signed >=) */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
