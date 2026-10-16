/**
 * PoP SoT xbox-retail - Recompiled code chunk 43
 * Functions: 250 (0x0035EED8 - 0x0036681A)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0035EED8
 * Original: 0x0035EED8 - 0x0035EEF0 (24 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035EED8(void)
{

loc_0035EED8: ;
    PUSH32(esp, 0x35EEA9);
    PUSH32(esp, 0x35EE7A);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0035EEEDu); RECOMP_ABI_CALL(0x0035D801u, sub_0035D801); /* call 0x0035D801 */

loc_0035EEED: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035EEF0
 * Original: 0x0035EEF0 - 0x0035EF0B (27 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035EEF0(void)
{

loc_0035EEF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax) = 0x7FFFFFFF;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035EF0B
 * Original: 0x0035EF0B - 0x0035EF46 (59 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035EF0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035EF0B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035EF2Cu); RECOMP_ABI_CALL(0x0035D85Eu, sub_0035D85E); /* call 0x0035D85E */

loc_0035EF2C: ;
    eax = MEM32(esi + 0xC);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + 0xC); PUSH32(esp, 0x0035EF41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035EF3Eu); } /* indirect call */
    }

loc_0035EF41: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0035EF46
 * Original: 0x0035EF46 - 0x0035EF81 (59 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035EF46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035EF46: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035EF67u); RECOMP_ABI_CALL(0x0035D85Eu, sub_0035D85E); /* call 0x0035D85E */

loc_0035EF67: ;
    eax = MEM32(esi + 0xC);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + 0xC); PUSH32(esp, 0x0035EF7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035EF79u); } /* indirect call */
    }

loc_0035EF7C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0035EF81
 * Original: 0x0035EF81 - 0x0035EFBC (59 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035EF81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035EF81: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035EFA2u); RECOMP_ABI_CALL(0x0035D85Eu, sub_0035D85E); /* call 0x0035D85E */

loc_0035EFA2: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + 0xC); PUSH32(esp, 0x0035EFB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035EFB4u); } /* indirect call */
    }

loc_0035EFB7: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0035EFBC
 * Original: 0x0035EFBC - 0x0035EFF7 (59 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035EFBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035EFBC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035EFDDu); RECOMP_ABI_CALL(0x0035D85Eu, sub_0035D85E); /* call 0x0035D85E */

loc_0035EFDD: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + 0xC); PUSH32(esp, 0x0035EFF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035EFEFu); } /* indirect call */
    }

loc_0035EFF2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0035EFF7
 * Original: 0x0035EFF7 - 0x0035F000 (9 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035EFF7(void)
{

loc_0035EFF7: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035F000
 * Original: 0x0035F000 - 0x0035F009 (9 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035F000(void)
{

loc_0035F000: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035F009
 * Original: 0x0035F009 - 0x0035F021 (24 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035F009(void)
{

loc_0035F009: ;
    PUSH32(esp, 0x35F000);
    PUSH32(esp, 0x35EFF7);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0035F01Eu); RECOMP_ABI_CALL(0x0035D801u, sub_0035D801); /* call 0x0035D801 */

loc_0035F01E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035F021
 * Original: 0x0035F021 - 0x0035F0A6 (133 bytes, 57 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035F021(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F021: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    ecx = MEM32(esi + 4);
    if (CMP_LE(_fas, _fbs)) goto loc_0035F04D; /* jle: less or equal (signed <=) */

loc_0035F033: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0035F098; /* jg: greater (signed >) */

loc_0035F037: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0035F044; /* jge: greater or equal (signed >=) */

loc_0035F039: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F042u); RECOMP_ABI_CALL(0x0035EF0Bu, sub_0035EF0B); /* call 0x0035EF0B */

loc_0035F042: ;
    goto loc_0035F055;

loc_0035F044: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035F0A1; /* jge: greater or equal (signed >=) */

loc_0035F04B: ;
    goto loc_0035F098;

loc_0035F04D: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0035F069; /* jge: greater or equal (signed >=) */

loc_0035F04F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0035F039; /* jg: greater (signed >) */

loc_0035F053: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0035F060; /* jge: greater or equal (signed >=) */

loc_0035F055: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F05Eu); RECOMP_ABI_CALL(0x0035EF46u, sub_0035EF46); /* call 0x0035EF46 */

loc_0035F05E: ;
    goto loc_0035F0A1;

loc_0035F060: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035F0A1; /* jle: less or equal (signed <=) */

loc_0035F067: ;
    goto loc_0035F055;

loc_0035F069: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035F075; /* jle: less or equal (signed <=) */

loc_0035F06D: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    goto loc_0035F096;

loc_0035F075: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0035F081; /* jge: greater or equal (signed >=) */

loc_0035F077: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035F0A1; /* jge: greater or equal (signed >=) */

loc_0035F07F: ;
    goto loc_0035F055;

loc_0035F081: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035F091; /* jle: less or equal (signed <=) */

loc_0035F08A: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035F055; /* jl: less (signed <) */

loc_0035F08F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */

loc_0035F091: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0035F0A1; /* jge: greater or equal (signed >=) */

loc_0035F093: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */

loc_0035F096: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0035F0A1; /* jle: less or equal (signed <=) */

loc_0035F098: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F0A1u); RECOMP_ABI_CALL(0x0035EF0Bu, sub_0035EF0B); /* call 0x0035EF0B */

loc_0035F0A1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0035F0A6
 * Original: 0x0035F0A6 - 0x0035F12D (135 bytes, 57 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035F0A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F0A6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    ecx = MEM32(esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0035F0D2; /* jge: greater or equal (signed >=) */

loc_0035F0B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035F11F; /* jl: less (signed <) */

loc_0035F0BB: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0035F0C8; /* jle: less or equal (signed <=) */

loc_0035F0BD: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F0C6u); RECOMP_ABI_CALL(0x0035EF81u, sub_0035EF81); /* call 0x0035EF81 */

loc_0035F0C6: ;
    goto loc_0035F0DA;

loc_0035F0C8: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035F128; /* jge: greater or equal (signed >=) */

loc_0035F0D0: ;
    goto loc_0035F11F;

loc_0035F0D2: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0035F0EF; /* jle: less or equal (signed <=) */

loc_0035F0D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035F0BD; /* jl: less (signed <) */

loc_0035F0D8: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0035F0E5; /* jle: less or equal (signed <=) */

loc_0035F0DA: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F0E3u); RECOMP_ABI_CALL(0x0035EFBCu, sub_0035EFBC); /* call 0x0035EFBC */

loc_0035F0E3: ;
    goto loc_0035F128;

loc_0035F0E5: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035F128; /* jle: less or equal (signed <=) */

loc_0035F0ED: ;
    goto loc_0035F0DA;

loc_0035F0EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035F0FB; /* jge: greater or equal (signed >=) */

loc_0035F0F3: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    goto loc_0035F11D;

loc_0035F0FB: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0035F107; /* jle: less or equal (signed <=) */

loc_0035F0FD: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035F128; /* jge: greater or equal (signed >=) */

loc_0035F105: ;
    goto loc_0035F0DA;

loc_0035F107: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035F118; /* jle: less or equal (signed <=) */

loc_0035F111: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035F0DA; /* jl: less (signed <) */

loc_0035F116: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */

loc_0035F118: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0035F128; /* jge: greater or equal (signed >=) */

loc_0035F11A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */

loc_0035F11D: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0035F128; /* jle: less or equal (signed <=) */

loc_0035F11F: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F128u); RECOMP_ABI_CALL(0x0035EF81u, sub_0035EF81); /* call 0x0035EF81 */

loc_0035F128: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0035F12D
 * Original: 0x0035F12D - 0x0035F1BE (145 bytes, 60 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035F12D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F12D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xC);
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 0x3F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_0035F16D; /* jne: not equal / not zero */

loc_0035F149: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F152; /* jne: not equal / not zero */

loc_0035F14E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F1B5; /* je: equal / zero */

loc_0035F152: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x7FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F162; /* jne: not equal / not zero */

loc_0035F15A: ;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = edi;
    goto loc_0035F16D;

loc_0035F162: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F16Du); RECOMP_ABI_CALL(0x0035F021u, sub_0035F021); /* call 0x0035F021 */

loc_0035F16D: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0035F1A4; /* jne: not equal / not zero */

loc_0035F173: ;
    eax = MEM32(esi + 8);
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 0x3F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F1A4; /* jne: not equal / not zero */

loc_0035F180: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F189; /* jne: not equal / not zero */

loc_0035F184: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F1B5; /* je: equal / zero */

loc_0035F189: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x7FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F199; /* jne: not equal / not zero */

loc_0035F191: ;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = edi;
    goto loc_0035F1A4;

loc_0035F199: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F1A4u); RECOMP_ABI_CALL(0x0035F0A6u, sub_0035F0A6); /* call 0x0035F0A6 */

loc_0035F1A4: ;
    eax = MEM32(esi + 8);
    MEM32(esi) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = edi;

loc_0035F1B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0035F1BE
 * Original: 0x0035F1BE - 0x0035F202 (68 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035F1BE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F1BE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    SET_LO8(eax, LO8(eax) & 0x3F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F1DC; /* jne: not equal / not zero */

loc_0035F1CC: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035F1DCu); RECOMP_ABI_CALL(0x0035F021u, sub_0035F021); /* call 0x0035F021 */

loc_0035F1DC: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0035F1FC; /* jne: not equal / not zero */

loc_0035F1E3: ;
    eax = MEM32(esi + 8);
    SET_LO8(eax, LO8(eax) & 0x3F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F1FC; /* jne: not equal / not zero */

loc_0035F1EC: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035F1FCu); RECOMP_ABI_CALL(0x0035F0A6u, sub_0035F0A6); /* call 0x0035F0A6 */

loc_0035F1FC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0035F202
 * Original: 0x0035F202 - 0x0035F234 (50 bytes, 15 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035F202(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F202: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    MEM32(eax + 0xAC) = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + 0x18);
    MEM32(eax + 0xB4) = ecx;
    ecx = MEM32(ebp + 0x14);
    MEM32(eax + 0xB0) = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xB8) = ecx;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0035F234
 * Original: 0x0035F234 - 0x0035F251 (29 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035F234(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F234: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xAC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0035F251
 * Original: 0x0035F251 - 0x0035F26E (29 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035F251(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F251: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0035F26E
 * Original: 0x0035F26E - 0x0035F2C7 (89 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035F26E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F26E: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(esi + eax * 2 + -2);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035F2BF; /* jle: less or equal (signed <=) */

loc_0035F288: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);

loc_0035F28B: ;
    eax = MEM32(ecx + 0x34);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 4) = MEM16(eax + 4) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(eax + 2) = MEM16(eax + 2) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(eax) = MEM16(eax) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(eax + 6) = MEM16(eax + 6) & 0;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    ebx = MEM32(ecx + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(ebx + eax * 2 + -2);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035F28B; /* jl: less (signed <) */

loc_0035F2BE: ;
    POP32(esp, ebx);

loc_0035F2BF: ;
    MEM32(ecx + 0x30) = MEM32(ecx + 0x30) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035F2C7
 * Original: 0x0035F2C7 - 0x0035F343 (124 bytes, 57 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035F2C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F2C7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0035F2D6; /* jns: not sign (positive) */

loc_0035F2D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0035F33E;

loc_0035F2D6: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0x34);
    eax = eax + eax * 2;
    PUSH32(esp, esi);
    esi = ecx + eax * 4;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F335; /* je: equal / zero */

loc_0035F2F0: ;
    SET_LO16(ecx, MEM16(esi + 2));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFFFFFFu (16-bit) */
    eax = SX16(LO16(eax));
    if (CMP_NE(_fa, _fb)) goto loc_0035F305; /* jne: not equal / not zero */

loc_0035F2FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F339; /* je: equal / zero */

loc_0035F302: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0035F326;

loc_0035F305: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F339; /* je: equal / zero */

loc_0035F30A: ;
    ecx = SX16(LO16(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F339; /* je: equal / zero */

loc_0035F312: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F31Eu); RECOMP_ABI_CALL(0x0035F2C7u, sub_0035F2C7); /* call 0x0035F2C7 */

loc_0035F31E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F339; /* jne: not equal / not zero */

loc_0035F322: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 2);

loc_0035F326: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F331u); RECOMP_ABI_CALL(0x0035F2C7u, sub_0035F2C7); /* call 0x0035F2C7 */

loc_0035F331: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F339; /* jne: not equal / not zero */

loc_0035F335: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0035F33C;

loc_0035F339: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0035F33C: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0035F33E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0035F343
 * Original: 0x0035F343 - 0x0035F441 (254 bytes, 87 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035F343(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F343: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035F43C; /* jl: less (signed <) */

loc_0035F352: ;
    edx = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    ecx = MEM32(edx + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(ecx + eax * 2 + -2);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035F43C; /* jge: greater or equal (signed >=) */

loc_0035F36C: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035F43B; /* jl: less (signed <) */

loc_0035F378: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035F43B; /* jge: greater or equal (signed >=) */

loc_0035F380: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F43B; /* je: equal / zero */

loc_0035F388: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F393u); RECOMP_ABI_CALL(0x0035F2C7u, sub_0035F2C7); /* call 0x0035F2C7 */

loc_0035F393: ;
    ecx = MEM32(edx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = edi + edi * 2;
    if (CMP_EQ(_fa, _fb)) goto loc_0035F3A9; /* je: equal / zero */

loc_0035F39D: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + ecx + 6;
    MEM8(ecx) = MEM8(ecx) | 1;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0035F3EE;

loc_0035F3A9: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM16(ecx + eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + eax), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F3EE; /* jne: not equal / not zero */

loc_0035F3B3: ;
    ebx = esi + esi * 2;
    ecx = (uint32_t)(int32_t)SMEM16(ecx + ebx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F3DE; /* je: equal / zero */

loc_0035F3BF: ;
    edi = MEM32(edx + 0x10);

loc_0035F3C2: ;
    ebx = MEM32(edi + esi * 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + ecx * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + ecx * 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F3DB; /* jne: not equal / not zero */

loc_0035F3CA: ;
    esi = ecx;
    ebx = ecx + ecx * 2;
    ecx = MEM32(edx + 0x34);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + ebx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F3C2; /* jne: not equal / not zero */

loc_0035F3DB: ;
    edi = MEM32(ebp + 0x14);

loc_0035F3DE: ;
    ecx = MEM32(edx + 0x34);
    MEM16(eax + ecx) = LO16(esi);
    ecx = MEM32(edx + 0x34);
    MEM16(eax + ecx + 2) = MEM16(eax + ecx + 2) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + ecx + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0035F3EE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F43A; /* jne: not equal / not zero */

loc_0035F3F4: ;
    ecx = MEM32(edx + 0x34);
    ebx = esi + esi * 2;
    ebx = ecx + ebx * 4;
    _fa = (uint32_t)(MEM16(ebx + 4)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 4), 0xFFFFFFFFu (16-bit) */
    MEM32(ebp + 0x14) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0035F43A; /* jne: not equal / not zero */

loc_0035F407: ;
    ebx = (uint32_t)(int32_t)SMEM16(ecx + eax + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F43A; /* je: equal / zero */

loc_0035F410: ;
    ebx = MEM32(ebp + 0x14);
    ebx = (uint32_t)(int32_t)SMEM16(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F433; /* je: equal / zero */

loc_0035F41B: ;
    ebx = ebx + ebx * 2;
    ecx = (uint32_t)(int32_t)SMEM16(ecx + ebx * 4 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F433; /* jne: not equal / not zero */

loc_0035F427: ;
    ecx = MEM32(edx + 0x34);
    eax = eax + ecx + 6;
    MEM8(eax) = MEM8(eax) | 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0035F43A;

loc_0035F433: ;
    eax = MEM32(ebp + 0x14);
    MEM16(eax + 4) = LO16(edi);

loc_0035F43A: ;
    POP32(esp, ebx);

loc_0035F43B: ;
    POP32(esp, edi);

loc_0035F43C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0035F441
 * Original: 0x0035F441 - 0x0035F4E3 (162 bytes, 64 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035F441(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F441: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035F4DF; /* jl: less (signed <) */

loc_0035F44E: ;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    ecx = MEM32(edx + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(ecx + eax * 2 + -2);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035F4DF; /* jge: greater or equal (signed >=) */

loc_0035F465: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035F4DE; /* jl: less (signed <) */

loc_0035F46E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035F4DE; /* jge: greater or equal (signed >=) */

loc_0035F472: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035F4DD; /* jl: less (signed <) */

loc_0035F47B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035F4DD; /* jge: greater or equal (signed >=) */

loc_0035F47F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F4DD; /* je: equal / zero */

loc_0035F483: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F4DD; /* je: equal / zero */

loc_0035F487: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F4DD; /* je: equal / zero */

loc_0035F48B: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035F495u); RECOMP_ABI_CALL(0x0035F2C7u, sub_0035F2C7); /* call 0x0035F2C7 */

loc_0035F495: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F4D0; /* jne: not equal / not zero */

loc_0035F499: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035F4A3u); RECOMP_ABI_CALL(0x0035F2C7u, sub_0035F2C7); /* call 0x0035F2C7 */

loc_0035F4A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F4D0; /* jne: not equal / not zero */

loc_0035F4A7: ;
    ecx = MEM32(edx + 0x34);
    eax = esi + esi * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F4DD; /* jne: not equal / not zero */

loc_0035F4B8: ;
    _fa = (uint32_t)(MEM16(ecx + 2)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 2), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F4DD; /* jne: not equal / not zero */

loc_0035F4BF: ;
    ecx = MEM32(edx + 0x34);
    MEM16(eax + ecx) = LO16(ebx);
    ecx = MEM32(edx + 0x34);
    MEM16(ecx + eax + 2) = LO16(edi);
    goto loc_0035F4DD;

loc_0035F4D0: ;
    ecx = MEM32(edx + 0x34);
    eax = esi + esi * 2;
    eax = ecx + eax * 4 + 6;
    MEM8(eax) = MEM8(eax) | 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0035F4DD: ;
    POP32(esp, esi);

loc_0035F4DE: ;
    POP32(esp, edi);

loc_0035F4DF: ;
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0035F4E3
 * Original: 0x0035F4E3 - 0x0035F558 (117 bytes, 51 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035F4E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F4E3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F554; /* je: equal / zero */

loc_0035F4EE: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 8);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(esi + ecx);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx + esi) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035F518; /* jge: greater or equal (signed >=) */

loc_0035F50B: ;
    ebx = MEM32(esi + ecx);
    ecx = MEM32(esi + edx);
    esi = eax;
    eax = MEM32(ebp + 0x1C);
    goto loc_0035F521;

loc_0035F518: ;
    ebx = MEM32(esi + edx);
    ecx = MEM32(esi + ecx);
    esi = MEM32(ebp + 0x1C);

loc_0035F521: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    edx = MEM32(ebp + 0x10);
    MEM32(ebp + 0x1C) = eax;
    eax = MEM32(edi + 8);
    edx = MEM32(eax + edx * 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0035F547; /* je: equal / zero */

loc_0035F531: ;
    eax = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x1C));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    goto loc_0035F551;

loc_0035F547: ;
    eax = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_0035F551: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0035F554: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0035F558
 * Original: 0x0035F558 - 0x0035F6FC (420 bytes, 148 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035F558(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F558: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F56B; /* jne: not equal / not zero */

loc_0035F564: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0035F6F8;

loc_0035F56B: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi + 0x34);
    eax = edx + edx * 2;
    PUSH32(esp, edi);
    edi = ecx + eax * 4;
    SET_LO16(eax, MEM16(edi + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0035F588; /* je: equal / zero */

loc_0035F581: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0035F6F6;

loc_0035F588: ;
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    MEM16(edi + 6) = LO16(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_0035F6EF; /* jne: not equal / not zero */

loc_0035F597: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(ecx + eax * 2 + -2);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    PUSH32(esp, ebx);
    ebx = 0x10000;
    if (CMP_G(_fas, _fbs)) goto loc_0035F5BE; /* jg: greater (signed >) */

loc_0035F5AD: ;
    SET_LO16(ecx, MEM16(edi));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F5DA; /* jne: not equal / not zero */

loc_0035F5B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebp + 0x10)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x10), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F62A; /* je: equal / zero */

loc_0035F5BE: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x24);
    eax = MEM32(eax + 0x170);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax + edx * 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F5D8u); RECOMP_ABI_CALL(0x0035CAD5u, sub_0035CAD5); /* call 0x0035CAD5 */

loc_0035F5D8: ;
    goto loc_0035F62A;

loc_0035F5DA: ;
    SET_LO16(eax, MEM16(edi + 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F5F6; /* jne: not equal / not zero */

loc_0035F5E4: ;
    eax = SX16(LO16(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F5F4u); RECOMP_ABI_CALL(0x0035F558u, sub_0035F558); /* call 0x0035F558 */

loc_0035F5F4: ;
    goto loc_0035F62A;

loc_0035F5F6: ;
    eax = SX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F606u); RECOMP_ABI_CALL(0x0035F558u, sub_0035F558); /* call 0x0035F558 */

loc_0035F606: ;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F617u); RECOMP_ABI_CALL(0x0035F558u, sub_0035F558); /* call 0x0035F558 */

loc_0035F617: ;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(edi + 2);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = (uint32_t)(int32_t)SMEM16(edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F62Au); RECOMP_ABI_CALL(0x0035F4E3u, sub_0035F4E3); /* call 0x0035F4E3 */

loc_0035F62A: ;
    _fa = (uint32_t)(MEM8(edi + 6)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 6), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0035F6EE; /* jne: not equal / not zero */

loc_0035F634: ;
    SET_LO16(ecx, MEM16(edi + 4));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F6AC; /* je: equal / zero */

loc_0035F63E: ;
    edx = MEM32(esi + 0x34);
    ecx = SX16(LO16(ecx));
    MEM32(ebp + 0xC) = ecx;
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 4;
    _fa = (uint32_t)(MEM8(ecx + 6)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 6), 2 (8-bit) */
    MEM32(ebp + -4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0035F6AC; /* jne: not equal / not zero */

loc_0035F656: ;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F663; /* je: equal / zero */

loc_0035F65C: ;
    _fa = (uint32_t)(MEM16(edi + 2)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 2), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F68E; /* jne: not equal / not zero */

loc_0035F663: ;
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0x170);
    eax = MEM32(esi);
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x20000);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    ecx = MEM32(eax + ecx * 4);
    _fb = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + edx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F68Bu); RECOMP_ABI_CALL(0x0035CAD5u, sub_0035CAD5); /* call 0x0035CAD5 */

loc_0035F68B: ;
    ecx = MEM32(ebp + -4);

loc_0035F68E: ;
    edx = MEM32(esi);
    ebx = MEM32(ebp + 0x14);
    edx = edx + ebx * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM16(edi + 4);
    esi = MEM32(esi);
    edx = esi + edx * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + 6) = MEM8(ecx + 6) | 2;
    _fa = (uint32_t)(MEM8(ecx + 6)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ecx + 8) = eax;
    goto loc_0035F6E7;

loc_0035F6AC: ;
    _fa = (uint32_t)(MEM16(ebp + 0x10)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x10), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F6D7; /* je: equal / zero */

loc_0035F6B3: ;
    _fa = (uint32_t)(MEM16(edi + 2)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 2), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F6D7; /* jne: not equal / not zero */

loc_0035F6BA: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x24);
    eax = MEM32(eax + 0x170);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax + ecx * 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F6D7u); RECOMP_ABI_CALL(0x0035CAD5u, sub_0035CAD5); /* call 0x0035CAD5 */

loc_0035F6D7: ;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F6E7; /* je: equal / zero */

loc_0035F6DD: ;
    ecx = MEM32(esi);
    edx = MEM32(ebp + 0x14);
    ecx = ecx + edx * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035F6E7: ;
    MEM8(edi + 6) = MEM8(edi + 6) | 2;
    _fa = (uint32_t)(MEM8(edi + 6)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(edi + 8) = eax;

loc_0035F6EE: ;
    POP32(esp, ebx);

loc_0035F6EF: ;
    MEM8(edi + 6) = MEM8(edi + 6) & 0xFB;
    _fa = (uint32_t)(MEM8(edi + 6)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(edi + 8);

loc_0035F6F6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0035F6F8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0035F6FC
 * Original: 0x0035F6FC - 0x0035F75D (97 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035F6FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F6FC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    ecx = MEM32(edi + 0x20);
    esi = (uint32_t)(int32_t)SMEM16(ecx + eax * 2 + -2);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035F72D; /* jle: less or equal (signed <=) */

loc_0035F71A: ;
    eax = MEM32(edi + 0x34);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035F720: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0035F72D; /* jne: not equal / not zero */

loc_0035F725: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035F720; /* jl: less (signed <) */

loc_0035F72D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0035F74F; /* jle: less or equal (signed <=) */

loc_0035F73D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F74Au); RECOMP_ABI_CALL(0x0035F558u, sub_0035F558); /* call 0x0035F558 */

loc_0035F74A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035F73D; /* jl: less (signed <) */

loc_0035F74F: ;
    MEM32(edi + 0x30) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0035F75D
 * Original: 0x0035F75D - 0x0035F78E (49 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035F75D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F75D: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035F780; /* jle: less or equal (signed <=) */

loc_0035F76B: ;
    eax = MEM32(eax + 0x20);
    PUSH32(esp, esi);

loc_0035F76F: ;
    esi = (uint32_t)(int32_t)SMEM16(eax);
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035F77F; /* jle: less or equal (signed <=) */

loc_0035F778: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035F76F; /* jl: less (signed <) */

loc_0035F77F: ;
    POP32(esp, esi);

loc_0035F780: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035F788; /* jge: greater or equal (signed >=) */

loc_0035F784: ;
    eax = edx;
    goto loc_0035F78B;

loc_0035F788: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0035F78B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0035F78E
 * Original: 0x0035F78E - 0x0035F936 (424 bytes, 159 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035F78E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F78E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F7A4u); RECOMP_ABI_CALL(0x0035F75Du, sub_0035F75D); /* call 0x0035F75D */

loc_0035F7A4: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -12) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0035F92D; /* jl: less (signed <) */

loc_0035F7B1: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F7BAu); RECOMP_ABI_CALL(0x0035F75Du, sub_0035F75D); /* call 0x0035F75D */

loc_0035F7BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035F92D; /* jl: less (signed <) */

loc_0035F7C2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F7FA; /* jne: not equal / not zero */

loc_0035F7C6: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x1C);
    eax = edi + edi;
    edx = (uint32_t)(int32_t)SMEM16(edx + eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    ecx = (uint32_t)(int32_t)SMEM16(ecx + eax);
    MEM32(ebp + 0xC) = ecx;
    MEM32(ebp + -4) = edx;
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0035F7E6; /* je: equal / zero */

loc_0035F7E3: ;
    eax = ebx + 1;

loc_0035F7E6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    ecx = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0035F7EF; /* je: equal / zero */

loc_0035F7EC: ;
    ecx = ebx + -1;

loc_0035F7EF: ;
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F802; /* je: equal / zero */

loc_0035F7F6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F802; /* je: equal / zero */

loc_0035F7FA: ;
    eax = MEM32(ebp + 0x14);
    goto loc_0035F92F;

loc_0035F802: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    edx = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0035F80C; /* je: equal / zero */

loc_0035F809: ;
    edx = edi + 1;

loc_0035F80C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0xC) (32-bit) */
    MEM32(ebp + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0035F81C; /* jne: not equal / not zero */

loc_0035F814: ;
    edx = MEM32(ebp + -4);
    MEM32(ebp + 0xC) = edx;
    goto loc_0035F820;

loc_0035F81C: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;

loc_0035F820: ;
    edx = MEM32(esi + 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x14) = eax;
    eax = MEM32(esi + 0x14);
    edi = ecx;
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ebx;
    MEM32(ebp + -4) = edi;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(ecx + edx);
    eax = MEM32(eax + ecx);
    MEM32(ebp + -8) = ebx;
    _fb = (uint32_t)(MEM32(edx + edi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(edx + edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x14);
    edi = MEM32(ebp + 0x14);
    edi = MEM32(edx + edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(MEM32(edx + edi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edx + edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(ebp + 0x14);
    edx = MEM32(esi + 0x10);
    edx = MEM32(edi + edx);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebp + -8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(esi + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    eax = MEM32(esi + 0x10);
    ebx = MEM32(ebp + 8);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -4) = edx;
    edx = MEM32(ebp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x14) = edx;
    edx = MEM32(ebp + 0x10);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edx + eax);
    MEM32(ebp + -8) = edx;
    edx = MEM32(edi + edx);
    MEM32(ebp + 0xC) = edx;
    MEM32(ebp + 0x10) = ebx;
    ebx = edx;
    edx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(MEM32(edi + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(edi + edx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x10);
    edi = MEM32(ebp + 0x10);
    edi = MEM32(edi + edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    edi = MEM32(ebp + 0x14);
    _fb = (uint32_t)(MEM32(edi + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi + edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x14);
    edi = MEM32(ebp + 0x10);
    edx = MEM32(edi + edx);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F92D; /* jne: not equal / not zero */

loc_0035F8D3: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(ebp + -8);
    edi = MEM32(eax + edx);
    _fb = (uint32_t)(MEM32(eax + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(eax + ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_0035F8E9; /* jns: not sign (positive) */

loc_0035F8E1: ;
    edi = MEM32(eax + ecx);
    _fb = (uint32_t)(MEM32(eax + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(eax + edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0035F8EF;

loc_0035F8E9: ;
    edi = MEM32(eax + edx);
    _fb = (uint32_t)(MEM32(eax + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(eax + ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0035F8EF: ;
    eax = MEM32(esi + 0x14);
    ebx = MEM32(eax + edx);
    _fb = (uint32_t)(MEM32(eax + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(eax + ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = eax;
    if ((_fas >= 0)) goto loc_0035F904; /* jns: not sign (positive) */

loc_0035F8FC: ;
    eax = MEM32(ebx + ecx);
    _fb = (uint32_t)(MEM32(ebx + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0035F90A;

loc_0035F904: ;
    eax = MEM32(ebx + edx);
    _fb = (uint32_t)(MEM32(ebx + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0035F90A: ;
    ecx = edi + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035F92D; /* jl: less (signed <) */

loc_0035F911: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(esi + 0x2C);
    eax = ZX8(MEM8(ecx + eax));
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    goto loc_0035F92F;

loc_0035F92D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035F92F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0035F936
 * Original: 0x0035F936 - 0x0035F973 (61 bytes, 25 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0035F936(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F936: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(esp + 8);
    ecx = MEM32(eax + ecx * 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035F956; /* jle: less or equal (signed <=) */

loc_0035F950: ;
    esi = ecx;
    ecx = eax;
    eax = esi;

loc_0035F956: ;
    esi = MEM32(esp + 0x10);
    edx = MEM32(edx + 0x10);
    edx = MEM32(edx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    POP32(esp, esi);
    if (CMP_G(_fas, _fbs)) goto loc_0035F96E; /* jg: greater (signed >) */

loc_0035F965: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0035F96E; /* jg: greater (signed >) */

loc_0035F969: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0035F970;

loc_0035F96E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035F970: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0035F973
 * Original: 0x0035F973 - 0x0035FA68 (245 bytes, 67 insns)
 * CC: cdecl, 13 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035F973(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F973: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(ecx + 0x18));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035F989; /* jne: not equal / not zero */

loc_0035F986: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0035F989: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    MEM32(eax + 8) = edx;
    edx = MEM32(ebp + 0x10);
    MEM32(eax + 4) = edx;
    edx = MEM32(ebp + 0x14);
    MEM32(eax + 0x94) = edx;
    edx = MEM32(ebp + 0x18);
    MEM32(eax + 0x98) = edx;
    edx = MEM32(ebp + 0x1C);
    esi = ZX16(LO16(esi));
    MEM32(eax) = edx;
    edx = edx + esi * 4;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x38);
    MEM32(eax + 0x158) = edi;
    MEM32(eax + 0x15C) = edx;
    SET_LO16(edx, MEM16(ecx + 6));
    SET_LO16(esi, MEM16(ecx + 0xA));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(esi) (16-bit) */
    POP32(esp, edi);
    edx = ZX16(LO16(edx));
    if (CMP_A(_fa, _fb)) goto loc_0035F9D9; /* ja: above (unsigned >) */

loc_0035F9D6: ;
    edx = ZX16(LO16(esi));

loc_0035F9D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x160) = edx;
    edx = MEM32(ebp + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F9FA; /* je: equal / zero */

loc_0035F9E9: ;
    MEM32(eax + 0xBC) = edx;
    edx = MEM32(ebp + 0x2C);
    MEM32(eax + 0xB8) = edx;
    goto loc_0035FA06;

loc_0035F9FA: ;
    MEM32(eax + 0xBC) = ebx;
    MEM32(eax + 0xB8) = ebx;

loc_0035FA06: ;
    edx = MEM32(ebp + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FA1E; /* je: equal / zero */

loc_0035FA0D: ;
    MEM32(eax + 0xB4) = edx;
    edx = MEM32(ebp + 0x34);
    MEM32(eax + 0xB0) = edx;
    goto loc_0035FA2A;

loc_0035FA1E: ;
    MEM32(eax + 0xB4) = ebx;
    MEM32(eax + 0xB0) = ebx;

loc_0035FA2A: ;
    MEM32(eax + 0x130) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x24));
    POP32(esp, esi);
    MEM8(eax + 0x12D) = LO8(ebx);
    MEM8(eax + 0x14D) = LO8(ebx);
    MEM16(eax + 0x134) = LO16(ecx);
    MEM8(eax + 0x14C) = 1;
    MEM32(eax + 0x150) = 0x2710;
    MEM32(eax + 0x154) = 0x64;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 56; return; /* ret 52 */

}

/**
 * sub_0035FA68
 * Original: 0x0035FA68 - 0x0035FA77 (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FA68(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FA68: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x6C);
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035FA77
 * Original: 0x0035FA77 - 0x0035FA94 (29 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FA77(void)
{

loc_0035FA77: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax + 0x6A));
    edx = MEM32(esp + 8);
    MEM16(edx) = LO16(ecx);
    SET_LO16(eax, MEM16(eax + 0x68));
    ecx = MEM32(esp + 0xC);
    MEM16(ecx) = LO16(eax);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035FA94
 * Original: 0x0035FA94 - 0x0035FABE (42 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FA94(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FA94: ;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    MEM8(eax + 0x12D) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0035FAB2; /* jne: not equal / not zero */

loc_0035FAA6: ;
    _fa = (uint32_t)(MEM8(eax + 0x14C)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x14C), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FAB2; /* je: equal / zero */

loc_0035FAAE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0035FAB5;

loc_0035FAB2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0035FAB5: ;
    MEM8(eax + 0x14D) = LO8(ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0035FABE
 * Original: 0x0035FABE - 0x0035FAE9 (43 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FABE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FABE: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 0x12D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x12D), 0 (8-bit) */
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(eax + 0x14C) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0035FADD; /* jne: not equal / not zero */

loc_0035FAD5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FADD; /* je: equal / zero */

loc_0035FAD9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0035FAE0;

loc_0035FADD: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0035FAE0: ;
    MEM8(eax + 0x14D) = LO8(ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0035FAE9
 * Original: 0x0035FAE9 - 0x0035FB67 (126 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0035FAE9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FAE9: ;
    eax = MEM32(esp + 4);
    MEM16(eax + 0x40) = 3;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0035FB09; /* je: equal / zero */

loc_0035FAFE: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0035FB09; /* je: equal / zero */

loc_0035FB04: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0035FB0B;

loc_0035FB09: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035FB0B: ;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ecx + 0x41E9F4);
    MEM32(eax + 0x3C) = ecx;
    ecx = 0x16C0A;
    _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0x38) = 0x40;
    MEM32(eax + 0x24) = 0x44;
    MEM32(eax + 0x28) = edx;
    MEM16(eax + 0x56) = LO16(edx);
    MEM8(eax + 0x58) = 1;
    MEM16(eax + 0x50) = 9;
    MEM16(eax + 0x52) = 3;
    MEM16(eax + 0x54) = 0x80;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(eax + 0x18) = ecx;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x1C) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0035FB67
 * Original: 0x0035FB67 - 0x0035FB78 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FB67(void)
{

loc_0035FB67: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x6C) = 0x1101;
    eax = MEM32(eax + 0x70);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035FB78
 * Original: 0x0035FB78 - 0x0035FC48 (208 bytes, 85 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035FB78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FB78: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = 0x7FFF;
    ecx = 0xFFFF8000u;
    if (CMP_NE(_fa, _fb)) goto loc_0035FBA7; /* jne: not equal / not zero */

loc_0035FB92: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035FBAF; /* jne: not equal / not zero */

loc_0035FB96: ;
    eax = MEM32(ebp + 0x10);
    MEM16(eax + 2) = MEM16(eax + 2) & LO16(ebx);
    _fa = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(eax) = 0x4000;
    goto loc_0035FC41;

loc_0035FBA7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035FBDB; /* jge: greater or equal (signed >=) */

loc_0035FBAB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035FBDB; /* jle: less or equal (signed <=) */

loc_0035FBAF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035FBDB; /* jge: greater or equal (signed >=) */

loc_0035FBB3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035FBDB; /* jle: less or equal (signed <=) */

loc_0035FBB7: ;
    esi = edi;
    eax = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    PUSH32(esp, 0xF);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    eax = 0x20000000;
    goto loc_0035FBD1;

loc_0035FBCD: ;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0035FBD1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035FBCD; /* jl: less (signed <) */

loc_0035FBD5: ;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0035FC0F;

loc_0035FBDB: ;
    eax = 0x20000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035FBFD; /* jge: greater or equal (signed >=) */

loc_0035FBE4: ;
    ecx = 0xE0000000u;

loc_0035FBE9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035FBFD; /* jle: less or equal (signed <=) */

loc_0035FBED: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035FBFD; /* jge: greater or equal (signed >=) */

loc_0035FBF1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035FBFD; /* jle: less or equal (signed <=) */

loc_0035FBF5: ;
    edi = edi << 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035FBE9; /* jl: less (signed <) */

loc_0035FBFD: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035FC04u); RECOMP_ABI_CALL(0x0035CCCBu, sub_0035CCCB); /* call 0x0035CCCB */

loc_0035FC04: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035FC0Du); RECOMP_ABI_CALL(0x0035CCCBu, sub_0035CCCB); /* call 0x0035CCCB */

loc_0035FC0D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035FC0F: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035FC15u); RECOMP_ABI_CALL(0x0035CD6Bu, sub_0035CD6B); /* call 0x0035CD6B */

loc_0035FC15: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035FC1Fu); RECOMP_ABI_CALL(0x0035CD45u, sub_0035CD45); /* call 0x0035CD45 */

loc_0035FC1F: ;
    PUSH32(esp, MEM32(ebp + 8));
    edi = MEM32(ebp + 0x10);
    esi = 0x8000;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, ebx);
    MEM16(edi) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035FC38u); RECOMP_ABI_CALL(0x0035CD45u, sub_0035CD45); /* call 0x0035CD45 */

loc_0035FC38: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(edi + 2) = LO16(eax);

loc_0035FC41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035FC48
 * Original: 0x0035FC48 - 0x0035FC76 (46 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0035FC48(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FC48: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_L(_fas, _fbs)) goto loc_0035FC5D; /* jl: less (signed <) */

loc_0035FC54: ;
    eax = ecx + eax + 0x10;
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0035FC67;

loc_0035FC5D: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0035FC67: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_0035FC73; /* jge: greater or equal (signed >=) */

loc_0035FC6D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FC73; /* je: equal / zero */

loc_0035FC71: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035FC73: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035FC76
 * Original: 0x0035FC76 - 0x0035FCA7 (49 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0035FC76(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FC76: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035FC90; /* jl: less (signed <) */

loc_0035FC87: ;
    eax = ecx + eax + 1;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0035FC98;

loc_0035FC90: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0035FC98: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_0035FCA4; /* jge: greater or equal (signed >=) */

loc_0035FC9E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FCA4; /* je: equal / zero */

loc_0035FCA2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035FCA4: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035FCA7
 * Original: 0x0035FCA7 - 0x0035FCD0 (41 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0035FCA7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FCA7: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_L(_fas, _fbs)) goto loc_0035FCBA; /* jl: less (signed <) */

loc_0035FCB3: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0035FCC1;

loc_0035FCBA: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0035FCC1: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_0035FCCD; /* jge: greater or equal (signed >=) */

loc_0035FCC7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FCCD; /* je: equal / zero */

loc_0035FCCB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035FCCD: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035FCD0
 * Original: 0x0035FCD0 - 0x0035FCFE (46 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0035FCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FCD0: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_L(_fas, _fbs)) goto loc_0035FCE5; /* jl: less (signed <) */

loc_0035FCDC: ;
    eax = ecx + eax + 0x3F;
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0035FCEF;

loc_0035FCE5: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0035FCEF: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_0035FCFB; /* jge: greater or equal (signed >=) */

loc_0035FCF5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FCFB; /* je: equal / zero */

loc_0035FCF9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035FCFB: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035FCFE
 * Original: 0x0035FCFE - 0x0035FD31 (51 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0035FCFE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FCFE: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035FD18; /* jl: less (signed <) */

loc_0035FD0F: ;
    eax = ecx + eax + 3;
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0035FD22;

loc_0035FD18: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0035FD22: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_0035FD2E; /* jge: greater or equal (signed >=) */

loc_0035FD28: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FD2E; /* je: equal / zero */

loc_0035FD2C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035FD2E: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035FD31
 * Original: 0x0035FD31 - 0x0035FD5F (46 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0035FD31(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FD31: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_L(_fas, _fbs)) goto loc_0035FD46; /* jl: less (signed <) */

loc_0035FD3D: ;
    eax = ecx + eax + 0x20;
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0035FD50;

loc_0035FD46: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0035FD50: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_0035FD5C; /* jge: greater or equal (signed >=) */

loc_0035FD56: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FD5C; /* je: equal / zero */

loc_0035FD5A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035FD5C: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035FD5F
 * Original: 0x0035FD5F - 0x0035FD91 (50 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0035FD5F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FD5F: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035FD79; /* jl: less (signed <) */

loc_0035FD70: ;
    eax = ecx + eax + 2;
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0035FD82;

loc_0035FD79: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0035FD82: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_0035FD8E; /* jge: greater or equal (signed >=) */

loc_0035FD88: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FD8E; /* je: equal / zero */

loc_0035FD8C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035FD8E: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035FD91
 * Original: 0x0035FD91 - 0x0035FDD0 (63 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FD91(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FD91: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035FDA7; /* jl: less (signed <) */

loc_0035FD99: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035FDB5;

loc_0035FDA7: ;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xFFFFFFE0u);
    edx = edx & 0xFFFFFFC0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0035FDB5: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_0035FDCD; /* jge: greater or equal (signed >=) */

loc_0035FDBB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FDCD; /* je: equal / zero */

loc_0035FDBF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035FDCD: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035FDD0
 * Original: 0x0035FDD0 - 0x0035FE12 (66 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FDD0: ;
    eax = MEM32(esp + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 8);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035FDED; /* jl: less (signed <) */

loc_0035FDE3: ;
    eax = edx + ecx;
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0035FDF7;

loc_0035FDED: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xFFFFFFFEu);
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0035FDF7: ;
    ecx = eax;
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_0035FE0F; /* jge: greater or equal (signed >=) */

loc_0035FDFD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FE0F; /* je: equal / zero */

loc_0035FE01: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    eax = eax * 4 + -2;

loc_0035FE0F: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035FE12
 * Original: 0x0035FE12 - 0x0035FE37 (37 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0035FE12(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FE12: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035FE22; /* jl: less (signed <) */

loc_0035FE1A: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035FE28;

loc_0035FE22: ;
    eax = ecx;
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0035FE28: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_0035FE34; /* jge: greater or equal (signed >=) */

loc_0035FE2E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FE34; /* je: equal / zero */

loc_0035FE32: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035FE34: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035FE37
 * Original: 0x0035FE37 - 0x0035FE62 (43 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0035FE37(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FE37: ;
    eax = MEM32(esp + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 8);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035FE4F; /* jl: less (signed <) */

loc_0035FE4A: ;
    eax = edx + ecx;
    goto loc_0035FE53;

loc_0035FE4F: ;
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0035FE53: ;
    ecx = eax;
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_0035FE5F; /* jge: greater or equal (signed >=) */

loc_0035FE59: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FE5F; /* je: equal / zero */

loc_0035FE5D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035FE5F: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035FE62
 * Original: 0x0035FE62 - 0x0035FEB5 (83 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FE62(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FE62: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x24);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x86);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x84);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035FE92; /* jl: less (signed <) */

loc_0035FE85: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035FE9F;

loc_0035FE92: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0035FE9F: ;
    edx = eax;
    edx = edx ^ esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_0035FEB1; /* jge: greater or equal (signed >=) */

loc_0035FEA5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FEB1; /* je: equal / zero */

loc_0035FEA9: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    if (CMP_G(_fas, _fbs)) goto loc_0035FEB1; /* jg: greater (signed >) */

loc_0035FEAF: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0035FEB1: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035FEB5
 * Original: 0x0035FEB5 - 0x0035FF43 (142 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FEB5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FEB5: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x24);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x84);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x86);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x24));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0035FF07; /* jl: less (signed <) */

loc_0035FEE0: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035FEECu); RECOMP_ABI_CALL(0x0035CBF5u, sub_0035CBF5); /* call 0x0035CBF5 */

loc_0035FEEC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x24));
    eax = SX16(LO16(eax));
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035FEFFu); RECOMP_ABI_CALL(0x0035CAF9u, sub_0035CAF9); /* call 0x0035CAF9 */

loc_0035FEFF: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035FF2E;

loc_0035FF07: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035FF13u); RECOMP_ABI_CALL(0x0035CBF5u, sub_0035CBF5); /* call 0x0035CBF5 */

loc_0035FF13: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x24));
    eax = SX16(LO16(eax));
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035FF26u); RECOMP_ABI_CALL(0x0035CAF9u, sub_0035CAF9); /* call 0x0035CAF9 */

loc_0035FF26: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0035FF2E: ;
    edx = eax;
    edx = edx ^ edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_0035FF3E; /* jge: greater or equal (signed >=) */

loc_0035FF34: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FF3E; /* je: equal / zero */

loc_0035FF38: ;
    if (CMP_G(_fas, _fbs)) goto loc_0035FF3C; /* jg: greater (signed >) */

loc_0035FF3A: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0035FF3C: ;
    eax = ecx;

loc_0035FF3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035FF43
 * Original: 0x0035FF43 - 0x0036001C (217 bytes, 82 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035FF43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FF43: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(eax + 0x10));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax + 0x44));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x4000 (16-bit) */
    SET_LO16(eax, MEM16(eax + 0x12));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = edx;
    MEM16(ebp + 8) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0035FFD6; /* je: equal / zero */

loc_0035FF6F: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FFA5; /* je: equal / zero */

loc_0035FF74: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(ecx) (16-bit) */
    eax = MEM32(edi);
    if (CMP_NE(_fa, _fb)) goto loc_0035FF85; /* jne: not equal / not zero */

loc_0035FF7B: ;
    ecx = MEM32(ebp + 0x14);
    eax = eax + esi * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035FF9D;

loc_0035FF85: ;
    ebx = eax + esi * 4;
    eax = SX16(LO16(edx));
    PUSH32(esp, eax);
    eax = SX16(LO16(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035FF98u); RECOMP_ABI_CALL(0x0035CAD5u, sub_0035CAD5); /* call 0x0035CAD5 */

loc_0035FF98: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx) = MEM32(ebx) + eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + -4);

loc_0035FF9D: ;
    eax = MEM32(edi + 0x24);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0035FFA5: ;
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00360015; /* je: equal / zero */

loc_0035FFAC: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ebp + 8) (16-bit) */
    eax = MEM32(edi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0035FFBF; /* jne: not equal / not zero */

loc_0035FFB5: ;
    ecx = MEM32(ebp + 0x14);
    eax = eax + esi * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0036000D;

loc_0035FFBF: ;
    ebx = eax + esi * 4;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035FFD4u); RECOMP_ABI_CALL(0x0035CAD5u, sub_0035CAD5); /* call 0x0035CAD5 */

loc_0035FFD4: ;
    goto loc_0036000B;

loc_0035FFD6: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FFF3; /* je: equal / zero */

loc_0035FFDB: ;
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    ebx = eax + esi * 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035FFE9u); RECOMP_ABI_CALL(0x0035CAF9u, sub_0035CAF9); /* call 0x0035CAF9 */

loc_0035FFE9: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx) = MEM32(ebx) + eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 0x24);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0035FFF3: ;
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00360015; /* je: equal / zero */

loc_0035FFFA: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(edi + 4);
    PUSH32(esp, MEM32(ebp + 0x14));
    ebx = eax + esi * 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036000Bu); RECOMP_ABI_CALL(0x0035CAF9u, sub_0035CAF9); /* call 0x0035CAF9 */

loc_0036000B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx) = MEM32(ebx) + eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036000D: ;
    eax = MEM32(edi + 0x24);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 2;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00360015: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0036001C
 * Original: 0x0036001C - 0x0036003C (32 bytes, 12 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036001C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036001C: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = eax + edx * 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + esi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00360035
 * Original: 0x00360035 - 0x0036003C (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360035(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360035: ;
    MEM8(eax) = MEM8(eax) | 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0036003C
 * Original: 0x0036003C - 0x0036005D (33 bytes, 12 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036003C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036003C: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = eax + edx * 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + esi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 2;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0036005D
 * Original: 0x0036005D - 0x0036008C (47 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036005D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036005D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x00360073u); RECOMP_ABI_CALL(0x0035CAF9u, sub_0035CAF9); /* call 0x0035CAF9 */

loc_00360073: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xE));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x00360085u); RECOMP_ABI_CALL(0x0035CAF9u, sub_0035CAF9); /* call 0x0035CAF9 */

loc_00360085: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036008C
 * Original: 0x0036008C - 0x003600BB (47 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036008C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036008C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x003600A2u); RECOMP_ABI_CALL(0x0035CAF9u, sub_0035CAF9); /* call 0x0035CAF9 */

loc_003600A2: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x16));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x003600B4u); RECOMP_ABI_CALL(0x0035CAF9u, sub_0035CAF9); /* call 0x0035CAF9 */

loc_003600B4: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003600BB
 * Original: 0x003600BB - 0x003600C2 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003600BB(void)
{

loc_003600BB: ;
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003600C2
 * Original: 0x003600C2 - 0x003600C9 (7 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003600C2(void)
{

loc_003600C2: ;
    eax = MEM32(esp + 0xC);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003600C9
 * Original: 0x003600C9 - 0x0036017A (177 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003600C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003600C9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi + 0x24);
    SET_LO16(ebx, MEM16(edi + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0xE));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036016E; /* je: equal / zero */

loc_003600E6: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00360166; /* je: equal / zero */

loc_003600EB: ;
    _fa = (uint32_t)(MEM32(edi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x64), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00360161; /* jne: not equal / not zero */

loc_003600F1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003600F9u); RECOMP_ABI_CALL(0x0035CB24u, sub_0035CB24); /* call 0x0035CB24 */

loc_003600F9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ebp = eax;
    PUSH32(esp, 0x00360102u); RECOMP_ABI_CALL(0x0035CB24u, sub_0035CB24); /* call 0x0035CB24 */

loc_00360102: ;
    ebx = eax;
    eax = MEM32(esi + 0x114);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00360111u); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_00360111: ;
    esi = MEM32(esi + 0x110);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x00360122u); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_00360122: ;
    PUSH32(esp, eax);
    eax = SX16(LO16(ebx));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036012Fu); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_0036012F: ;
    PUSH32(esp, MEM32(esp + 0x14));
    esi = eax;
    eax = SX16(LO16(ebp));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00360141u); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_00360141: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x10000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    POP32(esp, ebp);
    if (CMP_G(_fas, _fbs)) goto loc_00360174; /* jg: greater (signed >) */

loc_0036014D: ;
    esi = esi << 0xE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00360156u); RECOMP_ABI_CALL(0x0035CD6Bu, sub_0035CD6B); /* call 0x0035CD6B */

loc_00360156: ;
    _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xE) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(edi + 0x64) = eax;

loc_00360161: ;
    eax = MEM32(edi + 0x64);
    goto loc_00360174;

loc_00360166: ;
    eax = MEM32(esi + 0x114);
    goto loc_00360174;

loc_0036016E: ;
    eax = MEM32(esi + 0x110);

loc_00360174: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036017A
 * Original: 0x0036017A - 0x0036018E (20 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036017A(void)
{

loc_0036017A: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x24);
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + ecx * 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036018E
 * Original: 0x0036018E - 0x003601B0 (34 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036018E(void)
{

loc_0036018E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00360199u); RECOMP_ABI_CALL(0x003600C9u, sub_003600C9); /* call 0x003600C9 */

loc_00360199: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 8);
    PUSH32(esp, MEM32(eax + ecx * 4));
    PUSH32(esp, 0x003601ACu); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_003601AC: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003601B0
 * Original: 0x003601B0 - 0x003601BD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003601B0(void)
{

loc_003601B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x24);
    eax = MEM32(eax + 0x64);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003601BD
 * Original: 0x003601BD - 0x003601D8 (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003601BD(void)
{

loc_003601BD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003601C8u); RECOMP_ABI_CALL(0x003600C9u, sub_003600C9); /* call 0x003600C9 */

loc_003601C8: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, MEM32(eax + 0x64));
    PUSH32(esp, 0x003601D4u); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_003601D4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003601D8
 * Original: 0x003601D8 - 0x003601F2 (26 bytes, 8 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003601D8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003601D8: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x24);
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 0xC);
    eax = eax + ecx * 4;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003601F2
 * Original: 0x003601F2 - 0x0036021A (40 bytes, 14 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003601F2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003601F2: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003601FDu); RECOMP_ABI_CALL(0x003600C9u, sub_003600C9); /* call 0x003600C9 */

loc_003601FD: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x00360207u); RECOMP_ABI_CALL(0x0035CC80u, sub_0035CC80); /* call 0x0035CC80 */

loc_00360207: ;
    ecx = MEM32(esi + 0x24);
    ecx = MEM32(ecx + 8);
    edx = MEM32(esp + 0x10);
    ecx = ecx + edx * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0036021A
 * Original: 0x0036021A - 0x00360266 (76 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036021A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036021A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x74) = edi;
    goto loc_0036025C;

loc_00360231: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00360260; /* je: equal / zero */

loc_00360238: ;
    MEM32(esi + 0x1C) = edi;
    SET_LO8(ecx, MEM8(edi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(esi + 0x40) = LO8(ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00360244u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00360242u); } /* indirect call */
    }

loc_00360244: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00360260; /* je: equal / zero */

loc_0036024C: ;
    eax = ZX8(MEM8(edi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 4 + 0x430870); PUSH32(esp, 0x0036025Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00360253u); } /* indirect call */
    }

loc_0036025A: ;
    edi = eax;

loc_0036025C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00360231; /* jb: below (unsigned <) */

loc_00360260: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00360266
 * Original: 0x00360266 - 0x00360293 (45 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360266(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360266: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(esi + 0x70) = edi;
    MEM32(esi + 0x74) = eax;
    goto loc_0036028A;

loc_0036027C: ;
    ecx = ZX8(MEM8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx * 4 + 0x430870); PUSH32(esp, 0x0036028Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00360283u); } /* indirect call */
    }

loc_0036028A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036027C; /* jb: below (unsigned <) */

loc_0036028E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00360293
 * Original: 0x00360293 - 0x003604B5 (546 bytes, 153 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00360293(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360293: ;
    PUSH32(esp, ebp);
    ebp = esp + -96;
    _fb = (uint32_t)(0xF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x68);
    PUSH32(esp, edi);
    PUSH32(esp, 0xE);
    POP32(esp, ecx);
    eax = ebp + -152;
    MEM32(ebp + -8) = eax;
    eax = ebp + -96;
    edi = ebp + -152;
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
    esi = MEM32(ebp + 0x6C);
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = eax;
    PUSH32(esp, 0xE);
    POP32(esp, ecx);
    edi = ebp + -96;
    eax = 0x3600BB;
    MEM32(ebp + 0x24) = eax;
    MEM32(ebp + 0x28) = eax;
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
    esi = MEM32(ebp + 0x78);
    eax = MEM32(esi + 0x150);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x50) = eax;
    eax = MEM32(esi + 0x154);
    MEM32(ebp + 0x54) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    MEM32(ebp + -4) = esi;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(MEM8(esi + 0x125)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x125), 1 (8-bit) */
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0xC) = ebx;
    MEM16(ebp + -24) = 0x4000;
    MEM16(ebp + -28) = 0x4000;
    MEM16(ebp + -20) = 0x4000;
    MEM16(ebp + -22) = LO16(ebx);
    MEM16(ebp + -26) = LO16(ebx);
    MEM16(ebp + -18) = LO16(ebx);
    MEM16(ebp + 0x1C) = 0x4000;
    MEM32(ebp + 0x20) = 0x36001C;
    MEM32(ebp + 0x14) = ebx;
    MEM16(ebp + 0x40) = LO16(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0036036E; /* jne: not equal / not zero */

loc_00360340: ;
    MEM16(esi + 0x78) = 3;
    MEM32(esi + 0x74) = 0x35FD31;
    MEM16(esi + 0x16E) = LO16(ebx);
    MEM32(ebp + 0x30) = 0x36017A;
    MEM32(ebp + 0x34) = 0x3601B0;
    MEM32(ebp + 0x38) = 0x3601D8;
    goto loc_0036042E;

loc_0036036E: ;
    MEM8(esi + 0x16E) = MEM8(esi + 0x16E) & 0xE0;
    _fa = (uint32_t)(MEM8(esi + 0x16E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO16(eax, MEM16(esi + 0x16C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00360389; /* je: equal / zero */

loc_00360380: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00360389; /* jne: not equal / not zero */

loc_00360384: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0036038B;

loc_00360389: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036038B: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    MEM16(ebp + 0x58) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003603A7; /* je: equal / zero */

loc_00360394: ;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003603A2; /* jne: not equal / not zero */

loc_0036039A: ;
    _fa = (uint32_t)(MEM8(esi + 0x125)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x125), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003603A7; /* je: equal / zero */

loc_003603A2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003603A9;

loc_003603A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003603A9: ;
    ecx = ZX16(MEM16(esi + 0x78));
    eax = ecx + eax * 8;
    eax = MEM32(eax * 4 + 0x41E9E8);
    MEM32(esi + 0x74) = eax;
    MEM16(ebp + 0x5C) = MEM16(ebp + 0x5C) | 0xFFFF;
    _fa = (uint32_t)(MEM16(ebp + 0x5C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(ebp + 0x5A) = MEM16(ebp + 0x5A) | 0xFFFF;
    _fa = (uint32_t)(MEM16(ebp + 0x5A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 1 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003603D2; /* ja: above (unsigned >) */

loc_003603CB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003604AB;

loc_003603D2: ;
    _fa = (uint32_t)(MEM8(esi + 0x12C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x12C), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003603F1; /* je: equal / zero */

loc_003603DA: ;
    MEM32(ebp + 0x30) = 0x36017A;
    MEM32(ebp + 0x34) = 0x3601B0;
    MEM32(ebp + 0x38) = 0x3601D8;
    goto loc_0036040A;

loc_003603F1: ;
    MEM32(ebp + 0x30) = 0x36018E;
    MEM32(ebp + 0x34) = 0x3601BD;
    MEM32(ebp + 0x38) = 0x3601F2;
    MEM16(ebp + 0x40) = LO16(ebx);

loc_0036040A: ;
    SET_LO16(eax, MEM16(esi + 0x8E));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036042E; /* je: equal / zero */

loc_00360416: ;
    eax = SX16(LO16(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0x100;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0xAC); PUSH32(esp, 0x00360427u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00360421u); } /* indirect call */
    }

loc_00360427: ;
    MEM32(esi + 0x64) = eax;
    MEM16(ebp + 0x40) = LO16(ebx);

loc_0036042E: ;
    eax = MEM32(esi);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp) = eax;
    MEM32(ebp + 0x44) = ebx;
    MEM32(ebp + 0x2C) = 0x36021A;
    if (CMP_NE(_fa, _fb)) goto loc_0036044E; /* jne: not equal / not zero */

loc_00360447: ;
    MEM32(ebp + 0x2C) = 0x360266;

loc_0036044E: ;
    _fa = (uint32_t)(MEM8(esi + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036046E; /* jne: not equal / not zero */

loc_00360457: ;
    SET_LO16(eax, MEM16(esi + 0x16C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036046E; /* je: equal / zero */

loc_00360462: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036046E; /* je: equal / zero */

loc_00360466: ;
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, 0x0036046Eu); RECOMP_ABI_CALL(0x0035F26Eu, sub_0035F26E); /* call 0x0035F26E */

loc_0036046E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x74));
    eax = ebp + -40;
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x2C); PUSH32(esp, 0x0036047Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00360478u); } /* indirect call */
    }

loc_0036047B: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003604A8; /* jne: not equal / not zero */

loc_00360487: ;
    SET_LO16(eax, MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003604A8; /* je: equal / zero */

loc_00360492: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003604A8; /* je: equal / zero */

loc_00360496: ;
    eax = MEM32(ebp + -40);
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003604A8; /* jne: not equal / not zero */

loc_0036049E: ;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003604A8u); RECOMP_ABI_CALL(0x0035F6FCu, sub_0035F6FC); /* call 0x0035F6FC */

loc_003604A8: ;
    eax = MEM32(ebp + 0x44);

loc_003604AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x60;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003604B5
 * Original: 0x003604B5 - 0x003604E5 (48 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003604B5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003604B5: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x44));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFC00) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFC00 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003604E2; /* jle: less or equal (signed <=) */

loc_003604C3: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x400 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003604E2; /* jge: greater or equal (signed >=) */

loc_003604C9: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0xFFFF8000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x4000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 0x44) = LO16(edx);

loc_003604E2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003604E5
 * Original: 0x003604E5 - 0x00360546 (97 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003604E5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003604E5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x12));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xE));
    PUSH32(esp, eax);
    PUSH32(esp, 0x003604FEu); RECOMP_ABI_CALL(0x0035CB24u, sub_0035CB24); /* call 0x0035CB24 */

loc_003604FE: ;
    SET_LO16(edi, LO16(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x10));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00360514u); RECOMP_ABI_CALL(0x0035CB24u, sub_0035CB24); /* call 0x0035CB24 */

loc_00360514: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0xFC00) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0xFC00 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00360539; /* jle: less or equal (signed <=) */

loc_0036051D: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0x400 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00360539; /* jge: greater or equal (signed >=) */

loc_00360524: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0 (16-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0xFFFF8000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_00360539: ;
    MEM32(esi + 0x64) = MEM32(esi + 0x64) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esi + 0x44) = LO16(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360546
 * Original: 0x00360546 - 0x003605EE (168 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360546(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360546: ;
    eax = MEM32(esp + 4);
    MEM16(eax + 0xC) = MEM16(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(eax + 0x10) = MEM16(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x10)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = 0x3600C2;
    MEM16(eax + 0xE) = 0x4000;
    MEM16(eax + 0x12) = 0x4000;
    MEM32(eax + 0x48) = 0x36003C;
    MEM32(eax + 0x4C) = esi;
    SET_LO16(edx, MEM16(ecx + 0x16C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0036058A; /* je: equal / zero */

loc_00360580: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036058A; /* je: equal / zero */

loc_00360585: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0036058C;

loc_0036058A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036058C: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    MEM16(eax + 0x80) = LO16(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_003605AC; /* je: equal / zero */

loc_00360598: ;
    _fa = (uint32_t)(MEM8(ecx + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003605A7; /* jne: not equal / not zero */

loc_0036059E: ;
    _fa = (uint32_t)(MEM8(ecx + 0x125)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x125), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003605AC; /* je: equal / zero */

loc_003605A7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003605AE;

loc_003605AC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003605AE: ;
    edi = ZX16(MEM16(ecx + 0x78));
    edx = edi + edx * 8;
    edx = MEM32(edx * 4 + 0x41E9E8);
    MEM32(ecx + 0x74) = edx;
    MEM16(eax + 0x84) = MEM16(eax + 0x84) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + 0x84)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(eax + 0x82) = MEM16(eax + 0x82) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + 0x82)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM16(eax + 0x68)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x68), 0 (16-bit) */
    POP32(esp, edi);
    MEM32(eax + 0x50) = esi;
    MEM16(eax + 0x44) = 0x4000;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003605E7; /* je: equal / zero */

loc_003605E1: ;
    MEM16(eax + 0x68) = 2;

loc_003605E7: ;
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003605EE
 * Original: 0x003605EE - 0x00360696 (168 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003605EE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003605EE: ;
    eax = MEM32(esp + 4);
    MEM16(eax + 0xE) = MEM16(eax + 0xE) & 0;
    _fa = (uint32_t)(MEM16(eax + 0xE)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(eax + 0x12) = MEM16(eax + 0x12) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x12)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = 0x3600BB;
    MEM16(eax + 0xC) = 0x4000;
    MEM16(eax + 0x10) = 0x4000;
    MEM32(eax + 0x48) = 0x36001C;
    MEM32(eax + 0x4C) = esi;
    SET_LO16(edx, MEM16(ecx + 0x16C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00360632; /* je: equal / zero */

loc_00360628: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00360632; /* jne: not equal / not zero */

loc_0036062D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00360634;

loc_00360632: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00360634: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    MEM16(eax + 0x80) = LO16(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00360654; /* je: equal / zero */

loc_00360640: ;
    _fa = (uint32_t)(MEM8(ecx + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036064F; /* jne: not equal / not zero */

loc_00360646: ;
    _fa = (uint32_t)(MEM8(ecx + 0x125)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x125), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00360654; /* je: equal / zero */

loc_0036064F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00360656;

loc_00360654: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00360656: ;
    edi = ZX16(MEM16(ecx + 0x78));
    edx = edi + edx * 8;
    edx = MEM32(edx * 4 + 0x41E9E8);
    MEM32(ecx + 0x74) = edx;
    MEM16(eax + 0x84) = MEM16(eax + 0x84) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + 0x84)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(eax + 0x82) = MEM16(eax + 0x82) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + 0x82)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM16(eax + 0x68)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x68), 0 (16-bit) */
    POP32(esp, edi);
    MEM32(eax + 0x50) = esi;
    MEM16(eax + 0x44) = 0x4000;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0036068F; /* je: equal / zero */

loc_00360689: ;
    MEM16(eax + 0x68) = 1;

loc_0036068F: ;
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00360696
 * Original: 0x00360696 - 0x00360733 (157 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360696(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360696: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM16(esi + 0xC) = MEM16(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esi + 0x24);
    MEM16(esi + 0xE) = 0x4000;
    MEM32(esi + 0x4C) = 0x3600C2;
    SET_LO16(ecx, MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003606C6; /* je: equal / zero */

loc_003606BC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003606C6; /* je: equal / zero */

loc_003606C1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003606C8;

loc_003606C6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003606C8: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    MEM16(esi + 0x80) = LO16(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_003606E8; /* je: equal / zero */

loc_003606D4: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003606E3; /* jne: not equal / not zero */

loc_003606DA: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003606E8; /* je: equal / zero */

loc_003606E3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003606EA;

loc_003606E8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003606EA: ;
    edx = ZX16(MEM16(eax + 0x78));
    ecx = edx + ecx * 8;
    ecx = MEM32(ecx * 4 + 0x41E9E8);
    MEM32(eax + 0x74) = ecx;
    SET_LO16(eax, MEM16(esi + 0x12));
    MEM16(esi + 0x84) = MEM16(esi + 0x84) | 0xFFFF;
    _fa = (uint32_t)(MEM16(esi + 0x84)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(esi + 0x82) = MEM16(esi + 0x82) | 0xFFFF;
    _fa = (uint32_t)(MEM16(esi + 0x82)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM16(esi + 0x44) = LO16(eax);
    PUSH32(esp, 0x00360719u); RECOMP_ABI_CALL(0x003604B5u, sub_003604B5); /* call 0x003604B5 */

loc_00360719: ;
    eax = MEM32(esi + 0x4C);
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x48) = 0x35FF43;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00360733
 * Original: 0x00360733 - 0x003607D0 (157 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360733(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360733: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM16(esi + 0xE) = MEM16(esi + 0xE) & 0;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esi + 0x24);
    MEM16(esi + 0xC) = 0x4000;
    MEM32(esi + 0x4C) = 0x3600BB;
    SET_LO16(ecx, MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00360763; /* je: equal / zero */

loc_00360759: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00360763; /* jne: not equal / not zero */

loc_0036075E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00360765;

loc_00360763: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00360765: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    MEM16(esi + 0x80) = LO16(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00360785; /* je: equal / zero */

loc_00360771: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00360780; /* jne: not equal / not zero */

loc_00360777: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00360785; /* je: equal / zero */

loc_00360780: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00360787;

loc_00360785: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00360787: ;
    edx = ZX16(MEM16(eax + 0x78));
    ecx = edx + ecx * 8;
    ecx = MEM32(ecx * 4 + 0x41E9E8);
    MEM32(eax + 0x74) = ecx;
    SET_LO16(eax, MEM16(esi + 0x10));
    MEM16(esi + 0x84) = MEM16(esi + 0x84) | 0xFFFF;
    _fa = (uint32_t)(MEM16(esi + 0x84)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(esi + 0x82) = MEM16(esi + 0x82) | 0xFFFF;
    _fa = (uint32_t)(MEM16(esi + 0x82)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM16(esi + 0x44) = LO16(eax);
    PUSH32(esp, 0x003607B6u); RECOMP_ABI_CALL(0x003604B5u, sub_003604B5); /* call 0x003604B5 */

loc_003607B6: ;
    eax = MEM32(esi + 0x4C);
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x48) = 0x35FF43;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003607D0
 * Original: 0x003607D0 - 0x00360802 (50 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003607D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003607D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO16(eax, MEM16(esi + 0xE));
    MEM16(esi + 0x10) = MEM16(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x10)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM16(esi + 0x12) = 0x4000;
    MEM16(esi + 0x44) = LO16(eax);
    PUSH32(esp, 0x003607EEu); RECOMP_ABI_CALL(0x003604B5u, sub_003604B5); /* call 0x003604B5 */

loc_003607EE: ;
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x48) = 0x35FF43;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00360802
 * Original: 0x00360802 - 0x00360834 (50 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360802(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360802: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO16(eax, MEM16(esi + 0xC));
    MEM16(esi + 0x12) = MEM16(esi + 0x12) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM16(esi + 0x10) = 0x4000;
    MEM16(esi + 0x44) = LO16(eax);
    PUSH32(esp, 0x00360820u); RECOMP_ABI_CALL(0x003604B5u, sub_003604B5); /* call 0x003604B5 */

loc_00360820: ;
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x48) = 0x35FF43;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00360834
 * Original: 0x00360834 - 0x003609A9 (373 bytes, 116 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360834(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360834: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x18);
    ebx = MEM32(esi + 0x24);
    ecx = eax + -8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00360853; /* jae: above or equal (unsigned >=) */

loc_00360847: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_0036088B;

loc_00360853: ;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(esi + 0x18) = eax;
    eax = MEM32(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00360890; /* jne: not equal / not zero */

loc_0036086E: ;
    ebx = MEM32(ebx + 0x130);
    ebx = ZX16(MEM16(ebx + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */

loc_0036087A: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00360880; /* jge: greater or equal (signed >=) */

loc_0036087C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00360898; /* jge: greater or equal (signed >=) */

loc_00360880: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1112;

loc_0036088A: ;
    POP32(esp, edi);

loc_0036088B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00360890: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x160) (32-bit) */
    goto loc_0036087A;

loc_00360898: ;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    edi = MEM32(esi + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_00360943; /* jne: not equal / not zero */

loc_003608A6: ;
    edi = MEM32(edi + 0x130);
    edi = ZX16(MEM16(edi + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */

loc_003608B2: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00360880; /* jge: greater or equal (signed >=) */

loc_003608B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00360880; /* jl: less (signed <) */

loc_003608B8: ;
    MEM16(esi + 0x82) = LO16(ecx);
    MEM16(esi + 0x84) = LO16(eax);
    edi = esi + 0xC;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    ebx = MEM32(edx + 4);
    edx = MEM32(edx);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(edi + eax);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebx + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ebx + ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    edi = MEM32(edi);
    eax = MEM32(eax + edi);
    _fb = (uint32_t)(MEM32(edx + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edx + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003608F0u); RECOMP_ABI_CALL(0x0035FB78u, sub_0035FB78); /* call 0x0035FB78 */

loc_003608F0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036090D; /* je: equal / zero */

loc_003608F9: ;
    SET_LO16(ecx, MEM16(esi + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xE));
    MEM16(esi + 0xE) = LO16(ecx);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM16(esi + 0xC) = LO16(eax);

loc_0036090D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00360913u); RECOMP_ABI_CALL(0x003604E5u, sub_003604E5); /* call 0x003604E5 */

loc_00360913: ;
    eax = MEM32(esi + 0x24);
    MEM32(esi + 0x48) = 0x35FF43;
    MEM32(esi + 0x4C) = 0x36005D;
    SET_LO16(ecx, MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00360961; /* je: equal / zero */

loc_0036092F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036094E; /* jne: not equal / not zero */

loc_00360934: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036095D; /* jne: not equal / not zero */

loc_0036093C: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 0 (16-bit) */
    goto loc_0036095B;

loc_00360943: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x160) (32-bit) */
    goto loc_003608B2;

loc_0036094E: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036095D; /* jne: not equal / not zero */

loc_00360956: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0 (16-bit) */

loc_0036095B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00360961; /* je: equal / zero */

loc_0036095D: ;
    ecx = ebx;
    goto loc_00360963;

loc_00360961: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00360963: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    MEM16(esi + 0x80) = LO16(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00360982; /* je: equal / zero */

loc_0036096F: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036097E; /* jne: not equal / not zero */

loc_00360975: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00360982; /* je: equal / zero */

loc_0036097E: ;
    ecx = ebx;
    goto loc_00360984;

loc_00360982: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00360984: ;
    edx = ZX16(MEM16(eax + 0x78));
    ecx = edx + ecx * 8;
    ecx = MEM32(ecx * 4 + 0x41E9E8);
    MEM32(eax + 0x74) = ecx;
    eax = MEM32(esi + 0x4C);
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esp + 0x14);
    goto loc_0036088A;

}

/**
 * sub_003609A9
 * Original: 0x003609A9 - 0x00360B64 (443 bytes, 139 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003609A9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003609A9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x18);
    ebx = MEM32(esi + 0x24);
    eax = ecx + -8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003609C8; /* jae: above or equal (unsigned >=) */

loc_003609BC: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_00360A00;

loc_003609C8: ;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = ecx;
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(esi + 0x18) = ecx;
    ecx = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00360A05; /* jne: not equal / not zero */

loc_003609E3: ;
    ebx = MEM32(ebx + 0x130);
    ebx = ZX16(MEM16(ebx + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */

loc_003609EF: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003609F5; /* jge: greater or equal (signed >=) */

loc_003609F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00360A0D; /* jge: greater or equal (signed >=) */

loc_003609F5: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1112;

loc_003609FF: ;
    POP32(esp, edi);

loc_00360A00: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00360A05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x160) (32-bit) */
    goto loc_003609EF;

loc_00360A0D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 4) (32-bit) */
    edi = MEM32(esi + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_00360AFD; /* jne: not equal / not zero */

loc_00360A19: ;
    edi = MEM32(edi + 0x130);
    edi = ZX16(MEM16(edi + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */

loc_00360A25: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003609F5; /* jge: greater or equal (signed >=) */

loc_00360A27: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003609F5; /* jl: less (signed <) */

loc_00360A2B: ;
    MEM16(esi + 0x82) = LO16(eax);
    ebx = eax;
    MEM16(esi + 0x84) = LO16(ecx);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 4);
    edi = ecx;
    ecx = MEM32(edx + 4);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + edi);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    eax = MEM32(eax);
    eax = MEM32(edi + eax);
    _fb = (uint32_t)(MEM32(ecx + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00360A6Au); RECOMP_ABI_CALL(0x0035FB78u, sub_0035FB78); /* call 0x0035FB78 */

loc_00360A6A: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + 0xC);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    edx = MEM32(edx + edi);
    _fb = (uint32_t)(MEM32(ecx + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ecx + ebx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 8);
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 8);
    ecx = MEM32(ecx + edi);
    _fb = (uint32_t)(MEM32(eax + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00360A96u); RECOMP_ABI_CALL(0x0035FB78u, sub_0035FB78); /* call 0x0035FB78 */

loc_00360A96: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00360AC7; /* je: equal / zero */

loc_00360A9F: ;
    SET_LO16(ecx, MEM16(esi + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xE));
    MEM16(esi + 0xE) = LO16(ecx);
    SET_LO16(ecx, MEM16(esi + 0x14));
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM16(esi + 0xC) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x16));
    MEM16(esi + 0x16) = LO16(ecx);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM16(esi + 0x14) = LO16(eax);

loc_00360AC7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00360ACDu); RECOMP_ABI_CALL(0x003604E5u, sub_003604E5); /* call 0x003604E5 */

loc_00360ACD: ;
    eax = MEM32(esi + 0x24);
    MEM32(esi + 0x48) = 0x35FF43;
    MEM32(esi + 0x4C) = 0x36005D;
    SET_LO16(ecx, MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00360B1B; /* je: equal / zero */

loc_00360AE9: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00360B08; /* jne: not equal / not zero */

loc_00360AEE: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00360B17; /* jne: not equal / not zero */

loc_00360AF6: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 0 (16-bit) */
    goto loc_00360B15;

loc_00360AFD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x160) (32-bit) */
    goto loc_00360A25;

loc_00360B08: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00360B17; /* jne: not equal / not zero */

loc_00360B10: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0 (16-bit) */

loc_00360B15: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00360B1B; /* je: equal / zero */

loc_00360B17: ;
    ecx = ebx;
    goto loc_00360B1D;

loc_00360B1B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00360B1D: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    MEM16(esi + 0x80) = LO16(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00360B3C; /* je: equal / zero */

loc_00360B29: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00360B38; /* jne: not equal / not zero */

loc_00360B2F: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00360B3C; /* je: equal / zero */

loc_00360B38: ;
    ecx = ebx;
    goto loc_00360B3E;

loc_00360B3C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00360B3E: ;
    edx = ZX16(MEM16(eax + 0x78));
    ecx = edx + ecx * 8;
    ecx = MEM32(ecx * 4 + 0x41E9E8);
    MEM32(eax + 0x74) = ecx;
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x50) = 0x36008C;
    goto loc_003609FF;

}

/**
 * sub_00360B64
 * Original: 0x00360B64 - 0x00360C4C (232 bytes, 78 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360B64(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360B64: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x18);
    ebx = MEM32(esi + 0x24);
    ecx = eax + -8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00360B83; /* jae: above or equal (unsigned >=) */

loc_00360B77: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_00360BBB;

loc_00360B83: ;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(esi + 0x18) = eax;
    eax = MEM32(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00360BC0; /* jne: not equal / not zero */

loc_00360B9E: ;
    ebx = MEM32(ebx + 0x130);
    ebx = ZX16(MEM16(ebx + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */

loc_00360BAA: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00360BB0; /* jge: greater or equal (signed >=) */

loc_00360BAC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00360BC8; /* jge: greater or equal (signed >=) */

loc_00360BB0: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1112;

loc_00360BBA: ;
    POP32(esp, edi);

loc_00360BBB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00360BC0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x160) (32-bit) */
    goto loc_00360BAA;

loc_00360BC8: ;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    edi = MEM32(esi + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_00360C44; /* jne: not equal / not zero */

loc_00360BD2: ;
    edi = MEM32(edi + 0x130);
    edi = ZX16(MEM16(edi + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */

loc_00360BDE: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00360BB0; /* jge: greater or equal (signed >=) */

loc_00360BE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00360BB0; /* jl: less (signed <) */

loc_00360BE4: ;
    edi = esi + 0x10;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    ebx = MEM32(edx + 4);
    edx = MEM32(edx);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(edi + eax);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebx + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ebx + ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    edi = MEM32(edi);
    eax = MEM32(eax + edi);
    _fb = (uint32_t)(MEM32(edx + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edx + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00360C0Eu); RECOMP_ABI_CALL(0x0035FB78u, sub_0035FB78); /* call 0x0035FB78 */

loc_00360C0E: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00360C29; /* je: equal / zero */

loc_00360C15: ;
    SET_LO16(ecx, MEM16(esi + 0x10));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x12));
    MEM16(esi + 0x12) = LO16(ecx);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM16(esi + 0x10) = LO16(eax);

loc_00360C29: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00360C2Fu); RECOMP_ABI_CALL(0x003604E5u, sub_003604E5); /* call 0x003604E5 */

loc_00360C2F: ;
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x48) = 0x35FF43;
    goto loc_00360BBA;

loc_00360C44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x160) (32-bit) */
    goto loc_00360BDE;

}

/**
 * sub_00360C4C
 * Original: 0x00360C4C - 0x00360D2A (222 bytes, 66 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360C4C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360C4C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x24);
    ecx = eax + -8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00360C6D; /* jae: above or equal (unsigned >=) */

loc_00360C5E: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_00360D26;

loc_00360C6D: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0xE) = LO16(ecx);
    MEM32(esi + 0x18) = eax;
    SET_LO16(eax, MEM16(eax));
    MEM16(esi + 0x84) = MEM16(esi + 0x84) | 0xFFFF;
    _fa = (uint32_t)(MEM16(esi + 0x84)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(esi + 0x82) = MEM16(esi + 0x82) | 0xFFFF;
    _fa = (uint32_t)(MEM16(esi + 0x82)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM16(esi + 0xC) = LO16(eax);
    PUSH32(esp, 0x00360C9Du); RECOMP_ABI_CALL(0x003604E5u, sub_003604E5); /* call 0x003604E5 */

loc_00360C9D: ;
    eax = MEM32(esi + 0x24);
    MEM32(esi + 0x48) = 0x35FF43;
    MEM32(esi + 0x4C) = 0x36005D;
    SET_LO16(ecx, MEM16(eax + 0x16C));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00360CE2; /* je: equal / zero */

loc_00360CBC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00360CCF; /* jne: not equal / not zero */

loc_00360CC1: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00360CDD; /* jne: not equal / not zero */

loc_00360CC9: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), LO16(edx) (16-bit) */
    goto loc_00360CDB;

loc_00360CCF: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00360CDD; /* jne: not equal / not zero */

loc_00360CD7: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), LO16(edx) (16-bit) */

loc_00360CDB: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00360CE2; /* je: equal / zero */

loc_00360CDD: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00360CE4;

loc_00360CE2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00360CE4: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    MEM16(esi + 0x80) = LO16(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00360D03; /* je: equal / zero */

loc_00360CF0: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00360CFE; /* jne: not equal / not zero */

loc_00360CF6: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00360D03; /* je: equal / zero */

loc_00360CFE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00360D05;

loc_00360D03: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00360D05: ;
    PUSH32(esp, edi);
    edi = ZX16(MEM16(eax + 0x78));
    ecx = edi + ecx * 8;
    ecx = MEM32(ecx * 4 + 0x41E9E8);
    MEM32(eax + 0x74) = ecx;
    eax = MEM32(esi + 0x4C);
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esp + 0x10);
    MEM16(esi + 0x68) = LO16(edx);
    POP32(esp, edi);

loc_00360D26: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00360D2A
 * Original: 0x00360D2A - 0x00360D7C (82 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360D2A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360D2A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x24);
    edx = eax + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00360D48; /* jae: above or equal (unsigned >=) */

loc_00360D3C: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_00360D78;

loc_00360D48: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x12) = LO16(ecx);
    MEM32(esi + 0x18) = eax;
    SET_LO16(eax, MEM16(eax));
    PUSH32(esp, esi);
    MEM16(esi + 0x10) = LO16(eax);
    PUSH32(esp, 0x00360D68u); RECOMP_ABI_CALL(0x003604E5u, sub_003604E5); /* call 0x003604E5 */

loc_00360D68: ;
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x48) = 0x35FF43;

loc_00360D78: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00360D7C
 * Original: 0x00360D7C - 0x00360DBD (65 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360D7C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360D7C: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 0x15C) (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_00360D9F; /* jbe: below or equal (unsigned <=) */

loc_00360D93: ;
    MEM32(eax + 0x6C) = 0x1111;
    eax = MEM32(eax + 0x70);
    goto loc_00360DBA;

loc_00360D9F: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 4;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xE);
    ecx = MEM32(eax + 0x18);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 4;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);

loc_00360DBA: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00360DBD
 * Original: 0x00360DBD - 0x00360DFE (65 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360DBD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360DBD: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 0x15C) (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_00360DE0; /* jbe: below or equal (unsigned <=) */

loc_00360DD4: ;
    MEM32(eax + 0x6C) = 0x1111;
    eax = MEM32(eax + 0x70);
    goto loc_00360DFB;

loc_00360DE0: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 4;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x12);
    ecx = MEM32(eax + 0x18);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 4;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);

loc_00360DFB: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00360DFE
 * Original: 0x00360DFE - 0x00360E21 (35 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360DFE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360DFE: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    MEM16(eax + 0x68) = MEM16(eax + 0x68) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(eax + 0x10) = ecx;
    MEM16(eax + 0x44) = 0x4000;
    MEM32(eax + 0x48) = 0x35FF43;
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00360E21
 * Original: 0x00360E21 - 0x00361178 (855 bytes, 299 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00360E21(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360E21: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x18);
    ecx = MEM32(ebx + 0x24);
    edx = eax + -20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    if (CMP_AE(_fa, _fb)) goto loc_00360E47; /* jae: above or equal (unsigned >=) */

loc_00360E3B: ;
    eax = MEM32(ebx + 0x70);
    MEM32(ebx + 0x6C) = 0x1110;
    goto loc_00360E77;

loc_00360E47: ;
    ecx = MEM32(ebx + 0x24);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x20), edi (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00360E7D; /* jne: not equal / not zero */

loc_00360E5A: ;
    ecx = MEM32(ecx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */

loc_00360E66: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00360E6C; /* jge: greater or equal (signed >=) */

loc_00360E68: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00360E85; /* jge: greater or equal (signed >=) */

loc_00360E6C: ;
    eax = MEM32(ebx + 0x70);
    MEM32(ebx + 0x6C) = 0x1112;

loc_00360E76: ;
    POP32(esp, esi);

loc_00360E77: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_00360E7D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x160) (32-bit) */
    goto loc_00360E66;

loc_00360E85: ;
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x20), edi (32-bit) */
    ecx = MEM32(ebx + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_00360EF3; /* jne: not equal / not zero */

loc_00360E8D: ;
    ecx = MEM32(ecx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */

loc_00360E99: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00360E6C; /* jge: greater or equal (signed >=) */

loc_00360E9B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00360E6C; /* jl: less (signed <) */

loc_00360E9F: ;
    ecx = MEM32(edi);
    esi = MEM32(ecx + esi * 4);
    MEM32(ebp + -24) = esi;
    esi = MEM32(ecx + edx * 4);
    ecx = MEM32(edi + 4);
    edi = MEM32(eax);
    edi = MEM32(ecx + edi * 4);
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(ebp + -24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -28) = edi;
    edi = MEM32(ecx + edx * 4);
    ecx = MEM32(eax);
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ebp + -28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -36) = ecx;
    ecx = MEM32(ebx + 4);
    MEM32(ebp + -32) = edx;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x20), ecx (32-bit) */
    ecx = MEM32(ebx + 0x24);
    MEM32(ebp + -16) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00360EFB; /* jne: not equal / not zero */

loc_00360EDC: ;
    ecx = MEM32(ecx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00360E6C; /* jge: greater or equal (signed >=) */

loc_00360EEA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00360F12; /* jge: greater or equal (signed >=) */

loc_00360EEE: ;
    goto loc_00360E6C;

loc_00360EF3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0x160) (32-bit) */
    goto loc_00360E99;

loc_00360EFB: ;
    edx = MEM32(ebp + -16);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x160) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00360E6C; /* jge: greater or equal (signed >=) */

loc_00360F0A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00360E6C; /* jl: less (signed <) */

loc_00360F12: ;
    ecx = MEM32(ebx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00360FCB; /* jne: not equal / not zero */

loc_00360F1E: ;
    ecx = MEM32(ebx + 0x24);
    ecx = MEM32(ecx + 0x130);
    edx = ZX16(MEM16(ecx + 0x10));
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */

loc_00360F2F: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00360E6C; /* jge: greater or equal (signed >=) */

loc_00360F35: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00360E6C; /* jl: less (signed <) */

loc_00360F3D: ;
    edx = MEM32(ebx + 4);
    edx = MEM32(edx);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(edx + ecx);
    edx = MEM32(ebp + -16);
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(ebx + 4);
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + edx * 4);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + -20);
    MEM32(ebp + 8) = ecx;
    ecx = MEM32(ebx + 4);
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx + edx);
    MEM32(ebp + -12) = edx;
    edx = MEM32(ebp + -16);
    ecx = MEM32(ecx + edx * 4);
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00360F83; /* jge: greater or equal (signed >=) */

loc_00360F81: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00360F83: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_00360F8B; /* jge: greater or equal (signed >=) */

loc_00360F89: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00360F8B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00360F9A; /* jle: less or equal (signed <=) */

loc_00360F8F: ;
    ecx = MEM32(ebp + -16);
    MEM32(ebp + -32) = ecx;
    ecx = MEM32(eax);
    MEM32(ebp + -36) = ecx;

loc_00360F9A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax);
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(ebx + 8);
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x20), ecx (32-bit) */
    ecx = MEM32(ebx + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_00360FDB; /* jne: not equal / not zero */

loc_00360FAD: ;
    ecx = MEM32(ecx + 0x130);
    edx = ZX16(MEM16(ecx + 0x10));
    ecx = MEM32(ebp + -20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00360E6C; /* jge: greater or equal (signed >=) */

loc_00360FC2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00360FF4; /* jge: greater or equal (signed >=) */

loc_00360FC6: ;
    goto loc_00360E6C;

loc_00360FCB: ;
    ecx = MEM32(eax);
    edx = MEM32(ebx + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x160) (32-bit) */
    goto loc_00360F2F;

loc_00360FDB: ;
    edx = MEM32(ebp + -20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x160) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00360E6C; /* jge: greater or equal (signed >=) */

loc_00360FEA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00360E6C; /* jl: less (signed <) */

loc_00360FF2: ;
    ecx = edx;

loc_00360FF4: ;
    edx = MEM32(ebx + 8);
    MEM32(ebx + 0x18) = eax;
    eax = MEM32(ebx + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361027; /* je: equal / zero */

loc_00361001: ;
    eax = MEM32(ebx + 0x24);
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00361027; /* jne: not equal / not zero */

loc_0036100D: ;
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00361027; /* je: equal / zero */

loc_00361016: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -36));
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00361024u); RECOMP_ABI_CALL(0x0035F441u, sub_0035F441); /* call 0x0035F441 */

loc_00361024: ;
    ecx = MEM32(ebp + -20);

loc_00361027: ;
    eax = MEM32(ebx + 8);
    eax = MEM32(eax + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 3;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = MEM32(ebx + 8);
    edx = MEM32(ebx);
    ebx = MEM32(ebx + 4);
    MEM32(ebp + -32) = edx;
    MEM32(ebp + -36) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0036106E; /* jne: not equal / not zero */

loc_00361044: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00361059; /* jne: not equal / not zero */

loc_00361049: ;
    eax = ecx;
    ecx = MEM32(ebp + -8);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + edx) = ecx;
    ecx = MEM32(ebp + -28);
    goto loc_00361085;

loc_00361059: ;
    ecx = MEM32(ebp + -4);
    ebx = MEM32(ebp + -12);
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + -28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + -16) = eax;
    goto loc_0036110C;

loc_0036106E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003610A2; /* jne: not equal / not zero */

loc_00361072: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036108D; /* jne: not equal / not zero */

loc_00361077: ;
    eax = ecx;
    ecx = MEM32(ebp + -24);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + edx) = ecx;
    ecx = MEM32(ebp + -12);

loc_00361085: ;
    MEM32(eax + ebx) = ecx;
    goto loc_00361170;

loc_0036108D: ;
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + -8);
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + -24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(ebp + -4);
    goto loc_0036110F;

loc_003610A2: ;
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_003610A8; /* jge: greater or equal (signed >=) */

loc_003610A6: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003610A8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_003610B0; /* jge: greater or equal (signed >=) */

loc_003610AE: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003610B0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003610DC; /* jl: less (signed <) */

loc_003610B4: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003610C2u); RECOMP_ABI_CALL(0x0035CAD5u, sub_0035CAD5); /* call 0x0035CAD5 */

loc_003610C2: ;
    ebx = MEM32(ebp + -12);
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + -28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003610D4u); RECOMP_ABI_CALL(0x0035CAD5u, sub_0035CAD5); /* call 0x0035CAD5 */

loc_003610D4: ;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -16) = eax;
    goto loc_00361106;

loc_003610DC: ;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003610EAu); RECOMP_ABI_CALL(0x0035CAD5u, sub_0035CAD5); /* call 0x0035CAD5 */

loc_003610EA: ;
    ebx = eax;
    eax = MEM32(ebp + -24);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003610FEu); RECOMP_ABI_CALL(0x0035CAD5u, sub_0035CAD5); /* call 0x0035CAD5 */

loc_003610FE: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -16) = ecx;

loc_00361106: ;
    ecx = MEM32(ebp + -4);
    edx = MEM32(ebp + -32);

loc_0036110C: ;
    eax = MEM32(ebp + 8);

loc_0036110F: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361145; /* je: equal / zero */

loc_00361115: ;
    PUSH32(esp, MEM32(ebp + -16));
    esi = MEM32(ebp + -20);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00361125u); RECOMP_ABI_CALL(0x0035CAD5u, sub_0035CAD5); /* call 0x0035CAD5 */

loc_00361125: ;
    PUSH32(esp, MEM32(ebp + -16));
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -32);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(esi + ecx) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036113Au); RECOMP_ABI_CALL(0x0035CAD5u, sub_0035CAD5); /* call 0x0035CAD5 */

loc_0036113A: ;
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -36);
    MEM32(esi + ecx) = eax;
    goto loc_00361170;

loc_00361145: ;
    ebx = MEM32(ebp + -20);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + -24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -36);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebx + edx) = esi;
    MEM32(ebx + eax) = edi;

loc_00361170: ;
    eax = MEM32(ebp + 0xC);
    goto loc_00360E76;

}

/**
 * sub_00361178
 * Original: 0x00361178 - 0x003611A9 (49 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361178(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361178: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00361197; /* jae: above or equal (unsigned >=) */

loc_0036118B: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003611A6;

loc_00361197: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(eax);
    MEM32(edx + 0x70) = eax;
    eax = MEM32(esp + 8);

loc_003611A6: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003611A9
 * Original: 0x003611A9 - 0x003611DA (49 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003611A9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003611A9: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003611C8; /* jae: above or equal (unsigned >=) */

loc_003611BC: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003611D7;

loc_003611C8: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(eax);
    MEM32(edx + 0x5C) = eax;
    eax = MEM32(esp + 8);

loc_003611D7: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003611DA
 * Original: 0x003611DA - 0x00361210 (54 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003611DA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003611DA: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003611F9; /* jae: above or equal (unsigned >=) */

loc_003611ED: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_0036120D;

loc_003611F9: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ecx);
    MEM32(edx + 0x60) = ecx;
    MEM16(eax + 0x68) = MEM16(eax + 0x68) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 8);

loc_0036120D: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00361210
 * Original: 0x00361210 - 0x0036125E (78 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361210: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    MEM16(eax + 0x68) = MEM16(eax + 0x68) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x24);
    edx = ecx + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00361233; /* jae: above or equal (unsigned >=) */

loc_00361227: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_0036125A;

loc_00361233: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ecx);
    eax = SX16(LO16(ecx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0x100;
    PUSH32(esp, eax);
    MEM16(esi + 0x8E) = LO16(ecx);
    { uint32_t _icall_target = MEM32(esi + 0xAC); PUSH32(esp, 0x00361253u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036124Du); } /* indirect call */
    }

loc_00361253: ;
    MEM32(esi + 0x64) = eax;
    eax = MEM32(esp + 0xC);

loc_0036125A: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036125E
 * Original: 0x0036125E - 0x0036128F (49 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036125E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036125E: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_0036127D; /* jae: above or equal (unsigned >=) */

loc_00361271: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_0036128C;

loc_0036127D: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ecx);
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(esp + 8);

loc_0036128C: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036128F
 * Original: 0x0036128F - 0x003612C0 (49 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036128F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036128F: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003612AE; /* jae: above or equal (unsigned >=) */

loc_003612A2: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_003612BD;

loc_003612AE: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ecx);
    MEM32(eax + 0x30) = ecx;
    eax = MEM32(esp + 8);

loc_003612BD: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003612C0
 * Original: 0x003612C0 - 0x003612F1 (49 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003612C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003612C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003612DF; /* jae: above or equal (unsigned >=) */

loc_003612D3: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_003612EE;

loc_003612DF: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ecx);
    MEM32(eax + 0x34) = ecx;
    eax = MEM32(esp + 8);

loc_003612EE: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003612F1
 * Original: 0x003612F1 - 0x00361323 (50 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003612F1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003612F1: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00361310; /* jae: above or equal (unsigned >=) */

loc_00361304: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_00361320;

loc_00361310: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ecx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x3C) = ecx;
    eax = MEM32(esp + 8);

loc_00361320: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00361323
 * Original: 0x00361323 - 0x00361392 (111 bytes, 41 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361323(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361323: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_0036133F; /* jae: above or equal (unsigned >=) */

loc_00361336: ;
    MEM32(eax + 0x6C) = 0x1110;
    goto loc_0036138C;

loc_0036133F: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00361385; /* jge: greater or equal (signed >=) */

loc_0036134C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00361385; /* jl: less (signed <) */

loc_00361350: ;
    edx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x13) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x13;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0036136E; /* je: equal / zero */

loc_0036135F: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00361380; /* je: equal / zero */

loc_00361362: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0036137B; /* je: equal / zero */

loc_00361365: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00361370; /* jne: not equal / not zero */

loc_00361368: ;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;

loc_0036136E: ;
    MEM32(eax) = ecx;

loc_00361370: ;
    MEM16(eax + 0x68) = MEM16(eax + 0x68) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 8);
    goto loc_0036138F;

loc_0036137B: ;
    MEM32(eax + 8) = ecx;
    goto loc_00361370;

loc_00361380: ;
    MEM32(eax + 4) = ecx;
    goto loc_00361370;

loc_00361385: ;
    MEM32(eax + 0x6C) = 0x1116;

loc_0036138C: ;
    eax = MEM32(eax + 0x70);

loc_0036138F: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00361392
 * Original: 0x00361392 - 0x003613BC (42 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361392(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361392: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x1C) = 3;
    ecx = ZX16(MEM16(ecx + 0x80));
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ecx + 0x41E9F4);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003613BC
 * Original: 0x003613BC - 0x003613EB (47 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003613BC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003613BC: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x1C) = 4;
    edx = ZX16(MEM16(ecx + 0x80));
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(edx + 0x41E9F8);
    MEM32(eax + 0x18) = edx;
    MEM16(ecx + 0x68) = MEM16(ecx + 0x68) & 0;
    _fa = (uint32_t)(MEM16(ecx + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003613EB
 * Original: 0x003613EB - 0x00361419 (46 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003613EB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003613EB: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    MEM16(eax + 0x78) = MEM16(eax + 0x78) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x78)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    edx = ZX16(MEM16(ecx + 0x80));
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(edx + 0x41E9E8);
    MEM32(eax + 0x18) = edx;
    MEM16(ecx + 0x68) = MEM16(ecx + 0x68) & 0;
    _fa = (uint32_t)(MEM16(ecx + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00361419
 * Original: 0x00361419 - 0x00361448 (47 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361419(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361419: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x1C) = 5;
    edx = ZX16(MEM16(ecx + 0x80));
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(edx + 0x41E9FC);
    MEM32(eax + 0x18) = edx;
    MEM16(ecx + 0x68) = MEM16(ecx + 0x68) & 0;
    _fa = (uint32_t)(MEM16(ecx + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00361448
 * Original: 0x00361448 - 0x00361477 (47 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361448(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361448: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x1C) = 1;
    edx = ZX16(MEM16(ecx + 0x80));
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(edx + 0x41E9EC);
    MEM32(eax + 0x18) = edx;
    MEM16(ecx + 0x68) = MEM16(ecx + 0x68) & 0;
    _fa = (uint32_t)(MEM16(ecx + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00361477
 * Original: 0x00361477 - 0x003614A6 (47 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361477(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361477: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x1C) = 2;
    edx = ZX16(MEM16(ecx + 0x80));
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(edx + 0x41E9F0);
    MEM32(eax + 0x18) = edx;
    MEM16(ecx + 0x68) = MEM16(ecx + 0x68) & 0;
    _fa = (uint32_t)(MEM16(ecx + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003614A6
 * Original: 0x003614A6 - 0x0036159B (245 bytes, 81 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003614A6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003614A6: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003614FD; /* je: equal / zero */

loc_003614C5: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003614EB; /* je: equal / zero */

loc_003614C9: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003614E3; /* je: equal / zero */

loc_003614CE: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003614DB; /* je: equal / zero */

loc_003614D3: ;
    MEM16(eax + 0x26) = 0x3E7;
    goto loc_003614F1;

loc_003614DB: ;
    MEM16(eax + 0x26) = 0x80;
    goto loc_003614F1;

loc_003614E3: ;
    MEM16(eax + 0x26) = 0x40;
    goto loc_003614F1;

loc_003614EB: ;
    MEM16(eax + 0x26) = 0x20;

loc_003614F1: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x26);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ~ecx;
    MEM32(eax + 0x20) = ecx;
    goto loc_00361538;

loc_003614FD: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(eax + 0x24) = 0x2D47;
    if ((_fa == 0)) goto loc_00361521; /* je: equal / zero */

loc_00361507: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00361527; /* je: equal / zero */

loc_0036150C: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00361519; /* je: equal / zero */

loc_00361511: ;
    MEM16(eax + 0x24) = 0x3E7;
    goto loc_00361527;

loc_00361519: ;
    MEM16(eax + 0x24) = 0x5A8E;
    goto loc_00361527;

loc_00361521: ;
    MEM16(eax + 0x24) = 0x16A3;

loc_00361527: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(eax + 0x26) = LO16(ecx);

loc_00361538: ;
    ecx = esi;
    ecx = ecx & 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00361570; /* je: equal / zero */

loc_0036153F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361568; /* je: equal / zero */

loc_00361544: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036155F; /* je: equal / zero */

loc_00361549: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00361574; /* jne: not equal / not zero */

loc_0036154E: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x26);
    ecx = ecx + ecx * 2 + 2;

loc_00361556: ;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00361559: ;
    MEM16(eax + 0x28) = LO16(ecx);
    goto loc_00361574;

loc_0036155F: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x26);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    goto loc_00361559;

loc_00361568: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x26);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00361556;

loc_00361570: ;
    MEM16(eax + 0x28) = LO16(edx);

loc_00361574: ;
    esi = esi & 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    POP32(esp, esi);
    if ((_fa != 0)) goto loc_00361584; /* jne: not equal / not zero */

loc_0036157C: ;
    SET_LO16(ecx, MEM16(eax + 0x26));
    SET_LO16(ecx, LO16(ecx) - 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00361594;

loc_00361584: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x26);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00361594: ;
    MEM16(eax + 0x2A) = LO16(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036159B
 * Original: 0x0036159B - 0x003615FF (100 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036159B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036159B: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x24);
    _fa = (uint32_t)(MEM8(edi + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x125), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003615B8; /* je: equal / zero */

loc_003615AC: ;
    MEM32(eax + 0x6C) = 0x110D;
    eax = MEM32(eax + 0x70);
    goto loc_003615FB;

loc_003615B8: ;
    ecx = MEM32(eax + 0x20);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x60);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x40);
    ecx = MEM32(ecx + 0x58);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + edx * 2 + -2);
    edx = MEM32(eax + 0x18);
    ebx = edx + 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x15C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003615E7; /* jbe: below or equal (unsigned <=) */

loc_003615DB: ;
    MEM32(eax + 0x6C) = 0x1111;
    eax = MEM32(eax + 0x70);
    goto loc_003615F9;

loc_003615E7: ;
    ecx = esi + ecx * 4;
    esi = MEM32(ecx + 4);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 4;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x14);

loc_003615F9: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003615FB: ;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003615FF
 * Original: 0x003615FF - 0x00361644 (69 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003615FF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003615FF: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036161A; /* jae: above or equal (unsigned >=) */

loc_00361611: ;
    MEM32(eax + 0x6C) = 0x1110;
    goto loc_00361631;

loc_0036161A: ;
    esi = MEM32(ecx + -4);
    PUSH32(esp, edi);
    edi = ecx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx + 0x15C) (32-bit) */
    POP32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_00361636; /* jbe: below or equal (unsigned <=) */

loc_0036162A: ;
    MEM32(eax + 0x6C) = 0x1111;

loc_00361631: ;
    eax = MEM32(eax + 0x70);
    goto loc_00361640;

loc_00361636: ;
    MEM32(ecx) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 4;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);

loc_00361640: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00361644
 * Original: 0x00361644 - 0x00361657 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361644(void)
{

loc_00361644: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00361657
 * Original: 0x00361657 - 0x00361689 (50 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361657(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361657: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00361676; /* jae: above or equal (unsigned >=) */

loc_0036166A: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_00361686;

loc_00361676: ;
    ecx = MEM32(eax + -4);
    edx = MEM32(eax + -8);
    MEM32(eax + -4) = edx;
    MEM32(eax + -8) = ecx;
    eax = MEM32(esp + 8);

loc_00361686: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00361689
 * Original: 0x00361689 - 0x003616C2 (57 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361689(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361689: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x24);
    eax = edx;
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = edx + 4;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x15C) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_003616B5; /* jbe: below or equal (unsigned <=) */

loc_003616A9: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1111;
    goto loc_003616BF;

loc_003616B5: ;
    MEM32(edx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) + 4;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);

loc_003616BF: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003616C2
 * Original: 0x003616C2 - 0x00361715 (83 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003616C2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003616C2: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edx = eax + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003616EB; /* jb: below (unsigned <) */

loc_003616D7: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = edx;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    POP32(esp, ebx);
    if (CMP_AE(_fa, _fb)) goto loc_003616F4; /* jae: above or equal (unsigned >=) */

loc_003616EB: ;
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_0036170D;

loc_003616F4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x15C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00361706; /* jae: above or equal (unsigned >=) */

loc_003616FC: ;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x10);
    goto loc_00361710;

loc_00361706: ;
    MEM32(ecx + 0x6C) = 0x1113;

loc_0036170D: ;
    eax = MEM32(ecx + 0x70);

loc_00361710: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00361715
 * Original: 0x00361715 - 0x00361795 (128 bytes, 51 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00361715(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361715: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x24);
    ecx = MEM32(edi);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00361738; /* jae: above or equal (unsigned >=) */

loc_0036172C: ;
    eax = MEM32(edx + 0x70);
    MEM32(edx + 0x6C) = 0x1110;
    goto loc_0036178F;

loc_00361738: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = esi;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00361754; /* jae: above or equal (unsigned >=) */

loc_0036174B: ;
    MEM32(edx + 0x6C) = 0x1110;
    goto loc_0036178B;

loc_00361754: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x15C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00361784; /* jae: above or equal (unsigned >=) */

loc_0036175C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = MEM32(ecx);
    MEM32(ebp + 8) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00361774; /* jle: less or equal (signed <=) */

loc_00361765: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = ecx + 4;
    ebx = MEM32(edi);
    MEM32(ecx) = ebx;
    ecx = edi;
    if ((_fa != 0)) goto loc_00361765; /* jne: not equal / not zero */

loc_00361771: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00361774: ;
    ecx = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x18) = eax;
    eax = MEM32(ebp + 0xC);
    goto loc_0036178E;

loc_00361784: ;
    MEM32(edx + 0x6C) = 0x1113;

loc_0036178B: ;
    eax = MEM32(edx + 0x70);

loc_0036178E: ;
    POP32(esp, ebx);

loc_0036178F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00361795
 * Original: 0x00361795 - 0x003617D1 (60 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00361795(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361795: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -12;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003617B4; /* jae: above or equal (unsigned >=) */

loc_003617A8: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003617CE;

loc_003617B4: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(eax);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax);
    MEM32(eax) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(esp + 8);

loc_003617CE: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003617D1
 * Original: 0x003617D1 - 0x0036186F (158 bytes, 63 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003617D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003617D1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x24);
    ebx = MEM32(esi);
    edx = eax + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_003617F7; /* jae: above or equal (unsigned >=) */

loc_003617EB: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_00361822;

loc_003617F7: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 0x18) = eax;
    edi = MEM32(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00361828; /* jne: not equal / not zero */

loc_00361805: ;
    eax = MEM32(ecx + 0x130);
    eax = ZX16(MEM16(eax + 0x10));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */

loc_00361811: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00361817; /* jge: greater or equal (signed >=) */

loc_00361813: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00361830; /* jge: greater or equal (signed >=) */

loc_00361817: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1112;

loc_00361821: ;
    POP32(esp, edi);

loc_00361822: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00361828: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0x160) (32-bit) */
    goto loc_00361811;

loc_00361830: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x30) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00361861; /* je: equal / zero */

loc_0036183C: ;
    eax = MEM32(ebx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + edi * 4));
    eax = MEM32(ebx);
    PUSH32(esp, MEM32(eax + edi * 4));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x0036184Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361848u); } /* indirect call */
    }

loc_0036184B: ;
    ecx = MEM32(esi + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ecx + 0x14));
    MEM32(ebp + 0x10) = eax;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0036185Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361859u); } /* indirect call */
    }

loc_0036185C: ;
    _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00361863;

loc_00361861: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00361863: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x0036186Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361867u); } /* indirect call */
    }

loc_0036186A: ;
    eax = MEM32(ebp + 0xC);
    goto loc_00361821;

}

/**
 * sub_0036186F
 * Original: 0x0036186F - 0x003619A6 (311 bytes, 113 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036186F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036186F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x24);
    edx = eax + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    MEM32(ebp + -8) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_00361898; /* jae: above or equal (unsigned >=) */

loc_0036188C: ;
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_0036199C;

loc_00361898: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    ecx = ZX16(MEM16(ecx + 0x134));
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00361995; /* jge: greater or equal (signed >=) */

loc_003618AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00361995; /* jl: less (signed <) */

loc_003618B7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x58); PUSH32(esp, 0x003618BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003618B9u); } /* indirect call */
    }

loc_003618BC: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 0xFFFFFFFCu;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x24);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 0x18);
    ebx = MEM32(eax);
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_003618F3; /* jne: not equal / not zero */

loc_003618D5: ;
    ecx = MEM32(ecx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */

loc_003618E1: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003618E7; /* jge: greater or equal (signed >=) */

loc_003618E3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003618FB; /* jge: greater or equal (signed >=) */

loc_003618E7: ;
    MEM32(esi + 0x6C) = 0x1112;
    goto loc_0036199C;

loc_003618F3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0x160) (32-bit) */
    goto loc_003618E1;

loc_003618FB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0036194B; /* jne: not equal / not zero */

loc_00361905: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xC));
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00361917u); RECOMP_ABI_CALL(0x0035CAF9u, sub_0035CAF9); /* call 0x0035CAF9 */

loc_00361917: ;
    ecx = MEM32(edi);
    MEM32(ebx + ecx) = eax;
    eax = MEM32(edi);
    eax = MEM32(ebx + eax);
    ecx = MEM32(edi + 8);
    MEM32(ebx + ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xE));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00361936u); RECOMP_ABI_CALL(0x0035CAF9u, sub_0035CAF9); /* call 0x0035CAF9 */

loc_00361936: ;
    ecx = MEM32(edi + 4);
    MEM32(ebx + ecx) = eax;
    eax = MEM32(edi + 4);
    eax = MEM32(ebx + eax);
    ecx = MEM32(edi + 0xC);
    MEM32(ebx + ecx) = eax;
    ebx = MEM32(ebp + -4);

loc_0036194B: ;
    eax = MEM32(edi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + ebx * 4));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(eax + ebx * 4));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x0036195Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361957u); } /* indirect call */
    }

loc_0036195A: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    edx = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00361986; /* je: equal / zero */

loc_00361968: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_0036196E; /* jns: not sign (positive) */

loc_0036196C: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0036196E: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x5C) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00361979; /* jle: less or equal (signed <=) */

loc_00361976: ;
    MEM32(ebp + 8) = edx;

loc_00361979: ;
    eax = MEM32(esi + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x74); PUSH32(esp, 0x00361986u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361983u); } /* indirect call */
    }

loc_00361986: ;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x00361990u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036198Du); } /* indirect call */
    }

loc_00361990: ;
    eax = MEM32(ebp + 0xC);
    goto loc_0036199F;

loc_00361995: ;
    MEM32(esi + 0x6C) = 0x111B;

loc_0036199C: ;
    eax = MEM32(esi + 0x70);

loc_0036199F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003619A6
 * Original: 0x003619A6 - 0x00361CD3 (813 bytes, 295 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003619A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003619A6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x24);
    SET_LO8(ecx, MEM8(eax + 0x125));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    MEM32(ebp + -72) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003619E2; /* je: equal / zero */

loc_003619C5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003619CE; /* jne: not equal / not zero */

loc_003619C9: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003619DD; /* je: equal / zero */

loc_003619CE: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x111C;
    goto loc_00361CCD;

loc_003619DD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00361A0B; /* jne: not equal / not zero */

loc_003619E2: ;
    eax = ZX16(MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00361A0B; /* je: equal / zero */

loc_003619ED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00361A0B; /* je: equal / zero */

loc_003619F1: ;
    ecx = MEM32(ebp + 0x10);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361A0B; /* je: equal / zero */

loc_003619FE: ;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x30), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00361A0B; /* jne: not equal / not zero */

loc_00361A04: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00361A0Bu); RECOMP_ABI_CALL(0x0035F6FCu, sub_0035F6FC); /* call 0x0035F6FC */

loc_00361A0B: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x24);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -76) = ebx;
    MEM32(ebp + -84) = eax;
    if ((_fa == 0)) goto loc_00361A3E; /* je: equal / zero */

loc_00361A20: ;
    _fa = (uint32_t)(MEM8(ecx + 0x14D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x14D), 0 (8-bit) */
    eax = MEM32(edi);
    MEM32(ebp + -8) = eax;
    eax = MEM32(edi + 8);
    MEM32(ebp + -28) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00361A37; /* jne: not equal / not zero */

loc_00361A34: ;
    eax = MEM32(edi + 0x10);

loc_00361A37: ;
    SET_LO8(ecx, 1);
    MEM8(ebp + 0x13) = LO8(ecx);
    goto loc_00361A5D;

loc_00361A3E: ;
    _fa = (uint32_t)(MEM8(ecx + 0x14D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x14D), 0 (8-bit) */
    eax = MEM32(edi + 4);
    MEM32(ebp + -8) = eax;
    eax = MEM32(edi + 0xC);
    MEM32(ebp + -28) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00361A56; /* jne: not equal / not zero */

loc_00361A53: ;
    eax = MEM32(edi + 0x14);

loc_00361A56: ;
    MEM8(ebp + 0x13) = 2;
    SET_LO8(ecx, MEM8(ebp + 0x13));

loc_00361A5D: ;
    MEM32(ebp + -48) = MEM32(ebp + -48) & 0;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(edi + 0x28)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x28), 0 (16-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00361CB6; /* jle: less or equal (signed <=) */

loc_00361A6F: ;
    edx = MEM32(ebp + -48);
    eax = MEM32(edi + 0x1C);
    esi = MEM32(edi + 0x20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM16(eax + edx);
    _fa = (uint32_t)(MEM8(eax + ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + ebx), LO8(ecx) (8-bit) */
    edx = (uint32_t)(int32_t)SMEM16(esi + edx);
    esi = MEM32(ebp + -4);
    esi = esi + edx * 4;
    MEM32(ebp + -80) = esi;
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -40) = edx;
    esi = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00361AA6; /* jne: not equal / not zero */

loc_00361A98: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00361CA3; /* jg: greater (signed >) */

loc_00361AA0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + ebx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00361A98; /* je: equal / zero */

loc_00361AA6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00361CA3; /* jg: greater (signed >) */

loc_00361AAE: ;
    MEM32(ebp + -60) = esi;
    goto loc_00361AB6;

loc_00361AB3: ;
    eax = MEM32(ebp + -44);

loc_00361AB6: ;
    edx = esi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -40) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00361AC0; /* jle: less or equal (signed <=) */

loc_00361ABE: ;
    esi = eax;

loc_00361AC0: ;
    _fa = (uint32_t)(MEM8(esi + ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + ebx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00361ACA; /* je: equal / zero */

loc_00361AC5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -60) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00361AB6; /* jne: not equal / not zero */

loc_00361ACA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -60) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361CA3; /* je: equal / zero */

loc_00361AD3: ;
    edi = esi;

loc_00361AD5: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -40) (32-bit) */
    MEM32(ebp + -12) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00361AE3; /* jle: less or equal (signed <=) */

loc_00361ADE: ;
    MEM32(ebp + -12) = eax;
    edi = eax;

loc_00361AE3: ;
    _fa = (uint32_t)(MEM8(edi + ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + ebx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00361AD5; /* je: equal / zero */

loc_00361AE8: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx + edx * 4);
    ecx = ecx + edi * 4;
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00361B07; /* jge: greater or equal (signed >=) */

loc_00361AFA: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -36) = eax;
    ebx = ecx;
    eax = edx;
    ecx = edi;
    goto loc_00361B12;

loc_00361B07: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -36) = ecx;
    ebx = eax;
    eax = edi;
    ecx = edx;

loc_00361B12: ;
    edx = MEM32(ebp + -8);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(eax + edx);
    edx = MEM32(ebp + -28);
    eax = MEM32(eax + edx);
    MEM32(ebp + -32) = eax;
    eax = edi;
    _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -68) = edi;
    MEM32(ebp + -52) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00361C8C; /* je: equal / zero */

loc_00361B37: ;
    eax = ecx;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + edx);
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(ebp + -8);
    eax = MEM32(eax + ecx);
    ecx = eax;
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -16);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -24) = eax;
    eax = 0x8000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(ebp + -56) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00361C28; /* jge: greater or equal (signed >=) */

loc_00361B62: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00361C28; /* jge: greater or equal (signed >=) */

loc_00361B6B: ;
    ecx = MEM32(ebp + -4);
    eax = esi;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + ecx;
    ecx = MEM32(ebp + -8);
    edi = eax + edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebp + -64) = eax;
    goto loc_00361BC1;

loc_00361B87: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00361BA7; /* jle: less or equal (signed <=) */

loc_00361B8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00361BAC; /* jge: greater or equal (signed >=) */

loc_00361B93: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -36);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -24));
    _fb = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fb = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00361BB6;

loc_00361BA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00361BB1; /* jl: less (signed <) */

loc_00361BAC: ;
    edx = MEM32(ebp + -56);
    goto loc_00361BB4;

loc_00361BB1: ;
    edx = MEM32(ebp + -52);

loc_00361BB4: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00361BB6: ;
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00361BC1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00361B87; /* jb: below (unsigned <) */

loc_00361BC6: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00361C23; /* je: equal / zero */

loc_00361BC8: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00361BE8; /* jle: less or equal (signed <=) */

loc_00361BCF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00361BED; /* jge: greater or equal (signed >=) */

loc_00361BD4: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -36);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -24));
    _fb = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fb = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00361BF7;

loc_00361BE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00361BF2; /* jl: less (signed <) */

loc_00361BED: ;
    edx = MEM32(ebp + -56);
    goto loc_00361BF5;

loc_00361BF2: ;
    edx = MEM32(ebp + -52);

loc_00361BF5: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00361BF7: ;
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -80) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00361C1E; /* jbe: below or equal (unsigned <=) */

loc_00361C07: ;
    ecx = MEM32(ebp + -44);
    eax = MEM32(ebp + -4);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ecx + eax;
    eax = MEM32(ebp + -28);
    edi = ecx + eax;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00361C1E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00361BC8; /* jne: not equal / not zero */

loc_00361C23: ;
    esi = MEM32(ebp + -12);
    goto loc_00361C91;

loc_00361C28: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -24));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00361C31u); RECOMP_ABI_CALL(0x0035CC80u, sub_0035CC80); /* call 0x0035CC80 */

loc_00361C31: ;
    ebx = eax;
    goto loc_00361C72;

loc_00361C35: ;
    eax = MEM32(ebp + -28);
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00361C45; /* jg: greater (signed >) */

loc_00361C40: ;
    _fb = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -52);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00361C61;

loc_00361C45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00361C4F; /* jl: less (signed <) */

loc_00361C4A: ;
    _fb = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -56);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00361C61;

loc_00361C4F: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + esi * 4);
    _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -36);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00361C5Fu); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_00361C5F: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00361C61: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -40) (32-bit) */
    ecx = MEM32(ebp + -8);
    MEM32(ecx + esi * 4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00361C6F; /* jge: greater or equal (signed >=) */

loc_00361C6C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00361C72;

loc_00361C6F: ;
    esi = MEM32(ebp + -44);

loc_00361C72: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -12) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00361C35; /* jne: not equal / not zero */

loc_00361C77: ;
    goto loc_00361C91;

loc_00361C79: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + esi * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -40) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00361C89; /* jge: greater or equal (signed >=) */

loc_00361C86: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00361C8C;

loc_00361C89: ;
    esi = MEM32(ebp + -44);

loc_00361C8C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -12) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00361C79; /* jne: not equal / not zero */

loc_00361C91: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -60) (32-bit) */
    ebx = MEM32(ebp + -76);
    edi = MEM32(ebp + -72);
    SET_LO8(ecx, MEM8(ebp + 0x13));
    if (CMP_NE(_fa, _fb)) goto loc_00361AB3; /* jne: not equal / not zero */

loc_00361CA3: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    MEM32(ebp + -48) = MEM32(ebp + -48) + 1;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), eax (32-bit) */
    esi = MEM32(ebp + 8);
    if (CMP_L(_fas, _fbs)) goto loc_00361A6F; /* jl: less (signed <) */

loc_00361CB6: ;
    eax = MEM32(esi + 0x24);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -84)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -84), ecx (32-bit) */
    POP32(esp, ebx);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax + 0x16E) = MEM16(eax + 0x16E) | LO16(ecx);
    _fa = (uint32_t)(MEM16(eax + 0x16E)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    eax = MEM32(ebp + 0xC);

loc_00361CCD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00361CD3
 * Original: 0x00361CD3 - 0x00361DA0 (205 bytes, 80 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00361CD3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361CD3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x18), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00361CE9; /* je: equal / zero */

loc_00361CE2: ;
    eax = MEM32(esi + 0x30);
    edi = MEM32(esi);
    goto loc_00361CEF;

loc_00361CE9: ;
    eax = MEM32(esi + 0x34);
    edi = MEM32(esi + 4);

loc_00361CEF: ;
    edx = MEM32(edi + 4);
    ecx = MEM32(edi + 0xC);
    MEM32(ebp + 0x18) = eax;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(edx + eax);
    _fb = (uint32_t)(MEM32(ecx + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ecx + eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(edi);
    edx = MEM32(edx + eax);
    _fb = (uint32_t)(MEM32(ecx + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ecx + eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x00361D12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00361D0Fu); } /* indirect call */
    }

loc_00361D12: ;
    ebx = MEM32(ebp + 0xC);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO16(eax, MEM16(esi + 0x44));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x4000 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361D62; /* je: equal / zero */

loc_00361D2B: ;
    SET_LO16(ecx, MEM16(esi + 0x10));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361D46; /* je: equal / zero */

loc_00361D34: ;
    eax = SX16(LO16(eax));
    PUSH32(esp, eax);
    eax = SX16(LO16(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00361D44u); RECOMP_ABI_CALL(0x0035CAD5u, sub_0035CAD5); /* call 0x0035CAD5 */

loc_00361D44: ;
    MEM32(ebx) = eax;

loc_00361D46: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361D8F; /* je: equal / zero */

loc_00361D4F: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x44);
    eax = SX16(LO16(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00361D60u); RECOMP_ABI_CALL(0x0035CAD5u, sub_0035CAD5); /* call 0x0035CAD5 */

loc_00361D60: ;
    goto loc_00361D8A;

loc_00361D62: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x10));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361D78; /* je: equal / zero */

loc_00361D6D: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00361D76u); RECOMP_ABI_CALL(0x0035CAF9u, sub_0035CAF9); /* call 0x0035CAF9 */

loc_00361D76: ;
    MEM32(ebx) = eax;

loc_00361D78: ;
    esi = (uint32_t)(int32_t)SMEM16(esi + 0x12);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361D8F; /* je: equal / zero */

loc_00361D81: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00361D8Au); RECOMP_ABI_CALL(0x0035CAF9u, sub_0035CAF9); /* call 0x0035CAF9 */

loc_00361D8A: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;

loc_00361D8F: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    MEM32(eax) = ecx;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00361DA0
 * Original: 0x00361DA0 - 0x00361EF7 (343 bytes, 107 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00361DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361DA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C);
    ebx = MEM32(esi + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(ebp + 8) = eax;
    if ((_fa == 0)) goto loc_00361EDD; /* je: equal / zero */

loc_00361DB9: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 0xFFFFFFFCu;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 8) (32-bit) */
    edi = MEM32(eax);
    eax = MEM32(esi + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_00361DDB; /* jne: not equal / not zero */

loc_00361DCD: ;
    edx = MEM32(eax + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    goto loc_00361DE1;

loc_00361DDB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x160) (32-bit) */

loc_00361DE1: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00361EEB; /* jge: greater or equal (signed >=) */

loc_00361DE7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00361EEB; /* jl: less (signed <) */

loc_00361DEF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361E1C; /* je: equal / zero */

loc_00361DF3: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00361E1C; /* jne: not equal / not zero */

loc_00361DFC: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361E1C; /* je: equal / zero */

loc_00361E06: ;
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00361E1C; /* je: equal / zero */

loc_00361E0F: ;
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00361E1Cu); RECOMP_ABI_CALL(0x0035F343u, sub_0035F343); /* call 0x0035F343 */

loc_00361E1C: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361EA1; /* je: equal / zero */

loc_00361E22: ;
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00361EA1; /* je: equal / zero */

loc_00361E31: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00361EA1; /* jne: not equal / not zero */

loc_00361E37: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00361E6B; /* jne: not equal / not zero */

loc_00361E3C: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00361E98; /* jne: not equal / not zero */

loc_00361E44: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00361E98; /* jne: not equal / not zero */

loc_00361E4B: ;
    _fa = (uint32_t)(MEM8(eax + 0x12D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x12D), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00361EA1; /* jne: not equal / not zero */

loc_00361E54: ;
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(MEM8(edi + ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00361E98; /* je: equal / zero */

loc_00361E60: ;
    _fa = (uint32_t)(MEM8(eax + 0x16E)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16E), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00361E98; /* jne: not equal / not zero */

loc_00361E69: ;
    goto loc_00361EA1;

loc_00361E6B: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00361E98; /* jne: not equal / not zero */

loc_00361E73: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00361E98; /* jne: not equal / not zero */

loc_00361E7A: ;
    _fa = (uint32_t)(MEM8(eax + 0x12D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x12D), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00361EA1; /* jne: not equal / not zero */

loc_00361E83: ;
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(MEM8(edi + ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00361E98; /* je: equal / zero */

loc_00361E8F: ;
    _fa = (uint32_t)(MEM8(eax + 0x16E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16E), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00361EA1; /* je: equal / zero */

loc_00361E98: ;
    _fa = (uint32_t)(MEM8(eax + 0x16E)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16E), 4 (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00361ED4; /* jbe: below or equal (unsigned <=) */

loc_00361EA1: ;
    _fa = (uint32_t)(MEM16(esi + 0x10)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x10), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361EBA; /* je: equal / zero */

loc_00361EA8: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebp + 0x18);
    eax = eax + edi * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx + 0x24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00361EBA: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x12), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00361ED4; /* je: equal / zero */

loc_00361EC1: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebp + 0x1C);
    eax = eax + edi * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx + 0x24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 2;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00361ED4: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00361DB9; /* jne: not equal / not zero */

loc_00361EDD: ;
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 0xC);

loc_00361EE4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

loc_00361EEB: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1112;
    goto loc_00361EE4;

}

/**
 * sub_00361EF7
 * Original: 0x00361EF7 - 0x00361F8C (149 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00361EF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361EF7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    if (TEST_Z(_fa, _fb)) goto loc_00361F1A; /* je: equal / zero */

loc_00361F0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    eax = MEM32(esi + 0x30);
    if (CMP_EQ(_fa, _fb)) goto loc_00361F22; /* je: equal / zero */

loc_00361F12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x160) (32-bit) */
    goto loc_00361F2E;

loc_00361F1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    eax = MEM32(esi + 0x34);
    if (CMP_NE(_fa, _fb)) goto loc_00361F12; /* jne: not equal / not zero */

loc_00361F22: ;
    ecx = MEM32(ecx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */

loc_00361F2E: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00361F7D; /* jge: greater or equal (signed >=) */

loc_00361F30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00361F7D; /* jl: less (signed <) */

loc_00361F34: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00361F49u); RECOMP_ABI_CALL(0x00361CD3u, sub_00361CD3); /* call 0x00361CD3 */

loc_00361F49: ;
    ecx = MEM32(esi + 0x18);
    eax = 0x3FFFFFFF;
    _fb = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + eax * 4;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00361F67; /* jae: above or equal (unsigned >=) */

loc_00361F5E: ;
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_00361F84;

loc_00361F67: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00361F7Bu); RECOMP_ABI_CALL(0x00361DA0u, sub_00361DA0); /* call 0x00361DA0 */

loc_00361F7B: ;
    goto loc_00361F87;

loc_00361F7D: ;
    MEM32(esi + 0x6C) = 0x1112;

loc_00361F84: ;
    eax = MEM32(esi + 0x70);

loc_00361F87: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00361F8C
 * Original: 0x00361F8C - 0x00362138 (428 bytes, 146 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00361F8C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00361F8C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00361FB3; /* je: equal / zero */

loc_00361FA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    eax = MEM32(esi + 0x30);
    if (CMP_EQ(_fa, _fb)) goto loc_00361FBB; /* je: equal / zero */

loc_00361FAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x160) (32-bit) */
    goto loc_00361FC7;

loc_00361FB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    eax = MEM32(esi + 0x34);
    if (CMP_NE(_fa, _fb)) goto loc_00361FAB; /* jne: not equal / not zero */

loc_00361FBB: ;
    ecx = MEM32(ecx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */

loc_00361FC7: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003620CB; /* jge: greater or equal (signed >=) */

loc_00361FCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003620CB; /* jl: less (signed <) */

loc_00361FD5: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00361FEAu); RECOMP_ABI_CALL(0x00361CD3u, sub_00361CD3); /* call 0x00361CD3 */

loc_00361FEA: ;
    ecx = MEM32(esi + 0x18);
    edx = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(esi + 0x24);
    edi = ecx + -4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_0036200E; /* jae: above or equal (unsigned >=) */

loc_00362002: ;
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003620D2;

loc_0036200E: ;
    edi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = ecx;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 2 (8-bit) */
    ebx = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00362055; /* jne: not equal / not zero */

loc_00362022: ;
    SET_LO16(eax, MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00362055; /* je: equal / zero */

loc_0036202D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00362055; /* je: equal / zero */

loc_00362031: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00362055; /* jne: not equal / not zero */

loc_00362035: ;
    _fa = (uint32_t)(MEM32(edx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x30), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362055; /* jne: not equal / not zero */

loc_0036203B: ;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00362042u); RECOMP_ABI_CALL(0x0035F6FCu, sub_0035F6FC); /* call 0x0035F6FC */

loc_00362042: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + 0x34);
    eax = edi + edi * 2;
    eax = MEM32(ecx + eax * 4 + 8);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;

loc_00362055: ;
    edi = MEM32(esi + 0x24);
    SET_LO8(eax, MEM8(edi + 0x125));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362077; /* je: equal / zero */

loc_00362062: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036206E; /* jne: not equal / not zero */

loc_00362066: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362077; /* je: equal / zero */

loc_0036206E: ;
    MEM32(esi + 0x6C) = 0x111C;
    goto loc_003620D2;

loc_00362077: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036212F; /* jl: less (signed <) */

loc_0036207F: ;
    eax = MEM32(esi + 8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036212F; /* jge: greater or equal (signed >=) */

loc_0036208E: ;
    SET_LO16(ecx, MEM16(esi + 0x10));
    MEM16(ebp + 8) = LO16(ecx);
    SET_LO16(ecx, MEM16(esi + 0x12));
    edx = ebx + ebx;
    ebx = MEM32(eax + 0x20);
    MEM16(ebp + -12) = LO16(ecx);
    ecx = MEM32(eax + 0x1C);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + edx);
    edx = (uint32_t)(int32_t)SMEM16(ebx + edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), eax (32-bit) */
    ebx = edx + ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003620DC; /* jne: not equal / not zero */

loc_003620B9: ;
    edi = MEM32(edi + 0x130);
    edi = ZX16(MEM16(edi + 0x10));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */

loc_003620C5: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003620CB; /* jge: greater or equal (signed >=) */

loc_003620C7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003620E4; /* jge: greater or equal (signed >=) */

loc_003620CB: ;
    MEM32(esi + 0x6C) = 0x1112;

loc_003620D2: ;
    eax = MEM32(esi + 0x70);

loc_003620D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_003620DC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x160) (32-bit) */
    goto loc_003620C5;

loc_003620E4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036212A; /* jl: less (signed <) */

loc_003620E8: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003620E9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003620F3; /* jne: not equal / not zero */

loc_003620EE: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362126; /* je: equal / zero */

loc_003620F3: ;
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036210C; /* je: equal / zero */

loc_003620FA: ;
    esi = MEM32(eax);
    edi = MEM32(ebp + -8);
    esi = esi + ecx * 4;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + edi;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi) = MEM8(esi) | 1;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0036210C: ;
    _fa = (uint32_t)(MEM16(ebp + -12)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -12), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362126; /* je: equal / zero */

loc_00362113: ;
    esi = MEM32(eax + 4);
    edi = MEM32(ebp + -16);
    esi = esi + ecx * 4;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + edi;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi) = MEM8(esi) | 2;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00362126: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003620E9; /* jne: not equal / not zero */

loc_0036212A: ;
    eax = MEM32(ebp + 0xC);
    goto loc_003620D5;

loc_0036212F: ;
    MEM32(esi + 0x6C) = 0x111A;
    goto loc_003620D2;

}

/**
 * sub_00362138
 * Original: 0x00362138 - 0x003622F7 (447 bytes, 151 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00362138(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362138: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0036215F; /* je: equal / zero */

loc_00362150: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    eax = MEM32(esi + 0x30);
    if (CMP_EQ(_fa, _fb)) goto loc_00362167; /* je: equal / zero */

loc_00362157: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x160) (32-bit) */
    goto loc_00362173;

loc_0036215F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    eax = MEM32(esi + 0x34);
    if (CMP_NE(_fa, _fb)) goto loc_00362157; /* jne: not equal / not zero */

loc_00362167: ;
    ecx = MEM32(ecx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */

loc_00362173: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0036221E; /* jge: greater or equal (signed >=) */

loc_00362179: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036221E; /* jl: less (signed <) */

loc_00362181: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00362196u); RECOMP_ABI_CALL(0x00361CD3u, sub_00361CD3); /* call 0x00361CD3 */

loc_00362196: ;
    ecx = MEM32(esi + 0x18);
    edi = MEM32(esi + 0x24);
    MEM32(ebp + 0x10) = eax;
    eax = ecx + -4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003621AF; /* jae: above or equal (unsigned >=) */

loc_003621A6: ;
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_00362225;

loc_003621AF: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = ecx;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003622EB; /* jge: greater or equal (signed >=) */

loc_003621C0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003622EB; /* jl: less (signed <) */

loc_003621C8: ;
    SET_LO8(eax, MEM8(edi + 0x125));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003621ED; /* je: equal / zero */

loc_003621D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003621E4; /* jne: not equal / not zero */

loc_003621D6: ;
    eax = MEM32(esi + 0x20);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003621ED; /* je: equal / zero */

loc_003621E4: ;
    MEM32(esi + 0x6C) = 0x111C;
    goto loc_00362225;

loc_003621ED: ;
    eax = MEM32(esi + 0x20);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    ecx = edx + eax;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ecx (32-bit) */
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    ebx = MEM32(ecx + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(ebx + eax * 2 + -2);
    MEM32(ebp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0036222F; /* jne: not equal / not zero */

loc_0036220C: ;
    ebx = MEM32(edi + 0x130);
    ebx = ZX16(MEM16(ebx + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */

loc_00362218: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0036221E; /* jge: greater or equal (signed >=) */

loc_0036221A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00362237; /* jge: greater or equal (signed >=) */

loc_0036221E: ;
    MEM32(esi + 0x6C) = 0x1112;

loc_00362225: ;
    eax = MEM32(esi + 0x70);

loc_00362228: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_0036222F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x160) (32-bit) */
    goto loc_00362218;

loc_00362237: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ecx (32-bit) */
    eax = MEM32(ecx + 0x1C);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00362284; /* jne: not equal / not zero */

loc_00362242: ;
    edi = MEM32(edi + 0x130);
    edi = ZX16(MEM16(edi + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */

loc_0036224E: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0036221E; /* jge: greater or equal (signed >=) */

loc_00362250: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036221E; /* jl: less (signed <) */

loc_00362254: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362270; /* jne: not equal / not zero */

loc_00362259: ;
    edi = MEM32(ebp + -4);
    ebx = MEM32(ecx);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(edi + ebx);
    MEM32(ebp + -16) = ebx;
    ebx = MEM32(ecx + 4);
    edi = MEM32(edi + ebx);
    MEM32(ebp + -20) = edi;

loc_00362270: ;
    _fa = (uint32_t)(MEM16(esi + 0x10)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x10), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362298; /* je: equal / zero */

loc_00362277: ;
    ecx = MEM32(ecx);
    ebx = MEM32(ebp + 8);
    edi = ecx + eax * 4;
    ecx = ecx + ebx * 4;
    goto loc_00362294;

loc_00362284: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x160) (32-bit) */
    goto loc_0036224E;

loc_0036228C: ;
    ebx = MEM32(ebp + -8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + ebx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00362294: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036228C; /* jbe: below or equal (unsigned <=) */

loc_00362298: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x12), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003622BD; /* je: equal / zero */

loc_0036229F: ;
    ecx = MEM32(esi + 0x20);
    ecx = MEM32(ecx + edx + 4);
    edi = ecx + eax * 4;
    eax = MEM32(ebp + 8);
    ecx = ecx + eax * 4;
    goto loc_003622B9;

loc_003622B1: ;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003622B9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003622B1; /* jbe: below or equal (unsigned <=) */

loc_003622BD: ;
    eax = MEM32(esi + 0x20);
    ecx = eax + edx;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003622E3; /* jne: not equal / not zero */

loc_003622C8: ;
    ecx = MEM32(ecx);
    eax = MEM32(ebp + -4);
    edi = MEM32(ebp + -16);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + ecx) = edi;
    ecx = MEM32(esi + 0x20);
    ecx = MEM32(ecx + edx + 4);
    edx = MEM32(ebp + -20);
    MEM32(eax + ecx) = edx;

loc_003622E3: ;
    eax = MEM32(ebp + 0xC);
    goto loc_00362228;

loc_003622EB: ;
    MEM32(esi + 0x6C) = 0x1116;
    goto loc_00362225;

}

/**
 * sub_003622F7
 * Original: 0x003622F7 - 0x0036236B (116 bytes, 47 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003622F7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003622F7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x24);
    ecx = 0x3FFFFFFE;
    _fb = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + ecx * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036231D; /* jae: above or equal (unsigned >=) */

loc_00362311: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_00362367;

loc_0036231D: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x10));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036233D; /* je: equal / zero */

loc_00362332: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00362339u); RECOMP_ABI_CALL(0x0035CAF9u, sub_0035CAF9); /* call 0x0035CAF9 */

loc_00362339: ;
    ebx = eax;
    goto loc_0036233F;

loc_0036233D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036233F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x12));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362353; /* je: equal / zero */

loc_0036234A: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00362351u); RECOMP_ABI_CALL(0x0035CAF9u, sub_0035CAF9); /* call 0x0035CAF9 */

loc_00362351: ;
    goto loc_00362355;

loc_00362353: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00362355: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(esp + 0x24));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00362365u); RECOMP_ABI_CALL(0x00361DA0u, sub_00361DA0); /* call 0x00361DA0 */

loc_00362365: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00362367: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036236B
 * Original: 0x0036236B - 0x003627C3 (1112 bytes, 367 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036236B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036236B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C);
    ebx = MEM32(esi + 0x34);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    MEM32(ebp + -8) = ebx;
    ebx = MEM32(esi + 0x24);
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_003623C0; /* jne: not equal / not zero */

loc_0036239D: ;
    ebx = MEM32(ebx + 0x130);
    ebx = ZX16(MEM16(ebx + 0x10));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */

loc_003623A9: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003623AF; /* jge: greater or equal (signed >=) */

loc_003623AB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003623C8; /* jge: greater or equal (signed >=) */

loc_003623AF: ;
    MEM32(esi + 0x6C) = 0x1112;

loc_003623B6: ;
    eax = MEM32(esi + 0x70);

loc_003623B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_003623C0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 0x160) (32-bit) */
    goto loc_003623A9;

loc_003623C8: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ecx (32-bit) */
    edx = MEM32(esi + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_003623E7; /* jne: not equal / not zero */

loc_003623D0: ;
    edx = MEM32(edx + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003623AF; /* jge: greater or equal (signed >=) */

loc_003623DF: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003623F6; /* jge: greater or equal (signed >=) */

loc_003623E5: ;
    goto loc_003623AF;

loc_003623E7: ;
    ebx = MEM32(ebp + -8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx + 0x160) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003623AF; /* jge: greater or equal (signed >=) */

loc_003623F2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003623AF; /* jl: less (signed <) */

loc_003623F6: ;
    ebx = MEM32(esi + 0x48);
    edx = MEM32(esi + 0x18);
    MEM32(ebp + -48) = ebx;
    ebx = MEM32(esi + 0x4C);
    MEM32(ebp + -36) = ebx;
    ebx = MEM32(ebp + 8);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -4) = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(esi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00362420; /* jae: above or equal (unsigned >=) */

loc_00362417: ;
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003623B6;

loc_00362420: ;
    edx = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362464; /* je: equal / zero */

loc_00362427: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362464; /* je: equal / zero */

loc_0036242B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362464; /* je: equal / zero */

loc_0036242F: ;
    _fa = (uint32_t)(MEM8(ebx + 0x14D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x14D), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362464; /* jne: not equal / not zero */

loc_00362438: ;
    ebx = MEM32(ebp + -12);
    edx = MEM32(eax + 0x10);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ebx + edx);
    MEM32(ebp + -24) = edx;
    edx = MEM32(eax + 0x14);
    edx = MEM32(ebx + edx);
    MEM32(ebp + -20) = edx;
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + 0x14);
    MEM32(ebp + -60) = ecx;
    ecx = MEM32(edi + 0x10);
    MEM32(ebp + -44) = ecx;
    ecx = MEM32(edi + 0x14);
    goto loc_0036248E;

loc_00362464: ;
    ebx = MEM32(ebp + -12);
    edx = MEM32(eax + 8);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ebx + edx);
    MEM32(ebp + -24) = edx;
    edx = MEM32(eax + 0xC);
    edx = MEM32(ebx + edx);
    MEM32(ebp + -20) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(ebp + -60) = ecx;
    ecx = MEM32(edi + 8);
    MEM32(ebp + -44) = ecx;
    ecx = MEM32(edi + 0xC);

loc_0036248E: ;
    MEM32(ebp + -40) = ecx;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    eax = MEM32(ebx + eax);
    ecx = MEM32(ebx + ecx);
    ebx = MEM32(ebp + -8);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -60);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ebx + eax);
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -32) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx + edx);
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x50); PUSH32(esp, 0x003624BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003624BAu); } /* indirect call */
    }

loc_003624BD: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -52) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00362728; /* je: equal / zero */

loc_003624CA: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36001C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0x36001C (32-bit) */
    eax = MEM32(ebp + -16);
    if (CMP_NE(_fa, _fb)) goto loc_00362586; /* jne: not equal / not zero */

loc_003624DA: ;
    eax = MEM32(eax);
    ebx = MEM32(eax + ebx);
    _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + -32);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    MEM32(ebp + -16) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_003627B1; /* je: equal / zero */

loc_003624EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + -4);
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    ebx = MEM32(eax);
    eax = MEM32(esi + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_0036250F; /* jne: not equal / not zero */

loc_00362501: ;
    edx = MEM32(eax + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    goto loc_00362515;

loc_0036250F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0x160) (32-bit) */

loc_00362515: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003623AF; /* jge: greater or equal (signed >=) */

loc_0036251B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003623AF; /* jl: less (signed <) */

loc_00362523: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362551; /* je: equal / zero */

loc_00362527: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362551; /* jne: not equal / not zero */

loc_00362530: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362551; /* je: equal / zero */

loc_0036253A: ;
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00362551; /* je: equal / zero */

loc_00362543: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00362551u); RECOMP_ABI_CALL(0x0035F441u, sub_0035F441); /* call 0x0035F441 */

loc_00362551: ;
    eax = MEM32(ebp + -44);
    eax = MEM32(eax + ebx * 4);
    PUSH32(esp, MEM32(ebp + -52));
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00362566u); RECOMP_ABI_CALL(0x0035CAD5u, sub_0035CAD5); /* call 0x0035CAD5 */

loc_00362566: ;
    ecx = MEM32(ebp + -32);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi);
    MEM32(ecx + ebx * 4) = eax;
    eax = MEM32(edi + 0x24);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003624EE; /* jne: not equal / not zero */

loc_00362581: ;
    goto loc_003627B1;

loc_00362586: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36003C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0x36003C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362641; /* jne: not equal / not zero */

loc_00362593: ;
    eax = MEM32(eax + 4);
    ebx = MEM32(eax + ebx);
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + -28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    MEM32(ebp + -16) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_003627B1; /* je: equal / zero */

loc_003625A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + -4);
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    ebx = MEM32(eax);
    eax = MEM32(esi + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_003625C9; /* jne: not equal / not zero */

loc_003625BB: ;
    edx = MEM32(eax + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    goto loc_003625CF;

loc_003625C9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0x160) (32-bit) */

loc_003625CF: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003623AF; /* jge: greater or equal (signed >=) */

loc_003625D5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003623AF; /* jl: less (signed <) */

loc_003625DD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036260B; /* je: equal / zero */

loc_003625E1: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036260B; /* jne: not equal / not zero */

loc_003625EA: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036260B; /* je: equal / zero */

loc_003625F4: ;
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036260B; /* je: equal / zero */

loc_003625FD: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036260Bu); RECOMP_ABI_CALL(0x0035F441u, sub_0035F441); /* call 0x0035F441 */

loc_0036260B: ;
    eax = MEM32(ebp + -40);
    eax = MEM32(eax + ebx * 4);
    PUSH32(esp, MEM32(ebp + -52));
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00362620u); RECOMP_ABI_CALL(0x0035CAD5u, sub_0035CAD5); /* call 0x0035CAD5 */

loc_00362620: ;
    ecx = MEM32(ebp + -28);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi + 4);
    MEM32(ecx + ebx * 4) = eax;
    eax = MEM32(edi + 0x24);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 2;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003625A8; /* jne: not equal / not zero */

loc_0036263C: ;
    goto loc_003627B1;

loc_00362641: ;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    ecx = MEM32(ecx + ebx);
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(eax + ebx);
    _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + -36); PUSH32(esp, 0x00362658u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00362655u); } /* indirect call */
    }

loc_00362658: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003627B1; /* je: equal / zero */

loc_00362665: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + -4);
    ebx = MEM32(eax);
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    eax = MEM32(esi + 0x24);
    MEM32(ebp + -60) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00362689; /* jne: not equal / not zero */

loc_0036267B: ;
    edx = MEM32(eax + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    goto loc_0036268F;

loc_00362689: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0x160) (32-bit) */

loc_0036268F: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003623AF; /* jge: greater or equal (signed >=) */

loc_00362695: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003623AF; /* jl: less (signed <) */

loc_0036269D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003626CB; /* je: equal / zero */

loc_003626A1: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003626CB; /* jne: not equal / not zero */

loc_003626AA: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003626CB; /* je: equal / zero */

loc_003626B4: ;
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003626CB; /* je: equal / zero */

loc_003626BD: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003626CBu); RECOMP_ABI_CALL(0x0035F441u, sub_0035F441); /* call 0x0035F441 */

loc_003626CB: ;
    eax = MEM32(ebp + -40);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ebx + eax);
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -44);
    eax = MEM32(ebx + eax);
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + -36); PUSH32(esp, 0x003626E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003626E3u); } /* indirect call */
    }

loc_003626E6: ;
    PUSH32(esp, MEM32(ebp + -52));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003626F2u); RECOMP_ABI_CALL(0x0035CAD5u, sub_0035CAD5); /* call 0x0035CAD5 */

loc_003626F2: ;
    MEM32(ebp + -56) = eax;
    eax = MEM32(edi + 4);
    eax = MEM32(eax + ebx);
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    eax = MEM32(eax + ebx);
    _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + -36); PUSH32(esp, 0x0036270Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00362709u); } /* indirect call */
    }

loc_0036270C: ;
    ecx = MEM32(ebp + -56);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -60));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + -48); PUSH32(esp, 0x0036271Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00362717u); } /* indirect call */
    }

loc_0036271A: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00362665; /* jne: not equal / not zero */

loc_00362723: ;
    goto loc_003627B1;

loc_00362728: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003627B1; /* je: equal / zero */

loc_00362731: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    ecx = MEM32(esi + 0x24);
    MEM32(ebp + -60) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00362753; /* jne: not equal / not zero */

loc_00362745: ;
    ecx = MEM32(ecx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    goto loc_00362759;

loc_00362753: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x160) (32-bit) */

loc_00362759: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003623AF; /* jge: greater or equal (signed >=) */

loc_0036275F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003623AF; /* jl: less (signed <) */

loc_00362767: ;
    ebx = eax;
    eax = MEM32(ebp + -40);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ebx + eax);
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -44);
    eax = MEM32(ebx + eax);
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + -36); PUSH32(esp, 0x00362784u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00362781u); } /* indirect call */
    }

loc_00362784: ;
    MEM32(ebp + -56) = eax;
    eax = MEM32(edi + 4);
    eax = MEM32(eax + ebx);
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    eax = MEM32(eax + ebx);
    _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + -36); PUSH32(esp, 0x0036279Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036279Bu); } /* indirect call */
    }

loc_0036279E: ;
    ecx = MEM32(ebp + -56);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -60));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + -48); PUSH32(esp, 0x003627ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003627A9u); } /* indirect call */
    }

loc_003627AC: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00362731; /* jne: not equal / not zero */

loc_003627B1: ;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x18) = eax;
    eax = MEM32(ebp + 0xC);
    goto loc_003623B9;

}

/**
 * sub_003627C3
 * Original: 0x003627C3 - 0x003629A3 (480 bytes, 172 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003627C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003627C3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x2C);
    MEM32(ebp + -4) = eax;
    eax = MEM32(esi + 0x18);
    ebx = eax + -8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx) (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    MEM32(ebp + 8) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_003627F3; /* jae: above or equal (unsigned >=) */

loc_003627EA: ;
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_0036282A;

loc_003627F3: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    ebx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    MEM32(ebp + -8) = ebx;
    ebx = MEM32(eax);
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    MEM32(ebp + -12) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00362834; /* jne: not equal / not zero */

loc_00362811: ;
    eax = MEM32(ecx + 0x130);
    eax = ZX16(MEM16(eax + 0x10));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */

loc_0036281D: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00362823; /* jge: greater or equal (signed >=) */

loc_0036281F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036283C; /* jge: greater or equal (signed >=) */

loc_00362823: ;
    MEM32(esi + 0x6C) = 0x1112;

loc_0036282A: ;
    eax = MEM32(esi + 0x70);

loc_0036282D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_00362834: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x160) (32-bit) */
    goto loc_0036281D;

loc_0036283C: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362998; /* jne: not equal / not zero */

loc_00362845: ;
    eax = MEM32(ecx + 0x130);
    eax = ZX16(MEM16(eax + 0x10));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */

loc_00362851: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00362823; /* jge: greater or equal (signed >=) */

loc_00362853: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00362823; /* jl: less (signed <) */

loc_00362857: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362893; /* je: equal / zero */

loc_0036285C: ;
    _fa = (uint32_t)(MEM8(ecx + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036288E; /* jne: not equal / not zero */

loc_00362865: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036288E; /* je: equal / zero */

loc_0036286F: ;
    _fa = (uint32_t)(MEM8(ecx + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036288E; /* je: equal / zero */

loc_00362878: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00362882u); RECOMP_ABI_CALL(0x0035F78Eu, sub_0035F78E); /* call 0x0035F78E */

loc_00362882: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036288Eu); RECOMP_ABI_CALL(0x0035F343u, sub_0035F343); /* call 0x0035F343 */

loc_0036288E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003628F2; /* jne: not equal / not zero */

loc_00362893: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xC));
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003628A5u); RECOMP_ABI_CALL(0x0035CAF9u, sub_0035CAF9); /* call 0x0035CAF9 */

loc_003628A5: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + 8);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi + 8);
    MEM32(ebx + ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xE));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003628C6u); RECOMP_ABI_CALL(0x0035CAF9u, sub_0035CAF9); /* call 0x0035CAF9 */

loc_003628C6: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi + 0xC);
    MEM32(ebx + ecx) = eax;
    eax = MEM32(edi + 8);
    eax = MEM32(ebx + eax);
    ecx = MEM32(edi);
    MEM32(ebx + ecx) = eax;
    eax = MEM32(edi + 0xC);
    eax = MEM32(ebx + eax);
    ecx = MEM32(edi + 4);
    MEM32(ebx + ecx) = eax;
    ebx = MEM32(ebp + -12);

loc_003628F2: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036294D; /* jne: not equal / not zero */

loc_003628FB: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036294D; /* je: equal / zero */

loc_00362905: ;
    eax = MEM32(edi + 0xC);
    eax = MEM32(eax + ebx * 4);
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    eax = MEM32(eax + ebx * 4);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x50); PUSH32(esp, 0x0036292Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00362929u); } /* indirect call */
    }

loc_0036292C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036294D; /* je: equal / zero */

loc_00362930: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ebp + -8);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0036294A; /* jg: greater (signed >) */

loc_00362944: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036294D; /* jge: greater or equal (signed >=) */

loc_0036294A: ;
    MEM32(ebp + -8) = eax;

loc_0036294D: ;
    eax = MEM32(edi + 4);
    eax = MEM32(eax + ebx * 4);
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + 4);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    eax = MEM32(eax + ebx * 4);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x00362972u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036296Fu); } /* indirect call */
    }

loc_00362972: ;
    ecx = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x0036297Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036297Bu); } /* indirect call */
    }

loc_0036297E: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_00362990; /* je: equal / zero */

loc_0036298D: ;
    MEM32(esi + 0x2C) = ebx;

loc_00362990: ;
    eax = MEM32(ebp + 0xC);
    goto loc_0036282D;

loc_00362998: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0x160) (32-bit) */
    goto loc_00362851;

}

/**
 * sub_003629A3
 * Original: 0x003629A3 - 0x00362AE7 (324 bytes, 112 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003629A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003629A3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 4);
    ebx = MEM32(esi + 4);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + edx);
    eax = MEM32(eax + ecx);
    MEM32(ebp + -8) = eax;
    eax = MEM32(esi + 0x3C);
    MEM32(ebp + -12) = edx;
    edx = MEM32(esi + 0x18);
    ecx = 0x3FFFFFFF;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edx + ecx * 4;
    edx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003629F0; /* jae: above or equal (unsigned >=) */

loc_003629E1: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_00362AD5;

loc_003629F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_00362ACD; /* jl: less (signed <) */

loc_003629F9: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 0xFFFFFFFCu;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edi = MEM32(eax);
    eax = MEM32(esi + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_00362A1A; /* jne: not equal / not zero */

loc_00362A0C: ;
    edx = MEM32(eax + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    goto loc_00362A20;

loc_00362A1A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x160) (32-bit) */

loc_00362A20: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00362ADB; /* jge: greater or equal (signed >=) */

loc_00362A26: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00362ADB; /* jl: less (signed <) */

loc_00362A2E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362AA0; /* je: equal / zero */

loc_00362A32: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362AA0; /* jne: not equal / not zero */

loc_00362A3B: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362AA0; /* je: equal / zero */

loc_00362A45: ;
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00362AA0; /* je: equal / zero */

loc_00362A4E: ;
    SET_LO16(ecx, MEM16(esi + 0x82));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362A93; /* je: equal / zero */

loc_00362A5B: ;
    SET_LO16(eax, MEM16(esi + 0x84));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362A93; /* je: equal / zero */

loc_00362A68: ;
    eax = SX16(LO16(eax));
    PUSH32(esp, eax);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 4));
    MEM32(ebp + 8) = eax;
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00362A7Fu); RECOMP_ABI_CALL(0x0035F936u, sub_0035F936); /* call 0x0035F936 */

loc_00362A7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362A93; /* je: equal / zero */

loc_00362A83: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00362A91u); RECOMP_ABI_CALL(0x0035F441u, sub_0035F441); /* call 0x0035F441 */

loc_00362A91: ;
    goto loc_00362AA0;

loc_00362A93: ;
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x2C));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00362AA0u); RECOMP_ABI_CALL(0x0035F343u, sub_0035F343); /* call 0x0035F343 */

loc_00362AA0: ;
    eax = MEM32(ebx + 4);
    eax = MEM32(eax + edi * 4);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    eax = MEM32(eax + edi * 4);
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x00362AB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00362AB4u); } /* indirect call */
    }

loc_00362AB7: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x00362AC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00362ABDu); } /* indirect call */
    }

loc_00362AC0: ;
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003629F9; /* jge: greater or equal (signed >=) */

loc_00362ACD: ;
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 0xC);

loc_00362AD4: ;
    POP32(esp, edi);

loc_00362AD5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_00362ADB: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1112;
    goto loc_00362AD4;

}

/**
 * sub_00362AE7
 * Original: 0x00362AE7 - 0x00362BE4 (253 bytes, 96 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00362AE7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362AE7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    ebx = MEM32(esi + 0x24);
    ecx = eax + -8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00362B0A; /* jae: above or equal (unsigned >=) */

loc_00362AFE: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_00362B48;

loc_00362B0A: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    eax = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00362B4E; /* jne: not equal / not zero */

loc_00362B2B: ;
    ecx = MEM32(ebx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */

loc_00362B37: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00362B3D; /* jge: greater or equal (signed >=) */

loc_00362B39: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00362B56; /* jge: greater or equal (signed >=) */

loc_00362B3D: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1112;

loc_00362B47: ;
    POP32(esp, edi);

loc_00362B48: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_00362B4E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 0x160) (32-bit) */
    goto loc_00362B37;

loc_00362B56: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362B73; /* jne: not equal / not zero */

loc_00362B5C: ;
    edi = MEM32(ebx + 0x130);
    edi = ZX16(MEM16(edi + 0x10));
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00362B3D; /* jge: greater or equal (signed >=) */

loc_00362B6B: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00362B82; /* jge: greater or equal (signed >=) */

loc_00362B71: ;
    goto loc_00362B3D;

loc_00362B73: ;
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0x160) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00362B3D; /* jge: greater or equal (signed >=) */

loc_00362B7E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00362B3D; /* jl: less (signed <) */

loc_00362B82: ;
    edi = MEM32(eax);
    ebx = MEM32(ecx);
    eax = MEM32(eax + 4);
    ecx = MEM32(ecx + 4);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(edi + edx);
    MEM32(ebp + -4) = edx;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ebx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ebx + edx * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + -4);
    eax = MEM32(eax + edx);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3600BB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3600BB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362BC1; /* je: equal / zero */

loc_00362BB2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3600C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3600C2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362BBF; /* je: equal / zero */

loc_00362BBA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x00362BBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00362BBDu); } /* indirect call */
    }

loc_00362BBF: ;
    edi = eax;

loc_00362BC1: ;
    ebx = edi;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x00362BCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00362BCCu); } /* indirect call */
    }

loc_00362BCF: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x00362BDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00362BD9u); } /* indirect call */
    }

loc_00362BDC: ;
    eax = MEM32(ebp + 0xC);
    goto loc_00362B47;

}

/**
 * sub_00362BE4
 * Original: 0x00362BE4 - 0x00362C1A (54 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362BE4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362BE4: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00362C03; /* jae: above or equal (unsigned >=) */

loc_00362BF7: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_00362C17;

loc_00362C03: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    SET_LO16(eax, MEM16(eax));
    MEM16(edx + 0x8C) = LO16(eax);
    eax = MEM32(esp + 8);

loc_00362C17: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00362C1A
 * Original: 0x00362C1A - 0x00362C98 (126 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362C1A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362C1A: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x3C);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x18);
    ecx = 0x3FFFFFFF;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edx + ecx * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00362C46; /* jae: above or equal (unsigned >=) */

loc_00362C3D: ;
    MEM32(eax + 0x6C) = 0x1110;
    goto loc_00362C93;

loc_00362C46: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00362C7B; /* jl: less (signed <) */

loc_00362C4A: ;
    ebx = MEM32(eax + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax) (32-bit) */
    ecx = MEM32(edx);
    ebx = MEM32(eax + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_00362C67; /* jne: not equal / not zero */

loc_00362C59: ;
    ebx = MEM32(ebx + 0x130);
    ebx = ZX16(MEM16(ebx + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    goto loc_00362C6D;

loc_00362C67: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x160) (32-bit) */

loc_00362C6D: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00362C8C; /* jge: greater or equal (signed >=) */

loc_00362C6F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00362C8C; /* jl: less (signed <) */

loc_00362C73: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx) = MEM8(ecx) ^ 1;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00362C4A; /* jns: not sign (positive) */

loc_00362C7B: ;
    MEM32(eax + 0x3C) = MEM32(eax + 0x3C) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x18) = edx;
    eax = MEM32(esp + 0x14);

loc_00362C86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00362C8C: ;
    MEM32(eax + 0x6C) = 0x1112;

loc_00362C93: ;
    eax = MEM32(eax + 0x70);
    goto loc_00362C86;

}

/**
 * sub_00362C98
 * Original: 0x00362C98 - 0x00362D31 (153 bytes, 59 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00362C98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362C98: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = MEM32(edi + 0x18);
    MEM32(ebp + 8) = ecx;
    ecx = MEM32(eax + 0x18);
    esi = ecx + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00362CBE; /* jae: above or equal (unsigned >=) */

loc_00362CB5: ;
    MEM32(eax + 0x6C) = 0x1110;
    goto loc_00362CE3;

loc_00362CBE: ;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), edi (32-bit) */
    esi = ecx + -4;
    ecx = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_00362CEC; /* jne: not equal / not zero */

loc_00362CC8: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x130);
    ebx = ZX16(MEM16(ebx + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebx);

loc_00362CD6: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00362CDC; /* jge: greater or equal (signed >=) */

loc_00362CD8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00362CF4; /* jge: greater or equal (signed >=) */

loc_00362CDC: ;
    MEM32(eax + 0x6C) = 0x1112;

loc_00362CE3: ;
    eax = MEM32(eax + 0x70);

loc_00362CE6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00362CEC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x160) (32-bit) */
    goto loc_00362CD6;

loc_00362CF4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), edi (32-bit) */
    edi = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_00362D29; /* jne: not equal / not zero */

loc_00362CFE: ;
    edx = MEM32(edx + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */

loc_00362D0A: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00362CDC; /* jge: greater or equal (signed >=) */

loc_00362D0C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00362CDC; /* jl: less (signed <) */

loc_00362D10: ;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_00362D21; /* js: sign (negative) */

loc_00362D19: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00362D1A: ;
    MEM8(edx) = MEM8(edx) | 1;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00362D1A; /* jne: not equal / not zero */

loc_00362D21: ;
    MEM32(eax + 0x18) = esi;
    eax = MEM32(ebp + 0xC);
    goto loc_00362CE6;

loc_00362D29: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx + 0x160) (32-bit) */
    goto loc_00362D0A;

}

/**
 * sub_00362D31
 * Original: 0x00362D31 - 0x00362DCF (158 bytes, 60 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00362D31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362D31: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = MEM32(edi + 0x18);
    MEM32(ebp + 8) = ecx;
    ecx = MEM32(eax + 0x18);
    edx = ecx + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00362D57; /* jae: above or equal (unsigned >=) */

loc_00362D4E: ;
    MEM32(eax + 0x6C) = 0x1110;
    goto loc_00362D7F;

loc_00362D57: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), edi (32-bit) */
    MEM32(eax + 0x18) = ecx;
    edx = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00362D88; /* jne: not equal / not zero */

loc_00362D64: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x130);
    ebx = ZX16(MEM16(ebx + 0x10));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    POP32(esp, ebx);

loc_00362D72: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00362D78; /* jge: greater or equal (signed >=) */

loc_00362D74: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00362D90; /* jge: greater or equal (signed >=) */

loc_00362D78: ;
    MEM32(eax + 0x6C) = 0x1112;

loc_00362D7F: ;
    eax = MEM32(eax + 0x70);

loc_00362D82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00362D88: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x160) (32-bit) */
    goto loc_00362D72;

loc_00362D90: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), edi (32-bit) */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00362DC7; /* jne: not equal / not zero */

loc_00362D9D: ;
    esi = MEM32(esi + 0x130);
    esi = ZX16(MEM16(esi + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */

loc_00362DA9: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00362D78; /* jge: greater or equal (signed >=) */

loc_00362DAB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00362D78; /* jl: less (signed <) */

loc_00362DAF: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_00362DC2; /* js: sign (negative) */

loc_00362DB8: ;
    ecx = edx + 1;

loc_00362DBB: ;
    MEM8(eax) = MEM8(eax) & 0xFE;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00362DBB; /* jne: not equal / not zero */

loc_00362DC2: ;
    eax = MEM32(ebp + 0xC);
    goto loc_00362D82;

loc_00362DC7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x160) (32-bit) */
    goto loc_00362DA9;

}

/**
 * sub_00362DCF
 * Original: 0x00362DCF - 0x00362E09 (58 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362DCF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362DCF: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 0x18);
    eax = MEM32(edx + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00362DEE; /* jae: above or equal (unsigned >=) */

loc_00362DE2: ;
    eax = MEM32(edx + 0x70);
    MEM32(edx + 0x6C) = 0x1110;
    goto loc_00362E06;

loc_00362DEE: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x18) = ecx;
    edx = MEM32(eax + 0x68);
    edx = edx & 0xFFFF0000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x68) = edx;
    eax = MEM32(esp + 8);

loc_00362E06: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00362E09
 * Original: 0x00362E09 - 0x00362E48 (63 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362E09(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362E09: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 0x18);
    eax = MEM32(edx + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00362E28; /* jae: above or equal (unsigned >=) */

loc_00362E1C: ;
    eax = MEM32(edx + 0x70);
    MEM32(edx + 0x6C) = 0x1110;
    goto loc_00362E45;

loc_00362E28: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x18) = ecx;
    edx = MEM32(eax + 0x68);
    ecx = MEM32(ecx);
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x68) = edx;
    eax = MEM32(esp + 8);

loc_00362E45: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00362E48
 * Original: 0x00362E48 - 0x00362EA9 (97 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362E48(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362E48: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00362E66; /* jae: above or equal (unsigned >=) */

loc_00362E5A: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_00362EA5;

loc_00362E66: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    esi = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    _fa = (uint32_t)(MEM8(edx + 0x124)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x124), 0 (8-bit) */
    eax = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00362EA1; /* je: equal / zero */

loc_00362E7F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362E8A; /* jne: not equal / not zero */

loc_00362E84: ;
    MEM32(edx + 0x6C) = MEM32(edx + 0x6C) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(edx + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00362E9E;

loc_00362E8A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362E95; /* jne: not equal / not zero */

loc_00362E8F: ;
    MEM32(edx + 0x6C) = MEM32(edx + 0x6C) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(edx + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00362E9E;

loc_00362E95: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00362E9E; /* jne: not equal / not zero */

loc_00362E9A: ;
    MEM32(edx + 0x6C) = MEM32(edx + 0x6C) & 0xFFFFFFFBu;
    _fa = (uint32_t)(MEM32(edx + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00362E9E: ;
    MEM32(edx + 0x6C) = MEM32(edx + 0x6C) | eax;
    _fa = (uint32_t)(MEM32(edx + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00362EA1: ;
    eax = MEM32(esp + 0xC);

loc_00362EA5: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00362EA9
 * Original: 0x00362EA9 - 0x00362EF2 (73 bytes, 29 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00362EA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362EA9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x24);
    esi = eax + edx * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x15C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00362ED1; /* jbe: below or equal (unsigned <=) */

loc_00362EC5: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1111;
    goto loc_00362EEC;

loc_00362ED1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362EE6; /* je: equal / zero */

loc_00362ED5: ;
    esi = MEM32(ebp + 0x10);
    esi = ZX8(MEM8(esi));
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00362ED5; /* jne: not equal / not zero */

loc_00362EE6: ;
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(ebp + 0x10);

loc_00362EEC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00362EF2
 * Original: 0x00362EF2 - 0x00362F4D (91 bytes, 35 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362EF2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362EF2: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    ecx = edx + eax * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x15C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00362F19; /* jbe: below or equal (unsigned <=) */

loc_00362F0D: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1111;
    goto loc_00362F48;

loc_00362F19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00362F41; /* je: equal / zero */

loc_00362F1D: ;
    edi = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);

loc_00362F24: ;
    SET_LO16(ecx, ZX8(MEM8(eax)));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ebx, ZX8(MEM8(eax)));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = SX16(LO16(ecx));
    MEM32(edx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00362F24; /* jne: not equal / not zero */

loc_00362F3E: ;
    POP32(esp, ebx);
    goto loc_00362F45;

loc_00362F41: ;
    eax = MEM32(esp + 0x14);

loc_00362F45: ;
    MEM32(esi + 0x18) = edx;

loc_00362F48: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00362F4D
 * Original: 0x00362F4D - 0x00362F83 (54 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362F4D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362F4D: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 0x15C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00362F6F; /* jbe: below or equal (unsigned <=) */

loc_00362F63: ;
    MEM32(eax + 0x6C) = 0x1111;
    eax = MEM32(eax + 0x70);
    goto loc_00362F7F;

loc_00362F6F: ;
    edx = MEM32(esp + 0xC);
    esi = ZX8(MEM8(edx));
    MEM32(ecx) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 4;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + 1;

loc_00362F7F: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00362F83
 * Original: 0x00362F83 - 0x00362F9D (26 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362F83(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362F83: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xFFFFFF51u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF51u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00362F9Au); RECOMP_ABI_CALL(0x00362EA9u, sub_00362EA9); /* call 0x00362EA9 */

loc_00362F9A: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00362F9D
 * Original: 0x00362F9D - 0x00362FB3 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362F9D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362F9D: ;
    eax = MEM32(esp + 8);
    ecx = ZX8(MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00362FB0u); RECOMP_ABI_CALL(0x00362EA9u, sub_00362EA9); /* call 0x00362EA9 */

loc_00362FB0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00362FB3
 * Original: 0x00362FB3 - 0x00362FF9 (70 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362FB3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362FB3: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    edx = esi + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x15C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00362FD5; /* jbe: below or equal (unsigned <=) */

loc_00362FC9: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1111;
    goto loc_00362FF5;

loc_00362FD5: ;
    edx = MEM32(esp + 0xC);
    SET_LO16(eax, ZX8(MEM8(edx)));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    SET_LO16(edi, ZX8(MEM8(edx)));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = SX16(LO16(eax));
    MEM32(esi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) + 4;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + 1;
    POP32(esp, edi);

loc_00362FF5: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00362FF9
 * Original: 0x00362FF9 - 0x00363013 (26 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00362FF9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00362FF9: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xFFFFFF49u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF49u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00363010u); RECOMP_ABI_CALL(0x00362EF2u, sub_00362EF2); /* call 0x00362EF2 */

loc_00363010: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363013
 * Original: 0x00363013 - 0x00363029 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363013(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363013: ;
    eax = MEM32(esp + 8);
    ecx = ZX8(MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00363026u); RECOMP_ABI_CALL(0x00362EF2u, sub_00362EF2); /* call 0x00362EF2 */

loc_00363026: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363029
 * Original: 0x00363029 - 0x00363082 (89 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363029(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363029: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00363044; /* jae: above or equal (unsigned >=) */

loc_0036303B: ;
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_0036307B;

loc_00363044: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    esi = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(ecx + 0x18) = eax;
    edi = MEM32(edx + 0x130);
    edi = ZX16(MEM16(edi + 0x12));
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_00363074; /* jge: greater or equal (signed >=) */

loc_00363064: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00363074; /* jl: less (signed <) */

loc_00363068: ;
    ecx = MEM32(edx + 4);
    MEM32(ecx + eax * 4) = esi;
    eax = MEM32(esp + 0xC);
    goto loc_0036307E;

loc_00363074: ;
    MEM32(ecx + 0x6C) = 0x1119;

loc_0036307B: ;
    eax = MEM32(ecx + 0x70);

loc_0036307E: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363082
 * Original: 0x00363082 - 0x00363108 (134 bytes, 44 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363082(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363082: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = edx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003630A0; /* jae: above or equal (unsigned >=) */

loc_00363094: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_00363104;

loc_003630A0: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = edx;
    esi = MEM32(ecx + 0x130);
    esi = ZX16(MEM16(esi + 0x12));
    PUSH32(esp, edi);
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003630F9; /* jge: greater or equal (signed >=) */

loc_003630B7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003630F9; /* jl: less (signed <) */

loc_003630BB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003630E7; /* jne: not equal / not zero */

loc_003630C0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x16C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x16C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003630E7; /* je: equal / zero */

loc_003630C9: ;
    _fa = (uint32_t)(MEM8(ecx + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003630E7; /* jne: not equal / not zero */

loc_003630CF: ;
    esi = ecx + 0x16E;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi), 0x800 (16-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003630E7; /* jbe: below or equal (unsigned <=) */

loc_003630DC: ;
    MEM8(esi) = MEM8(esi) | 8;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(eax + 0x18);
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003630EF;

loc_003630E7: ;
    ecx = MEM32(ecx + 4);
    ecx = MEM32(ecx + edi * 4);
    MEM32(edx) = ecx;

loc_003630EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 4;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x10);
    goto loc_00363103;

loc_003630F9: ;
    MEM32(eax + 0x6C) = 0x1119;
    eax = MEM32(eax + 0x70);

loc_00363103: ;
    POP32(esp, edi);

loc_00363104: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363108
 * Original: 0x00363108 - 0x00363182 (122 bytes, 44 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363108(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363108: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x24);
    edx = eax + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00363126; /* jae: above or equal (unsigned >=) */

loc_0036311A: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_0036317E;

loc_00363126: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = ZX16(MEM16(ecx + 0x134));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00363172; /* jge: greater or equal (signed >=) */

loc_00363143: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00363172; /* jl: less (signed <) */

loc_00363147: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363163; /* je: equal / zero */

loc_0036314B: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36017A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 0x36017A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363163; /* je: equal / zero */

loc_00363154: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036315Au); RECOMP_ABI_CALL(0x003600C9u, sub_003600C9); /* call 0x003600C9 */

loc_0036315A: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00363161u); RECOMP_ABI_CALL(0x0035CC80u, sub_0035CC80); /* call 0x0035CC80 */

loc_00363161: ;
    ebx = eax;

loc_00363163: ;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 8);
    MEM32(eax + edi * 4) = ebx;
    eax = MEM32(esp + 0x14);
    goto loc_0036317C;

loc_00363172: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x111B;

loc_0036317C: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0036317E: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363182
 * Original: 0x00363182 - 0x003631E9 (103 bytes, 35 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363182(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363182: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x24);
    edx = eax + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003631A0; /* jae: above or equal (unsigned >=) */

loc_00363194: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003631E5;

loc_003631A0: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = ZX16(MEM16(esi + 0x134));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003631DA; /* jge: greater or equal (signed >=) */

loc_003631BC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003631DA; /* jl: less (signed <) */

loc_003631C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    eax = esi + 0x100;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0xAC); PUSH32(esp, 0x003631CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003631C8u); } /* indirect call */
    }

loc_003631CE: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + edi * 4) = eax;
    eax = MEM32(esp + 0x10);
    goto loc_003631E4;

loc_003631DA: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x111B;

loc_003631E4: ;
    POP32(esp, edi);

loc_003631E5: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003631E9
 * Original: 0x003631E9 - 0x0036324F (102 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003631E9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003631E9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x24);
    edx = eax + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00363207; /* jae: above or equal (unsigned >=) */

loc_003631FB: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_0036324B;

loc_00363207: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = ZX16(MEM16(ecx + 0x134));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00363223; /* jl: less (signed <) */

loc_0036321B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00363227; /* jg: greater (signed >) */

loc_00363223: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00363233; /* jge: greater or equal (signed >=) */

loc_00363227: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x111B;
    goto loc_0036324A;

loc_00363233: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x58); PUSH32(esp, 0x00363238u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363235u); } /* indirect call */
    }

loc_00363238: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x58); PUSH32(esp, 0x0036323Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036323Au); } /* indirect call */
    }

loc_0036323D: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 4;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x10);

loc_0036324A: ;
    POP32(esp, edi);

loc_0036324B: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036324F
 * Original: 0x0036324F - 0x003632DC (141 bytes, 48 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036324F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036324F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x24);
    ecx = eax + -4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036326A; /* jae: above or equal (unsigned >=) */

loc_00363261: ;
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_00363293;

loc_0036326A: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036329A; /* jne: not equal / not zero */

loc_0036327A: ;
    edx = MEM32(edx + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */

loc_00363286: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0036328C; /* jge: greater or equal (signed >=) */

loc_00363288: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003632A2; /* jge: greater or equal (signed >=) */

loc_0036328C: ;
    MEM32(esi + 0x6C) = 0x1112;

loc_00363293: ;
    eax = MEM32(esi + 0x70);

loc_00363296: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0036329A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x160) (32-bit) */
    goto loc_00363286;

loc_003632A2: ;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003632BE; /* je: equal / zero */

loc_003632AC: ;
    edx = MEM32(eax + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edx + ecx));
    eax = MEM32(eax + 8);
    PUSH32(esp, MEM32(eax + ecx));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x50); PUSH32(esp, 0x003632BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003632B9u); } /* indirect call */
    }

loc_003632BC: ;
    goto loc_003632CD;

loc_003632BE: ;
    edx = MEM32(eax + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edx + ecx));
    eax = MEM32(eax);
    PUSH32(esp, MEM32(eax + ecx));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x003632CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003632CAu); } /* indirect call */
    }

loc_003632CD: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 4;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);
    goto loc_00363296;

}

/**
 * sub_003632DC
 * Original: 0x003632DC - 0x0036338B (175 bytes, 68 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003632DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003632DC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x24);
    edx = eax + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003632FD; /* jae: above or equal (unsigned >=) */

loc_003632F1: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_00363339;

loc_003632FD: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    MEM32(esi + 0x18) = eax;
    eax = MEM32(eax);
    MEM32(ebp + 8) = edx;
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0036333E; /* jne: not equal / not zero */

loc_0036331C: ;
    ecx = MEM32(ecx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */

loc_00363328: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0036332E; /* jge: greater or equal (signed >=) */

loc_0036332A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00363346; /* jge: greater or equal (signed >=) */

loc_0036332E: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1112;

loc_00363338: ;
    POP32(esp, edi);

loc_00363339: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_0036333E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x160) (32-bit) */
    goto loc_00363328;

loc_00363346: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(edi + 4);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + ebx));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(eax + ebx));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x0036335Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363358u); } /* indirect call */
    }

loc_0036335B: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x00363369u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363366u); } /* indirect call */
    }

loc_00363369: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363385; /* jne: not equal / not zero */

loc_0036336E: ;
    eax = MEM32(edi);
    eax = MEM32(ebx + eax);
    ecx = MEM32(edi + 8);
    MEM32(ebx + ecx) = eax;
    eax = MEM32(edi + 4);
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ebx + eax);
    MEM32(ebx + ecx) = eax;

loc_00363385: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, ebx);
    goto loc_00363338;

}

/**
 * sub_0036338B
 * Original: 0x0036338B - 0x00363591 (518 bytes, 176 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036338B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036338B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    ecx = eax + -8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003633AE; /* jae: above or equal (unsigned >=) */

loc_003633A2: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003633E8;

loc_003633AE: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x20);
    MEM32(ebp + -8) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(ebp + 8) = ecx;
    MEM32(ebp + -4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_003633EE; /* jne: not equal / not zero */

loc_003633CB: ;
    ecx = MEM32(edi + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */

loc_003633D7: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003633DD; /* jge: greater or equal (signed >=) */

loc_003633D9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003633F6; /* jge: greater or equal (signed >=) */

loc_003633DD: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1112;

loc_003633E7: ;
    POP32(esp, ebx);

loc_003633E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_003633EE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x160) (32-bit) */
    goto loc_003633D7;

loc_003633F6: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363498; /* jne: not equal / not zero */

loc_00363401: ;
    edx = MEM32(edi + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003633DD; /* jge: greater or equal (signed >=) */

loc_00363410: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003633DD; /* jl: less (signed <) */

loc_00363416: ;
    edx = MEM32(ebp + -4);

loc_00363419: ;
    ebx = MEM32(ebp + 0x10);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363534; /* je: equal / zero */

loc_00363426: ;
    ebx = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363503; /* je: equal / zero */

loc_00363431: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363503; /* je: equal / zero */

loc_00363439: ;
    _fa = (uint32_t)(MEM8(edi + 0x14D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x14D), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363503; /* jne: not equal / not zero */

loc_00363446: ;
    _fa = (uint32_t)(MEM8(edi + 0x12C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x12C), 0 (8-bit) */
    ecx = MEM32(ecx + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_003634B4; /* je: equal / zero */

loc_00363452: ;
    ebx = MEM32(ebp + 8);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x10) = edx;
    edx = MEM32(ecx + edx);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 8) = ebx;
    ebx = MEM32(eax + 0x14);
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ebx + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebx + ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(ebp + 0x10);
    eax = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    edx = MEM32(edx + 0x10);
    edx = MEM32(edx + ebx);
    _fb = (uint32_t)(MEM32(eax + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x50); PUSH32(esp, 0x00363485u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363482u); } /* indirect call */
    }

loc_00363485: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = edi + 0x100;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0xAC); PUSH32(esp, 0x00363493u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036348Du); } /* indirect call */
    }

loc_00363493: ;
    goto loc_0036357E;

loc_00363498: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x160) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003633DD; /* jge: greater or equal (signed >=) */

loc_003634A7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003633DD; /* jl: less (signed <) */

loc_003634AF: ;
    goto loc_00363419;

loc_003634B4: ;
    eax = MEM32(eax + 0x14);
    ebx = edx;
    edx = MEM32(ebp + 8);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ecx + ebx);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(eax + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi + 0xF0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(ebp + 8) = edx;
    { uint32_t _icall_target = MEM32(edi + 0xA8); PUSH32(esp, 0x003634D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003634D3u); } /* indirect call */
    }

loc_003634D9: ;
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + ebx);
    edx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(MEM32(eax + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi + 0xE0;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0xA4); PUSH32(esp, 0x003634FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003634F6u); } /* indirect call */
    }

loc_003634FC: ;
    PUSH32(esp, eax);

loc_003634FD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x50); PUSH32(esp, 0x00363501u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003634FEu); } /* indirect call */
    }

loc_00363501: ;
    goto loc_0036357E;

loc_00363503: ;
    edi = MEM32(ebp + 8);
    ebx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 8) = edi;
    edi = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 8);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(edi + edx);
    MEM32(ebp + 0x10) = edx;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ebx + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ebx + edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    ecx = MEM32(ecx + edi);
    _fb = (uint32_t)(MEM32(eax + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    goto loc_003634FD;

loc_00363534: ;
    edi = MEM32(ebp + 8);
    ebx = MEM32(eax + 4);
    eax = MEM32(eax);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(ebx + edx);
    MEM32(ebp + 8) = edi;
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    MEM32(ebp + 0x10) = edx;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(edi + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(edi + edx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(ebp + 0x10);
    eax = MEM32(edi + eax);
    _fb = (uint32_t)(MEM32(ecx + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x00363565u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363562u); } /* indirect call */
    }

loc_00363565: ;
    ecx = MEM32(esi + 0x24);
    SET_LO8(ecx, MEM8(ecx + 0x16E));
    SET_LO8(ecx, LO8(ecx) & 0xB);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036357E; /* jne: not equal / not zero */

loc_00363576: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036357E; /* jne: not equal / not zero */

loc_0036357B: ;
    PUSH32(esp, 0x41);
    POP32(esp, eax);

loc_0036357E: ;
    ecx = MEM32(ebp + -8);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = ecx;
    goto loc_003633E7;

}

/**
 * sub_00363591
 * Original: 0x00363591 - 0x003635E8 (87 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363591(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363591: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM8(eax + 0x12C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x12C), 0 (8-bit) */
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax + 0xC));
    if (CMP_NE(_fa, _fb)) goto loc_003635B9; /* jne: not equal / not zero */

loc_003635A7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003635ADu); RECOMP_ABI_CALL(0x003600C9u, sub_003600C9); /* call 0x003600C9 */

loc_003635AD: ;
    PUSH32(esp, eax);
    eax = ZX16(LO16(edi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x003635B7u); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_003635B7: ;
    edi = eax;

loc_003635B9: ;
    eax = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x24);
    ecx = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x15C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003635D6; /* jbe: below or equal (unsigned <=) */

loc_003635CA: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1111;
    goto loc_003635E3;

loc_003635D6: ;
    ecx = ZX16(LO16(edi));
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 4;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x10);

loc_003635E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003635E8
 * Original: 0x003635E8 - 0x0036361C (52 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003635E8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003635E8: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = edx + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0x15C) (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_0036360B; /* jbe: below or equal (unsigned <=) */

loc_003635FF: ;
    MEM32(eax + 0x6C) = 0x1111;
    eax = MEM32(eax + 0x70);
    goto loc_00363619;

loc_0036360B: ;
    ecx = ZX16(MEM16(ecx + 0xE));
    MEM32(edx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 4;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);

loc_00363619: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036361C
 * Original: 0x0036361C - 0x003636E7 (203 bytes, 63 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036361C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036361C: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x18);
    ecx = MEM32(edx + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + -4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00363640; /* jae: above or equal (unsigned >=) */

loc_00363631: ;
    eax = MEM32(edx + 0x70);
    MEM32(edx + 0x6C) = 0x1110;
    goto loc_003636E2;

loc_00363640: ;
    esi = eax + -4;
    MEM32(edx + 0x18) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036364F; /* je: equal / zero */

loc_0036364C: ;
    PUSH32(esp, 0x25);
    POP32(esp, ebx);

loc_0036364F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363662; /* je: equal / zero */

loc_00363653: ;
    _fa = (uint32_t)(MEM8(ecx + 0x119)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x119), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363662; /* je: equal / zero */

loc_0036365C: ;
    ebx = ebx | 0x100;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00363662: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    PUSH32(esp, edi);
    edi = 0x200;
    if (TEST_Z(_fa, _fb)) goto loc_00363677; /* je: equal / zero */

loc_0036366C: ;
    _fa = (uint32_t)(MEM8(ecx + 0x119)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x119), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363677; /* je: equal / zero */

loc_00363675: ;
    ebx = ebx | edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00363677: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036368A; /* je: equal / zero */

loc_0036367B: ;
    _fa = (uint32_t)(MEM32(ecx + 0x148)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x148), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036368A; /* je: equal / zero */

loc_00363684: ;
    ebx = ebx | 0x1000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036368A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036369D; /* je: equal / zero */

loc_0036368E: ;
    _fa = (uint32_t)(MEM8(ecx + 0x16C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x16C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036369D; /* je: equal / zero */

loc_00363697: ;
    ebx = ebx | 0x2000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036369D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_003636B0; /* jns: not sign (positive) */

loc_003636A1: ;
    _fa = (uint32_t)(MEM8(ecx + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003636B0; /* je: equal / zero */

loc_003636AA: ;
    ebx = ebx | 0x4000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003636B0: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003636C4; /* je: equal / zero */

loc_003636B5: ;
    _fa = (uint32_t)(MEM8(ecx + 0x16C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x16C), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003636C4; /* je: equal / zero */

loc_003636BE: ;
    ebx = ebx | 0x8000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003636C4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_003636D8; /* je: equal / zero */

loc_003636C9: ;
    _fa = (uint32_t)(MEM8(ecx + 0x16C)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x16C), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003636D8; /* je: equal / zero */

loc_003636D2: ;
    ebx = ebx | 0x10000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003636D8: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx + 0x18) = MEM32(edx + 0x18) + 4;
    _fa = (uint32_t)(MEM32(edx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003636E2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003636E7
 * Original: 0x003636E7 - 0x003636FC (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003636E7(void)
{

loc_003636E7: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x24);
    MEM8(eax + 0x90) = 1;
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003636FC
 * Original: 0x003636FC - 0x00363711 (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003636FC(void)
{

loc_003636FC: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x24);
    MEM8(eax + 0x90) = 0;
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363711
 * Original: 0x00363711 - 0x0036373D (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363711(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363711: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00363730; /* jae: above or equal (unsigned >=) */

loc_00363724: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_0036373A;

loc_00363730: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(esp + 8);

loc_0036373A: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036373D
 * Original: 0x0036373D - 0x00363776 (57 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036373D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036373D: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_0036375C; /* jae: above or equal (unsigned >=) */

loc_00363750: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_00363773;

loc_0036375C: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    MEM32(eax + -4) = edx;
    eax = MEM32(esp + 8);

loc_00363773: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363776
 * Original: 0x00363776 - 0x003637AF (57 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363776(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363776: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00363795; /* jae: above or equal (unsigned >=) */

loc_00363789: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003637AC;

loc_00363795: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    MEM32(eax + -4) = edx;
    eax = MEM32(esp + 8);

loc_003637AC: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003637AF
 * Original: 0x003637AF - 0x003637E8 (57 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003637AF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003637AF: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003637CE; /* jae: above or equal (unsigned >=) */

loc_003637C2: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003637E5;

loc_003637CE: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    MEM32(eax + -4) = edx;
    eax = MEM32(esp + 8);

loc_003637E5: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003637E8
 * Original: 0x003637E8 - 0x00363821 (57 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003637E8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003637E8: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00363807; /* jae: above or equal (unsigned >=) */

loc_003637FB: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_0036381E;

loc_00363807: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    MEM32(eax + -4) = edx;
    eax = MEM32(esp + 8);

loc_0036381E: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363821
 * Original: 0x00363821 - 0x0036385A (57 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363821(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00363821: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00363840; /* jae: above or equal (unsigned >=) */

loc_00363834: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_00363857;

loc_00363840: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFCu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax + -4);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(eax)));
    ecx = ecx - MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + -4) = ecx;
    eax = MEM32(esp + 8);

loc_00363857: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036385A
 * Original: 0x0036385A - 0x00363893 (57 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036385A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036385A: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00363879; /* jae: above or equal (unsigned >=) */

loc_0036386D: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_00363890;

loc_00363879: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(eax + -4) = edx;
    eax = MEM32(esp + 8);

loc_00363890: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363893
 * Original: 0x00363893 - 0x003638CE (59 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363893(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363893: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003638B2; /* jae: above or equal (unsigned >=) */

loc_003638A6: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003638CB;

loc_003638B2: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003638C4; /* je: equal / zero */

loc_003638BF: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003638C4; /* je: equal / zero */

loc_003638C3: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003638C4: ;
    MEM32(eax + -4) = ecx;
    eax = MEM32(esp + 8);

loc_003638CB: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003638CE
 * Original: 0x003638CE - 0x0036390B (61 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003638CE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003638CE: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003638ED; /* jae: above or equal (unsigned >=) */

loc_003638E1: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_00363908;

loc_003638ED: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003638FE; /* jne: not equal / not zero */

loc_003638FA: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363901; /* je: equal / zero */

loc_003638FE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00363901: ;
    MEM32(eax + -4) = ecx;
    eax = MEM32(esp + 8);

loc_00363908: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036390B
 * Original: 0x0036390B - 0x0036393C (49 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036390B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036390B: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_0036392A; /* jae: above or equal (unsigned >=) */

loc_0036391E: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_00363939;

loc_0036392A: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + -4) = MEM32(eax + -4) + ecx;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);

loc_00363939: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036393C
 * Original: 0x0036393C - 0x0036396D (49 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036393C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036393C: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_0036395B; /* jae: above or equal (unsigned >=) */

loc_0036394F: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_0036396A;

loc_0036395B: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + -4) = MEM32(eax + -4) - ecx;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 8);

loc_0036396A: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036396D
 * Original: 0x0036396D - 0x003639A6 (57 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036396D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036396D: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036398B; /* jae: above or equal (unsigned >=) */

loc_0036397F: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_003639A2;

loc_0036398B: ;
    esi = ecx + -4;
    MEM32(eax + 0x18) = esi;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(esi + -4));
    PUSH32(esp, 0x0036399Bu); RECOMP_ABI_CALL(0x0035CB54u, sub_0035CB54); /* call 0x0035CB54 */

loc_0036399B: ;
    MEM32(esi + -4) = eax;
    eax = MEM32(esp + 0xC);

loc_003639A2: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003639A6
 * Original: 0x003639A6 - 0x003639ED (71 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003639A6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003639A6: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003639C1; /* jae: above or equal (unsigned >=) */

loc_003639B8: ;
    MEM32(eax + 0x6C) = 0x1110;
    goto loc_003639D4;

loc_003639C1: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003639D9; /* jne: not equal / not zero */

loc_003639CD: ;
    MEM32(eax + 0x6C) = 0x1103;

loc_003639D4: ;
    eax = MEM32(eax + 0x70);
    goto loc_003639E9;

loc_003639D9: ;
    eax = MEM32(ecx + -4);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM32(ecx + -4) = eax;
    eax = MEM32(esp + 0xC);

loc_003639E9: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003639ED
 * Original: 0x003639ED - 0x00363A23 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003639ED(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003639ED: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00363A0C; /* jae: above or equal (unsigned >=) */

loc_00363A00: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_00363A20;

loc_00363A0C: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00363A1C; /* jge: greater or equal (signed >=) */

loc_00363A19: ;
    MEM32(eax + -4) = ecx;

loc_00363A1C: ;
    eax = MEM32(esp + 8);

loc_00363A20: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363A23
 * Original: 0x00363A23 - 0x00363A59 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363A23(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363A23: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00363A42; /* jae: above or equal (unsigned >=) */

loc_00363A36: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_00363A56;

loc_00363A42: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00363A52; /* jle: less or equal (signed <=) */

loc_00363A4F: ;
    MEM32(eax + -4) = ecx;

loc_00363A52: ;
    eax = MEM32(esp + 8);

loc_00363A56: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363A59
 * Original: 0x00363A59 - 0x00363A93 (58 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363A59(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363A59: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x18);
    edx = esi + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00363A77; /* jae: above or equal (unsigned >=) */

loc_00363A6B: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_00363A8F;

loc_00363A77: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + -4));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00363A82u); RECOMP_ABI_CALL(0x0035FD31u, sub_0035FD31); /* call 0x0035FD31 */

loc_00363A82: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + -4) = eax;
    eax = MEM32(esp + 0xC);

loc_00363A8F: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363A93
 * Original: 0x00363A93 - 0x00363ACE (59 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363A93(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363A93: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x18);
    edx = esi + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00363AB1; /* jae: above or equal (unsigned >=) */

loc_00363AA5: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_00363ACA;

loc_00363AB1: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + -4));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00363ABCu); RECOMP_ABI_CALL(0x0035FD31u, sub_0035FD31); /* call 0x0035FD31 */

loc_00363ABC: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + -4) = eax;
    eax = MEM32(esp + 0xC);

loc_00363ACA: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363ACE
 * Original: 0x00363ACE - 0x00363AFF (49 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363ACE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363ACE: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00363AED; /* jae: above or equal (unsigned >=) */

loc_00363AE1: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_00363AFC;

loc_00363AED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -4), eax (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(ecx + -4) = eax;
    eax = MEM32(esp + 8);

loc_00363AFC: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363AFF
 * Original: 0x00363AFF - 0x00363B31 (50 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363AFF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363AFF: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00363B1E; /* jae: above or equal (unsigned >=) */

loc_00363B12: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_00363B2E;

loc_00363B1E: ;
    eax = MEM32(ecx + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00363B2A; /* jge: greater or equal (signed >=) */

loc_00363B25: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ecx + -4) = eax;

loc_00363B2A: ;
    eax = MEM32(esp + 8);

loc_00363B2E: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363B31
 * Original: 0x00363B31 - 0x00363B5A (41 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363B31(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363B31: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00363B50; /* jae: above or equal (unsigned >=) */

loc_00363B44: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_00363B57;

loc_00363B50: ;
    MEM32(ecx + -4) = (uint32_t)(-(int32_t)MEM32(ecx + -4));
    _fa = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = MEM32(esp + 8);

loc_00363B57: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363B5A
 * Original: 0x00363B5A - 0x00363B8C (50 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363B5A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363B5A: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00363B79; /* jae: above or equal (unsigned >=) */

loc_00363B6D: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_00363B89;

loc_00363B79: ;
    eax = MEM32(ecx + -4);
    _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + -4) = eax;
    eax = MEM32(esp + 8);

loc_00363B89: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363B8C
 * Original: 0x00363B8C - 0x00363BB6 (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363B8C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363B8C: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00363BAB; /* jae: above or equal (unsigned >=) */

loc_00363B9F: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_00363BB3;

loc_00363BAB: ;
    MEM32(ecx + -4) = MEM32(ecx + -4) & 0xFFFFFFC0u;
    _fa = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 8);

loc_00363BB3: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363BB6
 * Original: 0x00363BB6 - 0x00363BE5 (47 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363BB6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363BB6: ;
    eax = MEM32(esp + 8);
    ecx = ZX8(MEM8(eax + -1));
    ecx = ZX8(MEM8(ecx + 0x41EA28));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363BE2; /* je: equal / zero */

loc_00363BC9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x15 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363BD4; /* jne: not equal / not zero */

loc_00363BCE: ;
    ecx = ZX8(MEM8(eax));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00363BE0;

loc_00363BD4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x16 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363BE0; /* jne: not equal / not zero */

loc_00363BD9: ;
    ecx = ZX8(MEM8(eax));
    ecx = ecx + ecx + 1;

loc_00363BE0: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00363BE2: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00363BE5
 * Original: 0x00363BE5 - 0x00363C79 (148 bytes, 59 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363BE5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363BE5: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x18);
    ecx = MEM32(edx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00363C03; /* jae: above or equal (unsigned >=) */

loc_00363BF7: ;
    eax = MEM32(edx + 0x70);
    MEM32(edx + 0x6C) = 0x1110;
    goto loc_00363C75;

loc_00363C03: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x18) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00363C74; /* jne: not equal / not zero */

loc_00363C13: ;
    esi = MEM32(edx + 0x70);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00363C19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00363C67; /* jae: above or equal (unsigned >=) */

loc_00363C1D: ;
    ecx = ZX8(MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x59) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x59 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363C29; /* jne: not equal / not zero */

loc_00363C26: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00363C61;

loc_00363C29: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x58 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363C31; /* jne: not equal / not zero */

loc_00363C2E: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00363C61;

loc_00363C31: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363C3D; /* jne: not equal / not zero */

loc_00363C36: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363C65; /* je: equal / zero */

loc_00363C3B: ;
    goto loc_00363C61;

loc_00363C3D: ;
    ecx = ZX8(MEM8(ecx + 0x41EA28));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363C61; /* je: equal / zero */

loc_00363C48: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x15 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363C53; /* jne: not equal / not zero */

loc_00363C4D: ;
    ecx = ZX8(MEM8(eax));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00363C5F;

loc_00363C53: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x16 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363C5F; /* jne: not equal / not zero */

loc_00363C58: ;
    ecx = ZX8(MEM8(eax));
    ecx = ecx + ecx + 1;

loc_00363C5F: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00363C61: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363C19; /* jne: not equal / not zero */

loc_00363C65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */

loc_00363C67: ;
    if (CMP_NE(_fa, _fb)) goto loc_00363C74; /* jne: not equal / not zero */

loc_00363C69: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363C74; /* je: equal / zero */

loc_00363C6D: ;
    MEM32(edx + 0x6C) = 0x1105;

loc_00363C74: ;
    POP32(esp, edi);

loc_00363C75: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363C79
 * Original: 0x00363C79 - 0x00363CBD (68 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363C79(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363C79: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x70);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00363C89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00363CAC; /* jae: above or equal (unsigned >=) */

loc_00363C8D: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x59) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x59 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363C98; /* jne: not equal / not zero */

loc_00363C95: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00363CA7;

loc_00363C98: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x58 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363CA0; /* jne: not equal / not zero */

loc_00363C9D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00363CA7;

loc_00363CA0: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00363CA7u); RECOMP_ABI_CALL(0x00363BB6u, sub_00363BB6); /* call 0x00363BB6 */

loc_00363CA7: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363C89; /* jne: not equal / not zero */

loc_00363CAC: ;
    POP32(esp, edi);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00363CBA; /* je: equal / zero */

loc_00363CB3: ;
    MEM32(edx + 0x6C) = 0x1105;

loc_00363CBA: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363CBD
 * Original: 0x00363CBD - 0x00363D09 (76 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363CBD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363CBD: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00363CD9; /* jae: above or equal (unsigned >=) */

loc_00363CD0: ;
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_00363D03;

loc_00363CD9: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(eax);
    MEM32(ecx + 0x78) = MEM32(ecx + 0x78) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx + eax + -1;
    if ((_fa != 0)) goto loc_00363CF7; /* jne: not equal / not zero */

loc_00363CEE: ;
    MEM32(ecx + 0x6C) = 0x1107;
    goto loc_00363D03;

loc_00363CF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00363D06; /* jae: above or equal (unsigned >=) */

loc_00363CFC: ;
    MEM32(ecx + 0x6C) = 0x110B;

loc_00363D03: ;
    eax = MEM32(ecx + 0x70);

loc_00363D06: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363D09
 * Original: 0x00363D09 - 0x00363D67 (94 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363D09(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363D09: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00363D25; /* jae: above or equal (unsigned >=) */

loc_00363D1C: ;
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_00363D5B;

loc_00363D25: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ecx + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00363D60; /* je: equal / zero */

loc_00363D37: ;
    eax = MEM32(eax);
    MEM32(ecx + 0x78) = MEM32(ecx + 0x78) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(esp + 8);
    eax = edx + eax + -1;
    if ((_fa != 0)) goto loc_00363D4F; /* jne: not equal / not zero */

loc_00363D46: ;
    MEM32(ecx + 0x6C) = 0x1107;
    goto loc_00363D5B;

loc_00363D4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00363D64; /* jae: above or equal (unsigned >=) */

loc_00363D54: ;
    MEM32(ecx + 0x6C) = 0x110B;

loc_00363D5B: ;
    eax = MEM32(ecx + 0x70);
    goto loc_00363D64;

loc_00363D60: ;
    eax = MEM32(esp + 8);

loc_00363D64: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363D67
 * Original: 0x00363D67 - 0x00363DC5 (94 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363D67(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363D67: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00363D83; /* jae: above or equal (unsigned >=) */

loc_00363D7A: ;
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_00363DB9;

loc_00363D83: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ecx + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00363DBE; /* jne: not equal / not zero */

loc_00363D95: ;
    eax = MEM32(eax);
    MEM32(ecx + 0x78) = MEM32(ecx + 0x78) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(esp + 8);
    eax = edx + eax + -1;
    if ((_fa != 0)) goto loc_00363DAD; /* jne: not equal / not zero */

loc_00363DA4: ;
    MEM32(ecx + 0x6C) = 0x1107;
    goto loc_00363DB9;

loc_00363DAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00363DC2; /* jae: above or equal (unsigned >=) */

loc_00363DB2: ;
    MEM32(ecx + 0x6C) = 0x110B;

loc_00363DB9: ;
    eax = MEM32(ecx + 0x70);
    goto loc_00363DC2;

loc_00363DBE: ;
    eax = MEM32(esp + 8);

loc_00363DC2: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363DC5
 * Original: 0x00363DC5 - 0x00363E0C (71 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363DC5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363DC5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x24);
    edx = eax + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00363DE3; /* jae: above or equal (unsigned >=) */

loc_00363DD7: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_00363E08;

loc_00363DE3: ;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ecx + edx * 4 + -396));
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x74); PUSH32(esp, 0x00363DFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363DF8u); } /* indirect call */
    }

loc_00363DFB: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 4;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);

loc_00363E08: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363E0C
 * Original: 0x00363E0C - 0x00363E53 (71 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363E0C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363E0C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x24);
    edx = eax + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00363E2A; /* jae: above or equal (unsigned >=) */

loc_00363E1E: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_00363E4F;

loc_00363E2A: ;
    PUSH32(esp, edi);
    edi = eax + -4;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x18) = edi;
    PUSH32(esp, MEM32(ecx + eax * 4 + -412));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00363E44u); RECOMP_ABI_CALL(0x0035FE12u, sub_0035FE12); /* call 0x0035FE12 */

loc_00363E44: ;
    MEM32(edi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 4;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);

loc_00363E4F: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00363E53
 * Original: 0x00363E53 - 0x00363E94 (65 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363E53(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363E53: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00363E62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363E5Fu); } /* indirect call */
    }

loc_00363E62: ;
    edx = eax;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00363E7D; /* jl: less (signed <) */

loc_00363E6C: ;
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_00363E74; /* jns: not sign (positive) */

loc_00363E72: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00363E74: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00363E90; /* jge: greater or equal (signed >=) */

loc_00363E79: ;
    eax = edx;
    goto loc_00363E90;

loc_00363E7D: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_00363E87; /* jns: not sign (positive) */

loc_00363E85: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00363E87: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00363E8E; /* jge: greater or equal (signed >=) */

loc_00363E8C: ;
    eax = edx;

loc_00363E8E: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00363E90: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00363E94
 * Original: 0x00363E94 - 0x00364119 (645 bytes, 226 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00363E94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363E94: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi);
    ebx = MEM32(esi + 4);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    edx = eax + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi) (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_00363EC4; /* jae: above or equal (unsigned >=) */

loc_00363EBB: ;
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_00363EF0;

loc_00363EC4: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ecx (32-bit) */
    MEM32(esi + 0x18) = eax;
    eax = MEM32(eax);
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00363EFA; /* jne: not equal / not zero */

loc_00363ED4: ;
    ecx = MEM32(edi + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00363EE9; /* jge: greater or equal (signed >=) */

loc_00363EE3: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00363F0B; /* jge: greater or equal (signed >=) */

loc_00363EE9: ;
    MEM32(esi + 0x6C) = 0x1112;

loc_00363EF0: ;
    eax = MEM32(esi + 0x70);

loc_00363EF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_00363EFA: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x160) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00363EE9; /* jge: greater or equal (signed >=) */

loc_00363F05: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00363EE9; /* jl: less (signed <) */

loc_00363F09: ;
    goto loc_00363F0E;

loc_00363F0B: ;
    ecx = MEM32(ebp + -8);

loc_00363F0E: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363F8B; /* jne: not equal / not zero */

loc_00363F13: ;
    edx = MEM32(edi + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */

loc_00363F1F: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00363EE9; /* jge: greater or equal (signed >=) */

loc_00363F21: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00363EE9; /* jl: less (signed <) */

loc_00363F25: ;
    _fa = (uint32_t)(MEM8(edi + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363FA9; /* jne: not equal / not zero */

loc_00363F2E: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363FA9; /* je: equal / zero */

loc_00363F38: ;
    _fa = (uint32_t)(MEM8(edi + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00363FA9; /* je: equal / zero */

loc_00363F41: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363F96; /* je: equal / zero */

loc_00363F46: ;
    SET_LO16(edx, MEM16(esi + 0x82));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363F96; /* je: equal / zero */

loc_00363F53: ;
    SET_LO16(ecx, MEM16(esi + 0x84));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363F96; /* je: equal / zero */

loc_00363F60: ;
    ecx = SX16(LO16(ecx));
    PUSH32(esp, ecx);
    edx = SX16(LO16(edx));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00363F75u); RECOMP_ABI_CALL(0x0035F936u, sub_0035F936); /* call 0x0035F936 */

loc_00363F75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363F93; /* je: equal / zero */

loc_00363F79: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00363F89u); RECOMP_ABI_CALL(0x0035F441u, sub_0035F441); /* call 0x0035F441 */

loc_00363F89: ;
    goto loc_00363FA3;

loc_00363F8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x160) (32-bit) */
    goto loc_00363F1F;

loc_00363F93: ;
    eax = MEM32(ebp + -4);

loc_00363F96: ;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00363FA3u); RECOMP_ABI_CALL(0x0035F343u, sub_0035F343); /* call 0x0035F343 */

loc_00363FA3: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + -8);

loc_00363FA9: ;
    edx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036403F; /* je: equal / zero */

loc_00363FB4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036403F; /* je: equal / zero */

loc_00363FBC: ;
    edx = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM8(edx + 0x14D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14D), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036403F; /* jne: not equal / not zero */

loc_00363FC8: ;
    edx = MEM32(ebx + 0x14);
    eax = MEM32(edx + eax * 4);
    ecx = MEM32(ecx + 0x14);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(edi + 0x12C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x12C), 0 (8-bit) */
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0036400B; /* je: equal / zero */

loc_00363FE1: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebp + -4);
    ecx = MEM32(ecx + edx * 4);
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x10);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + edx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x50); PUSH32(esp, 0x00363FFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363FF8u); } /* indirect call */
    }

loc_00363FFB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = edi + 0x100;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0xAC); PUSH32(esp, 0x00364009u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364003u); } /* indirect call */
    }

loc_00364009: ;
    goto loc_00364069;

loc_0036400B: ;
    eax = edi + 0xF0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0xA8); PUSH32(esp, 0x00364018u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364012u); } /* indirect call */
    }

loc_00364018: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebp + -4);
    ecx = MEM32(ecx + edx * 4);
    edx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + edx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi + 0xE0;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0xA4); PUSH32(esp, 0x0036403Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364036u); } /* indirect call */
    }

loc_0036403C: ;
    PUSH32(esp, eax);
    goto loc_00364065;

loc_0036403F: ;
    edx = MEM32(ebx + 0xC);
    eax = MEM32(edx + eax * 4);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + -4);
    ecx = MEM32(ebx + 8);
    ecx = MEM32(ecx + edx * 4);
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + edx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);

loc_00364065: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x50); PUSH32(esp, 0x00364069u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364066u); } /* indirect call */
    }

loc_00364069: ;
    _fa = (uint32_t)(MEM32(edi + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x60), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00364076; /* je: equal / zero */

loc_0036406F: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00364076u); RECOMP_ABI_CALL(0x00363E53u, sub_00363E53); /* call 0x00363E53 */

loc_00364076: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 4 (8-bit) */
    PUSH32(esp, MEM32(edi + ecx * 4 + 0x14));
    MEM32(ebp + -16) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00364090; /* je: equal / zero */

loc_0036408B: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x74); PUSH32(esp, 0x0036408Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036408Bu); } /* indirect call */
    }

loc_0036408E: ;
    goto loc_00364095;

loc_00364090: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00364095u); RECOMP_ABI_CALL(0x0035FE12u, sub_0035FE12); /* call 0x0035FE12 */

loc_00364095: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 8 (8-bit) */
    MEM32(ebp + -12) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003640CB; /* je: equal / zero */

loc_0036409E: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), 0 (16-bit) */
    edi = MEM32(edi + 0x70);
    if (CMP_EQ(_fa, _fb)) goto loc_003640B4; /* je: equal / zero */

loc_003640AB: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax;

loc_003640B4: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003640C1; /* jl: less (signed <) */

loc_003640BA: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003640CB; /* jge: greater or equal (signed >=) */

loc_003640BF: ;
    goto loc_003640C8;

loc_003640C1: ;
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003640CB; /* jle: less or equal (signed <=) */

loc_003640C8: ;
    MEM32(ebp + -12) = edi;

loc_003640CB: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebx + 4);
    edi = MEM32(ebp + -4);
    edx = MEM32(eax + edi * 4);
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebx);
    ecx = MEM32(ecx + edi * 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ebp + -8);
    edx = MEM32(edx);
    _fb = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edx + eax * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x003640F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003640F0u); } /* indirect call */
    }

loc_003640F3: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) - eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x003640FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003640FCu); } /* indirect call */
    }

loc_003640FF: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 0x10 (8-bit) */
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00364111; /* je: equal / zero */

loc_0036410E: ;
    MEM32(esi + 0x2C) = edi;

loc_00364111: ;
    eax = MEM32(ebp + 0xC);
    goto loc_00363EF3;

}

/**
 * sub_00364119
 * Original: 0x00364119 - 0x003646F6 (1501 bytes, 535 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00364119(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364119: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x24);
    edx = eax + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036413F; /* jae: above or equal (unsigned >=) */

loc_00364130: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003646F1;

loc_0036413F: ;
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    MEM32(ecx + 0x18) = eax;
    ebx = ZX16(MEM16(edi + 0x134));
    MEM32(ebp + -16) = edx;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    MEM32(ebp + -24) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_003646E5; /* jge: greater or equal (signed >=) */

loc_00364163: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003646E5; /* jl: less (signed <) */

loc_0036416B: ;
    edx = MEM32(ecx + 0x20);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(eax);
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0036419B; /* jne: not equal / not zero */

loc_0036417D: ;
    ebx = MEM32(edi + 0x130);
    ebx = ZX16(MEM16(ebx + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */

loc_00364189: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0036418F; /* jge: greater or equal (signed >=) */

loc_0036418B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003641A3; /* jge: greater or equal (signed >=) */

loc_0036418F: ;
    MEM32(ecx + 0x6C) = 0x1112;
    goto loc_003646EC;

loc_0036419B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x160) (32-bit) */
    goto loc_00364189;

loc_003641A3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -16) (32-bit) */
    ebx = MEM32(ecx + 0x2C);
    if (CMP_NE(_fa, _fb)) goto loc_003642BF; /* jne: not equal / not zero */

loc_003641AF: ;
    eax = MEM32(edi + 0x130);
    eax = ZX16(MEM16(eax + 0x10));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */

loc_003641BB: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0036418F; /* jge: greater or equal (signed >=) */

loc_003641BD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036418F; /* jl: less (signed <) */

loc_003641C1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    eax = MEM32(ebp + -12);
    MEM32(ecx + 0x30) = ebx;
    MEM32(ecx + 0x34) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0036420C; /* je: equal / zero */

loc_003641CE: ;
    _fa = (uint32_t)(MEM8(edi + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036420C; /* jne: not equal / not zero */

loc_003641D7: ;
    _fa = (uint32_t)(MEM16(ecx + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x80), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036420C; /* je: equal / zero */

loc_003641E1: ;
    _fa = (uint32_t)(MEM8(edi + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036420C; /* je: equal / zero */

loc_003641EA: ;
    eax = MEM32(ebp + 0x10);
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003641FBu); RECOMP_ABI_CALL(0x0035F78Eu, sub_0035F78E); /* call 0x0035F78E */

loc_003641FB: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00364209u); RECOMP_ABI_CALL(0x0035F343u, sub_0035F343); /* call 0x0035F343 */

loc_00364209: ;
    ecx = MEM32(ebp + 8);

loc_0036420C: ;
    SET_LO16(eax, MEM16(ecx + 0x68));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036446B; /* jne: not equal / not zero */

loc_00364219: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -24));
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00364223u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364220u); } /* indirect call */
    }

loc_00364223: ;
    _fa = (uint32_t)(MEM32(edi + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x60), 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00364238; /* je: equal / zero */

loc_0036422C: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00364235u); RECOMP_ABI_CALL(0x00363E53u, sub_00363E53); /* call 0x00363E53 */

loc_00364235: ;
    MEM32(ebp + -8) = eax;

loc_00364238: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00364298; /* jne: not equal / not zero */

loc_00364240: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036424Du); RECOMP_ABI_CALL(0x0035CAF9u, sub_0035CAF9); /* call 0x0035CAF9 */

loc_0036424D: ;
    ecx = MEM32(ebp + -16);
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(MEM32(ecx + ebx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + ebx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 8);
    edx = MEM32(ebp + -12);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(esi + 8);
    eax = MEM32(eax + edx * 4);
    ecx = MEM32(esi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036427Au); RECOMP_ABI_CALL(0x0035CAF9u, sub_0035CAF9); /* call 0x0035CAF9 */

loc_0036427A: ;
    ecx = MEM32(ebp + -16);
    ecx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(MEM32(ecx + ebx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + ebx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ebp + -12);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    eax = MEM32(eax + edx * 4);
    MEM32(ecx + edx * 4) = eax;

loc_00364298: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x50);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3600BB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3600BB (32-bit) */
    MEM32(ebp + -24) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003642CA; /* jne: not equal / not zero */

loc_003642AB: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    ecx = MEM32(ecx + 8);
    eax = MEM32(eax + edx * 4);
    _fb = (uint32_t)(MEM32(ecx + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00364311;

loc_003642BF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x160) (32-bit) */
    goto loc_003641BB;

loc_003642CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3600C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3600C2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003642E8; /* jne: not equal / not zero */

loc_003642D1: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(eax + edx * 4);
    _fb = (uint32_t)(MEM32(ecx + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -20) = eax;
    goto loc_00364314;

loc_003642E8: ;
    eax = MEM32(ebp + -16);
    edx = MEM32(eax + 0xC);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ebp + -12);
    ecx = MEM32(ecx + eax * 4);
    _fb = (uint32_t)(MEM32(edx + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edx + ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + -16);
    edx = MEM32(edx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + eax * 4);
    _fb = (uint32_t)(MEM32(edx + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edx + ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(ebp + -24); PUSH32(esp, 0x00364311u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036430Eu); } /* indirect call */
    }

loc_00364311: ;
    MEM32(ebp + -20) = eax;

loc_00364314: ;
    ecx = eax;
    ecx = ecx ^ MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_00364327; /* jge: greater or equal (signed >=) */

loc_0036431B: ;
    _fa = (uint32_t)(MEM8(edi + 0x90)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x90), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00364327; /* je: equal / zero */

loc_00364324: ;
    MEM32(ebp + -8) = (uint32_t)(-(int32_t)MEM32(ebp + -8));
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00364327: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(edx + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x80), 0 (16-bit) */
    ecx = MEM32(edi + ecx * 4 + 0x14);
    MEM32(ebp + -24) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0036438E; /* je: equal / zero */

loc_00364341: ;
    SET_LO16(ecx, MEM16(edi + 0x6C));
    SET_LO16(ecx, LO16(ecx) & 4);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(ebp + -2) = LO16(ecx);
    if ((_fa != 0)) goto loc_00364367; /* jne: not equal / not zero */

loc_0036434F: ;
    ecx = MEM32(ebp + -8);
    edx = MEM32(edi + 0x5C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00364364; /* jg: greater (signed >) */

loc_0036435E: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00364367; /* jge: greater or equal (signed >=) */

loc_00364364: ;
    MEM32(ebp + -8) = eax;

loc_00364367: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036437E; /* je: equal / zero */

loc_0036436D: ;
    _fa = (uint32_t)(MEM16(ebp + -2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003643A9; /* je: equal / zero */

loc_00364374: ;
    ecx = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00364399;

loc_0036437E: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036438Cu); RECOMP_ABI_CALL(0x0035FE37u, sub_0035FE37); /* call 0x0035FE37 */

loc_0036438C: ;
    goto loc_003643C3;

loc_0036438E: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003643B7; /* je: equal / zero */

loc_00364394: ;
    ecx = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00364399: ;
    edx = MEM32(edi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003643A6; /* jg: greater (signed >) */

loc_003643A0: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003643A9; /* jge: greater or equal (signed >=) */

loc_003643A6: ;
    MEM32(ebp + -8) = eax;

loc_003643A9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(edi + 0x74); PUSH32(esp, 0x003643B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003643B2u); } /* indirect call */
    }

loc_003643B5: ;
    goto loc_003643C3;

loc_003643B7: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003643C3u); RECOMP_ABI_CALL(0x0035FE12u, sub_0035FE12); /* call 0x0035FE12 */

loc_003643C3: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 8 (8-bit) */
    MEM32(ebp + -8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003643FC; /* je: equal / zero */

loc_003643CC: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(eax + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x80), 0 (16-bit) */
    edi = MEM32(edi + 0x70);
    if (CMP_EQ(_fa, _fb)) goto loc_003643E5; /* je: equal / zero */

loc_003643DC: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax;

loc_003643E5: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003643F2; /* jl: less (signed <) */

loc_003643EB: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003643FC; /* jge: greater or equal (signed >=) */

loc_003643F0: ;
    goto loc_003643F9;

loc_003643F2: ;
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003643FC; /* jle: less or equal (signed <=) */

loc_003643F9: ;
    MEM32(ebp + -8) = edi;

loc_003643FC: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3600BB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3600BB (32-bit) */
    edi = MEM32(ebp + -12);
    MEM32(ebp + -24) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0036441E; /* jne: not equal / not zero */

loc_0036440F: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp + -16);
    ecx = MEM32(ecx);
    eax = MEM32(eax + edi * 4);
    _fb = (uint32_t)(MEM32(ebx + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00364457;

loc_0036441E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3600C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3600C2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00364436; /* jne: not equal / not zero */

loc_00364425: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(ebp + -16);
    ecx = MEM32(ecx + 4);
    eax = MEM32(eax + edi * 4);
    _fb = (uint32_t)(MEM32(ecx + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00364457;

loc_00364436: ;
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + edi * 4);
    eax = MEM32(ebp + -16);
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(MEM32(edx + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edx + ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    ecx = MEM32(ecx + edi * 4);
    _fb = (uint32_t)(MEM32(ebx + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebx + eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(ebp + -24); PUSH32(esp, 0x00364457u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364454u); } /* indirect call */
    }

loc_00364457: ;
    ecx = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00364466u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364463u); } /* indirect call */
    }

loc_00364466: ;
    goto loc_003646D1;

loc_0036446B: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    eax = MEM32(edi + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003645B0; /* jne: not equal / not zero */

loc_00364478: ;
    edx = MEM32(ebp + -24);
    eax = MEM32(eax + edx * 4);
    edx = MEM32(ebp + -16);
    edx = MEM32(edx + 8);
    MEM32(ebp + -8) = eax;
    eax = ebx;
    ebx = MEM32(ebp + -12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -20) = eax;
    eax = MEM32(esi + 8);
    ebx = MEM32(eax + ebx * 4);
    eax = MEM32(ebp + -20);
    _fb = (uint32_t)(MEM32(edx + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(edx + eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebx;
    eax = eax ^ MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003644B1; /* jge: greater or equal (signed >=) */

loc_003644A5: ;
    _fa = (uint32_t)(MEM8(edi + 0x90)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x90), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003644B1; /* je: equal / zero */

loc_003644AE: ;
    MEM32(ebp + -8) = (uint32_t)(-(int32_t)MEM32(ebp + -8));
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003644B1: ;
    SET_LO16(eax, MEM16(ecx + 0x80));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00364521; /* je: equal / zero */

loc_003644BD: ;
    SET_LO16(eax, MEM16(edi + 0x6C));
    SET_LO16(eax, LO16(eax) & 4);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(ebp + -2) = LO16(eax);
    if ((_fa != 0)) goto loc_003644E3; /* jne: not equal / not zero */

loc_003644CB: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(edi + 0x5C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003644E0; /* jg: greater (signed >) */

loc_003644DA: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003644E3; /* jge: greater or equal (signed >=) */

loc_003644E0: ;
    MEM32(ebp + -8) = ebx;

loc_003644E3: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036455C; /* je: equal / zero */

loc_003644E9: ;
    _fa = (uint32_t)(MEM16(ebp + -2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00364508; /* je: equal / zero */

loc_003644F0: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(edi + 0x5C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00364505; /* jg: greater (signed >) */

loc_003644FF: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00364508; /* jge: greater or equal (signed >=) */

loc_00364505: ;
    MEM32(ebp + -8) = ebx;

loc_00364508: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00364517; /* jl: less (signed <) */

loc_0036450F: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0036454A;

loc_00364517: ;
    PUSH32(esp, 2);
    POP32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00364557;

loc_00364521: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036455C; /* je: equal / zero */

loc_00364527: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(edi + 0x5C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00364539; /* jg: greater (signed >) */

loc_00364533: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036453D; /* jge: greater or equal (signed >=) */

loc_00364539: ;
    eax = ebx;
    goto loc_00364540;

loc_0036453D: ;
    eax = MEM32(ebp + -8);

loc_00364540: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036454F; /* jl: less (signed <) */

loc_00364544: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0036454A: ;
    MEM32(ebp + -8) = eax;
    goto loc_0036455C;

loc_0036454F: ;
    PUSH32(esp, 0x20);
    POP32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx & 0xFFFFFFC0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00364557: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + -8) = edx;

loc_0036455C: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036458D; /* je: equal / zero */

loc_00364562: ;
    _fa = (uint32_t)(MEM16(ecx + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x80), 0 (16-bit) */
    edi = MEM32(edi + 0x70);
    if (CMP_EQ(_fa, _fb)) goto loc_00364578; /* je: equal / zero */

loc_0036456F: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax;

loc_00364578: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00364583; /* jl: less (signed <) */

loc_0036457C: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036458D; /* jge: greater or equal (signed >=) */

loc_00364581: ;
    goto loc_0036458A;

loc_00364583: ;
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036458D; /* jle: less or equal (signed <=) */

loc_0036458A: ;
    MEM32(ebp + -8) = edi;

loc_0036458D: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    edx = MEM32(ebp + -20);
    edx = MEM32(edx + eax);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + -8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esi);
    eax = MEM32(ebp + -12);
    MEM32(edi + eax * 4) = edx;
    edx = MEM32(esi + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_003646D4;

loc_003645B0: ;
    ecx = MEM32(ebp + -24);
    ecx = MEM32(eax + ecx * 4);
    edx = MEM32(ebp + -16);
    edx = MEM32(edx + 0xC);
    eax = ebx;
    ebx = MEM32(ebp + -12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -20) = eax;
    eax = MEM32(esi + 0xC);
    ebx = MEM32(eax + ebx * 4);
    eax = MEM32(ebp + -20);
    _fb = (uint32_t)(MEM32(edx + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(edx + eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebx;
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003645E4; /* jge: greater or equal (signed >=) */

loc_003645D9: ;
    _fa = (uint32_t)(MEM8(edi + 0x90)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x90), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003645E4; /* je: equal / zero */

loc_003645E2: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003645E4: ;
    eax = MEM32(ebp + 8);
    SET_LO16(eax, MEM16(eax + 0x80));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00364650; /* je: equal / zero */

loc_003645F3: ;
    SET_LO16(eax, MEM16(edi + 0x6C));
    SET_LO16(eax, LO16(eax) & 4);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(ebp + -2) = LO16(eax);
    if ((_fa != 0)) goto loc_00364617; /* jne: not equal / not zero */

loc_00364601: ;
    edx = MEM32(edi + 0x5C);
    eax = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00364615; /* jg: greater (signed >) */

loc_0036460F: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00364617; /* jge: greater or equal (signed >=) */

loc_00364615: ;
    ecx = ebx;

loc_00364617: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00364681; /* je: equal / zero */

loc_0036461D: ;
    _fa = (uint32_t)(MEM16(ebp + -2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036463A; /* je: equal / zero */

loc_00364624: ;
    edx = MEM32(edi + 0x5C);
    eax = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00364638; /* jg: greater (signed >) */

loc_00364632: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036463A; /* jge: greater or equal (signed >=) */

loc_00364638: ;
    ecx = ebx;

loc_0036463A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00364646; /* jl: less (signed <) */

loc_0036463E: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00364681;

loc_00364646: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0036467D;

loc_00364650: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00364681; /* je: equal / zero */

loc_00364656: ;
    edx = MEM32(edi + 0x5C);
    eax = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00364667; /* jg: greater (signed >) */

loc_00364661: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00364669; /* jge: greater or equal (signed >=) */

loc_00364667: ;
    ecx = ebx;

loc_00364669: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00364675; /* jl: less (signed <) */

loc_0036466D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFC0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00364681;

loc_00364675: ;
    PUSH32(esp, 0x20);
    POP32(esp, eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0036467D: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = eax;

loc_00364681: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003646B2; /* je: equal / zero */

loc_00364687: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(eax + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x80), 0 (16-bit) */
    edi = MEM32(edi + 0x70);
    if (CMP_EQ(_fa, _fb)) goto loc_003646A0; /* je: equal / zero */

loc_00364697: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax;

loc_003646A0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003646AA; /* jl: less (signed <) */

loc_003646A4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003646B2; /* jge: greater or equal (signed >=) */

loc_003646A8: ;
    goto loc_003646B0;

loc_003646AA: ;
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003646B2; /* jle: less or equal (signed <=) */

loc_003646B0: ;
    ecx = edi;

loc_003646B2: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 4);
    edx = MEM32(ebp + -20);
    edx = MEM32(eax + edx);
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 4);
    MEM32(ecx + eax * 4) = edx;
    ecx = MEM32(esi + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 2;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_003646D1: ;
    ecx = MEM32(ebp + 8);

loc_003646D4: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003646E0; /* je: equal / zero */

loc_003646DA: ;
    eax = MEM32(ebp + -12);
    MEM32(ecx + 0x2C) = eax;

loc_003646E0: ;
    eax = MEM32(ebp + 0xC);
    goto loc_003646EF;

loc_003646E5: ;
    MEM32(ecx + 0x6C) = 0x111B;

loc_003646EC: ;
    eax = MEM32(ecx + 0x70);

loc_003646EF: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003646F1: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003646F6
 * Original: 0x003646F6 - 0x003648EB (501 bytes, 153 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003646F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003646F6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x18);
    eax = MEM32(esi + 0x24);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = ecx + -4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    MEM8(ebp + -4) = LO8(edx);
    MEM8(ebp + -3) = LO8(edx);
    MEM8(ebp + -2) = LO8(edx);
    MEM8(ebp + -1) = LO8(edx);
    MEM32(ebp + -8) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_0036472C; /* jae: above or equal (unsigned >=) */

loc_00364720: ;
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003648E1;

loc_0036472C: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = ecx;
    edi = MEM32(eax + 0x130);
    edi = ZX16(MEM16(edi + 0x14));
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003648DA; /* jge: greater or equal (signed >=) */

loc_00364746: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003648DA; /* jl: less (signed <) */

loc_0036474E: ;
    edx = MEM32(eax + 0x94);
    edi = edx + ecx * 8;
    SET_LO16(edx, MEM16(edi + 6));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036476D; /* jb: below (unsigned <) */

loc_00364761: ;
    MEM32(esi + 0x6C) = 0x1115;
    goto loc_003648E1;

loc_0036476D: ;
    ebx = MEM32(esi + 0x70);
    edx = ZX16(LO16(edx));
    edx = MEM32(eax + edx * 8 + 0xB0);
    _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    MEM32(ebp + -12) = ebx;
    ebx = MEM32(esi + 0x74);
    MEM32(ebp + -16) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_003647BA; /* jl: less (signed <) */

loc_0036478A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x42 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003647BA; /* jg: greater (signed >) */

loc_0036478F: ;
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003647BA; /* je: equal / zero */

loc_00364798: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003647BA; /* jne: not equal / not zero */

loc_0036479E: ;
    _fa = (uint32_t)(MEM16(eax + 0x16E)) & 0xFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(eax + 0x16E), 0x200 (16-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003647BA; /* jbe: below or equal (unsigned <=) */

loc_003647A9: ;
    eax = MEM32(eax + 4);
    ebx = MEM32(eax + 0x58);
    MEM32(eax + 0x58) = MEM32(eax + 0x58) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 8) = ebx;
    MEM8(ebp + -4) = 1;

loc_003647BA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003647C3; /* jl: less (signed <) */

loc_003647BE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003647C8; /* jle: less or equal (signed <=) */

loc_003647C3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003647F5; /* jne: not equal / not zero */

loc_003647C8: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003647F5; /* je: equal / zero */

loc_003647D4: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003647F5; /* jne: not equal / not zero */

loc_003647DA: ;
    _fa = (uint32_t)(MEM16(eax + 0x16E)) & 0xFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(eax + 0x16E), 0x400 (16-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003647F5; /* jbe: below or equal (unsigned <=) */

loc_003647E5: ;
    eax = MEM32(eax + 4);
    ebx = MEM32(eax + 0x60);
    MEM32(eax + 0x60) = MEM32(eax + 0x60) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebp + -3) = 1;
    goto loc_003647F8;

loc_003647F5: ;
    ebx = MEM32(ebp + 8);

loc_003647F8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00364822; /* jne: not equal / not zero */

loc_003647FD: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036485C; /* je: equal / zero */

loc_00364809: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036485C; /* jne: not equal / not zero */

loc_0036480F: ;
    _fb = (uint32_t)(0x16E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x16E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(eax), 0x100 (16-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0036485C; /* jbe: below or equal (unsigned <=) */

loc_0036481B: ;
    MEM8(eax) = MEM8(eax) | 4;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebp + -2) = 1;

loc_00364822: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036485C; /* jne: not equal / not zero */

loc_00364827: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036485C; /* je: equal / zero */

loc_00364833: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036485C; /* jne: not equal / not zero */

loc_00364839: ;
    _fb = (uint32_t)(0x16E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x16E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(eax), 0x1000 (16-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0036485C; /* jbe: below or equal (unsigned <=) */

loc_00364845: ;
    MEM8(eax) = MEM8(eax) | 0x10;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax + 0x5C);
    MEM32(ebp + -8) = ecx;
    MEM32(eax + 0x5C) = 0x7FFFFFFF;
    MEM8(ebp + -1) = 1;

loc_0036485C: ;
    MEM32(esi + 0x7C) = MEM32(esi + 0x7C) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036486A; /* jne: not equal / not zero */

loc_00364861: ;
    MEM32(esi + 0x6C) = 0x1106;
    goto loc_003648E1;

loc_0036486A: ;
    eax = ZX16(MEM16(edi + 4));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x54); PUSH32(esp, 0x00364876u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364873u); } /* indirect call */
    }

loc_00364876: ;
    MEM32(esi + 0x7C) = MEM32(esi + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00364892; /* je: equal / zero */

loc_0036487F: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0x5C) = ecx;
    eax = MEM32(esi + 0x24);
    MEM8(eax + 0x16E) = MEM8(eax + 0x16E) & 0xEF;
    _fa = (uint32_t)(MEM8(eax + 0x16E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00364892: ;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -2), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003648A2; /* je: equal / zero */

loc_00364898: ;
    eax = MEM32(esi + 0x24);
    MEM8(eax + 0x16E) = MEM8(eax + 0x16E) & 0xFB;
    _fa = (uint32_t)(MEM8(eax + 0x16E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_003648A2: ;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -3), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003648B1; /* je: equal / zero */

loc_003648A8: ;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 4);
    MEM32(eax + 0x60) = ebx;

loc_003648B1: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003648C3; /* je: equal / zero */

loc_003648B7: ;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + 8);
    MEM32(eax + 0x58) = ecx;

loc_003648C3: ;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x6C), 0 (32-bit) */
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -16);
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003648E4; /* jne: not equal / not zero */

loc_003648D5: ;
    eax = MEM32(ebp + 0xC);
    goto loc_003648E4;

loc_003648DA: ;
    MEM32(esi + 0x6C) = 0x1114;

loc_003648E1: ;
    eax = MEM32(esi + 0x70);

loc_003648E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003648EB
 * Original: 0x003648EB - 0x00364B08 (541 bytes, 181 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003648EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003648EB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(ebp + 8);
    MEM8(ebp + -56) = 1;
    MEM8(ebp + -55) = 0x20;
    MEM8(ebp + -54) = 0xB0;
    MEM8(ebp + -53) = 3;
    MEM8(ebp + -52) = 0x25;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = MEM32(edx + 0x24);
    edi = ebp + -51;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ebp + -46) = 0xB0;
    MEM8(ebp + -45) = 0x16;
    MEM8(ebp + -44) = 0x43;
    MEM8(ebp + -43) = 0x58;
    edi = ebp + -42;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ebp + -36) = 1;
    MEM8(ebp + -35) = 0xB0;
    MEM8(ebp + -34) = 0x18;
    MEM8(ebp + -33) = 0x43;
    MEM8(ebp + -32) = 0x58;
    edi = ebp + -31;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ebp + -26) = 0x45;
    MEM8(ebp + -25) = 0x23;
    MEM8(ebp + -24) = 0x46;
    MEM8(ebp + -23) = 0x60;
    MEM8(ebp + -22) = 0x20;
    MEM8(ebp + -21) = 0xB0;
    MEM8(ebp + -20) = 0x26;
    edi = ebp + -19;
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(edx + 0x18);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    MEM8(ebp + -16) = 0x20;
    MEM8(ebp + -15) = 0x20;
    MEM8(ebp + -14) = 0xB0;
    MEM8(ebp + -13) = 1;
    MEM8(ebp + -12) = 0x60;
    MEM8(ebp + -11) = 0x46;
    MEM8(ebp + -10) = 0xB0;
    MEM8(ebp + -9) = 0x40;
    MEM8(ebp + -8) = 0x23;
    MEM8(ebp + -7) = 0x42;
    if (CMP_AE(_fa, _fb)) goto loc_003649AC; /* jae: above or equal (unsigned >=) */

loc_0036499D: ;
    eax = MEM32(edx + 0x70);
    MEM32(edx + 0x6C) = 0x1110;
    goto loc_00364B02;

loc_003649AC: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x18) = eax;
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    eax = MEM32(ecx + 0x130);
    eax = ZX16(MEM16(eax + 0x14));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00364AF7; /* jge: greater or equal (signed >=) */

loc_003649C7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00364AF7; /* jl: less (signed <) */

loc_003649CF: ;
    SET_LO8(eax, MEM8(ecx + 0x125));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003649E5; /* jb: below (unsigned <) */

loc_003649D9: ;
    MEM32(edx + 0x6C) = 0x1108;
    goto loc_00364AFE;

loc_003649E5: ;
    esi = MEM32(ecx + 0x94);
    SET_LO16(eax, ZX8(LO8(eax)));
    esi = esi + ebx * 8;
    MEM16(esi + 6) = LO16(eax);
    MEM32(ebp + 8) = esi;
    esi = ZX16(LO16(eax));
    eax = MEM32(ebp + 0xC);
    edi = eax;
    _fb = (uint32_t)(MEM32(ecx + esi * 8 + 0xB0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ecx + esi * 8 + 0xB0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20 (32-bit) */
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = edi;
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00364A34; /* jne: not equal / not zero */

loc_00364A15: ;
    PUSH32(esp, 5);
    esi = eax;
    POP32(esp, ecx);
    edi = ebp + -56;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00364AB9; /* jne: not equal / not zero */

loc_00364A27: ;
    eax = MEM32(edx + 0x24);
    MEM8(eax + 0x16F) = MEM8(eax + 0x16F) | 1;
    _fa = (uint32_t)(MEM8(eax + 0x16F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(ebp + 0xC);

loc_00364A34: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00364A51; /* jl: less (signed <) */

loc_00364A39: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x42 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00364A51; /* jg: greater (signed >) */

loc_00364A3E: ;
    esi = MEM32(eax);
    ecx = ebp + -46;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00364A51; /* jne: not equal / not zero */

loc_00364A47: ;
    ecx = MEM32(edx + 0x24);
    MEM8(ecx + 0x16F) = MEM8(ecx + 0x16F) | 2;
    _fa = (uint32_t)(MEM8(ecx + 0x16F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00364A51: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00364A5A; /* jl: less (signed <) */

loc_00364A55: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00364A5F; /* jle: less or equal (signed <=) */

loc_00364A5A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00364A7A; /* jne: not equal / not zero */

loc_00364A5F: ;
    PUSH32(esp, 5);
    esi = eax;
    POP32(esp, ecx);
    edi = ebp + -36;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00364A77; /* jne: not equal / not zero */

loc_00364A6D: ;
    eax = MEM32(edx + 0x24);
    MEM8(eax + 0x16F) = MEM8(eax + 0x16F) | 4;
    _fa = (uint32_t)(MEM8(eax + 0x16F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00364A77: ;
    eax = MEM32(ebp + 0xC);

loc_00364A7A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00364A99; /* jne: not equal / not zero */

loc_00364A7E: ;
    PUSH32(esp, 7);
    esi = eax;
    POP32(esp, ecx);
    edi = ebp + -26;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00364AB9; /* jne: not equal / not zero */

loc_00364A8C: ;
    eax = MEM32(edx + 0x24);
    MEM8(eax + 0x16F) = MEM8(eax + 0x16F) | 8;
    _fa = (uint32_t)(MEM8(eax + 0x16F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(ebp + 0xC);

loc_00364A99: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00364ABC; /* jne: not equal / not zero */

loc_00364A9E: ;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    edi = ebp + -16;
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) goto loc_00364ABC; /* jne: not equal / not zero */

loc_00364AAD: ;
    ecx = MEM32(edx + 0x24);
    MEM8(ecx + 0x16F) = MEM8(ecx + 0x16F) | 0x10;
    _fa = (uint32_t)(MEM8(ecx + 0x16F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00364ABC;

loc_00364AB9: ;
    eax = MEM32(ebp + 0xC);

loc_00364ABC: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x2D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00364AD5; /* je: equal / zero */

loc_00364AC1: ;
    esi = MEM32(edx + 0x70);

loc_00364AC4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00364AD6; /* jae: above or equal (unsigned >=) */

loc_00364AC9: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00364AD0u); RECOMP_ABI_CALL(0x00363BB6u, sub_00363BB6); /* call 0x00363BB6 */

loc_00364AD0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x2D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00364AC4; /* jne: not equal / not zero */

loc_00364AD5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00364AD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x70) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00364AE8; /* jne: not equal / not zero */

loc_00364ADB: ;
    _fa = (uint32_t)(MEM8(eax + -1)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -1), 0x2D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00364AE8; /* je: equal / zero */

loc_00364AE1: ;
    MEM32(edx + 0x6C) = 0x1104;

loc_00364AE8: ;
    edx = MEM32(ebp + 8);
    ecx = eax;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(edx + 4) = LO16(ecx);
    goto loc_00364B01;

loc_00364AF7: ;
    MEM32(edx + 0x6C) = 0x1114;

loc_00364AFE: ;
    eax = MEM32(edx + 0x70);

loc_00364B01: ;
    POP32(esp, ebx);

loc_00364B02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00364B08
 * Original: 0x00364B08 - 0x00364BF0 (232 bytes, 78 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00364B08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364B08: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x24);
    edx = eax + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_00364B2F; /* jae: above or equal (unsigned >=) */

loc_00364B20: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_00364BEA;

loc_00364B2F: ;
    PUSH32(esp, ebx);
    ebx = eax + -4;
    MEM32(esi + 0x18) = ebx;
    edx = MEM32(ecx + 0x130);
    edx = ZX16(MEM16(edx + 0x14));
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00364BDF; /* jge: greater or equal (signed >=) */

loc_00364B4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00364BDF; /* jl: less (signed <) */

loc_00364B52: ;
    edx = MEM32(ecx + 0x94);
    eax = edx + eax * 8;
    SET_LO16(edx, MEM16(eax + 6));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00364B6E; /* jb: below (unsigned <) */

loc_00364B65: ;
    MEM32(esi + 0x6C) = 0x1115;
    goto loc_00364BE6;

loc_00364B6E: ;
    edx = ZX16(LO16(edx));
    ecx = MEM32(ecx + edx * 8 + 0xB0);
    edx = MEM32(eax);
    edi = edx + ecx;
    MEM32(ebp + -4) = edi;
    edi = ZX16(MEM16(eax + 4));
    eax = MEM32(esi + 0x54);
    MEM32(ebp + -8) = eax;
    eax = ebx + -4;
    ebx = MEM32(esi + 0x70);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x74);
    MEM32(esi + 0x18) = eax;
    eax = MEM32(eax);
    MEM32(esi + 0x7C) = MEM32(esi + 0x7C) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = ecx;
    if ((_fa != 0)) goto loc_00364BAF; /* jne: not equal / not zero */

loc_00364BA4: ;
    MEM32(esi + 0x6C) = 0x1106;

loc_00364BAB: ;
    eax = ebx;
    goto loc_00364BE9;

loc_00364BAF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = eax;
    if ((_fas < 0)) goto loc_00364BC8; /* js: sign (negative) */

loc_00364BB5: ;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x6C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00364BC8; /* jne: not equal / not zero */

loc_00364BBB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x00364BC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364BC0u); } /* indirect call */
    }

loc_00364BC3: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00364BB5; /* jns: not sign (positive) */

loc_00364BC8: ;
    MEM32(esi + 0x7C) = MEM32(esi + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x6C), 0 (32-bit) */
    eax = MEM32(ebp + -12);
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x74) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00364BAB; /* jne: not equal / not zero */

loc_00364BDA: ;
    eax = MEM32(ebp + 0xC);
    goto loc_00364BE9;

loc_00364BDF: ;
    MEM32(esi + 0x6C) = 0x1114;

loc_00364BE6: ;
    eax = MEM32(esi + 0x70);

loc_00364BE9: ;
    POP32(esp, ebx);

loc_00364BEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00364BF0
 * Original: 0x00364BF0 - 0x00364C19 (41 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00364BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364BF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx + 0x98);
    ecx = MEM32(ecx + 0x128);
    goto loc_00364C11;

loc_00364C05: ;
    SET_LO8(edx, MEM8(eax + 7));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esp + 8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esp + 8) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00364C16; /* je: equal / zero */

loc_00364C0E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00364C11: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00364C05; /* jns: not sign (positive) */

loc_00364C14: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00364C16: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00364C19
 * Original: 0x00364C19 - 0x00364C94 (123 bytes, 44 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364C19(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364C19: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0x74);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    edi = MEM32(esi + 0x70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00364C30u); RECOMP_ABI_CALL(0x00364BF0u, sub_00364BF0); /* call 0x00364BF0 */

loc_00364C30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00364C3D; /* jne: not equal / not zero */

loc_00364C34: ;
    MEM32(esi + 0x6C) = 0x1101;
    goto loc_00364C69;

loc_00364C3D: ;
    SET_LO8(ecx, MEM8(eax + 6));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00364C4E; /* jb: below (unsigned <) */

loc_00364C45: ;
    MEM32(esi + 0x6C) = 0x1115;
    goto loc_00364C69;

loc_00364C4E: ;
    edx = MEM32(esi + 0x24);
    ecx = ZX8(LO8(ecx));
    ecx = MEM32(edx + ecx * 8 + 0xB0);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x7C) = MEM32(esi + 0x7C) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00364C6D; /* jne: not equal / not zero */

loc_00364C62: ;
    MEM32(esi + 0x6C) = 0x1106;

loc_00364C69: ;
    eax = edi;
    goto loc_00364C8E;

loc_00364C6D: ;
    eax = ZX16(MEM16(eax + 4));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x54); PUSH32(esp, 0x00364C79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364C76u); } /* indirect call */
    }

loc_00364C79: ;
    MEM32(esi + 0x7C) = MEM32(esi + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x6C), 0 (32-bit) */
    MEM32(esi + 0x70) = edi;
    MEM32(esi + 0x74) = ebx;
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00364C8E; /* jne: not equal / not zero */

loc_00364C8A: ;
    eax = MEM32(esp + 0x14);

loc_00364C8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00364C94
 * Original: 0x00364C94 - 0x00364D96 (258 bytes, 87 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00364C94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364C94: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x24);
    eax = ZX8(MEM8(esi + 0x125));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00364CBF; /* jl: less (signed <) */

loc_00364CB0: ;
    eax = MEM32(edi + 0x70);
    MEM32(edi + 0x6C) = 0x1109;
    goto loc_00364D90;

loc_00364CBF: ;
    eax = MEM32(esi + eax * 8 + 0xB0);
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    ecx = eax + -4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi) (32-bit) */
    MEM32(ebp + -8) = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_00364CE9; /* jae: above or equal (unsigned >=) */

loc_00364CDA: ;
    MEM32(edi + 0x6C) = 0x1110;

loc_00364CE1: ;
    eax = MEM32(edi + 0x70);
    goto loc_00364D8F;

loc_00364CE9: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x18) = eax;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFFF00u (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00364D04; /* je: equal / zero */

loc_00364CFB: ;
    MEM32(edi + 0x6C) = 0x1117;
    goto loc_00364CE1;

loc_00364D04: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00364D0Bu); RECOMP_ABI_CALL(0x00364BF0u, sub_00364BF0); /* call 0x00364BF0 */

loc_00364D0B: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00364D42; /* jne: not equal / not zero */

loc_00364D11: ;
    eax = MEM32(esi + 0x130);
    eax = ZX16(MEM16(eax + 0x16));
    _fa = (uint32_t)(MEM32(esi + 0x128)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x128), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00364D2C; /* jl: less (signed <) */

loc_00364D23: ;
    MEM32(edi + 0x6C) = 0x1118;
    goto loc_00364CE1;

loc_00364D2C: ;
    eax = MEM32(esi + 0x128);
    ecx = MEM32(esi + 0x98);
    edx = ecx + eax * 8;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x128) = eax;

loc_00364D42: ;
    SET_LO8(eax, MEM8(ebp + 8));
    MEM8(edx + 6) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0xC));
    MEM8(edx + 7) = LO8(eax);
    eax = ebx;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = eax;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0x2D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00364D70; /* je: equal / zero */

loc_00364D5A: ;
    esi = MEM32(edi + 0x70);

loc_00364D5D: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00364D71; /* jae: above or equal (unsigned >=) */

loc_00364D62: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00364D69u); RECOMP_ABI_CALL(0x00363BB6u, sub_00363BB6); /* call 0x00363BB6 */

loc_00364D69: ;
    ebx = eax;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0x2D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00364D5D; /* jne: not equal / not zero */

loc_00364D70: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00364D71: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x70) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00364D83; /* jne: not equal / not zero */

loc_00364D76: ;
    _fa = (uint32_t)(MEM8(ebx + -1)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + -1), 0x2D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00364D83; /* je: equal / zero */

loc_00364D7C: ;
    MEM32(edi + 0x6C) = 0x1104;

loc_00364D83: ;
    eax = ebx;
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(edx + 4) = LO16(eax);
    eax = ebx;

loc_00364D8F: ;
    POP32(esp, ebx);

loc_00364D90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00364D96
 * Original: 0x00364D96 - 0x00364E0D (119 bytes, 41 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364D96(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364D96: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x24);
    ebx = ecx + -4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi) (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x24);
    if (CMP_AE(_fa, _fb)) goto loc_00364DB8; /* jae: above or equal (unsigned >=) */

loc_00364DAF: ;
    MEM32(eax + 0x6C) = 0x1110;
    goto loc_00364DDE;

loc_00364DB8: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), edx (32-bit) */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00364DE7; /* jne: not equal / not zero */

loc_00364DC5: ;
    edx = MEM32(esi + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */

loc_00364DD1: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00364DD7; /* jge: greater or equal (signed >=) */

loc_00364DD3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00364DEF; /* jge: greater or equal (signed >=) */

loc_00364DD7: ;
    MEM32(eax + 0x6C) = 0x1112;

loc_00364DDE: ;
    eax = MEM32(eax + 0x70);

loc_00364DE1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00364DE7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x160) (32-bit) */
    goto loc_00364DD1;

loc_00364DEF: ;
    _fa = (uint32_t)(MEM16(eax + 0x10)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x10), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00364DFA; /* je: equal / zero */

loc_00364DF6: ;
    MEM8(ecx + edi) = MEM8(ecx + edi) & 0xFE;
    _fa = (uint32_t)(MEM8(ecx + edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00364DFA: ;
    _fa = (uint32_t)(MEM16(eax + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x12), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00364E07; /* je: equal / zero */

loc_00364E01: ;
    eax = ecx + edi;
    MEM8(eax) = MEM8(eax) & 0xFD;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00364E07: ;
    eax = MEM32(esp + 0x14);
    goto loc_00364DE1;

}

/**
 * sub_00364E0D
 * Original: 0x00364E0D - 0x00364E43 (54 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364E0D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364E0D: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00364E2C; /* jae: above or equal (unsigned >=) */

loc_00364E20: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_00364E40;

loc_00364E2C: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    SET_LO16(eax, MEM16(eax));
    MEM16(edx + 0x88) = LO16(eax);
    eax = MEM32(esp + 8);

loc_00364E40: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00364E43
 * Original: 0x00364E43 - 0x00364E79 (54 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364E43(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364E43: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00364E62; /* jae: above or equal (unsigned >=) */

loc_00364E56: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_00364E76;

loc_00364E62: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    SET_LO16(eax, MEM16(eax));
    MEM16(edx + 0x8A) = LO16(eax);
    eax = MEM32(esp + 8);

loc_00364E76: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00364E79
 * Original: 0x00364E79 - 0x00365077 (510 bytes, 163 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00364E79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364E79: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x18);
    eax = MEM32(esi + 0x24);
    edx = ecx + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00364E9D; /* jae: above or equal (unsigned >=) */

loc_00364E8E: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_00365062;

loc_00364E9D: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = ecx;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_00364EC5; /* jae: above or equal (unsigned >=) */

loc_00364EB6: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_00365061;

loc_00364EC5: ;
    MEM32(esi + 0x18) = ecx;
    _fa = (uint32_t)(MEM8(eax + 0x12C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x12C), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = ZX16(MEM16(eax + 0xC));
    if (CMP_NE(_fa, _fb)) goto loc_00364EE5; /* jne: not equal / not zero */

loc_00364ED6: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00364EDCu); RECOMP_ABI_CALL(0x003600C9u, sub_003600C9); /* call 0x003600C9 */

loc_00364EDC: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00364EE3u); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_00364EE3: ;
    edi = eax;

loc_00364EE5: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036505D; /* jge: greater or equal (signed >=) */

loc_00364EF4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036505D; /* jl: less (signed <) */

loc_00364EFC: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(ebp + 8) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00365054; /* jle: less or equal (signed <=) */

loc_00364F16: ;
    edx = MEM32(esi + 0x18);

loc_00364F19: ;
    ecx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(edx + ecx * 4);
    edi = edi & 0xFFFFFFF0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00364F2C; /* jge: greater or equal (signed >=) */

loc_00364F29: ;
    MEM32(ebp + 0x14) = ecx;

loc_00364F2C: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00364F19; /* jg: greater (signed >) */

loc_00364F36: ;
    goto loc_00365054;

loc_00364F3B: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(ebp + 0x14);
    edx = eax + ecx * 4;
    eax = MEM32(edx);
    ecx = eax;
    ecx = ecx & 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00365067; /* jne: not equal / not zero */

loc_00364F54: ;
    edi = MEM32(edx + 4);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ecx, MEM8(ebp + 0x18));
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = eax;
    eax = MEM32(ebp + 0x10);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x48) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00364FAC; /* jne: not equal / not zero */

loc_00364F79: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    eax = MEM32(esi + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_00364FA4; /* jne: not equal / not zero */

loc_00364F83: ;
    ecx = MEM32(eax + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */

loc_00364F8F: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00364F95; /* jge: greater or equal (signed >=) */

loc_00364F91: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00364FC6; /* jge: greater or equal (signed >=) */

loc_00364F95: ;
    MEM32(esi + 0x6C) = 0x1112;

loc_00364F9C: ;
    eax = MEM32(esi + 0x70);
    goto loc_00365060;

loc_00364FA4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x160) (32-bit) */
    goto loc_00364F8F;

loc_00364FAC: ;
    eax = MEM32(esi + 0x24);
    ecx = ZX16(MEM16(eax + 0x134));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036506B; /* jge: greater or equal (signed >=) */

loc_00364FBE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036506B; /* jl: less (signed <) */

loc_00364FC6: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x60) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00365045; /* je: equal / zero */

loc_00364FCE: ;
    SET_LO16(ecx, MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00365045; /* je: equal / zero */

loc_00364FDA: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00365045; /* jne: not equal / not zero */

loc_00364FE0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00365015; /* jne: not equal / not zero */

loc_00364FE5: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036504D; /* jne: not equal / not zero */

loc_00364FED: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036504D; /* jne: not equal / not zero */

loc_00364FF4: ;
    _fa = (uint32_t)(MEM8(eax + 0x12D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x12D), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00365045; /* jne: not equal / not zero */

loc_00364FFD: ;
    ecx = MEM32(esi);
    edx = (uint32_t)(int32_t)SMEM16(edx + 4);
    ecx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(MEM8(edx + ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036504D; /* je: equal / zero */

loc_0036500C: ;
    _fa = (uint32_t)(MEM8(eax + 0x16E)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16E), 2 (8-bit) */
    goto loc_00365043;

loc_00365015: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036504D; /* jne: not equal / not zero */

loc_0036501D: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036504D; /* jne: not equal / not zero */

loc_00365024: ;
    _fa = (uint32_t)(MEM8(eax + 0x12D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x12D), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00365045; /* jne: not equal / not zero */

loc_0036502D: ;
    ecx = MEM32(esi);
    edx = (uint32_t)(int32_t)SMEM16(edx + 4);
    ecx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(MEM8(edx + ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036504D; /* je: equal / zero */

loc_0036503C: ;
    _fa = (uint32_t)(MEM8(eax + 0x16E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16E), 1 (8-bit) */

loc_00365043: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0036504D; /* jne: not equal / not zero */

loc_00365045: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + 0x10); PUSH32(esp, 0x0036504Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036504Au); } /* indirect call */
    }

loc_0036504D: ;
    ebx = MEM32(ebp + -4);

loc_00365050: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00365054: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00364F3B; /* jl: less (signed <) */

loc_0036505D: ;
    eax = MEM32(ebp + 0xC);

loc_00365060: ;
    POP32(esp, edi);

loc_00365061: ;
    POP32(esp, ebx);

loc_00365062: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

loc_00365067: ;
    if (CMP_G(_fas, _fbs)) goto loc_0036505D; /* jg: greater (signed >) */

loc_00365069: ;
    goto loc_00365050;

loc_0036506B: ;
    MEM32(esi + 0x6C) = 0x111B;
    goto loc_00364F9C;

}

/**
 * sub_00365077
 * Original: 0x00365077 - 0x0036509D (38 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365077(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365077: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax + 0x2E));
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx + 0x48));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036509Au); RECOMP_ABI_CALL(0x00364E79u, sub_00364E79); /* call 0x00364E79 */

loc_0036509A: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036509D
 * Original: 0x0036509D - 0x003650C7 (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036509D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036509D: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x2C));
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2E);
    _fb = (uint32_t)(0x10) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 0x10);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edx + 0x48));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, edx);
    PUSH32(esp, 0x003650C4u); RECOMP_ABI_CALL(0x00364E79u, sub_00364E79); /* call 0x00364E79 */

loc_003650C4: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003650C7
 * Original: 0x003650C7 - 0x003650F1 (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003650C7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003650C7: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x2C));
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2E);
    _fb = (uint32_t)(0x20) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 0x20);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edx + 0x48));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, edx);
    PUSH32(esp, 0x003650EEu); RECOMP_ABI_CALL(0x00364E79u, sub_00364E79); /* call 0x00364E79 */

loc_003650EE: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003650F1
 * Original: 0x003650F1 - 0x00365117 (38 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003650F1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003650F1: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax + 0x2E));
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx + 0x60));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00365114u); RECOMP_ABI_CALL(0x00364E79u, sub_00364E79); /* call 0x00364E79 */

loc_00365114: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00365117
 * Original: 0x00365117 - 0x00365141 (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365117(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365117: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x2C));
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2E);
    _fb = (uint32_t)(0x10) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 0x10);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edx + 0x60));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036513Eu); RECOMP_ABI_CALL(0x00364E79u, sub_00364E79); /* call 0x00364E79 */

loc_0036513E: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00365141
 * Original: 0x00365141 - 0x0036516B (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365141(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365141: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x2C));
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2E);
    _fb = (uint32_t)(0x20) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 0x20);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edx + 0x60));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, edx);
    PUSH32(esp, 0x00365168u); RECOMP_ABI_CALL(0x00364E79u, sub_00364E79); /* call 0x00364E79 */

loc_00365168: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036516B
 * Original: 0x0036516B - 0x003651BE (83 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036516B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036516B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(MEM8(ecx + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00365191; /* jne: not equal / not zero */

loc_0036517A: ;
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36005D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x50), 0x36005D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00365191; /* jne: not equal / not zero */

loc_00365183: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036518Fu); RECOMP_ABI_CALL(0x0035FCA7u, sub_0035FCA7); /* call 0x0035FCA7 */

loc_0036518F: ;
    goto loc_003651BA;

loc_00365191: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003651A7; /* jl: less (signed <) */

loc_003651A0: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003651AE;

loc_003651A7: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003651AE: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003651BA; /* jge: greater or equal (signed >=) */

loc_003651B4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003651BA; /* je: equal / zero */

loc_003651B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003651BA: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003651BE
 * Original: 0x003651BE - 0x0036523D (127 bytes, 37 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003651BE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003651BE: ;
    eax = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x130);
    MEM32(eax + 0x128) = ecx;
    MEM8(eax + 0x124) = 1;
    MEM8(eax + 0x125) = 1;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0x14)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x14), LO16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036520F; /* jbe: below or equal (unsigned <=) */

loc_003651F3: ;
    esi = MEM32(eax + 0x94);
    MEM16(esi + edx * 8 + 6) = 2;
    esi = MEM32(eax + 0x130);
    esi = ZX16(MEM16(esi + 0x14));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003651F3; /* jl: less (signed <) */

loc_0036520F: ;
    edx = MEM32(eax + 0xB8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00365238; /* je: equal / zero */

loc_0036521A: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, eax);
    eax = MEM32(eax + 0xBC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x00365236u); RECOMP_ABI_CALL(0x00360293u, sub_00360293); /* call 0x00360293 */

loc_00365236: ;
    goto loc_0036523A;

loc_00365238: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036523A: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0036523D
 * Original: 0x0036523D - 0x003652A5 (104 bytes, 42 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036523D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036523D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    eax = MEM32(ebx + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0x24;
    edi = ebx + 0x5C;
    PUSH32(esp, 0xE);
    POP32(esp, ecx);
    MEM32(ebp + -4) = esi;
    MEM32(ebp + 0x10) = edi;
    MEM8(ebx + 0x124) = 1;
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
    MEM8(ebx + 0x125) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0036528B; /* je: equal / zero */

loc_00365270: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(ebx + 0xB4);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00365289u); RECOMP_ABI_CALL(0x00360293u, sub_00360293); /* call 0x00360293 */

loc_00365289: ;
    goto loc_0036528D;

loc_0036528B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036528D: ;
    _fa = (uint32_t)(MEM8(ebx + 0x6C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x6C), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036529E; /* jne: not equal / not zero */

loc_00365293: ;
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + -4);
    PUSH32(esp, 0xE);
    POP32(esp, ecx);
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

loc_0036529E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003652A5
 * Original: 0x003652A5 - 0x0036530E (105 bytes, 40 insns)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003652A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003652A5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xE);
    esi = ebx + 0x24;
    edi = ebx + 0x5C;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
    _fa = (uint32_t)(MEM8(ebx + 0x6C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x6C), 1 (8-bit) */
    MEM8(ebx + 0x124) = LO8(eax);
    MEM8(ebx + 0x125) = 2;
    if (TEST_NZ(_fa, _fb)) goto loc_003652E3; /* jne: not equal / not zero */

loc_003652CE: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003652E3u); RECOMP_ABI_CALL(0x00360293u, sub_00360293); /* call 0x00360293 */

loc_003652E3: ;
    ecx = MEM32(ebx + 0x68);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x30) (32-bit) */
    ecx = MEM32(ebp + 0x28);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = edx;
    SET_LO16(ecx, MEM16(ebx + 0x68));
    edx = MEM32(ebp + 0x24);
    MEM16(edx) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebx + 0x6A));
    edx = MEM32(ebp + 0x20);
    MEM16(edx) = LO16(ecx);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_0036530E
 * Original: 0x0036530E - 0x00365368 (90 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036530E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036530E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x24);
    ecx = eax + -4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036532C; /* jae: above or equal (unsigned >=) */

loc_00365320: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_00365364;

loc_0036532C: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036533Cu); RECOMP_ABI_CALL(0x003614A6u, sub_003614A6); /* call 0x003614A6 */

loc_0036533C: ;
    eax = MEM32(esi + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x1C) = 6;
    ecx = ZX16(MEM16(esi + 0x80));
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ecx + 0x41EA00);
    MEM32(eax + 0x18) = ecx;
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 0xC);

loc_00365364: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00365368
 * Original: 0x00365368 - 0x003653C2 (90 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365368(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365368: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x24);
    ecx = eax + -4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00365386; /* jae: above or equal (unsigned >=) */

loc_0036537A: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003653BE;

loc_00365386: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00365396u); RECOMP_ABI_CALL(0x003614A6u, sub_003614A6); /* call 0x003614A6 */

loc_00365396: ;
    eax = MEM32(esi + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x1C) = 7;
    ecx = ZX16(MEM16(esi + 0x80));
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ecx + 0x41EA04);
    MEM32(eax + 0x18) = ecx;
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 0xC);

loc_003653BE: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003653C2
 * Original: 0x003653C2 - 0x0036541C (90 bytes, 39 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003653C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003653C2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ecx = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    MEM32(ebp + 8) = eax;
    eax = edx;
    PUSH32(esp, edi);
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = 0xFFFF;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebp + 0x10);
    edi = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 8));
    ebx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 8));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    MEM32(esi) = edi;
    edi = MEM32(ebp + 0x14);
    MEM32(edi) = ebx;
    ecx = edx;
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + edx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0036541C
 * Original: 0x0036541C - 0x00365485 (105 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036541C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036541C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = 2;
    PUSH32(esp, edi);

loc_00365432: ;
    edi = MEM32(ebp + -4);
    MEM32(ebp + -8) = 2;

loc_0036543C: ;
    esi = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ebx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036544B; /* jge: greater or equal (signed >=) */

loc_00365449: ;
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0036544B: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x51E);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036545Eu); RECOMP_ABI_CALL(0x003653C2u, sub_003653C2); /* call 0x003653C2 */

loc_0036545E: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) << 0x10;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036546B; /* je: equal / zero */

loc_00365469: ;
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0036546B: ;
    MEM32(edi) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036543C; /* jne: not equal / not zero */

loc_00365475: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xC;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00365432; /* jne: not equal / not zero */

loc_0036547E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00365485
 * Original: 0x00365485 - 0x003654A2 (29 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365485(void)
{

loc_00365485: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x148) = ecx;
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(eax + 0x16C) = LO16(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003654A2
 * Original: 0x003654A2 - 0x003654BD (27 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003654A2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003654A2: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0xC);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003654BD
 * Original: 0x003654BD - 0x003654F4 (55 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003654BD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003654BD: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    if (CMP_GE(_fas, _fbs)) goto loc_003654E0; /* jge: greater or equal (signed >=) */

loc_003654CB: ;
    edx = MEM32(eax + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 8));
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    goto loc_003654F1;

loc_003654E0: ;
    eax = MEM32(eax + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }

loc_003654F1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003654F4
 * Original: 0x003654F4 - 0x00365506 (18 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003654F4(void)
{

loc_003654F4: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00365503u); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_00365503: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00365506
 * Original: 0x00365506 - 0x00365577 (113 bytes, 43 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365506(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365506: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = ebx;
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036551Bu); RECOMP_ABI_CALL(0x0035D233u, sub_0035D233); /* call 0x0035D233 */

loc_0036551B: ;
    ecx = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00365526; /* jle: less or equal (signed <=) */

loc_00365522: ;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00365526: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2000000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00365533; /* jge: greater or equal (signed >=) */

loc_0036552E: ;
    ebx = ebx << 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00365536;

loc_00365533: ;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((6) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00365536: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0036553Du); RECOMP_ABI_CALL(0x0035CC80u, sub_0035CC80); /* call 0x0035CC80 */

loc_0036553D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x7FFF (32-bit) */
    esi = MEM32(esp + 0x10);
    MEM32(esi) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0036556C; /* jg: greater (signed >) */

loc_0036554B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00365551u); RECOMP_ABI_CALL(0x0035D526u, sub_0035D526); /* call 0x0035D526 */

loc_00365551: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00365565; /* jl: less (signed <) */

loc_0036555B: ;
    MEM32(esi + 0xC) = eax;
    eax = 0x3654A2;
    goto loc_00365571;

loc_00365565: ;
    eax = 0x3654BD;
    goto loc_00365571;

loc_0036556C: ;
    eax = 0x3654F4;

loc_00365571: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00365577
 * Original: 0x00365577 - 0x00365636 (191 bytes, 79 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00365577(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365577: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3654A2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x3654A2 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003655B9; /* jne: not equal / not zero */

loc_00365586: ;
    edi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036562F; /* jle: less or equal (signed <=) */

loc_00365591: ;
    edx = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0036559C: ;
    ebx = MEM32(esi + edx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(eax + 8));
    ecx = MEM32(eax + 4);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0xC);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(edx) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036559C; /* jne: not equal / not zero */

loc_003655B7: ;
    goto loc_0036562F;

loc_003655B9: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3654BD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x3654BD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036560B; /* jne: not equal / not zero */

loc_003655C2: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036562F; /* jle: less or equal (signed <=) */

loc_003655C9: ;
    edi = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x18) = eax;

loc_003655D7: ;
    edx = MEM32(edi);
    eax = MEM32(ecx + 8);
    ebx = MEM32(ecx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003655F5; /* jge: greater or equal (signed >=) */

loc_003655E6: ;
    edx = eax;
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    goto loc_003655FE;

loc_003655F5: ;
    edx = ebx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }

loc_003655FE: ;
    MEM32(esi + edi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003655D7; /* jne: not equal / not zero */

loc_00365609: ;
    goto loc_0036562F;

loc_0036560B: ;
    ebx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036562F; /* jle: less or equal (signed <=) */

loc_00365612: ;
    esi = MEM32(ebp + 0x14);
    edi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0036561A: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, MEM32(esi + edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00365627u); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_00365627: ;
    MEM32(esi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036561A; /* jne: not equal / not zero */

loc_0036562F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00365636
 * Original: 0x00365636 - 0x00365722 (236 bytes, 91 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00365636(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365636: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3654A2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x3654A2 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0036568C; /* jne: not equal / not zero */

loc_00365648: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0x1FF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036568C; /* jge: greater or equal (signed >=) */

loc_00365651: ;
    ecx = MEM32(esi + 0xC);
    edi = MEM32(ebp + 0x18);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036571B; /* jle: less or equal (signed <=) */

loc_00365662: ;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x18) = edi;

loc_0036566D: ;
    edi = MEM32(edx + eax);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esi + 8));
    ebx = MEM32(esi + 4);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(eax) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036566D; /* jne: not equal / not zero */

loc_00365687: ;
    goto loc_0036571B;

loc_0036568C: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3654BD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x3654BD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003656F1; /* jne: not equal / not zero */

loc_00365695: ;
    edi = MEM32(esi + 8);
    ecx = MEM32(ebp + 0x18);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((6) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036571B; /* jle: less or equal (signed <=) */

loc_003656A2: ;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x18) = edx;
    MEM32(ebp + 0x10) = eax;
    MEM32(ebp + 0x14) = ecx;

loc_003656B3: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = MEM32(esi + 4);
    if (CMP_GE(_fas, _fbs)) goto loc_003656CF; /* jge: greater or equal (signed >=) */

loc_003656BF: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    goto loc_003656DD;

loc_003656CF: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ecx = ebx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }

loc_003656DD: ;
    edx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + edx) = eax;
    if ((_fa != 0)) goto loc_003656B3; /* jne: not equal / not zero */

loc_003656EF: ;
    goto loc_0036571B;

loc_003656F1: ;
    esi = MEM32(esi);
    eax = MEM32(ebp + 0x18);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((6) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036571B; /* jle: less or equal (signed <=) */

loc_003656FD: ;
    edi = MEM32(ebp + 0x14);
    ebx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x18) = eax;

loc_00365708: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(edi + ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00365711u); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_00365711: ;
    MEM32(edi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00365708; /* jne: not equal / not zero */

loc_0036571B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00365722
 * Original: 0x00365722 - 0x0036575C (58 bytes, 27 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00365722(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365722: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    eax = MEM32(ebp + 0x18);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((6) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00365757; /* jle: less or equal (signed <=) */

loc_00365735: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 8) = eax;

loc_00365742: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(edi + esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036574Bu); RECOMP_ABI_CALL(0x0035CC80u, sub_0035CC80); /* call 0x0035CC80 */

loc_0036574B: ;
    MEM32(esi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00365742; /* jne: not equal / not zero */

loc_00365755: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00365757: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0036575C
 * Original: 0x0036575C - 0x00365781 (37 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036575C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036575C: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036577E; /* jle: less or equal (signed <=) */

loc_00365764: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);

loc_0036576F: ;
    esi = MEM32(eax + ecx);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036576F; /* jne: not equal / not zero */

loc_0036577D: ;
    POP32(esp, esi);

loc_0036577E: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00365781
 * Original: 0x00365781 - 0x0036581F (158 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365781(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365781: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    ecx = MEM32(edi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x14C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x14C), 0 (8-bit) */
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, MEM32(edi + 0x10));
    if (CMP_EQ(_fa, _fb)) goto loc_003657E1; /* je: equal / zero */

loc_003657AC: ;
    PUSH32(esp, MEM32(esi + 0xA4));
    eax = esi + 0xE0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003657BEu); RECOMP_ABI_CALL(0x00365577u, sub_00365577); /* call 0x00365577 */

loc_003657BE: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    ecx = MEM32(edi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0xC));
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(edi + 0x14));
    PUSH32(esp, MEM32(esi + -72));
    goto loc_00365814;

loc_003657E1: ;
    PUSH32(esp, MEM32(esi + 0x9C));
    eax = esi + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003657F3u); RECOMP_ABI_CALL(0x00365577u, sub_00365577); /* call 0x00365577 */

loc_003657F3: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    ecx = MEM32(edi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0xC));
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(edi + 0x14));
    PUSH32(esp, MEM32(esi + -48));

loc_00365814: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036581Au); RECOMP_ABI_CALL(0x00365577u, sub_00365577); /* call 0x00365577 */

loc_0036581A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036581F
 * Original: 0x0036581F - 0x003658BF (160 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036581F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036581F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    edx = MEM32(edi + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    eax = MEM32(edi);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x14C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x14C), 0 (8-bit) */
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0036587F; /* je: equal / zero */

loc_00365848: ;
    PUSH32(esp, MEM32(esi + 0xA4));
    eax = esi + 0xE0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036585Au); RECOMP_ABI_CALL(0x00365636u, sub_00365636); /* call 0x00365636 */

loc_0036585A: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    edx = MEM32(edi + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    eax = MEM32(edi + 4);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xA8));
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003658B4;

loc_0036587F: ;
    PUSH32(esp, MEM32(esi + 0x9C));
    eax = esi + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00365891u); RECOMP_ABI_CALL(0x00365636u, sub_00365636); /* call 0x00365636 */

loc_00365891: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    edx = MEM32(edi + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    eax = MEM32(edi + 4);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xA0));
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003658B4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003658BAu); RECOMP_ABI_CALL(0x00365636u, sub_00365636); /* call 0x00365636 */

loc_003658BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003658BF
 * Original: 0x003658BF - 0x0036595B (156 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003658BF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003658BF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ebx = ZX16(LO16(eax));
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(edi + 0x14C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x14C), 0 (8-bit) */
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00365923; /* je: equal / zero */

loc_003658F5: ;
    PUSH32(esp, MEM32(edi + 0xA4));
    eax = edi + 0xE0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00365907u); RECOMP_ABI_CALL(0x00365577u, sub_00365577); /* call 0x00365577 */

loc_00365907: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0xA8));
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xF0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0036594F;

loc_00365923: ;
    PUSH32(esp, MEM32(edi + 0x9C));
    eax = edi + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00365935u); RECOMP_ABI_CALL(0x00365577u, sub_00365577); /* call 0x00365577 */

loc_00365935: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0xA0));
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xD0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036594F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00365955u); RECOMP_ABI_CALL(0x00365577u, sub_00365577); /* call 0x00365577 */

loc_00365955: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036595B
 * Original: 0x0036595B - 0x003659B5 (90 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036595B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036595B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    ecx = MEM32(edi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ZX16(LO16(eax));
    eax = MEM32(edi);
    PUSH32(esp, 8);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xA4));
    eax = ebx + 0xE0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00365994u); RECOMP_ABI_CALL(0x00365636u, sub_00365636); /* call 0x00365636 */

loc_00365994: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xA8));
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xF0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003659AFu); RECOMP_ABI_CALL(0x00365636u, sub_00365636); /* call 0x00365636 */

loc_003659AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003659B5
 * Original: 0x003659B5 - 0x00365A55 (160 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003659B5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003659B5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    edx = MEM32(edi + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    eax = MEM32(edi);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x14C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x14C), 0 (8-bit) */
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00365A15; /* je: equal / zero */

loc_003659DE: ;
    PUSH32(esp, MEM32(esi + 0xA4));
    eax = esi + 0xE0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003659F0u); RECOMP_ABI_CALL(0x00365722u, sub_00365722); /* call 0x00365722 */

loc_003659F0: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    edx = MEM32(edi + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    eax = MEM32(edi + 4);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xA8));
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00365A4A;

loc_00365A15: ;
    PUSH32(esp, MEM32(esi + 0x9C));
    eax = esi + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00365A27u); RECOMP_ABI_CALL(0x00365722u, sub_00365722); /* call 0x00365722 */

loc_00365A27: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    edx = MEM32(edi + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    eax = MEM32(edi + 4);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xA0));
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00365A4A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00365A50u); RECOMP_ABI_CALL(0x00365722u, sub_00365722); /* call 0x00365722 */

loc_00365A50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00365A55
 * Original: 0x00365A55 - 0x00365AE1 (140 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365A55(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365A55: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x28);
    ecx = MEM32(ebx + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edi = ZX16(LO16(eax));
    eax = MEM32(ebx);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi + 0x14C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x14C), 0 (8-bit) */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00365AAE; /* je: equal / zero */

loc_00365A85: ;
    PUSH32(esp, MEM32(esi + 0xA4));
    eax = esi + 0xE0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00365A97u); RECOMP_ABI_CALL(0x00365722u, sub_00365722); /* call 0x00365722 */

loc_00365A97: ;
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xA8));
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00365AD5;

loc_00365AAE: ;
    PUSH32(esp, MEM32(esi + 0x9C));
    eax = esi + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00365AC0u); RECOMP_ABI_CALL(0x00365722u, sub_00365722); /* call 0x00365722 */

loc_00365AC0: ;
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xA0));
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00365AD5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00365ADBu); RECOMP_ABI_CALL(0x00365722u, sub_00365722); /* call 0x00365722 */

loc_00365ADB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00365AE1
 * Original: 0x00365AE1 - 0x00365B23 (66 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365AE1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365AE1: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x00365B02u); RECOMP_ABI_CALL(0x0036575Cu, sub_0036575C); /* call 0x0036575C */

loc_00365B02: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 0x00365B1Fu); RECOMP_ABI_CALL(0x0036575Cu, sub_0036575C); /* call 0x0036575C */

loc_00365B1F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00365B23
 * Original: 0x00365B23 - 0x00365B67 (68 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365B23(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365B23: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = ZX16(LO16(eax));
    eax = MEM32(esi);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00365B4Fu); RECOMP_ABI_CALL(0x0036575Cu, sub_0036575C); /* call 0x0036575C */

loc_00365B4F: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00365B62u); RECOMP_ABI_CALL(0x0036575Cu, sub_0036575C); /* call 0x0036575C */

loc_00365B62: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00365B67
 * Original: 0x00365B67 - 0x00365B93 (44 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365B67(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365B67: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax + 0x134));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00365B90; /* jbe: below or equal (unsigned <=) */

loc_00365B77: ;
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 8));
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(eax + -84));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00365B90u); RECOMP_ABI_CALL(0x00365577u, sub_00365577); /* call 0x00365577 */

loc_00365B90: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00365B93
 * Original: 0x00365B93 - 0x00365BA3 (16 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365B93(void)
{

loc_00365B93: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00365BA3
 * Original: 0x00365BA3 - 0x00365CDE (315 bytes, 102 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00365BA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365BA3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    edi = MEM32(edx + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(esi, LO16(esi) + 1);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ZX16(LO16(esi));
    edi = edi + esi * 4;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    edi = MEM32(edx + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    edi = MEM32(edx + 0x10);
    SET_LO16(esi, LO16(esi) + 1);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ZX16(LO16(esi));
    edi = edi + esi * 4;
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(ecx);
    edi = MEM32(edx + 0x20);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    edi = MEM32(edx + 0x10);
    SET_LO16(esi, LO16(esi) + 1);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ZX16(LO16(esi));
    MEM32(edi + esi * 4) = eax;
    edi = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    ebx = MEM32(edx + 0x20);
    SET_LO16(edi, MEM16(ebx + edi * 2 + -2));
    ebx = MEM32(edx + 0x10);
    esi = ZX16(MEM16(ebp + 0x18));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edi, LO16(edi) + 2);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    edi = ZX16(LO16(edi));
    MEM32(ebx + edi * 4) = esi;
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    edi = MEM32(edx + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    edi = MEM32(edx + 0x10);
    _fb = (uint32_t)(5) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 5);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = ZX16(LO16(esi));
    MEM32(edi + esi * 4) = eax;
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    edi = MEM32(edx + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    eax = (uint32_t)(int32_t)SMEM16(ecx);
    edi = MEM32(edx + 0x10);
    _fb = (uint32_t)(6) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 6);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = ZX16(LO16(esi));
    MEM32(edi + esi * 4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 6);
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    edi = MEM32(edx + 0x20);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    edi = MEM32(edx + 0x14);
    _fb = (uint32_t)(3) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 3);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = ZX16(LO16(esi));
    MEM32(edi + esi * 4) = eax;
    esi = ZX16(MEM16(ebp + 0x1C));
    ebx = MEM32(edx + 0x20);
    edi = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    SET_LO16(esi, MEM16(ebx + esi * 2 + -2));
    ebx = MEM32(edx + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 4);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = ZX16(LO16(esi));
    MEM32(ebx + esi * 4) = edi;
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    edi = MEM32(edx + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    edi = MEM32(edx + 0x14);
    _fb = (uint32_t)(7) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 7);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = ZX16(LO16(esi));
    MEM32(edi + esi * 4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 6);
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    esi = MEM32(edx + 0x20);
    SET_LO16(ecx, MEM16(esi + ecx * 2 + -2));
    edx = MEM32(edx + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 8);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    POP32(esp, edi);
    ecx = ZX16(LO16(ecx));
    POP32(esp, esi);
    MEM32(edx + ecx * 4) = eax;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00365CDE
 * Original: 0x00365CDE - 0x00365D57 (121 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365CDE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365CDE: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    edx = MEM32(eax + 8);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    edx = MEM32(edx + ecx * 4);
    ecx = MEM32(esp + 8);
    SET_LO16(ecx, MEM16(ecx + 0x16C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00365D16; /* je: equal / zero */

loc_00365D09: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00365D16; /* jne: not equal / not zero */

loc_00365D0E: ;
    ecx = edx + 2;
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00365D1C;

loc_00365D16: ;
    ecx = edx + 0x20;
    ecx = ecx & 0xFFFFFFC0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00365D1C: ;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    edi = MEM32(eax + 8);
    SET_LO16(esi, LO16(esi) + 1);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ZX16(LO16(esi));
    MEM32(edi + esi * 4) = ecx;
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edi = MEM32(eax + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 2);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = ZX16(LO16(esi));
    eax = eax + esi * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00365D57
 * Original: 0x00365D57 - 0x00365DB1 (90 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365D57(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365D57: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
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
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    esi = MEM32(eax + 4);
    edi = MEM32(eax + 0xC);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00365DB1
 * Original: 0x00365DB1 - 0x00365E0B (90 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365DB1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365DB1: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax);
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
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    esi = MEM32(eax + 0xC);
    edi = MEM32(eax + 4);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00365E0B
 * Original: 0x00365E0B - 0x00365E47 (60 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365E0B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365E0B: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edx = ZX16(LO16(ecx));
    PUSH32(esp, 8);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
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
    esi = MEM32(eax + 0xC);
    edi = MEM32(eax + 4);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00365E47
 * Original: 0x00365E47 - 0x00365F58 (273 bytes, 85 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365E47(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365E47: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    eax = ZX16(MEM16(ecx + eax * 2 + -2));
    ecx = MEM32(esi + 0x10);
    edx = eax + 2;
    edx = ZX16(LO16(edx));
    edx = (uint32_t)(int32_t)SMEM16(ecx + edx * 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(MEM16(ecx + eax * 4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(edx, LO16(edx) - MEM16(ecx + eax * 4));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(edi + 0x138));
    PUSH32(esp, 0x00365E83u); RECOMP_ABI_CALL(0x0035CB3Cu, sub_0035CB3C); /* call 0x0035CB3C */

loc_00365E83: ;
    SET_LO16(ecx, MEM16(edi + 0x16C));
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xA) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00365EA4; /* je: equal / zero */

loc_00365E97: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00365EA4; /* jne: not equal / not zero */

loc_00365E9C: ;
    edx = eax + 2;
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00365EAA;

loc_00365EA4: ;
    edx = eax + 0x20;
    edx = edx & 0xFFFFFFC0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00365EAA: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    eax = ZX16(MEM16(ecx + eax * 2 + -2));
    ecx = MEM32(esi);
    ebx = eax + 1;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ZX16(LO16(ebx));
    ebx = MEM32(ecx + ebx * 4);
    eax = ZX16(LO16(eax));
    PUSH32(esp, MEM32(esp + 0x18));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + eax * 4) = ebx;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    eax = ZX16(MEM16(ecx + eax * 2 + -2));
    ecx = MEM32(esi + 0x14);
    edx = eax + 4;
    edx = ZX16(LO16(edx));
    edx = (uint32_t)(int32_t)SMEM16(ecx + edx * 4);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(MEM16(ecx + eax * 4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(edx, LO16(edx) - MEM16(ecx + eax * 4));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(edi + 0x13C));
    PUSH32(esp, 0x00365EFFu); RECOMP_ABI_CALL(0x0035CB3Cu, sub_0035CB3C); /* call 0x0035CB3C */

loc_00365EFF: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    edx = MEM32(esi + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(3) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 3);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX16(LO16(ecx));
    ecx = edx + ecx * 4;
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0xFFFFFFC0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = edx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    edx = MEM32(esi + 0x20);
    ecx = ZX16(MEM16(edx + ecx * 2 + -2));
    esi = MEM32(esi + 4);
    edx = ecx + 3;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX16(LO16(edx));
    edx = MEM32(esi + edx * 4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xA) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + eax + 0x20;
    ecx = ZX16(LO16(ecx));
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(esi + ecx * 4) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00365F58
 * Original: 0x00365F58 - 0x00365FD2 (122 bytes, 46 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365F58(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365F58: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00365F95; /* je: equal / zero */

loc_00365F66: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edi = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edi + ecx * 2 + -2));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00365F95; /* je: equal / zero */

loc_00365F78: ;
    ecx = MEM32(eax);
    ecx = ecx + edx * 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + esi;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edi = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edi + ecx * 2 + -2));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00365F78; /* jb: below (unsigned <) */

loc_00365F95: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00365FCD; /* je: equal / zero */

loc_00365F9D: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edi = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edi + ecx * 2 + -2));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00365FCD; /* je: equal / zero */

loc_00365FAF: ;
    ecx = MEM32(eax + 4);
    ecx = ecx + edx * 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + esi;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edi = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edi + ecx * 2 + -2));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00365FAF; /* jb: below (unsigned <) */

loc_00365FCD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00365FD2
 * Original: 0x00365FD2 - 0x00366022 (80 bytes, 35 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00365FD2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00365FD2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00365FFB; /* je: equal / zero */

loc_00365FE1: ;
    eax = ZX16(MEM16(ebp + 0x14));
    ecx = ZX16(MEM16(ebp + 0x18));
    edx = ecx + eax;
    goto loc_00365FF7;

loc_00365FEE: ;
    ecx = MEM32(esi + 8);
    ecx = ecx + eax * 4;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + edi;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00365FF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00365FEE; /* jb: below (unsigned <) */

loc_00365FFB: ;
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036601C; /* je: equal / zero */

loc_00366002: ;
    eax = ZX16(MEM16(ebp + 0x14));
    ecx = ZX16(MEM16(ebp + 0x18));
    edx = ecx + eax;
    goto loc_00366018;

loc_0036600F: ;
    ecx = MEM32(esi + 0xC);
    ecx = ecx + eax * 4;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + edi;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00366018: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036600F; /* jb: below (unsigned <) */

loc_0036601C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00366022
 * Original: 0x00366022 - 0x00366176 (340 bytes, 122 insns)
 * CC: cdecl, 18 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00366022(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366022: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0036605C; /* je: equal / zero */

loc_00366036: ;
    eax = esi + 0xE0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0xA4); PUSH32(esp, 0x00366043u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036603Du); } /* indirect call */
    }

loc_00366043: ;
    edi = MEM32(ebp + 0x48);
    MEM32(edi) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0xF0;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0xA8); PUSH32(esp, 0x0036605Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00366054u); } /* indirect call */
    }

loc_0036605A: ;
    goto loc_00366080;

loc_0036605C: ;
    eax = esi + 0xC0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x9C); PUSH32(esp, 0x00366069u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00366063u); } /* indirect call */
    }

loc_00366069: ;
    edi = MEM32(ebp + 0x48);
    MEM32(edi) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0xD0;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0xA0); PUSH32(esp, 0x00366080u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036607Au); } /* indirect call */
    }

loc_00366080: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    ebx = MEM32(ebp + 0x4C);
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003660CE; /* je: equal / zero */

loc_0036608B: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366096u); RECOMP_ABI_CALL(0x0035D246u, sub_0035D246); /* call 0x0035D246 */

loc_00366096: ;
    PUSH32(esp, MEM32(ebp + 0x30));
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, MEM32(ebp + 0x2C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003660A4u); RECOMP_ABI_CALL(0x0035D246u, sub_0035D246); /* call 0x0035D246 */

loc_003660A4: ;
    MEM32(ebp + 0x10) = eax;
    eax = 0x10000;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003660B6; /* jne: not equal / not zero */

loc_003660B1: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003660CE; /* je: equal / zero */

loc_003660B6: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003660C0u); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_003660C0: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(edi) = eax;
    PUSH32(esp, MEM32(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003660CCu); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_003660CC: ;
    MEM32(ebx) = eax;

loc_003660CE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036613D; /* je: equal / zero */

loc_003660D4: ;
    ecx = MEM32(ebp + 0x44);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x16C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00366100; /* je: equal / zero */

loc_003660E4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003660F7; /* je: equal / zero */

loc_003660E9: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366100; /* je: equal / zero */

loc_003660F7: ;
    eax = MEM32(edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00366108;

loc_00366100: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00366108: ;
    MEM32(edi) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x16C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00366133; /* je: equal / zero */

loc_00366117: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036612A; /* je: equal / zero */

loc_0036611C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00366133; /* jne: not equal / not zero */

loc_0036612A: ;
    eax = MEM32(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0036613B;

loc_00366133: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0036613B: ;
    MEM32(ebx) = eax;

loc_0036613D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036616F; /* jne: not equal / not zero */

loc_00366143: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x9C));
    eax = esi + 0xC0;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366159u); RECOMP_ABI_CALL(0x00365722u, sub_00365722); /* call 0x00365722 */

loc_00366159: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0xA0));
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036616Fu); RECOMP_ABI_CALL(0x00365722u, sub_00365722); /* call 0x00365722 */

loc_0036616F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 76; return; /* ret 72 */

}

/**
 * sub_00366176
 * Original: 0x00366176 - 0x003661B7 (65 bytes, 28 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00366176(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366176: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ZX16(MEM16(ebp + 0xC));
    ecx = ZX16(MEM16(ebp + 0x14));
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(ebx + eax);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(edi + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(edi + ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(ebp + 0x18);
    MEM32(edi) = ebx;
    esi = MEM32(esi + 4);
    eax = MEM32(esi + eax);
    edx = MEM32(edx + 4);
    _fb = (uint32_t)(MEM32(edx + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edx + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = eax;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003661B7
 * Original: 0x003661B7 - 0x00366207 (80 bytes, 31 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003661B7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003661B7: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(edx, MEM16(edx + ecx * 2 + -2));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = MEM32(esi);
    SET_LO16(edx, LO16(edx) + 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(edx));
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + edi) = ebx;
    edi = MEM32(eax + 4);
    esi = MEM32(esi + 4);
    MEM32(ecx + edi) = esi;
    esi = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(edx));
    edx = MEM32(esp + 0x18);
    edi = MEM32(edx);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + esi) = edi;
    eax = MEM32(eax + 4);
    edx = MEM32(edx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax) = edx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00366207
 * Original: 0x00366207 - 0x00366255 (78 bytes, 29 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366207(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366207: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(edx, MEM16(edx + ecx * 2 + -2));
    SET_LO16(edx, LO16(edx) + 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(edx));
    PUSH32(esp, esi);
    esi = MEM32(eax);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(ecx + esi);
    esi = MEM32(esp + 0x10);
    MEM32(esi) = edi;
    edi = MEM32(eax + 4);
    ecx = MEM32(ecx + edi);
    MEM32(esi + 4) = ecx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(edx));
    edx = MEM32(eax);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(ecx + edx);
    edx = MEM32(esp + 0x14);
    MEM32(edx) = esi;
    eax = MEM32(eax + 4);
    eax = MEM32(ecx + eax);
    POP32(esp, edi);
    MEM32(edx + 4) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00366255
 * Original: 0x00366255 - 0x00366277 (34 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366255(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366255: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1C);
    MEM16(ecx) = MEM16(ecx) & 0;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ecx = MEM32(esp + 8);
    edx = MEM32(eax + 0x20);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(edx) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(eax + 0x28) = LO16(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00366277
 * Original: 0x00366277 - 0x00366360 (233 bytes, 105 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00366277(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366277: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = ZX16(MEM16(ebp + 0xC));
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = eax;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    ecx = ebx;
    esi = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    PUSH32(esp, 3);
    POP32(esp, esi);
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(edx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(edx + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(edx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(edx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(edx + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = ZX16(MEM16(ebp + 0xC));
    edi = MEM32(edx + 0x18);
    MEM32(ebp + -4) = ebx;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = ZX16(MEM16(ebp + 0xC));
    edi = MEM32(edx + 0x24);
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ZX16(MEM16(ebp + 0x10));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = MEM32(edx + 0x1C);
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(edx + 0x20);
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00366360
 * Original: 0x00366360 - 0x0036638F (47 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366360: ;
    edx = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    ecx = MEM32(edx + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    _fb = (uint32_t)(9) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + 9);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX16(LO16(eax));
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x24);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036638F
 * Original: 0x0036638F - 0x0036643D (174 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036638F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036638F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM16(esi + 0x28)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x28), 0 (16-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0036642F; /* je: equal / zero */

loc_003663A0: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    edi = MEM32(esi);
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(eax));
    eax = MEM32(esp + 0xC);
    edx = ecx;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    edi = MEM32(esi + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edi;
    edi = MEM32(esi + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = edi;
    edi = MEM32(esi + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = edi;
    edi = MEM32(esi + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x10) = edi;
    edi = MEM32(esi + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x14) = edi;
    edx = MEM32(esi + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esi + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x24) = edx;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esi + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 2;
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(esi + 0x34);
    ecx = edx + ecx * 4;
    MEM32(eax + 0x34) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    edx = MEM32(esi + 0x1C);
    ecx = edx + ecx * 2;
    MEM32(eax + 0x1C) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    edx = MEM32(esi + 0x20);
    MEM16(eax + 0x28) = MEM16(eax + 0x28) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x28)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ecx = edx + ecx * 2;
    MEM32(eax + 0x20) = ecx;
    goto loc_00366438;

loc_0036642F: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0xE);
    POP32(esp, ecx);
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

loc_00366438: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036643D
 * Original: 0x0036643D - 0x0036649A (93 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036643D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036643D: ;
    eax = MEM32(esp + 8);
    SET_LO16(edx, MEM16(eax + 0x28));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0036648E; /* je: equal / zero */

loc_0036644F: ;
    ecx = SX16(LO16(edx));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(esi + ecx * 2 + -2));
    esi = ZX16(LO16(edx));
    edx = ZX16(MEM16(edi + 0x28));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036648D; /* jae: above or equal (unsigned >=) */

loc_0036646A: ;
    PUSH32(esp, ebx);

loc_0036646B: ;
    edx = MEM32(eax + 0x1C);
    edx = edx + esi * 2;
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edx) = MEM16(edx) + LO16(ecx);
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    edx = MEM32(eax + 0x20);
    edx = edx + esi * 2;
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edx) = MEM16(edx) + LO16(ecx);
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    edx = ZX16(MEM16(edi + 0x28));
    ebx = ZX16(MEM16(eax + 0x28));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036646B; /* jb: below (unsigned <) */

loc_0036648C: ;
    POP32(esp, ebx);

loc_0036648D: ;
    POP32(esp, esi);

loc_0036648E: ;
    SET_LO16(ecx, MEM16(edi + 0x28));
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 0x28) = MEM16(eax + 0x28) + LO16(ecx);
    _fa = (uint32_t)(MEM16(eax + 0x28)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036649A
 * Original: 0x0036649A - 0x003664F9 (95 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036649A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036649A: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    SET_LO16(edx, MEM16(edx));
    ecx = MEM32(esp + 4);
    MEM16(ecx + 0x28) = LO16(edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + 2;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(ecx + 0x1C) = edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(ecx + 0x20) = edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    PUSH32(esp, esi);
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x20);
    SET_LO16(edx, MEM16(edi + edx * 2 + -2));
    MEM32(ecx) = esi;
    SET_LO16(edx, LO16(edx) + 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edx = ZX16(LO16(edx));
    esi = edx;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + esi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(eax);
    MEM32(ecx + 4) = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + esi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax);
    MEM32(ecx + 0x18) = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003664F9
 * Original: 0x003664F9 - 0x00366596 (157 bytes, 54 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003664F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003664F9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366528; /* je: equal / zero */

loc_00366502: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(eax + 0x140));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366516u); RECOMP_ABI_CALL(0x0035CB3Cu, sub_0035CB3C); /* call 0x0035CB3C */

loc_00366516: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00366592; /* je: equal / zero */

loc_0036651F: ;
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    goto loc_00366592;

loc_00366528: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366535u); RECOMP_ABI_CALL(0x0035CCA6u, sub_0035CCA6); /* call 0x0035CCA6 */

loc_00366535: ;
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    MEM32(esi) = eax;
    ecx = MEM32(edi + 0x140);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366578; /* je: equal / zero */

loc_0036654B: ;
    _fa = (uint32_t)(MEM16(edi + 0x166)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x166), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366578; /* je: equal / zero */

loc_00366555: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036655Cu); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_0036655C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00366569; /* je: equal / zero */

loc_00366562: ;
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_00366569: ;
    PUSH32(esp, MEM32(edi + 0x140));
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366576u); RECOMP_ABI_CALL(0x0035CC80u, sub_0035CC80); /* call 0x0035CC80 */

loc_00366576: ;
    goto loc_00366581;

loc_00366578: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366583; /* je: equal / zero */

loc_0036657C: ;
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00366581: ;
    MEM32(esi) = eax;

loc_00366583: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366590u); RECOMP_ABI_CALL(0x0035CDBFu, sub_0035CDBF); /* call 0x0035CDBF */

loc_00366590: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00366592: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00366596
 * Original: 0x00366596 - 0x003665ED (87 bytes, 30 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00366596(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366596: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x10));
    if (CMP_EQ(_fa, _fb)) goto loc_003665C7; /* je: equal / zero */

loc_003665A5: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 0x144));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003665B3u); RECOMP_ABI_CALL(0x0035CB3Cu, sub_0035CB3C); /* call 0x0035CB3C */

loc_003665B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003665E9; /* je: equal / zero */

loc_003665BD: ;
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = eax;
    goto loc_003665E9;

loc_003665C7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003665CCu); RECOMP_ABI_CALL(0x0035CCA6u, sub_0035CCA6); /* call 0x0035CCA6 */

loc_003665CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(ebp + 0xC);
    ecx = edx + 4;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003665DF; /* je: equal / zero */

loc_003665D8: ;
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;

loc_003665DF: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003665E9u); RECOMP_ABI_CALL(0x0035CDBFu, sub_0035CDBF); /* call 0x0035CDBF */

loc_003665E9: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003665ED
 * Original: 0x003665ED - 0x00366664 (119 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003665ED(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003665ED: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    edx = MEM32(eax);
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 2);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX16(LO16(ecx));
    ecx = MEM32(edx + ecx * 4);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    edi = MEM32(eax);
    SET_LO16(esi, LO16(esi) + 1);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ZX16(LO16(esi));
    _fb = (uint32_t)(MEM32(edi + esi * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edi + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    esi = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(esi + ecx * 2 + -2));
    esi = MEM32(eax + 4);
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 2);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX16(LO16(ecx));
    ecx = MEM32(esi + ecx * 4);
    MEM32(edx + 4) = ecx;
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edi = MEM32(eax + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    eax = MEM32(eax + 4);
    SET_LO16(esi, LO16(esi) + 1);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ZX16(LO16(esi));
    _fb = (uint32_t)(MEM32(eax + esi * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(edx + 4) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00366664
 * Original: 0x00366664 - 0x003666DF (123 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366664(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366664: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    edx = MEM32(eax);
    _fb = (uint32_t)(3) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 3);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX16(LO16(ecx));
    ecx = MEM32(edx + ecx * 4);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    edi = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 4);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = ZX16(LO16(esi));
    _fb = (uint32_t)(MEM32(edi + esi * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edi + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    esi = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(esi + ecx * 2 + -2));
    esi = MEM32(eax + 4);
    _fb = (uint32_t)(3) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 3);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX16(LO16(ecx));
    ecx = MEM32(esi + ecx * 4);
    MEM32(edx + 4) = ecx;
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edi = MEM32(eax + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 4);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = ZX16(LO16(esi));
    _fb = (uint32_t)(MEM32(eax + esi * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(edx + 4) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003666DF
 * Original: 0x003666DF - 0x00366711 (50 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003666DF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003666DF: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x138);
    eax = 0x8000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x10) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(esi) = LO16(edx);
    ecx = MEM32(ecx + 0x13C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x10);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0x10) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(eax) = LO16(ecx);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00366711
 * Original: 0x00366711 - 0x00366737 (38 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366711(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366711: ;
    eax = MEM32(esp + 4);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    ecx = MEM32(eax);
    eax = MEM32(eax + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(eax + edx * 2 + -2);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00366734; /* jl: less (signed <) */

loc_00366728: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(eax));

loc_0036672C: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036672C; /* jne: not equal / not zero */

loc_00366734: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00366737
 * Original: 0x00366737 - 0x00366788 (81 bytes, 23 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00366737(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366737: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x174)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x174), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366754; /* je: equal / zero */

loc_00366746: ;
    PUSH32(esp, MEM32(eax + 0x13C));
    PUSH32(esp, MEM32(eax + 0x138));
    goto loc_00366760;

loc_00366754: ;
    PUSH32(esp, MEM32(eax + 0x144));
    PUSH32(esp, MEM32(eax + 0x140));

loc_00366760: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax + 4));
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    PUSH32(esp, MEM32(eax));
    eax = MEM32(eax + 0x20);
    SET_LO16(eax, MEM16(eax + ecx * 2 + -2));
    _fb = (uint32_t)(9) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + 9);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366784u); RECOMP_ABI_CALL(0x0035D2C5u, sub_0035D2C5); /* call 0x0035D2C5 */

loc_00366784: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00366788
 * Original: 0x00366788 - 0x0036681A (146 bytes, 58 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00366788(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366788: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0x14);
    eax = 0x200;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003667B0; /* je: equal / zero */

loc_003667AB: ;
    ecx = ecx + ecx * 2;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_003667B0: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003667CD; /* je: equal / zero */

loc_003667B5: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003667CD; /* jne: not equal / not zero */

loc_003667BA: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003667C7; /* je: equal / zero */

loc_003667BF: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003667CD;

loc_003667C7: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFC0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003667CD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003667D5; /* jne: not equal / not zero */

loc_003667D1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366815; /* je: equal / zero */

loc_003667D5: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    SET_LO16(esi, MEM16(ebx + esi * 2 + -2));
    _fb = (uint32_t)(9) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 9);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_00366813; /* je: equal / zero */

loc_003667EC: ;
    esi = MEM32(eax);
    esi = esi + edi * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 4);
    esi = esi + edi * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + edx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    ebx = MEM32(eax + 0x20);
    SET_LO16(esi, MEM16(ebx + esi * 2 + -2));
    _fb = (uint32_t)(9) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 9);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = ZX16(LO16(esi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003667EC; /* jl: less (signed <) */

loc_00366813: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00366815: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0036681A
 * Original: 0x0036681A - 0x0036684A (48 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036681A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036681A: ;
    eax = 0x10000;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 0x10);
    PUSH32(esp, MEM32(eax + 4));
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    PUSH32(esp, MEM32(eax));
    eax = MEM32(eax + 0x20);
    SET_LO16(eax, MEM16(eax + ecx * 2 + -2));
    _fb = (uint32_t)(9) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + 9);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00366847u); RECOMP_ABI_CALL(0x0035D2C5u, sub_0035D2C5); /* call 0x0035D2C5 */

loc_00366847: ;
    esp += 12; return; /* ret 8 */

}
