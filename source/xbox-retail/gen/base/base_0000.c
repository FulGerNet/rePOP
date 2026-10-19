/**
 * PoP SoT xbox-retail - base, chunk 0
 * Ubisoft Base library code no evidence assigns to one part
 * Functions: 208 (0x00092BC0 - 0x0009A840)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_00092BC0
 * Original: 0x00092BC0 - 0x00092C2E (110 bytes, 37 insns)
 * Folder: base (match: xbox-demo 0x00273480, library)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00092BC0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368D28);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esp + 0x14) = eax;
    ecx = esi + 8;
    MEM32(esi) = 0x41FA24;
    edx = edi;
    MEM32(ecx + 0x18) = 0xF;
    MEM32(ecx + 0x14) = eax;
    MEM8(ecx + 4) = LO8(eax);
    ebp = edx + 1;

loc_00092C00: ;
    SET_LO8(ebx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092C00; /* jne: not equal / not zero */

loc_00092C07: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0x00092C11u); RECOMP_ABI_CALL(0x00095120u, sub_00095120); /* call 0x00095120 */

loc_00092C11: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x24) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00092C30
 * Original: 0x00092C30 - 0x00092CA8 (120 bytes, 35 insns)
 * Folder: base (between: 0x00092BC0 and 0x00092CB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092C30: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368A78);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x41FA24;
    MEM32(esp + 0x10) = 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00092C80; /* jb: below (unsigned <) */

loc_00092C61: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092C7F; /* je: equal / zero */

loc_00092C69: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092C77; /* jne: not equal / not zero */

loc_00092C72: ;
    PUSH32(esp, 0x00092C77u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00092C77: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00092C7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092C7Cu); } /* indirect call */
    }

loc_00092C7F: ;
    POP32(esp, edi);

loc_00092C80: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x20) = 0xF;
    MEM32(esi + 0x1C) = 0;
    MEM8(esi + 0xC) = 0;
    MEM32(esi) = 0x41FA2C;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00092CB0
 * Original: 0x00092CB0 - 0x00092D1C (108 bytes, 30 insns)
 * Folder: base (match: xbox-demo 0x00273560, library)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092CB0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F28);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00092CD5u); RECOMP_ABI_CALL(0x00092BC0u, sub_00092BC0); /* call 0x00092BC0 */

loc_00092CD5: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x41FA28;
    MEM32(esi + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00092CE9; /* je: equal / zero */

loc_00092CE6: ;
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00092CE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x24) = 1;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00092D0A; /* je: equal / zero */

loc_00092CFC: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00092D0A; /* jne: not equal / not zero */

loc_00092D04: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00092D0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092D08u); } /* indirect call */
    }

loc_00092D0A: ;
    ecx = MEM32(esp);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00092D20
 * Original: 0x00092D20 - 0x00092D36 (22 bytes, 9 insns)
 * Folder: base (between: 0x00092CB0 and 0x00092D40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092D20: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp) = 0;
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00092D34; /* je: equal / zero */

loc_00092D31: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00092D34: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00092D40
 * Original: 0x00092D40 - 0x00092E0D (205 bytes, 72 insns)
 * Folder: base (match: xbox-demo 0x002735F0, library)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00092D40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x368F0B);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edi = ecx;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x00092D70u); RECOMP_ABI_CALL(0x00092BC0u, sub_00092BC0); /* call 0x00092BC0 */

loc_00092D70: ;
    MEM8(esp + 0x18) = 1;
    ecx = esi + 0x28;
    MEM32(esi) = 0x41FA30;
    eax = ebp;
    MEM32(ecx + 0x18) = 0xF;
    MEM32(ecx + 0x14) = ebx;
    MEM8(ecx + 4) = LO8(ebx);
    edi = eax + 1;

loc_00092D90: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092D90; /* jne: not equal / not zero */

loc_00092D97: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0x00092DA1u); RECOMP_ABI_CALL(0x00095120u, sub_00095120); /* call 0x00095120 */

loc_00092DA1: ;
    ebp = MEM32(esp + 0x2C);
    ecx = esi + 0x44;
    MEM8(esp + 0x18) = 2;
    eax = ebp;
    MEM32(ecx + 0x18) = 0xF;
    MEM32(ecx + 0x14) = ebx;
    MEM8(ecx + 4) = LO8(ebx);
    edi = eax + 1;
    /* nop */

loc_00092DC0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092DC0; /* jne: not equal / not zero */

loc_00092DC7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0x00092DD1u); RECOMP_ABI_CALL(0x00095120u, sub_00095120); /* call 0x00095120 */

loc_00092DD1: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0x60) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00092DDF; /* je: equal / zero */

loc_00092DDC: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00092DDF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00092DF6; /* je: equal / zero */

loc_00092DEB: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00092DF6; /* jne: not equal / not zero */

loc_00092DF0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00092DF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092DF4u); } /* indirect call */
    }

loc_00092DF6: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00092E10
 * Original: 0x00092E10 - 0x00092E26 (22 bytes, 9 insns)
 * Folder: base (between: 0x00092D40 and 0x00092E30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092E10: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp) = 0;
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00092E24; /* je: equal / zero */

loc_00092E21: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00092E24: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00092E30
 * Original: 0x00092E30 - 0x00092E95 (101 bytes, 37 insns)
 * Folder: base (match: xbox-demo 0x002736E0, library)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092E30: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esi) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00092E4A; /* je: equal / zero */

loc_00092E37: ;
    PUSH32(esp, esi);
    eax = 0x100;
    edx = 0xFF;
    PUSH32(esp, 0x00092E47u); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_00092E47: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00092E4A: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00092E59; /* je: equal / zero */

loc_00092E51: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092E51; /* jne: not equal / not zero */

loc_00092E59: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    eax = 0x100;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    edx = 0xFF;
    PUSH32(esp, 0x00092E75u); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_00092E75: ;
    SET_LO8(ecx, MEM8(esi));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00092E88; /* je: equal / zero */

loc_00092E80: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092E80; /* jne: not equal / not zero */

loc_00092E88: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x100) = eax;
    eax = esi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00092EA0
 * Original: 0x00092EA0 - 0x00092ECF (47 bytes, 18 insns)
 * Folder: base (between: 0x00092E30 and 0x00092F30)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092EA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00092EA8u); RECOMP_ABI_CALL(0x00092C30u, sub_00092C30); /* call 0x00092C30 */

loc_00092EA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092EC9; /* je: equal / zero */

loc_00092EAF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092EC9; /* je: equal / zero */

loc_00092EB3: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092EC1; /* jne: not equal / not zero */

loc_00092EBC: ;
    PUSH32(esp, 0x00092EC1u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00092EC1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00092EC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092EC6u); } /* indirect call */
    }

loc_00092EC9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00092ED0
 * Original: 0x00092ED0 - 0x00092F00 (48 bytes, 19 insns)
 * Folder: base (between: 0x00092E30 and 0x00092F30)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092ED0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00092ED9u); RECOMP_ABI_CALL(0x00092F30u, sub_00092F30); /* call 0x00092F30 */

loc_00092ED9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092EFA; /* je: equal / zero */

loc_00092EE0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092EFA; /* je: equal / zero */

loc_00092EE4: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092EF2; /* jne: not equal / not zero */

loc_00092EED: ;
    PUSH32(esp, 0x00092EF2u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00092EF2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00092EFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092EF7u); } /* indirect call */
    }

loc_00092EFA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00092EE4
 * Original: 0x00092EE4 - 0x00092F00 (28 bytes, 11 insns)
 * Folder: base (between: 0x00092E30 and 0x00092F30)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092EE4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092EE4: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092EF2; /* jne: not equal / not zero */

loc_00092EED: ;
    PUSH32(esp, 0x00092EF2u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00092EF2: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00092EFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092EF7u); } /* indirect call */
    }

loc_00092EFA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00092F00
 * Original: 0x00092F00 - 0x00092F30 (48 bytes, 19 insns)
 * Folder: base (between: 0x00092E30 and 0x00092F30)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092F00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00092F09u); RECOMP_ABI_CALL(0x00092F90u, sub_00092F90); /* call 0x00092F90 */

loc_00092F09: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092F2A; /* je: equal / zero */

loc_00092F10: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092F2A; /* je: equal / zero */

loc_00092F14: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092F22; /* jne: not equal / not zero */

loc_00092F1D: ;
    PUSH32(esp, 0x00092F22u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00092F22: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00092F2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092F27u); } /* indirect call */
    }

loc_00092F2A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00092F30
 * Original: 0x00092F30 - 0x00092F88 (88 bytes, 25 insns)
 * Folder: base (match: xbox-demo 0x002737E0, library)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092F30: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368D08);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    MEM32(esp + 0xC) = 0;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092F67; /* je: equal / zero */

loc_00092F59: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00092F67; /* jne: not equal / not zero */

loc_00092F61: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00092F67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092F65u); } /* indirect call */
    }

loc_00092F67: ;
    ecx = esi;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00092F76u); RECOMP_ABI_CALL(0x00092C30u, sub_00092C30); /* call 0x00092C30 */

loc_00092F76: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00092F90
 * Original: 0x00092F90 - 0x00093054 (196 bytes, 63 insns)
 * Folder: base (between: 0x00092F30 and 0x00093090)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092F90: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368CEE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 2;
    ecx = MEM32(esi + 0x60);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092FC8; /* je: equal / zero */

loc_00092FBD: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00092FC8; /* jne: not equal / not zero */

loc_00092FC2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00092FC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092FC6u); } /* indirect call */
    }

loc_00092FC8: ;
    MEM8(esp + 0x14) = 1;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00092FF0; /* jb: below (unsigned <) */

loc_00092FD3: ;
    edi = MEM32(esi + 0x48);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092FF0; /* je: equal / zero */

loc_00092FDA: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092FE8; /* jne: not equal / not zero */

loc_00092FE3: ;
    PUSH32(esp, 0x00092FE8u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00092FE8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00092FF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092FEDu); } /* indirect call */
    }

loc_00092FF0: ;
    MEM32(esi + 0x5C) = 0xF;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x48) = LO8(ebx);
    MEM8(esp + 0x14) = LO8(ebx);
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00093024; /* jb: below (unsigned <) */

loc_00093007: ;
    edi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093024; /* je: equal / zero */

loc_0009300E: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009301C; /* jne: not equal / not zero */

loc_00093017: ;
    PUSH32(esp, 0x0009301Cu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0009301C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00093024u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093021u); } /* indirect call */
    }

loc_00093024: ;
    MEM32(esi + 0x40) = 0xF;
    MEM32(esi + 0x3C) = ebx;
    ecx = esi;
    MEM8(esi + 0x2C) = LO8(ebx);
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00093040u); RECOMP_ABI_CALL(0x00092C30u, sub_00092C30); /* call 0x00092C30 */

loc_00093040: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00093060
 * Original: 0x00093060 - 0x00093065 (5 bytes, 1 insns)
 * Folder: base (between: 0x00092F30 and 0x00093090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00093060: ;
    g_seh_ebp = ebp; sub_00094850(); return; /* tail jmp 0x00094850 */

}

/**
 * sub_00093070
 * Original: 0x00093070 - 0x00093081 (17 bytes, 5 insns)
 * Folder: base (between: 0x00092F30 and 0x00093090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093070: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x200) = ecx;
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 0x100) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00093090
 * Original: 0x00093090 - 0x0009310B (123 bytes, 39 insns)
 * Folder: base (match: xbox-demo 0x00273900, library)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093090: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F28);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = 0;
    eax = MEM32(edi + 0x200);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000930DB; /* je: equal / zero */

loc_000930BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000930CE; /* je: equal / zero */

loc_000930C0: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000930CE; /* jne: not equal / not zero */

loc_000930C8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000930CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000930CCu); } /* indirect call */
    }

loc_000930CE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi + 0x200) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000930DB; /* je: equal / zero */

loc_000930D8: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000930DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_000930F9; /* je: equal / zero */

loc_000930E7: ;
    eax = MEM32(esi + 8);
    ecx = esi + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    if ((_fa != 0)) goto loc_000930F9; /* jne: not equal / not zero */

loc_000930F3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000930F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000930F7u); } /* indirect call */
    }

loc_000930F9: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00093110
 * Original: 0x00093110 - 0x00093129 (25 bytes, 9 insns)
 * Folder: base (between: 0x00093090 and 0x000931B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093110: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0x200);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp) = 0;
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00093127; /* je: equal / zero */

loc_00093124: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00093127: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00093130
 * Original: 0x00093130 - 0x000931A1 (113 bytes, 33 insns)
 * Folder: base (between: 0x00093090 and 0x000931B0)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00093130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093130: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    eax = 0x1000;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edx = eax;
    PUSH32(esp, 0x00093144u); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_00093144: ;
    eax = ebx + 0x1000;
    ecx = 0x40;
    esi = ebp;
    edi = eax;
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
    esi = ebp + 0x100;
    edi = eax + 0x100;
    ecx = 0x40;
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
    ecx = MEM32(ebp + 0x200);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 0x200) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0009317E; /* je: equal / zero */

loc_0009317B: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009317E: ;
    eax = MEM32(esp + 0x14);
    esi = ebx;
    MEM32(ebx + 0x1204) = eax;
    MEM32(ebx + 0x1208) = 0;
    PUSH32(esp, 0x00093199u); RECOMP_ABI_CALL(0x000931B0u, sub_000931B0); /* call 0x000931B0 */

loc_00093199: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000931B0
 * Original: 0x000931B0 - 0x0009320F (95 bytes, 36 insns)
 * Folder: base (match: xbox-demo 0x002739F0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000931B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000931B0: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000931BF; /* je: equal / zero */

loc_000931B7: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000931B7; /* jne: not equal / not zero */

loc_000931BF: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    eax = 0x1000;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = 0xFFF;
    ecx = 0x41FA60;
    PUSH32(esp, 0x000931DCu); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_000931DC: ;
    SET_LO8(ecx, MEM8(esi));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000931EF; /* je: equal / zero */

loc_000931E7: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000931E7; /* jne: not equal / not zero */

loc_000931EF: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = 0x1000;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi + 0x1000;
    edx = 0xFFF;
    PUSH32(esp, 0x0009320Du); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_0009320D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00093210
 * Original: 0x00093210 - 0x00093229 (25 bytes, 10 insns)
 * Folder: base (between: 0x000931B0 and 0x000933C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093210: ;
    eax = MEM32(eax + 0x200);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093228; /* je: equal / zero */

loc_0009321A: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00093228; /* jne: not equal / not zero */

loc_00093222: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00093228u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093226u); } /* indirect call */
    }

loc_00093228: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00093230
 * Original: 0x00093230 - 0x00093249 (25 bytes, 10 insns)
 * Folder: base (between: 0x000931B0 and 0x000933C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093230: ;
    eax = MEM32(ecx + 0x1200);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093248; /* je: equal / zero */

loc_0009323A: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00093248; /* jne: not equal / not zero */

loc_00093242: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00093248u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093246u); } /* indirect call */
    }

loc_00093248: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00093250
 * Original: 0x00093250 - 0x000932FD (173 bytes, 47 insns)
 * Folder: base (between: 0x000931B0 and 0x000933C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093250: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x369106);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x46B1A8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093279; /* jne: not equal / not zero */

loc_00093272: ;
    PUSH32(esp, 0x00093277u); RECOMP_ABI_CALL(0x00096160u, sub_00096160); /* call 0x00096160 */

loc_00093277: ;
    edi = eax;

loc_00093279: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00093284u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009327Eu); } /* indirect call */
    }

loc_00093284: ;
    MEM32(esp + 0x14) = 0;
    SET_LO8(ecx, MEM8(0x76BD68));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000932C1; /* jne: not equal / not zero */

loc_0009329B: ;
    MEM32(0x76BD68) = MEM32(0x76BD68) | eax;
    _fa = (uint32_t)(MEM32(0x76BD68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x46B18C);
    esi = 0x76BD64;
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0x000932B4u); RECOMP_ABI_CALL(0x00094710u, sub_00094710); /* call 0x00094710 */

loc_000932B4: ;
    PUSH32(esp, 0x369B70);
    PUSH32(esp, 0x000932BEu); RECOMP_ABI_CALL(0x003472BDu, sub_003472BD); /* call 0x003472BD */

loc_000932BE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000932C1: ;
    eax = MEM32(0x46B18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000932DD; /* jne: not equal / not zero */

loc_000932CA: ;
    SET_LO8(eax, MEM8(0x758648));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000932DD; /* je: equal / zero */

loc_000932D3: ;
    ecx = 0x10;
    PUSH32(esp, 0x000932DDu); RECOMP_ABI_CALL(0x00098D40u, sub_00098D40); /* call 0x00098D40 */

loc_000932DD: ;
    esi = MEM32(0x46B18C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x000932EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000932E4u); } /* indirect call */
    }

loc_000932EA: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00093300
 * Original: 0x00093300 - 0x000933B3 (179 bytes, 52 insns)
 * Folder: base (between: 0x000931B0 and 0x000933C0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093300: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3690DE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    MEM32(esi + 0x104) = ebx;
    MEM32(esi + 0x108) = ebx;
    MEM32(esi + 0x10C) = ebx;
    eax = esi + 0x110;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ebx;
    { uint32_t _icall_target = MEM32(0x418154); PUSH32(esp, 0x00093340u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009333Au); } /* indirect call */
    }

loc_00093340: ;
    edx = 0x41FA5C;
    eax = esi;
    SET_LO8(ecx, 0x2F);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00093350;

    /* nop */

loc_00093350: ;
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093350; /* jne: not equal / not zero */

loc_0009335B: ;
    MEM8(eax) = LO8(ebx);
    eax = MEM32(0x46B1B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009336B; /* jne: not equal / not zero */

loc_00093366: ;
    PUSH32(esp, 0x0009336Bu); RECOMP_ABI_CALL(0x00097A70u, sub_00097A70); /* call 0x00097A70 */

loc_0009336B: ;
    PUSH32(esp, 0x100000);
    PUSH32(esp, eax);
    eax = 0x20000;
    PUSH32(esp, 0x0009337Bu); RECOMP_ABI_CALL(0x00097B20u, sub_00097B20); /* call 0x00097B20 */

loc_0009337B: ;
    ecx = esi;
    PUSH32(esp, 0x00093382u); RECOMP_ABI_CALL(0x000933C0u, sub_000933C0); /* call 0x000933C0 */

loc_00093382: ;
    PUSH32(esp, 0x41FB20);
    PUSH32(esp, 0x41FB14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00093392u); RECOMP_ABI_CALL(0x00093CA0u, sub_00093CA0); /* call 0x00093CA0 */

loc_00093392: ;
    PUSH32(esp, 0x41FB20);
    ecx = esi;
    PUSH32(esp, 0x0009339Eu); RECOMP_ABI_CALL(0x00093A00u, sub_00093A00); /* call 0x00093A00 */

loc_0009339E: ;
    ecx = MEM32(esp + 8);
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
 * sub_00093349
 * Original: 0x00093349 - 0x000933B3 (106 bytes, 33 insns)
 * Folder: base (between: 0x000931B0 and 0x000933C0)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093349(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093349: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00093350;

    /* nop */

loc_00093350: ;
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093350; /* jne: not equal / not zero */

loc_0009335B: ;
    MEM8(eax) = LO8(ebx);
    eax = MEM32(0x46B1B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009336B; /* jne: not equal / not zero */

loc_00093366: ;
    PUSH32(esp, 0x0009336Bu); RECOMP_ABI_CALL(0x00097A70u, sub_00097A70); /* call 0x00097A70 */

loc_0009336B: ;
    PUSH32(esp, 0x100000);
    PUSH32(esp, eax);
    eax = 0x20000;
    PUSH32(esp, 0x0009337Bu); RECOMP_ABI_CALL(0x00097B20u, sub_00097B20); /* call 0x00097B20 */

loc_0009337B: ;
    ecx = esi;
    PUSH32(esp, 0x00093382u); RECOMP_ABI_CALL(0x000933C0u, sub_000933C0); /* call 0x000933C0 */

loc_00093382: ;
    PUSH32(esp, 0x41FB20);
    PUSH32(esp, 0x41FB14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00093392u); RECOMP_ABI_CALL(0x00093CA0u, sub_00093CA0); /* call 0x00093CA0 */

loc_00093392: ;
    PUSH32(esp, 0x41FB20);
    ecx = esi;
    PUSH32(esp, 0x0009339Eu); RECOMP_ABI_CALL(0x00093A00u, sub_00093A00); /* call 0x00093A00 */

loc_0009339E: ;
    ecx = MEM32(esp + 8);
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
 * sub_000933C0
 * Original: 0x000933C0 - 0x00093410 (80 bytes, 23 insns)
 * Folder: base (match: xbox-demo 0x00273BC0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000933C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000933C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x110;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = esi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x000933EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000933E5u); } /* indirect call */
    }

loc_000933EB: ;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x000933F8u); RECOMP_ABI_CALL(0x00096210u, sub_00096210); /* call 0x00096210 */

loc_000933F8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x000933FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000933F9u); } /* indirect call */
    }

loc_000933FF: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00093410
 * Original: 0x00093410 - 0x000935F0 (480 bytes, 142 insns)
 * Folder: base (between: 0x000933C0 and 0x000935F0)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00093410: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x3691C1);
    PUSH32(esp, eax);
    eax = 0x151C;
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, 0x0009342Fu); RECOMP_ABI_CALL(0x00347D50u, sub_00347D50); /* call 0x00347D50 */

loc_0009342F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1534);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x110;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x1C) = ebp;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x0009344Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093445u); } /* indirect call */
    }

loc_0009344B: ;
    ecx = MEM32(esp + 0x1540);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x100;
    edx = 0xFF;
    MEM32(esp + 0x1538) = ebx;
    PUSH32(esp, 0x0009346Fu); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_0009346F: ;
    SET_LO8(eax, MEM8(esp + 0x1548));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    edi = esp + 0x1C;
    MEM8(esp + 0x13) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00093490; /* je: equal / zero */

loc_00093485: ;
    _fa = (uint32_t)(MEM8(esp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x1C), 0x2F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093490; /* jne: not equal / not zero */

loc_0009348C: ;
    edi = esp + 0x1D;

loc_00093490: ;
    eax = MEM32(0x46B18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009349E; /* jne: not equal / not zero */

loc_00093499: ;
    PUSH32(esp, 0x0009349Eu); RECOMP_ABI_CALL(0x00093250u, sub_00093250); /* call 0x00093250 */

loc_0009349E: ;
    esi = eax;

loc_000934A0: ;
    _fa = (uint32_t)(MEM8(esp + 0x1544)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x1544), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000934CF; /* je: equal / zero */

loc_000934A9: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000934C1; /* je: equal / zero */

loc_000934B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000935B4; /* je: equal / zero */

loc_000934B9: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000934B1; /* jne: not equal / not zero */

loc_000934C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000934C3: ;
    SET_LO8(ecx, MEM8(eax + 1));
    edi = eax;
    MEM8(esp + 0x13) = LO8(ecx);
    MEM8(eax + 1) = LO8(ebx);

loc_000934CF: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000934D9u); RECOMP_ABI_CALL(0x00093670u, sub_00093670); /* call 0x00093670 */

loc_000934D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009357A; /* jne: not equal / not zero */

loc_000934E1: ;
    MEM32(esp + 0x31C) = ebx;
    MEM8(esp + 0x11C) = LO8(ebx);
    MEM8(esp + 0x21C) = LO8(ebx);
    PUSH32(esp, esi);
    ebx = esp + 0x120;
    ecx = esp + 0x20;
    MEM8(esp + 0x1538) = 1;
    PUSH32(esp, 0x0009350Fu); RECOMP_ABI_CALL(0x00094310u, sub_00094310); /* call 0x00094310 */

loc_0009350F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000935BB; /* jne: not equal / not zero */

loc_00093517: ;
    eax = esp + 0x14;
    ecx = esp + 0x11C;
    PUSH32(esp, 0x00093527u); RECOMP_ABI_CALL(0x00093110u, sub_00093110); /* call 0x00093110 */

loc_00093527: ;
    MEM8(esp + 0x1534) = 2;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    edx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00093539u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093536u); } /* indirect call */
    }

loc_00093539: ;
    MEM8(esp + 0x1534) = 1;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093557; /* je: equal / zero */

loc_00093549: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00093557; /* jne: not equal / not zero */

loc_00093551: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00093557u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093555u); } /* indirect call */
    }

loc_00093557: ;
    MEM8(esp + 0x1534) = 0;
    eax = MEM32(esp + 0x31C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093578; /* je: equal / zero */

loc_0009356A: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00093578; /* jne: not equal / not zero */

loc_00093572: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00093578u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093576u); } /* indirect call */
    }

loc_00093578: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009357A: ;
    _fa = (uint32_t)(MEM8(esp + 0x1544)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x1544), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093592; /* je: equal / zero */

loc_00093583: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(edi) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000934A0; /* jne: not equal / not zero */

loc_00093592: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00093599u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093593u); } /* indirect call */
    }

loc_00093599: ;
    ecx = MEM32(esp + 0x152C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x1528) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1528;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000935B4: ;
    eax = ecx;
    goto loc_000934C3;

loc_000935BB: ;
    PUSH32(esp, 3);
    eax = esp + 0x120;
    PUSH32(esp, eax);
    ecx = 0x41FA44;
    ebx = esp + 0x328;
    PUSH32(esp, 0x000935D6u); RECOMP_ABI_CALL(0x00093130u, sub_00093130); /* call 0x00093130 */

loc_000935D6: ;
    PUSH32(esp, 0x42ABF4);
    ecx = ebx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000935E3u); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_000935E3: ;
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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000935F0
 * Original: 0x000935F0 - 0x00093661 (113 bytes, 34 insns)
 * Folder: base (match: xbox-demo 0x00273E30, library)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000935F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000935F0: ;
    PUSH32(esp, ebx);
    eax = ecx;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ebp + 0x1000;
    ebx = eax + 0x1000;
    ecx = 0x400;
    esi = ebp;
    edi = eax;
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
    esi = edx;
    ecx = 0x40;
    edi = ebx;
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
    esi = edx + 0x100;
    edi = ebx + 0x100;
    ecx = 0x40;
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
    edx = MEM32(edx + 0x200);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebx + 0x200) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00093642; /* je: equal / zero */

loc_0009363F: ;
    MEM32(edx + 8) = MEM32(edx + 8) + 1;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00093642: ;
    ecx = MEM32(ebp + 0x1204);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x1204) = ecx;
    edx = MEM32(ebp + 0x1208);
    POP32(esp, ebp);
    MEM32(eax + 0x1208) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00093670
 * Original: 0x00093670 - 0x00093784 (276 bytes, 77 insns)
 * Folder: base (between: 0x000935F0 and 0x000938B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093670: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3684E1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x20C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esi + 0x110;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x0009369Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093698u); } /* indirect call */
    }

loc_0009369E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x21C) = eax;
    MEM32(esp + 0x210) = eax;
    MEM8(esp + 0x10) = LO8(eax);
    MEM8(esp + 0x110) = LO8(eax);
    ecx = MEM32(esp + 0x224);
    PUSH32(esp, esi);
    ebx = esp + 0x14;
    MEM8(esp + 0x220) = 1;
    PUSH32(esp, 0x000936D2u); RECOMP_ABI_CALL(0x00094310u, sub_00094310); /* call 0x00094310 */

loc_000936D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093741; /* jne: not equal / not zero */

loc_000936D6: ;
    eax = esp + 8;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000936E3u); RECOMP_ABI_CALL(0x00093110u, sub_00093110); /* call 0x00093110 */

loc_000936E3: ;
    MEM8(esp + 0x21C) = 2;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    edx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000936F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000936F2u); } /* indirect call */
    }

loc_000936F5: ;
    SET_LO8(ebx, LO8(eax));
    MEM8(esp + 0x21C) = 1;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093715; /* je: equal / zero */

loc_00093707: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00093715; /* jne: not equal / not zero */

loc_0009370F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00093715u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093713u); } /* indirect call */
    }

loc_00093715: ;
    MEM8(esp + 0x21C) = 0;
    eax = MEM32(esp + 0x210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093736; /* je: equal / zero */

loc_00093728: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00093736; /* jne: not equal / not zero */

loc_00093730: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00093736u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093734u); } /* indirect call */
    }

loc_00093736: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x0009373Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093737u); } /* indirect call */
    }

loc_0009373D: ;
    SET_LO8(eax, LO8(ebx));
    goto loc_0009376B;

loc_00093741: ;
    MEM8(esp + 0x21C) = 0;
    eax = MEM32(esp + 0x210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093762; /* je: equal / zero */

loc_00093754: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00093762; /* jne: not equal / not zero */

loc_0009375C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00093762u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093760u); } /* indirect call */
    }

loc_00093762: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00093769u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093763u); } /* indirect call */
    }

loc_00093769: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0009376B: ;
    ecx = MEM32(esp + 0x214);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x218;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00093790
 * Original: 0x00093790 - 0x000938A4 (276 bytes, 77 insns)
 * Folder: base (between: 0x000935F0 and 0x000938B0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093790: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3684E1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x20C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esi + 0x110;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x000937BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000937B8u); } /* indirect call */
    }

loc_000937BE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x21C) = eax;
    MEM32(esp + 0x210) = eax;
    MEM8(esp + 0x10) = LO8(eax);
    MEM8(esp + 0x110) = LO8(eax);
    ecx = MEM32(esp + 0x224);
    PUSH32(esp, esi);
    ebx = esp + 0x14;
    MEM8(esp + 0x220) = 1;
    PUSH32(esp, 0x000937F2u); RECOMP_ABI_CALL(0x00094310u, sub_00094310); /* call 0x00094310 */

loc_000937F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093861; /* jne: not equal / not zero */

loc_000937F6: ;
    eax = esp + 8;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00093803u); RECOMP_ABI_CALL(0x00093110u, sub_00093110); /* call 0x00093110 */

loc_00093803: ;
    MEM8(esp + 0x21C) = 2;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    edx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00093815u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093812u); } /* indirect call */
    }

loc_00093815: ;
    SET_LO8(ebx, LO8(eax));
    MEM8(esp + 0x21C) = 1;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093835; /* je: equal / zero */

loc_00093827: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00093835; /* jne: not equal / not zero */

loc_0009382F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00093835u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093833u); } /* indirect call */
    }

loc_00093835: ;
    MEM8(esp + 0x21C) = 0;
    eax = MEM32(esp + 0x210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093856; /* je: equal / zero */

loc_00093848: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00093856; /* jne: not equal / not zero */

loc_00093850: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00093856u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093854u); } /* indirect call */
    }

loc_00093856: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x0009385Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093857u); } /* indirect call */
    }

loc_0009385D: ;
    SET_LO8(eax, LO8(ebx));
    goto loc_0009388B;

loc_00093861: ;
    MEM8(esp + 0x21C) = 0;
    eax = MEM32(esp + 0x210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093882; /* je: equal / zero */

loc_00093874: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00093882; /* jne: not equal / not zero */

loc_0009387C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00093882u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093880u); } /* indirect call */
    }

loc_00093882: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00093889u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093883u); } /* indirect call */
    }

loc_00093889: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0009388B: ;
    ecx = MEM32(esp + 0x214);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x218;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000938B0
 * Original: 0x000938B0 - 0x000939FF (335 bytes, 105 insns)
 * Folder: base (match: xbox-demo 0x00273FD0, library)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000938B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000938B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x36890B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x128);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = edi + 0x110;
    PUSH32(esp, ebx);
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x000938E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000938E3u); } /* indirect call */
    }

loc_000938E9: ;
    MEM32(esp + 0x124) = 0;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009390D; /* je: equal / zero */

loc_000938FB: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00093906; /* jne: not equal / not zero */

loc_00093900: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00093906u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093904u); } /* indirect call */
    }

loc_00093906: ;
    MEM32(ebp) = 0;

loc_0009390D: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x130);
    eax = 0x100;
    edx = 0xFF;
    MEM8(esp + 0x1C) = 0;
    PUSH32(esp, 0x0009392Du); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_0009392D: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x18;
    if (CMP_EQ(_fa, _fb)) goto loc_00093948; /* je: equal / zero */

loc_0009393C: ;
    /* nop */

loc_00093940: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093940; /* jne: not equal / not zero */

loc_00093948: ;
    esi = MEM32(edi + 0x108);
    edi = MEM32(edi + 0x104);
    edx = esp + 0x18;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x118) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00093972u); RECOMP_ABI_CALL(0x00094C50u, sub_00094C50); /* call 0x00094C50 */

loc_00093972: ;
    edi = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000939D8; /* je: equal / zero */

loc_0009397D: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0x10 (32-bit) */
    ecx = MEM32(esi + 0x1C);
    if (CMP_B(_fa, _fb)) goto loc_0009398D; /* jb: below (unsigned <) */

loc_00093988: ;
    eax = MEM32(esi + 0xC);
    goto loc_00093990;

loc_0009398D: ;
    eax = esi + 0xC;

loc_00093990: ;
    MEM8(esp + 0x10) = 0;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000939A4u); RECOMP_ABI_CALL(0x00094C00u, sub_00094C00); /* call 0x00094C00 */

loc_000939A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000939D8; /* jne: not equal / not zero */

loc_000939AB: ;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000939CD; /* je: equal / zero */

loc_000939B2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000939C1; /* je: equal / zero */

loc_000939B6: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000939C1; /* jne: not equal / not zero */

loc_000939BB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000939C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000939BFu); } /* indirect call */
    }

loc_000939C1: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000939CD; /* je: equal / zero */

loc_000939CA: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000939CD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x000939D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000939CEu); } /* indirect call */
    }

loc_000939D4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000939E4;

loc_000939D8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x000939DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000939D9u); } /* indirect call */
    }

loc_000939DF: ;
    eax = 3;

loc_000939E4: ;
    ecx = MEM32(esp + 0x11C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00093A00
 * Original: 0x00093A00 - 0x00093A9A (154 bytes, 46 insns)
 * Folder: base (match: xbox-demo 0x00274120, library)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00093A00: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3685A8);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x110;
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = edi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00093A2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093A29u); } /* indirect call */
    }

loc_00093A2F: ;
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00093A3Du); RECOMP_ABI_CALL(0x00093670u, sub_00093670); /* call 0x00093670 */

loc_00093A3D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093A7A; /* je: equal / zero */

loc_00093A41: ;
    PUSH32(esp, esi);
    eax = 0x100;
    edx = 0xFF;
    ecx = ebp;
    PUSH32(esp, 0x00093A53u); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_00093A53: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM8(esi + 0xFF) = 0;
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00093A64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093A5Eu); } /* indirect call */
    }

loc_00093A64: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00093A7A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00093A81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093A7Bu); } /* indirect call */
    }

loc_00093A81: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 5;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00093AA0
 * Original: 0x00093AA0 - 0x00093C92 (498 bytes, 146 insns)
 * Folder: base (match: xbox-demo 0x002741C0, library)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00093AA0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x369039);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ebx + 0x110;
    MEM32(esp + 0x128) = 0;
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = ebp;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00093ADAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093AD4u); } /* indirect call */
    }

loc_00093ADA: ;
    ecx = MEM32(esp + 0x130);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM8(esp + 0x12C) = 1;
    eax = 0x100;
    edx = 0xFF;
    MEM8(esp + 0x20) = 0;
    PUSH32(esp, 0x00093B02u); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_00093B02: ;
    SET_LO8(ecx, MEM8(esp + 0x20));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x1C;
    if (CMP_EQ(_fa, _fb)) goto loc_00093B19; /* je: equal / zero */

loc_00093B11: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093B11; /* jne: not equal / not zero */

loc_00093B19: ;
    esi = MEM32(ebx + 0x108);
    ecx = esp + 0x1C;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEM32(esp + 0x120) = eax;
    eax = MEM32(ebx + 0x104);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00093B43u); RECOMP_ABI_CALL(0x00094C50u, sub_00094C50); /* call 0x00094C50 */

loc_00093B43: ;
    edi = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093BB1; /* je: equal / zero */

loc_00093B4E: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0x10 (32-bit) */
    ecx = MEM32(eax + 0x1C);
    if (CMP_B(_fa, _fb)) goto loc_00093B5E; /* jb: below (unsigned <) */

loc_00093B59: ;
    eax = MEM32(eax + 0xC);
    goto loc_00093B61;

loc_00093B5E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00093B61: ;
    MEM8(esp + 0xC) = 0;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00093B75u); RECOMP_ABI_CALL(0x00094C00u, sub_00094C00); /* call 0x00094C00 */

loc_00093B75: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093BB1; /* jne: not equal / not zero */

loc_00093B7C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00093B83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093B7Du); } /* indirect call */
    }

loc_00093B83: ;
    MEM32(esp + 0x128) = 0xFFFFFFFFu;
    eax = MEM32(esp + 0x134);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093BA7; /* je: equal / zero */

loc_00093B99: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00093BA7; /* jne: not equal / not zero */

loc_00093BA1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00093BA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093BA5u); } /* indirect call */
    }

loc_00093BA7: ;
    eax = 2;
    goto loc_00093C78;

loc_00093BB1: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093BBF; /* jne: not equal / not zero */

loc_00093BBA: ;
    PUSH32(esp, 0x00093BBFu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00093BBF: ;
    edx = 0x2C;
    ecx = eax;
    PUSH32(esp, 0x00093BCBu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00093BCB: ;
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x128) = 2;
    ebp = MEM32(esp + 0x134);
    if (CMP_EQ(_fa, _fb)) goto loc_00093C08; /* je: equal / zero */

loc_00093BE2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x1C) = esp;
    MEM32(ecx) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00093BF2; /* je: equal / zero */

loc_00093BEF: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00093BF2: ;
    edi = MEM32(esp + 0x134);
    esi = eax;
    PUSH32(esp, 0x00093C00u); RECOMP_ABI_CALL(0x00092CB0u, sub_00092CB0); /* call 0x00092CB0 */

loc_00093C00: ;
    edi = MEM32(esp + 0x10);
    esi = eax;
    goto loc_00093C0A;

loc_00093C08: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00093C0A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00093C15; /* je: equal / zero */

loc_00093C12: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00093C15: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    eax = ebx + 0x100;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM8(esp + 0x138) = 3;
    PUSH32(esp, 0x00093C31u); RECOMP_ABI_CALL(0x000948B0u, sub_000948B0); /* call 0x000948B0 */

loc_00093C31: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(esp + 0x128) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00093C4A; /* je: equal / zero */

loc_00093C3D: ;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00093C4A; /* jne: not equal / not zero */

loc_00093C42: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00093C4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093C48u); } /* indirect call */
    }

loc_00093C4A: ;
    eax = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00093C55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093C4Fu); } /* indirect call */
    }

loc_00093C55: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x128) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00093C76; /* je: equal / zero */

loc_00093C64: ;
    eax = MEM32(ebp + 8);
    ecx = ebp + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    if ((_fa != 0)) goto loc_00093C76; /* jne: not equal / not zero */

loc_00093C70: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00093C76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093C74u); } /* indirect call */
    }

loc_00093C76: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00093C78: ;
    ecx = MEM32(esp + 0x120);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00093CA0
 * Original: 0x00093CA0 - 0x00094035 (917 bytes, 266 insns)
 * Folder: base (between: 0x00093AA0 and 0x00094040)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00093CA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x369002);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x238) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x238;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x258);
    ebp = edi + 0x110;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x20) = ebp;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00093CD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093CD1u); } /* indirect call */
    }

loc_00093CD7: ;
    ecx = MEM32(esp + 0x25C);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    MEM32(esp + 0x254) = 0;
    eax = 0x100;
    edx = 0xFF;
    MEM8(esp + 0x44) = 0;
    PUSH32(esp, 0x00093D02u); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_00093D02: ;
    SET_LO8(ecx, MEM8(esp + 0x44));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x40;
    if (CMP_EQ(_fa, _fb)) goto loc_00093D19; /* je: equal / zero */

loc_00093D11: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093D11; /* jne: not equal / not zero */

loc_00093D19: ;
    esi = MEM32(edi + 0x108);
    ecx = esp + 0x40;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp + 0x40;
    PUSH32(esp, edx);
    MEM32(esp + 0x144) = eax;
    eax = MEM32(edi + 0x104);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00093D43u); RECOMP_ABI_CALL(0x00094C50u, sub_00094C50); /* call 0x00094C50 */

loc_00093D43: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093D8D; /* je: equal / zero */

loc_00093D4E: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0x10 (32-bit) */
    ecx = MEM32(eax + 0x1C);
    if (CMP_B(_fa, _fb)) goto loc_00093D5E; /* jb: below (unsigned <) */

loc_00093D59: ;
    eax = MEM32(eax + 0xC);
    goto loc_00093D61;

loc_00093D5E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00093D61: ;
    MEM8(esp + 0x10) = 0;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 0x48;
    PUSH32(esp, 0x00093D75u); RECOMP_ABI_CALL(0x00094C00u, sub_00094C00); /* call 0x00094C00 */

loc_00093D75: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093D8D; /* jne: not equal / not zero */

loc_00093D7C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00093D83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093D7Du); } /* indirect call */
    }

loc_00093D83: ;
    eax = 2;
    goto loc_0009401A;

loc_00093D8D: ;
    ebx = MEM32(esp + 0x260);
    eax = esp + 0x144;
    PUSH32(esp, eax);
    eax = 0x100;
    edx = 0xFF;
    ecx = ebx;
    MEM8(esp + 0x148) = 0;
    PUSH32(esp, 0x00093DB5u); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_00093DB5: ;
    SET_LO8(ecx, MEM8(esp + 0x148));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x144;
    if (CMP_EQ(_fa, _fb)) goto loc_00093DD8; /* je: equal / zero */

loc_00093DCA: ;
    /* nop */

loc_00093DD0: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093DD0; /* jne: not equal / not zero */

loc_00093DD8: ;
    esi = MEM32(edi + 0x108);
    ecx = esp + 0x144;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp + 0x144;
    PUSH32(esp, edx);
    MEM32(esp + 0x248) = eax;
    eax = MEM32(edi + 0x104);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00093E08u); RECOMP_ABI_CALL(0x00094C50u, sub_00094C50); /* call 0x00094C50 */

loc_00093E08: ;
    edi = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009400E; /* je: equal / zero */

loc_00093E17: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00093E24; /* jb: below (unsigned <) */

loc_00093E1F: ;
    eax = MEM32(eax + 0xC);
    goto loc_00093E27;

loc_00093E24: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00093E27: ;
    MEM8(esp + 0x10) = 0;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = eax;
    edx = ebx;
    PUSH32(esp, 0x00093E3Au); RECOMP_ABI_CALL(0x00094CC0u, sub_00094CC0); /* call 0x00094CC0 */

loc_00093E3A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009400E; /* jne: not equal / not zero */

loc_00093E45: ;
    eax = MEM32(edi);
    esi = MEM32(eax + 0x24);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    eax = 0x41F4A8;
    ecx = esp + 0x28;
    MEM32(esp + 0x40) = 0xF;
    MEM32(esp + 0x3C) = ebp;
    MEM8(esp + 0x2C) = 0;
    PUSH32(esp, 0x00093E6Cu); RECOMP_ABI_CALL(0x00095120u, sub_00095120); /* call 0x00095120 */

loc_00093E6C: ;
    MEM32(esp + 0x10) = ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    MEM8(esp + 0x250) = 2;
    if (CMP_NE(_fa, _fb)) goto loc_00093EAE; /* jne: not equal / not zero */

loc_00093E7D: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 0x1C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    esi = ecx + 1;
    /* nop */

loc_00093E90: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093E90; /* jne: not equal / not zero */

loc_00093E97: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00093EA3u); RECOMP_ABI_CALL(0x00095120u, sub_00095120); /* call 0x00095120 */

loc_00093EA3: ;
    esi = esp + 0x10;
    PUSH32(esp, 0x00093EACu); RECOMP_ABI_CALL(0x000946D0u, sub_000946D0); /* call 0x000946D0 */

loc_00093EAC: ;
    goto loc_00093F1F;

loc_00093EAE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093F2A; /* jne: not equal / not zero */

loc_00093EB2: ;
    ebp = MEM32(edi);
    PUSH32(esp, esi);
    ecx = ebp + 0x44;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = esp + 0x28;
    PUSH32(esp, 0x00093EC4u); RECOMP_ABI_CALL(0x000951F0u, sub_000951F0); /* call 0x000951F0 */

loc_00093EC4: ;
    edi = MEM32(edi);
    edi = MEM32(edi + 0x1C);
    edx = MEM32(esp + 0x260);
    ecx = edi + edx;
    esi = ebx;
    PUSH32(esp, 0x00093EDAu); RECOMP_ABI_CALL(0x000953C0u, sub_000953C0); /* call 0x000953C0 */

loc_00093EDA: ;
    eax = esp + 0x14;
    ecx = ebp;
    PUSH32(esp, 0x00093EE5u); RECOMP_ABI_CALL(0x00092E10u, sub_00092E10); /* call 0x00092E10 */

loc_00093EE5: ;
    edi = eax;
    esi = esp + 0x10;
    MEM8(esp + 0x250) = 3;
    PUSH32(esp, 0x00093EF8u); RECOMP_ABI_CALL(0x000946D0u, sub_000946D0); /* call 0x000946D0 */

loc_00093EF8: ;
    MEM8(esp + 0x250) = 2;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093F1F; /* je: equal / zero */

loc_00093F08: ;
    esi = MEM32(eax + 4);
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00093F1F; /* jne: not equal / not zero */

loc_00093F19: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00093F1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093F1Du); } /* indirect call */
    }

loc_00093F1F: ;
    ebp = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x260);

loc_00093F2A: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093F38; /* jne: not equal / not zero */

loc_00093F33: ;
    PUSH32(esp, 0x00093F38u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00093F38: ;
    edx = 0x64;
    ecx = eax;
    PUSH32(esp, 0x00093F44u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00093F44: ;
    MEM32(esp + 0x14) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x250) = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00093F86; /* je: equal / zero */

loc_00093F54: ;
    _fa = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x3C), 0x10 (32-bit) */
    ecx = MEM32(esp + 0x28);
    if (CMP_AE(_fa, _fb)) goto loc_00093F63; /* jae: above or equal (unsigned >=) */

loc_00093F5F: ;
    ecx = esp + 0x28;

loc_00093F63: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x28) = esp;
    MEM32(ecx) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00093F74; /* je: equal / zero */

loc_00093F71: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00093F74: ;
    ecx = MEM32(esp + 0x264);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00093F82u); RECOMP_ABI_CALL(0x00092D40u, sub_00092D40); /* call 0x00092D40 */

loc_00093F82: ;
    esi = eax;
    goto loc_00093F88;

loc_00093F86: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00093F88: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00093F93; /* je: equal / zero */

loc_00093F90: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00093F93: ;
    edi = MEM32(esp + 0x258);
    ecx = esp + 0x14;
    MEM8(esp + 0x250) = 5;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esp + 0x28;
    PUSH32(esp, 0x00093FBBu); RECOMP_ABI_CALL(0x000945E0u, sub_000945E0); /* call 0x000945E0 */

loc_00093FBB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(esp + 0x250) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00093FD4; /* je: equal / zero */

loc_00093FC7: ;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00093FD4; /* jne: not equal / not zero */

loc_00093FCC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00093FD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093FD2u); } /* indirect call */
    }

loc_00093FD4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM8(esp + 0x250) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00093FEE; /* je: equal / zero */

loc_00093FE0: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) - 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00093FEE; /* jne: not equal / not zero */

loc_00093FE5: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00093FEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093FECu); } /* indirect call */
    }

loc_00093FEE: ;
    esi = esp + 0x24;
    MEM8(esp + 0x250) = 0;
    PUSH32(esp, 0x00093FFFu); RECOMP_ABI_CALL(0x000953E0u, sub_000953E0); /* call 0x000953E0 */

loc_00093FFF: ;
    eax = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x0009400Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094004u); } /* indirect call */
    }

loc_0009400A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0009401A;

loc_0009400E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00094015u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009400Fu); } /* indirect call */
    }

loc_00094015: ;
    eax = 4;

loc_0009401A: ;
    ecx = MEM32(esp + 0x248);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x244) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x244;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00094040
 * Original: 0x00094040 - 0x00094161 (289 bytes, 87 insns)
 * Folder: base (match: xbox-demo 0x00274790, library)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094040: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x36890B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = edi + 0x110;
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = ebx;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00094071u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009406Bu); } /* indirect call */
    }

loc_00094071: ;
    ecx = MEM32(esp + 0x128);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x124) = 0;
    eax = 0x100;
    edx = 0xFF;
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x0009409Cu); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_0009409C: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x14;
    if (CMP_EQ(_fa, _fb)) goto loc_000940B8; /* je: equal / zero */

loc_000940AB: ;
    goto loc_000940B0;

    /* nop */

loc_000940B0: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000940B0; /* jne: not equal / not zero */

loc_000940B8: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x108);
    ecx = esp + 0x18;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x11C) = eax;
    eax = MEM32(edi + 0x104);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000940E3u); RECOMP_ABI_CALL(0x00094C50u, sub_00094C50); /* call 0x00094C50 */

loc_000940E3: ;
    ebp = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0009413B; /* je: equal / zero */

loc_000940EF: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0x10 (32-bit) */
    ecx = MEM32(eax + 0x1C);
    if (CMP_B(_fa, _fb)) goto loc_00094100; /* jb: below (unsigned <) */

loc_000940FB: ;
    eax = MEM32(eax + 0xC);
    goto loc_00094103;

loc_00094100: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00094103: ;
    MEM8(esp + 0xC) = 0;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00094117u); RECOMP_ABI_CALL(0x00094C00u, sub_00094C00); /* call 0x00094C00 */

loc_00094117: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009413B; /* jne: not equal / not zero */

loc_0009411E: ;
    PUSH32(esp, ebp);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00094130u); RECOMP_ABI_CALL(0x00094620u, sub_00094620); /* call 0x00094620 */

loc_00094130: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00094137u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094131u); } /* indirect call */
    }

loc_00094137: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00094147;

loc_0009413B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00094142u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009413Cu); } /* indirect call */
    }

loc_00094142: ;
    eax = 3;

loc_00094147: ;
    ecx = MEM32(esp + 0x118);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094170
 * Original: 0x00094170 - 0x00094310 (416 bytes, 121 insns)
 * Folder: base (between: 0x00094040 and 0x000945E0)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00094170: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x36858C);
    PUSH32(esp, eax);
    eax = 0x1418;
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, 0x0009418Fu); RECOMP_ABI_CALL(0x00347D50u, sub_00347D50); /* call 0x00347D50 */

loc_0009418F: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x110;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = edi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x000941A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009419Fu); } /* indirect call */
    }

loc_000941A5: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x142C) = eax;
    MEM32(esp + 0x214) = eax;
    MEM8(esp + 0x14) = LO8(eax);
    MEM8(esp + 0x114) = LO8(eax);
    ecx = MEM32(esp + 0x1434);
    PUSH32(esp, esi);
    ebx = esp + 0x18;
    MEM8(esp + 0x1430) = 1;
    PUSH32(esp, 0x000941D9u); RECOMP_ABI_CALL(0x00094310u, sub_00094310); /* call 0x00094310 */

loc_000941D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000942E7; /* jne: not equal / not zero */

loc_000941E1: ;
    eax = esp + 0xC;
    ecx = esp + 0x14;
    PUSH32(esp, 0x000941EEu); RECOMP_ABI_CALL(0x00093110u, sub_00093110); /* call 0x00093110 */

loc_000941EE: ;
    MEM8(esp + 0x142C) = 2;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    edx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00094200u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000941FDu); } /* indirect call */
    }

loc_00094200: ;
    SET_LO8(ebx, LO8(eax));
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    MEM8(esp + 0x142C) = 1;
    eax = MEM32(esp + 0xC);
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094226; /* je: equal / zero */

loc_00094218: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00094226; /* jne: not equal / not zero */

loc_00094220: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00094226u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094224u); } /* indirect call */
    }

loc_00094226: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009425A; /* je: equal / zero */

loc_0009422A: ;
    SET_LO8(eax, MEM8(esp + 0x1438));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_0009425A; /* js: sign (negative) */

loc_00094235: ;
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = 0x41FA34;
    ebx = esp + 0x220;
    PUSH32(esp, 0x0009424Du); RECOMP_ABI_CALL(0x00093130u, sub_00093130); /* call 0x00093130 */

loc_0009424D: ;
    PUSH32(esp, 0x42ABF4);
    edx = ebx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009425Au); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_0009425A: ;
    eax = esp + 0xC;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00094267u); RECOMP_ABI_CALL(0x00093110u, sub_00093110); /* call 0x00093110 */

loc_00094267: ;
    edx = MEM32(esp + 0x1438);
    MEM8(esp + 0x142C) = 3;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00094283u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094280u); } /* indirect call */
    }

loc_00094283: ;
    esi = eax;
    MEM8(esp + 0x142C) = 1;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000942A3; /* je: equal / zero */

loc_00094295: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000942A3; /* jne: not equal / not zero */

loc_0009429D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000942A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000942A1u); } /* indirect call */
    }

loc_000942A3: ;
    MEM8(esp + 0x142C) = 0;
    eax = MEM32(esp + 0x214);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000942C4; /* je: equal / zero */

loc_000942B6: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000942C4; /* jne: not equal / not zero */

loc_000942BE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000942C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000942C2u); } /* indirect call */
    }

loc_000942C4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x000942CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000942C5u); } /* indirect call */
    }

loc_000942CB: ;
    ecx = MEM32(esp + 0x1424);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x1424) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1424)) >> 32) & 1);
    esp = esp + 0x1424;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000942E7: ;
    PUSH32(esp, 2);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = 0x41FA44;
    ebx = esp + 0x220;
    PUSH32(esp, 0x000942FFu); RECOMP_ABI_CALL(0x00093130u, sub_00093130); /* call 0x00093130 */

loc_000942FF: ;
    PUSH32(esp, 0x42ABF4);
    ecx = ebx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009430Cu); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_0009430C: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00094310
 * Original: 0x00094310 - 0x000945D1 (705 bytes, 211 insns)
 * Folder: base (between: 0x00094040 and 0x000945E0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094310: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3684B1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x218;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x22C);
    PUSH32(esp, esi);
    eax = ebp + 0x110;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    esi = ecx;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00094348u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094342u); } /* indirect call */
    }

loc_00094348: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x22C) = edi;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0009436D; /* je: equal / zero */

loc_00094359: ;
    /* nop */

loc_00094360: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009436F; /* je: equal / zero */

loc_00094365: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094360; /* jne: not equal / not zero */

loc_0009436D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009436F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094396; /* je: equal / zero */

loc_00094373: ;
    MEM8(eax) = 0x2F;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00094390; /* je: equal / zero */

loc_0009437E: ;
    edi = edi;

loc_00094380: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094447; /* je: equal / zero */

loc_00094388: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094380; /* jne: not equal / not zero */

loc_00094390: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00094392: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094373; /* jne: not equal / not zero */

loc_00094396: ;
    eax = ebx + 0x100;
    MEM8(ebx) = 0;
    MEM32(esp + 0x14) = eax;
    MEM8(eax) = 0;
    eax = MEM32(ebx + 0x200);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM8(esp + 0x124) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000943CC; /* je: equal / zero */

loc_000943B8: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000943C6; /* jne: not equal / not zero */

loc_000943C0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000943C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000943C4u); } /* indirect call */
    }

loc_000943C6: ;
    MEM32(ebx + 0x200) = edi;

loc_000943CC: ;
    PUSH32(esp, ebx);
    eax = 0x100;
    edx = 0xFF;
    ecx = esi;
    PUSH32(esp, 0x000943DEu); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_000943DE: ;
    SET_LO8(eax, MEM8(esi));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    PUSH32(esp, esi);
    esi = esp + 0x24;
    if (CMP_NE(_fa, _fb)) ecx = ebp; /* cmovne */
    PUSH32(esp, 0x000943F4u); RECOMP_ABI_CALL(0x00092E30u, sub_00092E30); /* call 0x00092E30 */

loc_000943F4: ;
    esi = MEM32(ebp + 0x108);
    eax = MEM32(ebp + 0x104);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00094411u); RECOMP_ABI_CALL(0x00094C50u, sub_00094C50); /* call 0x00094C50 */

loc_00094411: ;
    ebp = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000945A7; /* je: equal / zero */

loc_00094420: ;
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0009442E; /* je: equal / zero */

loc_0009442B: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009442E: ;
    MEM8(esp + 0x22C) = 1;
    eax = MEM32(esi + 0x20);
    edi = 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009444E; /* jb: below (unsigned <) */

loc_00094442: ;
    ecx = MEM32(esi + 0xC);
    goto loc_00094451;

loc_00094447: ;
    eax = ecx;
    goto loc_00094392;

loc_0009444E: ;
    ecx = esi + 0xC;

loc_00094451: ;
    MEM8(esp + 0xC) = 0;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    edx = esp + 0x24;
    PUSH32(esp, 0x00094464u); RECOMP_ABI_CALL(0x00094CC0u, sub_00094CC0); /* call 0x00094CC0 */

loc_00094464: ;
    ecx = esp + 0x24;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009458E; /* jne: not equal / not zero */

loc_00094473: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000944B2; /* jne: not equal / not zero */

loc_0009447B: ;
    eax = MEM32(esi + 0x1C);
    edx = esp + 0x124;
    ecx = esp + eax + 0x20;
    PUSH32(esp, edx);
    eax = 0x100;
    edx = 0xFF;
    PUSH32(esp, 0x00094499u); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_00094499: ;
    eax = esp;
    ecx = esi;
    MEM32(esp + 0x10) = esp;
    PUSH32(esp, 0x000944A6u); RECOMP_ABI_CALL(0x00092D20u, sub_00092D20); /* call 0x00092D20 */

loc_000944A6: ;
    edi = ebx;
    PUSH32(esp, 0x000944ADu); RECOMP_ABI_CALL(0x00093090u, sub_00093090); /* call 0x00093090 */

loc_000944AD: ;
    goto loc_00094548;

loc_000944B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094548; /* jne: not equal / not zero */

loc_000944BA: ;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000944C4; /* jb: below (unsigned <) */

loc_000944BF: ;
    ecx = MEM32(esi + 0x48);
    goto loc_000944C7;

loc_000944C4: ;
    ecx = esi + 0x48;

loc_000944C7: ;
    eax = esp + 0x124;
    PUSH32(esp, eax);
    eax = 0x100;
    edx = 0xFF;
    PUSH32(esp, 0x000944DEu); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_000944DE: ;
    eax = MEM32(ebp);
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, 0x100);
    ecx = esp + eax + 0x28;
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    ecx = esp + 0x134;
    PUSH32(esp, 0x000944FFu); RECOMP_ABI_CALL(0x00094BA0u, sub_00094BA0); /* call 0x00094BA0 */

loc_000944FF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    ecx = esi;
    PUSH32(esp, 0x0009450Du); RECOMP_ABI_CALL(0x00092E10u, sub_00092E10); /* call 0x00092E10 */

loc_0009450D: ;
    PUSH32(esp, ecx);
    MEM8(esp + 0x230) = 2;
    ebp = MEM32(esp + 0x10);
    eax = esp;
    ecx = ebp;
    MEM32(esp + 0x20) = esp;
    PUSH32(esp, 0x00094527u); RECOMP_ABI_CALL(0x00092D20u, sub_00092D20); /* call 0x00092D20 */

loc_00094527: ;
    edi = ebx;
    PUSH32(esp, 0x0009452Eu); RECOMP_ABI_CALL(0x00093090u, sub_00093090); /* call 0x00093090 */

loc_0009452E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM8(esp + 0x22C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00094548; /* je: equal / zero */

loc_0009453A: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) - 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00094548; /* jne: not equal / not zero */

loc_0009453F: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00094548u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094546u); } /* indirect call */
    }

loc_00094548: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = 0x100;
    edx = 0xFF;
    ecx = esp + 0x128;
    PUSH32(esp, 0x00094563u); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_00094563: ;
    MEM8(esp + 0x230) = 0;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    if ((_fa != 0)) goto loc_0009457F; /* jne: not equal / not zero */

loc_00094577: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0009457Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009457Du); } /* indirect call */
    }

loc_0009457F: ;
    eax = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x0009458Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094584u); } /* indirect call */
    }

loc_0009458A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000945B7;

loc_0009458E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(esp + 0x22C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000945A7; /* je: equal / zero */

loc_0009459A: ;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000945A7; /* jne: not equal / not zero */

loc_0009459F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000945A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000945A5u); } /* indirect call */
    }

loc_000945A7: ;
    eax = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x000945B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000945ACu); } /* indirect call */
    }

loc_000945B2: ;
    eax = 5;

loc_000945B7: ;
    ecx = MEM32(esp + 0x224);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x224) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x224;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000945E0
 * Original: 0x000945E0 - 0x0009461F (63 bytes, 27 insns)
 * Folder: base (match: xbox-demo 0x00274CD0, library)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000945E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000945E0: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000945F8; /* je: equal / zero */

loc_000945EC: ;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000945FC; /* jne: not equal / not zero */

loc_000945F8: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00094603;

loc_000945FC: ;
    esi = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((2) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00094603: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00094611u); RECOMP_ABI_CALL(0x000948B0u, sub_000948B0); /* call 0x000948B0 */

loc_00094611: ;
    ecx = MEM32(edi + 4);
    edx = ecx + esi * 4;
    MEM32(ebx) = edx;
    eax = ebx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00094620
 * Original: 0x00094620 - 0x00094682 (98 bytes, 39 insns)
 * Folder: base (match: xbox-demo 0x00274D10, library)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094620: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = eax + 4;
    PUSH32(esp, 0x0009463Cu); RECOMP_ABI_CALL(0x00094D00u, sub_00094D00); /* call 0x00094D00 */

loc_0009463C: ;
    edi = MEM32(ebp + 8);
    esi = edi + -4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094668; /* je: equal / zero */

loc_00094649: ;
    /* nop */

loc_00094650: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094661; /* je: equal / zero */

loc_00094656: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00094661; /* jne: not equal / not zero */

loc_0009465B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00094661u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009465Fu); } /* indirect call */
    }

loc_00094661: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094650; /* jne: not equal / not zero */

loc_00094668: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00094690
 * Original: 0x00094690 - 0x000946A5 (21 bytes, 10 insns)
 * Folder: base (between: 0x00094620 and 0x000946D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094690: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000946A4; /* je: equal / zero */

loc_00094696: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000946A4; /* jne: not equal / not zero */

loc_0009469E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000946A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000946A2u); } /* indirect call */
    }

loc_000946A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000946B0
 * Original: 0x000946B0 - 0x000946C2 (18 bytes, 9 insns)
 * Folder: base (between: 0x00094620 and 0x000946D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000946B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000946B0: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000946C1; /* je: equal / zero */

loc_000946B6: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000946C1; /* jne: not equal / not zero */

loc_000946BB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000946C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000946BFu); } /* indirect call */
    }

loc_000946C1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000946D0
 * Original: 0x000946D0 - 0x000946F3 (35 bytes, 17 insns)
 * Folder: base (match: xbox-demo 0x00274D80, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000946D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000946D0: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000946F0; /* je: equal / zero */

loc_000946D6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000946E5; /* je: equal / zero */

loc_000946DA: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000946E5; /* jne: not equal / not zero */

loc_000946DF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000946E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000946E3u); } /* indirect call */
    }

loc_000946E5: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000946F0; /* je: equal / zero */

loc_000946ED: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000946F0: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00094700
 * Original: 0x00094700 - 0x0009470A (10 bytes, 4 insns)
 * Folder: base (library: 0x000946D0 and 0x00094820)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094700(void)
{

loc_00094700: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00094709u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094703u); } /* indirect call */
    }

loc_00094709: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00094710
 * Original: 0x00094710 - 0x00094775 (101 bytes, 29 insns)
 * Folder: base (library: 0x000946D0 and 0x00094820)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094710: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x369058);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = esp;
    MEM32(esi) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094739; /* jne: not equal / not zero */

loc_00094734: ;
    PUSH32(esp, 0x00094739u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00094739: ;
    edx = 0x12C;
    ecx = eax;
    PUSH32(esp, 0x00094745u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00094745: ;
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0009475D; /* je: equal / zero */

loc_00094755: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009475Bu); RECOMP_ABI_CALL(0x00093300u, sub_00093300); /* call 0x00093300 */

loc_0009475B: ;
    goto loc_0009475F;

loc_0009475D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009475F: ;
    ecx = MEM32(esi);
    MEM32(ecx) = eax;
    ecx = MEM32(esp);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094780
 * Original: 0x00094780 - 0x00094811 (145 bytes, 46 insns)
 * Folder: base (library: 0x000946D0 and 0x00094820)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094780: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(0x46B1A8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000947A8; /* jne: not equal / not zero */

loc_000947A1: ;
    PUSH32(esp, 0x000947A6u); RECOMP_ABI_CALL(0x00096160u, sub_00096160); /* call 0x00096160 */

loc_000947A6: ;
    edi = eax;

loc_000947A8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 8) = edi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x000947B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000947ADu); } /* indirect call */
    }

loc_000947B3: ;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000947F8; /* je: equal / zero */

loc_000947C7: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(eax) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000947F7; /* je: equal / zero */

loc_000947D4: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x100;
    PUSH32(esp, 0x000947E0u); RECOMP_ABI_CALL(0x00094850u, sub_00094850); /* call 0x00094850 */

loc_000947E0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000947EF; /* jne: not equal / not zero */

loc_000947EA: ;
    PUSH32(esp, 0x000947EFu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000947EF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000947F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000947F4u); } /* indirect call */
    }

loc_000947F7: ;
    POP32(esp, esi);

loc_000947F8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x000947FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000947F9u); } /* indirect call */
    }

loc_000947FF: ;
    ecx = MEM32(esp + 8);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094850
 * Original: 0x00094850 - 0x000948AD (93 bytes, 36 insns)
 * Folder: base (library: 0x00094820 and 0x00094ACB)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094850: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094896; /* je: equal / zero */

loc_00094858: ;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094878; /* je: equal / zero */

loc_00094860: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094871; /* je: equal / zero */

loc_00094866: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00094871; /* jne: not equal / not zero */

loc_0009486B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00094871u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009486Fu); } /* indirect call */
    }

loc_00094871: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094860; /* jne: not equal / not zero */

loc_00094878: ;
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00094896; /* je: equal / zero */

loc_00094880: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009488E; /* jne: not equal / not zero */

loc_00094889: ;
    PUSH32(esp, 0x0009488Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0009488E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00094896u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094893u); } /* indirect call */
    }

loc_00094896: ;
    MEM32(ebx + 4) = 0;
    MEM32(ebx + 8) = 0;
    MEM32(ebx + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000948B0
 * Original: 0x000948B0 - 0x00094B4F (671 bytes, 239 insns)
 * Folder: base (library: 0x00094820 and 0x00094ACB)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000948B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000948B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368A58);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    MEM32(ebp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000948E3; /* je: equal / zero */

loc_000948E0: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000948E3: ;
    MEM32(ebp + -4) = 0;
    edx = MEM32(ebx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000948F5; /* jne: not equal / not zero */

loc_000948F1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000948FD;

loc_000948F5: ;
    eax = MEM32(ebx + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_000948FD: ;
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094B26; /* je: equal / zero */

loc_00094908: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094910; /* jne: not equal / not zero */

loc_0009490C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00094918;

loc_00094910: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00094918: ;
    esi = 0x3FFFFFFF;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00094928; /* jae: above or equal (unsigned >=) */

loc_00094923: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094928u); RECOMP_ABI_CALL(0x00039360u, sub_00039360); /* call 0x00039360 */

loc_00094928: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094930; /* jne: not equal / not zero */

loc_0009492C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00094938;

loc_00094930: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00094938: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00094A6C; /* jae: above or equal (unsigned >=) */

loc_00094942: ;
    ecx = eax;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = 0x3FFFFFFF;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00094955; /* jae: above or equal (unsigned >=) */

loc_00094951: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00094957;

loc_00094955: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00094957: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009495F; /* jne: not equal / not zero */

loc_0009495B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00094967;

loc_0009495F: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00094967: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009497F; /* jae: above or equal (unsigned >=) */

loc_0009496D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094975; /* jne: not equal / not zero */

loc_00094971: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0009497D;

loc_00094975: ;
    eax = MEM32(ebx + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_0009497D: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009497F: ;
    esi = eax * 4;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -20) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00094997; /* jne: not equal / not zero */

loc_00094992: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094997u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00094997: ;
    edx = esi;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000949A0u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000949A0: ;
    MEM8(ebp + -4) = 1;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebx + 4);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000949B9u); RECOMP_ABI_CALL(0x00094DB0u, sub_00094DB0); /* call 0x00094DB0 */

loc_000949B9: ;
    edx = MEM32(ebp + 0xC);
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    esi = ebp + 0x14;
    eax = edi;
    MEM32(ebp + 0x10) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000949CFu); RECOMP_ABI_CALL(0x00094D90u, sub_00094D90); /* call 0x00094D90 */

loc_000949CF: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    esi = MEM32(ebx + 8);
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + edi * 4;
    PUSH32(esp, ecx);
    MEM32(ebp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000949EAu); RECOMP_ABI_CALL(0x00094DB0u, sub_00094DB0); /* call 0x00094DB0 */

loc_000949EA: ;
    MEM32(ebp + -4) = 0;
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000949FF; /* jne: not equal / not zero */

loc_000949FB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00094A07;

loc_000949FF: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00094A07: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00094A38; /* je: equal / zero */

loc_00094A10: ;
    edi = MEM32(ebx + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094A18u); RECOMP_ABI_CALL(0x00094820u, sub_00094820); /* call 0x00094820 */

loc_00094A18: ;
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094A35; /* je: equal / zero */

loc_00094A1F: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094A2D; /* jne: not equal / not zero */

loc_00094A28: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094A2Du); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00094A2D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00094A35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094A32u); } /* indirect call */
    }

loc_00094A35: ;
    edi = MEM32(ebp + 0x10);

loc_00094A38: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + edi * 4;
    MEM32(ebx + 0xC) = ecx;
    MEM32(ebx + 8) = edx;
    MEM32(ebx + 4) = eax;
    goto loc_00094B23;

    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094A5Eu); RECOMP_ABI_CALL(0x00094820u, sub_00094820); /* call 0x00094820 */

loc_00094A5E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094A63u); RECOMP_ABI_CALL(0x00097970u, sub_00097970); /* call 0x00097970 */

loc_00094A63: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094A6Cu); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_00094A6C: ;
    esi = MEM32(ebx + 8);
    edx = MEM32(ebp + 0xC);
    eax = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    eax = edi * 4;
    MEM32(ebp + -20) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00094AEC; /* jae: above or equal (unsigned >=) */

loc_00094A87: ;
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094A92u); RECOMP_ABI_CALL(0x00094DB0u, sub_00094DB0); /* call 0x00094DB0 */

loc_00094A92: ;
    MEM8(ebp + -4) = 3;
    ecx = MEM32(ebx + 8);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0xC);
    edx = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    esi = ebp + 0x14;
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094AB3u); RECOMP_ABI_CALL(0x00094D90u, sub_00094D90); /* call 0x00094D90 */

loc_00094AB3: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -4) = 0;
    edx = MEM32(ebx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 8) = edx;
    ebx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00094B15;

    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    edi = MEM32(ecx + 8);
    edx = MEM32(ebp + 0xC);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094AE3u); RECOMP_ABI_CALL(0x00094820u, sub_00094820); /* call 0x00094820 */

loc_00094AE3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094AECu); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_00094AEC: ;
    edi = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = esi;
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094AFDu); RECOMP_ABI_CALL(0x00094DB0u, sub_00094DB0); /* call 0x00094DB0 */

loc_00094AFD: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebx + 8) = eax;
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    eax = esi;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094B10u); RECOMP_ABI_CALL(0x00094D40u, sub_00094D40); /* call 0x00094D40 */

loc_00094B10: ;
    edx = MEM32(ebp + -20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00094B15: ;
    eax = MEM32(ebp + 0xC);
    edi = ebp + 0x14;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094B23u); RECOMP_ABI_CALL(0x00094BD0u, sub_00094BD0); /* call 0x00094BD0 */

loc_00094B23: ;
    ecx = MEM32(ebp + 0x14);

loc_00094B26: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00094B3C; /* je: equal / zero */

loc_00094B31: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00094B3C; /* jne: not equal / not zero */

loc_00094B36: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00094B3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094B3Au); } /* indirect call */
    }

loc_00094B3C: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00094A51
 * Original: 0x00094A51 - 0x00094B4F (254 bytes, 89 insns)
 * Folder: base (library: 0x00094820 and 0x00094ACB)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094A51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094A51: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);
    eax = esi;
    PUSH32(esp, 0x00094A5Eu); RECOMP_ABI_CALL(0x00094820u, sub_00094820); /* call 0x00094820 */

loc_00094A5E: ;
    PUSH32(esp, 0x00094A63u); RECOMP_ABI_CALL(0x00097970u, sub_00097970); /* call 0x00097970 */

loc_00094A63: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00094A6Cu); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_00094A6C: ;
    esi = MEM32(ebx + 8);
    edx = MEM32(ebp + 0xC);
    eax = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    eax = edi * 4;
    MEM32(ebp + -20) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00094AEC; /* jae: above or equal (unsigned >=) */

loc_00094A87: ;
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00094A92u); RECOMP_ABI_CALL(0x00094DB0u, sub_00094DB0); /* call 0x00094DB0 */

loc_00094A92: ;
    MEM8(ebp + -4) = 3;
    ecx = MEM32(ebx + 8);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0xC);
    edx = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    esi = ebp + 0x14;
    eax = edi;
    PUSH32(esp, 0x00094AB3u); RECOMP_ABI_CALL(0x00094D90u, sub_00094D90); /* call 0x00094D90 */

loc_00094AB3: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -4) = 0;
    edx = MEM32(ebx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 8) = edx;
    ebx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00094B15;

    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    edi = MEM32(ecx + 8);
    edx = MEM32(ebp + 0xC);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00094AE3u); RECOMP_ABI_CALL(0x00094820u, sub_00094820); /* call 0x00094820 */

loc_00094AE3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00094AECu); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_00094AEC: ;
    edi = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = esi;
    edx = edi;
    PUSH32(esp, 0x00094AFDu); RECOMP_ABI_CALL(0x00094DB0u, sub_00094DB0); /* call 0x00094DB0 */

loc_00094AFD: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebx + 8) = eax;
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0x00094B10u); RECOMP_ABI_CALL(0x00094D40u, sub_00094D40); /* call 0x00094D40 */

loc_00094B10: ;
    edx = MEM32(ebp + -20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00094B15: ;
    eax = MEM32(ebp + 0xC);
    edi = ebp + 0x14;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00094B23u); RECOMP_ABI_CALL(0x00094BD0u, sub_00094BD0); /* call 0x00094BD0 */

loc_00094B23: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00094B3C; /* je: equal / zero */

loc_00094B31: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00094B3C; /* jne: not equal / not zero */

loc_00094B36: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00094B3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094B3Au); } /* indirect call */
    }

loc_00094B3C: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00094A87
 * Original: 0x00094A87 - 0x00094B4F (200 bytes, 72 insns)
 * Folder: base (library: 0x00094820 and 0x00094ACB)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094A87(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094A87: ;
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00094A92u); RECOMP_ABI_CALL(0x00094DB0u, sub_00094DB0); /* call 0x00094DB0 */

loc_00094A92: ;
    MEM8(ebp + -4) = 3;
    ecx = MEM32(ebx + 8);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0xC);
    edx = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    esi = ebp + 0x14;
    eax = edi;
    PUSH32(esp, 0x00094AB3u); RECOMP_ABI_CALL(0x00094D90u, sub_00094D90); /* call 0x00094D90 */

loc_00094AB3: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -4) = 0;
    edx = MEM32(ebx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 8) = edx;
    ebx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00094B15;

    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    edi = MEM32(ecx + 8);
    edx = MEM32(ebp + 0xC);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00094AE3u); RECOMP_ABI_CALL(0x00094820u, sub_00094820); /* call 0x00094820 */

loc_00094AE3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00094AECu); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_00094AEC: ;
    edi = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = esi;
    edx = edi;
    PUSH32(esp, 0x00094AFDu); RECOMP_ABI_CALL(0x00094DB0u, sub_00094DB0); /* call 0x00094DB0 */

loc_00094AFD: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebx + 8) = eax;
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0x00094B10u); RECOMP_ABI_CALL(0x00094D40u, sub_00094D40); /* call 0x00094D40 */

loc_00094B10: ;
    edx = MEM32(ebp + -20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00094B15: ;
    eax = MEM32(ebp + 0xC);
    edi = ebp + 0x14;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00094B23u); RECOMP_ABI_CALL(0x00094BD0u, sub_00094BD0); /* call 0x00094BD0 */

loc_00094B23: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00094B3C; /* je: equal / zero */

loc_00094B31: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00094B3C; /* jne: not equal / not zero */

loc_00094B36: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00094B3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094B3Au); } /* indirect call */
    }

loc_00094B3C: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00094ACB
 * Original: 0x00094ACB - 0x00094B4F (132 bytes, 48 insns)
 * Folder: base (match: xbox-demo 0x002750C4, library)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094ACB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094ACB: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    edi = MEM32(ecx + 8);
    edx = MEM32(ebp + 0xC);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00094AE3u); RECOMP_ABI_CALL(0x00094820u, sub_00094820); /* call 0x00094820 */

loc_00094AE3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00094AECu); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_00094AEC: ;
    edi = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = esi;
    edx = edi;
    PUSH32(esp, 0x00094AFDu); RECOMP_ABI_CALL(0x00094DB0u, sub_00094DB0); /* call 0x00094DB0 */

loc_00094AFD: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebx + 8) = eax;
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0x00094B10u); RECOMP_ABI_CALL(0x00094D40u, sub_00094D40); /* call 0x00094D40 */

loc_00094B10: ;
    edx = MEM32(ebp + -20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0xC);
    edi = ebp + 0x14;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00094B23u); RECOMP_ABI_CALL(0x00094BD0u, sub_00094BD0); /* call 0x00094BD0 */

loc_00094B23: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00094B3C; /* je: equal / zero */

loc_00094B31: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00094B3C; /* jne: not equal / not zero */

loc_00094B36: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00094B3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094B3Au); } /* indirect call */
    }

loc_00094B3C: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00094B50
 * Original: 0x00094B50 - 0x00094BA0 (80 bytes, 42 insns)
 * Folder: base (match: xbox-demo 0x00275150, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094B50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = edx;
    SET_LO8(edx, MEM8(ecx));
    ebp = eax + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) edi = ebp; /* cmovae */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM32(esp + 0x14) = ecx;
    ebx = esi + eax + -1;
    if (CMP_EQ(_fa, _fb)) goto loc_00094B80; /* je: equal / zero */

loc_00094B70: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094B80; /* je: equal / zero */

loc_00094B74: ;
    MEM8(esi) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094B70; /* jne: not equal / not zero */

loc_00094B80: ;
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    eax = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_00094B92; /* jae: above or equal (unsigned >=) */

loc_00094B8A: ;
    POP32(esp, edi);
    MEM8(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00094B92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(ebx) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00094B9B; /* je: equal / zero */

loc_00094B99: ;
    eax = ebp;

loc_00094B9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00094BA0
 * Original: 0x00094BA0 - 0x00094BCD (45 bytes, 18 insns)
 * Folder: base (match: xbox-demo 0x002751A0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094BA0: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00094BAF; /* je: equal / zero */

loc_00094BA7: ;
    SET_LO8(edx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094BA7; /* jne: not equal / not zero */

loc_00094BAF: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 4);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00094BC9u); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_00094BC9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00094BD0
 * Original: 0x00094BD0 - 0x00094C00 (48 bytes, 24 insns)
 * Folder: base (match: xbox-demo 0x002751D0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094BD0: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094BFE; /* je: equal / zero */

loc_00094BD7: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094BF7; /* je: equal / zero */

loc_00094BDD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094BEC; /* je: equal / zero */

loc_00094BE1: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00094BEC; /* jne: not equal / not zero */

loc_00094BE6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00094BECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094BEAu); } /* indirect call */
    }

loc_00094BEC: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00094BF7; /* je: equal / zero */

loc_00094BF4: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00094BF7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094BD7; /* jne: not equal / not zero */

loc_00094BFE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00094C00
 * Original: 0x00094C00 - 0x00094C45 (69 bytes, 37 insns)
 * Folder: base (match: xbox-demo 0x00275200, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00094C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094C00: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00094C10: ;
    SET_LO8(ecx, MEM8(edi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094C1B; /* jne: not equal / not zero */

loc_00094C16: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094C41; /* je: equal / zero */

loc_00094C1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094C41; /* jne: not equal / not zero */

loc_00094C1F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094C41; /* je: equal / zero */

loc_00094C23: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00094C33; /* jge: greater or equal (signed >=) */

loc_00094C29: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0xFFFFFFFFu;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00094C10;

loc_00094C33: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    goto loc_00094C10;

loc_00094C41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00094C50
 * Original: 0x00094C50 - 0x00094CBA (106 bytes, 44 insns)
 * Folder: base (match: xbox-demo 0x00275290, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00094C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094C50: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((2) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00094CB1; /* jle: less or equal (signed <=) */

loc_00094C63: ;
    PUSH32(esp, esi);

loc_00094C64: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = MEM32(ebp + esi * 4);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0x10 (32-bit) */
    edx = MEM32(eax + 0x1C);
    if (CMP_B(_fa, _fb)) goto loc_00094C7F; /* jb: below (unsigned <) */

loc_00094C7A: ;
    ecx = MEM32(eax + 0xC);
    goto loc_00094C82;

loc_00094C7F: ;
    ecx = eax + 0xC;

loc_00094C82: ;
    MEM8(esp + 0x18) = 0;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00094C96u); RECOMP_ABI_CALL(0x00094C00u, sub_00094C00); /* call 0x00094C00 */

loc_00094C96: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00094CAA; /* jge: greater or equal (signed >=) */

loc_00094C9D: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = ebp + esi * 4 + 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00094CAC;

loc_00094CAA: ;
    edi = esi;

loc_00094CAC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00094C64; /* jg: greater (signed >) */

loc_00094CB0: ;
    POP32(esp, esi);

loc_00094CB1: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(eax) = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00094CC0
 * Original: 0x00094CC0 - 0x00094CF2 (50 bytes, 24 insns)
 * Folder: base (match: xbox-demo 0x00275250, library)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00094CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094CC0: ;
    SET_LO8(eax, MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00094CEE; /* je: equal / zero */

loc_00094CC9: ;
    /* nop */

loc_00094CD0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094CE4; /* jne: not equal / not zero */

loc_00094CD4: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094CE6; /* jne: not equal / not zero */

loc_00094CDC: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + edx + 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00094CE4: ;
    ecx = esi;

loc_00094CE6: ;
    SET_LO8(eax, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094CD0; /* jne: not equal / not zero */

loc_00094CEE: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00094D00
 * Original: 0x00094D00 - 0x00094D3F (63 bytes, 30 insns)
 * Folder: base (match: xbox-demo 0x00275300, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094D00: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00094D3A; /* je: equal / zero */

loc_00094D0A: ;
    /* nop */

loc_00094D10: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094D30; /* je: equal / zero */

loc_00094D16: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094D25; /* je: equal / zero */

loc_00094D1A: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00094D25; /* jne: not equal / not zero */

loc_00094D1F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00094D25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094D23u); } /* indirect call */
    }

loc_00094D25: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00094D30; /* je: equal / zero */

loc_00094D2D: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00094D30: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094D10; /* jne: not equal / not zero */

loc_00094D3A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00094D40
 * Original: 0x00094D40 - 0x00094D83 (67 bytes, 31 insns)
 * Folder: base (match: xbox-demo 0x00275340, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094D40: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00094D7E; /* je: equal / zero */

loc_00094D4A: ;
    /* nop */

loc_00094D50: ;
    ecx = MEM32(edi + -4);
    eax = MEM32(esi + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094D7A; /* je: equal / zero */

loc_00094D60: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094D6F; /* je: equal / zero */

loc_00094D64: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00094D6F; /* jne: not equal / not zero */

loc_00094D69: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00094D6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094D6Du); } /* indirect call */
    }

loc_00094D6F: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00094D7A; /* je: equal / zero */

loc_00094D77: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00094D7A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094D50; /* jne: not equal / not zero */

loc_00094D7E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00094D90
 * Original: 0x00094D90 - 0x00094DAC (28 bytes, 14 insns)
 * Folder: base (between: 0x00094D40 and 0x00094DD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094D90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00094DAB; /* jbe: below or equal (unsigned <=) */

loc_00094D94: ;
    edx = eax;

loc_00094D96: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094DA5; /* je: equal / zero */

loc_00094D9A: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00094DA5; /* je: equal / zero */

loc_00094DA2: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00094DA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00094D96; /* jne: not equal / not zero */

loc_00094DAB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00094DB0
 * Original: 0x00094DB0 - 0x00094DCE (30 bytes, 14 insns)
 * Folder: base (between: 0x00094D40 and 0x00094DD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094DB0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094DCD; /* je: equal / zero */

loc_00094DB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094DC3; /* je: equal / zero */

loc_00094DB8: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00094DC3; /* je: equal / zero */

loc_00094DC0: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00094DC3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094DB4; /* jne: not equal / not zero */

loc_00094DCD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00094DD0
 * Original: 0x00094DD0 - 0x00094E50 (128 bytes, 45 insns)
 * Folder: base (match: xbox-demo 0x002753D0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00094DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094DD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3688F0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = eax;
    ebx = ebx | 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFEu (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    if (CMP_BE(_fa, _fb)) goto loc_00094E05; /* jbe: below or equal (unsigned <=) */

loc_00094E01: ;
    ebx = eax;
    goto loc_00094E27;

loc_00094E05: ;
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
    if (CMP_AE(_fa, _fb)) goto loc_00094E27; /* jae: above or equal (unsigned >=) */

loc_00094E19: ;
    eax = 0xFFFFFFFEu;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00094E27; /* ja: above (unsigned >) */

loc_00094E24: ;
    ebx = ecx + edi;

loc_00094E27: ;
    MEM32(ebp + -4) = 0;
    ecx = MEM32(0x46B1A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = ebx + 1;
    if (CMP_NE(_fa, _fb)) goto loc_00094E42; /* jne: not equal / not zero */

loc_00094E3B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094E40u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00094E40: ;
    ecx = eax;

loc_00094E42: ;
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094E49u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00094E49: ;
    edx = eax;
    MEM32(ebp + 0xC) = edx;
    g_seh_ebp = ebp; sub_00094E76(); return; /* tail jmp 0x00094E76 */

}

/**
 * sub_00094E50
 * Original: 0x00094E50 - 0x00094E6D (29 bytes, 10 insns)
 * Folder: base (between: 0x00094DD0 and 0x00094F40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094E50: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -20) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = esp;
    PUSH32(esp, eax);
    MEM8(ebp + -4) = 2;
    PUSH32(esp, 0x00094E64u); RECOMP_ABI_CALL(0x00094F20u, sub_00094F20); /* call 0x00094F20 */

loc_00094E64: ;
    MEM32(ebp + 0xC) = eax;
    eax = 0x94E6D;
    esp += 4; return; /* ret */

}

/**
 * sub_00094E6D
 * Original: 0x00094E6D - 0x00094EFC (143 bytes, 52 insns)
 * Folder: base (between: 0x00094DD0 and 0x00094F40)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094E6D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094E6D: ;
    ebx = MEM32(ebp + -20);
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    if (CMP_BE(_fa, _fb)) goto loc_00094EA8; /* jbe: below or equal (unsigned <=) */

loc_00094E84: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00094E8F; /* jb: below (unsigned <) */

loc_00094E8A: ;
    esi = MEM32(esi + 4);
    goto loc_00094E92;

loc_00094E8F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00094E92: ;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx;
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
    esi = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);

loc_00094EA8: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00094ED1; /* jb: below (unsigned <) */

loc_00094EAE: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094ED1; /* je: equal / zero */

loc_00094EB5: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094EC3; /* jne: not equal / not zero */

loc_00094EBE: ;
    PUSH32(esp, 0x00094EC3u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00094EC3: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00094ECBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094EC8u); } /* indirect call */
    }

loc_00094ECB: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);

loc_00094ED1: ;
    eax = esi + 4;
    MEM8(eax) = 0;
    MEM32(eax) = edx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    POP32(esp, edi);
    if (CMP_AE(_fa, _fb)) eax = edx; /* cmovae */
    MEM8(eax + ecx) = 0;
    ecx = MEM32(ebp + -12);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00094E76
 * Original: 0x00094E76 - 0x00094EFC (134 bytes, 49 insns)
 * Folder: base (between: 0x00094DD0 and 0x00094F40)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094E76(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094E76: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    if (CMP_BE(_fa, _fb)) goto loc_00094EA8; /* jbe: below or equal (unsigned <=) */

loc_00094E84: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00094E8F; /* jb: below (unsigned <) */

loc_00094E8A: ;
    esi = MEM32(esi + 4);
    goto loc_00094E92;

loc_00094E8F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00094E92: ;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx;
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
    esi = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);

loc_00094EA8: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00094ED1; /* jb: below (unsigned <) */

loc_00094EAE: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094ED1; /* je: equal / zero */

loc_00094EB5: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094EC3; /* jne: not equal / not zero */

loc_00094EBE: ;
    PUSH32(esp, 0x00094EC3u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00094EC3: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00094ECBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094EC8u); } /* indirect call */
    }

loc_00094ECB: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);

loc_00094ED1: ;
    eax = esi + 4;
    MEM8(eax) = 0;
    MEM32(eax) = edx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    POP32(esp, edi);
    if (CMP_AE(_fa, _fb)) eax = edx; /* cmovae */
    MEM8(eax + ecx) = 0;
    ecx = MEM32(ebp + -12);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00094EFC
 * Original: 0x00094EFC - 0x00094F20 (36 bytes, 22 insns)
 * Folder: base (between: 0x00094DD0 and 0x00094F40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094EFC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094EFC: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    SET_LO8(eax, 1);
    PUSH32(esp, 0x00094F09u); RECOMP_ABI_CALL(0x00095350u, sub_00095350); /* call 0x00095350 */

loc_00094F09: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00094F12u); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_00094F12: ;
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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00094F20
 * Original: 0x00094F20 - 0x00094F3C (28 bytes, 8 insns)
 * Folder: base (between: 0x00094DD0 and 0x00094F40)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094F20: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094F2E; /* jne: not equal / not zero */

loc_00094F29: ;
    PUSH32(esp, 0x00094F2Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00094F2E: ;
    edx = MEM32(esp + 4);
    ecx = eax;
    PUSH32(esp, 0x00094F39u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00094F39: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094F40
 * Original: 0x00094F40 - 0x0009503D (253 bytes, 117 insns)
 * Folder: base (match: xbox-demo 0x00275550, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094F40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = edx;
    edx = MEM32(ebx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = ecx;
    if (CMP_B(_fa, _fb)) goto loc_00094F57; /* jb: below (unsigned <) */

loc_00094F52: ;
    eax = MEM32(ebx + 4);
    goto loc_00094F5A;

loc_00094F57: ;
    eax = ebx + 4;

loc_00094F5A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00094F8D; /* jb: below (unsigned <) */

loc_00094F5E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    eax = ebx + 4;
    if (CMP_B(_fa, _fb)) goto loc_00094F6A; /* jb: below (unsigned <) */

loc_00094F66: ;
    ecx = MEM32(eax);
    goto loc_00094F6C;

loc_00094F6A: ;
    ecx = eax;

loc_00094F6C: ;
    ebp = MEM32(ebx + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00094F8D; /* jbe: below or equal (unsigned <=) */

loc_00094F75: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00094F7C; /* jb: below (unsigned <) */

loc_00094F7A: ;
    eax = MEM32(eax);

loc_00094F7C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0x00094F88u); RECOMP_ABI_CALL(0x00095040u, sub_00095040); /* call 0x00095040 */

loc_00094F88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00094F8D: ;
    edx = MEM32(ebx + 0x14);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00094FA0; /* ja: above (unsigned >) */

loc_00094F99: ;
    ecx = ebx;
    PUSH32(esp, 0x00094FA0u); RECOMP_ABI_CALL(0x00346DB4u, sub_00346DB4); /* call 0x00346DB4 */

loc_00094FA0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00095036; /* jbe: below or equal (unsigned <=) */

loc_00094FA8: ;
    ebp = MEM32(ebx + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFEu (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00094FB9; /* jbe: below or equal (unsigned <=) */

loc_00094FB2: ;
    ecx = ebx;
    PUSH32(esp, 0x00094FB9u); RECOMP_ABI_CALL(0x00346DB4u, sub_00346DB4); /* call 0x00346DB4 */

loc_00094FB9: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00094FDA; /* jae: above or equal (unsigned >=) */

loc_00094FC0: ;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00094FCBu); RECOMP_ABI_CALL(0x00094DD0u, sub_00094DD0); /* call 0x00094DD0 */

loc_00094FCB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */

loc_00094FCD: ;
    if (CMP_BE(_fa, _fb)) goto loc_00095036; /* jbe: below or equal (unsigned <=) */

loc_00094FCF: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00095000; /* jb: below (unsigned <) */

loc_00094FD5: ;
    eax = MEM32(ebx + 4);
    goto loc_00095003;

loc_00094FDA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094FCD; /* jne: not equal / not zero */

loc_00094FDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00094FF3; /* jb: below (unsigned <) */

loc_00094FE6: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax) = 0;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00094FF3: ;
    POP32(esp, edi);
    eax = ebx + 4;
    POP32(esp, esi);
    MEM8(eax) = 0;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00095000: ;
    eax = ebx + 4;

loc_00095003: ;
    ecx = edi;
    edi = MEM32(ebx + 0x14);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_0009502F; /* jb: below (unsigned <) */

loc_00095021: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax + ebp) = 0;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0009502F: ;
    eax = ebx + 4;
    MEM8(eax + ebp) = 0;

loc_00095036: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00095040
 * Original: 0x00095040 - 0x0009511F (223 bytes, 92 insns)
 * Folder: base (match: xbox-demo 0x00275650, library)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00095040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095040: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = eax;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00095057; /* jae: above or equal (unsigned >=) */

loc_00095050: ;
    ecx = ebx;
    PUSH32(esp, 0x00095057u); RECOMP_ABI_CALL(0x00346D74u, sub_00346D74); /* call 0x00346D74 */

loc_00095057: ;
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
    if (CMP_A(_fa, _fb)) goto loc_00095074; /* ja: above (unsigned >) */

loc_0009506D: ;
    ecx = ebx;
    PUSH32(esp, 0x00095074u); RECOMP_ABI_CALL(0x00346DB4u, sub_00346DB4); /* call 0x00346DB4 */

loc_00095074: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00095117; /* jbe: below or equal (unsigned <=) */

loc_0009507C: ;
    ebp = MEM32(ebx + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFEu (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009508D; /* jbe: below or equal (unsigned <=) */

loc_00095086: ;
    ecx = ebx;
    PUSH32(esp, 0x0009508Du); RECOMP_ABI_CALL(0x00346DB4u, sub_00346DB4); /* call 0x00346DB4 */

loc_0009508D: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000950B4; /* jae: above or equal (unsigned >=) */

loc_00095094: ;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0009509Fu); RECOMP_ABI_CALL(0x00094DD0u, sub_00094DD0); /* call 0x00094DD0 */

loc_0009509F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */

loc_000950A1: ;
    if (CMP_BE(_fa, _fb)) goto loc_00095117; /* jbe: below or equal (unsigned <=) */

loc_000950A3: ;
    ecx = MEM32(esi + 0x18);
    eax = 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000950DC; /* jb: below (unsigned <) */

loc_000950AF: ;
    esi = MEM32(esi + 4);
    goto loc_000950DF;

loc_000950B4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000950A1; /* jne: not equal / not zero */

loc_000950B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_000950CE; /* jb: below (unsigned <) */

loc_000950C0: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax) = 0;
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000950CE: ;
    POP32(esp, edi);
    eax = ebx + 4;
    POP32(esp, esi);
    MEM8(eax) = 0;
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000950DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000950DF: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), eax (32-bit) */
    edx = ebx + 4;
    if (CMP_B(_fa, _fb)) goto loc_000950EB; /* jb: below (unsigned <) */

loc_000950E7: ;
    eax = MEM32(edx);
    goto loc_000950ED;

loc_000950EB: ;
    eax = edx;

loc_000950ED: ;
    ecx = edi;
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebx + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00095113; /* jb: below (unsigned <) */

loc_00095111: ;
    edx = MEM32(edx);

loc_00095113: ;
    MEM8(edx + ebp) = 0;

loc_00095117: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095120
 * Original: 0x00095120 - 0x000951EF (207 bytes, 90 insns)
 * Folder: base (match: xbox-demo 0x00275730, library)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095120: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax;
    ebp = ebx + 4;
    if (CMP_B(_fa, _fb)) goto loc_00095137; /* jb: below (unsigned <) */

loc_00095132: ;
    eax = MEM32(ebp);
    goto loc_00095139;

loc_00095137: ;
    eax = ebp;

loc_00095139: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009516E; /* jb: below (unsigned <) */

loc_0009513D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00095147; /* jb: below (unsigned <) */

loc_00095142: ;
    eax = MEM32(ebp);
    goto loc_00095149;

loc_00095147: ;
    eax = ebp;

loc_00095149: ;
    edx = MEM32(ebx + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009516E; /* jbe: below or equal (unsigned <=) */

loc_00095152: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009515A; /* jb: below (unsigned <) */

loc_00095157: ;
    ebp = MEM32(ebp);

loc_0009515A: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00095168u); RECOMP_ABI_CALL(0x000951F0u, sub_000951F0); /* call 0x000951F0 */

loc_00095168: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0009516E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFEu (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009517F; /* jbe: below or equal (unsigned <=) */

loc_00095178: ;
    ecx = ebx;
    PUSH32(esp, 0x0009517Fu); RECOMP_ABI_CALL(0x00346DB4u, sub_00346DB4); /* call 0x00346DB4 */

loc_0009517F: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000951A0; /* jae: above or equal (unsigned >=) */

loc_00095186: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00095191u); RECOMP_ABI_CALL(0x00094DD0u, sub_00094DD0); /* call 0x00094DD0 */

loc_00095191: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */

loc_00095193: ;
    if (CMP_BE(_fa, _fb)) goto loc_000951E6; /* jbe: below or equal (unsigned <=) */

loc_00095195: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000951BC; /* jb: below (unsigned <) */

loc_0009519B: ;
    eax = MEM32(ebp);
    goto loc_000951BE;

loc_000951A0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095193; /* jne: not equal / not zero */

loc_000951A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(ebx + 0x14) = esi;
    if (CMP_B(_fa, _fb)) goto loc_000951AF; /* jb: below (unsigned <) */

loc_000951AC: ;
    ebp = MEM32(ebp);

loc_000951AF: ;
    POP32(esp, esi);
    POP32(esp, edi);
    MEM8(ebp) = 0;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000951BC: ;
    eax = ebp;

loc_000951BE: ;
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edi;
    edi = eax;
    eax = MEM32(esp + 0x14);
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
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    MEM32(ebx + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000951E2; /* jb: below (unsigned <) */

loc_000951DF: ;
    ebp = MEM32(ebp);

loc_000951E2: ;
    MEM8(eax + ebp) = 0;

loc_000951E6: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095160
 * Original: 0x00095160 - 0x000951EF (143 bytes, 62 insns)
 * Folder: base (between: 0x00095120 and 0x000951F0)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095160: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00095168u); RECOMP_ABI_CALL(0x000951F0u, sub_000951F0); /* call 0x000951F0 */

loc_00095168: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    ecx = ebx;
    PUSH32(esp, 0x0009517Fu); RECOMP_ABI_CALL(0x00346DB4u, sub_00346DB4); /* call 0x00346DB4 */

loc_0009517F: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000951A0; /* jae: above or equal (unsigned >=) */

loc_00095186: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00095191u); RECOMP_ABI_CALL(0x00094DD0u, sub_00094DD0); /* call 0x00094DD0 */

loc_00095191: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */

loc_00095193: ;
    if (CMP_BE(_fa, _fb)) goto loc_000951E6; /* jbe: below or equal (unsigned <=) */

loc_00095195: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000951BC; /* jb: below (unsigned <) */

loc_0009519B: ;
    eax = MEM32(ebp);
    goto loc_000951BE;

loc_000951A0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095193; /* jne: not equal / not zero */

loc_000951A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(ebx + 0x14) = esi;
    if (CMP_B(_fa, _fb)) goto loc_000951AF; /* jb: below (unsigned <) */

loc_000951AC: ;
    ebp = MEM32(ebp);

loc_000951AF: ;
    POP32(esp, esi);
    POP32(esp, edi);
    MEM8(ebp) = 0;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000951BC: ;
    eax = ebp;

loc_000951BE: ;
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edi;
    edi = eax;
    eax = MEM32(esp + 0x14);
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
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    MEM32(ebx + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000951E2; /* jb: below (unsigned <) */

loc_000951DF: ;
    ebp = MEM32(ebp);

loc_000951E2: ;
    MEM8(eax + ebp) = 0;

loc_000951E6: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000951F0
 * Original: 0x000951F0 - 0x000952D6 (230 bytes, 97 insns)
 * Folder: base (match: xbox-demo 0x00275800, library)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000951F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000951F0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    edi = eax;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00095209; /* jae: above or equal (unsigned >=) */

loc_00095202: ;
    ecx = ebx;
    PUSH32(esp, 0x00095209u); RECOMP_ABI_CALL(0x00346D74u, sub_00346D74); /* call 0x00346D74 */

loc_00095209: ;
    ebp = MEM32(esi + 0x14);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) ebp = edi; /* cmovb */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009523B; /* jne: not equal / not zero */

loc_0009521B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ebx;
    PUSH32(esp, 0x00095228u); RECOMP_ABI_CALL(0x000952E0u, sub_000952E0); /* call 0x000952E0 */

loc_00095228: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00095233u); RECOMP_ABI_CALL(0x000952E0u, sub_000952E0); /* call 0x000952E0 */

loc_00095233: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0009523B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFEu (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00095247; /* jbe: below or equal (unsigned <=) */

loc_00095240: ;
    ecx = ebx;
    PUSH32(esp, 0x00095247u); RECOMP_ABI_CALL(0x00346DB4u, sub_00346DB4); /* call 0x00346DB4 */

loc_00095247: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009526E; /* jae: above or equal (unsigned >=) */

loc_0009524E: ;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00095259u); RECOMP_ABI_CALL(0x00094DD0u, sub_00094DD0); /* call 0x00094DD0 */

loc_00095259: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */

loc_0009525B: ;
    if (CMP_BE(_fa, _fb)) goto loc_000952CE; /* jbe: below or equal (unsigned <=) */

loc_0009525D: ;
    ecx = MEM32(esi + 0x18);
    eax = 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00095296; /* jb: below (unsigned <) */

loc_00095269: ;
    esi = MEM32(esi + 4);
    goto loc_00095299;

loc_0009526E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009525B; /* jne: not equal / not zero */

loc_00095272: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00095288; /* jb: below (unsigned <) */

loc_0009527A: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax) = 0;
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00095288: ;
    POP32(esp, edi);
    eax = ebx + 4;
    POP32(esp, esi);
    MEM8(eax) = 0;
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00095296: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00095299: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), eax (32-bit) */
    eax = ebx + 4;
    if (CMP_B(_fa, _fb)) goto loc_000952A5; /* jb: below (unsigned <) */

loc_000952A1: ;
    edx = MEM32(eax);
    goto loc_000952A7;

loc_000952A5: ;
    edx = eax;

loc_000952A7: ;
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp;
    edi = edx;
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
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_000952CA; /* jb: below (unsigned <) */

loc_000952C8: ;
    eax = MEM32(eax);

loc_000952CA: ;
    MEM8(eax + ebp) = 0;

loc_000952CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000952E0
 * Original: 0x000952E0 - 0x00095350 (112 bytes, 49 insns)
 * Folder: base (match: xbox-demo 0x002758F0, library)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000952E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000952E0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000952F4; /* jae: above or equal (unsigned >=) */

loc_000952ED: ;
    ecx = esi;
    PUSH32(esp, 0x000952F4u); RECOMP_ABI_CALL(0x00346D74u, sub_00346D74); /* call 0x00346D74 */

loc_000952F4: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) edi = eax; /* cmovb */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00095349; /* jbe: below or equal (unsigned <=) */

loc_00095302: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    PUSH32(esp, ebx);
    ebx = esi + 4;
    if (CMP_B(_fa, _fb)) goto loc_00095312; /* jb: below (unsigned <) */

loc_0009530E: ;
    edx = MEM32(ebx);
    goto loc_00095314;

loc_00095312: ;
    edx = ebx;

loc_00095314: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009531D; /* jb: below (unsigned <) */

loc_00095319: ;
    ecx = MEM32(ebx);
    goto loc_0009531F;

loc_0009531D: ;
    ecx = ebx;

loc_0009531F: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009532Fu); RECOMP_ABI_CALL(0x00346EA0u, sub_00346EA0); /* call 0x00346EA0 */

loc_0009532F: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00095344; /* jb: below (unsigned <) */

loc_00095342: ;
    ebx = MEM32(ebx);

loc_00095344: ;
    MEM8(ebx + eax) = 0;
    POP32(esp, ebx);

loc_00095349: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095350
 * Original: 0x00095350 - 0x000953B6 (102 bytes, 41 insns)
 * Folder: base (between: 0x000952E0 and 0x00095670)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095350: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_000953A2; /* je: equal / zero */

loc_0009535E: ;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000953A2; /* jb: below (unsigned <) */

loc_00095364: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ebx = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = eax + 4;
    if (CMP_BE(_fa, _fb)) goto loc_00095383; /* jbe: below or equal (unsigned <=) */

loc_0009536F: ;
    PUSH32(esp, esi);
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebx;
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
    POP32(esp, esi);

loc_00095383: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000953A2; /* je: equal / zero */

loc_00095388: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095396; /* jne: not equal / not zero */

loc_00095391: ;
    PUSH32(esp, 0x00095396u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00095396: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0009539Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009539Bu); } /* indirect call */
    }

loc_0009539E: ;
    eax = MEM32(esp + 0xC);

loc_000953A2: ;
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x18) = 0xF;
    MEM8(eax + ebp + 4) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000953C0
 * Original: 0x000953C0 - 0x000953DA (26 bytes, 13 insns)
 * Folder: base (between: 0x000952E0 and 0x00095670)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000953C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000953C0: ;
    eax = ecx;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_000953C6: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000953C6; /* jne: not equal / not zero */

loc_000953CD: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esi;
    PUSH32(esp, 0x000953D6u); RECOMP_ABI_CALL(0x00094F40u, sub_00094F40); /* call 0x00094F40 */

loc_000953D6: ;
    eax = esi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000953E0
 * Original: 0x000953E0 - 0x00095418 (56 bytes, 19 insns)
 * Folder: base (between: 0x000952E0 and 0x00095670)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000953E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000953E0: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00095405; /* jb: below (unsigned <) */

loc_000953E6: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095404; /* je: equal / zero */

loc_000953EE: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000953FC; /* jne: not equal / not zero */

loc_000953F7: ;
    PUSH32(esp, 0x000953FCu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000953FC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00095404u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095401u); } /* indirect call */
    }

loc_00095404: ;
    POP32(esp, edi);

loc_00095405: ;
    MEM32(esi + 0x18) = 0xF;
    MEM32(esi + 0x14) = 0;
    MEM8(esi + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00095420
 * Original: 0x00095420 - 0x000954A3 (131 bytes, 39 insns)
 * Folder: base (between: 0x000952E0 and 0x00095670)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095420: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x46B1A8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00095433; /* jne: not equal / not zero */

loc_0009542C: ;
    PUSH32(esp, 0x00095431u); RECOMP_ABI_CALL(0x00096160u, sub_00096160); /* call 0x00096160 */

loc_00095431: ;
    ebx = eax;

loc_00095433: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x0009543Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095434u); } /* indirect call */
    }

loc_0009543A: ;
    SET_LO8(ecx, MEM8(0x76B450));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095475; /* jne: not equal / not zero */

loc_00095449: ;
    edx = MEM32(0x76B450);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    eax = 0x46B190;
    edi = 0x76B430;
    MEM32(0x76B450) = edx;
    PUSH32(esp, 0x00095467u); RECOMP_ABI_CALL(0x000954B0u, sub_000954B0); /* call 0x000954B0 */

loc_00095467: ;
    PUSH32(esp, 0x369B80);
    PUSH32(esp, 0x00095471u); RECOMP_ABI_CALL(0x003472BDu, sub_003472BD); /* call 0x003472BD */

loc_00095471: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_00095475: ;
    eax = MEM32(0x46B190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095491; /* jne: not equal / not zero */

loc_0009547E: ;
    SET_LO8(eax, MEM8(0x758648));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095491; /* je: equal / zero */

loc_00095487: ;
    ecx = 0x10;
    PUSH32(esp, 0x00095491u); RECOMP_ABI_CALL(0x00098D40u, sub_00098D40); /* call 0x00098D40 */

loc_00095491: ;
    esi = MEM32(0x46B190);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x0009549Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095498u); } /* indirect call */
    }

loc_0009549E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000954B0
 * Original: 0x000954B0 - 0x000954F4 (68 bytes, 29 insns)
 * Folder: base (between: 0x000952E0 and 0x00095670)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000954B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000954B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edi + 8;
    MEM32(edi) = eax;
    PUSH32(esp, 0x000954BDu); RECOMP_ABI_CALL(0x00096570u, sub_00096570); /* call 0x00096570 */

loc_000954BD: ;
    ebp = MEM32(esi + 4);
    ebx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000954D0u); RECOMP_ABI_CALL(0x00347AA0u, sub_00347AA0); /* call 0x00347AA0 */

loc_000954D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF4240);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edx;
    PUSH32(esp, 0x000954E4u); RECOMP_ABI_CALL(0x00347AA0u, sub_00347AA0); /* call 0x00347AA0 */

loc_000954E4: ;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = edx;
    ecx = MEM32(edi);
    MEM32(ecx) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00095500
 * Original: 0x00095500 - 0x000955B8 (184 bytes, 48 insns)
 * Folder: base (between: 0x000952E0 and 0x00095670)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095500: ;
    eax = MEM32(0x46B1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009550E; /* jne: not equal / not zero */

loc_00095509: ;
    PUSH32(esp, 0x0009550Eu); RECOMP_ABI_CALL(0x00096930u, sub_00096930); /* call 0x00096930 */

loc_0009550E: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00095520u); RECOMP_ABI_CALL(0x000956D0u, sub_000956D0); /* call 0x000956D0 */

loc_00095520: ;
    ebx = eax;
    eax = MEM32(0x46B1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095530; /* jne: not equal / not zero */

loc_0009552B: ;
    PUSH32(esp, 0x00095530u); RECOMP_ABI_CALL(0x00096930u, sub_00096930); /* call 0x00096930 */

loc_00095530: ;
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x98);
    ecx = MEM32(esi + eax + 0x810);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x26);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + ecx * 4 + 0x818) = 0x41FAF8;
    MEM32(esi + eax + 0x810) = MEM32(esi + eax + 0x810) + 1;
    _fa = (uint32_t)(MEM32(esi + eax + 0x810)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x46B1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095566; /* jne: not equal / not zero */

loc_00095561: ;
    PUSH32(esp, 0x00095566u); RECOMP_ABI_CALL(0x00096930u, sub_00096930); /* call 0x00096930 */

loc_00095566: ;
    edx = MEM32(esi + eax + 0x810);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edx * 4 + 0x818) = 0x41FAE0;
    MEM32(esi + eax + 0x810) = MEM32(esi + eax + 0x810) + 1;
    _fa = (uint32_t)(MEM32(esi + eax + 0x810)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x46B1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009558F; /* jne: not equal / not zero */

loc_0009558A: ;
    PUSH32(esp, 0x0009558Fu); RECOMP_ABI_CALL(0x00096930u, sub_00096930); /* call 0x00096930 */

loc_0009558F: ;
    ecx = MEM32(esi + eax + 0x810);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + ecx * 4 + 0x818) = 0x41FACC;
    ecx = MEM32(esi + eax + 0x810);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + eax + 0x810) = ecx;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000955C0
 * Original: 0x000955C0 - 0x00095666 (166 bytes, 44 insns)
 * Folder: base (between: 0x000952E0 and 0x00095670)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000955C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000955C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3688E6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x46B1A8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000955E9; /* jne: not equal / not zero */

loc_000955E2: ;
    PUSH32(esp, 0x000955E7u); RECOMP_ABI_CALL(0x00096160u, sub_00096160); /* call 0x00096160 */

loc_000955E7: ;
    edi = eax;

loc_000955E9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x000955F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000955EEu); } /* indirect call */
    }

loc_000955F4: ;
    MEM32(esp + 0x14) = 0;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095646; /* jne: not equal / not zero */

loc_00095605: ;
    SET_LO8(ecx, MEM8(0x76BA7C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095646; /* jne: not equal / not zero */

loc_00095614: ;
    MEM32(0x76BA7C) = MEM32(0x76BA7C) | eax;
    _fa = (uint32_t)(MEM32(0x76BA7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(esp + 0x14) = LO8(eax);
    esi = 0x76BA5C;
    MEM32(0x76BA58) = 0x46B1A4;
    PUSH32(esp, 0x00095632u); RECOMP_ABI_CALL(0x000975D0u, sub_000975D0); /* call 0x000975D0 */

loc_00095632: ;
    eax = MEM32(0x76BA58);
    PUSH32(esp, 0x369B90);
    MEM32(eax) = esi;
    PUSH32(esp, 0x00095643u); RECOMP_ABI_CALL(0x003472BDu, sub_003472BD); /* call 0x003472BD */

loc_00095643: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00095646: ;
    esi = MEM32(0x46B1A4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00095653u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009564Du); } /* indirect call */
    }

loc_00095653: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00095670
 * Original: 0x00095670 - 0x000956A6 (54 bytes, 17 insns)
 * Folder: base (match: xbox-demo 0x00273350, library)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095670: ;
    PUSH32(esp, esi);
    esi = MEM32(0x46B1A8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095682; /* jne: not equal / not zero */

loc_0009567B: ;
    PUSH32(esp, 0x00095680u); RECOMP_ABI_CALL(0x00096160u, sub_00096160); /* call 0x00096160 */

loc_00095680: ;
    esi = eax;

loc_00095682: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00095689u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095683u); } /* indirect call */
    }

loc_00095689: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095696; /* je: equal / zero */

loc_00095690: ;
    MEM32(eax) = 0;

loc_00095696: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x0009569Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095697u); } /* indirect call */
    }

loc_0009569D: ;
    MEM32(edi + 4) = 0x41FA78;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000956B0
 * Original: 0x000956B0 - 0x000956CF (31 bytes, 11 insns)
 * Folder: base (between: 0x00095670 and 0x000956D0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000956B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000956B0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41FA78;
    if (TEST_Z(_fa, _fb)) goto loc_000956C9; /* je: equal / zero */

loc_000956C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000956C6u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_000956C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000956C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000956D0
 * Original: 0x000956D0 - 0x00095747 (119 bytes, 35 insns)
 * Folder: base (match: xbox-demo 0x002733B0, library)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000956D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000956D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x2E00);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x98);
    esi = edx + eax;
    edx = MEM32(esp + 0x14);
    ecx = edi + 1;
    MEM32(eax + 0x2E00) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x808) = ecx;
    ecx = MEM32(esi + 0x80C);
    MEM32(esi + 0x814) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esi + 0x804) = edx;
    MEM32(esi + 0x800) = edx;
    ebx = eax + 0x2E24;
    if (CMP_EQ(_fa, _fb)) goto loc_0009572F; /* je: equal / zero */

loc_0009571F: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0009572F; /* jne: not equal / not zero */

loc_00095724: ;
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 8), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009572F; /* je: equal / zero */

loc_00095729: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0009572Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009572Du); } /* indirect call */
    }

loc_0009572F: ;
    MEM32(esi + 0x80C) = ebx;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x804) = MEM32(esi + 0x804) | 9;
    _fa = (uint32_t)(MEM32(esi + 0x804)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00095750
 * Original: 0x00095750 - 0x00095783 (51 bytes, 21 insns)
 * Folder: base (match: xbox-demo 0x00275A60, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095750: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009577F; /* je: equal / zero */

loc_00095759: ;
    ecx = MEM32(eax + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = ecx;
    if ((_fa != 0)) goto loc_00095779; /* jne: not equal / not zero */

loc_00095762: ;
    eax = MEM32(0x46B1B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095770; /* jne: not equal / not zero */

loc_0009576B: ;
    PUSH32(esp, 0x00095770u); RECOMP_ABI_CALL(0x00097A70u, sub_00097A70); /* call 0x00097A70 */

loc_00095770: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x00095778u); RECOMP_ABI_CALL(0x00097F80u, sub_00097F80); /* call 0x00097F80 */

loc_00095778: ;
    POP32(esp, esi);

loc_00095779: ;
    MEM32(edi) = 0;

loc_0009577F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00095790
 * Original: 0x00095790 - 0x00095804 (116 bytes, 32 insns)
 * Folder: base (match: xbox-demo 0x00275AA0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095790: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F48);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000957B4; /* jne: not equal / not zero */

loc_000957AF: ;
    PUSH32(esp, 0x000957B4u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000957B4: ;
    edx = 0x48;
    ecx = eax;
    PUSH32(esp, 0x000957C0u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000957C0: ;
    MEM32(esp) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000957EE; /* je: equal / zero */

loc_000957CF: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000957DAu); RECOMP_ABI_CALL(0x00095810u, sub_00095810); /* call 0x00095810 */

loc_000957DA: ;
    MEM32(0x758634) = eax;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000957EE: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x758634) = eax;
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00095810
 * Original: 0x00095810 - 0x000958B8 (168 bytes, 46 insns)
 * Folder: base (between: 0x00095790 and 0x000958C0)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095810: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368CB8);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0x0009582Fu); RECOMP_ABI_CALL(0x00098990u, sub_00098990); /* call 0x00098990 */

loc_0009582F: ;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    eax = esi + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0;
    { uint32_t _icall_target = MEM32(0x418154); PUSH32(esp, 0x0009584Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095845u); } /* indirect call */
    }

loc_0009584B: ;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0xC) = ecx;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095860; /* jne: not equal / not zero */

loc_0009585B: ;
    PUSH32(esp, 0x00095860u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00095860: ;
    edx = 1;
    ecx = eax;
    PUSH32(esp, 0x0009586Cu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0009586C: ;
    edx = MEM32(0x758644);
    ecx = MEM32(esi + 0xC);
    MEM32(esi + 0x28) = eax;
    eax = edx;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x10) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(esi + 0x18) = edx;
    ecx = edx;
    eax = eax + eax * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 4);
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x24) = 0;
    MEM32(esi + 0x20) = eax;
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000958C0
 * Original: 0x000958C0 - 0x00095932 (114 bytes, 31 insns)
 * Folder: base (match: xbox-demo 0x00275BC0, library)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000958C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000958C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F48);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000958E4; /* jne: not equal / not zero */

loc_000958DF: ;
    PUSH32(esp, 0x000958E4u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000958E4: ;
    edx = 0x40;
    ecx = eax;
    PUSH32(esp, 0x000958F0u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000958F0: ;
    MEM32(esp) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0009591F; /* je: equal / zero */

loc_000958FF: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009590Eu); RECOMP_ABI_CALL(0x00098C20u, sub_00098C20); /* call 0x00098C20 */

loc_0009590E: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0009591F: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00095940
 * Original: 0x00095940 - 0x00095A28 (232 bytes, 82 insns)
 * Folder: base (between: 0x000958C0 and 0x00096130)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095940: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368C98);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = edx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    eax = ebx + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    esi = ecx;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00095972u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009596Cu); } /* indirect call */
    }

loc_00095972: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x24) = ebp;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00095982; /* jbe: below or equal (unsigned <=) */

loc_0009597D: ;
    PUSH32(esp, 0x00095982u); RECOMP_ABI_CALL(0x00095A30u, sub_00095A30); /* call 0x00095A30 */

loc_00095982: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebx + 0x18));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebx + 0x18)); }
    MEM32(edi + 0xC) = eax;
    ecx = MEM32(edi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00095994u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095991u); } /* indirect call */
    }

loc_00095994: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000959B1; /* ja: above (unsigned >) */

loc_00095998: ;
    if (CMP_B(_fa, _fb)) goto loc_000959A4; /* jb: below (unsigned <) */

loc_0009599A: ;
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000959B1; /* jae: above or equal (unsigned >=) */

loc_000959A4: ;
    edx = MEM32(esp + 0x30);
    eax = esi + edx;
    MEM32(esp + 0x18) = ebp;
    goto loc_000959BD;

loc_000959B1: ;
    ecx = MEM32(edi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000959B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000959B6u); } /* indirect call */
    }

loc_000959B9: ;
    MEM32(esp + 0x18) = edx;

loc_000959BD: ;
    MEM32(edi + 0x10) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x1C) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebx + 0x18));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebx + 0x18)); }
    MEM32(edi + 0x20) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(edi + 0x14) = edx;
    eax = MEM32(edi + 0x20);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(edi) = eax;
    MEM32(edi + 4) = ecx;
    esi = MEM32(ebx + 4);
    edx = MEM32(esi + 4);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000959F2u); RECOMP_ABI_CALL(0x0003AC70u, sub_0003AC70); /* call 0x0003AC70 */

loc_000959F2: ;
    ecx = 1;
    edx = ebx;
    edi = eax;
    PUSH32(esp, 0x00095A00u); RECOMP_ABI_CALL(0x000DB310u, sub_000DB310); /* call 0x000DB310 */

loc_00095A00: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 4) = edi;
    eax = MEM32(edi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(eax) = edi;
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00095A13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095A0Du); } /* indirect call */
    }

loc_00095A13: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00095A30
 * Original: 0x00095A30 - 0x00095B47 (279 bytes, 98 insns)
 * Folder: base (between: 0x000958C0 and 0x00096130)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095A30: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ebx + 0x2C;
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = ebp;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00095A58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095A52u); } /* indirect call */
    }

loc_00095A58: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = ecx;
    eax = MEM32(ebx + 4);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00095B1B; /* je: equal / zero */

loc_00095A6F: ;
    /* nop */

loc_00095A70: ;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095A7F; /* je: equal / zero */

loc_00095A75: ;
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00095A70; /* jne: not equal / not zero */

loc_00095A7F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095B1B; /* je: equal / zero */

loc_00095A87: ;
    eax = MEM32(edi + 0x2C);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095AE8; /* je: equal / zero */

loc_00095A90: ;
    eax = MEM32(ebx + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x2C) (32-bit) */
    ecx = MEM32(esi + 8);
    ebp = MEM32(esi);
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00095ACA; /* je: equal / zero */

loc_00095AA4: ;
    edx = MEM32(esi + 4);
    MEM32(edx) = ebp;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095ABF; /* jne: not equal / not zero */

loc_00095ABA: ;
    PUSH32(esp, 0x00095ABFu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00095ABF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00095AC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095AC4u); } /* indirect call */
    }

loc_00095AC7: ;
    MEM32(edi + 0x30) = MEM32(edi + 0x30) - 1;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00095ACA: ;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    esi = ebp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00095AD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095AD6u); } /* indirect call */
    }

loc_00095AD9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095A90; /* jne: not equal / not zero */

loc_00095ADE: ;
    edx = MEM32(esp + 8);
    ebp = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00095AE8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095B1B; /* je: equal / zero */

loc_00095AED: ;
    eax = MEM32(edx + 4);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    eax = MEM32(edx);
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095B0E; /* jne: not equal / not zero */

loc_00095B05: ;
    PUSH32(esp, 0x00095B0Au); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00095B0A: ;
    edx = MEM32(esp + 8);

loc_00095B0E: ;
    esi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x00095B16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095B13u); } /* indirect call */
    }

loc_00095B16: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) - 1;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00095B1B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(edi + 0xC) = ecx;
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x1C) = ecx;
    MEM32(edi + 0x20) = ecx;
    MEM32(edi + 0x14) = ecx;
    MEM32(edi) = ecx;
    MEM32(edi + 4) = ecx;
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00095B36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095B30u); } /* indirect call */
    }

loc_00095B36: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00095B50
 * Original: 0x00095B50 - 0x00095BD8 (136 bytes, 52 insns)
 * Folder: base (between: 0x000958C0 and 0x00096130)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095B50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    eax = MEM32(ebx + 0x38);
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095BD2; /* je: equal / zero */

loc_00095B60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_00095B70;

loc_00095B64: ;
    ebx = MEM32(esp + 0x1C);
    goto loc_00095B70;

    /* nop */

loc_00095B70: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 0x38) (32-bit) */
    esi = MEM32(ebp);
    edi = MEM32(ebp + 8);
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00095BA6; /* je: equal / zero */

loc_00095B7F: ;
    eax = MEM32(ebp + 4);
    MEM32(eax) = esi;
    ecx = MEM32(ebp);
    edx = MEM32(ebp + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095B9B; /* jne: not equal / not zero */

loc_00095B96: ;
    PUSH32(esp, 0x00095B9Bu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00095B9B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00095BA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095BA0u); } /* indirect call */
    }

loc_00095BA3: ;
    MEM32(ebx + 0x3C) = MEM32(ebx + 0x3C) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00095BA6: ;
    ebx = MEM32(esp + 0x18);
    ebp = esi;
    PUSH32(esp, 0x00095BB1u); RECOMP_ABI_CALL(0x00095A30u, sub_00095A30); /* call 0x00095A30 */

loc_00095BB1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095BC7; /* je: equal / zero */

loc_00095BB5: ;
    ecx = edi;
    PUSH32(esp, 0x00095BBCu); RECOMP_ABI_CALL(0x00098C90u, sub_00098C90); /* call 0x00098C90 */

loc_00095BBC: ;
    esi = edi;
    PUSH32(esp, 0x00095BC3u); RECOMP_ABI_CALL(0x00097970u, sub_00097970); /* call 0x00097970 */

loc_00095BC3: ;
    esi = MEM32(esp + 0x10);

loc_00095BC7: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x38) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095B64; /* jne: not equal / not zero */

loc_00095BD0: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00095BD2: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00095BE0
 * Original: 0x00095BE0 - 0x00095E76 (662 bytes, 214 insns)
 * Folder: base (between: 0x000958C0 and 0x00096130)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095BE0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368C98);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    eax = esi + 0x2C;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ebx = ecx;
    MEM32(esp + 0x20) = eax;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00095C10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095C0Au); } /* indirect call */
    }

loc_00095C10: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x30) = ecx;
    eax = MEM32(ebx + 0x2C);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00095C55; /* jne: not equal / not zero */

loc_00095C27: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);

loc_00095C2C: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00095C32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095C2Cu); } /* indirect call */
    }

loc_00095C32: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00095C4B: ;
    esi = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00095C55: ;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(MEM32(eax + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x38), ecx (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00095E3B; /* jne: not equal / not zero */

loc_00095C65: ;
    edi = MEM32(ebx + 0x20);
    MEM32(ebx + 0x20) = ecx;
    eax = MEM32(eax + 0x2C);
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x20) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00095DD5; /* je: equal / zero */

loc_00095C7C: ;
    /* nop */

loc_00095C80: ;
    eax = ecx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x1C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00095DBF; /* jb: below (unsigned <) */

loc_00095C90: ;
    ecx = MEM32(esp + 0x3C);
    eax = ecx;
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00095E47; /* jle: less or equal (signed <=) */

loc_00095CA2: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00095CFA; /* jne: not equal / not zero */

loc_00095CAC: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095CEA; /* je: equal / zero */

loc_00095CB3: ;
    ecx = MEM32(eax + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = ecx;
    if ((_fa != 0)) goto loc_00095CE3; /* jne: not equal / not zero */

loc_00095CBC: ;
    esi = MEM32(0x46B1B8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095CCD; /* jne: not equal / not zero */

loc_00095CC6: ;
    PUSH32(esp, 0x00095CCBu); RECOMP_ABI_CALL(0x00097A70u, sub_00097A70); /* call 0x00097A70 */

loc_00095CCB: ;
    esi = eax;

loc_00095CCD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00095CD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095CCEu); } /* indirect call */
    }

loc_00095CD4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00095CDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095CD5u); } /* indirect call */
    }

loc_00095CDB: ;
    esi = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x14);

loc_00095CE3: ;
    MEM32(ebp + 8) = 0;

loc_00095CEA: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;
    goto loc_00095DBF;

loc_00095CFA: ;
    edx = MEM32(ebx + 0x14);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) eax = edx; /* cmovb */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00095D1D; /* jae: above or equal (unsigned >=) */

loc_00095D0C: ;
    eax = ecx;
    ecx = MEM32(esp + 0x18);
    edx = eax + edi;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 0x20) = edx;
    MEM32(esp + 0x18) = ecx;

loc_00095D1D: ;
    edx = MEM32(ebp + 8);
    esi = MEM32(edx + 8);
    edx = MEM32(esp + 0x40);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    ecx = MEM32(esp + 0x10);
    edi = MEM32(ebx + 0x14);
    esi = MEM32(ebx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = ecx;
    ecx = edi;
    MEM32(ebx + 0x14) = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(ebx) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00095E54; /* je: equal / zero */

loc_00095D63: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095DB3; /* jne: not equal / not zero */

loc_00095D71: ;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095DA4; /* je: equal / zero */

loc_00095D77: ;
    ecx = MEM32(eax + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(eax + 0xC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00095DA1; /* jne: not equal / not zero */

loc_00095D82: ;
    esi = MEM32(0x46B1B8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095D93; /* jne: not equal / not zero */

loc_00095D8C: ;
    PUSH32(esp, 0x00095D91u); RECOMP_ABI_CALL(0x00097A70u, sub_00097A70); /* call 0x00097A70 */

loc_00095D91: ;
    esi = eax;

loc_00095D93: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00095D9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095D94u); } /* indirect call */
    }

loc_00095D9A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00095DA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095D9Bu); } /* indirect call */
    }

loc_00095DA1: ;
    MEM32(ebp + 8) = edi;

loc_00095DA4: ;
    eax = MEM32(esp + 0x38);
    edx = MEM32(eax + 0x14);
    ecx = MEM32(eax + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x14) = edx;

loc_00095DB3: ;
    esi = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = edi;

loc_00095DBF: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x2C);
    ebp = MEM32(ebp);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    ecx = MEM32(esp + 0x18);
    if (CMP_NE(_fa, _fb)) goto loc_00095C80; /* jne: not equal / not zero */

loc_00095DD5: ;
    eax = MEM32(ebx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095E69; /* jne: not equal / not zero */

loc_00095DE0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 0x2C) (32-bit) */
    esi = MEM32(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00095E11; /* je: equal / zero */

loc_00095DE7: ;
    ecx = MEM32(edx + 4);
    MEM32(ecx) = esi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095E06; /* jne: not equal / not zero */

loc_00095DFD: ;
    PUSH32(esp, 0x00095E02u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00095E02: ;
    edx = MEM32(esp + 0x14);

loc_00095E06: ;
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 8); PUSH32(esp, 0x00095E0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095E0Bu); } /* indirect call */
    }

loc_00095E0E: ;
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00095E11: ;
    edx = MEM32(esp + 0x38);
    ecx = MEM32(edx + 0xC);
    edx = MEM32(esp + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00095E26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095E23u); } /* indirect call */
    }

loc_00095E26: ;
    MEM32(ebx + 0x1C) = 0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095C4B; /* jne: not equal / not zero */

loc_00095E36: ;
    goto loc_00095C27;

loc_00095E3B: ;
    ecx = esi;
    PUSH32(esp, 0x00095E42u); RECOMP_ABI_CALL(0x00095F60u, sub_00095F60); /* call 0x00095F60 */

loc_00095E42: ;
    goto loc_00095C27;

loc_00095E47: ;
    eax = MEM32(esp + 0x18);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 0x1C) = eax;
    goto loc_00095C27;

loc_00095E54: ;
    edi = ebx;
    ebx = MEM32(esp + 0x38);
    PUSH32(esp, 0x00095E5Fu); RECOMP_ABI_CALL(0x00095A30u, sub_00095A30); /* call 0x00095A30 */

loc_00095E5F: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    goto loc_00095C2C;

loc_00095E69: ;
    eax = MEM32(esp + 0x1C);
    MEM32(ebx + 0x1C) = ecx;
    PUSH32(esp, eax);
    goto loc_00095C2C;

}

/**
 * sub_00095D5D
 * Original: 0x00095D5D - 0x00095E76 (281 bytes, 87 insns)
 * Folder: base (between: 0x000958C0 and 0x00096130)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095D5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095D5D: ;
    if (_flags /* je: equal / zero */) goto loc_00095E54;

loc_00095D63: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095DB3; /* jne: not equal / not zero */

loc_00095D71: ;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095DA4; /* je: equal / zero */

loc_00095D77: ;
    ecx = MEM32(eax + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(eax + 0xC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00095DA1; /* jne: not equal / not zero */

loc_00095D82: ;
    esi = MEM32(0x46B1B8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095D93; /* jne: not equal / not zero */

loc_00095D8C: ;
    PUSH32(esp, 0x00095D91u); RECOMP_ABI_CALL(0x00097A70u, sub_00097A70); /* call 0x00097A70 */

loc_00095D91: ;
    esi = eax;

loc_00095D93: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00095D9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095D94u); } /* indirect call */
    }

loc_00095D9A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00095DA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095D9Bu); } /* indirect call */
    }

loc_00095DA1: ;
    MEM32(ebp + 8) = edi;

loc_00095DA4: ;
    eax = MEM32(esp + 0x38);
    edx = MEM32(eax + 0x14);
    ecx = MEM32(eax + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x14) = edx;

loc_00095DB3: ;
    esi = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = edi;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x2C);
    ebp = MEM32(ebp);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    ecx = MEM32(esp + 0x18);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00095C80(); return; } /* jne: not equal / not zero */

loc_00095DD5: ;
    eax = MEM32(ebx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095E69; /* jne: not equal / not zero */

loc_00095DE0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 0x2C) (32-bit) */
    esi = MEM32(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00095E11; /* je: equal / zero */

loc_00095DE7: ;
    ecx = MEM32(edx + 4);
    MEM32(ecx) = esi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095E06; /* jne: not equal / not zero */

loc_00095DFD: ;
    PUSH32(esp, 0x00095E02u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00095E02: ;
    edx = MEM32(esp + 0x14);

loc_00095E06: ;
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 8); PUSH32(esp, 0x00095E0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095E0Bu); } /* indirect call */
    }

loc_00095E0E: ;
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00095E11: ;
    edx = MEM32(esp + 0x38);
    ecx = MEM32(edx + 0xC);
    edx = MEM32(esp + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00095E26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095E23u); } /* indirect call */
    }

loc_00095E26: ;
    MEM32(ebx + 0x1C) = 0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00095C4B(); return; } /* jne: not equal / not zero */

loc_00095E36: ;
    g_seh_ebp = ebp; sub_00095C27(); return; /* tail jmp 0x00095C27 */

    ecx = esi;
    PUSH32(esp, 0x00095E42u); RECOMP_ABI_CALL(0x00095F60u, sub_00095F60); /* call 0x00095F60 */

loc_00095E42: ;
    g_seh_ebp = ebp; sub_00095C27(); return; /* tail jmp 0x00095C27 */

    eax = MEM32(esp + 0x18);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 0x1C) = eax;
    g_seh_ebp = ebp; sub_00095C27(); return; /* tail jmp 0x00095C27 */

loc_00095E54: ;
    edi = ebx;
    ebx = MEM32(esp + 0x38);
    PUSH32(esp, 0x00095E5Fu); RECOMP_ABI_CALL(0x00095A30u, sub_00095A30); /* call 0x00095A30 */

loc_00095E5F: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    g_seh_ebp = ebp; sub_00095C2C(); return; /* tail jmp 0x00095C2C */

loc_00095E69: ;
    eax = MEM32(esp + 0x1C);
    MEM32(ebx + 0x1C) = ecx;
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_00095C2C(); return; /* tail jmp 0x00095C2C */

}

/**
 * sub_00095E80
 * Original: 0x00095E80 - 0x00095F58 (216 bytes, 70 insns)
 * Folder: base (between: 0x000958C0 and 0x00096130)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095E80(void)
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

loc_00095E80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = edi + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = ebp;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00095EAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095EA4u); } /* indirect call */
    }

loc_00095EAA: ;
    MEM32(esp + 0x18) = 0;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00095EBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095EB9u); } /* indirect call */
    }

loc_00095EBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095EDF; /* je: equal / zero */

loc_00095EC0: ;
    ecx = edi;
    PUSH32(esp, 0x00095EC7u); RECOMP_ABI_CALL(0x00095F60u, sub_00095F60); /* call 0x00095F60 */

loc_00095EC7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00095ECEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095EC8u); } /* indirect call */
    }

loc_00095ECE: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00095EDF: ;
    ecx = MEM32(edi + 8);
    fp_push((double)SMEM32(edi + 8)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00095EEF; /* jge: greater or equal (signed >=) */

loc_00095EE9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_00095EEF: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    edx = MEM32(esp + 8);
    fp_push(MEMF(0x4293F8)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    MEM32(edi + 0x1C) = edx;
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_00095F18; /* ja: above (unsigned >) */

loc_00095F10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4293F8)); /* movss */

loc_00095F18: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    MEMF(edi + 0x1C) = xmm0.f[0]; /* movss */
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095F3F; /* je: equal / zero */

loc_00095F27: ;
    PUSH32(esp, esi);

loc_00095F28: ;
    esi = MEM32(ebx + 8);
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095F37; /* jne: not equal / not zero */

loc_00095F32: ;
    PUSH32(esp, 0x00095F37u); RECOMP_ABI_CALL(0x00095FD0u, sub_00095FD0); /* call 0x00095FD0 */

loc_00095F37: ;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095F28; /* jne: not equal / not zero */

loc_00095F3E: ;
    POP32(esp, esi);

loc_00095F3F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00095F46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095F40u); } /* indirect call */
    }

loc_00095F46: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00095F60
 * Original: 0x00095F60 - 0x00095FC1 (97 bytes, 33 insns)
 * Folder: base (between: 0x000958C0 and 0x00096130)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095F60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x2C;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00095F88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095F82u); } /* indirect call */
    }

loc_00095F88: ;
    MEM32(esp + 0x14) = 0;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00095F9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095F97u); } /* indirect call */
    }

loc_00095F9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095FA7; /* je: equal / zero */

loc_00095F9E: ;
    esi = MEM32(esi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095FA7; /* je: equal / zero */

loc_00095FA5: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00095FA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095FA5u); } /* indirect call */
    }

loc_00095FA7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00095FAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095FA8u); } /* indirect call */
    }

loc_00095FAE: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00095F77
 * Original: 0x00095F77 - 0x00095FC1 (74 bytes, 26 insns)
 * Folder: base (between: 0x000958C0 and 0x00096130)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095F77(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095F77: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x2C;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00095F88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095F82u); } /* indirect call */
    }

loc_00095F88: ;
    MEM32(esp + 0x14) = 0;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00095F9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095F97u); } /* indirect call */
    }

loc_00095F9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095FA7; /* je: equal / zero */

loc_00095F9E: ;
    esi = MEM32(esi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095FA7; /* je: equal / zero */

loc_00095FA5: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00095FA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095FA5u); } /* indirect call */
    }

loc_00095FA7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00095FAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095FA8u); } /* indirect call */
    }

loc_00095FAE: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00095FD0
 * Original: 0x00095FD0 - 0x00096125 (341 bytes, 114 insns)
 * Folder: base (between: 0x000958C0 and 0x00096130)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095FD0: ;
    eax = MEM32(esi + 8);
    fp_push((double)SMEM32(esi + 8)); /* fild */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00095FE3; /* jge: greater or equal (signed >=) */

loc_00095FDD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_00095FE3: ;
    ecx = MEM32(esi + 4);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp); /* divss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00096121; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009600D: ;
    fp_push(MEMF(edi + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    PUSH32(esp, 0x0009601Cu); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_0009601C: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(edi + 0x18));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(edi + 0x18)); }
    PUSH32(esp, ebx);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 4) = ebx;
    if (CMP_A(_fa, _fb)) goto loc_00096040; /* ja: above (unsigned >) */

loc_00096034: ;
    MEM32(esp + 4) = 1;
    ebx = MEM32(esp + 4);

loc_00096040: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009605B; /* jbe: below or equal (unsigned <=) */

loc_00096046: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(edi + 0x20);
    edx = ecx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009605B; /* jbe: below or equal (unsigned <=) */

loc_00096053: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = eax;
    ebx = eax;

loc_0009605B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 8) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_00096120; /* jbe: below or equal (unsigned <=) */

loc_0009606B: ;
    PUSH32(esp, ebp);
    /* nop */

loc_00096070: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009611F; /* jae: above or equal (unsigned >=) */

loc_00096084: ;
    ecx = MEM32(edi + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 0x14) = ecx;
    eax = ecx;
    if ((_fas < 0)) goto loc_00096117; /* js: sign (negative) */

loc_00096094: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x96130);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000960ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000960A9u); } /* indirect call */
    }

loc_000960AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000960F5; /* je: equal / zero */

loc_000960B4: ;
    ebx = MEM32(esi + 0x2C);
    edx = MEM32(ebx + 4);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000960C6u); RECOMP_ABI_CALL(0x0003AC70u, sub_0003AC70); /* call 0x0003AC70 */

loc_000960C6: ;
    ecx = 1;
    edx = esi + 0x28;
    ebp = eax;
    PUSH32(esp, 0x000960D5u); RECOMP_ABI_CALL(0x000DB310u, sub_000DB310); /* call 0x000DB310 */

loc_000960D5: ;
    MEM32(ebx + 4) = ebp;
    eax = MEM32(ebp + 4);
    ebx = MEM32(esp + 8);
    MEM32(eax) = ebp;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esi + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(edi + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    goto loc_00096100;

loc_000960F5: ;
    eax = MEM32(edi + 0x14);
    edx = MEM32(edi + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x14) = eax;

loc_00096100: ;
    eax = MEM32(esp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00096070; /* jb: below (unsigned <) */

loc_00096111: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00096117: ;
    ecx = MEM32(edi + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x14) = ecx;

loc_0009611F: ;
    POP32(esp, ebp);

loc_00096120: ;
    POP32(esp, ebx);

loc_00096121: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00096130
 * Original: 0x00096130 - 0x00096151 (33 bytes, 13 insns)
 * Folder: base (match: xbox-demo 0x00276300, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096130: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x758634);
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 4);
    MEM32(eax) = esi;
    ecx = MEM32(ecx + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 4) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00096690
 * Original: 0x00096690 - 0x00096697 (7 bytes, 2 insns)
 * Folder: base (library: 0x00096570 and 0x00096730)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096690(void)
{

loc_00096690: ;
    MEM32(ecx) = 0x41FB38;
    esp += 4; return; /* ret */

}

/**
 * sub_000966A0
 * Original: 0x000966A0 - 0x000966A3 (3 bytes, 1 insns)
 * Folder: base (library: 0x00096570 and 0x00096730)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000966A0(void)
{

loc_000966A0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000966B0
 * Original: 0x000966B0 - 0x000966CF (31 bytes, 11 insns)
 * Folder: base (library: 0x00096570 and 0x00096730)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000966B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000966B0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41FB38;
    if (TEST_Z(_fa, _fb)) goto loc_000966C9; /* je: equal / zero */

loc_000966C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000966C6u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_000966C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000966C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000966D0
 * Original: 0x000966D0 - 0x000966EF (31 bytes, 11 insns)
 * Folder: base (library: 0x00096570 and 0x00096730)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000966D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000966D0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41FB5C;
    if (TEST_Z(_fa, _fb)) goto loc_000966E9; /* je: equal / zero */

loc_000966E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000966E6u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_000966E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000966E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000966F0
 * Original: 0x000966F0 - 0x000966F7 (7 bytes, 2 insns)
 * Folder: base (library: 0x00096570 and 0x00096730)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000966F0(void)
{

loc_000966F0: ;
    MEM32(ecx) = 0x41FB5C;
    esp += 4; return; /* ret */

}

/**
 * sub_00096700
 * Original: 0x00096700 - 0x00096720 (32 bytes, 12 insns)
 * Folder: base (library: 0x00096570 and 0x00096730)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096700: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi;
    PUSH32(esp, 0x0009670Au); RECOMP_ABI_CALL(0x00096720u, sub_00096720); /* call 0x00096720 */

loc_0009670A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009671A; /* je: equal / zero */

loc_00096711: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00096717u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_00096717: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009671A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00096720
 * Original: 0x00096720 - 0x00096727 (7 bytes, 2 insns)
 * Folder: base (library: 0x00096570 and 0x00096730)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096720(void)
{

loc_00096720: ;
    MEM32(eax) = 0x41FB38;
    esp += 4; return; /* ret */

}

/**
 * sub_00096730
 * Original: 0x00096730 - 0x000967A1 (113 bytes, 34 insns)
 * Folder: base (match: xbox-demo 0x002765C0, library)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096730: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368553);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    MEM32(esi) = 0x41FB48;
    MEM32(esp + 0x10) = 1;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096781; /* je: equal / zero */

loc_00096760: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096781; /* je: equal / zero */

loc_00096767: ;
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096781; /* je: equal / zero */

loc_0009676E: ;
    edi = MEM32(esi + 0xC);
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0009677Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096777u); } /* indirect call */
    }

loc_0009677A: ;
    MEM32(esi + 8) = 0;

loc_00096781: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x18) = 0x41FB38;
    MEM32(esi) = 0x41FB5C;
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000967A6
 * Original: 0x000967A6 - 0x000967B0 (10 bytes, 10 insns)
 * Folder: base (between: 0x00096730 and 0x000967D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000967A6(void)
{

loc_000967A6: ;
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

}

/**
 * sub_000967B0
 * Original: 0x000967B0 - 0x000967CF (31 bytes, 12 insns)
 * Folder: base (between: 0x00096730 and 0x000967D0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000967B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000967B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000967B9u); RECOMP_ABI_CALL(0x00096730u, sub_00096730); /* call 0x00096730 */

loc_000967B9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000967C9; /* je: equal / zero */

loc_000967C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000967C6u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_000967C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000967C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000967D0
 * Original: 0x000967D0 - 0x0009688D (189 bytes, 42 insns)
 * Folder: base (match: xbox-demo 0x00276660, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000967D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000967D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x46B1A8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000967E3; /* jne: not equal / not zero */

loc_000967DC: ;
    PUSH32(esp, 0x000967E1u); RECOMP_ABI_CALL(0x00096160u, sub_00096160); /* call 0x00096160 */

loc_000967E1: ;
    edi = eax;

loc_000967E3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x000967EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000967E4u); } /* indirect call */
    }

loc_000967EA: ;
    SET_LO8(ecx, MEM8(0x76B9DC));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009685F; /* jne: not equal / not zero */

loc_000967F9: ;
    edx = MEM32(0x76B9DC);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x369BB0);
    MEM32(0x76B9DC) = edx;
    MEM32(0x76B5B8) = 0x46B1B0;
    MEM32(0x76B5C0) = 0x76B5D4;
    MEM32(0x76B5C4) = 0;
    MEM32(0x76B5D0) = 0;
    MEM32(0x76B5BC) = 0x41FB48;
    MEM32(0x76B5D4) = 0x41FB4C;
    MEM8(0x76B5D8) = LO8(eax);
    MEM32(0x46B1B0) = 0x76B5BC;
    PUSH32(esp, 0x0009685Cu); RECOMP_ABI_CALL(0x003472BDu, sub_003472BD); /* call 0x003472BD */

loc_0009685C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009685F: ;
    eax = MEM32(0x46B1B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009687B; /* jne: not equal / not zero */

loc_00096868: ;
    SET_LO8(eax, MEM8(0x758648));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009687B; /* je: equal / zero */

loc_00096871: ;
    ecx = 0x10;
    PUSH32(esp, 0x0009687Bu); RECOMP_ABI_CALL(0x00098D40u, sub_00098D40); /* call 0x00098D40 */

loc_0009687B: ;
    esi = MEM32(0x46B1B0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00096888u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096882u); } /* indirect call */
    }

loc_00096888: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00096890
 * Original: 0x00096890 - 0x000968AE (30 bytes, 9 insns)
 * Folder: base (between: 0x000967D0 and 0x00096930)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096890: ;
    edx = MEM32(esp + 0xC);
    eax = ecx + 8;
    MEM32(edx) = eax;
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x407) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x407;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000968B0
 * Original: 0x000968B0 - 0x000968C4 (20 bytes, 7 insns)
 * Folder: base (between: 0x000967D0 and 0x00096930)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000968B0(void)
{

loc_000968B0: ;
    eax = MEM32(ecx);
    edx = ecx + 0x407;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000968C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000968BEu); } /* indirect call */
    }

loc_000968C1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000968D0
 * Original: 0x000968D0 - 0x000968EA (26 bytes, 8 insns)
 * Folder: base (between: 0x000967D0 and 0x00096930)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000968D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000968D0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM8(eax) = 0;
    PUSH32(esp, 0x000968E0u); RECOMP_ABI_CALL(0x00351663u, sub_00351663); /* call 0x00351663 */

loc_000968E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000968E7u); RECOMP_ABI_CALL(0x003373CCu, sub_003373CC); /* call 0x003373CC */

loc_000968E7: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000968F0
 * Original: 0x000968F0 - 0x0009692C (60 bytes, 22 insns)
 * Folder: base (between: 0x000967D0 and 0x00096930)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000968F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000968F0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x46B1A8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00096905; /* jne: not equal / not zero */

loc_000968FE: ;
    PUSH32(esp, 0x00096903u); RECOMP_ABI_CALL(0x00096160u, sub_00096160); /* call 0x00096160 */

loc_00096903: ;
    esi = eax;

loc_00096905: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x0009690Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096906u); } /* indirect call */
    }

loc_0009690C: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096919; /* je: equal / zero */

loc_00096913: ;
    MEM32(eax) = 0;

loc_00096919: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00096920u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009691Au); } /* indirect call */
    }

loc_00096920: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00096929u); RECOMP_ABI_CALL(0x00096730u, sub_00096730); /* call 0x00096730 */

loc_00096929: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00096930
 * Original: 0x00096930 - 0x000969ED (189 bytes, 49 insns)
 * Folder: base (match: xbox-demo 0x002767C0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096930: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368536);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x46B1A8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00096959; /* jne: not equal / not zero */

loc_00096952: ;
    PUSH32(esp, 0x00096957u); RECOMP_ABI_CALL(0x00096160u, sub_00096160); /* call 0x00096160 */

loc_00096957: ;
    esi = eax;

loc_00096959: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = esi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00096964u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009695Eu); } /* indirect call */
    }

loc_00096964: ;
    MEM32(esp + 0x14) = 0;
    SET_LO8(ecx, MEM8(0x76B42C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000969B1; /* jne: not equal / not zero */

loc_0009697B: ;
    MEM32(0x76B42C) = MEM32(0x76B42C) | eax;
    _fa = (uint32_t)(MEM32(0x76B42C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x7685FC);
    MEM32(0x7685F8) = 0x46B1B4;
    PUSH32(esp, 0x00096999u); RECOMP_ABI_CALL(0x000969F0u, sub_000969F0); /* call 0x000969F0 */

loc_00096999: ;
    eax = MEM32(0x7685F8);
    PUSH32(esp, 0x369BC0);
    MEM32(eax) = 0x7685FC;
    PUSH32(esp, 0x000969AEu); RECOMP_ABI_CALL(0x003472BDu, sub_003472BD); /* call 0x003472BD */

loc_000969AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000969B1: ;
    eax = MEM32(0x46B1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000969CD; /* jne: not equal / not zero */

loc_000969BA: ;
    SET_LO8(eax, MEM8(0x758648));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000969CD; /* je: equal / zero */

loc_000969C3: ;
    ecx = 0x10;
    PUSH32(esp, 0x000969CDu); RECOMP_ABI_CALL(0x00098D40u, sub_00098D40); /* call 0x00098D40 */

loc_000969CD: ;
    edi = MEM32(0x46B1B4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x000969DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000969D4u); } /* indirect call */
    }

loc_000969DA: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000969F0
 * Original: 0x000969F0 - 0x00096A94 (164 bytes, 44 insns)
 * Folder: base (match: xbox-demo 0x00276880, library)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000969F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000969F0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x36845D);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    eax = esi + 0x2E04;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esi + 0x2E00) = ebx;
    { uint32_t _icall_target = MEM32(0x418154); PUSH32(esp, 0x00096A21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096A1Bu); } /* indirect call */
    }

loc_00096A21: ;
    MEM8(esi + 0x2E20) = LO8(ebx);
    MEM32(esi + 0x2E28) = 1;
    MEM8(esi + 0x2E2C) = LO8(ebx);
    MEM32(esi + 0x2E24) = 0x41FB60;
    MEM32(esp + 0x14) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi) = LO8(ebx);
    ecx = 0x980;
    edi = esi + 0x800;
    PUSH32(esp, 0x41FBC4);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi;
    PUSH32(esp, 0x00096A64u); RECOMP_ABI_CALL(0x000956D0u, sub_000956D0); /* call 0x000956D0 */

loc_00096A64: ;
    PUSH32(esp, 0x41FBBC);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0x00096A71u); RECOMP_ABI_CALL(0x000956D0u, sub_000956D0); /* call 0x000956D0 */

loc_00096A71: ;
    PUSH32(esp, 0x41FBB4);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0x00096A7Eu); RECOMP_ABI_CALL(0x000956D0u, sub_000956D0); /* call 0x000956D0 */

loc_00096A7E: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
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
 * sub_00096A6A
 * Original: 0x00096A6A - 0x00096A94 (42 bytes, 14 insns)
 * Folder: base (between: 0x000969F0 and 0x00096AA0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096A6A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096A6A: ;
    eax = esi;
    PUSH32(esp, 0x00096A71u); RECOMP_ABI_CALL(0x000956D0u, sub_000956D0); /* call 0x000956D0 */

loc_00096A71: ;
    PUSH32(esp, 0x41FBB4);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0x00096A7Eu); RECOMP_ABI_CALL(0x000956D0u, sub_000956D0); /* call 0x000956D0 */

loc_00096A7E: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
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
 * sub_00096AA0
 * Original: 0x00096AA0 - 0x00096B3A (154 bytes, 51 insns)
 * Folder: base (match: xbox-demo 0x00276930, library)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096AA0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x36845D);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 0;
    eax = MEM32(ebx + 0x2E00);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00096AFF; /* jbe: below or equal (unsigned <=) */

loc_00096AD0: ;
    edi = ebx + 0x80C;

loc_00096AD6: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096AEE; /* je: equal / zero */

loc_00096ADC: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00096AEE; /* jne: not equal / not zero */

loc_00096AE1: ;
    SET_LO8(eax, MEM8(ecx + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096AEE; /* je: equal / zero */

loc_00096AE8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00096AEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096AECu); } /* indirect call */
    }

loc_00096AEE: ;
    eax = MEM32(ebx + 0x2E00);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x98;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00096AD6; /* jb: below (unsigned <) */

loc_00096AFF: ;
    eax = MEM32(ebx + 0x2E28);
    esi = ebx + 0x2E24;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    if ((_fa != 0)) goto loc_00096B20; /* jne: not equal / not zero */

loc_00096B11: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096B20; /* je: equal / zero */

loc_00096B18: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00096B20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096B1Eu); } /* indirect call */
    }

loc_00096B20: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(esi) = 0x41FB68;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00096B40
 * Original: 0x00096B40 - 0x00096B77 (55 bytes, 20 insns)
 * Folder: base (match: xbox-demo 0x002769D0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096B40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096B71; /* je: equal / zero */

loc_00096B48: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x800);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00096B59u); RECOMP_ABI_CALL(0x0034819Du, sub_0034819D); /* call 0x0034819D */

loc_00096B59: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00096B67; /* jl: less (signed <) */

loc_00096B60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x800 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096B74; /* jne: not equal / not zero */

loc_00096B67: ;
    MEM8(esi + 0x7FF) = 0;
    eax = esi;
    esp += 4; return; /* ret */

loc_00096B71: ;
    MEM8(esi) = 0;

loc_00096B74: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00096B80
 * Original: 0x00096B80 - 0x00096E13 (659 bytes, 193 insns)
 * Folder: base (match: xbox-demo 0x00276B60, library)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00096B80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368486);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x82C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x82C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = edi + 0x2E04;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    esi = ecx;
    MEM32(esp + 0x10) = ebp;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00096BB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096BAAu); } /* indirect call */
    }

loc_00096BB0: ;
    eax = edi + 0x2E20;
    MEM32(esp + 0x83C) = 0;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096BD6; /* je: equal / zero */

loc_00096BC6: ;
    /* int3: debug-trap slide byte, stepped over */
    ecx = 0x4000010D;
    PUSH32(esp, 0x00096BD1u); RECOMP_ABI_CALL(0x00098D40u, sub_00098D40); /* call 0x00098D40 */

loc_00096BD1: ;
    goto loc_00096DEF;

loc_00096BD6: ;
    MEM32(esp + 8) = eax;
    MEM8(eax) = 1;
    MEM8(esp + 0x83C) = 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x2E00)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x2E00) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00096BF2; /* jb: below (unsigned <) */

loc_00096BED: ;
    esi = 1;

loc_00096BF2: ;
    SET_LO8(eax, MEM8(0x758648));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096C12; /* je: equal / zero */

loc_00096BFB: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x98);
    ecx = MEM32(eax + edi + 0x80C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096DDE; /* je: equal / zero */

loc_00096C12: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = 0x41F4A8;
    eax = 0x800;
    edx = 0x7FF;
    if (CMP_NE(_fa, _fb)) ecx = ebx; /* cmovne */
    PUSH32(esp, 0x00096C30u); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_00096C30: ;
    SET_LO8(ecx, MEM8(esp + 0x38));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x34;
    if (CMP_EQ(_fa, _fb)) goto loc_00096C48; /* je: equal / zero */

loc_00096C3F: ;
    /* nop */

loc_00096C40: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096C40; /* jne: not equal / not zero */

loc_00096C48: ;
    ecx = esp + 0x34;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    edx = esp + ecx + 0x34;
    eax = 0x800;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    edx = 0x7FF;
    ecx = 0x41FBA4;
    PUSH32(esp, 0x00096C6Bu); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_00096C6B: ;
    SET_LO8(ecx, MEM8(esp + 0x38));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x34;
    if (CMP_EQ(_fa, _fb)) goto loc_00096C88; /* je: equal / zero */

loc_00096C7A: ;
    /* nop */

loc_00096C80: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096C80; /* jne: not equal / not zero */

loc_00096C88: ;
    ecx = esp + 0x34;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    edx = esp + ecx + 0x34;
    eax = 0x800;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x848);
    PUSH32(esp, edx);
    edx = 0x7FF;
    PUSH32(esp, 0x00096CADu); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_00096CAD: ;
    SET_LO8(ecx, MEM8(esp + 0x38));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x34;
    if (CMP_EQ(_fa, _fb)) goto loc_00096CC8; /* je: equal / zero */

loc_00096CBC: ;
    /* nop */

loc_00096CC0: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096CC0; /* jne: not equal / not zero */

loc_00096CC8: ;
    ecx = esp + 0x34;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    edx = esp + ecx + 0x34;
    eax = 0x800;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    edx = 0x7FF;
    ecx = 0x41FB98;
    PUSH32(esp, 0x00096CEBu); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_00096CEB: ;
    SET_LO8(eax, MEM8(0x758649));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x41FB74;
    if (CMP_NE(_fa, _fb)) goto loc_00096D01; /* jne: not equal / not zero */

loc_00096CFC: ;
    eax = 0x41FB70;

loc_00096D01: ;
    ecx = MEM32(esp + 0x84C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, 0x21);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00096D16u); RECOMP_ABI_CALL(0x00347B74u, sub_00347B74); /* call 0x00347B74 */

loc_00096D16: ;
    SET_LO8(ecx, MEM8(esp + 0x44));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x34;
    if (CMP_EQ(_fa, _fb)) goto loc_00096D2D; /* je: equal / zero */

loc_00096D25: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096D25; /* jne: not equal / not zero */

loc_00096D2D: ;
    ecx = esp + 0x34;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    edx = esp + ecx + 0x34;
    eax = 0x800;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    edx = 0x7FF;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00096D4Fu); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_00096D4F: ;
    SET_LO8(ecx, MEM8(esp + 0x38));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp + 0x34;
    if (CMP_EQ(_fa, _fb)) goto loc_00096D68; /* je: equal / zero */

loc_00096D5E: ;
    edi = edi;

loc_00096D60: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096D60; /* jne: not equal / not zero */

loc_00096D68: ;
    ecx = esp + 0x34;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    edx = esp + ecx + 0x34;
    eax = 0x800;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    edx = 0x7FF;
    ecx = 0x41FB7C;
    PUSH32(esp, 0x00096D8Bu); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_00096D8B: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x98);
    ecx = MEM32(esi + edi + 0x80C);
    eax = esi + edi + 0x80C;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096DB4; /* je: equal / zero */

loc_00096DA6: ;
    eax = ecx;
    edx = MEM32(eax);
    ecx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00096DB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096DB1u); } /* indirect call */
    }

loc_00096DB4: ;
    SET_LO8(eax, MEM8(0x758648));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096DDE; /* jne: not equal / not zero */

loc_00096DBD: ;
    edx = MEM32(esp + 0x844);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096DDE; /* jne: not equal / not zero */

loc_00096DC9: ;
    eax = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM8(eax) = 0;
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00096DD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096DD1u); } /* indirect call */
    }

loc_00096DD7: ;
    eax = 8;
    goto loc_00096DFA;

loc_00096DDE: ;
    ecx = 0x4000010D;
    PUSH32(esp, 0x00096DE8u); RECOMP_ABI_CALL(0x00098D40u, sub_00098D40); /* call 0x00098D40 */

loc_00096DE8: ;
    ecx = MEM32(esp + 8);
    MEM8(ecx) = 0;

loc_00096DEF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    esi = eax;
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00096DF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096DF2u); } /* indirect call */
    }

loc_00096DF8: ;
    eax = esi;

loc_00096DFA: ;
    ecx = MEM32(esp + 0x834);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x838) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x838;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00096DA8
 * Original: 0x00096DA8 - 0x00096E13 (107 bytes, 31 insns)
 * Folder: base (between: 0x00096B80 and 0x00096EB0)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096DA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00096DA8: ;
    edx = MEM32(eax);
    ecx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00096DB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096DB1u); } /* indirect call */
    }

loc_00096DB4: ;
    SET_LO8(eax, MEM8(0x758648));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096DDE; /* jne: not equal / not zero */

loc_00096DBD: ;
    edx = MEM32(esp + 0x844);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096DDE; /* jne: not equal / not zero */

loc_00096DC9: ;
    eax = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM8(eax) = 0;
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00096DD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096DD1u); } /* indirect call */
    }

loc_00096DD7: ;
    eax = 8;
    goto loc_00096DFA;

loc_00096DDE: ;
    ecx = 0x4000010D;
    PUSH32(esp, 0x00096DE8u); RECOMP_ABI_CALL(0x00098D40u, sub_00098D40); /* call 0x00098D40 */

loc_00096DE8: ;
    ecx = MEM32(esp + 8);
    MEM8(ecx) = 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    esi = eax;
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00096DF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096DF2u); } /* indirect call */
    }

loc_00096DF8: ;
    eax = esi;

loc_00096DFA: ;
    ecx = MEM32(esp + 0x834);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x838) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x838;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00096E20
 * Original: 0x00096E20 - 0x00096E5C (60 bytes, 22 insns)
 * Folder: base (between: 0x00096B80 and 0x00096EB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096E20: ;
    PUSH32(esp, esi);
    esi = MEM32(0x46B1A8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00096E35; /* jne: not equal / not zero */

loc_00096E2E: ;
    PUSH32(esp, 0x00096E33u); RECOMP_ABI_CALL(0x00096160u, sub_00096160); /* call 0x00096160 */

loc_00096E33: ;
    esi = eax;

loc_00096E35: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00096E3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096E36u); } /* indirect call */
    }

loc_00096E3C: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096E49; /* je: equal / zero */

loc_00096E43: ;
    MEM32(eax) = 0;

loc_00096E49: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00096E50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096E4Au); } /* indirect call */
    }

loc_00096E50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00096E59u); RECOMP_ABI_CALL(0x00096AA0u, sub_00096AA0); /* call 0x00096AA0 */

loc_00096E59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00096E60
 * Original: 0x00096E60 - 0x00096E66 (6 bytes, 3 insns)
 * Folder: base (between: 0x00096B80 and 0x00096EB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096E60(void)
{

loc_00096E60: ;
    ecx = MEM32(eax);
    MEM8(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00096E70
 * Original: 0x00096E70 - 0x00096E77 (7 bytes, 2 insns)
 * Folder: base (between: 0x00096B80 and 0x00096EB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096E70(void)
{

loc_00096E70: ;
    MEM32(eax) = 0x41FB68;
    esp += 4; return; /* ret */

}

/**
 * sub_00096E80
 * Original: 0x00096E80 - 0x00096EAC (44 bytes, 16 insns)
 * Folder: base (between: 0x00096B80 and 0x00096EB0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096E80: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41FB68;
    if (TEST_Z(_fa, _fb)) goto loc_00096EA6; /* je: equal / zero */

loc_00096E90: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096E9E; /* jne: not equal / not zero */

loc_00096E99: ;
    PUSH32(esp, 0x00096E9Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00096E9E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00096EA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096EA3u); } /* indirect call */
    }

loc_00096EA6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00096EB0
 * Original: 0x00096EB0 - 0x00096EDD (45 bytes, 17 insns)
 * Folder: base (match: xbox-demo 0x00276EB0, library)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096EB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi;
    PUSH32(esp, 0x00096EBAu); RECOMP_ABI_CALL(0x00096E70u, sub_00096E70); /* call 0x00096E70 */

loc_00096EBA: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00096ED7; /* je: equal / zero */

loc_00096EC1: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096ECF; /* jne: not equal / not zero */

loc_00096ECA: ;
    PUSH32(esp, 0x00096ECFu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00096ECF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00096ED7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096ED4u); } /* indirect call */
    }

loc_00096ED7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00096EE0
 * Original: 0x00096EE0 - 0x00096F15 (53 bytes, 23 insns)
 * Folder: base (between: 0x00096EB0 and 0x00097660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096EE0: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xC);
    PUSH32(esp, edi);
    ecx = eax;
    edi = edx;
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
    edi = MEM32(ebx + 0x14);
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x14) = edi;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00096F0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096F08u); } /* indirect call */
    }

loc_00096F0B: ;
    POP32(esp, edi);
    MEM32(ebx + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00096F20
 * Original: 0x00096F20 - 0x00096F75 (85 bytes, 36 insns)
 * Folder: base (between: 0x00096EB0 and 0x00097660)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096F20: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 8;
    if (CMP_NE(_fa, _fb)) goto loc_00096F40; /* jne: not equal / not zero */

loc_00096F2B: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    edx = esi + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00096F40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096F3Du); } /* indirect call */
    }

loc_00096F40: ;
    eax = MEM32(esi + 0xC);
    SET_LO8(ecx, MEM8(eax));
    edx = MEM32(esp + 8);
    MEM8(edx) = LO8(ecx);
    eax = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00096F71; /* jne: not equal / not zero */

loc_00096F60: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00096F6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096F68u); } /* indirect call */
    }

loc_00096F6B: ;
    MEM32(edi) = 0;

loc_00096F71: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00096F80
 * Original: 0x00096F80 - 0x00097087 (263 bytes, 106 insns)
 * Folder: base (between: 0x00096EB0 and 0x00097660)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00096F80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(ebx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    eax = ebx + 8;
    if (CMP_NE(_fa, _fb)) goto loc_00096FAA; /* jne: not equal / not zero */

loc_00096F95: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx);
    esi = ebx + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ebx + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00096FAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096FA7u); } /* indirect call */
    }

loc_00096FAA: ;
    esi = MEM32(ebx + 0xC);
    ebp = MEM32(ebx + 0x10);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(ebx + 0x14);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_00097055; /* ja: above (unsigned >) */

loc_00096FC5: ;
    if (CMP_NE(_fa, _fb)) goto loc_00096FE1; /* jne: not equal / not zero */

loc_00096FC7: ;
    edx = edi;
    PUSH32(esp, 0x00096FCEu); RECOMP_ABI_CALL(0x00096EE0u, sub_00096EE0); /* call 0x00096EE0 */

loc_00096FCE: ;
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00096FE1: ;
    MEM32(esp + 0x10) = edi;

loc_00096FE5: ;
    edi = MEM32(esp + 0x10);
    ecx = ebp;
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
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(ebx + 4);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x14) = eax;
    eax = MEM32(ebx + 8);
    edx = MEM32(ecx);
    esi = ebx + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00097010u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009700Du); } /* indirect call */
    }

loc_00097010: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx + 0x10;
    PUSH32(esp, edi);
    ebp = ebx + 0xC;
    PUSH32(esp, ebp);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(ebx + 4);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebx + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esi) = 0;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009703Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009703Cu); } /* indirect call */
    }

loc_0009703F: ;
    esi = MEM32(ebp);
    ebp = MEM32(edi);
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00096FE5; /* jb: below (unsigned <) */

loc_0009704E: ;
    esi = MEM32(ebx + 0xC);
    edi = MEM32(esp + 0x10);

loc_00097055: ;
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
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ebx + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ebx + 0xC) = ecx;
    ecx = MEM32(esp + 0xC);
    eax = edx;
    POP32(esp, ebp);
    MEM32(ebx + 0x14) = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097090
 * Original: 0x00097090 - 0x0009712C (156 bytes, 73 insns)
 * Folder: base (between: 0x00096EB0 and 0x00097660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097090: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ebx = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000970B4; /* jne: not equal / not zero */

loc_0009709F: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000970B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000970B1u); } /* indirect call */
    }

loc_000970B4: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000970EA; /* jbe: below or equal (unsigned <=) */

loc_000970C5: ;
    SET_LO8(eax, MEM8(eax));
    MEM8(ebx) = LO8(eax);
    edi = MEM32(esi + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = edi;
    eax = edi;
    SET_LO8(ecx, MEM8(eax));
    MEM8(ebx + 1) = LO8(ecx);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000970EA: ;
    if (CMP_NE(_fa, _fb)) goto loc_00097122; /* jne: not equal / not zero */

loc_000970EC: ;
    SET_LO8(eax, MEM8(eax));
    MEM8(ebx) = LO8(eax);
    ecx = MEM32(esi + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = ecx;
    eax = ecx;
    SET_LO8(ecx, MEM8(eax));
    MEM8(ebx + 1) = LO8(ecx);
    eax = MEM32(esi + 0xC);
    ebx = MEM32(esi + 0x14);
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = ebx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00097118u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097115u); } /* indirect call */
    }

loc_00097118: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00097122: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00097128u); RECOMP_ABI_CALL(0x00097280u, sub_00097280); /* call 0x00097280 */

loc_00097128: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00097130
 * Original: 0x00097130 - 0x00097200 (208 bytes, 95 insns)
 * Folder: base (between: 0x00096EB0 and 0x00097660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097130: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebx = esi + 8;
    edi = eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097154; /* jne: not equal / not zero */

loc_0009713F: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00097154u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097151u); } /* indirect call */
    }

loc_00097154: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000971A4; /* jbe: below or equal (unsigned <=) */

loc_00097165: ;
    SET_LO8(eax, MEM8(eax));
    MEM8(edi) = LO8(eax);
    ecx = MEM32(esi + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = ecx;
    eax = ecx;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edi + 1) = LO8(ecx);
    eax = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    SET_LO8(eax, MEM8(eax));
    MEM8(edi + 2) = LO8(eax);
    ebx = MEM32(esi + 0xC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = ebx;
    eax = ebx;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edi + 3) = LO8(ecx);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000971A4: ;
    if (CMP_NE(_fa, _fb)) goto loc_000971F6; /* jne: not equal / not zero */

loc_000971A6: ;
    SET_LO8(eax, MEM8(eax));
    MEM8(edi) = LO8(eax);
    ecx = MEM32(esi + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = ecx;
    eax = ecx;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edi + 1) = LO8(ecx);
    eax = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    SET_LO8(eax, MEM8(eax));
    MEM8(edi + 2) = LO8(eax);
    ecx = MEM32(esi + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = ecx;
    eax = ecx;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edi + 3) = LO8(ecx);
    eax = MEM32(esi + 0xC);
    edi = MEM32(esi + 0x14);
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = edi;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000971ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000971E9u); } /* indirect call */
    }

loc_000971EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000971F6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000971FCu); RECOMP_ABI_CALL(0x00097300u, sub_00097300); /* call 0x00097300 */

loc_000971FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00097200
 * Original: 0x00097200 - 0x00097278 (120 bytes, 55 insns)
 * Folder: base (between: 0x00096EB0 and 0x00097660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ebx = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097224; /* jne: not equal / not zero */

loc_0009720F: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00097224u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097221u); } /* indirect call */
    }

loc_00097224: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00097245; /* jbe: below or equal (unsigned <=) */

loc_0009722F: ;
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0x00097238u); RECOMP_ABI_CALL(0x00097380u, sub_00097380); /* call 0x00097380 */

loc_00097238: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00097245: ;
    if (CMP_NE(_fa, _fb)) goto loc_0009726E; /* jne: not equal / not zero */

loc_00097247: ;
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0x00097250u); RECOMP_ABI_CALL(0x00097380u, sub_00097380); /* call 0x00097380 */

loc_00097250: ;
    ebx = MEM32(esi + 0x14);
    ecx = MEM32(esi + 4);
    edx = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = ebx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00097264u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097261u); } /* indirect call */
    }

loc_00097264: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0009726E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00097274u); RECOMP_ABI_CALL(0x000973F0u, sub_000973F0); /* call 0x000973F0 */

loc_00097274: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00097280
 * Original: 0x00097280 - 0x000972F1 (113 bytes, 48 insns)
 * Folder: base (between: 0x00096EB0 and 0x00097660)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097280: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0;
    edi = esi + 0xC;
    ebp = esi + 0x10;
    ebx = esi + 8;

loc_00097295: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000972A9; /* jne: not equal / not zero */

loc_0009729A: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000972A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000972A6u); } /* indirect call */
    }

loc_000972A9: ;
    eax = MEM32(edi);
    SET_LO8(ecx, MEM8(eax));
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0xC);
    MEM8(eax + edx) = LO8(ecx);
    eax = MEM32(edi);
    edx = MEM32(esi + 0x14);
    ecx = MEM32(ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edi) = eax;
    MEM32(esi + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000972DC; /* jne: not equal / not zero */

loc_000972CB: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ebx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000972D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000972D3u); } /* indirect call */
    }

loc_000972D6: ;
    MEM32(ebx) = 0;

loc_000972DC: ;
    eax = MEM32(esp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00097295; /* jb: below (unsigned <) */

loc_000972EA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097300
 * Original: 0x00097300 - 0x00097371 (113 bytes, 48 insns)
 * Folder: base (between: 0x00096EB0 and 0x00097660)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097300: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0;
    edi = esi + 0xC;
    ebp = esi + 0x10;
    ebx = esi + 8;

loc_00097315: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097329; /* jne: not equal / not zero */

loc_0009731A: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00097329u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097326u); } /* indirect call */
    }

loc_00097329: ;
    eax = MEM32(edi);
    SET_LO8(ecx, MEM8(eax));
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0xC);
    MEM8(eax + edx) = LO8(ecx);
    eax = MEM32(edi);
    edx = MEM32(esi + 0x14);
    ecx = MEM32(ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edi) = eax;
    MEM32(esi + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0009735C; /* jne: not equal / not zero */

loc_0009734B: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ebx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00097356u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097353u); } /* indirect call */
    }

loc_00097356: ;
    MEM32(ebx) = 0;

loc_0009735C: ;
    eax = MEM32(esp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00097315; /* jb: below (unsigned <) */

loc_0009736A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097380
 * Original: 0x00097380 - 0x000973E9 (105 bytes, 46 insns)
 * Folder: base (between: 0x00096EB0 and 0x00097660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097380: ;
    edx = MEM32(eax + 0xC);
    SET_LO8(edx, MEM8(edx));
    MEM8(ecx) = LO8(edx);
    edx = MEM32(eax + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, esi);
    esi = edx;
    SET_LO8(edx, MEM8(esi));
    MEM8(ecx + 1) = LO8(edx);
    esi = MEM32(eax + 0xC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = esi;
    SET_LO8(edx, MEM8(esi));
    MEM8(ecx + 2) = LO8(edx);
    edx = MEM32(eax + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = edx;
    esi = edx;
    SET_LO8(edx, MEM8(esi));
    MEM8(ecx + 3) = LO8(edx);
    esi = MEM32(eax + 0xC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = esi;
    SET_LO8(edx, MEM8(esi));
    MEM8(ecx + 4) = LO8(edx);
    edx = MEM32(eax + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = edx;
    esi = edx;
    SET_LO8(edx, MEM8(esi));
    MEM8(ecx + 5) = LO8(edx);
    esi = MEM32(eax + 0xC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = esi;
    SET_LO8(edx, MEM8(esi));
    MEM8(ecx + 6) = LO8(edx);
    edx = MEM32(eax + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = edx;
    esi = edx;
    SET_LO8(edx, MEM8(esi));
    MEM8(ecx + 7) = LO8(edx);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000973F0
 * Original: 0x000973F0 - 0x00097461 (113 bytes, 48 insns)
 * Folder: base (between: 0x00096EB0 and 0x00097660)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000973F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000973F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0;
    edi = esi + 0xC;
    ebp = esi + 0x10;
    ebx = esi + 8;

loc_00097405: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097419; /* jne: not equal / not zero */

loc_0009740A: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00097419u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097416u); } /* indirect call */
    }

loc_00097419: ;
    eax = MEM32(edi);
    SET_LO8(ecx, MEM8(eax));
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0xC);
    MEM8(eax + edx) = LO8(ecx);
    eax = MEM32(edi);
    edx = MEM32(esi + 0x14);
    ecx = MEM32(ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edi) = eax;
    MEM32(esi + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0009744C; /* jne: not equal / not zero */

loc_0009743B: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ebx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00097446u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097443u); } /* indirect call */
    }

loc_00097446: ;
    MEM32(ebx) = 0;

loc_0009744C: ;
    eax = MEM32(esp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00097405; /* jb: below (unsigned <) */

loc_0009745A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097470
 * Original: 0x00097470 - 0x00097502 (146 bytes, 64 insns)
 * Folder: base (between: 0x00096EB0 and 0x00097660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097470: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0xC));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, ebp);
    MEM32(esp + 4) = edx;
    ebp = ecx;
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000974FB; /* je: equal / zero */

loc_0009748B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ebx = esi + 8;

loc_00097498: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000974AF; /* jne: not equal / not zero */

loc_0009749D: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    eax = esi + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000974AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000974ACu); } /* indirect call */
    }

loc_000974AF: ;
    ecx = MEM32(edi);
    SET_LO8(edx, MEM8(ecx));
    MEM8(ebp) = LO8(edx);
    eax = MEM32(edi);
    edx = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edi) = eax;
    MEM32(esi + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000974DA; /* jne: not equal / not zero */

loc_000974C9: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ebx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000974D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000974D1u); } /* indirect call */
    }

loc_000974D4: ;
    MEM32(ebx) = 0;

loc_000974DA: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00097498; /* jne: not equal / not zero */

loc_000974F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = ecx;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000974FB: ;
    eax = edx;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00097510
 * Original: 0x00097510 - 0x00097549 (57 bytes, 27 insns)
 * Folder: base (between: 0x00096EB0 and 0x00097660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097510: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097542; /* je: equal / zero */

loc_00097527: ;
    goto loc_00097530;

    /* nop */

loc_00097530: ;
    ecx = MEM32(esp + 0x18);
    eax = esi;
    PUSH32(esp, 0x0009753Bu); RECOMP_ABI_CALL(0x00097090u, sub_00097090); /* call 0x00097090 */

loc_0009753B: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097530; /* jne: not equal / not zero */

loc_00097542: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00097550
 * Original: 0x00097550 - 0x00097589 (57 bytes, 27 insns)
 * Folder: base (between: 0x00096EB0 and 0x00097660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097550: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097582; /* je: equal / zero */

loc_00097567: ;
    goto loc_00097570;

    /* nop */

loc_00097570: ;
    ecx = MEM32(esp + 0x18);
    eax = esi;
    PUSH32(esp, 0x0009757Bu); RECOMP_ABI_CALL(0x00097130u, sub_00097130); /* call 0x00097130 */

loc_0009757B: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097570; /* jne: not equal / not zero */

loc_00097582: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00097590
 * Original: 0x00097590 - 0x000975C9 (57 bytes, 27 insns)
 * Folder: base (between: 0x00096EB0 and 0x00097660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097590: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000975C2; /* je: equal / zero */

loc_000975A7: ;
    goto loc_000975B0;

    /* nop */

loc_000975B0: ;
    ecx = MEM32(esp + 0x18);
    eax = esi;
    PUSH32(esp, 0x000975BBu); RECOMP_ABI_CALL(0x00097200u, sub_00097200); /* call 0x00097200 */

loc_000975BB: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000975B0; /* jne: not equal / not zero */

loc_000975C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000975D0
 * Original: 0x000975D0 - 0x00097614 (68 bytes, 18 insns)
 * Folder: base (between: 0x00096EB0 and 0x00097660)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000975D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000975D0: ;
    MEM32(esi) = 0x41FA78;
    eax = MEM32(0x46B1B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000975E4; /* jne: not equal / not zero */

loc_000975DF: ;
    PUSH32(esp, 0x000975E4u); RECOMP_ABI_CALL(0x000967D0u, sub_000967D0); /* call 0x000967D0 */

loc_000975E4: ;
    _fa = (uint32_t)(MEM32(0x431074)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x431074), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097601; /* jne: not equal / not zero */

loc_000975ED: ;
    PUSH32(esp, 0x41FB0C);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000975F9u); RECOMP_ABI_CALL(0x00095500u, sub_00095500); /* call 0x00095500 */

loc_000975F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x431074) = eax;

loc_00097601: ;
    eax = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esi) = 0x41FBD0;
    { uint32_t _icall_target = MEM32(0x418154); PUSH32(esp, 0x00097611u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009760Bu); } /* indirect call */
    }

loc_00097611: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00097620
 * Original: 0x00097620 - 0x0009764B (43 bytes, 16 insns)
 * Folder: base (between: 0x00096EB0 and 0x00097660)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097620: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00097628u); RECOMP_ABI_CALL(0x00097650u, sub_00097650); /* call 0x00097650 */

loc_00097628: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00097645; /* je: equal / zero */

loc_0009762F: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009763D; /* jne: not equal / not zero */

loc_00097638: ;
    PUSH32(esp, 0x0009763Du); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0009763D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00097645u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097642u); } /* indirect call */
    }

loc_00097645: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097650
 * Original: 0x00097650 - 0x00097657 (7 bytes, 2 insns)
 * Folder: base (between: 0x00096EB0 and 0x00097660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097650(void)
{

loc_00097650: ;
    MEM32(ecx) = 0x41FA78;
    esp += 4; return; /* ret */

}

/**
 * sub_00097660
 * Original: 0x00097660 - 0x00097689 (41 bytes, 16 insns)
 * Folder: base (match: xbox-demo 0x00277050, library)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097660: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x0009766Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097666u); } /* indirect call */
    }

loc_0009766C: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00097676u); RECOMP_ABI_CALL(0x00348DEFu, sub_00348DEF); /* call 0x00348DEF */

loc_00097676: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    edi = eax;
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00097682u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009767Cu); } /* indirect call */
    }

loc_00097682: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097690
 * Original: 0x00097690 - 0x000976B9 (41 bytes, 16 insns)
 * Folder: base (match: xbox-demo 0x00277080, library)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097690: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x0009769Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097696u); } /* indirect call */
    }

loc_0009769C: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000976A6u); RECOMP_ABI_CALL(0x00348DEFu, sub_00348DEF); /* call 0x00348DEF */

loc_000976A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    edi = eax;
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x000976B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000976ACu); } /* indirect call */
    }

loc_000976B2: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000976C0
 * Original: 0x000976C0 - 0x000976E3 (35 bytes, 12 insns)
 * Folder: base (match: xbox-demo 0x002770B0, library)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000976C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000976C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x000976CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000976C5u); } /* indirect call */
    }

loc_000976CB: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000976D5u); RECOMP_ABI_CALL(0x00348E01u, sub_00348E01); /* call 0x00348E01 */

loc_000976D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x000976DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000976D9u); } /* indirect call */
    }

loc_000976DF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000976F0
 * Original: 0x000976F0 - 0x00097746 (86 bytes, 27 insns)
 * Folder: base (library: 0x000976C0 and 0x00097840)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000976F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000976F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00097718u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097712u); } /* indirect call */
    }

loc_00097718: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = 0;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0009772Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097729u); } /* indirect call */
    }

loc_0009772C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00097733u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009772Du); } /* indirect call */
    }

loc_00097733: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00097750
 * Original: 0x00097750 - 0x0009777E (46 bytes, 18 insns)
 * Folder: base (library: 0x000976C0 and 0x00097840)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097750: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x0009775Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097756u); } /* indirect call */
    }

loc_0009775C: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009776Bu); RECOMP_ABI_CALL(0x00348E59u, sub_00348E59); /* call 0x00348E59 */

loc_0009776B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    edi = eax;
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00097777u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097771u); } /* indirect call */
    }

loc_00097777: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00097780
 * Original: 0x00097780 - 0x000977AE (46 bytes, 18 insns)
 * Folder: base (library: 0x000976C0 and 0x00097840)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097780: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x0009778Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097786u); } /* indirect call */
    }

loc_0009778C: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009779Bu); RECOMP_ABI_CALL(0x00348E59u, sub_00348E59); /* call 0x00348E59 */

loc_0009779B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    edi = eax;
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x000977A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000977A1u); } /* indirect call */
    }

loc_000977A7: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000977B0
 * Original: 0x000977B0 - 0x000977B3 (3 bytes, 1 insns)
 * Folder: base (library: 0x000976C0 and 0x00097840)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000977B0(void)
{

loc_000977B0: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000977C0
 * Original: 0x000977C0 - 0x000977D6 (22 bytes, 9 insns)
 * Folder: base (library: 0x000976C0 and 0x00097840)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000977C0(void)
{

loc_000977C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x000977CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000977C5u); } /* indirect call */
    }

loc_000977CB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x000977D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000977CCu); } /* indirect call */
    }

loc_000977D2: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000977E0
 * Original: 0x000977E0 - 0x000977F8 (24 bytes, 9 insns)
 * Folder: base (library: 0x000976C0 and 0x00097840)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000977E0(void)
{

loc_000977E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x000977EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000977E5u); } /* indirect call */
    }

loc_000977EB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x000977F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000977ECu); } /* indirect call */
    }

loc_000977F2: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097800
 * Original: 0x00097800 - 0x00097806 (6 bytes, 2 insns)
 * Folder: base (library: 0x000976C0 and 0x00097840)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097800(void)
{

loc_00097800: ;
    eax = MEM32(0x431074);
    esp += 4; return; /* ret */

}

/**
 * sub_00097810
 * Original: 0x00097810 - 0x00097814 (4 bytes, 2 insns)
 * Folder: base (library: 0x000976C0 and 0x00097840)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097810: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00097820
 * Original: 0x00097820 - 0x00097825 (5 bytes, 2 insns)
 * Folder: base (library: 0x000976C0 and 0x00097840)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00097820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097820: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00097830
 * Original: 0x00097830 - 0x00097835 (5 bytes, 2 insns)
 * Folder: base (library: 0x000976C0 and 0x00097840)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00097830(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097830: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00098EB0
 * Original: 0x00098EB0 - 0x00098ED1 (33 bytes, 9 insns)
 * Folder: base (match: xbox-demo 0x0027D860, library)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098EB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098EC2; /* je: equal / zero */

loc_00098EB4: ;
    MEM32(eax + 4) = 0x41FA2C;
    MEM32(eax) = 0x41FC28;
    esp += 4; return; /* ret */

loc_00098EC2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = 0x41FA2C;
    MEM32(eax) = 0x41FC28;
    esp += 4; return; /* ret */

}

/**
 * sub_00098EE0
 * Original: 0x00098EE0 - 0x00098F47 (103 bytes, 24 insns)
 * Folder: base (match: xbox-demo 0x0027D890, library)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098EE0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368C58);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = esi + 0xC;
    MEM32(esp + 0xC) = 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esi) = 0x41FC74;
    MEM32(esi + 4) = 0;
    { uint32_t _icall_target = MEM32(0x418154); PUSH32(esp, 0x00098F19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00098F13u); } /* indirect call */
    }

loc_00098F19: ;
    PUSH32(esp, 0x00098F1Eu); RECOMP_ABI_CALL(0x00098990u, sub_00098990); /* call 0x00098990 */

loc_00098F1E: ;
    ecx = MEM32(esp + 4);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = 0;
    MEM8(esi + 0x34) = 1;
    MEM32(esi + 0x38) = 2;
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098F50
 * Original: 0x00098F50 - 0x00098FE8 (152 bytes, 47 insns)
 * Folder: base (between: 0x00098EE0 and 0x000992A0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098F50: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x369263);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    MEM32(esi) = 0x41FC74;
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esp + 0x1C) = 1;
    PUSH32(esp, 0x00098F84u); RECOMP_ABI_CALL(0x00097FD0u, sub_00097FD0); /* call 0x00097FD0 */

loc_00098F84: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(eax);
    PUSH32(esp, 0x95750);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00098F9Au); RECOMP_ABI_CALL(0x00098BB0u, sub_00098BB0); /* call 0x00098BB0 */

loc_00098F9A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi + 0x28;
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x00098FAAu); RECOMP_ABI_CALL(0x00032470u, sub_00032470); /* call 0x00032470 */

loc_00098FAA: ;
    edi = MEM32(ebx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098FC7; /* je: equal / zero */

loc_00098FB1: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00098FBF; /* jne: not equal / not zero */

loc_00098FBA: ;
    PUSH32(esp, 0x00098FBFu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00098FBF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00098FC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00098FC4u); } /* indirect call */
    }

loc_00098FC7: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + 4) = 0;
    POP32(esp, edi);
    MEM32(esi) = 0x41FC28;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00098FF0
 * Original: 0x00098FF0 - 0x00098FF9 (9 bytes, 4 insns)
 * Folder: base (between: 0x00098EE0 and 0x000992A0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00098FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00098FF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00099000
 * Original: 0x00099000 - 0x00099011 (17 bytes, 5 insns)
 * Folder: base (between: 0x00098EE0 and 0x000992A0)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099000(void)
{

loc_00099000: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00099020
 * Original: 0x00099020 - 0x0009902F (15 bytes, 8 insns)
 * Folder: base (between: 0x00098EE0 and 0x000992A0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099020: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009902E; /* je: equal / zero */

loc_00099027: ;
    ecx = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0009902Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009902Bu); } /* indirect call */
    }

loc_0009902D: ;
    POP32(esp, ecx);

loc_0009902E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00099030
 * Original: 0x00099030 - 0x00099060 (48 bytes, 19 insns)
 * Folder: base (between: 0x00098EE0 and 0x000992A0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099030: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00099039u); RECOMP_ABI_CALL(0x00098F50u, sub_00098F50); /* call 0x00098F50 */

loc_00099039: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009905A; /* je: equal / zero */

loc_00099040: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009905A; /* je: equal / zero */

loc_00099044: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099052; /* jne: not equal / not zero */

loc_0009904D: ;
    PUSH32(esp, 0x00099052u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00099052: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0009905Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00099057u); } /* indirect call */
    }

loc_0009905A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00099060
 * Original: 0x00099060 - 0x00099090 (48 bytes, 19 insns)
 * Folder: base (between: 0x00098EE0 and 0x000992A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099060: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x00099069u); RECOMP_ABI_CALL(0x00032470u, sub_00032470); /* call 0x00032470 */

loc_00099069: ;
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099086; /* je: equal / zero */

loc_00099070: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009907E; /* jne: not equal / not zero */

loc_00099079: ;
    PUSH32(esp, 0x0009907Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0009907E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00099086u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00099083u); } /* indirect call */
    }

loc_00099086: ;
    POP32(esp, esi);
    MEM32(ebx + 4) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00099090
 * Original: 0x00099090 - 0x00099097 (7 bytes, 3 insns)
 * Folder: base (between: 0x00098EE0 and 0x000992A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099090(void)
{

loc_00099090: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00099096u); RECOMP_ABI_CALL(0x00098F50u, sub_00098F50); /* call 0x00098F50 */

loc_00099096: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000990A0
 * Original: 0x000990A0 - 0x000990BB (27 bytes, 9 insns)
 * Folder: base (between: 0x00098EE0 and 0x000992A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000990A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000990A0: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi) = 0x41FC44;
    if (CMP_EQ(_fa, _fb)) goto loc_000990B4; /* je: equal / zero */

loc_000990AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000990B4u); RECOMP_ABI_CALL(0x00331BE8u, sub_00331BE8); /* call 0x00331BE8 */

loc_000990B4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000990BAu); RECOMP_ABI_CALL(0x000979E0u, sub_000979E0); /* call 0x000979E0 */

loc_000990BA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000990C0
 * Original: 0x000990C0 - 0x000990EF (47 bytes, 18 insns)
 * Folder: base (between: 0x00098EE0 and 0x000992A0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000990C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000990C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000990C8u); RECOMP_ABI_CALL(0x000990A0u, sub_000990A0); /* call 0x000990A0 */

loc_000990C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000990E9; /* je: equal / zero */

loc_000990CF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000990E9; /* je: equal / zero */

loc_000990D3: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000990E1; /* jne: not equal / not zero */

loc_000990DC: ;
    PUSH32(esp, 0x000990E1u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000990E1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000990E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000990E6u); } /* indirect call */
    }

loc_000990E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000990F0
 * Original: 0x000990F0 - 0x00099161 (113 bytes, 34 insns)
 * Folder: base (between: 0x00098EE0 and 0x000992A0)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000990F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000990F0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    eax = 0x1000;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edx = eax;
    PUSH32(esp, 0x00099104u); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_00099104: ;
    eax = ebx + 0x1000;
    ecx = 0x40;
    esi = ebp;
    edi = eax;
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
    esi = ebp + 0x100;
    edi = eax + 0x100;
    ecx = 0x40;
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
    ecx = MEM32(ebp + 0x200);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 0x200) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0009913E; /* je: equal / zero */

loc_0009913B: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009913E: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    esi = ebx;
    MEM32(ebx + 0x1204) = eax;
    MEM32(ebx + 0x1208) = ecx;
    PUSH32(esp, 0x00099159u); RECOMP_ABI_CALL(0x000931B0u, sub_000931B0); /* call 0x000931B0 */

loc_00099159: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00099170
 * Original: 0x00099170 - 0x00099187 (23 bytes, 10 insns)
 * Folder: base (between: 0x00098EE0 and 0x000992A0)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099170(void)
{

loc_00099170: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00099181u); RECOMP_ABI_CALL(0x000990F0u, sub_000990F0); /* call 0x000990F0 */

loc_00099181: ;
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00099190
 * Original: 0x00099190 - 0x0009929A (266 bytes, 93 insns)
 * Folder: base (between: 0x00098EE0 and 0x000992A0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00099190: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = ebx + 0xC;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x000991BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000991B6u); } /* indirect call */
    }

loc_000991BC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x20) = eax;
    _fa = (uint32_t)(MEM32(ebx + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x3C), eax (32-bit) */
    ebp = MEM32(ebx + 0x44);
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00099243; /* jbe: below or equal (unsigned <=) */

loc_000991CE: ;
    edi = edi;

loc_000991D0: ;
    eax = MEM32(0x46B1B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(ebx + 0x40);
    if (CMP_NE(_fa, _fb)) goto loc_000991E1; /* jne: not equal / not zero */

loc_000991DC: ;
    PUSH32(esp, 0x000991E1u); RECOMP_ABI_CALL(0x00097A70u, sub_00097A70); /* call 0x00097A70 */

loc_000991E1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x000991EAu); RECOMP_ABI_CALL(0x00097CB0u, sub_00097CB0); /* call 0x00097CB0 */

loc_000991EA: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009921B; /* jne: not equal / not zero */

loc_000991F0: ;
    eax = MEM32(0x46B1B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(ebx + 0x40);
    if (CMP_NE(_fa, _fb)) goto loc_00099201; /* jne: not equal / not zero */

loc_000991FC: ;
    PUSH32(esp, 0x00099201u); RECOMP_ABI_CALL(0x00097A70u, sub_00097A70); /* call 0x00097A70 */

loc_00099201: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x0009920Au); RECOMP_ABI_CALL(0x00097DD0u, sub_00097DD0); /* call 0x00097DD0 */

loc_0009920A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099273; /* je: equal / zero */

loc_00099210: ;
    eax = MEM32(ebx + 0x40);
    PUSH32(esp, 0x00099218u); RECOMP_ABI_CALL(0x00099680u, sub_00099680); /* call 0x00099680 */

loc_00099218: ;
    MEM32(edi + 0x10) = eax;

loc_0009921B: ;
    ecx = edi;
    eax = ebx;
    PUSH32(esp, 0x00099224u); RECOMP_ABI_CALL(0x000980E0u, sub_000980E0); /* call 0x000980E0 */

loc_00099224: ;
    eax = MEM32(ebx + 0x40);
    ecx = MEM32(eax + 4);
    edx = MEM32(edi + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099243; /* jne: not equal / not zero */

loc_00099232: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebx + 0x3C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000991D0; /* jb: below (unsigned <) */

loc_00099243: ;
    edx = MEM32(ebx + 0x40);
    esi = MEM32(edx + 4);
    PUSH32(esp, 0x0009924Eu); RECOMP_ABI_CALL(0x00099A30u, sub_00099A30); /* call 0x00099A30 */

loc_0009924E: ;
    esi = ebx;
    PUSH32(esp, 0x00099255u); RECOMP_ABI_CALL(0x00098140u, sub_00098140); /* call 0x00098140 */

loc_00099255: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);

loc_0009925A: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00099260u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009925Au); } /* indirect call */
    }

loc_00099260: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00099273: ;
    eax = MEM32(ebx + 0x2C);
    ecx = MEM32(eax);
    PUSH32(esp, 0x95750);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00099289u); RECOMP_ABI_CALL(0x00098BB0u, sub_00098BB0); /* call 0x00098BB0 */

loc_00099289: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x38) = 4;
    PUSH32(esp, ecx);
    goto loc_0009925A;

}

/**
 * sub_000992A0
 * Original: 0x000992A0 - 0x00099372 (210 bytes, 70 insns)
 * Folder: base (match: xbox-demo 0x0027DCF0, library)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000992A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000992A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x369278);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esi = ecx;
    PUSH32(esp, 0x000992C4u); RECOMP_ABI_CALL(0x00098EE0u, sub_00098EE0); /* call 0x00098EE0 */

loc_000992C4: ;
    eax = MEM32(esp + 0x20);
    MEM32(ebp + 0x3C) = esi;
    MEM32(ebp + 0x40) = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(ebp) = 0x41FC5C;
    if (CMP_EQ(_fa, _fb)) goto loc_0009935D; /* je: equal / zero */

loc_000992E1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ebp + 0x28;
    MEM32(esp + 0x28) = esi;
    /* nop */

loc_000992F0: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(ecx);
    SET_LO8(ecx, MEM8(ebp + 0x34));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099319; /* je: equal / zero */

loc_000992FD: ;
    ecx = MEM32(ebp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099319; /* je: equal / zero */

loc_00099304: ;
    edx = MEM32(ebp + 0x2C);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx + 8);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00099319; /* jae: above or equal (unsigned >=) */

loc_00099315: ;
    MEM8(ebp + 0x34) = 0;

loc_00099319: ;
    esi = MEM32(ebx + 4);
    edx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009932Fu); RECOMP_ABI_CALL(0x0003AC70u, sub_0003AC70); /* call 0x0003AC70 */

loc_0009932F: ;
    ecx = 1;
    edx = ebx;
    edi = eax;
    PUSH32(esp, 0x0009933Du); RECOMP_ABI_CALL(0x000DB310u, sub_000DB310); /* call 0x000DB310 */

loc_0009933D: ;
    eax = MEM32(esp + 0x28);
    MEM32(esi + 4) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ecx) = edi;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x28) = eax;
    if ((_fa != 0)) goto loc_000992F0; /* jne: not equal / not zero */

loc_0009935B: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0009935D: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00099380
 * Original: 0x00099380 - 0x000993B1 (49 bytes, 19 insns)
 * Folder: base (between: 0x000992A0 and 0x000994A0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099380: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi;
    PUSH32(esp, 0x0009938Au); RECOMP_ABI_CALL(0x00099090u, sub_00099090); /* call 0x00099090 */

loc_0009938A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000993AB; /* je: equal / zero */

loc_00099391: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000993AB; /* je: equal / zero */

loc_00099395: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000993A3; /* jne: not equal / not zero */

loc_0009939E: ;
    PUSH32(esp, 0x000993A3u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000993A3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000993ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000993A8u); } /* indirect call */
    }

loc_000993AB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000993C0
 * Original: 0x000993C0 - 0x0009949F (223 bytes, 83 insns)
 * Folder: base (between: 0x000992A0 and 0x000994A0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000993C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000993C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x2C);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00099492; /* je: equal / zero */

loc_000993DA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    /* nop */

loc_000993E0: ;
    esi = MEM32(ecx + 0x40);
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ebx + 8);
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(ecx + 4);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    ebp = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000993FD; /* jne: not equal / not zero */

loc_000993F8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00099422; /* je: equal / zero */

loc_000993FD: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ebp;
    PUSH32(esp, 0x00099412u); RECOMP_ABI_CALL(0x00332B14u, sub_00332B14); /* call 0x00332B14 */

loc_00099412: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0009941C; /* jne: not equal / not zero */

loc_00099417: ;
    PUSH32(esp, 0x0009941Cu); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_0009941C: ;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = ebp;

loc_00099422: ;
    eax = MEM32(ebx + 8);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = edi;
    edx = MEM32(eax + 0x10);
    eax = MEM32(eax + 8);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00099442u); RECOMP_ABI_CALL(0x003329BAu, sub_003329BA); /* call 0x003329BA */

loc_00099442: ;
    edx = MEM32(esp + 0x10);
    ebp = MEM32(esi + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(edx)) >> 32) & 1);
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x14);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(edi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(esi + 0x10) = ebp;
    MEM32(esi + 0x14) = edx;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00099480; /* je: equal / zero */

loc_0009945D: ;
    ecx = MEM32(eax + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(eax + 0xC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0009947D; /* jne: not equal / not zero */

loc_00099468: ;
    eax = MEM32(0x46B1B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00099476; /* jne: not equal / not zero */

loc_00099471: ;
    PUSH32(esp, 0x00099476u); RECOMP_ABI_CALL(0x00097A70u, sub_00097A70); /* call 0x00097A70 */

loc_00099476: ;
    esi = eax;
    PUSH32(esp, 0x0009947Du); RECOMP_ABI_CALL(0x00097F80u, sub_00097F80); /* call 0x00097F80 */

loc_0009947D: ;
    MEM32(ebx + 8) = edi;

loc_00099480: ;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_000993E0; /* jne: not equal / not zero */

loc_00099490: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00099492: ;
    esi = ecx;
    PUSH32(esp, 0x00099499u); RECOMP_ABI_CALL(0x00098140u, sub_00098140); /* call 0x00098140 */

loc_00099499: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000994A0
 * Original: 0x000994A0 - 0x0009952D (141 bytes, 43 insns)
 * Folder: base (match: xbox-demo 0x0027DE30, library)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000994A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000994A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F48);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000994C8; /* jne: not equal / not zero */

loc_000994C3: ;
    PUSH32(esp, 0x000994C8u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000994C8: ;
    edx = 0x48;
    ecx = eax;
    PUSH32(esp, 0x000994D4u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000994D4: ;
    esi = eax;
    MEM32(esp + 8) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00099505; /* je: equal / zero */

loc_000994E6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000994ECu); RECOMP_ABI_CALL(0x00098EE0u, sub_00098EE0); /* call 0x00098EE0 */

loc_000994EC: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = edi;
    MEM32(esi) = 0x41FCB8;
    MEM32(esi + 0x44) = ecx;
    goto loc_00099507;

loc_00099505: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00099507: ;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00099518u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00099515u); } /* indirect call */
    }

loc_00099518: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00099530
 * Original: 0x00099530 - 0x000995CE (158 bytes, 50 insns)
 * Folder: base (match: xbox-demo 0x0027DEC0, library)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099530: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F48);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00099558; /* jne: not equal / not zero */

loc_00099553: ;
    PUSH32(esp, 0x00099558u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00099558: ;
    edx = 0x48;
    ecx = eax;
    PUSH32(esp, 0x00099564u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00099564: ;
    esi = eax;
    MEM32(esp + 8) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00099595; /* je: equal / zero */

loc_00099576: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009957Cu); RECOMP_ABI_CALL(0x00098EE0u, sub_00098EE0); /* call 0x00098EE0 */

loc_0009957C: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = edi;
    MEM32(esi) = 0x41FCB8;
    MEM32(esi + 0x44) = ecx;
    goto loc_00099597;

loc_00099595: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00099597: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000995B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000995ADu); } /* indirect call */
    }

loc_000995B0: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000995B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000995B6u); } /* indirect call */
    }

loc_000995B9: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000995D0
 * Original: 0x000995D0 - 0x0009964A (122 bytes, 40 insns)
 * Folder: base (match: xbox-demo 0x0027DF60, library)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000995D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000995D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F48);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x46B1A4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000995FA; /* jne: not equal / not zero */

loc_000995F5: ;
    PUSH32(esp, 0x000995FAu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000995FA: ;
    edx = 0x44;
    ecx = eax;
    PUSH32(esp, 0x00099606u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00099606: ;
    MEM32(esp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00099624; /* je: equal / zero */

loc_00099612: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00099622u); RECOMP_ABI_CALL(0x000992A0u, sub_000992A0); /* call 0x000992A0 */

loc_00099622: ;
    esi = eax;

loc_00099624: ;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00099635u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00099632u); } /* indirect call */
    }

loc_00099635: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00099650
 * Original: 0x00099650 - 0x00099680 (48 bytes, 22 insns)
 * Folder: base (match: xbox-demo 0x0027DFE0, library)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099650: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00099666u); RECOMP_ABI_CALL(0x00332D3Bu, sub_00332D3B); /* call 0x00332D3B */

loc_00099666: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009967C; /* je: equal / zero */

loc_0009966F: ;
    edx = MEM32(esp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0009967C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00099680
 * Original: 0x00099680 - 0x000996E7 (103 bytes, 40 insns)
 * Folder: base (between: 0x00099650 and 0x00099730)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00099680: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi + 4);
    eax = MEM32(edi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0xC));
    edx = MEM32(esi + 0x10);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0009969C; /* jne: not equal / not zero */

loc_00099697: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000996A3; /* je: equal / zero */

loc_0009969C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000996A3u); RECOMP_ABI_CALL(0x000996F0u, sub_000996F0); /* call 0x000996F0 */

loc_000996A3: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(edi + 8);
    PUSH32(esp, 0);
    MEM32(esp + 8) = 0;
    eax = MEM32(edx + 0xC);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000996C6u); RECOMP_ABI_CALL(0x003328CDu, sub_003328CD); /* call 0x003328CD */

loc_000996C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000996CF; /* jne: not equal / not zero */

loc_000996CA: ;
    g_seh_ebp = ebp; sub_000CB410(); return; /* tail jmp 0x000CB410 */

loc_000996CF: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esp + 4);
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000996F0
 * Original: 0x000996F0 - 0x00099730 (64 bytes, 25 insns)
 * Folder: base (between: 0x00099650 and 0x00099730)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000996F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000996F0: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099706; /* jne: not equal / not zero */

loc_00099701: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009972B; /* je: equal / zero */

loc_00099706: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x0009971Bu); RECOMP_ABI_CALL(0x00332B14u, sub_00332B14); /* call 0x00332B14 */

loc_0009971B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099725; /* jne: not equal / not zero */

loc_00099720: ;
    PUSH32(esp, 0x00099725u); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_00099725: ;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = ebx;

loc_0009972B: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00099730
 * Original: 0x00099730 - 0x0009977D (77 bytes, 31 insns)
 * Folder: base (match: xbox-demo 0x0027E120, library)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099730: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099749; /* jne: not equal / not zero */

loc_00099744: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009976E; /* je: equal / zero */

loc_00099749: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x0009975Eu); RECOMP_ABI_CALL(0x00332B14u, sub_00332B14); /* call 0x00332B14 */

loc_0009975E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099768; /* jne: not equal / not zero */

loc_00099763: ;
    PUSH32(esp, 0x00099768u); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_00099768: ;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = ebx;

loc_0009976E: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00099777u); RECOMP_ABI_CALL(0x00332A90u, sub_00332A90); /* call 0x00332A90 */

loc_00099777: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00099780
 * Original: 0x00099780 - 0x0009988D (269 bytes, 86 insns)
 * Folder: base (between: 0x00099730 and 0x000999A0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00099780: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368E54);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x758640);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = 0x41FA2C;
    MEM32(esi + 8) = ebp;
    PUSH32(esp, edi);
    MEM32(esi + 0xC) = eax;
    eax = esi + 0x10;
    MEM32(esp + 0x1C) = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esi) = 0x41FC8C;
    MEM32(esi + 4) = 0x41FC88;
    { uint32_t _icall_target = MEM32(0x418154); PUSH32(esp, 0x000997CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000997C7u); } /* indirect call */
    }

loc_000997CD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000997D7u); RECOMP_ABI_CALL(0x00337191u, sub_00337191); /* call 0x00337191 */

loc_000997D7: ;
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000997E5u); RECOMP_ABI_CALL(0x00337191u, sub_00337191); /* call 0x00337191 */

loc_000997E5: ;
    MEM32(esi + 0x30) = eax;
    MEM8(esp + 0x1C) = 2;
    PUSH32(esp, 0x000997F2u); RECOMP_ABI_CALL(0x000DB670u, sub_000DB670); /* call 0x000DB670 */

loc_000997F2: ;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = ebp;
    MEM8(esp + 0x1C) = 3;
    PUSH32(esp, 0x00099802u); RECOMP_ABI_CALL(0x000DB670u, sub_000DB670); /* call 0x000DB670 */

loc_00099802: ;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = ebp;
    MEM8(esp + 0x1C) = 4;
    eax = MEM32(0x46B1C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009981B; /* jne: not equal / not zero */

loc_00099816: ;
    PUSH32(esp, 0x0009981Bu); RECOMP_ABI_CALL(0x0009A530u, sub_0009A530); /* call 0x0009A530 */

loc_0009981B: ;
    edi = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009982B; /* jne: not equal / not zero */

loc_00099826: ;
    PUSH32(esp, 0x0009982Bu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0009982B: ;
    edx = 8;
    ecx = eax;
    PUSH32(esp, 0x00099837u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00099837: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x9A5E0);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    MEM32(eax + 4) = esi;
    MEM32(eax) = 0x9A3C0;
    PUSH32(esp, 0x00099853u); RECOMP_ABI_CALL(0x00331E99u, sub_00331E99); /* call 0x00331E99 */

loc_00099853: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099870; /* je: equal / zero */

loc_00099859: ;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, 0x00099869u); RECOMP_ABI_CALL(0x0009A780u, sub_0009A780); /* call 0x0009A780 */

loc_00099869: ;
    MEM32(eax) = ebx;
    MEM32(esi + 0x34) = ebp;
    goto loc_00099876;

loc_00099870: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x34) = eax;

loc_00099876: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00099890
 * Original: 0x00099890 - 0x000998C0 (48 bytes, 19 insns)
 * Folder: base (between: 0x00099730 and 0x000999A0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099890: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00099899u); RECOMP_ABI_CALL(0x000998C0u, sub_000998C0); /* call 0x000998C0 */

loc_00099899: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000998BA; /* je: equal / zero */

loc_000998A0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000998BA; /* je: equal / zero */

loc_000998A4: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000998B2; /* jne: not equal / not zero */

loc_000998AD: ;
    PUSH32(esp, 0x000998B2u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000998B2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000998BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000998B7u); } /* indirect call */
    }

loc_000998BA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000998C0
 * Original: 0x000998C0 - 0x0009999C (220 bytes, 62 insns)
 * Folder: base (between: 0x00099730 and 0x000999A0)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000998C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000998C0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368E54);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    MEM32(edi) = 0x41FC8C;
    MEM32(edi + 4) = 0x41FC88;
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = 4;
    eax = MEM32(edi + 0x2C);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000998FDu); RECOMP_ABI_CALL(0x003371ECu, sub_003371EC); /* call 0x003371EC */

loc_000998FD: ;
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00099908u); RECOMP_ABI_CALL(0x003373A0u, sub_003373A0); /* call 0x003373A0 */

loc_00099908: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009991C; /* jne: not equal / not zero */

loc_0009990F: ;
    edx = MEM32(edi + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009991Cu); RECOMP_ABI_CALL(0x003371ECu, sub_003371EC); /* call 0x003371EC */

loc_0009991C: ;
    eax = MEM32(0x46B1C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(edi + 0x34);
    if (CMP_NE(_fa, _fb)) goto loc_0009992D; /* jne: not equal / not zero */

loc_00099928: ;
    PUSH32(esp, 0x0009992Du); RECOMP_ABI_CALL(0x0009A530u, sub_0009A530); /* call 0x0009A530 */

loc_0009992D: ;
    edx = eax;
    PUSH32(esp, 0x00099934u); RECOMP_ABI_CALL(0x0009A720u, sub_0009A720); /* call 0x0009A720 */

loc_00099934: ;
    esi = edi + 0x44;
    PUSH32(esp, 0x0009993Cu); RECOMP_ABI_CALL(0x0009A450u, sub_0009A450); /* call 0x0009A450 */

loc_0009993C: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00099945u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_00099945: ;
    MEM32(esi + 4) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edi + 0x38;
    PUSH32(esp, 0x00099957u); RECOMP_ABI_CALL(0x0009A450u, sub_0009A450); /* call 0x0009A450 */

loc_00099957: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00099960u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_00099960: ;
    MEM32(esi + 4) = 0;
    edx = MEM32(edi + 0x30);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00099973u); RECOMP_ABI_CALL(0x00331BE8u, sub_00331BE8); /* call 0x00331BE8 */

loc_00099973: ;
    eax = MEM32(edi + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009997Cu); RECOMP_ABI_CALL(0x00331BE8u, sub_00331BE8); /* call 0x00331BE8 */

loc_0009997C: ;
    ecx = MEM32(esp + 8);
    MEM32(edi + 4) = 0x41FA2C;
    MEM32(edi) = 0x41FC28;
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000999A0
 * Original: 0x000999A0 - 0x00099A24 (132 bytes, 45 insns)
 * Folder: base (match: xbox-demo 0x0027E3A0, library)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000999A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000999A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ebp = esi + 0x10;
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = ebp;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x000999CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000999C4u); } /* indirect call */
    }

loc_000999CA: ;
    MEM32(esp + 0x1C) = 0;
    edi = MEM32(esi + 0x3C);
    ecx = MEM32(edi + 4);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000999E4u); RECOMP_ABI_CALL(0x000DB2E0u, sub_000DB2E0); /* call 0x000DB2E0 */

loc_000999E4: ;
    ecx = 1;
    edx = esi + 0x38;
    ebx = eax;
    PUSH32(esp, 0x000999F3u); RECOMP_ABI_CALL(0x000DB310u, sub_000DB310); /* call 0x000DB310 */

loc_000999F3: ;
    MEM32(edi + 4) = ebx;
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0);
    MEM32(edx) = ebx;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00099A08u); RECOMP_ABI_CALL(0x003371ECu, sub_003371EC); /* call 0x003371EC */

loc_00099A08: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00099A0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00099A09u); } /* indirect call */
    }

loc_00099A0F: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00099A30
 * Original: 0x00099A30 - 0x00099A94 (100 bytes, 33 insns)
 * Folder: base (between: 0x000999A0 and 0x0009A000)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099A30: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    MEM32(esp + 8) = edi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00099A55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00099A4Fu); } /* indirect call */
    }

loc_00099A55: ;
    MEM32(esp + 0x10) = 0;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099A71; /* je: equal / zero */

loc_00099A66: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099A71; /* je: equal / zero */

loc_00099A6B: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099A66; /* jne: not equal / not zero */

loc_00099A71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x48) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099A7D; /* je: equal / zero */

loc_00099A76: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00099A7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00099A7Au); } /* indirect call */
    }

loc_00099A7D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00099A84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00099A7Eu); } /* indirect call */
    }

loc_00099A84: ;
    ecx = MEM32(esp + 8);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00099AA0
 * Original: 0x00099AA0 - 0x00099B6E (206 bytes, 75 insns)
 * Folder: base (between: 0x000999A0 and 0x0009A000)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00099AA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebp = esi + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = ebp;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00099AC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00099AC3u); } /* indirect call */
    }

loc_00099AC9: ;
    MEM32(esp + 0x18) = 0;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    edi = MEM32(esp + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_00099AEB; /* je: equal / zero */

loc_00099ADE: ;
    edi = edi;

loc_00099AE0: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099AEB; /* je: equal / zero */

loc_00099AE5: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099AE0; /* jne: not equal / not zero */

loc_00099AEB: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099B26; /* je: equal / zero */

loc_00099AF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099B15; /* je: equal / zero */

loc_00099AF6: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    PUSH32(esp, eax);
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0x00099B0Bu); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_00099B0B: ;
    eax = MEM32(esi + 0x40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x40) = eax;

loc_00099B15: ;
    MEM32(edi + 0x38) = 1;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00099B24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00099B22u); } /* indirect call */
    }

loc_00099B24: ;
    goto loc_00099B53;

loc_00099B26: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x44;
    esi = MEM32(ebx + 4);
    edx = MEM32(esi + 4);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00099B3Cu); RECOMP_ABI_CALL(0x000DB2E0u, sub_000DB2E0); /* call 0x000DB2E0 */

loc_00099B3C: ;
    ecx = 1;
    edx = ebx;
    edi = eax;
    PUSH32(esp, 0x00099B4Au); RECOMP_ABI_CALL(0x000DB310u, sub_000DB310); /* call 0x000DB310 */

loc_00099B4A: ;
    MEM32(esi + 4) = edi;
    eax = MEM32(edi + 4);
    MEM32(eax) = edi;
    POP32(esp, ebx);

loc_00099B53: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00099B5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00099B54u); } /* indirect call */
    }

loc_00099B5A: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00099B70
 * Original: 0x00099B70 - 0x00099DB0 (576 bytes, 198 insns)
 * Folder: base (between: 0x000999A0 and 0x0009A000)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00099B70: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x104));
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10C);
    PUSH32(esp, ebp);
    ebp = eax;
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    if ((_fa == 0)) goto loc_00099BB7; /* je: equal / zero */

loc_00099B8B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = 0x80000000u;
    if (TEST_Z(_fa, _fb)) goto loc_00099B9B; /* je: equal / zero */

loc_00099B94: ;
    eax = 3;
    goto loc_00099BDF;

loc_00099B9B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00099BA6; /* jns: not sign (positive) */

loc_00099B9F: ;
    eax = 4;
    goto loc_00099BDF;

loc_00099BA6: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00099BDF;

loc_00099BB7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = 0x40000000;
    if (TEST_Z(_fa, _fb)) goto loc_00099BC7; /* je: equal / zero */

loc_00099BC0: ;
    eax = 2;
    goto loc_00099BDF;

loc_00099BC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00099BD2; /* je: equal / zero */

loc_00099BCB: ;
    eax = 1;
    goto loc_00099BDF;

loc_00099BD2: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x280;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00099BDF: ;
    edi = MEM32(esp + 0x114);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x100)) >> 32) & 1);
    edi = edi + 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00099C05; /* je: equal / zero */

loc_00099BF4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2F (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00099D08; /* je: equal / zero */

loc_00099BFD: ;
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00099BF4; /* jne: not equal / not zero */

loc_00099C05: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00099C07: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00099C37; /* je: equal / zero */

loc_00099C0B: ;
    goto loc_00099C10;

    /* nop */

loc_00099C10: ;
    MEM8(ecx) = 0x5C;
    edx = ecx;
    SET_LO8(ecx, MEM8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00099C31; /* je: equal / zero */

loc_00099C1B: ;
    goto loc_00099C20;

    /* nop */

loc_00099C20: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2F (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00099D0F; /* je: equal / zero */

loc_00099C29: ;
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00099C20; /* jne: not equal / not zero */

loc_00099C31: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00099C33: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00099C10; /* jne: not equal / not zero */

loc_00099C37: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8000000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20000003);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00099C4Du); RECOMP_ABI_CALL(0x0033175Cu, sub_0033175C); /* call 0x0033175C */

loc_00099C4D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00099D1F; /* jne: not equal / not zero */

loc_00099C58: ;
    _fa = (uint32_t)(MEM8(esp + 0x118)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x118), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00099D8D; /* je: equal / zero */

loc_00099C66: ;
    PUSH32(esp, 0x00099C6Bu); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_00099C6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00099D8D; /* jne: not equal / not zero */

loc_00099C74: ;
    esi = MEM32(esp + 0x114);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = 0x100;
    edx = 0xFF;
    ecx = esi;
    PUSH32(esp, 0x00099C91u); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_00099C91: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = esp + 0x10;
    ecx = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00099CB0; /* je: equal / zero */

loc_00099CA2: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00099CA2; /* jne: not equal / not zero */

loc_00099CAA: ;
    /* nop */

loc_00099CB0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00099CC0; /* je: equal / zero */

loc_00099CB6: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x2F (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00099D16; /* je: equal / zero */

loc_00099CBB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00099CB6; /* jne: not equal / not zero */

loc_00099CC0: ;
    eax = MEM32(0x46B18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(edx) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00099CD1; /* jne: not equal / not zero */

loc_00099CCC: ;
    PUSH32(esp, 0x00099CD1u); RECOMP_ABI_CALL(0x00093250u, sub_00093250); /* call 0x00093250 */

loc_00099CD1: ;
    PUSH32(esp, 1);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00099CDEu); RECOMP_ABI_CALL(0x00093410u, sub_00093410); /* call 0x00093410 */

loc_00099CDE: ;
    eax = MEM32(0x46B18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00099CEC; /* jne: not equal / not zero */

loc_00099CE7: ;
    PUSH32(esp, 0x00099CECu); RECOMP_ABI_CALL(0x00093250u, sub_00093250); /* call 0x00093250 */

loc_00099CEC: ;
    edx = MEM32(esp + 0x118);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00099CFCu); RECOMP_ABI_CALL(0x00094170u, sub_00094170); /* call 0x00094170 */

loc_00099CFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x104)) >> 32) & 1);
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00099D08: ;
    ecx = edx;
    goto loc_00099C07;

loc_00099D0F: ;
    ecx = edx;
    goto loc_00099C33;

loc_00099D16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00099CC0; /* je: equal / zero */

loc_00099D1A: ;
    edx = eax + 1;
    goto loc_00099CB0;

loc_00099D1F: ;
    eax = MEM32(esp + 0x118);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00099D37; /* je: equal / zero */

loc_00099D2B: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00099D37u); RECOMP_ABI_CALL(0x00332B14u, sub_00332B14); /* call 0x00332B14 */

loc_00099D37: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00099D45; /* jne: not equal / not zero */

loc_00099D40: ;
    PUSH32(esp, 0x00099D45u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00099D45: ;
    edx = 0x18;
    ecx = eax;
    PUSH32(esp, 0x00099D51u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00099D51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00099D7F; /* je: equal / zero */

loc_00099D55: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x41FC44;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0x14) = 0;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x104)) >> 32) & 1);
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00099D7F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x104)) >> 32) & 1);
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00099D8D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00099D96; /* je: equal / zero */

loc_00099D91: ;
    PUSH32(esp, 0x00099D96u); RECOMP_ABI_CALL(0x000CB410u, sub_000CB410); /* call 0x000CB410 */

loc_00099D96: ;
    esi = MEM32(esp + 0x114);
    PUSH32(esp, 0x00099DA2u); RECOMP_ABI_CALL(0x00099DB0u, sub_00099DB0); /* call 0x00099DB0 */

loc_00099DA2: ;
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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00099DB0
 * Original: 0x00099DB0 - 0x00099FF3 (579 bytes, 292 insns)
 * Folder: base (between: 0x000999A0 and 0x0009A000)
 * Category: game_debug
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099DB0(void)
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

loc_00099DB0: ;
    eax = 0x9060;
    PUSH32(esp, 0x00099DBAu); RECOMP_ABI_CALL(0x00347D50u, sub_00347D50); /* call 0x00347D50 */

loc_00099DBA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00099DC0u); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_00099DC0: ;
    ecx = eax + -2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xB5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00099EE0; /* ja: above (unsigned >) */

loc_00099DCF: ;
    ecx = ZX8(MEM8(ecx + 0x99F24));
    { uint32_t _jt = MEM32(ecx * 4 + 0x99F04); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00099DDDu) goto loc_00099DDD;
    if (_jt == 0x00099E05u) goto loc_00099E05;
    if (_jt == 0x00099E30u) goto loc_00099E30;
    if (_jt == 0x00099E5Bu) goto loc_00099E5B;
    if (_jt == 0x00099E7Au) goto loc_00099E7A;
    if (_jt == 0x00099E9Cu) goto loc_00099E9C;
    if (_jt == 0x00099EBEu) goto loc_00099EBE;
    if (_jt == 0x00099EE0u) goto loc_00099EE0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00099DDD: ;
    PUSH32(esp, 0x41FDA4);
    edx = esp + 0x4838;
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi;
    PUSH32(esp, 0x00099DF3u); RECOMP_ABI_CALL(0x00099170u, sub_00099170); /* call 0x00099170 */

loc_00099DF3: ;
    PUSH32(esp, 0x42AC5C);
    eax = esp + 0x4838;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00099E05u); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_00099E05: ;
    PUSH32(esp, 0x41FA34);
    ecx = esp + 0x2420;
    PUSH32(esp, ecx);
    ecx = 1;
    edx = esi;
    PUSH32(esp, 0x00099E1Eu); RECOMP_ABI_CALL(0x00099170u, sub_00099170); /* call 0x00099170 */

loc_00099E1E: ;
    PUSH32(esp, 0x42ABF4);
    edx = esp + 0x2420;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00099E30u); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_00099E30: ;
    PUSH32(esp, 0x41FD94);
    ecx = esp + 0x6C50;
    PUSH32(esp, ecx);
    ecx = 2;
    edx = esi;
    PUSH32(esp, 0x00099E49u); RECOMP_ABI_CALL(0x00099170u, sub_00099170); /* call 0x00099170 */

loc_00099E49: ;
    PUSH32(esp, 0x42ABF4);
    edx = esp + 0x6C50;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00099E5Bu); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_00099E5B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    ecx = 0x41FD80;
    ebx = esp + 0x10;
    PUSH32(esp, 0x00099E6Du); RECOMP_ABI_CALL(0x000990F0u, sub_000990F0); /* call 0x000990F0 */

loc_00099E6D: ;
    PUSH32(esp, 0x42AC4C);
    eax = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00099E7Au); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_00099E7A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    ecx = 0x41FD70;
    ebx = esp + 0x121C;
    PUSH32(esp, 0x00099E8Fu); RECOMP_ABI_CALL(0x000990F0u, sub_000990F0); /* call 0x000990F0 */

loc_00099E8F: ;
    PUSH32(esp, 0x42AC4C);
    ecx = ebx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00099E9Cu); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_00099E9C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    ecx = 0x41FD60;
    ebx = esp + 0x3634;
    PUSH32(esp, 0x00099EB1u); RECOMP_ABI_CALL(0x000990F0u, sub_000990F0); /* call 0x000990F0 */

loc_00099EB1: ;
    PUSH32(esp, 0x42AC4C);
    edx = ebx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00099EBEu); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_00099EBE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    ecx = 0x41FD4C;
    ebx = esp + 0x5A4C;
    PUSH32(esp, 0x00099ED3u); RECOMP_ABI_CALL(0x000990F0u, sub_000990F0); /* call 0x000990F0 */

loc_00099ED3: ;
    PUSH32(esp, 0x42AC4C);
    eax = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00099EE0u); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_00099EE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    PUSH32(esp, esi);
    ecx = 0x41FD3C;
    ebx = esp + 0x7E64;
    PUSH32(esp, 0x00099EF5u); RECOMP_ABI_CALL(0x000990F0u, sub_000990F0); /* call 0x000990F0 */

loc_00099EF5: ;
    PUSH32(esp, 0x42AC4C);
    ecx = ebx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00099F02u); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_00099F02: ;
    edi = edi;
    _fb = (uint32_t)(0x3000099E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3000099E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* sahf - store AH to flags */
    MEM32(eax) = MEM32(eax) | eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    /* sahf - store AH to flags */
    MEM32(eax) = MEM32(eax) | eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (_flags /* jp: parity */) (void)0; /* goto loc_00099EB0 - dead code, label not in function */

loc_00099F12: ;
    MEM32(eax) = MEM32(eax) | eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0x9C00099Eu;
    /* sahf - store AH to flags */
    MEM32(eax) = MEM32(eax) | eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMD(ebp + -1629487095) = fp_top(); fp_pop(); /* fstp */
    MEM32(eax) = MEM32(eax) | eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(7) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(0x7070707) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7070707;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    PUSH32(esp, 0 /* seg:es */);
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    PUSH32(esp, 0 /* seg:es */);
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00099FEDu); RECOMP_ABI_CALL(0x000935F0u, sub_000935F0); /* call 0x000935F0 */

loc_00099FED: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00099FE0
 * Original: 0x00099FE0 - 0x00099FF3 (19 bytes, 8 insns)
 * Folder: base (between: 0x000999A0 and 0x0009A000)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099FE0(void)
{

loc_00099FE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00099FEDu); RECOMP_ABI_CALL(0x000935F0u, sub_000935F0); /* call 0x000935F0 */

loc_00099FED: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A000
 * Original: 0x0009A000 - 0x0009A085 (133 bytes, 51 insns)
 * Folder: base (match: xbox-demo 0x0027E950, library)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A000: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x100;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    SET_LO8(eax, MEM8(ecx));
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A024; /* je: equal / zero */

loc_0009A018: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A072; /* je: equal / zero */

loc_0009A01C: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A018; /* jne: not equal / not zero */

loc_0009A024: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009A026: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A052; /* je: equal / zero */

loc_0009A02A: ;
    /* nop */

loc_0009A030: ;
    MEM8(eax) = 0x5C;
    ecx = eax;
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A04C; /* je: equal / zero */

loc_0009A03B: ;
    goto loc_0009A040;

    /* nop */

loc_0009A040: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A076; /* je: equal / zero */

loc_0009A044: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A040; /* jne: not equal / not zero */

loc_0009A04C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009A04E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A030; /* jne: not equal / not zero */

loc_0009A052: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009A05Cu); RECOMP_ABI_CALL(0x00331384u, sub_00331384); /* call 0x00331384 */

loc_0009A05C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A07A; /* je: equal / zero */

loc_0009A061: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A067u); RECOMP_ABI_CALL(0x00331BE8u, sub_00331BE8); /* call 0x00331BE8 */

loc_0009A067: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009A072: ;
    eax = ecx;
    goto loc_0009A026;

loc_0009A076: ;
    eax = ecx;
    goto loc_0009A04E;

loc_0009A07A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A090
 * Original: 0x0009A090 - 0x0009A0B4 (36 bytes, 13 insns)
 * Folder: base (match: xbox-demo 0x0027E9E0, library)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A090: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = esi + 0x100;
    PUSH32(esp, eax);
    MEM32(esp + 8) = ecx;
    PUSH32(esp, 0x0009A0A6u); RECOMP_ABI_CALL(0x00332005u, sub_00332005); /* call 0x00332005 */

loc_0009A0A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A0AF; /* jne: not equal / not zero */

loc_0009A0AA: ;
    PUSH32(esp, 0x0009A0AFu); RECOMP_ABI_CALL(0x00099DB0u, sub_00099DB0); /* call 0x00099DB0 */

loc_0009A0AF: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A0C0
 * Original: 0x0009A0C0 - 0x0009A1BD (253 bytes, 86 insns)
 * Folder: base (match: xbox-demo 0x0027EA10, library)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A0C0: ;
    ecx = MEM32(esp + 4);
    eax = esp + -576;
    _fb = (uint32_t)(0x240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x240;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x100;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x100;
    edx = 0xFF;
    PUSH32(esp, 0x0009A0E7u); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_0009A0E7: ;
    SET_LO8(ecx, MEM8(esp + 4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esp;
    if (CMP_EQ(_fa, _fb)) goto loc_0009A0FD; /* je: equal / zero */

loc_0009A0F5: ;
    SET_LO8(edx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A0F5; /* jne: not equal / not zero */

loc_0009A0FD: ;
    edx = esp;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A13B; /* jne: not equal / not zero */

loc_0009A107: ;
    _fa = (uint32_t)(MEM8(esp + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 1), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A13B; /* jne: not equal / not zero */

loc_0009A10E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x64 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A12D; /* je: equal / zero */

loc_0009A113: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x65) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x65 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A12D; /* je: equal / zero */

loc_0009A118: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x73) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x73 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009A122; /* jl: less (signed <) */

loc_0009A11D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7A (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009A12D; /* jle: less or equal (signed <=) */

loc_0009A122: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x240;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009A12D: ;
    eax = 1;
    _fb = (uint32_t)(0x240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x240;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009A13B: ;
    MEM8(esp + eax + -1) = 0;
    SET_LO8(eax, MEM8(esp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esp;
    if (CMP_EQ(_fa, _fb)) goto loc_0009A15C; /* je: equal / zero */

loc_0009A14A: ;
    /* nop */

loc_0009A150: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A1AA; /* je: equal / zero */

loc_0009A154: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A150; /* jne: not equal / not zero */

loc_0009A15C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009A15E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A182; /* je: equal / zero */

loc_0009A162: ;
    MEM8(eax) = 0x5C;
    ecx = eax;
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A17C; /* je: equal / zero */

loc_0009A16D: ;
    /* nop */

loc_0009A170: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A1AE; /* je: equal / zero */

loc_0009A174: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A170; /* jne: not equal / not zero */

loc_0009A17C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009A17E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A162; /* jne: not equal / not zero */

loc_0009A182: ;
    eax = esp + 0x100;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009A194u); RECOMP_ABI_CALL(0x00331384u, sub_00331384); /* call 0x00331384 */

loc_0009A194: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A1B2; /* je: equal / zero */

loc_0009A199: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A19Fu); RECOMP_ABI_CALL(0x00331BE8u, sub_00331BE8); /* call 0x00331BE8 */

loc_0009A19F: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x240;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009A1AA: ;
    eax = ecx;
    goto loc_0009A15E;

loc_0009A1AE: ;
    eax = ecx;
    goto loc_0009A17E;

loc_0009A1B2: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x240;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A290
 * Original: 0x0009A290 - 0x0009A2B6 (38 bytes, 14 insns)
 * Folder: base (library: 0x0009A1C0 and 0x0009A840)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A290: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = esi + 0x100;
    PUSH32(esp, eax);
    MEM32(esp + 8) = ecx;
    PUSH32(esp, 0x0009A2A6u); RECOMP_ABI_CALL(0x0033154Eu, sub_0033154E); /* call 0x0033154E */

loc_0009A2A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A2AF; /* jne: not equal / not zero */

loc_0009A2AA: ;
    PUSH32(esp, 0x0009A2AFu); RECOMP_ABI_CALL(0x00099DB0u, sub_00099DB0); /* call 0x00099DB0 */

loc_0009A2AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A2C0
 * Original: 0x0009A2C0 - 0x0009A3B2 (242 bytes, 90 insns)
 * Folder: base (library: 0x0009A1C0 and 0x0009A840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A2C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = esi + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = ebx;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x0009A2E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A2E0u); } /* indirect call */
    }

loc_0009A2E6: ;
    MEM32(esp + 0x14) = 0;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A334; /* je: equal / zero */

loc_0009A2F5: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax);
    edi = MEM32(ecx + 8);
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A334; /* jne: not equal / not zero */

loc_0009A304: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A32C; /* je: equal / zero */

loc_0009A30D: ;
    edx = MEM32(eax + 4);
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    PUSH32(esp, eax);
    MEM32(edx + 4) = ecx;
    PUSH32(esp, 0x0009A322u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_0009A322: ;
    eax = MEM32(esi + 0x4C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x4C) = eax;

loc_0009A32C: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0009A334u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A332u); } /* indirect call */
    }

loc_0009A334: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A398; /* je: equal / zero */

loc_0009A33B: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(eax);
    edi = MEM32(ecx + 8);
    ecx = eax;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A36A; /* je: equal / zero */

loc_0009A34B: ;
    edx = MEM32(eax + 4);
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    PUSH32(esp, eax);
    MEM32(edx + 4) = ecx;
    PUSH32(esp, 0x0009A360u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_0009A360: ;
    eax = MEM32(esi + 0x40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x40) = eax;

loc_0009A36A: ;
    _fa = (uint32_t)(MEM32(edi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x38), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A38A; /* jne: not equal / not zero */

loc_0009A370: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x0009A377u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A371u); } /* indirect call */
    }

loc_0009A377: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0009A38A: ;
    _fa = (uint32_t)(MEM32(edi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x38), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A398; /* jne: not equal / not zero */

loc_0009A390: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0009A398u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A396u); } /* indirect call */
    }

loc_0009A398: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x0009A39Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A399u); } /* indirect call */
    }

loc_0009A39F: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009A3C0
 * Original: 0x0009A3C0 - 0x0009A429 (105 bytes, 37 insns)
 * Folder: base (library: 0x0009A1C0 and 0x0009A840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A3C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A3D0u); RECOMP_ABI_CALL(0x003373A0u, sub_003373A0); /* call 0x003373A0 */

loc_0009A3D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A427; /* jne: not equal / not zero */

loc_0009A3D7: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009A3E2u); RECOMP_ABI_CALL(0x003373A0u, sub_003373A0); /* call 0x003373A0 */

loc_0009A3E2: ;
    PUSH32(esp, 0x0009A3E7u); RECOMP_ABI_CALL(0x0009A2C0u, sub_0009A2C0); /* call 0x0009A2C0 */

loc_0009A3E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A400; /* je: equal / zero */

loc_0009A3EB: ;
    goto loc_0009A3F0;

    /* nop */

loc_0009A3F0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0009A3F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A3F4u); } /* indirect call */
    }

loc_0009A3F7: ;
    PUSH32(esp, 0x0009A3FCu); RECOMP_ABI_CALL(0x0009A2C0u, sub_0009A2C0); /* call 0x0009A2C0 */

loc_0009A3FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A3F0; /* jne: not equal / not zero */

loc_0009A400: ;
    eax = MEM32(0x46B1C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A40E; /* jne: not equal / not zero */

loc_0009A409: ;
    PUSH32(esp, 0x0009A40Eu); RECOMP_ABI_CALL(0x0009A530u, sub_0009A530); /* call 0x0009A530 */

loc_0009A40E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009A415u); RECOMP_ABI_CALL(0x003373CCu, sub_003373CC); /* call 0x003373CC */

loc_0009A415: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A420u); RECOMP_ABI_CALL(0x003373A0u, sub_003373A0); /* call 0x003373A0 */

loc_0009A420: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A3D7; /* je: equal / zero */

loc_0009A427: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009A430
 * Original: 0x0009A430 - 0x0009A44D (29 bytes, 10 insns)
 * Folder: base (library: 0x0009A1C0 and 0x0009A840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A430: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x0009A438u); RECOMP_ABI_CALL(0x0009A450u, sub_0009A450); /* call 0x0009A450 */

loc_0009A438: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A441u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_0009A441: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009A450
 * Original: 0x0009A450 - 0x0009A486 (54 bytes, 20 insns)
 * Folder: base (library: 0x0009A1C0 and 0x0009A840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A450: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    MEM32(ecx) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(ecx + 4) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    MEM32(esi + 8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0009A485; /* je: equal / zero */

loc_0009A469: ;
    PUSH32(esp, edi);
    /* nop */

loc_0009A470: ;
    edi = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A478u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_0009A478: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0009A470; /* jne: not equal / not zero */

loc_0009A484: ;
    POP32(esp, edi);

loc_0009A485: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009A490
 * Original: 0x0009A490 - 0x0009A498 (8 bytes, 2 insns)
 * Folder: base (library: 0x0009A1C0 and 0x0009A840)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A490: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00099890(); return; /* tail jmp 0x00099890 */

}

/**
 * sub_0009A4A0
 * Original: 0x0009A4A0 - 0x0009A4A9 (9 bytes, 4 insns)
 * Folder: base (library: 0x0009A1C0 and 0x0009A840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A4A0(void)
{

loc_0009A4A0: ;
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009A4A8u); RECOMP_ABI_CALL(0x00331BE8u, sub_00331BE8); /* call 0x00331BE8 */

loc_0009A4A8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009A4B0
 * Original: 0x0009A4B0 - 0x0009A4C7 (23 bytes, 5 insns)
 * Folder: base (library: 0x0009A1C0 and 0x0009A840)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A4B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A4B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A4BAu); RECOMP_ABI_CALL(0x00351663u, sub_00351663); /* call 0x00351663 */

loc_0009A4BA: ;
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_003373CC(); return; /* tail jmp 0x003373CC */

}

/**
 * sub_0009A4D0
 * Original: 0x0009A4D0 - 0x0009A4D7 (7 bytes, 2 insns)
 * Folder: base (library: 0x0009A1C0 and 0x0009A840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A4D0(void)
{

loc_0009A4D0: ;
    MEM32(ecx) = 0x41FDB8;
    esp += 4; return; /* ret */

}

/**
 * sub_0009A4E0
 * Original: 0x0009A4E0 - 0x0009A50C (44 bytes, 16 insns)
 * Folder: base (library: 0x0009A1C0 and 0x0009A840)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A4E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41FDB8;
    if (TEST_Z(_fa, _fb)) goto loc_0009A506; /* je: equal / zero */

loc_0009A4F0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A4FE; /* jne: not equal / not zero */

loc_0009A4F9: ;
    PUSH32(esp, 0x0009A4FEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0009A4FE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0009A506u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A503u); } /* indirect call */
    }

loc_0009A506: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A510
 * Original: 0x0009A510 - 0x0009A52B (27 bytes, 10 insns)
 * Folder: base (library: 0x0009A1C0 and 0x0009A840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A510: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A51E; /* jne: not equal / not zero */

loc_0009A519: ;
    PUSH32(esp, 0x0009A51Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0009A51E: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0009A52Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A527u); } /* indirect call */
    }

loc_0009A52A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009A530
 * Original: 0x0009A530 - 0x0009A5DD (173 bytes, 47 insns)
 * Folder: base (library: 0x0009A1C0 and 0x0009A840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A530: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368A46);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x46B1A8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A559; /* jne: not equal / not zero */

loc_0009A552: ;
    PUSH32(esp, 0x0009A557u); RECOMP_ABI_CALL(0x00096160u, sub_00096160); /* call 0x00096160 */

loc_0009A557: ;
    edi = eax;

loc_0009A559: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x0009A564u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A55Eu); } /* indirect call */
    }

loc_0009A564: ;
    MEM32(esp + 0x14) = 0;
    SET_LO8(ecx, MEM8(0x76BAB8));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009A5A1; /* jne: not equal / not zero */

loc_0009A57B: ;
    MEM32(0x76BAB8) = MEM32(0x76BAB8) | eax;
    _fa = (uint32_t)(MEM32(0x76BAB8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x46B1C0);
    esi = 0x76BAB4;
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0x0009A594u); RECOMP_ABI_CALL(0x0009A7D0u, sub_0009A7D0); /* call 0x0009A7D0 */

loc_0009A594: ;
    PUSH32(esp, 0x369BE0);
    PUSH32(esp, 0x0009A59Eu); RECOMP_ABI_CALL(0x003472BDu, sub_003472BD); /* call 0x003472BD */

loc_0009A59E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009A5A1: ;
    eax = MEM32(0x46B1C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A5BD; /* jne: not equal / not zero */

loc_0009A5AA: ;
    SET_LO8(eax, MEM8(0x758648));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A5BD; /* je: equal / zero */

loc_0009A5B3: ;
    ecx = 0x10;
    PUSH32(esp, 0x0009A5BDu); RECOMP_ABI_CALL(0x00098D40u, sub_00098D40); /* call 0x00098D40 */

loc_0009A5BD: ;
    esi = MEM32(0x46B1C0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x0009A5CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A5C4u); } /* indirect call */
    }

loc_0009A5CA: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009A5E0
 * Original: 0x0009A5E0 - 0x0009A610 (48 bytes, 22 insns)
 * Folder: base (library: 0x0009A1C0 and 0x0009A840)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A5E0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_0009A5FA; /* jne: not equal / not zero */

loc_0009A5F5: ;
    PUSH32(esp, 0x0009A5FAu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0009A5FA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0009A602u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A5FFu); } /* indirect call */
    }

loc_0009A602: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0009A605u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0009A603u); } /* indirect call */
    }

loc_0009A605: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A610
 * Original: 0x0009A610 - 0x0009A670 (96 bytes, 25 insns)
 * Folder: base (library: 0x0009A1C0 and 0x0009A840)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A610: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368708);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    MEM32(esp + 0xC) = 0;
    MEM32(esi) = 0x41FDBC;
    PUSH32(esp, 0x0009A63Du); RECOMP_ABI_CALL(0x000D6970u, sub_000D6970); /* call 0x000D6970 */

loc_0009A63D: ;
    ecx = MEM32(esp + 4);
    MEM32(esi + 8) = eax;
    MEM8(eax + 0x15) = 1;
    eax = MEM32(esi + 8);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 8);
    MEM32(eax) = eax;
    eax = MEM32(esi + 8);
    MEM32(eax + 8) = eax;
    MEM32(esi + 0xC) = 0;
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A670
 * Original: 0x0009A670 - 0x0009A69B (43 bytes, 16 insns)
 * Folder: base (library: 0x0009A1C0 and 0x0009A840)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A670: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009A678u); RECOMP_ABI_CALL(0x0009A6A0u, sub_0009A6A0); /* call 0x0009A6A0 */

loc_0009A678: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009A695; /* je: equal / zero */

loc_0009A67F: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A68D; /* jne: not equal / not zero */

loc_0009A688: ;
    PUSH32(esp, 0x0009A68Du); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0009A68D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0009A695u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A692u); } /* indirect call */
    }

loc_0009A695: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A6A0
 * Original: 0x0009A6A0 - 0x0009A713 (115 bytes, 33 insns)
 * Folder: base (library: 0x0009A1C0 and 0x0009A840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A6A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A6A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3688B8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 8) = edi;
    MEM32(edi) = 0x41FDBC;
    MEM32(esp + 0x18) = 0;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax);
    esi = edi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A6E2u); RECOMP_ABI_CALL(0x0009A9E0u, sub_0009A9E0); /* call 0x0009A9E0 */

loc_0009A6E2: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009A6EBu); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_0009A6EB: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = 0x41FDB8;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009A720
 * Original: 0x0009A720 - 0x0009A77B (91 bytes, 36 insns)
 * Folder: base (library: 0x0009A1C0 and 0x0009A840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A720: ;
    ecx = MEM32(edx + 8);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A746; /* jne: not equal / not zero */

loc_0009A731: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009A73B; /* jae: above or equal (unsigned >=) */

loc_0009A736: ;
    eax = MEM32(eax + 8);
    goto loc_0009A73F;

loc_0009A73B: ;
    ecx = eax;
    eax = MEM32(eax);

loc_0009A73F: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A731; /* je: equal / zero */

loc_0009A746: ;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0009A75C; /* je: equal / zero */

loc_0009A751: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0009A75C; /* jb: below (unsigned <) */

loc_0009A756: ;
    eax = esp + 4;
    goto loc_0009A764;

loc_0009A75C: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;

loc_0009A764: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 8) (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0009A777; /* je: equal / zero */

loc_0009A76C: ;
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A777u); RECOMP_ABI_CALL(0x003373A0u, sub_003373A0); /* call 0x003373A0 */

loc_0009A777: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009A780
 * Original: 0x0009A780 - 0x0009A7C2 (66 bytes, 24 insns)
 * Folder: base (library: 0x0009A1C0 and 0x0009A840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A780: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x0009A78Eu); RECOMP_ABI_CALL(0x0009AA60u, sub_0009AA60); /* call 0x0009AA60 */

loc_0009A78E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A79A; /* je: equal / zero */

loc_0009A793: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009A7BA; /* jae: above or equal (unsigned >=) */

loc_0009A79A: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    esi = esp + 8;
    ecx = edi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0009A7B8u); RECOMP_ABI_CALL(0x0009A8B0u, sub_0009A8B0); /* call 0x0009A8B0 */

loc_0009A7B8: ;
    eax = MEM32(eax);

loc_0009A7BA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009A7D0
 * Original: 0x0009A7D0 - 0x0009A835 (101 bytes, 29 insns)
 * Folder: base (library: 0x0009A1C0 and 0x0009A840)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A7D0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368A1B);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = esp;
    MEM32(esi) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A7F9; /* jne: not equal / not zero */

loc_0009A7F4: ;
    PUSH32(esp, 0x0009A7F9u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0009A7F9: ;
    edx = 0x10;
    ecx = eax;
    PUSH32(esp, 0x0009A805u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0009A805: ;
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0009A81D; /* je: equal / zero */

loc_0009A815: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009A81Bu); RECOMP_ABI_CALL(0x0009A610u, sub_0009A610); /* call 0x0009A610 */

loc_0009A81B: ;
    goto loc_0009A81F;

loc_0009A81D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009A81F: ;
    ecx = MEM32(esi);
    MEM32(ecx) = eax;
    ecx = MEM32(esp);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A840
 * Original: 0x0009A840 - 0x0009A8B0 (112 bytes, 34 insns)
 * Folder: base (match: xbox-demo 0x00273290, library)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A840: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x46B1A8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A868; /* jne: not equal / not zero */

loc_0009A861: ;
    PUSH32(esp, 0x0009A866u); RECOMP_ABI_CALL(0x00096160u, sub_00096160); /* call 0x00096160 */

loc_0009A866: ;
    esi = eax;

loc_0009A868: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 8) = esi;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x0009A873u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A86Du); } /* indirect call */
    }

loc_0009A873: ;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A897; /* je: equal / zero */

loc_0009A887: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0009A897; /* je: equal / zero */

loc_0009A891: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0009A897u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A895u); } /* indirect call */
    }

loc_0009A897: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x0009A89Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A898u); } /* indirect call */
    }

loc_0009A89E: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}
