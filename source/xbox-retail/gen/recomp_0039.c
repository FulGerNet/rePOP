/**
 * PoP SoT xbox-retail - Recompiled code chunk 39
 * Functions: 250 (0x0033A304 - 0x00340138)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0033A304
 * Original: 0x0033A304 - 0x0033A30A (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A304(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033A304: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x418238)); return; /* indirect tail jmp */

}

/**
 * sub_0033A30A
 * Original: 0x0033A30A - 0x0033A32B (33 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A30A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A30A: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033A319; /* jne: not equal / not zero */

loc_0033A312: ;
    eax = 0x80070057u;
    goto loc_0033A328;

loc_0033A319: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0033A328u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A325u); } /* indirect call */
    }

loc_0033A328: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033A32B
 * Original: 0x0033A32B - 0x0033A382 (87 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A32B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A32B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x1C4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033A340; /* jne: not equal / not zero */

loc_0033A33B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0033A37D;

loc_0033A340: ;
    eax = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x0033A34Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A34Au); } /* indirect call */
    }

loc_0033A34D: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C4), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033A370; /* jbe: below or equal (unsigned <=) */

loc_0033A355: ;
    PUSH32(esp, edi);
    edi = esi + 0x1A4;

loc_0033A35C: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0033A363u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A360u); } /* indirect call */
    }

loc_0033A363: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x1C4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033A35C; /* jb: below (unsigned <) */

loc_0033A36F: ;
    POP32(esp, edi);

loc_0033A370: ;
    esi = MEM32(esi + 4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0033A37Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A378u); } /* indirect call */
    }

loc_0033A37B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033A37D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033A382
 * Original: 0x0033A382 - 0x0033A3B3 (49 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A382(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A382: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x190;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033A398; /* jne: not equal / not zero */

loc_0033A391: ;
    eax = 0x80070490u;
    goto loc_0033A3B0;

loc_0033A398: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(ecx) = esi;
    eax = MEM32(eax);
    esi = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(esi + 0x18); PUSH32(esp, 0x0033A3AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A3ACu); } /* indirect call */
    }

loc_0033A3AF: ;
    POP32(esp, esi);

loc_0033A3B0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033A3B3
 * Original: 0x0033A3B3 - 0x0033A3CF (28 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0033A3B3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A3B3: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xD0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0033A3CAu); RECOMP_ABI_CALL(0x0033F593u, sub_0033F593); /* call 0x0033F593 */

loc_0033A3CA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033A3CF
 * Original: 0x0033A3CF - 0x0033A3F4 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A3CF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A3CF: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x198) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x198;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033A3E5; /* jne: not equal / not zero */

loc_0033A3DE: ;
    eax = 0x80004005u;
    goto loc_0033A3F1;

loc_0033A3E5: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x14);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0033A3F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A3EEu); } /* indirect call */
    }

loc_0033A3F1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033A3F4
 * Original: 0x0033A3F4 - 0x0033A438 (68 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A3F4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A3F4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033A404u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A401u); } /* indirect call */
    }

loc_0033A404: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(edi + eax * 4 + 0x198)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax * 4 + 0x198), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033A430; /* jne: not equal / not zero */

loc_0033A411: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0033A417u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A415u); } /* indirect call */
    }

loc_0033A417: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = MEM32(esi);
    ecx = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0033A42D; /* jl: less (signed <) */

loc_0033A421: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033A424u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A421u); } /* indirect call */
    }

loc_0033A424: ;
    MEM32(edi + eax * 4 + 0x198) = esi;
    goto loc_0033A430;

loc_0033A42D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0033A430u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A42Du); } /* indirect call */
    }

loc_0033A430: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033A438
 * Original: 0x0033A438 - 0x0033A4D5 (157 bytes, 47 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033A438(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A438: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC04) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC04;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x1CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033A45C; /* jne: not equal / not zero */

loc_0033A453: ;
    MEM32(ebp + -4) = 0x80004005u;
    goto loc_0033A4CD;

loc_0033A45C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033A4BD; /* jne: not equal / not zero */

loc_0033A461: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x1D0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 8 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0033A473; /* je: equal / zero */

loc_0033A46E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033A473u); RECOMP_ABI_CALL(0x0037E37Fu, sub_0037E37F); /* call 0x0037E37F */

loc_0033A473: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x300;
    edi = ebp + -3076;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -3072) = eax;
    eax = MEM32(ebx);
    MEM32(ebp + -3076) = eax;
    eax = MEM32(esi + 0x1D4);
    MEM32(ebp + -3068) = eax;
    eax = MEM32(esi + 0x1D8);
    MEM32(ebp + -3064) = eax;
    eax = ebp + -3076;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033A4B9u); RECOMP_ABI_CALL(0x00332093u, sub_00332093); /* call 0x00332093 */

loc_0033A4B9: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    goto loc_0033A4CD;

loc_0033A4BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033A4CD; /* jne: not equal / not zero */

loc_0033A4C2: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033A4CAu); RECOMP_ABI_CALL(0x0037DEA7u, sub_0037DEA7); /* call 0x0037DEA7 */

loc_0033A4CA: ;
    MEM32(ebp + -4) = eax;

loc_0033A4CD: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033A4D5
 * Original: 0x0033A4D5 - 0x0033A4FF (42 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A4D5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A4D5: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0033A4E8u); RECOMP_ABI_CALL(0x0033FCE3u, sub_0033FCE3); /* call 0x0033FCE3 */

loc_0033A4E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033A4F3; /* jne: not equal / not zero */

loc_0033A4EC: ;
    esi = 0x80070490u;
    goto loc_0033A4F9;

loc_0033A4F3: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;

loc_0033A4F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033A4FF
 * Original: 0x0033A4FF - 0x0033A537 (56 bytes, 22 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033A4FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A4FF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033A51Bu); RECOMP_ABI_CALL(0x0033FD4Du, sub_0033FD4D); /* call 0x0033FD4D */

loc_0033A51B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_0033A52C; /* jne: not equal / not zero */

loc_0033A522: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x80070490u;
    goto loc_0033A533;

loc_0033A52C: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033A533: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0033A537
 * Original: 0x0033A537 - 0x0033A561 (42 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A537(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A537: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0033A54Au); RECOMP_ABI_CALL(0x0033FCA7u, sub_0033FCA7); /* call 0x0033FCA7 */

loc_0033A54A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033A555; /* jne: not equal / not zero */

loc_0033A54E: ;
    esi = 0x80070490u;
    goto loc_0033A55B;

loc_0033A555: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;

loc_0033A55B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033A561
 * Original: 0x0033A561 - 0x0033A58F (46 bytes, 16 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A561(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A561: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esp + 0x10));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0033A578u); RECOMP_ABI_CALL(0x0033FAE3u, sub_0033FAE3); /* call 0x0033FAE3 */

loc_0033A578: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033A583; /* jne: not equal / not zero */

loc_0033A57C: ;
    esi = 0x80070490u;
    goto loc_0033A589;

loc_0033A583: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;

loc_0033A589: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0033A58F
 * Original: 0x0033A58F - 0x0033A5AF (32 bytes, 12 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A58F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A58F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x410340);
    esi = ecx;
    PUSH32(esp, 0x0033A5A0u); RECOMP_ABI_CALL(0x004116EAu, sub_004116EA); /* call 0x004116EA */

loc_0033A5A0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x188)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x188) (32-bit) */
    POP32(esp, esi);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0033A5AF
 * Original: 0x0033A5AF - 0x0033A5DE (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A5AF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A5AF: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033A5B7u); RECOMP_ABI_CALL(0x003513B6u, sub_003513B6); /* call 0x003513B6 */

loc_0033A5B7: ;
    ecx = esi + 0x1DC;
    edx = eax;
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3E8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033A5CD; /* jae: above or equal (unsigned >=) */

loc_0033A5CA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0033A5CD: ;
    MEM32(ecx) = eax;
    PUSH32(esp, 0x0033A5D4u); RECOMP_ABI_CALL(0x0033FFCFu, sub_0033FFCF); /* call 0x0033FFCF */

loc_0033A5D4: ;
    eax = ZX8(LO8(eax));
    eax = eax ^ 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0033A5DE
 * Original: 0x0033A5DE - 0x0033A610 (50 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A5DE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A5DE: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18C) = MEM32(ecx + 0x18C) | 8;
    _fa = (uint32_t)(MEM32(ecx + 0x18C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x1D0) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x1D4) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x1CC) = 1;
    MEM32(ecx + 0x1D8) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033A610
 * Original: 0x0033A610 - 0x0033A622 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A610: ;
    MEM32(ecx + 0x18C) = MEM32(ecx + 0x18C) | 8;
    _fa = (uint32_t)(MEM32(ecx + 0x18C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x1CC) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_0033A622
 * Original: 0x0033A622 - 0x0033A62A (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A622(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033A622: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0033FCE3(); return; /* tail jmp 0x0033FCE3 */

}

/**
 * sub_0033A62A
 * Original: 0x0033A62A - 0x0033A64D (35 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A62A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A62A: ;
    edx = ecx + 0x1C4;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033A63C; /* jb: below (unsigned <) */

loc_0033A638: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033A649;

loc_0033A63C: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + esi * 4 + 0x1A4) = eax;
    MEM32(edx) = MEM32(edx) + 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033A649: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033A64D
 * Original: 0x0033A64D - 0x0033A66A (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A64D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A64D: ;
    edx = ecx + 0x1C4;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033A65A; /* jne: not equal / not zero */

loc_0033A659: ;
    esp += 4; return; /* ret */

loc_0033A65A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx + eax * 4 + 0x1A4;
    MEM32(edx) = eax;
    eax = MEM32(ecx);
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0033A66A
 * Original: 0x0033A66A - 0x0033A681 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0033A66A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A66A: ;
    PUSH32(esp, 0x0033A66Fu); RECOMP_ABI_CALL(0x0033A64Du, sub_0033A64D); /* call 0x0033A64D */

loc_0033A66F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033A67E; /* je: equal / zero */

loc_0033A673: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0033A67Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A67Bu); } /* indirect call */
    }

loc_0033A67E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0033A681
 * Original: 0x0033A681 - 0x0033A6C4 (67 bytes, 30 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033A681(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A681: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xE801) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0xE801 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033A69E; /* je: equal / zero */

loc_0033A690: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0033A6C0;

loc_0033A69E: ;
    ecx = MEM32(ebp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax));
    MEM32(ecx) = esi;
    esi = MEM32(ebp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    ecx = MEM32(ecx);
    ecx = ecx + ecx * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx * 2;
    MEM32(edx) = eax;
    POP32(esp, esi);

loc_0033A6C0: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033A6C4
 * Original: 0x0033A6C4 - 0x0033A711 (77 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A6C4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A6C4: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x418B28);
    PUSH32(esp, 0x0033A6D4u); RECOMP_ABI_CALL(0x003481F3u, sub_003481F3); /* call 0x003481F3 */

loc_0033A6D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0033A706; /* jne: not equal / not zero */

loc_0033A6DA: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x3040) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0x3040 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033A6E8; /* jb: below (unsigned <) */

loc_0033A6E1: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0xF000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0xF000 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033A70A; /* jb: below (unsigned <) */

loc_0033A6E8: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0xFF66) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0xFF66 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033A70A; /* jae: above or equal (unsigned >=) */

loc_0033A6EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x418AB0);
    PUSH32(esp, 0x0033A6FAu); RECOMP_ABI_CALL(0x003481F3u, sub_003481F3); /* call 0x003481F3 */

loc_0033A6FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0033A70A; /* jne: not equal / not zero */

loc_0033A700: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0xA (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033A70A; /* je: equal / zero */

loc_0033A706: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033A70D;

loc_0033A70A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033A70D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033A711
 * Original: 0x0033A711 - 0x0033A765 (84 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033A711(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A711: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033A728; /* jne: not equal / not zero */

loc_0033A723: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0033A760;

loc_0033A728: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033A733u); RECOMP_ABI_CALL(0x0033FD18u, sub_0033FD18); /* call 0x0033FD18 */

loc_0033A733: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033A73E; /* jne: not equal / not zero */

loc_0033A737: ;
    eax = 0x80070057u;
    goto loc_0033A760;

loc_0033A73E: ;
    PUSH32(esp, 0x104);
    ecx = ebp + -260;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033A750u); RECOMP_ABI_CALL(0x00340031u, sub_00340031); /* call 0x00340031 */

loc_0033A750: ;
    esi = MEM32(esi + 8);
    eax = MEM32(esi);
    ecx = ebp + -260;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0033A760u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A75Du); } /* indirect call */
    }

loc_0033A760: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033A765
 * Original: 0x0033A765 - 0x0033A795 (48 bytes, 20 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A765(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A765: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    esi = ecx + 0x198;
    POP32(esp, edi);

loc_0033A770: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033A78A; /* je: equal / zero */

loc_0033A775: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0033A78Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A787u); } /* indirect call */
    }

loc_0033A78A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033A770; /* jne: not equal / not zero */

loc_0033A790: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033A795
 * Original: 0x0033A795 - 0x0033A7C2 (45 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A795(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A795: ;
    eax = MEM32(0x445860);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 4));
    ecx = eax + 0x1C;
    PUSH32(esp, 0x0033A7A8u); RECOMP_ABI_CALL(0x0033FF35u, sub_0033FF35); /* call 0x0033FF35 */

loc_0033A7A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033A7C0; /* jl: less (signed <) */

loc_0033A7AC: ;
    MEM32(esi + 8) = MEM32(esi + 8) | 4;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(0x42CBEC);
    MEM32(esi + 0xC) = eax;
    MEM32(0x42CBEC) = MEM32(0x42CBEC) + 1;
    _fa = (uint32_t)(MEM32(0x42CBEC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033A7C0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033A7C2
 * Original: 0x0033A7C2 - 0x0033A7C7 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A7C2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A7C2: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) | 3;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_0033A7C7
 * Original: 0x0033A7C7 - 0x0033A7EA (35 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A7C7(void)
{

loc_0033A7C7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(0x445860);
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(eax + 4);
    PUSH32(esp, MEM32(ecx + 4));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(ecx + 0xC));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0033A7E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A7E4u); } /* indirect call */
    }

loc_0033A7E7: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033A7EA
 * Original: 0x0033A7EA - 0x0033A831 (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A7EA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A7EA: ;
    eax = MEM32(0x445860);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0033A822; /* je: equal / zero */

loc_0033A7FC: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033A80D; /* je: equal / zero */

loc_0033A804: ;
    PUSH32(esp, ecx);
    ecx = eax + 0x1C;
    PUSH32(esp, 0x0033A80Du); RECOMP_ABI_CALL(0x0033F966u, sub_0033F966); /* call 0x0033F966 */

loc_0033A80D: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033A822; /* je: equal / zero */

loc_0033A813: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033A822; /* je: equal / zero */

loc_0033A819: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0xC));
    eax = MEM32(edi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0033A822u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A81Fu); } /* indirect call */
    }

loc_0033A822: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0xFFFFFFFAu;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = MEM32(esi + 4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033A831
 * Original: 0x0033A831 - 0x0033A887 (86 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033A831(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0033A831: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x445860);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    edi = MEM32(eax + 4);
    esi = eax;
    ecx = esi + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033A84Du); RECOMP_ABI_CALL(0x0033FCE3u, sub_0033FCE3); /* call 0x0033FCE3 */

loc_0033A84D: ;
    MEM32(ebp + 0xC) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033A863u); RECOMP_ABI_CALL(0x0033A681u, sub_0033A681); /* call 0x0033A681 */

loc_0033A863: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0033A877u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A874u); } /* indirect call */
    }

loc_0033A877: ;
    POP32(esp, edi);
    MEM32(esi + 0x170) = 1;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033A887
 * Original: 0x0033A887 - 0x0033A8B3 (44 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A887(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A887: ;
    eax = MEM32(0x445860);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0x14));
    esi = eax;
    eax = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0033A8A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A8A2u); } /* indirect call */
    }

loc_0033A8A5: ;
    MEM32(esi + 0x170) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033A8B3
 * Original: 0x0033A8B3 - 0x0033A8F7 (68 bytes, 28 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033A8B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0033A8B3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(0x445860);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    ecx = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(ebp + 8));
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0033A8D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A8CFu); } /* indirect call */
    }

loc_0033A8D2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0033A8E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A8E4u); } /* indirect call */
    }

loc_0033A8E7: ;
    MEM32(edi + 0x170) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0033A8F7
 * Original: 0x0033A8F7 - 0x0033A94B (84 bytes, 35 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033A8F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0033A8F7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(0x445860);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(ebp + 8));
    ebx = eax;
    eax = MEM32(esi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0033A916u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A913u); } /* indirect call */
    }

loc_0033A916: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0033A926u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A923u); } /* indirect call */
    }

loc_0033A926: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0033A93Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A938u); } /* indirect call */
    }

loc_0033A93B: ;
    POP32(esp, esi);
    MEM32(ebx + 0x170) = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0033A94B
 * Original: 0x0033A94B - 0x0033A97D (50 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A94B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033A94B: ;
    eax = MEM32(0x445860);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0033A965u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A962u); } /* indirect call */
    }

loc_0033A965: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033A978; /* je: equal / zero */

loc_0033A96B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0033A978u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033A975u); } /* indirect call */
    }

loc_0033A978: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033A97D
 * Original: 0x0033A97D - 0x0033AAA0 (291 bytes, 98 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033A97D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033A97D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x445860);
    MEM32(esp + 8) = eax;
    eax = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x0033A998u); RECOMP_ABI_CALL(0x0033A795u, sub_0033A795); /* call 0x0033A795 */

loc_0033A998: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0033AA97; /* jl: less (signed <) */

loc_0033A9A4: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 2);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033A9B2u); RECOMP_ABI_CALL(0x0033F2C0u, sub_0033F2C0); /* call 0x0033F2C0 */

loc_0033A9B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0033A9C6; /* jne: not equal / not zero */

loc_0033A9B9: ;
    MEM32(esp + 4) = 0x8007000Eu;
    goto loc_0033AA97;

loc_0033A9C6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40001001);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x0033A9DBu); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033A9DB: ;
    edi = esi + 0x48;
    PUSH32(esp, edi);
    PUSH32(esp, 0x40001008);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0033A9EDu); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033A9ED: ;
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40001009);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0033A9FFu); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033A9FF: ;
    ebx = esi + 0x50;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4000100A);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0033AA11u); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033AA11: ;
    ebp = esi + 0x54;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x40001003);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0033AA23u); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033AA23: ;
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40001032);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0033AA35u); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033AA35: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x28); PUSH32(esp, 0x0033AA47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033AA44u); } /* indirect call */
    }

loc_0033AA47: ;
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, 0x0033AA55u); RECOMP_ABI_CALL(0x0033A831u, sub_0033A831); /* call 0x0033A831 */

loc_0033AA55: ;
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = esi;
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, 0x0033AA61u); RECOMP_ABI_CALL(0x0033A831u, sub_0033A831); /* call 0x0033A831 */

loc_0033AA61: ;
    PUSH32(esp, MEM32(esi + 0x24));
    ecx = esi;
    PUSH32(esp, MEM32(ebp));
    PUSH32(esp, 0x0033AA6Eu); RECOMP_ABI_CALL(0x0033A831u, sub_0033A831); /* call 0x0033A831 */

loc_0033AA6E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), eax (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_0033AA88; /* jbe: below or equal (unsigned <=) */

loc_0033AA78: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + eax * 4) = 0x80000001u;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033AA78; /* jb: below (unsigned <) */

loc_0033AA88: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax + 0x170) = MEM32(eax + 0x170) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x170)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = MEM32(esi + 8) | 3;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0033AA97: ;
    eax = MEM32(esp + 4);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0033AAA0
 * Original: 0x0033AAA0 - 0x0033AAF2 (82 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033AAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033AAA0: ;
    eax = MEM32(0x445860);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi + 0x44));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033AAB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033AAB2u); } /* indirect call */
    }

loc_0033AAB5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi + 0x40));
    eax = MEM32(esi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033AABEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033AABBu); } /* indirect call */
    }

loc_0033AABE: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033AADD; /* jl: less (signed <) */

loc_0033AAC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033AAD4; /* jle: less or equal (signed <=) */

loc_0033AACA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033AADD; /* jne: not equal / not zero */

loc_0033AACF: ;
    PUSH32(esp, MEM32(edi + 0x4C));
    goto loc_0033AAD7;

loc_0033AAD4: ;
    PUSH32(esp, MEM32(edi + 0x48));

loc_0033AAD7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033AADDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033AADAu); } /* indirect call */
    }

loc_0033AADD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi + 0x50));
    eax = MEM32(esi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033AAE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033AAE3u); } /* indirect call */
    }

loc_0033AAE6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi + 0x54));
    eax = MEM32(esi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033AAEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033AAECu); } /* indirect call */
    }

loc_0033AAEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033AAF2
 * Original: 0x0033AAF2 - 0x0033AB11 (31 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033AAF2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033AAF2: ;
    eax = MEM32(0x445860);
    eax = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ecx + 0x40));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x20); PUSH32(esp, 0x0033AB0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033AB0Au); } /* indirect call */
    }

loc_0033AB0D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033AB11
 * Original: 0x0033AB11 - 0x0033AB92 (129 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033AB11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033AB11: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x445860);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033AB29u); RECOMP_ABI_CALL(0x0033FCE3u, sub_0033FCE3); /* call 0x0033FCE3 */

loc_0033AB29: ;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x80000001u (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0033AB8D; /* je: equal / zero */

loc_0033AB43: ;
    ecx = MEM32(0x445860);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033AB5Au); RECOMP_ABI_CALL(0x0033A681u, sub_0033A681); /* call 0x0033A681 */

loc_0033AB5A: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AB8D; /* je: equal / zero */

loc_0033AB60: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    PUSH32(esp, 2);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033AB74; /* jne: not equal / not zero */

loc_0033AB6C: ;
    MEM32(esi) = 1;
    goto loc_0033AB8D;

loc_0033AB74: ;
    PUSH32(esp, 3);
    POP32(esp, edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AB8B; /* je: equal / zero */

loc_0033AB7B: ;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033AB86; /* jne: not equal / not zero */

loc_0033AB82: ;
    MEM32(esi) = edx;
    goto loc_0033AB8D;

loc_0033AB86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033AB8D; /* jne: not equal / not zero */

loc_0033AB8B: ;
    MEM32(esi) = ecx;

loc_0033AB8D: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033AB92
 * Original: 0x0033AB92 - 0x0033ABB1 (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033AB92(void)
{

loc_0033AB92: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x20));
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033ABA1u); RECOMP_ABI_CALL(0x0033AB11u, sub_0033AB11); /* call 0x0033AB11 */

loc_0033ABA1: ;
    PUSH32(esp, MEM32(esi + 0x24));
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0033ABAFu); RECOMP_ABI_CALL(0x0033AB11u, sub_0033AB11); /* call 0x0033AB11 */

loc_0033ABAF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033ABB1
 * Original: 0x0033ABB1 - 0x0033ABB6 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033ABB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033ABB1: ;
    g_seh_ebp = ebp; sub_0033A30A(); return; /* tail jmp 0x0033A30A */

}

/**
 * sub_0033ABB6
 * Original: 0x0033ABB6 - 0x0033ABBB (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033ABB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033ABB6: ;
    g_seh_ebp = ebp; sub_0033A3F4(); return; /* tail jmp 0x0033A3F4 */

}

/**
 * sub_0033ABBB
 * Original: 0x0033ABBB - 0x0033ABC0 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033ABBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033ABBB: ;
    g_seh_ebp = ebp; sub_0033A32B(); return; /* tail jmp 0x0033A32B */

}

/**
 * sub_0033ABC0
 * Original: 0x0033ABC0 - 0x0033ABC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033ABC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033ABC0: ;
    g_seh_ebp = ebp; sub_0033A3B3(); return; /* tail jmp 0x0033A3B3 */

}

/**
 * sub_0033ABC5
 * Original: 0x0033ABC5 - 0x0033ABCA (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033ABC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033ABC5: ;
    g_seh_ebp = ebp; sub_0033A382(); return; /* tail jmp 0x0033A382 */

}

/**
 * sub_0033ABCA
 * Original: 0x0033ABCA - 0x0033ABCF (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033ABCA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033ABCA: ;
    g_seh_ebp = ebp; sub_0033A438(); return; /* tail jmp 0x0033A438 */

}

/**
 * sub_0033ABCF
 * Original: 0x0033ABCF - 0x0033ABD4 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033ABCF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033ABCF: ;
    g_seh_ebp = ebp; sub_0033A3CF(); return; /* tail jmp 0x0033A3CF */

}

/**
 * sub_0033ABD4
 * Original: 0x0033ABD4 - 0x0033ABF6 (34 bytes, 12 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033ABD4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0033ABD4: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033ABF3u); RECOMP_ABI_CALL(0x0033A4FFu, sub_0033A4FF); /* call 0x0033A4FF */

loc_0033ABF3: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0033ABF6
 * Original: 0x0033ABF6 - 0x0033AC14 (30 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033ABF6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0033ABF6: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033AC11u); RECOMP_ABI_CALL(0x0033A537u, sub_0033A537); /* call 0x0033A537 */

loc_0033AC11: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033AC14
 * Original: 0x0033AC14 - 0x0033AC36 (34 bytes, 12 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033AC14(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0033AC14: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033AC33u); RECOMP_ABI_CALL(0x0033A561u, sub_0033A561); /* call 0x0033A561 */

loc_0033AC33: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0033AC36
 * Original: 0x0033AC36 - 0x0033AC4B (21 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033AC36(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033AC36: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033AC48; /* jbe: below or equal (unsigned <=) */

loc_0033AC42: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033AC48u); RECOMP_ABI_CALL(0x0033F31Eu, sub_0033F31E); /* call 0x0033F31E */

loc_0033AC48: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033AC4B
 * Original: 0x0033AC4B - 0x0033AC5E (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033AC4B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033AC4B: ;
    eax = MEM32(ecx + 0x1C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033AC56; /* jne: not equal / not zero */

loc_0033AC55: ;
    esp += 4; return; /* ret */

loc_0033AC56: ;
    eax = MEM32(ecx + eax * 4 + 0x1A0);
    esp += 4; return; /* ret */

}

/**
 * sub_0033AC5E
 * Original: 0x0033AC5E - 0x0033AC81 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033AC5E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033AC5E: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx;
    ecx = eax + 0x174;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx) = edx;
    MEM32(ecx + 0x10) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_0033AC81
 * Original: 0x0033AC81 - 0x0033ACA3 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033AC81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033AC81: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x178);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AC9A; /* je: equal / zero */

loc_0033AC8E: ;
    PUSH32(esp, MEM32(esi + 0x184));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033AC9Au); RECOMP_ABI_CALL(0x0033F2D6u, sub_0033F2D6); /* call 0x0033F2D6 */

loc_0033AC9A: ;
    ecx = esi + 0x1C;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033F912(); return; /* tail jmp 0x0033F912 */

}

/**
 * sub_0033ACA3
 * Original: 0x0033ACA3 - 0x0033AD2C (137 bytes, 52 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033ACA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033ACA3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x70C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x410340);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033ACBEu); RECOMP_ABI_CALL(0x004116EAu, sub_004116EA); /* call 0x004116EA */

loc_0033ACBE: ;
    MEM32(esi + 0x188) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -1804;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033ACD4u); RECOMP_ABI_CALL(0x0037DE56u, sub_0037DE56); /* call 0x0037DE56 */

loc_0033ACD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033AD28; /* jl: less (signed <) */

loc_0033ACD8: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi + 0x174;
    MEM32(ebp + -12) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033ACE9u); RECOMP_ABI_CALL(0x0033AC36u, sub_0033AC36); /* call 0x0033AC36 */

loc_0033ACE9: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033AD26; /* jbe: below or equal (unsigned <=) */

loc_0033ACEE: ;
    eax = ebp + -1804;
    MEM32(ebp + -8) = eax;
    PUSH32(esp, edi);

loc_0033ACF8: ;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033AD02u); RECOMP_ABI_CALL(0x0033F3CAu, sub_0033F3CA); /* call 0x0033F3CA */

loc_0033AD02: ;
    esi = MEM32(ebp + -8);
    PUSH32(esp, 0x1C);
    POP32(esp, ecx);
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
    PUSH32(esp, 0x10);
    ecx = eax + 0x70;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033AD1Bu); RECOMP_ABI_CALL(0x00340017u, sub_00340017); /* call 0x00340017 */

loc_0033AD1B: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0x70;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033ACF8; /* jb: below (unsigned <) */

loc_0033AD25: ;
    POP32(esp, edi);

loc_0033AD26: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033AD28: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0033AD2C
 * Original: 0x0033AD2C - 0x0033ADD5 (169 bytes, 67 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033AD2C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033AD2C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x198;
    MEM32(ebp + 8) = 2;
    PUSH32(esp, ebx);

loc_0033AD43: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AD50; /* je: equal / zero */

loc_0033AD49: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0033AD50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033AD4Du); } /* indirect call */
    }

loc_0033AD50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033AD43; /* jne: not equal / not zero */

loc_0033AD58: ;
    edx = MEM32(ebp + 0xC);
    eax = esi + 0x18C;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    MEM32(eax) = ebx;
    eax = MEM32(esi + 0x1C4);
    MEM32(ebp + 8) = eax;

loc_0033AD70: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033AD77u); RECOMP_ABI_CALL(0x0033AC4Bu, sub_0033AC4B); /* call 0x0033AC4B */

loc_0033AD77: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033ADAA; /* je: equal / zero */

loc_0033AD7D: ;
    _fa = (uint32_t)(MEM8(edi + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 8), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033ADAA; /* je: equal / zero */

loc_0033AD83: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi + 0xD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033AD93u); RECOMP_ABI_CALL(0x0033F68Cu, sub_0033F68C); /* call 0x0033F68C */

loc_0033AD93: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033ADA4; /* je: equal / zero */

loc_0033AD99: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0033ADA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033ADA1u); } /* indirect call */
    }

loc_0033ADA4: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033AD70; /* jb: below (unsigned <) */

loc_0033ADAA: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0033ADB8; /* je: equal / zero */

loc_0033ADB2: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0033ADB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033ADB5u); } /* indirect call */
    }

loc_0033ADB8: ;
    esi = MEM32(esi + 4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0033ADC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033ADBEu); } /* indirect call */
    }

loc_0033ADC1: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_0033ADCF; /* jbe: below or equal (unsigned <=) */

loc_0033ADC9: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = MEM32(eax) | 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0033ADCF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033ADD5
 * Original: 0x0033ADD5 - 0x0033AE2C (87 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033ADD5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033ADD5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A0), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033ADE8; /* jne: not equal / not zero */

loc_0033ADE5: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0033AE18;

loc_0033ADE8: ;
    ecx = esi;
    PUSH32(esp, 0x0033ADEFu); RECOMP_ABI_CALL(0x0033A64Du, sub_0033A64D); /* call 0x0033A64D */

loc_0033ADEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033ADE8; /* jne: not equal / not zero */

loc_0033ADF3: ;
    ecx = MEM32(esi + 0x1A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0033ADFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033ADFBu); } /* indirect call */
    }

loc_0033ADFE: ;
    eax = MEM32(esi + 0x1A0);
    MEM32(esi + 0x18C) = MEM32(esi + 0x18C) | 0x10;
    _fa = (uint32_t)(MEM32(esi + 0x18C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x1A0) = MEM32(esi + 0x1A0) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1A0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x190) = eax;

loc_0033AE18: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AE25; /* je: equal / zero */

loc_0033AE1F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0033AE25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033AE22u); } /* indirect call */
    }

loc_0033AE25: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033AE2C
 * Original: 0x0033AE2C - 0x0033AE96 (106 bytes, 40 insns)
 * Category: game_network
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033AE2C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033AE2C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x198)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x198), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AE92; /* je: equal / zero */

loc_0033AE3C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033AE41u); RECOMP_ABI_CALL(0x0037DE70u, sub_0037DE70); /* call 0x0037DE70 */

loc_0033AE41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033AE4C; /* jne: not equal / not zero */

loc_0033AE45: ;
    eax = 0x80004005u;
    goto loc_0033AE92;

loc_0033AE4C: ;
    ecx = MEM32(ebp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    _fa = (uint32_t)(MEM8(ecx + eax + 8)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + eax + 8), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033AE45; /* jne: not equal / not zero */

loc_0033AE59: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x20));
    edi = MEM32(ebp + 0x14);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033AE76u); RECOMP_ABI_CALL(0x0037DEBDu, sub_0037DEBD); /* call 0x0037DEBD */

loc_0033AE76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033AE8F; /* jl: less (signed <) */

loc_0033AE7A: ;
    ecx = MEM32(0x445860);
    MEM32(ecx + 0x10) = edi;
    edx = MEM32(0x445860);
    MEM32(edx + 0x14) = esi;
    MEM32(ecx + 0x18) = ebx;

loc_0033AE8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0033AE92: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0033AE96
 * Original: 0x0033AE96 - 0x0033AED8 (66 bytes, 29 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033AE96(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033AE96: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033AEB6;

loc_0033AEA0: ;
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033AEAFu); RECOMP_ABI_CALL(0x0033A6C4u, sub_0033A6C4); /* call 0x0033A6C4 */

loc_0033AEAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033AEBC; /* jne: not equal / not zero */

loc_0033AEB3: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033AEB6: ;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033AEA0; /* jne: not equal / not zero */

loc_0033AEBC: ;
    SET_LO16(esi, MEM16(esi));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AECB; /* je: equal / zero */

loc_0033AEC4: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0xA (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AECB; /* je: equal / zero */

loc_0033AECA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033AECB: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax) = edi;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033AED8
 * Original: 0x0033AED8 - 0x0033AF2D (85 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033AED8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033AED8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edi (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0033AEF7; /* je: equal / zero */

loc_0033AEE5: ;
    PUSH32(esp, 0x0033AEEAu); RECOMP_ABI_CALL(0x0033A64Du, sub_0033A64D); /* call 0x0033A64D */

loc_0033AEEA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AEF7; /* je: equal / zero */

loc_0033AEEE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0033AEF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033AEF4u); } /* indirect call */
    }

loc_0033AEF7: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AF25; /* je: equal / zero */

loc_0033AEFF: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033AF0C; /* jne: not equal / not zero */

loc_0033AF05: ;
    edi = 0x80004005u;
    goto loc_0033AF25;

loc_0033AF0C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0033AF16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033AF13u); } /* indirect call */
    }

loc_0033AF16: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0033AF1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033AF1Au); } /* indirect call */
    }

loc_0033AF1D: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0033AF25u); RECOMP_ABI_CALL(0x0033A62Au, sub_0033A62A); /* call 0x0033A62A */

loc_0033AF25: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033AF2D
 * Original: 0x0033AF2D - 0x0033B02E (257 bytes, 93 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033AF2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033AF2D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    eax = MEM32(0x445860);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033AF52; /* je: equal / zero */

loc_0033AF49: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033B028; /* jne: not equal / not zero */

loc_0033AF52: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0033B011; /* je: equal / zero */

loc_0033AF6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x101 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B011; /* je: equal / zero */

loc_0033AF7A: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033AFA2; /* je: equal / zero */

loc_0033AF7F: ;
    ecx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x4C));
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ecx + 0x30); PUSH32(esp, 0x0033AF89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033AF86u); } /* indirect call */
    }

loc_0033AF89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033B027; /* jne: not equal / not zero */

loc_0033AF91: ;
    PUSH32(esp, 0x80000004u);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033AF9Du); RECOMP_ABI_CALL(0x0033A711u, sub_0033A711); /* call 0x0033A711 */

loc_0033AF9D: ;
    goto loc_0033B027;

loc_0033AFA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x28) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033AFEE; /* jne: not equal / not zero */

loc_0033AFA7: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x80000001u);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033AFB7u); RECOMP_ABI_CALL(0x0033A711u, sub_0033A711); /* call 0x0033A711 */

loc_0033AFB7: ;
    eax = MEM32(esi + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033AFDE; /* jl: less (signed <) */

loc_0033AFC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033AFDB; /* jle: less or equal (signed <=) */

loc_0033AFC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033AFDE; /* jne: not equal / not zero */

loc_0033AFCA: ;
    eax = MEM32(ebx);
    ecx = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x4C));
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0033AFD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033AFD6u); } /* indirect call */
    }

loc_0033AFD9: ;
    goto loc_0033AFDE;

loc_0033AFDB: ;
    MEM32(ebp + 8) = edi;

loc_0033AFDE: ;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033AFE6u); RECOMP_ABI_CALL(0x0033A66Au, sub_0033A66A); /* call 0x0033A66A */

loc_0033AFE6: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;
    goto loc_0033B017;

loc_0033AFEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033B027; /* jne: not equal / not zero */

loc_0033AFF3: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0x80000001u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B027; /* je: equal / zero */

loc_0033AFFC: ;
    PUSH32(esp, 0x80000002u);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B008u); RECOMP_ABI_CALL(0x0033A711u, sub_0033A711); /* call 0x0033A711 */

loc_0033B008: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B00Fu); RECOMP_ABI_CALL(0x0033A66Au, sub_0033A66A); /* call 0x0033A66A */

loc_0033B00F: ;
    goto loc_0033B015;

loc_0033B011: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033B027; /* jne: not equal / not zero */

loc_0033B015: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033B017: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    edx = ebp + -20;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0033B027u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033B024u); } /* indirect call */
    }

loc_0033B027: ;
    POP32(esp, edi);

loc_0033B028: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033B02E
 * Original: 0x0033B02E - 0x0033B0BB (141 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033B02E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B02E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B0B6; /* je: equal / zero */

loc_0033B03C: ;
    eax = MEM32(0x445860);
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1C8);
    PUSH32(esp, MEM32(ecx));
    ecx = eax + 0x1C;
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B05Cu); RECOMP_ABI_CALL(0x0033FCE3u, sub_0033FCE3); /* call 0x0033FCE3 */

loc_0033B05C: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B076; /* je: equal / zero */

loc_0033B062: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0xC8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B071u); RECOMP_ABI_CALL(0x00340092u, sub_00340092); /* call 0x00340092 */

loc_0033B071: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033B085;

loc_0033B076: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B082u); RECOMP_ABI_CALL(0x00340092u, sub_00340092); /* call 0x00340092 */

loc_0033B082: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033B085: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033B0B4; /* jl: less (signed <) */

loc_0033B089: ;
    ecx = MEM32(0x445860);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B0A0u); RECOMP_ABI_CALL(0x0033A681u, sub_0033A681); /* call 0x0033A681 */

loc_0033B0A0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ebx);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(edi + 0x48));
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0033B0B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033B0B1u); } /* indirect call */
    }

loc_0033B0B4: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0033B0B6: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033B0BB
 * Original: 0x0033B0BB - 0x0033B0C0 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B0BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033B0BB: ;
    g_seh_ebp = ebp; sub_0033AD2C(); return; /* tail jmp 0x0033AD2C */

}

/**
 * sub_0033B0C0
 * Original: 0x0033B0C0 - 0x0033B0E1 (33 bytes, 12 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033B0C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0033B0C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B0DDu); RECOMP_ABI_CALL(0x0033AE2Cu, sub_0033AE2C); /* call 0x0033AE2C */

loc_0033B0DD: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0033B0E1
 * Original: 0x0033B0E1 - 0x0033B0FF (30 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B0E1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0033B0E1: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033B0FCu); RECOMP_ABI_CALL(0x0033AE96u, sub_0033AE96); /* call 0x0033AE96 */

loc_0033B0FC: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033B0FF
 * Original: 0x0033B0FF - 0x0033B11F (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B0FF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B0FF: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033B107u); RECOMP_ABI_CALL(0x0033AC81u, sub_0033AC81); /* call 0x0033AC81 */

loc_0033B107: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033B119; /* je: equal / zero */

loc_0033B10E: ;
    PUSH32(esp, 0x8003);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033B119u); RECOMP_ABI_CALL(0x0033F2D6u, sub_0033F2D6); /* call 0x0033F2D6 */

loc_0033B119: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033B11F
 * Original: 0x0033B11F - 0x0033B1C9 (170 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033B11F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B11F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x170) = ebx;
    MEM32(esi + 0x1C8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0033B152; /* je: equal / zero */

loc_0033B13F: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B14Bu); RECOMP_ABI_CALL(0x0033FDE5u, sub_0033FDE5); /* call 0x0033FDE5 */

loc_0033B14B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0033B1C0; /* jl: less (signed <) */

loc_0033B152: ;
    PUSH32(esp, 0x8005);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x94);
    ecx = esi + 0x174;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B16Au); RECOMP_ABI_CALL(0x0033F397u, sub_0033F397); /* call 0x0033F397 */

loc_0033B16A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B1B9; /* je: equal / zero */

loc_0033B16E: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B175u); RECOMP_ABI_CALL(0x0033ACA3u, sub_0033ACA3); /* call 0x0033ACA3 */

loc_0033B175: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0033B1C0; /* jl: less (signed <) */

loc_0033B17C: ;
    PUSH32(esp, edi);
    ecx = esi + 0xD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B188u); RECOMP_ABI_CALL(0x0033F4C4u, sub_0033F4C4); /* call 0x0033F4C4 */

loc_0033B188: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x198;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(esi + 0x18C) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x10;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 2);
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 0x190);
    MEM32(esi + 0x18) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B1AEu); RECOMP_ABI_CALL(0x0033F2C0u, sub_0033F2C0); /* call 0x0033F2C0 */

loc_0033B1AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x1C8) = eax;
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0033B1C0; /* jne: not equal / not zero */

loc_0033B1B9: ;
    MEM32(ebp + 8) = 0x8007000Eu;

loc_0033B1C0: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033B1C9
 * Original: 0x0033B1C9 - 0x0033B253 (138 bytes, 53 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B1C9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B1C9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x198;

loc_0033B1DB: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B1EA; /* je: equal / zero */

loc_0033B1DF: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033B1DB; /* jb: below (unsigned <) */

loc_0033B1E8: ;
    goto loc_0033B1EE;

loc_0033B1EA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033B1F5; /* jne: not equal / not zero */

loc_0033B1EE: ;
    edi = 0x80070490u;
    goto loc_0033B23F;

loc_0033B1F5: ;
    ecx = esi;
    PUSH32(esp, 0x0033B1FCu); RECOMP_ABI_CALL(0x0033A64Du, sub_0033A64D); /* call 0x0033A64D */

loc_0033B1FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033B1F5; /* jne: not equal / not zero */

loc_0033B200: ;
    ecx = MEM32(esi + 0x1A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B20F; /* je: equal / zero */

loc_0033B20A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0033B20Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033B20Cu); } /* indirect call */
    }

loc_0033B20F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    MEM32(esi + 0x1A0) = edi;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0033B220u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033B21Du); } /* indirect call */
    }

loc_0033B220: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033B23F; /* jl: less (signed <) */

loc_0033B226: ;
    eax = MEM32(esi + 0x1A0);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B23F; /* je: equal / zero */

loc_0033B233: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0033B23Du); RECOMP_ABI_CALL(0x0033AED8u, sub_0033AED8); /* call 0x0033AED8 */

loc_0033B23D: ;
    edi = eax;

loc_0033B23F: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B24C; /* je: equal / zero */

loc_0033B246: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0033B24Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033B249u); } /* indirect call */
    }

loc_0033B24C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033B253
 * Original: 0x0033B253 - 0x0033B328 (213 bytes, 77 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033B253(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B253: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(0x445860);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033B2F6; /* jl: less (signed <) */

loc_0033B26E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ecx = 0x80000001u;
    if (CMP_LE(_fas, _fbs)) goto loc_0033B2DA; /* jle: less or equal (signed <=) */

loc_0033B278: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B2D7; /* je: equal / zero */

loc_0033B27D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B2DA; /* je: equal / zero */

loc_0033B282: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033B2F6; /* jne: not equal / not zero */

loc_0033B287: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B299; /* je: equal / zero */

loc_0033B28E: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x40));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B299u); RECOMP_ABI_CALL(0x0033A831u, sub_0033A831); /* call 0x0033A831 */

loc_0033B299: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi + 0x4C));
    ecx = esi;
    MEM32(ebp + 8) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B2A8u); RECOMP_ABI_CALL(0x0033A94Bu, sub_0033A94B); /* call 0x0033A94B */

loc_0033B2A8: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033B2F6; /* jbe: below or equal (unsigned <=) */

loc_0033B2AE: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(eax + edi * 4));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B2BEu); RECOMP_ABI_CALL(0x0033A4D5u, sub_0033A4D5); /* call 0x0033A4D5 */

loc_0033B2BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0x4C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B2CFu); RECOMP_ABI_CALL(0x0033A8B3u, sub_0033A8B3); /* call 0x0033A8B3 */

loc_0033B2CF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033B2AE; /* jb: below (unsigned <) */

loc_0033B2D5: ;
    goto loc_0033B2F6;

loc_0033B2D7: ;
    MEM32(esi + 0x24) = ecx;

loc_0033B2DA: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B2EC; /* je: equal / zero */

loc_0033B2E1: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x40));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B2ECu); RECOMP_ABI_CALL(0x0033A831u, sub_0033A831); /* call 0x0033A831 */

loc_0033B2EC: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B2F6u); RECOMP_ABI_CALL(0x0033B02Eu, sub_0033B02E); /* call 0x0033B02E */

loc_0033B2F6: ;
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0x50));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B303u); RECOMP_ABI_CALL(0x0033A831u, sub_0033A831); /* call 0x0033A831 */

loc_0033B303: ;
    PUSH32(esp, MEM32(esi + 0x24));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0x54));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B310u); RECOMP_ABI_CALL(0x0033A831u, sub_0033A831); /* call 0x0033A831 */

loc_0033B310: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B317u); RECOMP_ABI_CALL(0x0033AB92u, sub_0033AB92); /* call 0x0033AB92 */

loc_0033B317: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x170) = 1;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033B328
 * Original: 0x0033B328 - 0x0033B32D (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B328(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033B328: ;
    g_seh_ebp = ebp; sub_0033B1C9(); return; /* tail jmp 0x0033B1C9 */

}

/**
 * sub_0033B32D
 * Original: 0x0033B32D - 0x0033B3B4 (135 bytes, 45 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B32D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B32D: ;
    eax = MEM32(0x445860);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B34C; /* je: equal / zero */

loc_0033B336: ;
    MEM32(eax + 0x194) = MEM32(eax + 0x194) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x194)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x445860);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033B3B1;

loc_0033B34C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8003);
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0x0033B35Cu); RECOMP_ABI_CALL(0x0033F2C0u, sub_0033F2C0); /* call 0x0033F2C0 */

loc_0033B35C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B36B; /* je: equal / zero */

loc_0033B360: ;
    ecx = eax;
    PUSH32(esp, 0x0033B367u); RECOMP_ABI_CALL(0x0033AC5Eu, sub_0033AC5E); /* call 0x0033AC5E */

loc_0033B367: ;
    esi = eax;
    goto loc_0033B36D;

loc_0033B36B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033B36D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033B378; /* jne: not equal / not zero */

loc_0033B371: ;
    eax = 0x8007000Eu;
    goto loc_0033B3B0;

loc_0033B378: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0033B388u); RECOMP_ABI_CALL(0x0033B11Fu, sub_0033B11F); /* call 0x0033B11F */

loc_0033B388: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033B39B; /* jge: greater or equal (signed >=) */

loc_0033B38E: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0033B397u); RECOMP_ABI_CALL(0x0033B0FFu, sub_0033B0FF); /* call 0x0033B0FF */

loc_0033B397: ;
    eax = edi;
    goto loc_0033B3AF;

loc_0033B39B: ;
    eax = MEM32(esp + 0x14);
    MEM32(0x445860) = esi;
    MEM32(eax) = esi;
    MEM32(esi + 0x194) = MEM32(esi + 0x194) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x194)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033B3AF: ;
    POP32(esp, edi);

loc_0033B3B0: ;
    POP32(esp, esi);

loc_0033B3B1: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033B3B4
 * Original: 0x0033B3B4 - 0x0033B3C8 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B3B4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B3B4: ;
    MEM32(ecx) = 0x418B68;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B3C7; /* je: equal / zero */

loc_0033B3C1: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033B3C7u); RECOMP_ABI_CALL(0x00338931u, sub_00338931); /* call 0x00338931 */

loc_0033B3C7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033B3C8
 * Original: 0x0033B3C8 - 0x0033B415 (77 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033B3C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B3C8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x104);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B3E9u); RECOMP_ABI_CALL(0x00340017u, sub_00340017); /* call 0x00340017 */

loc_0033B3E9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x8000);
    eax = ebp + -520;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B3FEu); RECOMP_ABI_CALL(0x00351FFCu, sub_00351FFC); /* call 0x00351FFC */

loc_0033B3FE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033B40D; /* jl: less (signed <) */

loc_0033B404: ;
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B40Du); RECOMP_ABI_CALL(0x00338966u, sub_00338966); /* call 0x00338966 */

loc_0033B40D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033B415
 * Original: 0x0033B415 - 0x0033B429 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B415(void)
{

loc_0033B415: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033B426u); RECOMP_ABI_CALL(0x00338C15u, sub_00338C15); /* call 0x00338C15 */

loc_0033B426: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033B429
 * Original: 0x0033B429 - 0x0033B43E (21 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0033B429(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B429: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x0033B439u); RECOMP_ABI_CALL(0x0033898Eu, sub_0033898E); /* call 0x0033898E */

loc_0033B439: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033B43E
 * Original: 0x0033B43E - 0x0033B460 (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033B43E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0033B43E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(eax + 8);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B45Cu); RECOMP_ABI_CALL(0x00338D88u, sub_00338D88); /* call 0x00338D88 */

loc_0033B45C: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0033B460
 * Original: 0x0033B460 - 0x0033B49E (62 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033B460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B460: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B47Bu); RECOMP_ABI_CALL(0x00338C47u, sub_00338C47); /* call 0x00338C47 */

loc_0033B47B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033B496; /* jl: less (signed <) */

loc_0033B481: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B491u); RECOMP_ABI_CALL(0x0033895Cu, sub_0033895C); /* call 0x0033895C */

loc_0033B491: ;
    ecx = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;

loc_0033B496: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0033B49E
 * Original: 0x0033B49E - 0x0033B4BE (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B49E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B49E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033B4A6u); RECOMP_ABI_CALL(0x0033B3B4u, sub_0033B3B4); /* call 0x0033B3B4 */

loc_0033B4A6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033B4B8; /* je: equal / zero */

loc_0033B4AD: ;
    PUSH32(esp, 0x800E);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033B4B8u); RECOMP_ABI_CALL(0x0033F2D6u, sub_0033F2D6); /* call 0x0033F2D6 */

loc_0033B4B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033B4BE
 * Original: 0x0033B4BE - 0x0033B4D8 (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B4BE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B4BE: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    if ((_fa != 0)) goto loc_0033B4D2; /* jne: not equal / not zero */

loc_0033B4CB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0033B4D2u); RECOMP_ABI_CALL(0x0033B49Eu, sub_0033B49E); /* call 0x0033B49E */

loc_0033B4D2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033B4D8
 * Original: 0x0033B4D8 - 0x0033B52F (87 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B4D8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B4D8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x800E);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0033B4E5u); RECOMP_ABI_CALL(0x0033F2C0u, sub_0033F2C0); /* call 0x0033F2C0 */

loc_0033B4E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B4F3; /* je: equal / zero */

loc_0033B4E9: ;
    MEM32(eax) = 0x418B68;
    esi = eax;
    goto loc_0033B4F5;

loc_0033B4F3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033B4F5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033B500; /* jne: not equal / not zero */

loc_0033B4F9: ;
    eax = 0x8007000Eu;
    goto loc_0033B52B;

loc_0033B500: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 0x0033B50Cu); RECOMP_ABI_CALL(0x0033B3C8u, sub_0033B3C8); /* call 0x0033B3C8 */

loc_0033B50C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033B51F; /* jge: greater or equal (signed >=) */

loc_0033B512: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0033B51Bu); RECOMP_ABI_CALL(0x0033B49Eu, sub_0033B49E); /* call 0x0033B49E */

loc_0033B51B: ;
    eax = edi;
    goto loc_0033B52A;

loc_0033B51F: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = esi;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033B52A: ;
    POP32(esp, edi);

loc_0033B52B: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033B52F
 * Original: 0x0033B52F - 0x0033B550 (33 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B52F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B52F: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033B544; /* jne: not equal / not zero */

loc_0033B53D: ;
    PUSH32(esp, 0x0033B542u); RECOMP_ABI_CALL(0x00340535u, sub_00340535); /* call 0x00340535 */

loc_0033B542: ;
    goto loc_0033B54D;

loc_0033B544: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0033B54Du); RECOMP_ABI_CALL(0x00340BE6u, sub_00340BE6); /* call 0x00340BE6 */

loc_0033B54D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033B550
 * Original: 0x0033B550 - 0x0033B57D (45 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B550: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0033B561; /* je: equal / zero */

loc_0033B55D: ;
    esi = eax;
    goto loc_0033B564;

loc_0033B561: ;
    PUSH32(esp, 5);
    POP32(esp, esi);

loc_0033B564: ;
    edi = ZX16(MEM16(ecx + 0x22));
    eax = ZX16(MEM16(edx + 6));
    ecx = ZX16(MEM16(ecx + 0x16));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033B57D
 * Original: 0x0033B57D - 0x0033B5BC (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B57D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B57D: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x418B7C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x8006);
    ecx = esi + 0x8FC;
    PUSH32(esp, 8);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx) = eax;
    MEM32(ecx + 0x10) = 2;
    edx = MEM32(0x37B648);
    PUSH32(esp, eax);
    PUSH32(esp, 0x48);
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x0033B5B8u); RECOMP_ABI_CALL(0x0033F397u, sub_0033F397); /* call 0x0033F397 */

loc_0033B5B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033B5BC
 * Original: 0x0033B5BC - 0x0033B5E9 (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B5BC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B5BC: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x418B7C;
    if (CMP_EQ(_fa, _fb)) goto loc_0033B5D1; /* je: equal / zero */

loc_0033B5CC: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx); PUSH32(esp, 0x0033B5D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033B5CFu); } /* indirect call */
    }

loc_0033B5D1: ;
    eax = MEM32(esi + 0x900);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B5E7; /* je: equal / zero */

loc_0033B5DB: ;
    PUSH32(esp, MEM32(esi + 0x90C));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033B5E7u); RECOMP_ABI_CALL(0x0033F2D6u, sub_0033F2D6); /* call 0x0033F2D6 */

loc_0033B5E7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033B5E9
 * Original: 0x0033B5E9 - 0x0033B654 (107 bytes, 38 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033B5E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B5E9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B5FEu); RECOMP_ABI_CALL(0x0033ABF6u, sub_0033ABF6); /* call 0x0033ABF6 */

loc_0033B5FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033B607; /* jge: greater or equal (signed >=) */

loc_0033B602: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0033B64F;

loc_0033B607: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B614u); RECOMP_ABI_CALL(0x00378DA0u, sub_00378DA0); /* call 0x00378DA0 */

loc_0033B614: ;
    PUSH32(esp, MEM32(ebp + -28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B61Cu); RECOMP_ABI_CALL(0x003C4832u, sub_003C4832); /* call 0x003C4832 */

loc_0033B61C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033B63B; /* jne: not equal / not zero */

loc_0033B620: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B63B; /* je: equal / zero */

loc_0033B626: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B63B; /* je: equal / zero */

loc_0033B62C: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B63B; /* je: equal / zero */

loc_0033B632: ;
    MEM32(esi + 8) = 1;
    goto loc_0033B63F;

loc_0033B63B: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033B63F: ;
    SET_LO16(eax, MEM16(ebp + -8));
    MEM16(esi + 4) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + -4));
    MEM16(esi + 6) = LO16(eax);

loc_0033B64F: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033B654
 * Original: 0x0033B654 - 0x0033B689 (53 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B654(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B654: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x14);
    PUSH32(esp, edi);
    ecx = esi + 0x10;
    MEM32(esi + 0xC) = edi;
    PUSH32(esp, 0x0033B66Cu); RECOMP_ABI_CALL(0x0033B5E9u, sub_0033B5E9); /* call 0x0033B5E9 */

loc_0033B66C: ;
    PUSH32(esp, 0x15);
    PUSH32(esp, edi);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x0033B677u); RECOMP_ABI_CALL(0x0033B5E9u, sub_0033B5E9); /* call 0x0033B5E9 */

loc_0033B677: ;
    PUSH32(esp, 0x16);
    PUSH32(esp, edi);
    ecx = esi + 0x28;
    PUSH32(esp, 0x0033B682u); RECOMP_ABI_CALL(0x0033B5E9u, sub_0033B5E9); /* call 0x0033B5E9 */

loc_0033B682: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033B689
 * Original: 0x0033B689 - 0x0033B775 (236 bytes, 88 insns)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033B689(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B689: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0x8FC;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -4) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_0033B6C8; /* jbe: below or equal (unsigned <=) */

loc_0033B6A9: ;
    edx = ZX16(MEM16(edi + 0xC));
    esi = MEM32(edi + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    _fa = (uint32_t)(MEM32(edx + esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B6C0; /* je: equal / zero */

loc_0033B6B9: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033B6A9; /* jb: below (unsigned <) */

loc_0033B6BE: ;
    goto loc_0033B6C8;

loc_0033B6C0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0033B6D4; /* jne: not equal / not zero */

loc_0033B6C8: ;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B6D4u); RECOMP_ABI_CALL(0x0033F3CAu, sub_0033F3CA); /* call 0x0033F3CA */

loc_0033B6D4: ;
    esi = ZX16(MEM16(edi + 0xC));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 8));
    eax = MEM32(ebx + 0xC);
    _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B6F2u); RECOMP_ABI_CALL(0x0033ABD4u, sub_0033ABD4); /* call 0x0033ABD4 */

loc_0033B6F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033B76E; /* jl: less (signed <) */

loc_0033B6F6: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 3 (32-bit) */
    ecx = MEM32(ebp + -8);
    if (CMP_EQ(_fa, _fb)) goto loc_0033B732; /* je: equal / zero */

loc_0033B6FF: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 2 (32-bit) */
    SET_LO16(edi, MEM16(ecx + 4));
    if (CMP_NE(_fa, _fb)) goto loc_0033B728; /* jne: not equal / not zero */

loc_0033B709: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0033B71A; /* jne: not equal / not zero */

loc_0033B713: ;
    MEM32(ebp + -4) = 5;

loc_0033B71A: ;
    eax = ZX16(MEM16(ecx + 6));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    MEM32(ebp + -4) = eax;
    goto loc_0033B735;

loc_0033B728: ;
    SET_LO16(eax, MEM16(ecx + 6));
    MEM16(ebp + -4) = LO16(eax);
    goto loc_0033B735;

loc_0033B732: ;
    edi = MEM32(ebp + -12);

loc_0033B735: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B747u); RECOMP_ABI_CALL(0x003410D0u, sub_003410D0); /* call 0x003410D0 */

loc_0033B747: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033B750; /* jge: greater or equal (signed >=) */

loc_0033B74B: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0033B76E;

loc_0033B750: ;
    SET_LO16(ecx, MEM16(ebp + 0x14));
    edx = MEM32(ebp + 8);
    MEM16(esi + 0x34) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + 0x18));
    MEM16(esi + 0x36) = LO16(ecx);
    ecx = MEM32(ebp + 0x10);
    MEM32(esi + 0x38) = ecx;
    ecx = MEM32(ebp + 0x1C);
    MEM32(ecx) = edx;

loc_0033B76E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0033B775
 * Original: 0x0033B775 - 0x0033B7AD (56 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B775(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B775: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0x8FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8FC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033B78D; /* jb: below (unsigned <) */

loc_0033B786: ;
    eax = 0x80070057u;
    goto loc_0033B7AA;

loc_0033B78D: ;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 0xC));
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B7A4; /* je: equal / zero */

loc_0033B79D: ;
    ecx = esi;
    PUSH32(esp, 0x0033B7A4u); RECOMP_ABI_CALL(0x00340D69u, sub_00340D69); /* call 0x00340D69 */

loc_0033B7A4: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);

loc_0033B7AA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033B7AD
 * Original: 0x0033B7AD - 0x0033B7F7 (74 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B7AD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B7AD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi + 0x8FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x8FC), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033B7F0; /* jbe: below or equal (unsigned <=) */

loc_0033B7BD: ;
    PUSH32(esp, esi);

loc_0033B7BE: ;
    esi = ZX16(MEM16(edi + 0x908));
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx);
    _fb = (uint32_t)(MEM32(edi + 0x900)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edi + 0x900);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B7E6; /* je: equal / zero */

loc_0033B7D3: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033B7E6; /* jne: not equal / not zero */

loc_0033B7DC: ;
    ecx = esi;
    PUSH32(esp, 0x0033B7E3u); RECOMP_ABI_CALL(0x00340D69u, sub_00340D69); /* call 0x00340D69 */

loc_0033B7E3: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033B7E6: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x8FC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x8FC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033B7BE; /* jb: below (unsigned <) */

loc_0033B7EF: ;
    POP32(esp, esi);

loc_0033B7F0: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033B7F7
 * Original: 0x0033B7F7 - 0x0033B82F (56 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0033B7F7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B7F7: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x8FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8FC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033B80F; /* jb: below (unsigned <) */

loc_0033B808: ;
    eax = 0x80070057u;
    goto loc_0033B82C;

loc_0033B80F: ;
    ecx = ZX16(MEM16(eax + 0xC));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 0x30);
    edx = ZX16(MEM16(eax + 2));
    eax = ZX16(MEM16(eax));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033B82Au); RECOMP_ABI_CALL(0x00341777u, sub_00341777); /* call 0x00341777 */

loc_0033B82A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033B82C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033B82F
 * Original: 0x0033B82F - 0x0033B886 (87 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033B82F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B82F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x8FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8FC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033B84C; /* jb: below (unsigned <) */

loc_0033B845: ;
    esi = 0x80070057u;
    goto loc_0033B87F;

loc_0033B84C: ;
    eax = ZX16(MEM16(ecx + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033B86F; /* jne: not equal / not zero */

loc_0033B85B: ;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033B845; /* jae: above or equal (unsigned >=) */

loc_0033B863: ;
    ecx = ZX16(MEM16(eax + 0x18));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033B871;

loc_0033B86F: ;
    ecx = eax;

loc_0033B871: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B87Fu); RECOMP_ABI_CALL(0x0034179Bu, sub_0034179B); /* call 0x0034179B */

loc_0033B87F: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0033B886
 * Original: 0x0033B886 - 0x0033B90C (134 bytes, 55 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033B886(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B886: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x8FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8FC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033B89F; /* jb: below (unsigned <) */

loc_0033B898: ;
    eax = 0x80070057u;
    goto loc_0033B908;

loc_0033B89F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 0xC));
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi + 0xC;
    eax = MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033B8C7; /* jae: above or equal (unsigned >=) */

loc_0033B8B8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B8C7; /* je: equal / zero */

loc_0033B8BD: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B8C5u); RECOMP_ABI_CALL(0x0033F42Cu, sub_0033F42C); /* call 0x0033F42C */

loc_0033B8C5: ;
    goto loc_0033B8D0;

loc_0033B8C7: ;
    PUSH32(esp, 0);
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B8D0u); RECOMP_ABI_CALL(0x0033F3CAu, sub_0033F3CA); /* call 0x0033F3CA */

loc_0033B8D0: ;
    esi = MEM32(esi + 0x30);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B8E4u); RECOMP_ABI_CALL(0x0033B550u, sub_0033B550); /* call 0x0033B550 */

loc_0033B8E4: ;
    ecx = edi;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 4));
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B8F8u); RECOMP_ABI_CALL(0x003410D0u, sub_003410D0); /* call 0x003410D0 */

loc_0033B8F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033B905; /* jl: less (signed <) */

loc_0033B8FC: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B905; /* je: equal / zero */

loc_0033B903: ;
    MEM32(ecx) = ebx;

loc_0033B905: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0033B908: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0033B90C
 * Original: 0x0033B90C - 0x0033B995 (137 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033B90C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B90C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x8FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8FC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033B955; /* jae: above or equal (unsigned >=) */

loc_0033B91E: ;
    ecx = ZX16(MEM16(eax + 0xC));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0033B978; /* je: equal / zero */

loc_0033B930: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033B94D; /* je: equal / zero */

loc_0033B933: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033B947; /* je: equal / zero */

loc_0033B936: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033B940; /* je: equal / zero */

loc_0033B939: ;
    eax = 0x80004001u;
    goto loc_0033B991;

loc_0033B940: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033B945u); RECOMP_ABI_CALL(0x00340DC6u, sub_00340DC6); /* call 0x00340DC6 */

loc_0033B945: ;
    goto loc_0033B98F;

loc_0033B947: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) | 2;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0033B98F;

loc_0033B94D: ;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033B95C; /* jb: below (unsigned <) */

loc_0033B955: ;
    eax = 0x80070057u;
    goto loc_0033B991;

loc_0033B95C: ;
    eax = ZX16(MEM16(ecx + 0x18));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033B972; /* jne: not equal / not zero */

loc_0033B96C: ;
    MEM32(eax + 4) = MEM32(eax + 4) | 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0033B98F;

loc_0033B972: ;
    MEM32(eax + 4) = MEM32(eax + 4) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0033B98F;

loc_0033B978: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033B984; /* je: equal / zero */

loc_0033B97F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033B955; /* jae: above or equal (unsigned >=) */

loc_0033B984: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x24) (32-bit) */
    MEM32(ecx + 0x20) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0033B98F; /* jae: above or equal (unsigned >=) */

loc_0033B98C: ;
    MEM32(ecx + 0x24) = eax;

loc_0033B98F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033B991: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0033B995
 * Original: 0x0033B995 - 0x0033B9F4 (95 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033B995(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B995: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x8FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8FC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033B9CC; /* jae: above or equal (unsigned >=) */

loc_0033B9A8: ;
    eax = ZX16(MEM16(ecx + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0033B9E6; /* je: equal / zero */

loc_0033B9BA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033B9C4; /* je: equal / zero */

loc_0033B9BD: ;
    eax = 0x80004001u;
    goto loc_0033B9F0;

loc_0033B9C4: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033B9D3; /* jb: below (unsigned <) */

loc_0033B9CC: ;
    eax = 0x80070057u;
    goto loc_0033B9F0;

loc_0033B9D3: ;
    edx = ZX16(MEM16(eax + 0x18));
    eax = MEM32(eax + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    eax = MEM32(edx + eax + 4);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0033B9E9;

loc_0033B9E6: ;
    eax = MEM32(eax + 0x20);

loc_0033B9E9: ;
    ecx = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033B9F0: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0033B9F4
 * Original: 0x0033B9F4 - 0x0033BA7D (137 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033B9F4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033B9F4: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x8FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x8FC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033BA11; /* jb: below (unsigned <) */

loc_0033BA0A: ;
    eax = 0x80070057u;
    goto loc_0033BA79;

loc_0033BA11: ;
    ecx = ZX16(MEM16(edx + 0xC));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033BA79; /* jne: not equal / not zero */

loc_0033BA20: ;
    edx = MEM32(ecx + 0x30);
    edx = MEM32(edx + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033BA2E; /* je: equal / zero */

loc_0033BA2A: ;
    esi = edx;
    goto loc_0033BA31;

loc_0033BA2E: ;
    PUSH32(esp, 5);
    POP32(esp, esi);

loc_0033BA31: ;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x1005) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x1005;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0033BA62; /* je: equal / zero */

loc_0033BA3D: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033BA48; /* je: equal / zero */

loc_0033BA40: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0033BA62; /* je: equal / zero */

loc_0033BA45: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033BA79; /* jne: not equal / not zero */

loc_0033BA48: ;
    edx = MEM32(ecx + 0x20);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033BA79; /* jae: above or equal (unsigned >=) */

loc_0033BA51: ;
    eax = MEM32(ecx + 0x24);
    esi = eax + esi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(ecx + 0x20) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0033BA77; /* jbe: below or equal (unsigned <=) */

loc_0033BA5F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0033BA74;

loc_0033BA62: ;
    edx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033BA79; /* jbe: below or equal (unsigned <=) */

loc_0033BA69: ;
    eax = edx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x24) (32-bit) */
    MEM32(ecx + 0x20) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0033BA77; /* jae: above or equal (unsigned >=) */

loc_0033BA74: ;
    MEM32(ecx + 0x24) = eax;

loc_0033BA77: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033BA79: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033BA7D
 * Original: 0x0033BA7D - 0x0033BA93 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0033BA7D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BA7D: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033BA8E; /* je: equal / zero */

loc_0033BA89: ;
    PUSH32(esp, 0x0033BA8Eu); RECOMP_ABI_CALL(0x00340535u, sub_00340535); /* call 0x00340535 */

loc_0033BA8E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033BA93
 * Original: 0x0033BA93 - 0x0033BAB3 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BA93(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BA93: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033BA9Bu); RECOMP_ABI_CALL(0x0033B5BCu, sub_0033B5BC); /* call 0x0033B5BC */

loc_0033BA9B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033BAAD; /* je: equal / zero */

loc_0033BAA2: ;
    PUSH32(esp, 0x800C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033BAADu); RECOMP_ABI_CALL(0x0033F2D6u, sub_0033F2D6); /* call 0x0033F2D6 */

loc_0033BAAD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033BAB3
 * Original: 0x0033BAB3 - 0x0033BAD1 (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BAB3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BAB3: ;
    ecx = MEM32(esp + 4);
    eax = ecx + 0x8F8;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if ((_fa != 0)) goto loc_0033BACB; /* jne: not equal / not zero */

loc_0033BAC4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0033BACBu); RECOMP_ABI_CALL(0x0033BA93u, sub_0033BA93); /* call 0x0033BA93 */

loc_0033BACB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033BAD1
 * Original: 0x0033BAD1 - 0x0033BB12 (65 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0033BAD1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BAD1: ;
    PUSH32(esp, 0x800C);
    PUSH32(esp, 0x910);
    PUSH32(esp, 0x0033BAE0u); RECOMP_ABI_CALL(0x0033F2C0u, sub_0033F2C0); /* call 0x0033F2C0 */

loc_0033BAE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033BAED; /* je: equal / zero */

loc_0033BAE4: ;
    ecx = eax;
    PUSH32(esp, 0x0033BAEBu); RECOMP_ABI_CALL(0x0033B57Du, sub_0033B57D); /* call 0x0033B57D */

loc_0033BAEB: ;
    goto loc_0033BAEF;

loc_0033BAED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033BAEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033BAFA; /* jne: not equal / not zero */

loc_0033BAF3: ;
    eax = 0x8007000Eu;
    goto loc_0033BB0F;

loc_0033BAFA: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    MEM32(eax + 0x8F8) = MEM32(eax + 0x8F8) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x8F8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033BB0F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033BB12
 * Original: 0x0033BB12 - 0x0033BB4D (59 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BB12(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BB12: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = esi + 0x21C;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033BB2F; /* je: equal / zero */

loc_0033BB26: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0033BB2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033BB2Au); } /* indirect call */
    }

loc_0033BB2C: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033BB2F: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033BB4A; /* je: equal / zero */

loc_0033BB35: ;
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x220;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033BB4A; /* je: equal / zero */

loc_0033BB41: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0033BB47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033BB45u); } /* indirect call */
    }

loc_0033BB47: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033BB4A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033BB4D
 * Original: 0x0033BB4D - 0x0033BB84 (55 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BB4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033BB4D: ;
    PUSH32(esp, edi);
    edx = ecx;
    MEM32(edx + 0x260) = MEM32(edx + 0x260) & 0;
    _fa = (uint32_t)(MEM32(edx + 0x260)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0x264) = MEM32(edx + 0x264) & 0;
    _fa = (uint32_t)(MEM32(edx + 0x264)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x70);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0x4C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(edx + 0x21C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0033BB7F; /* je: equal / zero */

loc_0033BB73: ;
    MEM32(edx + 8) = 1;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

loc_0033BB7F: ;
    MEM32(edx + 8) = MEM32(edx + 8) & 0;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0033BB84
 * Original: 0x0033BB84 - 0x0033BBA8 (36 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BB84(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BB84: ;
    eax = MEM32(0x445860);
    MEM32(ecx + 8) = MEM32(ecx + 8) & 0;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    MEM32(ecx + 0x260) = 3;
    MEM32(ecx + 0x264) = 1;
    PUSH32(esp, 0x0033BBA7u); RECOMP_ABI_CALL(0x0033ADD5u, sub_0033ADD5); /* call 0x0033ADD5 */

loc_0033BBA7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033BBA8
 * Original: 0x0033BBA8 - 0x0033BBF8 (80 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BBA8(void)
{

loc_0033BBA8: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x220);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(0x445860);
    MEM32(esi + 0x14) = 3;
    MEM32(eax) = 0x8000000Eu;
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esi + 0x30) = 0x1512F0;
    MEM32(esi + 0x34) = 8;
    MEM32(esi + 0x20) = 0x80000074u;
    MEM32(esi + 0x24) = 0x80000073u;
    PUSH32(esp, 0x0033BBEBu); RECOMP_ABI_CALL(0x0033B253u, sub_0033B253); /* call 0x0033B253 */

loc_0033BBEB: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0033BBF5u); RECOMP_ABI_CALL(0x0033AED8u, sub_0033AED8); /* call 0x0033AED8 */

loc_0033BBF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033BBF8
 * Original: 0x0033BBF8 - 0x0033BC2A (50 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BBF8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BBF8: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C);
    edx = ecx;
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0033BC18; /* jne: not equal / not zero */

loc_0033BC07: ;
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    edi = esi + edx + 0x4C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_0033BC25;

loc_0033BC18: ;
    eax = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    edi = eax + edx + 0x4C;
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

loc_0033BC25: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033BC2A
 * Original: 0x0033BC2A - 0x0033BC6C (66 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BC2A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033BC2A: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + ecx + 0x4C);
    ebx = MEM32(eax + ecx + 0x50);
    eax = esi;
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0033BC67; /* je: equal / zero */

loc_0033BC41: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    edx = ecx + 0x4C;
    POP32(esp, ebp);

loc_0033BC49: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033BC5F; /* jne: not equal / not zero */

loc_0033BC4F: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033BC5F; /* jne: not equal / not zero */

loc_0033BC56: ;
    PUSH32(esp, 0x1C);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_0033BC5F: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x70;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033BC49; /* jne: not equal / not zero */

loc_0033BC65: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0033BC67: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033BC6C
 * Original: 0x0033BC6C - 0x0033BCA4 (56 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BC6C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BC6C: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = MEM32(eax + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x4C;

loc_0033BC7D: ;
    ebx = MEM32(edx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033BC8A; /* jne: not equal / not zero */

loc_0033BC83: ;
    ebx = MEM32(edx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033BC9B; /* je: equal / zero */

loc_0033BC8A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x70;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033BC7D; /* jb: below (unsigned <) */

loc_0033BC93: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033BC95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0033BC9B: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    eax = esi + ecx + 0x4C;
    goto loc_0033BC95;

}

/**
 * sub_0033BCA4
 * Original: 0x0033BCA4 - 0x0033BCCD (41 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BCA4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BCA4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x54;
    PUSH32(esp, esi);

loc_0033BCAA: ;
    esi = MEM32(edx + -8);
    esi = esi | MEM32(edx + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0033BCB7; /* je: equal / zero */

loc_0033BCB2: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033BCC4; /* je: equal / zero */

loc_0033BCB7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x70;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033BCAA; /* jb: below (unsigned <) */

loc_0033BCC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0033BCC4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = eax + ecx + 0x4C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033BCCD
 * Original: 0x0033BCCD - 0x0033BD05 (56 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BCCD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BCCD: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 0x54;

loc_0033BCDD: ;
    ecx = MEM32(eax + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033BCF0; /* jne: not equal / not zero */

loc_0033BCE4: ;
    ecx = MEM32(eax + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033BCF0; /* jne: not equal / not zero */

loc_0033BCEB: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033BD01; /* je: equal / zero */

loc_0033BCF0: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033BCDD; /* jb: below (unsigned <) */

loc_0033BCF9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033BCFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0033BD01: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033BCFC;

}

/**
 * sub_0033BD05
 * Original: 0x0033BD05 - 0x0033BD5D (88 bytes, 32 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033BD05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BD05: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1F4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x70);
    edx = ecx;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -500;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -500;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edx + 0x44));
    MEM32(ebp + -4) = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033BD3Cu); RECOMP_ABI_CALL(0x0037DE9Cu, sub_0037DE9C); /* call 0x0037DE9C */

loc_0033BD3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0033BD59; /* jl: less (signed <) */

loc_0033BD41: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -52;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, eax);
    eax = ebp + -500;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033BD59u); RECOMP_ABI_CALL(0x0037DE61u, sub_0037DE61); /* call 0x0037DE61 */

loc_0033BD59: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033BD5D
 * Original: 0x0033BD5D - 0x0033BF46 (489 bytes, 161 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BD5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033BD5D: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x445860);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 8) = eax;
    esi = edi + 0x10;
    PUSH32(esp, 0x0033BD73u); RECOMP_ABI_CALL(0x0033A795u, sub_0033A795); /* call 0x0033A795 */

loc_0033BD73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033BF42; /* jl: less (signed <) */

loc_0033BD7B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = edi + 0x94;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40001001);
    PUSH32(esp, 3);
    ecx = edi;
    PUSH32(esp, 0x0033BD92u); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033BD92: ;
    eax = edi + 0xA0;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x40001032);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0033BDA9u); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033BDA9: ;
    eax = edi + 0xA4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4000100B);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0033BDBDu); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033BDBD: ;
    _fa = (uint32_t)(MEM32(edi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x90), ebx (32-bit) */
    eax = edi + 0x98;
    ecx = edi;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_0033BDD5; /* jne: not equal / not zero */

loc_0033BDCE: ;
    PUSH32(esp, 0x40001002);
    goto loc_0033BDDA;

loc_0033BDD5: ;
    PUSH32(esp, 0x40001007);

loc_0033BDDA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033BDE0u); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033BDE0: ;
    ebp = edi + 0x9C;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x40001003);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0033BDF4u); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033BDF4: ;
    PUSH32(esp, 0x80000004u);
    PUSH32(esp, MEM32(edi + 0x98));
    ecx = edi;
    PUSH32(esp, 0x0033BE06u); RECOMP_ABI_CALL(0x0033A831u, sub_0033A831); /* call 0x0033A831 */

loc_0033BE06: ;
    PUSH32(esp, 0x80000003u);
    PUSH32(esp, MEM32(ebp));
    ecx = edi;
    PUSH32(esp, 0x0033BE15u); RECOMP_ABI_CALL(0x0033A831u, sub_0033A831); /* call 0x0033A831 */

loc_0033BE15: ;
    PUSH32(esp, 0x80000005u);
    PUSH32(esp, MEM32(edi + 0xA0));
    ecx = edi;
    PUSH32(esp, 0x0033BE27u); RECOMP_ABI_CALL(0x0033A831u, sub_0033A831); /* call 0x0033A831 */

loc_0033BE27: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40009020);
    PUSH32(esp, 2);
    POP32(esp, ebp);
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esi + 0x10) = edi;
    PUSH32(esp, 0x0033BE42u); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033BE42: ;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40001022);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0033BE53u); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033BE53: ;
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40001021);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0033BE64u); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033BE64: ;
    _fa = (uint32_t)(MEM32(edi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x90), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033BE75; /* jne: not equal / not zero */

loc_0033BE6C: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0033BF2D;

loc_0033BE75: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40009023);
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0x0033BE8Fu); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033BE8F: ;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40001025);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0033BEA0u); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033BEA0: ;
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40001024);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0033BEB1u); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033BEB1: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40009026);
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 4) = ebp;
    PUSH32(esp, 0x0033BECBu); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033BECB: ;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40001028);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0033BEDCu); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033BEDC: ;
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40001027);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0033BEEDu); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033BEED: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40009029);
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 4) = 3;
    PUSH32(esp, 0x0033BF0Bu); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033BF0B: ;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4000102B);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0033BF1Cu); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033BF1C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x4000102A);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0033BF2Du); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033BF2D: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax + 0x170) = ebx;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0033BF3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033BF3Bu); } /* indirect call */
    }

loc_0033BF3E: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_0033BF42: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033BF46
 * Original: 0x0033BF46 - 0x0033BFE5 (159 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033BF46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BF46: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x445860);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033BF60u); RECOMP_ABI_CALL(0x003513B6u, sub_003513B6); /* call 0x003513B6 */

loc_0033BF60: ;
    ecx = esi + 0xB0;
    edx = eax;
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033BFE1; /* jb: below (unsigned <) */

loc_0033BF72: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = eax;
    eax = esi + 0xAC;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = edi;
    MEM32(eax) = edx;
    if ((_fa == 0)) goto loc_0033BFB8; /* je: equal / zero */

loc_0033BF94: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033BFAF; /* je: equal / zero */

loc_0033BF97: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033BFA6; /* je: equal / zero */

loc_0033BF9A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033BFBF; /* jne: not equal / not zero */

loc_0033BF9D: ;
    MEM32(ebp + -16) = 0x1A;
    goto loc_0033BFBF;

loc_0033BFA6: ;
    MEM32(ebp + -16) = 0x19;
    goto loc_0033BFBF;

loc_0033BFAF: ;
    MEM32(ebp + -16) = 0x18;
    goto loc_0033BFBF;

loc_0033BFB8: ;
    MEM32(ebp + -16) = 0x17;

loc_0033BFBF: ;
    eax = MEM32(ebx);
    ecx = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x418BB4);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0xA4));
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0033BFD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033BFD4u); } /* indirect call */
    }

loc_0033BFD7: ;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x170) = edi;
    POP32(esp, edi);

loc_0033BFE1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0033BFE5
 * Original: 0x0033BFE5 - 0x0033C014 (47 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033BFE5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033BFE5: ;
    eax = MEM32(0x445860);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033C008; /* je: equal / zero */

loc_0033BFF7: ;
    PUSH32(esp, MEM32(edi + 0x18));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    PUSH32(esp, esi);
    if ((_fa != 0)) goto loc_0033C00E; /* jne: not equal / not zero */

loc_0033C000: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033C003u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C000u); } /* indirect call */
    }

loc_0033C003: ;
    PUSH32(esp, MEM32(edi + 0x1C));
    goto loc_0033C00B;

loc_0033C008: ;
    PUSH32(esp, MEM32(edi + 0x14));

loc_0033C00B: ;
    eax = MEM32(esi);
    PUSH32(esp, esi);

loc_0033C00E: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033C011u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C00Eu); } /* indirect call */
    }

loc_0033C011: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033C014
 * Original: 0x0033C014 - 0x0033C078 (100 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033C014(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0033C014: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x38));
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x445860);
    edx = MEM32(eax + 4);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    MEM32(ebp + -8) = eax;
    eax = ebp + -56;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033C035: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(eax + 8) = esi;
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x12)) >> 32) & 1);
    ebx = ebx + 0x12;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ebx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0033C035; /* jb: below (unsigned <) */

loc_0033C054: ;
    eax = MEM32(edx);
    edi = ebp + -56;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x418BB4);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ecx + 0x1C));
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0033C06Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C067u); } /* indirect call */
    }

loc_0033C06A: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    MEM32(eax + 0x170) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0033C078
 * Original: 0x0033C078 - 0x0033C09A (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C078(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C078: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x418BB8;
    PUSH32(esp, 0x0033C086u); RECOMP_ABI_CALL(0x0033A7EAu, sub_0033A7EA); /* call 0x0033A7EA */

loc_0033C086: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033C094; /* je: equal / zero */

loc_0033C08D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033C093u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_0033C093: ;
    POP32(esp, ecx);

loc_0033C094: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033C09A
 * Original: 0x0033C09A - 0x0033C0BA (32 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C09A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C09A: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    PUSH32(esp, 0x0033C0A8u); RECOMP_ABI_CALL(0x003513B6u, sub_003513B6); /* call 0x003513B6 */

loc_0033C0A8: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033C0BA
 * Original: 0x0033C0BA - 0x0033C0D2 (24 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C0BA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C0BA: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C0CC; /* je: equal / zero */

loc_0033C0C3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C0C9u); RECOMP_ABI_CALL(0x0037DE4Bu, sub_0037DE4B); /* call 0x0037DE4B */

loc_0033C0C9: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033C0CC: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033C0D2
 * Original: 0x0033C0D2 - 0x0033C0F8 (38 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C0D2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C0D2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033C0DAu); RECOMP_ABI_CALL(0x003513B6u, sub_003513B6); /* call 0x003513B6 */

loc_0033C0DA: ;
    ecx = eax;
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033C0E9; /* jae: above or equal (unsigned >=) */

loc_0033C0E4: ;
    eax = MEM32(esi + 4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0033C0E9: ;
    PUSH32(esp, MEM32(esi));
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0033C0F3u); RECOMP_ABI_CALL(0x0037DE40u, sub_0037DE40); /* call 0x0037DE40 */

loc_0033C0F3: ;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033C0F8
 * Original: 0x0033C0F8 - 0x0033C118 (32 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C0F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033C0F8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033C100u); RECOMP_ABI_CALL(0x003513B6u, sub_003513B6); /* call 0x003513B6 */

loc_0033C100: ;
    ecx = eax;
    _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0033C10E; /* ja: above (unsigned >) */

loc_0033C10A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0033C10E: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_0033C118
 * Original: 0x0033C118 - 0x0033C166 (78 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C118(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C118: ;
    eax = ecx;
    MEM32(eax + 0x38) = MEM32(eax + 0x38) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x418BD0;
    MEM32(eax + 0x10) = 0x80000001u;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = 0x80000004u;
    MEM32(eax + 0x24) = 0x80000003u;
    MEM32(eax + 0x28) = 1;
    MEM32(eax + 0x2C) = 2;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 4) = 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0033C166
 * Original: 0x0033C166 - 0x0033C186 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C166(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C166: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033C16Eu); RECOMP_ABI_CALL(0x0033C186u, sub_0033C186); /* call 0x0033C186 */

loc_0033C16E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033C180; /* je: equal / zero */

loc_0033C175: ;
    PUSH32(esp, 0x800F);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033C180u); RECOMP_ABI_CALL(0x0033F2D6u, sub_0033F2D6); /* call 0x0033F2D6 */

loc_0033C180: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033C186
 * Original: 0x0033C186 - 0x0033C1AC (38 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C186(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033C186: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x418BD0;
    if (CMP_EQ(_fa, _fb)) goto loc_0033C19E; /* je: equal / zero */

loc_0033C196: ;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C19Eu); RECOMP_ABI_CALL(0x0033F2D6u, sub_0033F2D6); /* call 0x0033F2D6 */

loc_0033C19E: ;
    MEM32(esi) = 0x418BB8;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033A7EA(); return; /* tail jmp 0x0033A7EA */

}

/**
 * sub_0033C1AC
 * Original: 0x0033C1AC - 0x0033C1CB (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0033C1AC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C1AC: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fa = (uint32_t)(MEM32(eax + ecx + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx + 0x4C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033C1C1; /* jne: not equal / not zero */

loc_0033C1BA: ;
    _fa = (uint32_t)(MEM32(eax + ecx + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx + 0x50), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C1C6; /* je: equal / zero */

loc_0033C1C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0033C1C8;

loc_0033C1C6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C1C8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033C1CB
 * Original: 0x0033C1CB - 0x0033C1ED (34 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C1CB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C1CB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0033C1D9u); RECOMP_ABI_CALL(0x0033C1ACu, sub_0033C1AC); /* call 0x0033C1AC */

loc_0033C1D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C1E6; /* je: equal / zero */

loc_0033C1DD: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    eax = esi + edi + 0x4C;
    goto loc_0033C1E8;

loc_0033C1E6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C1E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033C1ED
 * Original: 0x0033C1ED - 0x0033C215 (40 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C1ED(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C1ED: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0033C1FBu); RECOMP_ABI_CALL(0x0033C1ACu, sub_0033C1AC); /* call 0x0033C1AC */

loc_0033C1FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C20E; /* je: equal / zero */

loc_0033C1FF: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    _fa = (uint32_t)(MEM8(esi + edi + 0x54)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + edi + 0x54), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033C20E; /* jne: not equal / not zero */

loc_0033C209: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0033C210;

loc_0033C20E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C210: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033C215
 * Original: 0x0033C215 - 0x0033C233 (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C215(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C215: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x418BE8;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 4) = 0x16;
    esp += 4; return; /* ret */

}

/**
 * sub_0033C233
 * Original: 0x0033C233 - 0x0033C280 (77 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C233(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C233: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8015);
    PUSH32(esp, 0x20);
    esi = ecx;
    PUSH32(esp, 0x0033C243u); RECOMP_ABI_CALL(0x0033F2C0u, sub_0033F2C0); /* call 0x0033F2C0 */

loc_0033C243: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C250; /* je: equal / zero */

loc_0033C247: ;
    ecx = eax;
    PUSH32(esp, 0x0033C24Eu); RECOMP_ABI_CALL(0x0033C215u, sub_0033C215); /* call 0x0033C215 */

loc_0033C24E: ;
    goto loc_0033C252;

loc_0033C250: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C252: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x224) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0033C263; /* jne: not equal / not zero */

loc_0033C25C: ;
    edi = 0x8007000Eu;
    goto loc_0033C27B;

loc_0033C263: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033C26Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C267u); } /* indirect call */
    }

loc_0033C26A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033C27B; /* jl: less (signed <) */

loc_0033C270: ;
    eax = MEM32(esi);
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0033C27Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C278u); } /* indirect call */
    }

loc_0033C27B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033C280
 * Original: 0x0033C280 - 0x0033C2CC (76 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C280: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0033C289u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C286u); } /* indirect call */
    }

loc_0033C289: ;
    edi = esi + 0x220;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C29E; /* je: equal / zero */

loc_0033C295: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0033C29Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C299u); } /* indirect call */
    }

loc_0033C29B: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033C29E: ;
    edi = esi + 0x224;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C2B3; /* je: equal / zero */

loc_0033C2AA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0033C2B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C2AEu); } /* indirect call */
    }

loc_0033C2B0: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033C2B3: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + 0x20C;
    PUSH32(esp, 0x0033C2C2u); RECOMP_ABI_CALL(0x0033C0BAu, sub_0033C0BA); /* call 0x0033C0BA */

loc_0033C2C2: ;
    MEM32(esi + 0x230) = MEM32(esi + 0x230) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x230)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033C2CC
 * Original: 0x0033C2CC - 0x0033C34E (130 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C2CC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C2CC: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x220)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x220), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C2DC; /* je: equal / zero */

loc_0033C2D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0033C2DC: ;
    PUSH32(esp, 0x800F);
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x0033C2E8u); RECOMP_ABI_CALL(0x0033F2C0u, sub_0033F2C0); /* call 0x0033F2C0 */

loc_0033C2E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C2F5; /* je: equal / zero */

loc_0033C2EC: ;
    ecx = eax;
    PUSH32(esp, 0x0033C2F3u); RECOMP_ABI_CALL(0x0033C118u, sub_0033C118); /* call 0x0033C118 */

loc_0033C2F3: ;
    goto loc_0033C2F7;

loc_0033C2F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C2F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x220) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0033C308; /* jne: not equal / not zero */

loc_0033C301: ;
    eax = 0x8007000Eu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0033C308: ;
    MEM32(eax + 0x1C) = 1;
    ecx = MEM32(esi + 0x220);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0033C31Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C318u); } /* indirect call */
    }

loc_0033C31B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033C33C; /* jge: greater or equal (signed >=) */

loc_0033C321: ;
    ecx = MEM32(esi + 0x220);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C331; /* je: equal / zero */

loc_0033C32B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0033C331u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C32Fu); } /* indirect call */
    }

loc_0033C331: ;
    MEM32(esi + 0x220) = MEM32(esi + 0x220) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x220)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edi;
    goto loc_0033C34B;

loc_0033C33C: ;
    eax = MEM32(esi + 0x220);
    MEM32(eax + 0x3C) = 0x445868;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C34B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033C34E
 * Original: 0x0033C34E - 0x0033C39D (79 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C34E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033C34E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x445860);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = edi + 0x20C;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033C36A; /* jne: not equal / not zero */

loc_0033C365: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0033C399;

loc_0033C36A: ;
    PUSH32(esp, esi);
    esi = ebx + 0x1A0;
    PUSH32(esp, MEM32(esi));
    ecx = ebx;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0033C37Eu); RECOMP_ABI_CALL(0x0033A765u, sub_0033A765); /* call 0x0033A765 */

loc_0033C37E: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0033C389; /* jne: not equal / not zero */

loc_0033C383: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033C389u); RECOMP_ABI_CALL(0x0033ADD5u, sub_0033ADD5); /* call 0x0033ADD5 */

loc_0033C389: ;
    ecx = ebp;
    PUSH32(esp, 0x0033C390u); RECOMP_ABI_CALL(0x0033C0BAu, sub_0033C0BA); /* call 0x0033C0BA */

loc_0033C390: ;
    MEM32(edi + 0x230) = MEM32(edi + 0x230) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edi + 0x230)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C399: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033C39D
 * Original: 0x0033C39D - 0x0033C52F (402 bytes, 103 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033C39D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C39D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(0x445860);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151200u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80151200u (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x220);
    PUSH32(esp, 2);
    MEM32(ebp + -4) = eax;
    POP32(esp, eax);
    MEM32(edi + 0x260) = eax;
    MEM32(edi + 8) = eax;
    MEM32(edi + 0x264) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0033C3EE; /* je: equal / zero */

loc_0033C3D1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151006u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80151006u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C3EE; /* je: equal / zero */

loc_0033C3D9: ;
    ecx = edi + 0x20C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C3E4u); RECOMP_ABI_CALL(0x0033C0BAu, sub_0033C0BA); /* call 0x0033C0BA */

loc_0033C3E4: ;
    MEM32(edi + 0x230) = MEM32(edi + 0x230) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edi + 0x230)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 2);
    POP32(esp, eax);

loc_0033C3EE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi + 0x220)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x220), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C520; /* je: equal / zero */

loc_0033C3FC: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C520; /* je: equal / zero */

loc_0033C406: ;
    ecx = 0x80151004u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x20) = 0x80000004u;
    MEM32(esi + 0x24) = 0x80000003u;
    if (CMP_G(_fas, _fbs)) goto loc_0033C487; /* jg: greater (signed >) */

loc_0033C420: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0033C476; /* je: equal / zero */

loc_0033C422: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80151000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C464; /* je: equal / zero */

loc_0033C42A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80151001u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C49F; /* je: equal / zero */

loc_0033C432: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151002u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80151002u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C453; /* je: equal / zero */

loc_0033C43A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151003u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80151003u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033C49F; /* jne: not equal / not zero */

loc_0033C442: ;
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esi + 0x18);
    MEM32(eax) = 0x8000000Du;
    goto loc_0033C50B;

loc_0033C453: ;
    eax = MEM32(esi + 0x18);
    MEM32(esi + 0x14) = edx;
    MEM32(eax) = 0x8000000Fu;
    goto loc_0033C50B;

loc_0033C464: ;
    eax = MEM32(esi + 0x18);
    MEM32(esi + 0x14) = 3;
    MEM32(eax) = 0x8000000Au;
    goto loc_0033C4AF;

loc_0033C476: ;
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esi + 0x18);
    MEM32(eax) = 0x80000070u;
    goto loc_0033C50B;

loc_0033C487: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151005u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80151005u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C4FF; /* je: equal / zero */

loc_0033C48F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151006u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80151006u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C4DF; /* je: equal / zero */

loc_0033C497: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151200u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80151200u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C4BF; /* je: equal / zero */

loc_0033C49F: ;
    eax = MEM32(esi + 0x18);
    MEM32(esi + 0x14) = 3;
    MEM32(eax) = 0x8000000Cu;

loc_0033C4AF: ;
    MEM32(esi + 0x34) = 6;
    MEM32(esi + 0x20) = 0x80000071u;
    goto loc_0033C50B;

loc_0033C4BF: ;
    eax = MEM32(esi + 0x18);
    MEM32(esi + 0x14) = 3;
    MEM32(eax) = 0x8000000Bu;
    MEM32(esi + 0x34) = 8;
    MEM32(esi + 0x20) = 0x80000072u;
    goto loc_0033C50B;

loc_0033C4DF: ;
    eax = MEM32(esi + 0x18);
    MEM32(esi + 0x14) = 3;
    MEM32(eax) = 0x80000010u;
    MEM32(esi + 0x34) = 8;
    MEM32(esi + 0x20) = 0x80000075u;
    goto loc_0033C50B;

loc_0033C4FF: ;
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esi + 0x18);
    MEM32(eax) = 0x80000077u;

loc_0033C50B: ;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C513u); RECOMP_ABI_CALL(0x0033B253u, sub_0033B253); /* call 0x0033B253 */

loc_0033C513: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C51Eu); RECOMP_ABI_CALL(0x0033AED8u, sub_0033AED8); /* call 0x0033AED8 */

loc_0033C51E: ;
    goto loc_0033C528;

loc_0033C520: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C528u); RECOMP_ABI_CALL(0x0033ADD5u, sub_0033ADD5); /* call 0x0033ADD5 */

loc_0033C528: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033C52F
 * Original: 0x0033C52F - 0x0033C588 (89 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C52F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C52F: ;
    ecx = MEM32(ecx + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x445860);
    if (CMP_NE(_fa, _fb)) goto loc_0033C53F; /* jne: not equal / not zero */

loc_0033C53B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033C577;

loc_0033C53F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x174);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033C572; /* jbe: below or equal (unsigned <=) */

loc_0033C54E: ;
    edx = MEM32(ecx + 0x58);
    ecx = MEM32(ecx + 0x5C);

loc_0033C554: ;
    esi = ZX16(MEM16(eax + 0x180));
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    _fb = (uint32_t)(MEM32(eax + 0x178)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax + 0x178);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033C56D; /* jne: not equal / not zero */

loc_0033C568: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C57A; /* je: equal / zero */

loc_0033C56D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033C554; /* jb: below (unsigned <) */

loc_0033C572: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C574: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0033C577: ;
    esp += 8; return; /* ret 4 */

loc_0033C57A: ;
    PUSH32(esp, 0x1C);
    POP32(esp, ecx);
    edi = MEM32(esp + 0x10);
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
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0033C574;

}

/**
 * sub_0033C588
 * Original: 0x0033C588 - 0x0033C623 (155 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033C588(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C588: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x445860);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -144;
    edi = ecx;
    esi = MEM32(edi + 0x220);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C5AEu); RECOMP_ABI_CALL(0x0033C52Fu, sub_0033C52F); /* call 0x0033C52F */

loc_0033C5AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C61C; /* je: equal / zero */

loc_0033C5B2: ;
    eax = ebp + -144;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C5C0u); RECOMP_ABI_CALL(0x0033BC6Cu, sub_0033BC6C); /* call 0x0033BC6C */

loc_0033C5C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C5C9; /* je: equal / zero */

loc_0033C5C4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0033C61E;

loc_0033C5C9: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0033C5D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C5CDu); } /* indirect call */
    }

loc_0033C5D0: ;
    eax = MEM32(esi + 0x18);
    MEM32(esi + 0x14) = 2;
    MEM32(eax) = 0x8000007Au;
    PUSH32(esp, 0x10);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -132;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x20) = 0x80000004u;
    MEM32(esi + 0x24) = 0x80000001u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C608u); RECOMP_ABI_CALL(0x00340017u, sub_00340017); /* call 0x00340017 */

loc_0033C608: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C613u); RECOMP_ABI_CALL(0x0033B253u, sub_0033B253); /* call 0x0033B253 */

loc_0033C613: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C61Cu); RECOMP_ABI_CALL(0x0033AED8u, sub_0033AED8); /* call 0x0033AED8 */

loc_0033C61C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C61E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0033C623
 * Original: 0x0033C623 - 0x0033C6A1 (126 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033C623(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C623: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x220);
    PUSH32(esp, edi);
    edi = MEM32(0x445860);
    eax = ebp + -144;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C646u); RECOMP_ABI_CALL(0x0033C52Fu, sub_0033C52F); /* call 0x0033C52F */

loc_0033C646: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033C651; /* jne: not equal / not zero */

loc_0033C64A: ;
    eax = 0x80070490u;
    goto loc_0033C69D;

loc_0033C651: ;
    eax = MEM32(esi + 0x18);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x80000079u;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x34) = MEM32(esi + 0x34) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x10);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -132;
    PUSH32(esp, eax);
    MEM32(esi + 0x20) = 0x80000004u;
    MEM32(esi + 0x24) = 0x80000003u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C686u); RECOMP_ABI_CALL(0x00340017u, sub_00340017); /* call 0x00340017 */

loc_0033C686: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C691u); RECOMP_ABI_CALL(0x0033B253u, sub_0033B253); /* call 0x0033B253 */

loc_0033C691: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C69Bu); RECOMP_ABI_CALL(0x0033AED8u, sub_0033AED8); /* call 0x0033AED8 */

loc_0033C69B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C69D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0033C6A1
 * Original: 0x0033C6A1 - 0x0033C715 (116 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C6A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033C6A1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, 0x0033C6ACu); RECOMP_ABI_CALL(0x0033BCA4u, sub_0033BCA4); /* call 0x0033BCA4 */

loc_0033C6AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0033C6BB; /* jne: not equal / not zero */

loc_0033C6B4: ;
    eax = 0x80004005u;
    goto loc_0033C710;

loc_0033C6BB: ;
    MEM32(esp + 4) = MEM32(esp + 4) & 0;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 1;
    ebx = ebp + 0x54;

loc_0033C6CE: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = ebp;
    PUSH32(esp, 0x0033C6D9u); RECOMP_ABI_CALL(0x0033C1ACu, sub_0033C1AC); /* call 0x0033C1AC */

loc_0033C6D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C6FD; /* je: equal / zero */

loc_0033C6DD: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033C6FD; /* je: equal / zero */

loc_0033C6E2: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 0x1C);
    edi = ebx + -8;
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
    eax = MEM32(ebx);
    eax = eax ^ MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx) = MEM32(ebx) ^ eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033C6FD: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x70;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033C6CE; /* jb: below (unsigned <) */

loc_0033C70B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_0033C710: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0033C715
 * Original: 0x0033C715 - 0x0033C804 (239 bytes, 91 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033C715(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C715: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x445860);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x20C;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -12) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0033C74D; /* je: equal / zero */

loc_0033C738: ;
    PUSH32(esp, MEM32(ecx + 0x1A0));
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C746u); RECOMP_ABI_CALL(0x0033A765u, sub_0033A765); /* call 0x0033A765 */

loc_0033C746: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C74Du); RECOMP_ABI_CALL(0x0033C0BAu, sub_0033C0BA); /* call 0x0033C0BA */

loc_0033C74D: ;
    MEM32(ebp + -8) = ebx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x18;

loc_0033C755: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C765; /* je: equal / zero */

loc_0033C759: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033C755; /* jb: below (unsigned <) */

loc_0033C765: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033C77A; /* jne: not equal / not zero */

loc_0033C76A: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C77A; /* je: equal / zero */

loc_0033C770: ;
    edi = 0x80070057u;
    goto loc_0033C7FD;

loc_0033C77A: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esi + 8) = 3;
    if (CMP_NE(_fa, _fb)) goto loc_0033C79C; /* jne: not equal / not zero */

loc_0033C789: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -8));
    eax = esi + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C79Au); RECOMP_ABI_CALL(0x0037DE86u, sub_0037DE86); /* call 0x0037DE86 */

loc_0033C79A: ;
    goto loc_0033C7D7;

loc_0033C79C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0033C7AE; /* jne: not equal / not zero */

loc_0033C7A3: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C7ACu); RECOMP_ABI_CALL(0x0033BD05u, sub_0033BD05); /* call 0x0033BD05 */

loc_0033C7AC: ;
    goto loc_0033C7D7;

loc_0033C7AE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C7B3u); RECOMP_ABI_CALL(0x0033C6A1u, sub_0033C6A1); /* call 0x0033C6A1 */

loc_0033C7B3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033C7C2; /* jge: greater or equal (signed >=) */

loc_0033C7B9: ;
    MEM32(esi + 8) = 2;
    goto loc_0033C7FD;

loc_0033C7C2: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -8));
    eax = esi + 0x18;
    PUSH32(esp, eax);
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C7D7u); RECOMP_ABI_CALL(0x0037DE61u, sub_0037DE61); /* call 0x0037DE61 */

loc_0033C7D7: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033C7EA; /* jge: greater or equal (signed >=) */

loc_0033C7DD: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C7E8u); RECOMP_ABI_CALL(0x0033C39Du, sub_0033C39D); /* call 0x0033C39D */

loc_0033C7E8: ;
    goto loc_0033C7FD;

loc_0033C7EA: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C7FB; /* je: equal / zero */

loc_0033C7EF: ;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033C7FBu); RECOMP_ABI_CALL(0x0033C09Au, sub_0033C09A); /* call 0x0033C09A */

loc_0033C7FB: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033C7FD: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0033C804
 * Original: 0x0033C804 - 0x0033C896 (146 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C804(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C804: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x234);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x258)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x258), ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0033C871; /* je: equal / zero */

loc_0033C819: ;
    _fa = (uint32_t)(MEM32(esi + 0x25C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x25C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033C871; /* jne: not equal / not zero */

loc_0033C821: ;
    ecx = MEM32(esi + 0x224);
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033C892; /* jne: not equal / not zero */

loc_0033C82C: ;
    edi = esi + eax * 4 + 0x238;
    edx = MEM32(edi);
    eax = 0x20000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033C85C; /* je: equal / zero */

loc_0033C83E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C844u); RECOMP_ABI_CALL(0x0033E108u, sub_0033E108); /* call 0x0033E108 */

loc_0033C844: ;
    MEM8(edi + 2) = MEM8(edi + 2) & 0xFD;
    _fa = (uint32_t)(MEM8(edi + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0033C848: ;
    ecx = MEM32(0x445860);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x224));
    PUSH32(esp, 0x0033C85Au); RECOMP_ABI_CALL(0x0033AED8u, sub_0033AED8); /* call 0x0033AED8 */

loc_0033C85A: ;
    goto loc_0033C892;

loc_0033C85C: ;
    eax = 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033C892; /* je: equal / zero */

loc_0033C865: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033C86Bu); RECOMP_ABI_CALL(0x0033E108u, sub_0033E108); /* call 0x0033E108 */

loc_0033C86B: ;
    MEM8(edi + 2) = MEM8(edi + 2) & 0xFE;
    _fa = (uint32_t)(MEM8(edi + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_0033C848;

loc_0033C871: ;
    _fa = (uint32_t)(MEM8(esi + eax * 4 + 0x23A)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + eax * 4 + 0x23A), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033C892; /* je: equal / zero */

loc_0033C87B: ;
    edx = MEM32(0x445860);
    ecx = eax + 0x1C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0x18C) = MEM32(edx + 0x18C) | eax;
    _fa = (uint32_t)(MEM32(edx + 0x18C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0033C892: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033C896
 * Original: 0x0033C896 - 0x0033C8E1 (75 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C896(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C896: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = MEM32(eax + 4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x90) = ecx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0x418C00;
    if ((_fa == 0)) goto loc_0033C8D7; /* je: equal / zero */

loc_0033C8B3: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033C8CE; /* je: equal / zero */

loc_0033C8B6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033C8C5; /* je: equal / zero */

loc_0033C8B9: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033C8DE; /* jne: not equal / not zero */

loc_0033C8BC: ;
    MEM32(eax + 4) = 0x14;
    goto loc_0033C8DE;

loc_0033C8C5: ;
    MEM32(eax + 4) = 0x13;
    goto loc_0033C8DE;

loc_0033C8CE: ;
    MEM32(eax + 4) = 0x12;
    goto loc_0033C8DE;

loc_0033C8D7: ;
    MEM32(eax + 4) = 0x11;

loc_0033C8DE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033C8E1
 * Original: 0x0033C8E1 - 0x0033C96B (138 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033C8E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033C8E1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x445860);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(eax + 0x174)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x174), 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    ebx = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_0033C965; /* jbe: below or equal (unsigned <=) */

loc_0033C900: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, esi);

loc_0033C90F: ;
    esi = ZX16(MEM16(eax + 0x180));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + -4));
    _fb = (uint32_t)(MEM32(eax + 0x178)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax + 0x178);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -12) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033C92F; /* jne: not equal / not zero */

loc_0033C927: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033C93F; /* je: equal / zero */

loc_0033C92F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x174)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x174) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033C90F; /* jb: below (unsigned <) */

loc_0033C93D: ;
    goto loc_0033C964;

loc_0033C93F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(edi);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebx + 0x14));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0033C950u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C94Du); } /* indirect call */
    }

loc_0033C950: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebx + 0x14));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0033C964u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C961u); } /* indirect call */
    }

loc_0033C964: ;
    POP32(esp, esi);

loc_0033C965: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033C96B
 * Original: 0x0033C96B - 0x0033C9C7 (92 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C96B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033C96B: ;
    eax = MEM32(0x445860);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = eax;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x90), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033C9C1; /* jbe: below or equal (unsigned <=) */

loc_0033C986: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x14));
    ebx = MEM32(ebp + 0x174);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(edi + 0x14));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0033C99Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C99Au); } /* indirect call */
    }

loc_0033C99D: ;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000009u);
    ecx = ebp;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x0033C9B3u); RECOMP_ABI_CALL(0x0033A622u, sub_0033A622); /* call 0x0033A622 */

loc_0033C9B3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(edi + 0x14));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0033C9C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033C9BDu); } /* indirect call */
    }

loc_0033C9C0: ;
    POP32(esp, ebx);

loc_0033C9C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033C9C7
 * Original: 0x0033C9C7 - 0x0033CA50 (137 bytes, 56 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033C9C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033C9C7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi + 0xC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    ecx = 0x445868;
    MEM32(esi + 0xC) = edi;
    PUSH32(esp, 0x0033C9E3u); RECOMP_ABI_CALL(0x0033C1EDu, sub_0033C1ED); /* call 0x0033C1ED */

loc_0033C9E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CA4C; /* je: equal / zero */

loc_0033C9E7: ;
    PUSH32(esp, ebx);
    ebx = 0x10000;
    _fa = (uint32_t)(MEM32(esi + edi * 4 + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + edi * 4 + 0x20), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033CA14; /* jne: not equal / not zero */

loc_0033C9F3: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033C9FBu); RECOMP_ABI_CALL(0x0037DEE1u, sub_0037DEE1); /* call 0x0037DEE1 */

loc_0033C9FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CA14; /* je: equal / zero */

loc_0033C9FF: ;
    eax = MEM32(esi + 0xC);
    eax = esi + eax * 4 + 0x10;
    MEM32(eax) = MEM32(eax) | ebx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0xC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + eax * 4 + 0x20;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = MEM32(eax) | ebx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0033CA14: ;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x0033CA1Eu); RECOMP_ABI_CALL(0x0037DEE1u, sub_0037DEE1); /* call 0x0037DEE1 */

loc_0033CA1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0033CA3D; /* je: equal / zero */

loc_0033CA23: ;
    eax = MEM32(esi + 0xC);
    eax = esi + eax * 4 + 0x10;
    ecx = 0x20000;
    MEM32(eax) = MEM32(eax) | ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0xC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + eax * 4 + 0x20;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = MEM32(eax) | ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0033CA3D: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(esi + eax * 4 + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 4 + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CA4A; /* je: equal / zero */

loc_0033CA47: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033CA4A: ;
    eax = ebp;

loc_0033CA4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0033CA50
 * Original: 0x0033CA50 - 0x0033CA7C (44 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CA50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033CA50: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) & 0;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 8) = MEM32(ecx + 8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = 0x418C18;
    MEM32(ecx + 0xC) = 3;
    edi = ecx + 0x10;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx + 0x20;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033CA7C
 * Original: 0x0033CA7C - 0x0033CAA2 (38 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CA7C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033CA7C: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x418BB8;
    PUSH32(esp, 0x0033CA8Au); RECOMP_ABI_CALL(0x0033A7EAu, sub_0033A7EA); /* call 0x0033A7EA */

loc_0033CA8A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033CA9C; /* je: equal / zero */

loc_0033CA91: ;
    PUSH32(esp, 0x8011);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033CA9Cu); RECOMP_ABI_CALL(0x0033F2D6u, sub_0033F2D6); /* call 0x0033F2D6 */

loc_0033CA9C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033CAA2
 * Original: 0x0033CAA2 - 0x0033CAC8 (38 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CAA2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033CAA2: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x418BB8;
    PUSH32(esp, 0x0033CAB0u); RECOMP_ABI_CALL(0x0033A7EAu, sub_0033A7EA); /* call 0x0033A7EA */

loc_0033CAB0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033CAC2; /* je: equal / zero */

loc_0033CAB7: ;
    PUSH32(esp, 0x8015);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033CAC2u); RECOMP_ABI_CALL(0x0033F2D6u, sub_0033F2D6); /* call 0x0033F2D6 */

loc_0033CAC2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033CAC8
 * Original: 0x0033CAC8 - 0x0033CAF2 (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CAC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033CAC8: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x418C1C;
    PUSH32(esp, 0x0033CAD6u); RECOMP_ABI_CALL(0x0033C280u, sub_0033C280); /* call 0x0033C280 */

loc_0033CAD6: ;
    eax = esi + 0x228;
    MEM32(eax + 8) = MEM32(eax + 8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi + 0x20C;
    MEM32(eax) = 0x41E814;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033C0BA(); return; /* tail jmp 0x0033C0BA */

}

/**
 * sub_0033CAF2
 * Original: 0x0033CAF2 - 0x0033CBF5 (259 bytes, 96 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CAF2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033CAF2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x10);
    edi = ebx + 0xC;
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
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x10), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CB1F; /* je: equal / zero */

loc_0033CB0E: ;
    ecx = ebx;
    PUSH32(esp, 0x0033CB15u); RECOMP_ABI_CALL(0x0033C2CCu, sub_0033C2CC); /* call 0x0033C2CC */

loc_0033CB15: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033CBDE; /* jl: less (signed <) */

loc_0033CB1F: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CBE9; /* je: equal / zero */

loc_0033CB2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CBE9; /* je: equal / zero */

loc_0033CB34: ;
    PUSH32(esp, 0x70);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = ebx + 0x4C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CB8E; /* je: equal / zero */

loc_0033CB45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CB8E; /* je: equal / zero */

loc_0033CB4A: ;
    PUSH32(esp, 0x8011);
    PUSH32(esp, 0xB4);
    PUSH32(esp, 0x0033CB59u); RECOMP_ABI_CALL(0x0033F2C0u, sub_0033F2C0); /* call 0x0033F2C0 */

loc_0033CB59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CB69; /* je: equal / zero */

loc_0033CB5D: ;
    PUSH32(esp, MEM32(ebx + 0x14));
    ecx = eax;
    PUSH32(esp, 0x0033CB67u); RECOMP_ABI_CALL(0x0033C896u, sub_0033C896); /* call 0x0033C896 */

loc_0033CB67: ;
    goto loc_0033CB6B;

loc_0033CB69: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033CB6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x21C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0033CB7C; /* jne: not equal / not zero */

loc_0033CB75: ;
    ebp = 0x8007000Eu;
    goto loc_0033CBDE;

loc_0033CB7C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0033CB83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033CB80u); } /* indirect call */
    }

loc_0033CB83: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033CBDE; /* jl: less (signed <) */

loc_0033CB89: ;
    MEM32(ebx + 8) = esi;
    goto loc_0033CB99;

loc_0033CB8E: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x21C) = MEM32(ebx + 0x21C) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x21C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033CB99: ;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CBD1; /* je: equal / zero */

loc_0033CBA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CBD1; /* je: equal / zero */

loc_0033CBA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033CBC6; /* jne: not equal / not zero */

loc_0033CBAA: ;
    esi = MEM32(ebx + 0x48);
    eax = ebx + 0x268;
    PUSH32(esp, 0x27);
    POP32(esp, ecx);
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
    ecx = ebx;
    MEM32(ebx + 0x48) = eax;
    PUSH32(esp, 0x0033CBC4u); RECOMP_ABI_CALL(0x0033C623u, sub_0033C623); /* call 0x0033C623 */

loc_0033CBC4: ;
    goto loc_0033CBD8;

loc_0033CBC6: ;
    eax = MEM32(ebx + 0x21C);
    MEM32(ebx + 4) = eax;
    goto loc_0033CBDA;

loc_0033CBD1: ;
    ecx = ebx;
    PUSH32(esp, 0x0033CBD8u); RECOMP_ABI_CALL(0x0033C715u, sub_0033C715); /* call 0x0033C715 */

loc_0033CBD8: ;
    ebp = eax;

loc_0033CBDA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033CBE5; /* jge: greater or equal (signed >=) */

loc_0033CBDE: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0033CBE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033CBE2u); } /* indirect call */
    }

loc_0033CBE5: ;
    eax = ebp;
    goto loc_0033CBEE;

loc_0033CBE9: ;
    eax = 0x80004001u;

loc_0033CBEE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033CBF5
 * Original: 0x0033CBF5 - 0x0033CCC7 (210 bytes, 73 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033CBF5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033CBF5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0033CCC1; /* je: equal / zero */

loc_0033CC08: ;
    eax = MEM32(edi + 0x21C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x90), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033CC46; /* jbe: below or equal (unsigned <=) */

loc_0033CC19: ;
    ecx = ebx + eax + 0x10;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CC34; /* je: equal / zero */

loc_0033CC23: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033CC34u); RECOMP_ABI_CALL(0x0033C8E1u, sub_0033C8E1); /* call 0x0033C8E1 */

loc_0033CC34: ;
    eax = MEM32(edi + 0x21C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x90) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033CC19; /* jb: below (unsigned <) */

loc_0033CC46: ;
    esi = MEM32(edi + 0x21C);
    ecx = MEM32(esi + 0x90);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033CCC0; /* jbe: below or equal (unsigned <=) */

loc_0033CC59: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0033CC68; /* jne: not equal / not zero */

loc_0033CC63: ;
    MEM32(ebp + -4) = ebx;
    goto loc_0033CC8A;

loc_0033CC68: ;
    MEM32(ebp + 8) = ebx;

loc_0033CC6B: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033CC73u); RECOMP_ABI_CALL(0x0033C1ACu, sub_0033C1AC); /* call 0x0033C1AC */

loc_0033CC73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CC7A; /* je: equal / zero */

loc_0033CC77: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033CC7A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033CC6B; /* jb: below (unsigned <) */

loc_0033CC80: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033CC8A; /* jb: below (unsigned <) */

loc_0033CC86: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033CC8A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), ebx (32-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0033CCC0; /* jbe: below or equal (unsigned <=) */

loc_0033CC97: ;
    ecx = ebx + esi + 0x10;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CCA9; /* je: equal / zero */

loc_0033CCA1: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033CCA9u); RECOMP_ABI_CALL(0x0033C96Bu, sub_0033C96B); /* call 0x0033C96B */

loc_0033CCA9: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = MEM32(edi + 0x21C);
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x90) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033CC97; /* jb: below (unsigned <) */

loc_0033CCC0: ;
    POP32(esp, esi);

loc_0033CCC1: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033CCC7
 * Original: 0x0033CCC7 - 0x0033CD50 (137 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CCC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033CCC7: ;
    eax = MEM32(0x445860);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    eax = MEM32(edi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x94));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033CCE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033CCDDu); } /* indirect call */
    }

loc_0033CCE0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0xA0));
    eax = MEM32(edi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033CCECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033CCE9u); } /* indirect call */
    }

loc_0033CCEC: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033CD14; /* jbe: below or equal (unsigned <=) */

loc_0033CCF6: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x10;

loc_0033CCFA: ;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CD07; /* je: equal / zero */

loc_0033CD00: ;
    ecx = ebx;
    PUSH32(esp, 0x0033CD07u); RECOMP_ABI_CALL(0x0033BFE5u, sub_0033BFE5); /* call 0x0033BFE5 */

loc_0033CD07: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x90) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033CCFA; /* jb: below (unsigned <) */

loc_0033CD13: ;
    POP32(esp, ebx);

loc_0033CD14: ;
    eax = MEM32(0x445860);
    eax = MEM32(eax + 0x1A0);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033CD34; /* jne: not equal / not zero */

loc_0033CD25: ;
    ecx = esi;
    PUSH32(esp, 0x0033CD2Cu); RECOMP_ABI_CALL(0x0033BF46u, sub_0033BF46); /* call 0x0033BF46 */

loc_0033CD2C: ;
    PUSH32(esp, MEM32(esi + 0xA4));
    goto loc_0033CD46;

loc_0033CD34: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x98));
    eax = MEM32(edi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033CD40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033CD3Du); } /* indirect call */
    }

loc_0033CD40: ;
    PUSH32(esp, MEM32(esi + 0x9C));

loc_0033CD46: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033CD4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033CD49u); } /* indirect call */
    }

loc_0033CD4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0033CD50
 * Original: 0x0033CD50 - 0x0033CE07 (183 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CD50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033CD50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(0x445860);
    eax = MEM32(ebx + 0x1A0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi + 0x14));
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0033CD73u); RECOMP_ABI_CALL(0x0033A94Bu, sub_0033A94B); /* call 0x0033A94B */

loc_0033CD73: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x174)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x174), ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033CDC2; /* jbe: below or equal (unsigned <=) */

loc_0033CD7D: ;
    PUSH32(esp, edi);

loc_0033CD7E: ;
    edi = ZX16(MEM16(ebx + 0x180));
    ecx = MEM32(esp + 0x10);
    edi = (uint32_t)((int32_t)edi * (int32_t)ebp);
    _fb = (uint32_t)(MEM32(ebx + 0x178)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebx + 0x178);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033CD98u); RECOMP_ABI_CALL(0x0033BCCDu, sub_0033BCCD); /* call 0x0033BCCD */

loc_0033CD98: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x70;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x14));
    if (CMP_EQ(_fa, _fb)) goto loc_0033CDB1; /* je: equal / zero */

loc_0033CDAA: ;
    PUSH32(esp, 0x0033CDAFu); RECOMP_ABI_CALL(0x0033A8B3u, sub_0033A8B3); /* call 0x0033A8B3 */

loc_0033CDAF: ;
    goto loc_0033CDB6;

loc_0033CDB1: ;
    PUSH32(esp, 0x0033CDB6u); RECOMP_ABI_CALL(0x0033A8F7u, sub_0033A8F7); /* call 0x0033A8F7 */

loc_0033CDB6: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x174)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 0x174) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033CD7E; /* jb: below (unsigned <) */

loc_0033CDBF: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

loc_0033CDC2: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x90), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033CDE8; /* jbe: below or equal (unsigned <=) */

loc_0033CDCE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x80000009u);
    ecx = ebx;
    PUSH32(esp, 0x0033CDDCu); RECOMP_ABI_CALL(0x0033A622u, sub_0033A622); /* call 0x0033A622 */

loc_0033CDDC: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 0x0033CDE8u); RECOMP_ABI_CALL(0x0033A8F7u, sub_0033A8F7); /* call 0x0033A8F7 */

loc_0033CDE8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x80000002u);
    ecx = ebx;
    PUSH32(esp, 0x0033CDF6u); RECOMP_ABI_CALL(0x0033A622u, sub_0033A622); /* call 0x0033A622 */

loc_0033CDF6: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 0x0033CE02u); RECOMP_ABI_CALL(0x0033A8B3u, sub_0033A8B3); /* call 0x0033A8B3 */

loc_0033CE02: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033CE07
 * Original: 0x0033CE07 - 0x0033CEE0 (217 bytes, 86 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033CE07(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033CE07: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x445860);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(ebp + 0xC);
    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(ecx) = eax;
    PUSH32(esp, MEM32(edi + 0x14));
    ecx = MEM32(esi);
    PUSH32(esp, esi);
    MEM32(ebp + -16) = ebx;
    { uint32_t _icall_target = MEM32(ecx + 0x2C); PUSH32(esp, 0x0033CE3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033CE37u); } /* indirect call */
    }

loc_0033CE3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033CEB7; /* jl: less (signed <) */

loc_0033CE3E: ;
    eax = MEM32(ebx + 0x174);
    ecx = MEM32(edi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ecx + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x90), ebx (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0033CE59; /* jbe: below or equal (unsigned <=) */

loc_0033CE55: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = eax;

loc_0033CE59: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0033CEB7; /* ja: above (unsigned >) */

loc_0033CE5E: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033CE7A; /* jne: not equal / not zero */

loc_0033CE63: ;
    eax = MEM32(esi);
    ecx = ebp + -12;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(edi + 0x14));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0033CE74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033CE71u); } /* indirect call */
    }

loc_0033CE74: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033CEB7; /* jne: not equal / not zero */

loc_0033CE7A: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033CE89; /* jne: not equal / not zero */

loc_0033CE82: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ebx;
    goto loc_0033CED7;

loc_0033CE89: ;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x90), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033CEBB; /* jbe: below or equal (unsigned <=) */

loc_0033CE94: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033CEBB; /* jne: not equal / not zero */

loc_0033CE9A: ;
    eax = MEM32(0x445860);
    ecx = MEM32(eax + 0x1A0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033CEAAu); RECOMP_ABI_CALL(0x0033BCA4u, sub_0033BCA4); /* call 0x0033BCA4 */

loc_0033CEAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CEB7; /* je: equal / zero */

loc_0033CEAE: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = ebx;
    esi = eax;
    goto loc_0033CECF;

loc_0033CEB7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033CED9;

loc_0033CEBB: ;
    eax = MEM32(ebp + -16);
    esi = ZX16(MEM16(eax + 0x180));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + -4));
    _fb = (uint32_t)(MEM32(eax + 0x178)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax + 0x178);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033CECF: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, 0x1C);
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

loc_0033CED7: ;
    eax = ebx;

loc_0033CED9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033CEE0
 * Original: 0x0033CEE0 - 0x0033CF30 (80 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CEE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033CEE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x20C;
    MEM32(esi) = 0x418C1C;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    ecx = esi + 0x228;
    MEM32(esi + 0x21C) = edi;
    MEM32(esi + 0x220) = edi;
    MEM32(esi + 0x224) = edi;
    PUSH32(esp, 0x0033CF1Bu); RECOMP_ABI_CALL(0x0033CA50u, sub_0033CA50); /* call 0x0033CA50 */

loc_0033CF1B: ;
    MEM32(esi + 0x25C) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x258) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033CF30
 * Original: 0x0033CF30 - 0x0033CF4C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033CF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033CF30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033CF38u); RECOMP_ABI_CALL(0x0033CAC8u, sub_0033CAC8); /* call 0x0033CAC8 */

loc_0033CF38: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033CF46; /* je: equal / zero */

loc_0033CF3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033CF45u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_0033CF45: ;
    POP32(esp, ecx);

loc_0033CF46: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033CF4C
 * Original: 0x0033CF4C - 0x0033D133 (487 bytes, 161 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033CF4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033CF4C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    eax = 0x80000001u;
    ebx = eax;
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -8) = edx;
    MEM32(esi) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_0033CFB6; /* ja: above (unsigned >) */

loc_0033CF76: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x33D133); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0033CF7Du) goto loc_0033CF7D;
    if (_jt == 0x0033CF84u) goto loc_0033CF84;
    if (_jt == 0x0033CF9Eu) goto loc_0033CF9E;
    if (_jt == 0x0033CFCCu) goto loc_0033CFCC;
    if (_jt == 0x0033CFD6u) goto loc_0033CFD6;
    if (_jt == 0x0033CFDAu) goto loc_0033CFDA;
    if (_jt == 0x0033CFF8u) goto loc_0033CFF8;
    if (_jt == 0x0033D054u) goto loc_0033D054;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0033CF7D: ;
    ebx = 0x80000012u;
    goto loc_0033CFB6;

loc_0033CF84: ;
    ebx = 0x80000013u;

loc_0033CF89: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033CFB6; /* je: equal / zero */

loc_0033CF90: ;
    _fa = (uint32_t)(MEM32(eax + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x90), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033CFB6; /* jne: not equal / not zero */

loc_0033CF98: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0033CFB6;

loc_0033CF9E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 8;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    ecx = esi;
    MEM32(esi + 0xC) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033CFAEu); RECOMP_ABI_CALL(0x0033C014u, sub_0033C014); /* call 0x0033C014 */

loc_0033CFAE: ;
    ebx = 0x80000006u;

loc_0033CFB3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033CFB6: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    eax = MEM32(esi + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0033D0A0; /* je: equal / zero */

loc_0033CFC3: ;
    MEM32(eax + 8) = MEM32(eax + 8) | 2;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0033D0A4;

loc_0033CFCC: ;
    MEM32(ebp + -4) = edx;
    ebx = eax;
    MEM32(ebp + -8) = edi;
    goto loc_0033CFB6;

loc_0033CFD6: ;
    ebx = eax;
    goto loc_0033CF89;

loc_0033CFDA: ;
    PUSH32(esp, 4);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033CFE3u); RECOMP_ABI_CALL(0x0033CF4Cu, sub_0033CF4C); /* call 0x0033CF4C */

loc_0033CFE3: ;
    eax = MEM32(0x445860);
    ecx = MEM32(eax + 0x1A0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033CFF3u); RECOMP_ABI_CALL(0x0033C715u, sub_0033C715); /* call 0x0033C715 */

loc_0033CFF3: ;
    goto loc_0033D12C;

loc_0033CFF8: ;
    edx = MEM32(esi + 4);
    MEM32(ebp + -8) = edi;
    ebx = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033D004: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D01D; /* je: equal / zero */

loc_0033D008: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D01D; /* je: equal / zero */

loc_0033D013: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D01D; /* je: equal / zero */

loc_0033D018: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033CFB3; /* jne: not equal / not zero */

loc_0033D01D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033D004; /* jb: below (unsigned <) */

loc_0033D028: ;
    eax = MEM32(0x445860);
    ecx = MEM32(eax + 0x1A0);
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D046; /* jne: not equal / not zero */

loc_0033D039: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D03Eu); RECOMP_ABI_CALL(0x0033C588u, sub_0033C588); /* call 0x0033C588 */

loc_0033D03E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D12C; /* je: equal / zero */

loc_0033D046: ;
    PUSH32(esp, 7);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D04Fu); RECOMP_ABI_CALL(0x0033CF4Cu, sub_0033CF4C); /* call 0x0033CF4C */

loc_0033D04F: ;
    goto loc_0033D12C;

loc_0033D054: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x90), edi (32-bit) */
    ebx = 0x80000013u;
    if (CMP_EQ(_fa, _fb)) goto loc_0033D08B; /* je: equal / zero */

loc_0033D064: ;
    edi = MEM32(esi + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033D06A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D082; /* je: equal / zero */

loc_0033D06E: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D082; /* je: equal / zero */

loc_0033D074: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D082; /* je: equal / zero */

loc_0033D079: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033CFB3; /* jne: not equal / not zero */

loc_0033D082: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033D06A; /* jb: below (unsigned <) */

loc_0033D08B: ;
    eax = MEM32(0x445860);
    ecx = MEM32(eax + 0x1A0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D09Bu); RECOMP_ABI_CALL(0x0033BB84u, sub_0033BB84); /* call 0x0033BB84 */

loc_0033D09B: ;
    goto loc_0033D12C;

loc_0033D0A0: ;
    MEM32(eax + 8) = MEM32(eax + 8) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033D0A4: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D120; /* je: equal / zero */

loc_0033D0AA: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -152;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D0C0u); RECOMP_ABI_CALL(0x0033CE07u, sub_0033CE07); /* call 0x0033CE07 */

loc_0033D0C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D120; /* je: equal / zero */

loc_0033D0C4: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D0EA; /* je: equal / zero */

loc_0033D0CC: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x90), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033D0EA; /* jbe: below or equal (unsigned <=) */

loc_0033D0D7: ;
    PUSH32(esp, eax);
    eax = MEM32(0x445860);
    ecx = MEM32(eax + 0x1A0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D0E8u); RECOMP_ABI_CALL(0x0033C1CBu, sub_0033C1CB); /* call 0x0033C1CB */

loc_0033D0E8: ;
    goto loc_0033D0EC;

loc_0033D0EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033D0EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D0FD; /* je: equal / zero */

loc_0033D0F0: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D0FD; /* je: equal / zero */

loc_0033D0F6: ;
    PUSH32(esp, 0x80000009u);
    goto loc_0033D121;

loc_0033D0FD: ;
    PUSH32(esp, 0x10);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -140;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D10Fu); RECOMP_ABI_CALL(0x00340017u, sub_00340017); /* call 0x00340017 */

loc_0033D10F: ;
    ecx = MEM32(esi + 0x10);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D11Eu); RECOMP_ABI_CALL(0x0033A887u, sub_0033A887); /* call 0x0033A887 */

loc_0033D11E: ;
    goto loc_0033D12C;

loc_0033D120: ;
    PUSH32(esp, ebx);

loc_0033D121: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(esi + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D12Cu); RECOMP_ABI_CALL(0x0033A831u, sub_0033A831); /* call 0x0033A831 */

loc_0033D12C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033D153
 * Original: 0x0033D153 - 0x0033D16D (26 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D153(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D153: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, MEM32(esp + 8));
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + ecx + 0x10;
    PUSH32(esp, 0x0033D16Au); RECOMP_ABI_CALL(0x0033CF4Cu, sub_0033CF4C); /* call 0x0033CF4C */

loc_0033D16A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033D16D
 * Original: 0x0033D16D - 0x0033D213 (166 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033D16D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D16D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x445860);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    eax = ebp + -120;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    esi = ecx;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D18Du); RECOMP_ABI_CALL(0x0033C52Fu, sub_0033C52F); /* call 0x0033C52F */

loc_0033D18D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D198; /* jne: not equal / not zero */

loc_0033D191: ;
    eax = 0x80070490u;
    goto loc_0033D20D;

loc_0033D198: ;
    eax = MEM32(esi + 0x48);
    PUSH32(esp, 4);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);

loc_0033D1A1: ;
    edx = MEM32(eax);
    edx = edx | MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0033D1AB; /* je: equal / zero */

loc_0033D1A8: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033D1AB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033D1A1; /* jne: not equal / not zero */

loc_0033D1B1: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033D1C1; /* jbe: below or equal (unsigned <=) */

loc_0033D1B9: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033D1C1; /* jae: above or equal (unsigned >=) */

loc_0033D1BE: ;
    edi = MEM32(ebp + 8);

loc_0033D1C1: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D1D3; /* jne: not equal / not zero */

loc_0033D1C7: ;
    eax = ebp + -120;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D1D3u); RECOMP_ABI_CALL(0x0033BBF8u, sub_0033BBF8); /* call 0x0033BBF8 */

loc_0033D1D3: ;
    eax = MEM32(esi + 0x21C);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(esi + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D1E7u); RECOMP_ABI_CALL(0x0033AED8u, sub_0033AED8); /* call 0x0033AED8 */

loc_0033D1E7: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D20B; /* jne: not equal / not zero */

loc_0033D1ED: ;
    eax = MEM32(esi + 0x21C);
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(ebp + -92)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -92), 1 (8-bit) */
    ecx = edi + eax + 0x10;
    if (TEST_Z(_fa, _fb)) goto loc_0033D204; /* je: equal / zero */

loc_0033D200: ;
    PUSH32(esp, 3);
    goto loc_0033D206;

loc_0033D204: ;
    PUSH32(esp, 7);

loc_0033D206: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D20Bu); RECOMP_ABI_CALL(0x0033CF4Cu, sub_0033CF4C); /* call 0x0033CF4C */

loc_0033D20B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033D20D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033D213
 * Original: 0x0033D213 - 0x0033D284 (113 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D213(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033D213: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x445860);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033D223u); RECOMP_ABI_CALL(0x0033A7C2u, sub_0033A7C2); /* call 0x0033A7C2 */

loc_0033D223: ;
    ecx = ebx;
    PUSH32(esp, 0x0033D22Au); RECOMP_ABI_CALL(0x0033ACA3u, sub_0033ACA3); /* call 0x0033ACA3 */

loc_0033D22A: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033D276; /* jbe: below or equal (unsigned <=) */

loc_0033D234: ;
    PUSH32(esp, edi);
    edi = esi + 0x10;

loc_0033D238: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D269; /* je: equal / zero */

loc_0033D23E: ;
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D24B; /* jne: not equal / not zero */

loc_0033D247: ;
    PUSH32(esp, 2);
    goto loc_0033D25B;

loc_0033D24B: ;
    _fa = (uint32_t)(MEM8(ebx + ebp + 0x134)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + ebp + 0x134), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D259; /* jne: not equal / not zero */

loc_0033D255: ;
    PUSH32(esp, 0);
    goto loc_0033D25B;

loc_0033D259: ;
    PUSH32(esp, 1);

loc_0033D25B: ;
    ecx = edi;
    PUSH32(esp, 0x0033D262u); RECOMP_ABI_CALL(0x0033CF4Cu, sub_0033CF4C); /* call 0x0033CF4C */

loc_0033D262: ;
    ecx = edi;
    PUSH32(esp, 0x0033D269u); RECOMP_ABI_CALL(0x0033CD50u, sub_0033CD50); /* call 0x0033CD50 */

loc_0033D269: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x90) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033D238; /* jb: below (unsigned <) */

loc_0033D275: ;
    POP32(esp, edi);

loc_0033D276: ;
    MEM32(esi + 0xA8) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033D284
 * Original: 0x0033D284 - 0x0033D381 (253 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033D284(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D284: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x445860);
    esi = ecx;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D29Bu); RECOMP_ABI_CALL(0x0033A58Fu, sub_0033A58F); /* call 0x0033A58F */

loc_0033D29B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D37D; /* je: equal / zero */

loc_0033D2A3: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D2ABu); RECOMP_ABI_CALL(0x0033ACA3u, sub_0033ACA3); /* call 0x0033ACA3 */

loc_0033D2AB: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033D356; /* jbe: below or equal (unsigned <=) */

loc_0033D2BC: ;
    eax = esi + 0x10;
    MEM32(ebp + -12) = eax;

loc_0033D2C2: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D340; /* je: equal / zero */

loc_0033D2CB: ;
    eax = MEM32(0x445860);
    ecx = MEM32(eax + 0x1A0);
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(ebp + -16) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D2E1u); RECOMP_ABI_CALL(0x0033C1CBu, sub_0033C1CB); /* call 0x0033C1CB */

loc_0033D2E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D340; /* je: equal / zero */

loc_0033D2E5: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(edi + 0x174)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x174), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033D329; /* jbe: below or equal (unsigned <=) */

loc_0033D2F2: ;
    edx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -20) = eax;

loc_0033D2FA: ;
    eax = ZX16(MEM16(edi + 0x180));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -8));
    ecx = MEM32(edi + 0x178);
    ebx = MEM32(eax + ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D31B; /* jne: not equal / not zero */

loc_0033D312: ;
    eax = MEM32(eax + ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D340; /* je: equal / zero */

loc_0033D31B: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x174)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x174) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033D2FA; /* jb: below (unsigned <) */

loc_0033D329: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D336u); RECOMP_ABI_CALL(0x0033BBF8u, sub_0033BBF8); /* call 0x0033BBF8 */

loc_0033D336: ;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D340u); RECOMP_ABI_CALL(0x0033CF4Cu, sub_0033CF4C); /* call 0x0033CF4C */

loc_0033D340: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 0x20;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x90) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033D2C2; /* jb: below (unsigned <) */

loc_0033D356: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033D37C; /* jbe: below or equal (unsigned <=) */

loc_0033D360: ;
    edi = esi + 0x10;

loc_0033D363: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D370; /* je: equal / zero */

loc_0033D369: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D370u); RECOMP_ABI_CALL(0x0033CD50u, sub_0033CD50); /* call 0x0033CD50 */

loc_0033D370: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x90) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033D363; /* jb: below (unsigned <) */

loc_0033D37C: ;
    POP32(esp, ebx);

loc_0033D37D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0033D381
 * Original: 0x0033D381 - 0x0033D745 (964 bytes, 307 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033D381(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D381: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x445860);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 8) (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0033D3A7; /* je: equal / zero */

loc_0033D39E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D4E0; /* jne: not equal / not zero */

loc_0033D3A7: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D405; /* jne: not equal / not zero */

loc_0033D3B3: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x90), 1 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0033D3C5; /* je: equal / zero */

loc_0033D3C1: ;
    PUSH32(esp, 0);
    goto loc_0033D3C7;

loc_0033D3C5: ;
    PUSH32(esp, 2);

loc_0033D3C7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D3CCu); RECOMP_ABI_CALL(0x0033CF4Cu, sub_0033CF4C); /* call 0x0033CF4C */

loc_0033D3CC: ;
    eax = MEM32(0x445860);
    esi = MEM32(eax + 0x1A0);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D3E3u); RECOMP_ABI_CALL(0x0033C1CBu, sub_0033C1CB); /* call 0x0033C1CB */

loc_0033D3E3: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D3EBu); RECOMP_ABI_CALL(0x0033CBF5u, sub_0033CBF5); /* call 0x0033CBF5 */

loc_0033D3EB: ;
    eax = MEM32(0x445860);
    ecx = MEM32(eax + 0x1A0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D400u); RECOMP_ABI_CALL(0x0033BBF8u, sub_0033BBF8); /* call 0x0033BBF8 */

loc_0033D400: ;
    goto loc_0033D4DF;

loc_0033D405: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D411; /* jne: not equal / not zero */

loc_0033D40A: ;
    PUSH32(esp, 0x80000001u);
    goto loc_0033D41B;

loc_0033D411: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D428; /* jne: not equal / not zero */

loc_0033D416: ;
    PUSH32(esp, 0x80000002u);

loc_0033D41B: ;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D423u); RECOMP_ABI_CALL(0x0033A711u, sub_0033A711); /* call 0x0033A711 */

loc_0033D423: ;
    eax = MEM32(0x445860);

loc_0033D428: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0033D4D6; /* je: equal / zero */

loc_0033D433: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033D70D; /* je: equal / zero */

loc_0033D43A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033D62B; /* je: equal / zero */

loc_0033D441: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033D4E6; /* je: equal / zero */

loc_0033D448: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033D70D; /* je: equal / zero */

loc_0033D450: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033D4DF; /* jne: not equal / not zero */

loc_0033D457: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D460; /* jne: not equal / not zero */

loc_0033D45C: ;
    PUSH32(esp, 7);
    goto loc_0033D4D8;

loc_0033D460: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D4DF; /* jne: not equal / not zero */

loc_0033D465: ;
    edi = MEM32(eax + 0x1A0);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D477u); RECOMP_ABI_CALL(0x0033C1CBu, sub_0033C1CB); /* call 0x0033C1CB */

loc_0033D477: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D47Fu); RECOMP_ABI_CALL(0x0033CBF5u, sub_0033CBF5); /* call 0x0033CBF5 */

loc_0033D47F: ;
    eax = MEM32(0x445860);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(eax + 0x1A0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D492u); RECOMP_ABI_CALL(0x0033BC2Au, sub_0033BC2A); /* call 0x0033BC2A */

loc_0033D492: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033D496: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D4CA; /* je: equal / zero */

loc_0033D49B: ;
    eax = MEM32(0x445860);
    ecx = MEM32(eax + 0x1A0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D4ACu); RECOMP_ABI_CALL(0x0033C1ACu, sub_0033C1AC); /* call 0x0033C1AC */

loc_0033D4AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D4CA; /* jne: not equal / not zero */

loc_0033D4B0: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D4CA; /* je: equal / zero */

loc_0033D4BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D4CA; /* je: equal / zero */

loc_0033D4C0: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D4CAu); RECOMP_ABI_CALL(0x0033D153u, sub_0033D153); /* call 0x0033D153 */

loc_0033D4CA: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033D496; /* jb: below (unsigned <) */

loc_0033D4D6: ;
    PUSH32(esp, 1);

loc_0033D4D8: ;
    ecx = esi;

loc_0033D4DA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D4DFu); RECOMP_ABI_CALL(0x0033CF4Cu, sub_0033CF4C); /* call 0x0033CF4C */

loc_0033D4DF: ;
    POP32(esp, ebx);

loc_0033D4E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_0033D4E6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D568; /* jne: not equal / not zero */

loc_0033D4EB: ;
    edi = MEM32(eax + 0x1A0);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D4FDu); RECOMP_ABI_CALL(0x0033C1CBu, sub_0033C1CB); /* call 0x0033C1CB */

loc_0033D4FD: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D505u); RECOMP_ABI_CALL(0x0033CBF5u, sub_0033CBF5); /* call 0x0033CBF5 */

loc_0033D505: ;
    eax = MEM32(0x445860);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(eax + 0x1A0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D518u); RECOMP_ABI_CALL(0x0033BC2Au, sub_0033BC2A); /* call 0x0033BC2A */

loc_0033D518: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033D51C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D550; /* je: equal / zero */

loc_0033D521: ;
    eax = MEM32(0x445860);
    ecx = MEM32(eax + 0x1A0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D532u); RECOMP_ABI_CALL(0x0033C1ACu, sub_0033C1AC); /* call 0x0033C1AC */

loc_0033D532: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D550; /* jne: not equal / not zero */

loc_0033D536: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D550; /* je: equal / zero */

loc_0033D541: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D550; /* je: equal / zero */

loc_0033D546: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D550u); RECOMP_ABI_CALL(0x0033D153u, sub_0033D153); /* call 0x0033D153 */

loc_0033D550: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033D51C; /* jb: below (unsigned <) */

loc_0033D55C: ;
    PUSH32(esp, 2);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D565u); RECOMP_ABI_CALL(0x0033CF4Cu, sub_0033CF4C); /* call 0x0033CF4C */

loc_0033D565: ;
    ebx = MEM32(ebp + 0xC);

loc_0033D568: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D59A; /* je: equal / zero */

loc_0033D56D: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xD0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D580u); RECOMP_ABI_CALL(0x0033F532u, sub_0033F532); /* call 0x0033F532 */

loc_0033D580: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D4DF; /* je: equal / zero */

loc_0033D588: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033D59A; /* jae: above or equal (unsigned >=) */

loc_0033D590: ;
    SET_LO8(ecx, MEM8(ebp + -12));
    MEM8(eax + esi + 8) = LO8(ecx);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033D59A: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D5A5; /* je: equal / zero */

loc_0033D5A0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D61F; /* jne: not equal / not zero */

loc_0033D5A5: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + -124;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D5B8u); RECOMP_ABI_CALL(0x0033CE07u, sub_0033CE07); /* call 0x0033CE07 */

loc_0033D5B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D4DF; /* je: equal / zero */

loc_0033D5C0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D4DF; /* jne: not equal / not zero */

loc_0033D5CB: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D4DF; /* jne: not equal / not zero */

loc_0033D5D4: ;
    edi = esi + 8;
    edx = MEM32(edi);
    eax = ebp + -92;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D602; /* jne: not equal / not zero */

loc_0033D5E0: ;
    eax = ebp + -124;
    PUSH32(esp, eax);
    eax = MEM32(0x445860);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(eax + 0x1A0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D5F7u); RECOMP_ABI_CALL(0x0033BBF8u, sub_0033BBF8); /* call 0x0033BBF8 */

loc_0033D5F7: ;
    PUSH32(esp, 6);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D600u); RECOMP_ABI_CALL(0x0033CF4Cu, sub_0033CF4C); /* call 0x0033CF4C */

loc_0033D600: ;
    goto loc_0033D61F;

loc_0033D602: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(esi + 0xC) = ecx;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D60Fu); RECOMP_ABI_CALL(0x0033C014u, sub_0033C014); /* call 0x0033C014 */

loc_0033D60F: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x80000078u);
    PUSH32(esp, MEM32(esi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D61Fu); RECOMP_ABI_CALL(0x0033A831u, sub_0033A831); /* call 0x0033A831 */

loc_0033D61F: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D626u); RECOMP_ABI_CALL(0x0033C014u, sub_0033C014); /* call 0x0033C014 */

loc_0033D626: ;
    goto loc_0033D4DF;

loc_0033D62B: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D654; /* je: equal / zero */

loc_0033D630: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0033D63Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D637u); } /* indirect call */
    }

loc_0033D63A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D4DF; /* jne: not equal / not zero */

loc_0033D642: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x80000004u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D64Fu); RECOMP_ABI_CALL(0x0033A711u, sub_0033A711); /* call 0x0033A711 */

loc_0033D64F: ;
    goto loc_0033D4DF;

loc_0033D654: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D675; /* jne: not equal / not zero */

loc_0033D659: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x90), 1 (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0033D66E; /* jne: not equal / not zero */

loc_0033D667: ;
    PUSH32(esp, 5);
    goto loc_0033D4DA;

loc_0033D66E: ;
    PUSH32(esp, 1);
    goto loc_0033D4DA;

loc_0033D675: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D4DF; /* jne: not equal / not zero */

loc_0033D67E: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + -124;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D691u); RECOMP_ABI_CALL(0x0033CE07u, sub_0033CE07); /* call 0x0033CE07 */

loc_0033D691: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D4DF; /* je: equal / zero */

loc_0033D699: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D6B1; /* je: equal / zero */

loc_0033D6A0: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 7);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D6ACu); RECOMP_ABI_CALL(0x0033A5DEu, sub_0033A5DE); /* call 0x0033A5DE */

loc_0033D6AC: ;
    goto loc_0033D4DF;

loc_0033D6B1: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    edi = MEM32(ebp + 8);
    MEM32(esi + 4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0033D6CA; /* je: equal / zero */

loc_0033D6BC: ;
    eax = MEM32(ebp + -116);
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -116) = eax;
    goto loc_0033D6DF;

loc_0033D6CA: ;
    PUSH32(esp, ebx);
    eax = ebp + -124;
    PUSH32(esp, eax);
    eax = MEM32(0x445860);
    ecx = MEM32(eax + 0x1A0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D6DFu); RECOMP_ABI_CALL(0x0033CBF5u, sub_0033CBF5); /* call 0x0033CBF5 */

loc_0033D6DF: ;
    eax = ebp + -124;
    PUSH32(esp, eax);
    eax = MEM32(0x445860);
    ecx = MEM32(eax + 0x1A0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D6F4u); RECOMP_ABI_CALL(0x0033BBF8u, sub_0033BBF8); /* call 0x0033BBF8 */

loc_0033D6F4: ;
    _fa = (uint32_t)(MEM8(ebp + -96)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -96), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033D706; /* je: equal / zero */

loc_0033D6FA: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D706; /* jne: not equal / not zero */

loc_0033D6FF: ;
    PUSH32(esp, 3);
    goto loc_0033D4D8;

loc_0033D706: ;
    PUSH32(esp, 6);
    goto loc_0033D4D8;

loc_0033D70D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D735; /* jne: not equal / not zero */

loc_0033D712: ;
    PUSH32(esp, 2);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033D71Bu); RECOMP_ABI_CALL(0x0033CF4Cu, sub_0033CF4C); /* call 0x0033CF4C */

loc_0033D71B: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x90), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D4DF; /* jne: not equal / not zero */

loc_0033D72A: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 4) = eax;
    goto loc_0033D4DF;

loc_0033D735: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D4DF; /* jne: not equal / not zero */

loc_0033D73E: ;
    PUSH32(esp, 5);
    goto loc_0033D4D8;

}

/**
 * sub_0033D745
 * Original: 0x0033D745 - 0x0033D8E4 (415 bytes, 136 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D745(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033D745: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x445860);
    if (CMP_NE(_fa, _fb)) goto loc_0033D769; /* jne: not equal / not zero */

loc_0033D75A: ;
    ecx = MEM32(esi + 0x21C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D769; /* je: equal / zero */

loc_0033D764: ;
    PUSH32(esp, 0x0033D769u); RECOMP_ABI_CALL(0x0033D284u, sub_0033D284); /* call 0x0033D284 */

loc_0033D769: ;
    ecx = esi + 0x20C;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D8DE; /* je: equal / zero */

loc_0033D778: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    if ((_fa == 0)) goto loc_0033D7F1; /* je: equal / zero */

loc_0033D781: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033D8DD; /* jne: not equal / not zero */

loc_0033D788: ;
    PUSH32(esp, 0x0033D78Du); RECOMP_ABI_CALL(0x0033C0D2u, sub_0033C0D2); /* call 0x0033C0D2 */

loc_0033D78D: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_0033D7B0; /* jge: greater or equal (signed >=) */

loc_0033D795: ;
    PUSH32(esp, MEM32(edi + 0x1A0));
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033D7A3u); RECOMP_ABI_CALL(0x0033A765u, sub_0033A765); /* call 0x0033A765 */

loc_0033D7A3: ;
    PUSH32(esp, ebp);

loc_0033D7A4: ;
    ecx = esi;
    PUSH32(esp, 0x0033D7ABu); RECOMP_ABI_CALL(0x0033C39Du, sub_0033C39D); /* call 0x0033C39D */

loc_0033D7AB: ;
    goto loc_0033D8DD;

loc_0033D7B0: ;
    PUSH32(esp, 0x0033D7B5u); RECOMP_ABI_CALL(0x0033A5AFu, sub_0033A5AF); /* call 0x0033A5AF */

loc_0033D7B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D7D0; /* je: equal / zero */

loc_0033D7B9: ;
    PUSH32(esp, MEM32(edi + 0x1A0));
    ecx = edi;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0033D7C9u); RECOMP_ABI_CALL(0x0033A765u, sub_0033A765); /* call 0x0033A765 */

loc_0033D7C9: ;
    PUSH32(esp, 0x80151004u);
    goto loc_0033D7A4;

loc_0033D7D0: ;
    ecx = esi + 0x228;
    PUSH32(esp, 0x0033D7DBu); RECOMP_ABI_CALL(0x0033C0F8u, sub_0033C0F8); /* call 0x0033C0F8 */

loc_0033D7DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D8DD; /* jne: not equal / not zero */

loc_0033D7E3: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0033C804(); return; /* tail jmp 0x0033C804 */

loc_0033D7F1: ;
    PUSH32(esp, 0x0033D7F6u); RECOMP_ABI_CALL(0x0033C0D2u, sub_0033C0D2); /* call 0x0033C0D2 */

loc_0033D7F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D8DD; /* je: equal / zero */

loc_0033D7FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1510F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1510F0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D808; /* je: equal / zero */

loc_0033D805: ;
    PUSH32(esp, eax);
    goto loc_0033D7A4;

loc_0033D808: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x0033D812u); RECOMP_ABI_CALL(0x0037DE70u, sub_0037DE70); /* call 0x0037DE70 */

loc_0033D812: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    ebp = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0033D87A; /* jne: not equal / not zero */

loc_0033D819: ;
    ebp = MEM32(ebp + 0x6C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033D7A3; /* jl: less (signed <) */

loc_0033D820: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x260) = ebx;
    MEM32(esi + 8) = 4;
    MEM32(esi + 0x264) = eax;
    PUSH32(esp, MEM32(edi + 0x1A0));
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033D844u); RECOMP_ABI_CALL(0x0033A765u, sub_0033A765); /* call 0x0033A765 */

loc_0033D844: ;
    PUSH32(esp, 0x0033D849u); RECOMP_ABI_CALL(0x003513B6u, sub_003513B6); /* call 0x003513B6 */

loc_0033D849: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0 (32-bit) */
    MEM32(esi + 0x22C) = eax;
    MEM32(esi + 0x230) = 0x3E8;
    if (CMP_EQ(_fa, _fb)) goto loc_0033D8C7; /* je: equal / zero */

loc_0033D860: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D8C7; /* je: equal / zero */

loc_0033D867: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D8C7; /* je: equal / zero */

loc_0033D86C: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0033BBA8(); return; /* tail jmp 0x0033BBA8 */

loc_0033D87A: ;
    eax = ebp + 0x6C;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;

loc_0033D883: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0033D88Bu); RECOMP_ABI_CALL(0x0033C1ACu, sub_0033C1AC); /* call 0x0033C1AC */

loc_0033D88B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D8A8; /* je: equal / zero */

loc_0033D88F: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033D8BB; /* jl: less (signed <) */

loc_0033D899: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1512F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1512F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D8A8; /* jne: not equal / not zero */

loc_0033D8A0: ;
    MEM32(esp + 0x14) = 1;

loc_0033D8A8: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 0x70;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033D883; /* jb: below (unsigned <) */

loc_0033D8B3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0033D820;

loc_0033D8BB: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x70);
    PUSH32(esp, MEM32(ebx + ebp + 0x6C));
    goto loc_0033D7A4;

loc_0033D8C7: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D8D7; /* jne: not equal / not zero */

loc_0033D8CD: ;
    MEM32(esi + 0x260) = 5;

loc_0033D8D7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033D8DDu); RECOMP_ABI_CALL(0x0033ADD5u, sub_0033ADD5); /* call 0x0033ADD5 */

loc_0033D8DD: ;
    POP32(esp, ebp);

loc_0033D8DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033D8E4
 * Original: 0x0033D8E4 - 0x0033D9EC (264 bytes, 83 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033D8E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033D8E4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 2 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x445860);
    esi = ecx;
    ebp = 0x1512F0;
    if (CMP_NE(_fa, _fb)) goto loc_0033D93D; /* jne: not equal / not zero */

loc_0033D8FF: ;
    eax = MEM32(esi + 0x220);
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D91A; /* jne: not equal / not zero */

loc_0033D90A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 0x34));
    ecx = edi;
    PUSH32(esp, 0x0033D918u); RECOMP_ABI_CALL(0x0033A5DEu, sub_0033A5DE); /* call 0x0033A5DE */

loc_0033D918: ;
    goto loc_0033D93D;

loc_0033D91A: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000079u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x80000079u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D92E; /* jne: not equal / not zero */

loc_0033D925: ;
    ecx = esi;
    PUSH32(esp, 0x0033D92Cu); RECOMP_ABI_CALL(0x0033BB84u, sub_0033BB84); /* call 0x0033BB84 */

loc_0033D92C: ;
    goto loc_0033D93D;

loc_0033D92E: ;
    _fa = (uint32_t)(MEM32(edi + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1A0), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D93D; /* jne: not equal / not zero */

loc_0033D936: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0033D93Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033D93Au); } /* indirect call */
    }

loc_0033D93D: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D9E5; /* jne: not equal / not zero */

loc_0033D947: ;
    eax = MEM32(esi + 0x220);
    ecx = MEM32(eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151002u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80151002u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D964; /* jne: not equal / not zero */

loc_0033D958: ;
    ecx = edi;
    PUSH32(esp, 0x0033D95Fu); RECOMP_ABI_CALL(0x0033A610u, sub_0033A610); /* call 0x0033A610 */

loc_0033D95F: ;
    goto loc_0033D9E5;

loc_0033D964: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D978; /* jne: not equal / not zero */

loc_0033D968: ;
    _fa = (uint32_t)(MEM32(edi + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1A0), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D9E5; /* jne: not equal / not zero */

loc_0033D970: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033D976u); RECOMP_ABI_CALL(0x0033ADD5u, sub_0033ADD5); /* call 0x0033ADD5 */

loc_0033D976: ;
    goto loc_0033D9E5;

loc_0033D978: ;
    ecx = MEM32(eax + 0x18);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000079u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000079u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D9AB; /* jne: not equal / not zero */

loc_0033D985: ;
    PUSH32(esp, MEM32(ebx + 0xC));
    ecx = esi;
    PUSH32(esp, 0x0033D98Fu); RECOMP_ABI_CALL(0x0033D16Du, sub_0033D16D); /* call 0x0033D16D */

loc_0033D98F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033D9E5; /* jge: greater or equal (signed >=) */

loc_0033D993: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    MEM32(esi + 0x260) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x264) = 0x80004005u;
    goto loc_0033D970;

loc_0033D9AB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000007Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8000007Au (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D9E5; /* je: equal / zero */

loc_0033D9B3: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D9CB; /* jne: not equal / not zero */

loc_0033D9BB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 0x34));
    ecx = edi;
    PUSH32(esp, 0x0033D9C9u); RECOMP_ABI_CALL(0x0033A5DEu, sub_0033A5DE); /* call 0x0033A5DE */

loc_0033D9C9: ;
    goto loc_0033D9E5;

loc_0033D9CB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033D9E5; /* jne: not equal / not zero */

loc_0033D9D0: ;
    _fa = (uint32_t)(MEM32(edi + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1A0), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033D970; /* je: equal / zero */

loc_0033D9D8: ;
    MEM32(edi + 0x18C) = MEM32(edi + 0x18C) | 0x10;
    _fa = (uint32_t)(MEM32(edi + 0x18C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x190) = esi;

loc_0033D9E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033D9EC
 * Original: 0x0033D9EC - 0x0033DA74 (136 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033D9EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033D9EC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(0x445860);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xA8), ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0033DA43; /* je: equal / zero */

loc_0033DA07: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033DA3B; /* jbe: below or equal (unsigned <=) */

loc_0033DA11: ;
    ebx = esi + 0x10;

loc_0033DA14: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM8(eax + edi + 0x134)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edi + 0x134), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033DA2F; /* jne: not equal / not zero */

loc_0033DA21: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033DA2F; /* jne: not equal / not zero */

loc_0033DA26: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DA2Fu); RECOMP_ABI_CALL(0x0033CF4Cu, sub_0033CF4C); /* call 0x0033CF4C */

loc_0033DA2F: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x90) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033DA14; /* jb: below (unsigned <) */

loc_0033DA3B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xA8) = ebx;

loc_0033DA43: ;
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033DA6D; /* jbe: below or equal (unsigned <=) */

loc_0033DA4B: ;
    edi = esi + 0x10;

loc_0033DA4E: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033DA61; /* je: equal / zero */

loc_0033DA54: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DA61u); RECOMP_ABI_CALL(0x0033D381u, sub_0033D381); /* call 0x0033D381 */

loc_0033DA61: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x90) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033DA4E; /* jb: below (unsigned <) */

loc_0033DA6D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033DA74
 * Original: 0x0033DA74 - 0x0033DB82 (270 bytes, 93 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033DA74(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033DA74: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    eax = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0033DB46; /* jg: greater (signed >) */

loc_0033DA89: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0033DB25; /* je: equal / zero */

loc_0033DA8F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033DB19; /* je: equal / zero */

loc_0033DA97: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033DAE2; /* je: equal / zero */

loc_0033DA9A: ;
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0033DAC2; /* je: equal / zero */

loc_0033DA9F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033DB7A; /* jne: not equal / not zero */

loc_0033DAA6: ;
    edx = MEM32(ebp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx + 0x1C;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | MEM32(eax + edx * 4 + 0x248);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = esi;
    goto loc_0033DB7A;

loc_0033DAC2: ;
    ecx = MEM32(ebp + 0xC);
    eax = eax + ecx * 4 + 0x238;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + 0x10);
    edx = edx | MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = edx;
    MEM32(eax) = edi;
    goto loc_0033DB7A;

loc_0033DAE2: ;
    esi = MEM32(ebp + 0x10);
    ecx = eax + 0x260;
    edx = MEM32(ecx);
    MEM32(esi + 4) = edx;
    edx = MEM32(eax + 0x264);
    MEM32(esi + 8) = edx;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033DB07; /* jne: not equal / not zero */

loc_0033DB00: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DB05u); RECOMP_ABI_CALL(0x0037DE70u, sub_0037DE70); /* call 0x0037DE70 */

loc_0033DB05: ;
    goto loc_0033DB0F;

loc_0033DB07: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033DB14; /* jne: not equal / not zero */

loc_0033DB0C: ;
    eax = MEM32(eax + 0x48);

loc_0033DB0F: ;
    MEM32(esi + 0xC) = eax;
    goto loc_0033DB7A;

loc_0033DB14: ;
    MEM32(esi + 0xC) = edi;
    goto loc_0033DB7A;

loc_0033DB19: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DB23u); RECOMP_ABI_CALL(0x0033D8E4u, sub_0033D8E4); /* call 0x0033D8E4 */

loc_0033DB23: ;
    goto loc_0033DB7A;

loc_0033DB25: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033DB37; /* jne: not equal / not zero */

loc_0033DB2C: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0x258) = ecx;
    goto loc_0033DB7A;

loc_0033DB37: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0x224)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x224), edi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ecx) = edx;
    goto loc_0033DB7A;

loc_0033DB46: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0033DB69; /* je: equal / zero */

loc_0033DB4B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033DB5E; /* je: equal / zero */

loc_0033DB4E: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0033DB7A; /* jne: not equal / not zero */

loc_0033DB53: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DB5Au); RECOMP_ABI_CALL(0x0033C34Eu, sub_0033C34E); /* call 0x0033C34E */

loc_0033DB5A: ;
    edi = eax;
    goto loc_0033DB7A;

loc_0033DB5E: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0x25C) = ecx;
    goto loc_0033DB7A;

loc_0033DB69: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + ecx * 4 + 0x238) = edi;
    MEM32(eax + ecx * 4 + 0x248) = edi;

loc_0033DB7A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0033DB82
 * Original: 0x0033DB82 - 0x0033DD96 (532 bytes, 169 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033DB82(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033DB82: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x445860);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    esi = ecx;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DB9Du); RECOMP_ABI_CALL(0x0033A795u, sub_0033A795); /* call 0x0033A795 */

loc_0033DB9D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0033DD8E; /* jl: less (signed <) */

loc_0033DBAA: ;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40001001);
    PUSH32(esp, 3);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DBBCu); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033DBBC: ;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40001035);
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DBCEu); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033DBCE: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40009030);
    PUSH32(esp, 2);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DBE0u); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033DBE0: ;
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40001032);
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DBF2u); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033DBF2: ;
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40001031);
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DC04u); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033DC04: ;
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40001004);
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DC16u); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033DC16: ;
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40001003);
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DC28u); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033DC28: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x28));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0033DC35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DC32u); } /* indirect call */
    }

loc_0033DC35: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0033DC41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DC3Eu); } /* indirect call */
    }

loc_0033DC41: ;
    PUSH32(esp, 0x80000015u);
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DC50u); RECOMP_ABI_CALL(0x0033A831u, sub_0033A831); /* call 0x0033A831 */

loc_0033DC50: ;
    PUSH32(esp, 0x80000008u);
    PUSH32(esp, MEM32(esi + 0x2C));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DC5Fu); RECOMP_ABI_CALL(0x0033A831u, sub_0033A831); /* call 0x0033A831 */

loc_0033DC5F: ;
    PUSH32(esp, 0x80000003u);
    PUSH32(esp, MEM32(esi + 0x30));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DC6Eu); RECOMP_ABI_CALL(0x0033A831u, sub_0033A831); /* call 0x0033A831 */

loc_0033DC6E: ;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033DC94; /* je: equal / zero */

loc_0033DC73: ;
    eax = esi + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40001034);
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DC85u); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033DC85: ;
    PUSH32(esp, 0x80000049u);
    PUSH32(esp, MEM32(esi + 0x34));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DC94u); RECOMP_ABI_CALL(0x0033A831u, sub_0033A831); /* call 0x0033A831 */

loc_0033DC94: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DC99u); RECOMP_ABI_CALL(0x0037DE70u, sub_0037DE70); /* call 0x0037DE70 */

loc_0033DC99: ;
    PUSH32(esp, 0x10);
    ecx = ebp + -40;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    eax = ecx + eax + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DCAFu); RECOMP_ABI_CALL(0x00340017u, sub_00340017); /* call 0x00340017 */

loc_0033DCAF: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = ebp + -40;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0033DCBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DCBCu); } /* indirect call */
    }

loc_0033DCBF: ;
    edi = esi + 0xA8;
    eax = MEM32(edi);
    ecx = edi;
    MEM32(esi + 0xC4) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0033DCD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DCD3u); } /* indirect call */
    }

loc_0033DCD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0033DD8E; /* jl: less (signed <) */

loc_0033DCE1: ;
    eax = MEM32(edi);
    ecx = edi;
    MEM32(esi + 0xE4) = 0x445B70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0033DCF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DCEFu); } /* indirect call */
    }

loc_0033DCF2: ;
    edi = esi + 0x100;
    eax = MEM32(edi);
    ecx = edi;
    MEM32(esi + 0x11C) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0033DD09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DD06u); } /* indirect call */
    }

loc_0033DD09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0033DD8E; /* jl: less (signed <) */

loc_0033DD10: ;
    eax = MEM32(esi + 0x118);
    MEM32(esi + 0x13C) = 0x445B70;
    MEM32(esi + 0x114) = ebx;
    MEM32(eax) = 0x80000050u;
    eax = 0x80000001u;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x134) = ebx;
    MEM32(esi + 0x120) = eax;
    MEM32(esi + 0x124) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DD4Bu); RECOMP_ABI_CALL(0x0033B253u, sub_0033B253); /* call 0x0033B253 */

loc_0033DD4B: ;
    edi = esi + 0x50;
    eax = MEM32(edi);
    ecx = edi;
    MEM32(esi + 0x6C) = 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0033DD5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DD59u); } /* indirect call */
    }

loc_0033DD5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0033DD8E; /* jl: less (signed <) */

loc_0033DD63: ;
    eax = MEM32(edi);
    ecx = edi;
    MEM32(esi + 0x64) = 4;
    MEM32(esi + 0x8C) = 0x445B70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0033DD7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DD78u); } /* indirect call */
    }

loc_0033DD7B: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0x14) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0033DD85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DD82u); } /* indirect call */
    }

loc_0033DD85: ;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x170) = ebx;

loc_0033DD8E: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0033DD96
 * Original: 0x0033DD96 - 0x0033DDF9 (99 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033DD96(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033DD96: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033DDF7; /* je: equal / zero */

loc_0033DD9F: ;
    eax = MEM32(0x445860);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, MEM32(edi + 0x24));
    eax = MEM32(esi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033DDB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DDAEu); } /* indirect call */
    }

loc_0033DDB1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi + 0x18));
    eax = MEM32(esi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033DDBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DDB7u); } /* indirect call */
    }

loc_0033DDBA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi + 0x1C));
    eax = MEM32(esi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033DDC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DDC0u); } /* indirect call */
    }

loc_0033DDC3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi + 0x28));
    eax = MEM32(esi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033DDCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DDC9u); } /* indirect call */
    }

loc_0033DDCC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi + 0x20));
    eax = MEM32(esi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033DDD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DDD2u); } /* indirect call */
    }

loc_0033DDD5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi + 0x2C));
    eax = MEM32(esi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033DDDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DDDBu); } /* indirect call */
    }

loc_0033DDDE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi + 0x30));
    eax = MEM32(esi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033DDE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DDE4u); } /* indirect call */
    }

loc_0033DDE7: ;
    _fa = (uint32_t)(MEM32(edi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x4C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033DDF6; /* je: equal / zero */

loc_0033DDED: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi + 0x34));
    eax = MEM32(esi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0033DDF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DDF3u); } /* indirect call */
    }

loc_0033DDF6: ;
    POP32(esp, esi);

loc_0033DDF7: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033DDF9
 * Original: 0x0033DDF9 - 0x0033DEDB (226 bytes, 97 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033DDF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0033DDF9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x38));
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    POP32(esp, edx);
    esi = ecx;
    eax = ebp + -20;
    ecx = edx;

loc_0033DE0B: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033DE0B; /* jne: not equal / not zero */

loc_0033DE17: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx + 0x1C);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x38), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, 6);
    POP32(esp, edi);
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0033DE3D; /* jns: not sign (positive) */

loc_0033DE30: ;
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(7)) >> 32) & 1);
    ebx = ebx + 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033DE8A;

loc_0033DE3D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x40000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0033DE52; /* je: equal / zero */

loc_0033DE45: ;
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(8)) >> 32) & 1);
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033DE8A;

loc_0033DE52: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x8000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0033DE67; /* je: equal / zero */

loc_0033DE5A: ;
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(9)) >> 32) & 1);
    ebx = ebx + 9;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033DE8A;

loc_0033DE67: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x4000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0033DE7C; /* je: equal / zero */

loc_0033DE6F: ;
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xA)) >> 32) & 1);
    ebx = ebx + 0xA;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033DE8A;

loc_0033DE7C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(edx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0033DE8A; /* je: equal / zero */

loc_0033DE80: ;
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033DE8A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -12) = ebx;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0033DEA1; /* je: equal / zero */

loc_0033DE93: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xB)) >> 32) & 1);
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -24) = eax;
    goto loc_0033DEA8;

loc_0033DEA1: ;
    MEM32(ebp + -24) = 1;

loc_0033DEA8: ;
    PUSH32(esp, 0x10);
    eax = ebp + -56;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xC)) >> 32) & 1);
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033DEB7u); RECOMP_ABI_CALL(0x00340017u, sub_00340017); /* call 0x00340017 */

loc_0033DEB7: ;
    eax = MEM32(0x445860);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax);
    edx = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    edx = ebp + -56;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0033DED5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033DED2u); } /* indirect call */
    }

loc_0033DED5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033DEDB
 * Original: 0x0033DEDB - 0x0033E048 (365 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033DEDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0033DEDB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;
    eax = MEM32(edx + 0x38);
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    edi = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x40000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x10000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax;
    MEM32(ebp + -20) = ecx;
    ecx = eax;
    ebx = eax;
    MEM32(ebp + -24) = edi;
    edi = eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = eax;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x8000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x20000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0x4000000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(edx + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x6C), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -16) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_0033DF48; /* jbe: below or equal (unsigned <=) */

loc_0033DF38: ;
    edi = MEM32(edx + 0x68);
    MEM32(edi + eax * 4) = 0x80000001u;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x6C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0033DF38; /* jb: below (unsigned <) */

loc_0033DF48: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0033DF64; /* je: equal / zero */

loc_0033DF52: ;
    eax = MEM32(edx + 0x68);
    MEM32(eax) = 0x80000040u;
    MEM32(ebp + -4) = 1;
    goto loc_0033DFBB;

loc_0033DF64: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0033DFBE; /* jne: not equal / not zero */

loc_0033DF68: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0033DFBE; /* jne: not equal / not zero */

loc_0033DF6C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0033DF75; /* je: equal / zero */

loc_0033DF70: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0033DFBE; /* je: equal / zero */

loc_0033DF75: ;
    esi = MEM32(0x445860);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -36;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    edi = ebp + -36;
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
    if ((_flags != 0)) goto loc_0033DF96; /* je: equal / zero */

loc_0033DF91: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0033DF96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0033DFB5; /* je: equal / zero */

loc_0033DF9A: ;
    eax = MEM32(0x445860);
    _fa = (uint32_t)(MEM8(eax + 0x18)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x18), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0033DFB5; /* je: equal / zero */

loc_0033DFA5: ;
    eax = MEM32(edx + 0x68);
    MEM32(eax) = 0x80000031u;
    MEM32(ebp + -4) = 1;

loc_0033DFB5: ;
    esi = MEM32(ebp + -8);
    ecx = MEM32(ebp + -12);

loc_0033DFBB: ;
    eax = MEM32(ebp + -4);

loc_0033DFBE: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0033DFD9; /* je: equal / zero */

loc_0033DFC4: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0033DFD9; /* jne: not equal / not zero */

loc_0033DFC9: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0033DFD9; /* jne: not equal / not zero */

loc_0033DFCE: ;
    ebx = MEM32(edx + 0x68);
    MEM32(ebx + eax * 4) = 0x80000035u;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033DFD9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0033DFF3; /* je: equal / zero */

loc_0033DFDD: ;
    ebx = MEM32(edx + 0x68);
    MEM32(ebx + eax * 4) = 0x80000032u;
    ebx = MEM32(edx + 0x68);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + eax * 4) = 0x80000033u;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033DFF3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0033E018; /* je: equal / zero */

loc_0033DFF7: ;
    ebx = MEM32(edx + 0x68);
    MEM32(ebx + eax * 4) = 0x80000037u;
    ebx = MEM32(edx + 0x68);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + eax * 4) = 0x80000038u;
    ebx = MEM32(edx + 0x68);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + eax * 4) = 0x80000039u;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033E018: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0033E02C; /* je: equal / zero */

loc_0033E01D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0033E02C; /* jne: not equal / not zero */

loc_0033E021: ;
    ecx = MEM32(edx + 0x68);
    MEM32(ecx + eax * 4) = 0x80000036u;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033E02C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0033E040; /* jne: not equal / not zero */

loc_0033E030: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0033E040; /* jne: not equal / not zero */

loc_0033E035: ;
    ecx = MEM32(edx + 0x68);
    MEM32(ecx + eax * 4) = 0x80000041u;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033E040: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 0x6C) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0033E048
 * Original: 0x0033E048 - 0x0033E08E (70 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033E048(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E048: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0x138) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, 0x418C44);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E069u); RECOMP_ABI_CALL(0x003477F2u, sub_003477F2); /* call 0x003477F2 */

loc_0033E069: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -8;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x100;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E07Du); RECOMP_ABI_CALL(0x0033B253u, sub_0033B253); /* call 0x0033B253 */

loc_0033E07D: ;
    ecx = MEM32(0x445860);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E08Bu); RECOMP_ABI_CALL(0x0033AED8u, sub_0033AED8); /* call 0x0033AED8 */

loc_0033E08B: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0033E08E
 * Original: 0x0033E08E - 0x0033E0CE (64 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E08E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E08E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x445860);
    esi = ecx;
    PUSH32(esp, 0x0033E09Eu); RECOMP_ABI_CALL(0x0033A795u, sub_0033A795); /* call 0x0033A795 */

loc_0033E09E: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033E0C8; /* jl: less (signed <) */

loc_0033E0A4: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40001033);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0033E0B6u); RECOMP_ABI_CALL(0x0033A7C7u, sub_0033A7C7); /* call 0x0033A7C7 */

loc_0033E0B6: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0033E0BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033E0BAu); } /* indirect call */
    }

loc_0033E0BD: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + 0x170) = MEM32(edi + 0x170) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x170)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033E0C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033E0CE
 * Original: 0x0033E0CE - 0x0033E108 (58 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E0CE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E0CE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033E0D6u); RECOMP_ABI_CALL(0x003513B6u, sub_003513B6); /* call 0x003513B6 */

loc_0033E0D6: ;
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBB8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033E0F3; /* jae: above or equal (unsigned >=) */

loc_0033E0E0: ;
    eax = MEM32(0x445860);
    eax = MEM32(eax + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x0033E0F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033E0EEu); } /* indirect call */
    }

loc_0033E0F1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0033E0F3: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(0x445860);
    PUSH32(esp, 0x0033E102u); RECOMP_ABI_CALL(0x0033A66Au, sub_0033A66A); /* call 0x0033A66A */

loc_0033E102: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033E108
 * Original: 0x0033E108 - 0x0033E17D (117 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033E108(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E108: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10000 (32-bit) */
    esi = ecx;
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0033E139; /* je: equal / zero */

loc_0033E128: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033E176; /* jne: not equal / not zero */

loc_0033E130: ;
    MEM32(ebp + -12) = 0xF;
    goto loc_0033E140;

loc_0033E139: ;
    MEM32(ebp + -12) = 0xD;

loc_0033E140: ;
    eax = MEM32(0x445860);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax);
    edx = ebp + -12;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x418C4C);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0033E15Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033E15Au); } /* indirect call */
    }

loc_0033E15D: ;
    MEM32(esi + 0x14) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E165u); RECOMP_ABI_CALL(0x003513B6u, sub_003513B6); /* call 0x003513B6 */

loc_0033E165: ;
    MEM32(esi + 0x18) = eax;
    eax = MEM32(0x445860);
    MEM32(eax + 0x170) = edi;
    MEM32(esi + 0x1C) = edi;

loc_0033E176: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033E17D
 * Original: 0x0033E17D - 0x0033E191 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E17D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E17D: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033E18B; /* jne: not equal / not zero */

loc_0033E187: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033E18E;

loc_0033E18B: ;
    eax = MEM32(eax + 4);

loc_0033E18E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033E191
 * Original: 0x0033E191 - 0x0033E1AF (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0033E191(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E191: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E1AA; /* je: equal / zero */

loc_0033E198: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033E1AA; /* jae: above or equal (unsigned >=) */

loc_0033E19E: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033E1AC;

loc_0033E1AA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033E1AC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033E1AF
 * Original: 0x0033E1AF - 0x0033E1D3 (36 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E1AF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E1AF: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E1BF; /* je: equal / zero */

loc_0033E1B8: ;
    eax = 0x80004005u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0033E1BF: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x64);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x0033E1CCu); RECOMP_ABI_CALL(0x0037DF0Du, sub_0037DF0D); /* call 0x0037DF0D */

loc_0033E1CC: ;
    MEM32(esi + 4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033E1D3
 * Original: 0x0033E1D3 - 0x0033E1F6 (35 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E1D3(void)
{

loc_0033E1D3: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = ecx;
    PUSH32(esp, 0x15);
    edx = eax + 0x54;
    POP32(esp, ecx);
    MEM32(eax + 0x48) = 5;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    POP32(esp, edi);
    MEM32(eax + 0x50) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033E1F6
 * Original: 0x0033E1F6 - 0x0033E251 (91 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E1F6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E1F6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = ecx;
    ecx = esi + 0x50;
    MEM32(esi) = 0x418C50;
    MEM32(esi + 0x4C) = eax;
    PUSH32(esp, 0x0033E220u); RECOMP_ABI_CALL(0x0033C118u, sub_0033C118); /* call 0x0033C118 */

loc_0033E220: ;
    ecx = esi + 0xA8;
    PUSH32(esp, 0x0033E22Bu); RECOMP_ABI_CALL(0x0033C118u, sub_0033C118); /* call 0x0033C118 */

loc_0033E22B: ;
    ecx = esi + 0x100;
    PUSH32(esp, 0x0033E236u); RECOMP_ABI_CALL(0x0033C118u, sub_0033C118); /* call 0x0033C118 */

loc_0033E236: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x40) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 4) = 0x15;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0033E251
 * Original: 0x0033E251 - 0x0033E256 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E251(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033E251: ;
    g_seh_ebp = ebp; sub_0033A7C2(); return; /* tail jmp 0x0033A7C2 */

}

/**
 * sub_0033E256
 * Original: 0x0033E256 - 0x0033E2A0 (74 bytes, 32 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033E256(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E256: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x20;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033E299; /* jne: not equal / not zero */

loc_0033E26F: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E27Au); RECOMP_ABI_CALL(0x0037DEECu, sub_0037DEEC); /* call 0x0037DEEC */

loc_0033E27A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0033E292; /* jl: less (signed <) */

loc_0033E281: ;
    PUSH32(esp, 0x1F4);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E290u); RECOMP_ABI_CALL(0x0033C09Au, sub_0033C09A); /* call 0x0033C09A */

loc_0033E290: ;
    goto loc_0033E299;

loc_0033E292: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0033E299u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033E296u); } /* indirect call */
    }

loc_0033E299: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0033E2A0
 * Original: 0x0033E2A0 - 0x0033E385 (229 bytes, 83 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E2A0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x20), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0033E2BF; /* jne: not equal / not zero */

loc_0033E2AB: ;
    edi = 0x80004005u;

loc_0033E2B0: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0033E2B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033E2B4u); } /* indirect call */
    }

loc_0033E2B7: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0033E2BF: ;
    edi = ebx + 8;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    esi = MEM32(esp + 0x10);
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
    eax = MEM32(ebx + 0xC);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebx + eax * 4 + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xB);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0033E2DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033E2DCu); } /* indirect call */
    }

loc_0033E2DF: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033E2B0; /* jl: less (signed <) */

loc_0033E2E5: ;
    PUSH32(esp, 0x8013);
    PUSH32(esp, 0x15C);
    PUSH32(esp, 0x0033E2F4u); RECOMP_ABI_CALL(0x0033F2C0u, sub_0033F2C0); /* call 0x0033F2C0 */

loc_0033E2F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E312; /* je: equal / zero */

loc_0033E2F8: ;
    PUSH32(esp, MEM32(ebx + 0x1C));
    esi = ebx + 0x10;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    PUSH32(esp, MEM32(ebx + 0xC));
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    ecx = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0x0033E310u); RECOMP_ABI_CALL(0x0033E1F6u, sub_0033E1F6); /* call 0x0033E1F6 */

loc_0033E310: ;
    goto loc_0033E314;

loc_0033E312: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033E314: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x40) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0033E322; /* jne: not equal / not zero */

loc_0033E31B: ;
    edi = 0x8007000Eu;
    goto loc_0033E2B0;

loc_0033E322: ;
    ecx = MEM32(ebx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x445B6C) = MEM32(0x445B6C) | eax;
    _fa = (uint32_t)(MEM32(0x445B6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebx + 0x40);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0033E338u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033E335u); } /* indirect call */
    }

loc_0033E338: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033E2B0; /* jl: less (signed <) */

loc_0033E342: ;
    eax = MEM32(ebx + 0x40);
    MEM32(ebx + 0x4C) = MEM32(ebx + 0x4C) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x4C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0x445B70;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 0xC));
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 0x48) = 4;
    MEM32(ebx + 0x44) = esi;
    ecx = MEM32(0x445860);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0033E370u); RECOMP_ABI_CALL(0x0033A765u, sub_0033A765); /* call 0x0033A765 */

loc_0033E370: ;
    ecx = MEM32(0x445860);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x0033E380u); RECOMP_ABI_CALL(0x0033A765u, sub_0033A765); /* call 0x0033A765 */

loc_0033E380: ;
    goto loc_0033E2B7;

}

/**
 * sub_0033E385
 * Original: 0x0033E385 - 0x0033E3D0 (75 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033E385(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E385: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 0x30;
    POP32(esp, esi);

loc_0033E391: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E3A0; /* je: equal / zero */

loc_0033E397: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033E3A0; /* jne: not equal / not zero */

loc_0033E39D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033E3A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033E391; /* jne: not equal / not zero */

loc_0033E3A6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0033E3C5; /* je: equal / zero */

loc_0033E3AD: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ZX16(MEM16(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E3C3u); RECOMP_ABI_CALL(0x0037DF18u, sub_0037DF18); /* call 0x0037DF18 */

loc_0033E3C3: ;
    goto loc_0033E3CC;

loc_0033E3C5: ;
    ecx = MEM32(ebp + 0x14);
    MEM16(ecx) = MEM16(ecx) & 0;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_0033E3CC: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0033E3D0
 * Original: 0x0033E3D0 - 0x0033E41B (75 bytes, 29 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E3D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x14;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E3F0; /* je: equal / zero */

loc_0033E3DD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033E3E3u); RECOMP_ABI_CALL(0x0037DF02u, sub_0037DF02); /* call 0x0037DF02 */

loc_0033E3E3: ;
    goto loc_0033E3EC;

loc_0033E3E5: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x0033E3ECu); RECOMP_ABI_CALL(0x0037DE40u, sub_0037DE40); /* call 0x0037DE40 */

loc_0033E3EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E3E5; /* je: equal / zero */

loc_0033E3F0: ;
    ecx = edi;
    PUSH32(esp, 0x0033E3F7u); RECOMP_ABI_CALL(0x0033C0BAu, sub_0033C0BA); /* call 0x0033C0BA */

loc_0033E3F7: ;
    eax = MEM32(esi + 8);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E40D; /* je: equal / zero */

loc_0033E402: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033E408u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_0033E408: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_0033E40D: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(esi + 0x10) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033E41B
 * Original: 0x0033E41B - 0x0033E42B (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E41B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E41B: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x24) = MEM32(ecx + 0x24) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x0033E428u); RECOMP_ABI_CALL(0x0033E1AFu, sub_0033E1AF); /* call 0x0033E1AF */

loc_0033E428: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033E42B
 * Original: 0x0033E42B - 0x0033E46E (67 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033E42B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E42B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E445u); RECOMP_ABI_CALL(0x0037DEF7u, sub_0037DEF7); /* call 0x0037DEF7 */

loc_0033E445: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033E464; /* jl: less (signed <) */

loc_0033E44B: ;
    PUSH32(esp, 0x1F4);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E45Bu); RECOMP_ABI_CALL(0x0033C09Au, sub_0033C09A); /* call 0x0033C09A */

loc_0033E45B: ;
    MEM32(esi + 0x10) = 1;
    goto loc_0033E468;

loc_0033E464: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033E468: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0033E46E
 * Original: 0x0033E46E - 0x0033E641 (467 bytes, 161 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033E46E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E46E: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x445860);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    ebx = eax;
    eax = MEM32(eax + 0x1C8);
    MEM32(ebp + 0x6C) = eax;
    edi = eax;
    eax = MEM32(ebp + 0x7C);
    MEM32(ebp + 0x60) = ecx;
    MEM32(esi + 0x38) = eax;
    ecx = MEM32(eax + 0x1C);
    MEM32(ebp + 0x70) = ecx;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = 0x445B70;
    MEM32(ebp + 0x64) = esi;
    PUSH32(esp, 0x0033E4B8u); RECOMP_ABI_CALL(0x0033E385u, sub_0033E385); /* call 0x0033E385 */

loc_0033E4B8: ;
    PUSH32(esp, 0x10);
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x38);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033E4CAu); RECOMP_ABI_CALL(0x00340017u, sub_00340017); /* call 0x00340017 */

loc_0033E4CA: ;
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x418C68);
    esi = 0xC8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033E4DFu); RECOMP_ABI_CALL(0x00340092u, sub_00340092); /* call 0x00340092 */

loc_0033E4DF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033E637; /* jl: less (signed <) */

loc_0033E4EA: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi + eax * 2;
    eax = MEM32(ebp + 0x70);
    MEM32(ebp + 0x7C) = eax;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) & 1;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    if ((_fa == 0)) goto loc_0033E52E; /* je: equal / zero */

loc_0033E4FD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033E527; /* je: equal / zero */

loc_0033E501: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033E50C; /* je: equal / zero */

loc_0033E505: ;
    PUSH32(esp, 0x80000029u);
    goto loc_0033E511;

loc_0033E50C: ;
    PUSH32(esp, 0x80000018u);

loc_0033E511: ;
    PUSH32(esp, 0x0033E516u); RECOMP_ABI_CALL(0x0033A622u, sub_0033A622); /* call 0x0033A622 */

loc_0033E516: ;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033E522u); RECOMP_ABI_CALL(0x00340092u, sub_00340092); /* call 0x00340092 */

loc_0033E522: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033E543;

loc_0033E527: ;
    PUSH32(esp, 0x80000019u);
    goto loc_0033E511;

loc_0033E52E: ;
    PUSH32(esp, 0x80000016u);
    PUSH32(esp, 0x0033E538u); RECOMP_ABI_CALL(0x0033A622u, sub_0033A622); /* call 0x0033A622 */

loc_0033E538: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033E540u); RECOMP_ABI_CALL(0x00340092u, sub_00340092); /* call 0x00340092 */

loc_0033E540: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033E543: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033E637; /* jl: less (signed <) */

loc_0033E54B: ;
    ecx = MEM32(ebp + 0x70);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi + eax * 2;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0033E560; /* jns: not sign (positive) */

loc_0033E559: ;
    PUSH32(esp, 0x80000024u);
    goto loc_0033E5BF;

loc_0033E560: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x40000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033E56F; /* je: equal / zero */

loc_0033E568: ;
    PUSH32(esp, 0x80000025u);
    goto loc_0033E5BF;

loc_0033E56F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x8000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033E594; /* je: equal / zero */

loc_0033E577: ;
    PUSH32(esp, 0x80000020u);
    ecx = ebx;
    PUSH32(esp, 0x0033E583u); RECOMP_ABI_CALL(0x0033A622u, sub_0033A622); /* call 0x0033A622 */

loc_0033E583: ;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033E58Fu); RECOMP_ABI_CALL(0x00340092u, sub_00340092); /* call 0x00340092 */

loc_0033E58F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033E5D1;

loc_0033E594: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033E5D1; /* je: equal / zero */

loc_0033E59C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033E5AB; /* je: equal / zero */

loc_0033E5A4: ;
    PUSH32(esp, 0x80000022u);
    goto loc_0033E5BF;

loc_0033E5AB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x20000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033E5BA; /* je: equal / zero */

loc_0033E5B3: ;
    PUSH32(esp, 0x80000023u);
    goto loc_0033E5BF;

loc_0033E5BA: ;
    PUSH32(esp, 0x80000021u);

loc_0033E5BF: ;
    ecx = ebx;
    PUSH32(esp, 0x0033E5C6u); RECOMP_ABI_CALL(0x0033A622u, sub_0033A622); /* call 0x0033A622 */

loc_0033E5C6: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033E5CEu); RECOMP_ABI_CALL(0x00340092u, sub_00340092); /* call 0x00340092 */

loc_0033E5CE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033E5D1: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 0 (32-bit) */
    edi = edi + eax * 2;
    if (CMP_EQ(_fa, _fb)) goto loc_0033E600; /* je: equal / zero */

loc_0033E5DC: ;
    _fa = (uint32_t)(MEM8(ebp + 0x70)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x70), 8 (8-bit) */
    ecx = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_0033E5EB; /* je: equal / zero */

loc_0033E5E4: ;
    PUSH32(esp, 0x80000026u);
    goto loc_0033E5F0;

loc_0033E5EB: ;
    PUSH32(esp, 0x80000027u);

loc_0033E5F0: ;
    PUSH32(esp, 0x0033E5F5u); RECOMP_ABI_CALL(0x0033A622u, sub_0033A622); /* call 0x0033A622 */

loc_0033E5F5: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033E5FDu); RECOMP_ABI_CALL(0x00340092u, sub_00340092); /* call 0x00340092 */

loc_0033E5FD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033E600: ;
    eax = ebp + 0x68;
    PUSH32(esp, eax);
    eax = ebp + 0x5C;
    PUSH32(esp, eax);
    eax = ebp + 0x6C;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0033E613u); RECOMP_ABI_CALL(0x0033A681u, sub_0033A681); /* call 0x0033A681 */

loc_0033E613: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x68));
    edx = MEM32(ebp + 0x64);
    PUSH32(esp, MEM32(ebp + 0x5C));
    eax = MEM32(ebp + 0x60);
    PUSH32(esp, MEM32(ebp + 0x6C));
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(edx + 0x28));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0033E62Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033E62Au); } /* indirect call */
    }

loc_0033E62D: ;
    MEM32(ebx + 0x170) = 1;

loc_0033E637: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033E641
 * Original: 0x0033E641 - 0x0033E6CA (137 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033E641(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E641: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x445860);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E6C6; /* je: equal / zero */

loc_0033E658: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    ecx = ebp + -32;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E668u); RECOMP_ABI_CALL(0x00340017u, sub_00340017); /* call 0x00340017 */

loc_0033E668: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    ecx = esi + 0xA8;
    MEM32(esi + 0xC8) = 0x80000008u;
    MEM32(esi + 0xCC) = 0x80000003u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E68Bu); RECOMP_ABI_CALL(0x0033AAF2u, sub_0033AAF2); /* call 0x0033AAF2 */

loc_0033E68B: ;
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0xE0) = eax;
    eax = ebp + -32;
    edi = esi + 0x50;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E6A2u); RECOMP_ABI_CALL(0x0033AAF2u, sub_0033AAF2); /* call 0x0033AAF2 */

loc_0033E6A2: ;
    eax = MEM32(esi + 0x10);
    ecx = esi;
    MEM32(esi + 0x88) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E6B2u); RECOMP_ABI_CALL(0x0033DEDBu, sub_0033DEDB); /* call 0x0033DEDB */

loc_0033E6B2: ;
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E6BBu); RECOMP_ABI_CALL(0x0033B253u, sub_0033B253); /* call 0x0033B253 */

loc_0033E6BB: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E6C5u); RECOMP_ABI_CALL(0x0033AED8u, sub_0033AED8); /* call 0x0033AED8 */

loc_0033E6C5: ;
    POP32(esp, edi);

loc_0033E6C6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0033E6CA
 * Original: 0x0033E6CA - 0x0033E7D7 (269 bytes, 81 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033E6CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0033E6CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x70));
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC0);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xBC) = ebx;
    MEM32(eax) = edi;
    MEM32(esi + 0xDC) = ebx;
    MEM32(esi + 0xC8) = 0x80000004u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E6FDu); RECOMP_ABI_CALL(0x0037DE70u, sub_0037DE70); /* call 0x0037DE70 */

loc_0033E6FD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000030u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x80000030u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0033E776; /* je: equal / zero */

loc_0033E705: ;
    eax = 0x80000045u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0033E74B; /* je: equal / zero */

loc_0033E70E: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0033E739; /* jle: less or equal (signed <=) */

loc_0033E710: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000047u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x80000047u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0033E739; /* jg: greater (signed >) */

loc_0033E718: ;
    PUSH32(esp, 0x10);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x38);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(esi + 0xCC) = 0x80000003u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E734u); RECOMP_ABI_CALL(0x00340017u, sub_00340017); /* call 0x00340017 */

loc_0033E734: ;
    eax = ebp + -32;
    goto loc_0033E76D;

loc_0033E739: ;
    MEM32(esi + 0xCC) = 0x80000003u;
    edi = esi + 0xA8;
    goto loc_0033E7BB;

loc_0033E74B: ;
    eax = ebp + -112;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi + 0x38));
    ecx = 0x445B70;
    MEM32(esi + 0xCC) = 0x80000001u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E76Au); RECOMP_ABI_CALL(0x0033E385u, sub_0033E385); /* call 0x0033E385 */

loc_0033E76A: ;
    eax = ebp + -112;

loc_0033E76D: ;
    edi = esi + 0xA8;
    PUSH32(esp, eax);
    goto loc_0033E7BC;

loc_0033E776: ;
    PUSH32(esp, 0x10);
    ecx = ebp + -32;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    eax = ecx + eax + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E78Cu); RECOMP_ABI_CALL(0x00340017u, sub_00340017); /* call 0x00340017 */

loc_0033E78C: ;
    eax = ebp + -32;
    edi = esi + 0xA8;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E79Du); RECOMP_ABI_CALL(0x0033AAF2u, sub_0033AAF2); /* call 0x0033AAF2 */

loc_0033E79D: ;
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0xE0) = eax;
    eax = MEM32(esi + 0x4C);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80000001u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80000001u)) >> 32) & 1);
    eax = eax + 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xCC) = eax;

loc_0033E7BB: ;
    PUSH32(esp, ebx);

loc_0033E7BC: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E7C3u); RECOMP_ABI_CALL(0x0033B253u, sub_0033B253); /* call 0x0033B253 */

loc_0033E7C3: ;
    ecx = MEM32(0x445860);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E7D0u); RECOMP_ABI_CALL(0x0033AED8u, sub_0033AED8); /* call 0x0033AED8 */

loc_0033E7D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033E7D7
 * Original: 0x0033E7D7 - 0x0033E7F7 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E7D7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E7D7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033E7DFu); RECOMP_ABI_CALL(0x0033E7F7u, sub_0033E7F7); /* call 0x0033E7F7 */

loc_0033E7DF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033E7F1; /* je: equal / zero */

loc_0033E7E6: ;
    PUSH32(esp, 0x8013);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033E7F1u); RECOMP_ABI_CALL(0x0033F2D6u, sub_0033F2D6); /* call 0x0033F2D6 */

loc_0033E7F1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033E7F7
 * Original: 0x0033E7F7 - 0x0033E826 (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E7F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033E7F7: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x100;
    PUSH32(esp, 0x0033E805u); RECOMP_ABI_CALL(0x0033C186u, sub_0033C186); /* call 0x0033C186 */

loc_0033E805: ;
    ecx = esi + 0xA8;
    PUSH32(esp, 0x0033E810u); RECOMP_ABI_CALL(0x0033C186u, sub_0033C186); /* call 0x0033C186 */

loc_0033E810: ;
    ecx = esi + 0x50;
    PUSH32(esp, 0x0033E818u); RECOMP_ABI_CALL(0x0033C186u, sub_0033C186); /* call 0x0033C186 */

loc_0033E818: ;
    MEM32(esi) = 0x418BB8;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033A7EA(); return; /* tail jmp 0x0033A7EA */

}

/**
 * sub_0033E826
 * Original: 0x0033E826 - 0x0033E867 (65 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E826(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E826: ;
    edx = ecx;
    PUSH32(esp, edi);
    MEM32(edx) = 0x418C70;
    MEM32(edx + 0x2C) = MEM32(edx + 0x2C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edx + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x20) = ecx;
    MEM32(edx + 0x24) = ecx;
    MEM32(edx + 0x28) = ecx;
    MEM32(edx + 0x40) = ecx;
    MEM32(edx + 0xAC) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0x30;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edx + 0xC) = MEM32(edx + 0xC) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 8) = ecx;
    PUSH32(esp, 0x15);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0x54;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033E867
 * Original: 0x0033E867 - 0x0033E868 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E867(void)
{

loc_0033E867: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0033E868
 * Original: 0x0033E868 - 0x0033E86C (4 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E868(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E868: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0033E86C
 * Original: 0x0033E86C - 0x0033E89B (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E86C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E86C: ;
    eax = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 1;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x20) = MEM32(eax + 0x20) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0033E89B
 * Original: 0x0033E89B - 0x0033E8AC (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E89B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033E89B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033E8A3u); RECOMP_ABI_CALL(0x0033E3D0u, sub_0033E3D0); /* call 0x0033E3D0 */

loc_0033E8A3: ;
    ecx = esi + 0x14;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033C0BA(); return; /* tail jmp 0x0033C0BA */

}

/**
 * sub_0033E8AC
 * Original: 0x0033E8AC - 0x0033E90F (99 bytes, 34 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033E8AC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E8AC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0033E8B5u); RECOMP_ABI_CALL(0x0037DE70u, sub_0037DE70); /* call 0x0037DE70 */

loc_0033E8B5: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0xC) = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80151200u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x6C), 0x80151200u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E8D0; /* je: equal / zero */

loc_0033E8CA: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033E8D7; /* je: equal / zero */

loc_0033E8D0: ;
    edi = 0x80004005u;
    goto loc_0033E901;

loc_0033E8D7: ;
    PUSH32(esp, 0x2198);
    PUSH32(esp, 0x0033E8E1u); RECOMP_ABI_CALL(0x00346D50u, sub_00346D50); /* call 0x00346D50 */

loc_0033E8E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0033E8F0; /* jne: not equal / not zero */

loc_0033E8E9: ;
    edi = 0x8007000Eu;
    goto loc_0033E901;

loc_0033E8F0: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    PUSH32(esp, 0x0033E8FBu); RECOMP_ABI_CALL(0x0033E42Bu, sub_0033E42B); /* call 0x0033E42B */

loc_0033E8FB: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033E908; /* jge: greater or equal (signed >=) */

loc_0033E901: ;
    ecx = esi;
    PUSH32(esp, 0x0033E908u); RECOMP_ABI_CALL(0x0033E3D0u, sub_0033E3D0); /* call 0x0033E3D0 */

loc_0033E908: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033E90F
 * Original: 0x0033E90F - 0x0033EA15 (262 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033E90F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033E90F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x445860);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E92Fu); RECOMP_ABI_CALL(0x0033E17Du, sub_0033E17D); /* call 0x0033E17D */

loc_0033E92F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033E974; /* jbe: below or equal (unsigned <=) */

loc_0033E933: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E93Du); RECOMP_ABI_CALL(0x0033E191u, sub_0033E191); /* call 0x0033E191 */

loc_0033E93D: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ebp + -12;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(esi + 0x20));
    ebx = eax;
    eax = MEM32(edi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0033E952u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033E94Fu); } /* indirect call */
    }

loc_0033E952: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033E963; /* je: equal / zero */

loc_0033E958: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -12));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E963u); RECOMP_ABI_CALL(0x0033DDF9u, sub_0033DDF9); /* call 0x0033DDF9 */

loc_0033E963: ;
    ebx = MEM32(esi + 0x14);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E96Fu); RECOMP_ABI_CALL(0x0033E17Du, sub_0033E17D); /* call 0x0033E17D */

loc_0033E96F: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033E933; /* jb: below (unsigned <) */

loc_0033E974: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(edi);
    ecx = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0033E989u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033E986u); } /* indirect call */
    }

loc_0033E989: ;
    PUSH32(esp, MEM32(esi + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E991u); RECOMP_ABI_CALL(0x0033E17Du, sub_0033E17D); /* call 0x0033E17D */

loc_0033E991: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033E9AF; /* jbe: below or equal (unsigned <=) */

loc_0033E995: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033E9AF; /* jne: not equal / not zero */

loc_0033E99B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x3C));
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0033E9A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033E9A6u); } /* indirect call */
    }

loc_0033E9A9: ;
    eax = MEM32(esi + 0x3C);
    MEM32(ebp + -4) = eax;

loc_0033E9AF: ;
    PUSH32(esp, MEM32(esi + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E9B7u); RECOMP_ABI_CALL(0x0033E17Du, sub_0033E17D); /* call 0x0033E17D */

loc_0033E9B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033E9E0; /* jbe: below or equal (unsigned <=) */

loc_0033E9BB: ;
    PUSH32(esp, MEM32(esi + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E9C3u); RECOMP_ABI_CALL(0x0033E17Du, sub_0033E17D); /* call 0x0033E17D */

loc_0033E9C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033E9E0; /* jne: not equal / not zero */

loc_0033E9C8: ;
    PUSH32(esp, MEM32(esi + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E9D0u); RECOMP_ABI_CALL(0x0033E17Du, sub_0033E17D); /* call 0x0033E17D */

loc_0033E9D0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x20));
    MEM32(ebp + -4) = eax;
    ecx = MEM32(edi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ecx + 0x28); PUSH32(esp, 0x0033E9E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033E9DDu); } /* indirect call */
    }

loc_0033E9E0: ;
    edi = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E9E9u); RECOMP_ABI_CALL(0x0033E17Du, sub_0033E17D); /* call 0x0033E17D */

loc_0033E9E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033E9F9; /* jbe: below or equal (unsigned <=) */

loc_0033E9ED: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033E9F7u); RECOMP_ABI_CALL(0x0033E191u, sub_0033E191); /* call 0x0033E191 */

loc_0033E9F7: ;
    ebx = eax;

loc_0033E9F9: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033EA01u); RECOMP_ABI_CALL(0x0033E46Eu, sub_0033E46E); /* call 0x0033E46E */

loc_0033EA01: ;
    eax = MEM32(0x445860);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x170) = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0033EA15
 * Original: 0x0033EA15 - 0x0033EA62 (77 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033EA15(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033EA15: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EA5D; /* je: equal / zero */

loc_0033EA23: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033EA29u); RECOMP_ABI_CALL(0x0033E17Du, sub_0033E17D); /* call 0x0033E17D */

loc_0033EA29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EA5D; /* je: equal / zero */

loc_0033EA2D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(0x445860);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax);
    edx = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x2C); PUSH32(esp, 0x0033EA4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033EA47u); } /* indirect call */
    }

loc_0033EA4A: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EA5D; /* je: equal / zero */

loc_0033EA50: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(esi + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033EA5Bu); RECOMP_ABI_CALL(0x0033E191u, sub_0033E191); /* call 0x0033E191 */

loc_0033EA5B: ;
    goto loc_0033EA5F;

loc_0033EA5D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033EA5F: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0033EA62
 * Original: 0x0033EA62 - 0x0033EA9E (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EA62(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033EA62: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 0x0033EA6Du); RECOMP_ABI_CALL(0x0033E17Du, sub_0033E17D); /* call 0x0033E17D */

loc_0033EA6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033EA8A; /* jne: not equal / not zero */

loc_0033EA71: ;
    ecx = MEM32(0x445860);
    PUSH32(esp, 0x0033EA7Cu); RECOMP_ABI_CALL(0x0033A66Au, sub_0033A66A); /* call 0x0033A66A */

loc_0033EA7C: ;
    PUSH32(esp, 0x80000030u);
    ecx = esi;
    PUSH32(esp, 0x0033EA88u); RECOMP_ABI_CALL(0x0033E6CAu, sub_0033E6CA); /* call 0x0033E6CA */

loc_0033EA88: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0033EA8A: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = esi;
    PUSH32(esp, 0x0033EA96u); RECOMP_ABI_CALL(0x0033A94Bu, sub_0033A94B); /* call 0x0033A94B */

loc_0033EA96: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033E90F(); return; /* tail jmp 0x0033E90F */

}

/**
 * sub_0033EA9E
 * Original: 0x0033EA9E - 0x0033EAE4 (70 bytes, 23 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EA9E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033EA9E: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(eax + 0x30));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0033EAAFu); RECOMP_ABI_CALL(0x0037DEB2u, sub_0037DEB2); /* call 0x0037DEB2 */

loc_0033EAAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EAC3; /* je: equal / zero */

loc_0033EAB3: ;
    PUSH32(esp, MEM32(esi + 0x38));
    ecx = 0x445B70;
    PUSH32(esp, 0x0033EAC0u); RECOMP_ABI_CALL(0x0033E1D3u, sub_0033E1D3); /* call 0x0033E1D3 */

loc_0033EAC0: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0033EADF;

loc_0033EAC3: ;
    PUSH32(esp, 0x80000045u);
    ecx = esi;
    MEM32(0x445BB8) = 6;
    MEM32(0x445BC0) = edi;
    PUSH32(esp, 0x0033EADFu); RECOMP_ABI_CALL(0x0033E6CAu, sub_0033E6CA); /* call 0x0033E6CA */

loc_0033EADF: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033EAE4
 * Original: 0x0033EAE4 - 0x0033EB04 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EAE4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033EAE4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033EAECu); RECOMP_ABI_CALL(0x0033E89Bu, sub_0033E89B); /* call 0x0033E89B */

loc_0033EAEC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033EAFE; /* je: equal / zero */

loc_0033EAF3: ;
    PUSH32(esp, 0x8009);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033EAFEu); RECOMP_ABI_CALL(0x0033F2D6u, sub_0033F2D6); /* call 0x0033F2D6 */

loc_0033EAFE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033EB04
 * Original: 0x0033EB04 - 0x0033EB4D (73 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EB04(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033EB04: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 4);
    esi = edi + 0x30;
    POP32(esp, ebx);

loc_0033EB0F: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EB1F; /* je: equal / zero */

loc_0033EB15: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0033EB1Cu); RECOMP_ABI_CALL(0x0033EAE4u, sub_0033EAE4); /* call 0x0033EAE4 */

loc_0033EB1C: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033EB1F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033EB0F; /* jne: not equal / not zero */

loc_0033EB25: ;
    esi = edi + 0x20;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033EB38; /* jne: not equal / not zero */

loc_0033EB2D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0033EB31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EB43; /* je: equal / zero */

loc_0033EB38: ;
    ecx = esi;
    PUSH32(esp, 0x0033EB3Fu); RECOMP_ABI_CALL(0x0033C0D2u, sub_0033C0D2); /* call 0x0033C0D2 */

loc_0033EB3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033EB31; /* jge: greater or equal (signed >=) */

loc_0033EB43: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0033C0BA(); return; /* tail jmp 0x0033C0BA */

}

/**
 * sub_0033EB4D
 * Original: 0x0033EB4D - 0x0033EB66 (25 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EB4D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033EB4D: ;
    eax = MEM32(ecx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EB63; /* je: equal / zero */

loc_0033EB54: ;
    edx = MEM32(esp + 4);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, 0x0033EB63u); RECOMP_ABI_CALL(0x0033EA62u, sub_0033EA62); /* call 0x0033EA62 */

loc_0033EB63: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033EB66
 * Original: 0x0033EB66 - 0x0033EBE9 (131 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EB66(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033EB66: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_0033EB95; /* je: equal / zero */

loc_0033EB70: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033EBE6; /* jne: not equal / not zero */

loc_0033EB73: ;
    edi = esi + 0x14;
    ecx = edi;
    PUSH32(esp, 0x0033EB7Du); RECOMP_ABI_CALL(0x0033C0D2u, sub_0033C0D2); /* call 0x0033C0D2 */

loc_0033EB7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033EB88; /* jl: less (signed <) */

loc_0033EB81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033EBE6; /* jne: not equal / not zero */

loc_0033EB88: ;
    ecx = edi;
    PUSH32(esp, 0x0033EB8Fu); RECOMP_ABI_CALL(0x0033C0BAu, sub_0033C0BA); /* call 0x0033C0BA */

loc_0033EB8F: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0033EBE6;

loc_0033EB95: ;
    edi = esi + 0x14;
    ecx = edi;
    PUSH32(esp, 0x0033EB9Fu); RECOMP_ABI_CALL(0x0033C0D2u, sub_0033C0D2); /* call 0x0033C0D2 */

loc_0033EB9F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033EBB7; /* jge: greater or equal (signed >=) */

loc_0033EBA3: ;
    ecx = edi;
    PUSH32(esp, 0x0033EBAAu); RECOMP_ABI_CALL(0x0033C0BAu, sub_0033C0BA); /* call 0x0033C0BA */

loc_0033EBAA: ;
    ecx = esi;
    PUSH32(esp, 0x0033EBB1u); RECOMP_ABI_CALL(0x0033E42Bu, sub_0033E42B); /* call 0x0033E42B */

loc_0033EBB1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033EBE6; /* jge: greater or equal (signed >=) */

loc_0033EBB5: ;
    goto loc_0033EB8F;

loc_0033EBB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033EBE6; /* jne: not equal / not zero */

loc_0033EBBE: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033EBDF; /* jne: not equal / not zero */

loc_0033EBC4: ;
    ecx = esi;
    MEM32(esi + 0x28) = 1;
    PUSH32(esp, 0x0033EBD2u); RECOMP_ABI_CALL(0x0033E1AFu, sub_0033E1AF); /* call 0x0033E1AF */

loc_0033EBD2: ;
    PUSH32(esp, esi);
    ecx = 0x445B70;
    PUSH32(esp, 0x0033EBDDu); RECOMP_ABI_CALL(0x0033EB4Du, sub_0033EB4D); /* call 0x0033EB4D */

loc_0033EBDD: ;
    goto loc_0033EBE6;

loc_0033EBDF: ;
    MEM32(esi + 0x24) = 1;

loc_0033EBE6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033EBE9
 * Original: 0x0033EBE9 - 0x0033ED5F (374 bytes, 124 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033EBE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033EBE9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x445860);
    ebx = MEM32(edi + 4);
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0033EC0F; /* je: equal / zero */

loc_0033EC06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033ED58; /* jne: not equal / not zero */

loc_0033EC0F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033EC35; /* jne: not equal / not zero */

loc_0033EC18: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033EC1Fu); RECOMP_ABI_CALL(0x0033AC4Bu, sub_0033AC4B); /* call 0x0033AC4B */

loc_0033EC1F: ;
    ecx = esi + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EC35; /* je: equal / zero */

loc_0033EC29: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033EC30u); RECOMP_ABI_CALL(0x0033E048u, sub_0033E048); /* call 0x0033E048 */

loc_0033EC30: ;
    goto loc_0033ED58;

loc_0033EC35: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033ECFC; /* je: equal / zero */

loc_0033EC41: ;
    ecx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ecx + 0x30); PUSH32(esp, 0x0033EC4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033EC48u); } /* indirect call */
    }

loc_0033EC4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033EC5C; /* jne: not equal / not zero */

loc_0033EC4F: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x80000004u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033EC5Cu); RECOMP_ABI_CALL(0x0033A711u, sub_0033A711); /* call 0x0033A711 */

loc_0033EC5C: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033EC63u); RECOMP_ABI_CALL(0x0033EA15u, sub_0033EA15); /* call 0x0033EA15 */

loc_0033EC63: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033ED58; /* je: equal / zero */

loc_0033EC6D: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033EC75u); RECOMP_ABI_CALL(0x0033E46Eu, sub_0033E46E); /* call 0x0033E46E */

loc_0033EC75: ;
    eax = MEM32(ebx);
    MEM32(ebp + 8) = MEM32(ebp + 8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0033EC8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033EC87u); } /* indirect call */
    }

loc_0033EC8A: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033ED58; /* je: equal / zero */

loc_0033EC94: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033EC9Fu); RECOMP_ABI_CALL(0x0033DDF9u, sub_0033DDF9); /* call 0x0033DDF9 */

loc_0033EC9F: ;
    ebx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1005) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x1005 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033ECB2; /* je: equal / zero */

loc_0033ECAA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1009) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x1009 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033ECCC; /* jne: not equal / not zero */

loc_0033ECB2: ;
    edi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033ECBFu); RECOMP_ABI_CALL(0x0033E191u, sub_0033E191); /* call 0x0033E191 */

loc_0033ECBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033ECCC; /* je: equal / zero */

loc_0033ECC3: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033ECCCu); RECOMP_ABI_CALL(0x0033DDF9u, sub_0033DDF9); /* call 0x0033DDF9 */

loc_0033ECCC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1006) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x1006 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033ECDC; /* je: equal / zero */

loc_0033ECD4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x100A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033ED58; /* jne: not equal / not zero */

loc_0033ECDC: ;
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033ED58; /* jbe: below or equal (unsigned <=) */

loc_0033ECE3: ;
    ecx = MEM32(esi + 0x14);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033ECEDu); RECOMP_ABI_CALL(0x0033E191u, sub_0033E191); /* call 0x0033E191 */

loc_0033ECED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033ED58; /* je: equal / zero */

loc_0033ECF1: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033ECFAu); RECOMP_ABI_CALL(0x0033DDF9u, sub_0033DDF9); /* call 0x0033DDF9 */

loc_0033ECFA: ;
    goto loc_0033ED58;

loc_0033ECFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033ED17; /* jne: not equal / not zero */

loc_0033ED01: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x80000001u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033ED0Eu); RECOMP_ABI_CALL(0x0033A711u, sub_0033A711); /* call 0x0033A711 */

loc_0033ED0E: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033ED15u); RECOMP_ABI_CALL(0x0033E641u, sub_0033E641); /* call 0x0033E641 */

loc_0033ED15: ;
    goto loc_0033ED58;

loc_0033ED17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033ED36; /* jne: not equal / not zero */

loc_0033ED1C: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x80000002u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033ED29u); RECOMP_ABI_CALL(0x0033A711u, sub_0033A711); /* call 0x0033A711 */

loc_0033ED29: ;
    PUSH32(esp, MEM32(0x445860));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033ED34u); RECOMP_ABI_CALL(0x0033ADD5u, sub_0033ADD5); /* call 0x0033ADD5 */

loc_0033ED34: ;
    goto loc_0033ED58;

loc_0033ED36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033ED58; /* jne: not equal / not zero */

loc_0033ED3B: ;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033ED58; /* je: equal / zero */

loc_0033ED41: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033ED47u); RECOMP_ABI_CALL(0x0033A3CFu, sub_0033A3CF); /* call 0x0033A3CF */

loc_0033ED47: ;
    MEM32(0x445BC0) = MEM32(0x445BC0) & 0;
    _fa = (uint32_t)(MEM32(0x445BC0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x445BB8) = 7;

loc_0033ED58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033ED5F
 * Original: 0x0033ED5F - 0x0033EE76 (279 bytes, 90 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033ED5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033ED5F: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + ecx * 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x7FFFFFCF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7FFFFFCF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0033EE6F; /* ja: above (unsigned >) */

loc_0033ED7E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x33EE76); /* switch: 17 entries, 11 targets */
    if (_jt == 0x0033ED85u) goto loc_0033ED85;
    if (_jt == 0x0033EDA9u) goto loc_0033EDA9;
    if (_jt == 0x0033EDCDu) goto loc_0033EDCD;
    if (_jt == 0x0033EDECu) goto loc_0033EDEC;
    if (_jt == 0x0033EE2Cu) goto loc_0033EE2C;
    if (_jt == 0x0033EE3Bu) goto loc_0033EE3B;
    if (_jt == 0x0033EE3Eu) goto loc_0033EE3E;
    if (_jt == 0x0033EE4Du) goto loc_0033EE4D;
    if (_jt == 0x0033EE54u) goto loc_0033EE54;
    if (_jt == 0x0033EE61u) goto loc_0033EE61;
    if (_jt == 0x0033EE6Fu) goto loc_0033EE6F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0033ED85: ;
    eax = MEM32(esi + 0x38);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    eax = MEM32(0x445860);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x0033EDA4u); RECOMP_ABI_CALL(0x0037DF2Eu, sub_0037DF2E); /* call 0x0037DF2E */

loc_0033EDA4: ;
    goto loc_0033EE6F;

loc_0033EDA9: ;
    eax = MEM32(esi + 0x38);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    eax = MEM32(0x445860);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x0033EDC8u); RECOMP_ABI_CALL(0x0037DF4Fu, sub_0037DF4F); /* call 0x0037DF4F */

loc_0033EDC8: ;
    goto loc_0033EE6F;

loc_0033EDCD: ;
    _fa = (uint32_t)(MEM32(0x445C1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x445C1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EDDE; /* je: equal / zero */

loc_0033EDD6: ;
    MEM32(esi + 0x158) = edi;
    goto loc_0033EDFC;

loc_0033EDDE: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x38));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x0033EDEAu); RECOMP_ABI_CALL(0x0037DF7Bu, sub_0037DF7B); /* call 0x0037DF7B */

loc_0033EDEA: ;
    goto loc_0033EE1D;

loc_0033EDEC: ;
    _fa = (uint32_t)(MEM32(0x445C1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x445C1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EE03; /* je: equal / zero */

loc_0033EDF5: ;
    MEM32(esi + 0x158) = MEM32(esi + 0x158) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x158)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033EDFC: ;
    PUSH32(esp, 0x80000047u);
    goto loc_0033EE66;

loc_0033EE03: ;
    eax = MEM32(esi + 0x38);
    PUSH32(esp, MEM32(eax + 0x30));
    PUSH32(esp, 0x0033EE0Eu); RECOMP_ABI_CALL(0x0037DEB2u, sub_0037DEB2); /* call 0x0037DEB2 */

loc_0033EE0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033EE21; /* jne: not equal / not zero */

loc_0033EE12: ;
    PUSH32(esp, MEM32(esi + 0x38));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x0033EE1Du); RECOMP_ABI_CALL(0x0037DF86u, sub_0037DF86); /* call 0x0037DF86 */

loc_0033EE1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033EE6F; /* jl: less (signed <) */

loc_0033EE21: ;
    ecx = esi;
    PUSH32(esp, 0x0033EE28u); RECOMP_ABI_CALL(0x0033EA9Eu, sub_0033EA9E); /* call 0x0033EA9E */

loc_0033EE28: ;
    edi = eax;
    goto loc_0033EE6F;

loc_0033EE2C: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x38));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x0033EE39u); RECOMP_ABI_CALL(0x0037DF7Bu, sub_0037DF7B); /* call 0x0037DF7B */

loc_0033EE39: ;
    goto loc_0033EE6F;

loc_0033EE3B: ;
    PUSH32(esp, edi);
    goto loc_0033EE40;

loc_0033EE3E: ;
    PUSH32(esp, 0);

loc_0033EE40: ;
    PUSH32(esp, MEM32(esi + 0x38));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x0033EE4Bu); RECOMP_ABI_CALL(0x0037DF70u, sub_0037DF70); /* call 0x0037DF70 */

loc_0033EE4B: ;
    goto loc_0033EE6F;

loc_0033EE4D: ;
    PUSH32(esp, 0x80000044u);
    goto loc_0033EE66;

loc_0033EE54: ;
    PUSH32(esp, MEM32(esi + 0x38));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x0033EE5Fu); RECOMP_ABI_CALL(0x0037DF23u, sub_0037DF23); /* call 0x0037DF23 */

loc_0033EE5F: ;
    goto loc_0033EE6F;

loc_0033EE61: ;
    PUSH32(esp, 0x80000043u);

loc_0033EE66: ;
    ecx = esi;
    PUSH32(esp, 0x0033EE6Du); RECOMP_ABI_CALL(0x0033E6CAu, sub_0033E6CA); /* call 0x0033E6CA */

loc_0033EE6D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033EE6F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033EEBA
 * Original: 0x0033EEBA - 0x0033EF39 (127 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EEBA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033EEBA: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC0);
    eax = MEM32(eax);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000043u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000043u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EF29; /* je: equal / zero */

loc_0033EED0: ;
    ecx = 0x80000044u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EF1A; /* je: equal / zero */

loc_0033EED9: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0033EF34; /* jle: less or equal (signed <=) */

loc_0033EEDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000046u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000046u (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0033EF34; /* jle: less or equal (signed <=) */

loc_0033EEE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000047u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000047u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033EF34; /* jne: not equal / not zero */

loc_0033EEE9: ;
    _fa = (uint32_t)(MEM32(esi + 0x158)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x158), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EF00; /* je: equal / zero */

loc_0033EEF2: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x38));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x0033EEFEu); RECOMP_ABI_CALL(0x0037DF7Bu, sub_0037DF7B); /* call 0x0037DF7B */

loc_0033EEFE: ;
    goto loc_0033EF0B;

loc_0033EF00: ;
    PUSH32(esp, MEM32(esi + 0x38));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x0033EF0Bu); RECOMP_ABI_CALL(0x0037DF86u, sub_0037DF86); /* call 0x0037DF86 */

loc_0033EF0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033EF34; /* jl: less (signed <) */

loc_0033EF0F: ;
    ecx = esi;
    PUSH32(esp, 0x0033EF16u); RECOMP_ABI_CALL(0x0033EA9Eu, sub_0033EA9E); /* call 0x0033EA9E */

loc_0033EF16: ;
    edi = eax;
    goto loc_0033EF34;

loc_0033EF1A: ;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esi + 0x38));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x0033EF27u); RECOMP_ABI_CALL(0x0037DF70u, sub_0037DF70); /* call 0x0037DF70 */

loc_0033EF27: ;
    goto loc_0033EF34;

loc_0033EF29: ;
    PUSH32(esp, MEM32(esi + 0x38));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x0033EF34u); RECOMP_ABI_CALL(0x0037DF23u, sub_0037DF23); /* call 0x0037DF23 */

loc_0033EF34: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033EF39
 * Original: 0x0033EF39 - 0x0033EF5B (34 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EF39(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033EF39: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EF58; /* je: equal / zero */

loc_0033EF42: ;
    PUSH32(esp, esi);
    esi = ecx + eax * 4 + 0x30;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EF57; /* je: equal / zero */

loc_0033EF4D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0033EF54u); RECOMP_ABI_CALL(0x0033EAE4u, sub_0033EAE4); /* call 0x0033EAE4 */

loc_0033EF54: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033EF57: ;
    POP32(esp, esi);

loc_0033EF58: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033EF5B
 * Original: 0x0033EF5B - 0x0033EF6B (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EF5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033EF5B: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0033EF63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033EF60u); } /* indirect call */
    }

loc_0033EF63: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EB04(); return; /* tail jmp 0x0033EB04 */

}

/**
 * sub_0033EF6B
 * Original: 0x0033EF6B - 0x0033EFD5 (106 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033EF6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033EF6B: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x20;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EFD3; /* je: equal / zero */

loc_0033EF76: ;
    PUSH32(esp, 0x0033EF7Bu); RECOMP_ABI_CALL(0x0033C0D2u, sub_0033C0D2); /* call 0x0033C0D2 */

loc_0033EF7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033EFD3; /* jl: less (signed <) */

loc_0033EF7F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    edi = esi + 0x30;
    POP32(esp, ebx);

loc_0033EF87: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EF92; /* je: equal / zero */

loc_0033EF8D: ;
    PUSH32(esp, 0x0033EF92u); RECOMP_ABI_CALL(0x0033EB66u, sub_0033EB66); /* call 0x0033EB66 */

loc_0033EF92: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033EF87; /* jne: not equal / not zero */

loc_0033EF98: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033EFD1; /* jae: above or equal (unsigned >=) */

loc_0033EFA0: ;
    edi = MEM32(esi + eax * 4 + 0x30);
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EFD1; /* je: equal / zero */

loc_0033EFAA: ;
    _fa = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x24), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033EFD1; /* je: equal / zero */

loc_0033EFB0: ;
    ecx = MEM32(0x445860);
    PUSH32(esp, 0x0033EFBBu); RECOMP_ABI_CALL(0x0033AC4Bu, sub_0033AC4B); /* call 0x0033AC4B */

loc_0033EFBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x40) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033EFD1; /* jne: not equal / not zero */

loc_0033EFC0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0033EFC6u); RECOMP_ABI_CALL(0x0033E41Bu, sub_0033E41B); /* call 0x0033E41B */

loc_0033EFC6: ;
    ecx = MEM32(esi + 0x40);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA62(); return; /* tail jmp 0x0033EA62 */

loc_0033EFD1: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0033EFD3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033EFD5
 * Original: 0x0033EFD5 - 0x0033F0E9 (276 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033EFD5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033EFD5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(ebp + -4) = edx;
    if ((_fa == 0)) goto loc_0033F0D5; /* je: equal / zero */

loc_0033EFEE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033F0AF; /* je: equal / zero */

loc_0033EFF5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033F0A0; /* je: equal / zero */

loc_0033EFFC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033F094; /* je: equal / zero */

loc_0033F003: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0033F033; /* je: equal / zero */

loc_0033F008: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0033F0DF; /* jne: not equal / not zero */

loc_0033F011: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F026; /* jne: not equal / not zero */

loc_0033F018: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0xAC) = eax;
    goto loc_0033F0DF;

loc_0033F026: ;
    ecx = MEM32(esi + 0xAC);
    MEM32(eax) = ecx;
    goto loc_0033F0DF;

loc_0033F033: ;
    edi = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(0x445B6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x445B6C), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033F04F; /* je: equal / zero */

loc_0033F045: ;
    eax = 0x80004005u;
    goto loc_0033F0E2;

loc_0033F04F: ;
    ebx = MEM32(ebp + 0x10);
    esi = esi + edi * 4 + 0x30;
    MEM32(ebx) = edx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F08C; /* jne: not equal / not zero */

loc_0033F05E: ;
    PUSH32(esp, 0x8009);
    PUSH32(esp, 0x30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F06Au); RECOMP_ABI_CALL(0x0033F2C0u, sub_0033F2C0); /* call 0x0033F2C0 */

loc_0033F06A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F077; /* je: equal / zero */

loc_0033F06E: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F075u); RECOMP_ABI_CALL(0x0033E86Cu, sub_0033E86C); /* call 0x0033E86C */

loc_0033F075: ;
    goto loc_0033F079;

loc_0033F077: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033F079: ;
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(esi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F083u); RECOMP_ABI_CALL(0x0033E8ACu, sub_0033E8AC); /* call 0x0033E8AC */

loc_0033F083: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0033F0DF; /* jl: less (signed <) */

loc_0033F08A: ;
    goto loc_0033F08E;

loc_0033F08C: ;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033F08E: ;
    eax = MEM32(esi);
    MEM32(ebx) = eax;
    goto loc_0033F0DF;

loc_0033F094: ;
    edi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    goto loc_0033F0DF;

loc_0033F0A0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x40);
    eax = MEM32(ecx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0033F0ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033F0AAu); } /* indirect call */
    }

loc_0033F0AD: ;
    goto loc_0033F0DF;

loc_0033F0AF: ;
    eax = MEM32(0x445860);
    _fa = (uint32_t)(MEM32(eax + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x445B70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1A0), 0x445B70 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F0C6; /* jne: not equal / not zero */

loc_0033F0C0: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F0C6u); RECOMP_ABI_CALL(0x0033ADD5u, sub_0033ADD5); /* call 0x0033ADD5 */

loc_0033F0C6: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F0CDu); RECOMP_ABI_CALL(0x0033EB04u, sub_0033EB04); /* call 0x0033EB04 */

loc_0033F0CD: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0033F0D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033F0D1u); } /* indirect call */
    }

loc_0033F0D3: ;
    goto loc_0033F0DC;

loc_0033F0D5: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F0DCu); RECOMP_ABI_CALL(0x0033E256u, sub_0033E256); /* call 0x0033E256 */

loc_0033F0DC: ;
    MEM32(ebp + -4) = eax;

loc_0033F0DF: ;
    eax = MEM32(ebp + -4);

loc_0033F0E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0033F0E9
 * Original: 0x0033F0E9 - 0x0033F105 (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F0E9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F0E9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033F0FF; /* jne: not equal / not zero */

loc_0033F0F2: ;
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = 0x445B70;
    PUSH32(esp, 0x0033F0FFu); RECOMP_ABI_CALL(0x0033EF39u, sub_0033EF39); /* call 0x0033EF39 */

loc_0033F0FF: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033F105
 * Original: 0x0033F105 - 0x0033F1FF (250 bytes, 70 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F105(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033F105: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = MEM32(edi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x102 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0033F13D; /* jne: not equal / not zero */

loc_0033F11C: ;
    ecx = MEM32(0x445860);
    PUSH32(esp, 0x0033F127u); RECOMP_ABI_CALL(0x0033AC4Bu, sub_0033AC4B); /* call 0x0033AC4B */

loc_0033F127: ;
    ecx = esi + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F13D; /* je: equal / zero */

loc_0033F131: ;
    ecx = esi;
    PUSH32(esp, 0x0033F138u); RECOMP_ABI_CALL(0x0033E048u, sub_0033E048); /* call 0x0033E048 */

loc_0033F138: ;
    goto loc_0033F1F8;

loc_0033F13D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x101 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F163; /* jne: not equal / not zero */

loc_0033F145: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x100;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F1F8; /* jne: not equal / not zero */

loc_0033F153: ;
    ecx = MEM32(0x445860);
    PUSH32(esp, 0x0033F15Eu); RECOMP_ABI_CALL(0x0033A66Au, sub_0033A66A); /* call 0x0033A66A */

loc_0033F15E: ;
    goto loc_0033F1F8;

loc_0033F163: ;
    eax = MEM32(edi);
    ecx = esi + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F183; /* jne: not equal / not zero */

loc_0033F16C: ;
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x7C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F1F8; /* je: equal / zero */

loc_0033F175: ;
    PUSH32(esp, MEM32(edi + 8));
    ecx = esi;
    PUSH32(esp, 0x0033F17Fu); RECOMP_ABI_CALL(0x0033ED5Fu, sub_0033ED5F); /* call 0x0033ED5F */

loc_0033F17F: ;
    ebp = eax;
    goto loc_0033F1EA;

loc_0033F183: ;
    ecx = esi + 0xA8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F1F8; /* jne: not equal / not zero */

loc_0033F18D: ;
    eax = MEM32(esi + 0xC0);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000030u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x80000030u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F1B3; /* je: equal / zero */

loc_0033F19B: ;
    _fa = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD4), ebx (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0033F1AC; /* jne: not equal / not zero */

loc_0033F1A5: ;
    PUSH32(esp, 0x0033F1AAu); RECOMP_ABI_CALL(0x0033E641u, sub_0033E641); /* call 0x0033E641 */

loc_0033F1AA: ;
    goto loc_0033F1F8;

loc_0033F1AC: ;
    PUSH32(esp, 0x0033F1B1u); RECOMP_ABI_CALL(0x0033EEBAu, sub_0033EEBA); /* call 0x0033EEBA */

loc_0033F1B1: ;
    goto loc_0033F17F;

loc_0033F1B3: ;
    _fa = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F1DF; /* jne: not equal / not zero */

loc_0033F1BB: ;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F1DF; /* je: equal / zero */

loc_0033F1C1: ;
    PUSH32(esp, MEM32(0x445860));
    PUSH32(esp, 0x0033F1CCu); RECOMP_ABI_CALL(0x0033A3CFu, sub_0033A3CF); /* call 0x0033A3CF */

loc_0033F1CC: ;
    MEM32(0x445BC0) = MEM32(0x445BC0) & 0;
    _fa = (uint32_t)(MEM32(0x445BC0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x445BB8) = 7;
    goto loc_0033F1F8;

loc_0033F1DF: ;
    PUSH32(esp, MEM32(0x445860));
    PUSH32(esp, 0x0033F1EAu); RECOMP_ABI_CALL(0x0033ADD5u, sub_0033ADD5); /* call 0x0033ADD5 */

loc_0033F1EA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F1F8; /* je: equal / zero */

loc_0033F1EE: ;
    eax = MEM32(esi + 0x14);
    MEM32(eax + 0x24) = 1;

loc_0033F1F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033F1FF
 * Original: 0x0033F1FF - 0x0033F216 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F1FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033F1FF: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x418C70;
    PUSH32(esp, 0x0033F20Du); RECOMP_ABI_CALL(0x0033EF5Bu, sub_0033EF5B); /* call 0x0033EF5B */

loc_0033F20D: ;
    ecx = esi + 0x20;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033C0BA(); return; /* tail jmp 0x0033C0BA */

}

/**
 * sub_0033F216
 * Original: 0x0033F216 - 0x0033F28B (117 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F216(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F216: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x40);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0033F230; /* je: equal / zero */

loc_0033F227: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0033F22Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033F22Bu); } /* indirect call */
    }

loc_0033F22D: ;
    MEM32(esi + 0x40) = ebx;

loc_0033F230: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F25E; /* je: equal / zero */

loc_0033F238: ;
    _fa = (uint32_t)(MEM32(esi + ecx * 4 + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + ecx * 4 + 0x30), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F25E; /* je: equal / zero */

loc_0033F23E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ~eax;
    MEM32(0x445B6C) = MEM32(0x445B6C) & eax;
    _fa = (uint32_t)(MEM32(0x445B6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(esi + eax * 4 + 0x30));
    PUSH32(esp, 0x0033F257u); RECOMP_ABI_CALL(0x0033F0E9u, sub_0033F0E9); /* call 0x0033F0E9 */

loc_0033F257: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + eax * 4 + 0x30) = ebx;

loc_0033F25E: ;
    ecx = MEM32(0x445860);
    edi = 0x445B70;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0033F274u); RECOMP_ABI_CALL(0x0033A765u, sub_0033A765); /* call 0x0033A765 */

loc_0033F274: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(0x445860);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x0033F287u); RECOMP_ABI_CALL(0x0033A765u, sub_0033A765); /* call 0x0033A765 */

loc_0033F287: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F28B
 * Original: 0x0033F28B - 0x0033F2A4 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F28B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033F28B: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033F298; /* je: equal / zero */

loc_0033F293: ;
    g_seh_ebp = ebp; sub_0033858D(); return; /* tail jmp 0x0033858D */

loc_0033F298: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0033F2A1u); RECOMP_ABI_CALL(0x0033F105u, sub_0033F105); /* call 0x0033F105 */

loc_0033F2A1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033F2A4
 * Original: 0x0033F2A4 - 0x0033F2C0 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F2A4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F2A4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033F2ACu); RECOMP_ABI_CALL(0x0033F1FFu, sub_0033F1FF); /* call 0x0033F1FF */

loc_0033F2AC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033F2BA; /* je: equal / zero */

loc_0033F2B3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0033F2B9u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_0033F2B9: ;
    POP32(esp, ecx);

loc_0033F2BA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033F2C0
 * Original: 0x0033F2C0 - 0x0033F2D6 (22 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F2C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F2C0: ;
    eax = MEM32(esp + 8);
    eax = eax | 0x618E0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0033F2D3u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_0033F2D3: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033F2D6
 * Original: 0x0033F2D6 - 0x0033F2FE (40 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F2D6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F2D6: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F2FB; /* je: equal / zero */

loc_0033F2DD: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F2EC; /* je: equal / zero */

loc_0033F2E5: ;
    eax = eax | 0x618E0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0033F2F1;

loc_0033F2EC: ;
    eax = 0x618E2000;

loc_0033F2F1: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0033F2FBu); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_0033F2FB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033F2FE
 * Original: 0x0033F2FE - 0x0033F31E (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F2FE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F2FE: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F31C; /* je: equal / zero */

loc_0033F308: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033F311u); RECOMP_ABI_CALL(0x0033F2D6u, sub_0033F2D6); /* call 0x0033F2D6 */

loc_0033F311: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033F31C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F31E
 * Original: 0x0033F31E - 0x0033F397 (121 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F31E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033F31E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 8) (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0033F38E; /* je: equal / zero */

loc_0033F332: ;
    eax = ZX16(MEM16(ebx + 0xC));
    PUSH32(esp, MEM32(ebx + 0x10));
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033F342u); RECOMP_ABI_CALL(0x0033F2C0u, sub_0033F2C0); /* call 0x0033F2C0 */

loc_0033F342: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0033F391; /* je: equal / zero */

loc_0033F34A: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F381; /* je: equal / zero */

loc_0033F352: ;
    ecx = MEM32(ebx + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    edx = ebp;
    if (CMP_B(_fa, _fb)) goto loc_0033F35D; /* jb: below (unsigned <) */

loc_0033F35B: ;
    edx = ecx;

loc_0033F35D: ;
    ecx = ZX16(MEM16(ebx + 0xC));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    PUSH32(esp, edi);
    edi = eax;
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
    ecx = ebx;
    PUSH32(esp, 0x0033F37Cu); RECOMP_ABI_CALL(0x0033F2FEu, sub_0033F2FE); /* call 0x0033F2FE */

loc_0033F37C: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);

loc_0033F381: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ebp;
    POP32(esp, esi);

loc_0033F38E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033F391: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033F397
 * Original: 0x0033F397 - 0x0033F3CA (51 bytes, 15 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F397(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F397: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0033F39Fu); RECOMP_ABI_CALL(0x0033F2FEu, sub_0033F2FE); /* call 0x0033F2FE */

loc_0033F39F: ;
    SET_LO16(eax, MEM16(esp + 8));
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esi + 0xC) = LO16(eax);
    SET_LO16(eax, MEM16(esp + 0x14));
    MEM16(esi + 0xE) = LO16(eax);
    eax = MEM32(esp + 0x18);
    ecx = esi;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x0033F3C6u); RECOMP_ABI_CALL(0x0033F31Eu, sub_0033F31E); /* call 0x0033F31E */

loc_0033F3C6: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0033F3CA
 * Original: 0x0033F3CA - 0x0033F42C (98 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F3CA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F3CA: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    eax = MEM32(esi + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033F3E9; /* jbe: below or equal (unsigned <=) */

loc_0033F3D7: ;
    ecx = ZX16(MEM16(esi + 0xE));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0033F3E5u); RECOMP_ABI_CALL(0x0033F31Eu, sub_0033F31E); /* call 0x0033F31E */

loc_0033F3E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F428; /* je: equal / zero */

loc_0033F3E9: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    ecx = ZX16(MEM16(esi + 0xC));
    edx = eax + -1;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0033F415; /* je: equal / zero */

loc_0033F405: ;
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
    goto loc_0033F425;

loc_0033F415: ;
    esi = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_0033F425: ;
    eax = edx;
    POP32(esp, edi);

loc_0033F428: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033F42C
 * Original: 0x0033F42C - 0x0033F4C4 (152 bytes, 69 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033F42C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F42C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    eax = MEM32(esi + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033F44E; /* jbe: below or equal (unsigned <=) */

loc_0033F43C: ;
    ecx = ZX16(MEM16(esi + 0xE));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F44Au); RECOMP_ABI_CALL(0x0033F31Eu, sub_0033F31E); /* call 0x0033F31E */

loc_0033F44A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F4BF; /* je: equal / zero */

loc_0033F44E: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033F45E; /* jb: below (unsigned <) */

loc_0033F45A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033F4BE;

loc_0033F45E: ;
    ecx = ZX16(MEM16(esi + 0xC));
    edx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    ebx = ecx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = eax;
    if ((_fa == 0)) goto loc_0033F48C; /* je: equal / zero */

loc_0033F475: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 8));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F489u); RECOMP_ABI_CALL(0x00346EA0u, sub_00346EA0); /* call 0x00346EA0 */

loc_0033F489: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033F48C: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    ecx = ZX16(MEM16(esi + 0xC));
    edi = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0033F4AB; /* je: equal / zero */

loc_0033F498: ;
    esi = MEM32(ebp + 0xC);
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
    goto loc_0033F4BB;

loc_0033F4AB: ;
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

loc_0033F4BB: ;
    eax = ebx;
    POP32(esp, ebx);

loc_0033F4BE: ;
    POP32(esp, edi);

loc_0033F4BF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033F4C4
 * Original: 0x0033F4C4 - 0x0033F4D7 (19 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F4C4(void)
{

loc_0033F4C4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0033F4CDu); RECOMP_ABI_CALL(0x003513B6u, sub_003513B6); /* call 0x003513B6 */

loc_0033F4CD: ;
    edi = esi + 0x6C;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F4D7
 * Original: 0x0033F4D7 - 0x0033F513 (60 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F4D7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F4D7: ;
    _fa = (uint32_t)(MEM32(ecx + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x60), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033F4E1; /* jne: not equal / not zero */

loc_0033F4DD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033F510;

loc_0033F4E1: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0x10));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax + ecx + 0x58;
    SET_LO8(edx, MEM8(eax));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033F50C; /* je: equal / zero */

loc_0033F4FD: ;
    SET_LO8(ebx, 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ebx, ~LO8(ebx));
    SET_LO8(ebx, LO8(ebx) & LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(eax) = LO8(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0033F50E;

loc_0033F50C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033F50E: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0033F510: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033F513
 * Original: 0x0033F513 - 0x0033F532 (31 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F513(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F513: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    eax = SX16(LO16(eax));
    if (CMP_GE(_fas, _fbs)) goto loc_0033F524; /* jge: greater or equal (signed >=) */

loc_0033F522: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0033F524: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A98 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033F52F; /* jge: greater or equal (signed >=) */

loc_0033F52B: ;
    MEM16(ecx) = MEM16(ecx) & 0;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_0033F52F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033F532
 * Original: 0x0033F532 - 0x0033F593 (97 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F532(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F532: ;
    ecx = MEM32(esp + 4);
    eax = 0x1009;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0033F574; /* jg: greater (signed >) */

loc_0033F53F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0033F570; /* je: equal / zero */

loc_0033F541: ;
    eax = ecx;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0033F56C; /* je: equal / zero */

loc_0033F548: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033F568; /* je: equal / zero */

loc_0033F54B: ;
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0033F564; /* je: equal / zero */

loc_0033F550: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033F58F; /* jne: not equal / not zero */

loc_0033F553: ;
    SET_LO8(eax, 0xA);

loc_0033F555: ;
    ecx = MEM32(esp + 8);
    eax = ZX8(LO8(eax));
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033F561: ;
    esp += 12; return; /* ret 8 */

loc_0033F564: ;
    SET_LO8(eax, 9);
    goto loc_0033F555;

loc_0033F568: ;
    SET_LO8(eax, 6);
    goto loc_0033F555;

loc_0033F56C: ;
    SET_LO8(eax, 5);
    goto loc_0033F555;

loc_0033F570: ;
    SET_LO8(eax, 1);
    goto loc_0033F555;

loc_0033F574: ;
    eax = ecx;
    _fb = (uint32_t)(0x100A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x100A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0033F58B; /* je: equal / zero */

loc_0033F57D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033F587; /* je: equal / zero */

loc_0033F580: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033F58F; /* jne: not equal / not zero */

loc_0033F583: ;
    SET_LO8(eax, 4);
    goto loc_0033F555;

loc_0033F587: ;
    SET_LO8(eax, 3);
    goto loc_0033F555;

loc_0033F58B: ;
    SET_LO8(eax, 2);
    goto loc_0033F555;

loc_0033F58F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033F561;

}

/**
 * sub_0033F593
 * Original: 0x0033F593 - 0x0033F68C (249 bytes, 97 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033F593(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F593: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0033F5C0; /* jne: not equal / not zero */

loc_0033F5A7: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + 0x64)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x64), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F686; /* je: equal / zero */

loc_0033F5B3: ;
    MEM8(eax + 0x64) = 0;
    MEM8(eax + 0x68) = 1;
    goto loc_0033F686;

loc_0033F5C0: ;
    edx = eax + ebx;
    _fa = (uint32_t)(MEM8(edx + 0x64)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x64), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F5D1; /* je: equal / zero */

loc_0033F5C9: ;
    MEM8(edx + 0x64) = 1;
    MEM8(edx + 0x68) = 1;

loc_0033F5D1: ;
    ecx = MEM32(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x16);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0033F686; /* je: equal / zero */

loc_0033F5E3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    POP32(esp, ecx);
    edi = ebp + -24;
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
    eax = ebp + -10;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F5F9u); RECOMP_ABI_CALL(0x0033F513u, sub_0033F513); /* call 0x0033F513 */

loc_0033F5F9: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F604u); RECOMP_ABI_CALL(0x0033F513u, sub_0033F513); /* call 0x0033F513 */

loc_0033F604: ;
    eax = ebp + -6;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F60Fu); RECOMP_ABI_CALL(0x0033F513u, sub_0033F513); /* call 0x0033F513 */

loc_0033F60F: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F61Au); RECOMP_ABI_CALL(0x0033F513u, sub_0033F513); /* call 0x0033F513 */

loc_0033F61A: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, 9);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esi = ebp + -20;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) goto loc_0033F637; /* jne: not equal / not zero */

loc_0033F62D: ;
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    goto loc_0033F685;

loc_0033F637: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033F639: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(ebp + esi + -18)) & 0xFFu; _fb = (uint32_t)(0x1E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + esi + -18), 0x1E (8-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0033F663; /* jbe: below or equal (unsigned <=) */

loc_0033F64A: ;
    SET_LO8(ecx, MEM8(edx + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0033F656; /* jne: not equal / not zero */

loc_0033F651: ;
    MEM8(edx + 0x58) = MEM8(edx + 0x58) | LO8(eax);
    _fa = (uint32_t)(MEM8(edx + 0x58)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0033F65B;

loc_0033F656: ;
    SET_LO8(eax, ~LO8(eax));
    MEM8(edx + 0x58) = MEM8(edx + 0x58) & LO8(eax);
    _fa = (uint32_t)(MEM8(edx + 0x58)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0033F65B: ;
    SET_LO8(ecx, LO8(ecx) | MEM8(ebp + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edx + 0x5C) = LO8(ecx);
    goto loc_0033F66B;

loc_0033F663: ;
    SET_LO8(eax, ~LO8(eax));
    MEM8(edx + 0x5C) = MEM8(edx + 0x5C) & LO8(eax);
    _fa = (uint32_t)(MEM8(edx + 0x5C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(edx + 0x58) = MEM8(edx + 0x58) & LO8(eax);
    _fa = (uint32_t)(MEM8(edx + 0x58)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0033F66B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033F639; /* jb: below (unsigned <) */

loc_0033F671: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, 5);
    POP32(esp, ecx);
    esi = ebp + -24;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM32(ebx + 0x60) = 1;

loc_0033F685: ;
    POP32(esp, edi);

loc_0033F686: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033F68C
 * Original: 0x0033F68C - 0x0033F83D (433 bytes, 136 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033F68C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0033F68C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi + esi;
    _fa = (uint32_t)(MEM8(ebx + 0x68)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x68), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0033F6BC; /* je: equal / zero */

loc_0033F6A5: ;
    SET_LO8(eax, MEM8(ebx + 0x64));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    MEM8(ebx + 0x68) = LO8(ecx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0x102) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x102)) >> 32) & 1);
    eax = eax + 0x102;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;
    goto loc_0033F824;

loc_0033F6BC: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F6C5u); RECOMP_ABI_CALL(0x0033F4D7u, sub_0033F4D7); /* call 0x0033F4D7 */

loc_0033F6C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F6D5; /* je: equal / zero */

loc_0033F6C9: ;
    MEM32(ebp + -4) = 1;
    goto loc_0033F7C9;

loc_0033F6D5: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F6DFu); RECOMP_ABI_CALL(0x0033F4D7u, sub_0033F4D7); /* call 0x0033F4D7 */

loc_0033F6DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F6EF; /* je: equal / zero */

loc_0033F6E3: ;
    MEM32(ebp + -4) = 2;
    goto loc_0033F7C9;

loc_0033F6EF: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F6F9u); RECOMP_ABI_CALL(0x0033F4D7u, sub_0033F4D7); /* call 0x0033F4D7 */

loc_0033F6F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F709; /* je: equal / zero */

loc_0033F6FD: ;
    MEM32(ebp + -4) = 3;
    goto loc_0033F7C9;

loc_0033F709: ;
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F713u); RECOMP_ABI_CALL(0x0033F4D7u, sub_0033F4D7); /* call 0x0033F4D7 */

loc_0033F713: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F723; /* je: equal / zero */

loc_0033F717: ;
    MEM32(ebp + -4) = 4;
    goto loc_0033F7C9;

loc_0033F723: ;
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F72Du); RECOMP_ABI_CALL(0x0033F4D7u, sub_0033F4D7); /* call 0x0033F4D7 */

loc_0033F72D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F73D; /* je: equal / zero */

loc_0033F731: ;
    MEM32(ebp + -4) = 0xD;
    goto loc_0033F7C9;

loc_0033F73D: ;
    PUSH32(esp, 7);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F747u); RECOMP_ABI_CALL(0x0033F4D7u, sub_0033F4D7); /* call 0x0033F4D7 */

loc_0033F747: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F754; /* je: equal / zero */

loc_0033F74B: ;
    MEM32(ebp + -4) = 0xE;
    goto loc_0033F7C9;

loc_0033F754: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x16);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(ecx, MEM16(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0033F76D; /* je: equal / zero */

loc_0033F764: ;
    MEM32(ebp + -4) = 0x1009;
    goto loc_0033F7C9;

loc_0033F76D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0033F77B; /* je: equal / zero */

loc_0033F772: ;
    MEM32(ebp + -4) = 0x100A;
    goto loc_0033F7C9;

loc_0033F77B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0033F789; /* je: equal / zero */

loc_0033F780: ;
    MEM32(ebp + -4) = 0x100B;
    goto loc_0033F7C9;

loc_0033F789: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0033F797; /* je: equal / zero */

loc_0033F78E: ;
    MEM32(ebp + -4) = 0x100C;
    goto loc_0033F7C9;

loc_0033F797: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0033F6C9; /* jne: not equal / not zero */

loc_0033F7A0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0033F6E3; /* jne: not equal / not zero */

loc_0033F7A9: ;
    SET_LO16(eax, MEM16(eax + 0x10));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x3A98) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x3A98 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0033F7BC; /* jle: less or equal (signed <=) */

loc_0033F7B3: ;
    MEM32(ebp + -4) = 0x1005;
    goto loc_0033F7C9;

loc_0033F7BC: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xC568) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xC568 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0033F7C9; /* jge: greater or equal (signed >=) */

loc_0033F7C2: ;
    MEM32(ebp + -4) = 0x1006;

loc_0033F7C9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F7CEu); RECOMP_ABI_CALL(0x003513B6u, sub_003513B6); /* call 0x003513B6 */

loc_0033F7CE: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F824; /* je: equal / zero */

loc_0033F7D5: ;
    edx = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + edi * 4 + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + edi * 4 + 0x90) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0033F7ED; /* je: equal / zero */

loc_0033F7E0: ;
    MEM32(esi + edi * 4 + 0x6C) = eax;
    MEM8(ebx + 0x8C) = 1;
    goto loc_0033F824;

loc_0033F7ED: ;
    SET_LO8(edx, MEM8(ebx + 0x8C));
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFFFFED4u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x190)) >> 32) & 1);
    edx = edx + 0x190;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = edx;
    edx = eax;
    _fb = (uint32_t)(MEM32(esi + edi * 4 + 0x6C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(MEM32(esi + edi * 4 + 0x6C)));
    edx = edx - MEM32(esi + edi * 4 + 0x6C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0033F820; /* jb: below (unsigned <) */

loc_0033F813: ;
    MEM32(esi + edi * 4 + 0x6C) = eax;
    MEM8(ebx + 0x8C) = 0;
    goto loc_0033F824;

loc_0033F820: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033F824: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + edi * 4 + 0x90) = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033F83D
 * Original: 0x0033F83D - 0x0033F889 (76 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0033F83D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F83D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0033F858u); RECOMP_ABI_CALL(0x0033175Cu, sub_0033175C); /* call 0x0033175C */

loc_0033F858: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0033F884; /* jne: not equal / not zero */

loc_0033F863: ;
    PUSH32(esp, 0x0033F868u); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_0033F868: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0033F873; /* jg: greater (signed >) */

loc_0033F86C: ;
    PUSH32(esp, 0x0033F871u); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_0033F871: ;
    goto loc_0033F886;

loc_0033F873: ;
    PUSH32(esp, 0x0033F878u); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_0033F878: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0033F886;

loc_0033F884: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033F886: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033F889
 * Original: 0x0033F889 - 0x0033F8DD (84 bytes, 29 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033F889(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0033F889: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F8A5u); RECOMP_ABI_CALL(0x003328CDu, sub_003328CD); /* call 0x003328CD */

loc_0033F8A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0033F8CA; /* jne: not equal / not zero */

loc_0033F8A9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F8AEu); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_0033F8AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0033F8B9; /* jg: greater (signed >) */

loc_0033F8B2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F8B7u); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_0033F8B7: ;
    goto loc_0033F8D9;

loc_0033F8B9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F8BEu); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_0033F8BE: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0033F8D9;

loc_0033F8CA: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + 0x10)));
    eax = eax - MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x80004005u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033F8D9: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033F8DD
 * Original: 0x0033F8DD - 0x0033F912 (53 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F8DD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F8DD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033F90E; /* jne: not equal / not zero */

loc_0033F8E7: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F8FA; /* je: equal / zero */

loc_0033F8EE: ;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033F8F6u); RECOMP_ABI_CALL(0x0033F2D6u, sub_0033F2D6); /* call 0x0033F2D6 */

loc_0033F8F6: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033F8FA: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F90B; /* je: equal / zero */

loc_0033F901: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033F907u); RECOMP_ABI_CALL(0x00378E70u, sub_00378E70); /* call 0x00378E70 */

loc_0033F907: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033F90B: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033F90E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033F912
 * Original: 0x0033F912 - 0x0033F966 (84 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F912(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033F912: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F963; /* je: equal / zero */

loc_0033F91D: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0x10)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x10), LO16(ebx) (16-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C);
    if (CMP_BE(_fa, _fb)) goto loc_0033F942; /* jbe: below or equal (unsigned <=) */

loc_0033F92A: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F936; /* je: equal / zero */

loc_0033F92E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0033F936u); RECOMP_ABI_CALL(0x0033F8DDu, sub_0033F8DD); /* call 0x0033F8DD */

loc_0033F936: ;
    eax = ZX16(MEM16(esi + 0x10));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033F92A; /* jb: below (unsigned <) */

loc_0033F942: ;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 0x0033F94Cu); RECOMP_ABI_CALL(0x0033F2D6u, sub_0033F2D6); /* call 0x0033F2D6 */

loc_0033F94C: ;
    POP32(esp, edi);
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x28) = ebx;
    POP32(esp, ebp);

loc_0033F963: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0033F966
 * Original: 0x0033F966 - 0x0033F9A0 (58 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033F966(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F966: ;
    edx = ZX16(MEM16(ecx + 0x10));
    eax = MEM32(ecx + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033F98C; /* jbe: below or equal (unsigned <=) */

loc_0033F975: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F984; /* je: equal / zero */

loc_0033F97B: ;
    esi = ZX16(MEM16(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F996; /* je: equal / zero */

loc_0033F984: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033F975; /* jb: below (unsigned <) */

loc_0033F98C: ;
    eax = 0x80070490u;

loc_0033F991: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0033F996: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033F99Cu); RECOMP_ABI_CALL(0x0033F8DDu, sub_0033F8DD); /* call 0x0033F8DD */

loc_0033F99C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033F991;

}

/**
 * sub_0033F9A0
 * Original: 0x0033F9A0 - 0x0033FAE3 (323 bytes, 124 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033F9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033F9A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033F9CA; /* je: equal / zero */

loc_0033F9B3: ;
    eax = ZX16(MEM16(eax + 6));
    ecx = ecx + eax * 8;
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30525058) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x30525058 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0033F9D4; /* je: equal / zero */

loc_0033F9CA: ;
    eax = 0x8000FFFFu;
    goto loc_0033FADE;

loc_0033F9D4: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033F9E2u); RECOMP_ABI_CALL(0x0033F2C0u, sub_0033F2C0); /* call 0x0033F2C0 */

loc_0033F9E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0033F9F3; /* jne: not equal / not zero */

loc_0033F9E9: ;
    eax = 0x8007000Eu;
    goto loc_0033FADD;

loc_0033F9F3: ;
    ecx = esi;
    esi = MEM32(ebx + 4);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
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
    ecx = MEM32(ebx);
    edx = ZX16(MEM16(ecx + 6));
    edi = MEM32(ebp + -4);
    ecx = MEM32(ecx + 0xC);
    esi = MEM32(edi + 4);
    _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx + edx * 8;
    PUSH32(esp, 0x80);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(ebp + -8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FA2Eu); RECOMP_ABI_CALL(0x00378E30u, sub_00378E30); /* call 0x00378E30 */

loc_0033FA2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0033FA49; /* jne: not equal / not zero */

loc_0033FA35: ;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FA3Fu); RECOMP_ABI_CALL(0x0033F2D6u, sub_0033F2D6); /* call 0x0033F2D6 */

loc_0033FA3F: ;
    eax = 0x8007000Eu;
    goto loc_0033FADC;

loc_0033FA49: ;
    ecx = esi;
    esi = MEM32(edi + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
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
    esi = MEM32(ebp + -8);
    eax = MEM32(ebx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 6), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033FACA; /* jbe: below or equal (unsigned <=) */

loc_0033FA70: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(eax + edi * 8 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FABF; /* je: equal / zero */

loc_0033FA7C: ;
    _fa = (uint32_t)(MEM8(eax + edi * 8 + 3)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + edi * 8 + 3), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033FA93; /* je: equal / zero */

loc_0033FA83: ;
    edx = MEM32(ebx);
    edx = ZX16(MEM16(edx + 6));
    ecx = ecx + edx * 8 + 8;
    _fa = (uint32_t)(MEM32(ecx + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FABF; /* je: equal / zero */

loc_0033FA93: ;
    PUSH32(esp, MEM32(ebx + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FA9Cu); RECOMP_ABI_CALL(0x0036BE90u, sub_0036BE90); /* call 0x0036BE90 */

loc_0033FA9C: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FAA2u); RECOMP_ABI_CALL(0x0036BE00u, sub_0036BE00); /* call 0x0036BE00 */

loc_0033FAA2: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0033FABC; /* je: equal / zero */

loc_0033FAA7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033FABC; /* je: equal / zero */

loc_0033FAAA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033FABC; /* je: equal / zero */

loc_0033FAAD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033FAB7; /* je: equal / zero */

loc_0033FAB0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033FAB7; /* je: equal / zero */

loc_0033FAB3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033FABF; /* jne: not equal / not zero */

loc_0033FAB7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0033FABF;

loc_0033FABC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033FABF: ;
    eax = MEM32(ebx);
    eax = ZX16(MEM16(eax + 6));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033FA70; /* jb: below (unsigned <) */

loc_0033FACA: ;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebx + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FAD4u); RECOMP_ABI_CALL(0x0033F2D6u, sub_0033F2D6); /* call 0x0033F2D6 */

loc_0033FAD4: ;
    eax = MEM32(ebp + 8);
    MEM32(ebx + 4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033FADC: ;
    POP32(esp, edi);

loc_0033FADD: ;
    POP32(esp, esi);

loc_0033FADE: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033FAE3
 * Original: 0x0033FAE3 - 0x0033FB4F (108 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FAE3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033FAE3: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FAF9; /* je: equal / zero */

loc_0033FAEA: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FAF9; /* je: equal / zero */

loc_0033FAF0: ;
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FB2A; /* je: equal / zero */

loc_0033FAF9: ;
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx + 0x1C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 0x10)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x10), LO16(esi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033FB29; /* jbe: below or equal (unsigned <=) */

loc_0033FB09: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FB18; /* je: equal / zero */

loc_0033FB0F: ;
    edx = ZX16(MEM16(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FB26; /* je: equal / zero */

loc_0033FB18: ;
    edx = ZX16(MEM16(ecx + 0x10));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033FB09; /* jb: below (unsigned <) */

loc_0033FB24: ;
    goto loc_0033FB29;

loc_0033FB26: ;
    MEM32(ecx + 0x2C) = eax;

loc_0033FB29: ;
    POP32(esp, esi);

loc_0033FB2A: ;
    ecx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033FB35; /* jne: not equal / not zero */

loc_0033FB31: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033FB4C;

loc_0033FB35: ;
    eax = MEM32(ecx);
    edx = ZX16(MEM16(eax + 6));
    eax = MEM32(eax + 0xC);
    eax = eax + edx * 8;
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 8);
    eax = eax + ecx + 0xC;

loc_0033FB4C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033FB4F
 * Original: 0x0033FB4F - 0x0033FB83 (52 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FB4F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033FB4F: ;
    eax = MEM32(ecx);
    eax = ZX16(MEM16(eax + 6));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_0033FB6F; /* jbe: below or equal (unsigned <=) */

loc_0033FB5C: ;
    ecx = MEM32(ecx + 4);

loc_0033FB5F: ;
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FB75; /* je: equal / zero */

loc_0033FB67: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033FB5F; /* jb: below (unsigned <) */

loc_0033FB6F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033FB71: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0033FB75: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0033FB71;

}

/**
 * sub_0033FB83
 * Original: 0x0033FB83 - 0x0033FCA7 (292 bytes, 105 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033FB83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033FB83: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ZX16(MEM16(ebx + 0x10));
    eax = MEM32(ebx + 0x1C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_0033FBCE; /* jbe: below or equal (unsigned <=) */

loc_0033FB9C: ;
    edi = MEM32(ebp + 8);

loc_0033FB9F: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FBB9; /* je: equal / zero */

loc_0033FBA5: ;
    SET_LO16(edx, MEM16(edx));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(edi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033FBBF; /* jne: not equal / not zero */

loc_0033FBAD: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033FC9D;

loc_0033FBB9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033FBBF; /* jne: not equal / not zero */

loc_0033FBBD: ;
    esi = eax;

loc_0033FBBF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033FB9F; /* jb: below (unsigned <) */

loc_0033FBCA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033FC03; /* jne: not equal / not zero */

loc_0033FBCE: ;
    edi = 0x80004005u;

loc_0033FBD3: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FBE6; /* je: equal / zero */

loc_0033FBDA: ;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FBE2u); RECOMP_ABI_CALL(0x0033F2D6u, sub_0033F2D6); /* call 0x0033F2D6 */

loc_0033FBE2: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033FBE6: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FBF7; /* je: equal / zero */

loc_0033FBED: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FBF3u); RECOMP_ABI_CALL(0x00378E70u, sub_00378E70); /* call 0x00378E70 */

loc_0033FBF3: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033FBF7: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033FBFA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_0033FC03: ;
    PUSH32(esp, 2);
    MEM32(esi) = edi;
    PUSH32(esp, MEM32(edi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FC0Fu); RECOMP_ABI_CALL(0x0033F2C0u, sub_0033F2C0); /* call 0x0033F2C0 */

loc_0033FC0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0033FC1D; /* jne: not equal / not zero */

loc_0033FC16: ;
    edi = 0x8007000Eu;
    goto loc_0033FBD3;

loc_0033FC1D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FC2Cu); RECOMP_ABI_CALL(0x00332B14u, sub_00332B14); /* call 0x00332B14 */

loc_0033FC2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033FC58; /* jne: not equal / not zero */

loc_0033FC31: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FC36u); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_0033FC36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0033FC43; /* jg: greater (signed >) */

loc_0033FC3A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FC3Fu); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_0033FC3F: ;
    edi = eax;
    goto loc_0033FC95;

loc_0033FC43: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FC48u); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_0033FC48: ;
    edi = eax;
    edi = edi & 0xFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | 0x80070000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0033FC95;

loc_0033FC58: ;
    PUSH32(esp, MEM32(edi + 0x10));
    ecx = ebx;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FC68u); RECOMP_ABI_CALL(0x0033F889u, sub_0033F889); /* call 0x0033F889 */

loc_0033FC68: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FBD3; /* jl: less (signed <) */

loc_0033FC72: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FC8C; /* je: equal / zero */

loc_0033FC7A: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FC82u); RECOMP_ABI_CALL(0x0033F9A0u, sub_0033F9A0); /* call 0x0033F9A0 */

loc_0033FC82: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FBD3; /* jl: less (signed <) */

loc_0033FC8C: ;
    MEM32(esi + 0xC) = 1;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033FC95: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FBD3; /* jl: less (signed <) */

loc_0033FC9D: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = esi;
    goto loc_0033FBFA;

}

/**
 * sub_0033FCA7
 * Original: 0x0033FCA7 - 0x0033FCE3 (60 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033FCA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033FCA7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FCC4; /* je: equal / zero */

loc_0033FCB2: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FCC0u); RECOMP_ABI_CALL(0x0033FB4Fu, sub_0033FB4F); /* call 0x0033FB4F */

loc_0033FCC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033FCC8; /* jne: not equal / not zero */

loc_0033FCC4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033FCDE;

loc_0033FCC8: ;
    eax = MEM32(esi);
    ecx = ZX16(MEM16(eax + 6));
    eax = MEM32(eax + 0xC);
    eax = eax + ecx * 8;
    _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 8);
    eax = eax + ecx + 0xC;

loc_0033FCDE: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033FCE3
 * Original: 0x0033FCE3 - 0x0033FD18 (53 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033FCE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033FCE3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FD00; /* je: equal / zero */

loc_0033FCEE: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FCFCu); RECOMP_ABI_CALL(0x0033FB4Fu, sub_0033FB4F); /* call 0x0033FB4F */

loc_0033FCFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033FD04; /* jne: not equal / not zero */

loc_0033FD00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033FD13;

loc_0033FD04: ;
    eax = MEM32(esi);
    eax = ZX16(MEM16(eax + 6));
    ecx = MEM32(esi + 4);
    eax = ecx + eax * 8;
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033FD13: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033FD18
 * Original: 0x0033FD18 - 0x0033FD4D (53 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033FD18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033FD18: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FD35; /* je: equal / zero */

loc_0033FD23: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FD31u); RECOMP_ABI_CALL(0x0033FB4Fu, sub_0033FB4F); /* call 0x0033FB4F */

loc_0033FD31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033FD39; /* jne: not equal / not zero */

loc_0033FD35: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033FD48;

loc_0033FD39: ;
    eax = MEM32(esi);
    eax = ZX16(MEM16(eax + 6));
    ecx = MEM32(esi + 4);
    eax = ecx + eax * 8;
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033FD48: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033FD33
 * Original: 0x0033FD33 - 0x0033FD4D (26 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FD33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033FD33: ;
    if (_flags /* jne: not equal / not zero */) goto loc_0033FD39;

loc_0033FD35: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033FD48;

loc_0033FD39: ;
    eax = MEM32(esi);
    eax = ZX16(MEM16(eax + 6));
    ecx = MEM32(esi + 4);
    eax = ecx + eax * 8;
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033FD48: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033FD4D
 * Original: 0x0033FD4D - 0x0033FDE5 (152 bytes, 63 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033FD4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033FD4D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FD68; /* je: equal / zero */

loc_0033FD5A: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FD68; /* je: equal / zero */

loc_0033FD60: ;
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FD96; /* je: equal / zero */

loc_0033FD68: ;
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x1C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0x10)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x10), LO16(edx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0033FD96; /* jbe: below or equal (unsigned <=) */

loc_0033FD77: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FD85; /* je: equal / zero */

loc_0033FD7D: ;
    ecx = ZX16(MEM16(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FD93; /* je: equal / zero */

loc_0033FD85: ;
    ecx = ZX16(MEM16(esi + 0x10));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033FD77; /* jb: below (unsigned <) */

loc_0033FD91: ;
    goto loc_0033FD96;

loc_0033FD93: ;
    MEM32(esi + 0x2C) = eax;

loc_0033FD96: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FDAD; /* je: equal / zero */

loc_0033FD9D: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FDA9u); RECOMP_ABI_CALL(0x0033FB4Fu, sub_0033FB4F); /* call 0x0033FB4F */

loc_0033FDA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033FDB1; /* jne: not equal / not zero */

loc_0033FDAD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033FDE0;

loc_0033FDB1: ;
    _fa = (uint32_t)(MEM8(ebp + 0xF)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xF), 0xC0 (8-bit) */
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0033FDC7; /* jne: not equal / not zero */

loc_0033FDBF: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0033FDDD;

loc_0033FDC7: ;
    esi = MEM32(esi + 0x2C);
    ecx = MEM32(esi);
    ecx = ZX16(MEM16(ecx + 6));
    edx = MEM32(esi + 4);
    ecx = edx + ecx * 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;

loc_0033FDDD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033FDE0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0033FDE5
 * Original: 0x0033FDE5 - 0x0033FF35 (336 bytes, 121 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033FDE5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033FDE5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    PUSH32(esp, 0x80);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FE03u); RECOMP_ABI_CALL(0x00340070u, sub_00340070); /* call 0x00340070 */

loc_0033FE03: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0xB0) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FE17u); RECOMP_ABI_CALL(0x0033F83Du, sub_0033F83D); /* call 0x0033F83D */

loc_0033FE17: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FF14; /* jl: less (signed <) */

loc_0033FE21: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FE2Eu); RECOMP_ABI_CALL(0x0033F889u, sub_0033F889); /* call 0x0033F889 */

loc_0033FE2E: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FF14; /* jl: less (signed <) */

loc_0033FE38: ;
    eax = ZX16(MEM16(esi + 6));
    PUSH32(esp, edi);
    edi = eax + eax * 4;
    eax = ZX16(MEM16(esi + 0x10));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 2);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FE54u); RECOMP_ABI_CALL(0x0033F2C0u, sub_0033F2C0); /* call 0x0033F2C0 */

loc_0033FE54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0033FE65; /* jne: not equal / not zero */

loc_0033FE5B: ;
    ebx = 0x8007000Eu;
    goto loc_0033FF13;

loc_0033FE65: ;
    PUSH32(esp, edi);
    ecx = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(esi + 0x1C) = ecx;
    ecx = esi;
    MEM32(esi + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FE7Au); RECOMP_ABI_CALL(0x0033F889u, sub_0033F889); /* call 0x0033F889 */

loc_0033FE7A: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FF13; /* jl: less (signed <) */

loc_0033FE84: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0033FE88: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033FE9A; /* jne: not equal / not zero */

loc_0033FE8F: ;
    eax = MEM32(esi + 0xB0);
    MEM32(ebp + -8) = eax;
    goto loc_0033FE9D;

loc_0033FE9A: ;
    MEM32(ebp + -8) = edx;

loc_0033FE9D: ;
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 6), LO16(edx) (16-bit) */
    edi = MEM32(esi + 0x18);
    MEM32(ebp + 0xC) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0033FF06; /* jbe: below or equal (unsigned <=) */

loc_0033FEA9: ;
    goto loc_0033FEAD;

loc_0033FEAB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033FEAD: ;
    eax = ZX16(MEM16(edi + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033FEF7; /* jne: not equal / not zero */

loc_0033FEB6: ;
    SET_LO16(ecx, MEM16(edi + 4));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033FED7; /* jne: not equal / not zero */

loc_0033FEC0: ;
    eax = esi + 0x20;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033FED7; /* jne: not equal / not zero */

loc_0033FEC7: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FED3u); RECOMP_ABI_CALL(0x0033FB83u, sub_0033FB83); /* call 0x0033FB83 */

loc_0033FED3: ;
    ebx = eax;
    goto loc_0033FEF3;

loc_0033FED7: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033FEE4; /* jne: not equal / not zero */

loc_0033FEDD: ;
    eax = esi + 0x24;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FEC7; /* je: equal / zero */

loc_0033FEE4: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 3 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033FEF1; /* jne: not equal / not zero */

loc_0033FEEA: ;
    eax = esi + 0x28;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FEC7; /* je: equal / zero */

loc_0033FEF1: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033FEF3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FF13; /* jl: less (signed <) */

loc_0033FEF7: ;
    eax = ZX16(MEM16(esi + 6));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033FEAB; /* jb: below (unsigned <) */

loc_0033FF06: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033FE88; /* jb: below (unsigned <) */

loc_0033FF13: ;
    POP32(esp, edi);

loc_0033FF14: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FF22; /* je: equal / zero */

loc_0033FF1A: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FF22u); RECOMP_ABI_CALL(0x00331BE8u, sub_00331BE8); /* call 0x00331BE8 */

loc_0033FF22: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033FF2D; /* jge: greater or equal (signed >=) */

loc_0033FF26: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FF2Du); RECOMP_ABI_CALL(0x0033F912u, sub_0033F912); /* call 0x0033F912 */

loc_0033FF2D: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033FF35
 * Original: 0x0033FF35 - 0x0033FFCF (154 bytes, 60 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033FF35(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033FF35: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FF4Cu); RECOMP_ABI_CALL(0x0033F83Du, sub_0033F83D); /* call 0x0033F83D */

loc_0033FF4C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033FFB9; /* jl: less (signed <) */

loc_0033FF52: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(esi + 0x18);
    ecx = ZX16(MEM16(esi + 6));
    MEM32(ebp + -16) = 0x80070490u;
    PUSH32(esp, ebx);

loc_0033FF65: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033FF77; /* jne: not equal / not zero */

loc_0033FF6C: ;
    eax = MEM32(esi + 0xB0);
    MEM32(ebp + -12) = eax;
    goto loc_0033FF7A;

loc_0033FF77: ;
    MEM32(ebp + -12) = edi;

loc_0033FF7A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    eax = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0033FF99; /* jbe: below or equal (unsigned <=) */

loc_0033FF80: ;
    ebx = ZX16(MEM16(eax));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033FF91; /* jne: not equal / not zero */

loc_0033FF88: ;
    ebx = ZX16(MEM16(eax + 2));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -12) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FFA7; /* je: equal / zero */

loc_0033FF91: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033FF80; /* jb: below (unsigned <) */

loc_0033FF99: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0033FF65; /* jb: below (unsigned <) */

loc_0033FFA2: ;
    edi = MEM32(ebp + -16);
    goto loc_0033FFB8;

loc_0033FFA7: ;
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -8));
    ecx = esi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FFB6u); RECOMP_ABI_CALL(0x0033FB83u, sub_0033FB83); /* call 0x0033FB83 */

loc_0033FFB6: ;
    edi = eax;

loc_0033FFB8: ;
    POP32(esp, ebx);

loc_0033FFB9: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033FFC7; /* je: equal / zero */

loc_0033FFBF: ;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033FFC7u); RECOMP_ABI_CALL(0x00331BE8u, sub_00331BE8); /* call 0x00331BE8 */

loc_0033FFC7: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033FFCF
 * Original: 0x0033FFCF - 0x00340017 (72 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033FFCF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0033FFCF: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180BC); PUSH32(esp, 0x0033FFD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033FFD1u); } /* indirect call */
    }

loc_0033FFD7: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x445C34)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x445C34), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ebx, LO8(eax));
    if (CMP_NE(_fa, _fb)) goto loc_0033FFF9; /* jne: not equal / not zero */

loc_0033FFE3: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    _fa = (uint32_t)(MEM32(eax + 0x24C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24C), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0033FFF9; /* jne: not equal / not zero */

loc_0033FFF1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x418244); PUSH32(esp, 0x0033FFF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033FFF3u); } /* indirect call */
    }

loc_0033FFF9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x418240); PUSH32(esp, 0x00340000u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033FFFAu); } /* indirect call */
    }

loc_00340000: ;
    SET_LO8(ecx, LO8(ebx));
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x4180B8); PUSH32(esp, 0x0034000Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00340004u); } /* indirect call */
    }

loc_0034000A: ;
    eax = esi;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00340017
 * Original: 0x00340017 - 0x00340031 (26 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340017(void)
{

loc_00340017: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0034002Eu); RECOMP_ABI_CALL(0x00351233u, sub_00351233); /* call 0x00351233 */

loc_0034002E: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00340029
 * Original: 0x00340029 - 0x00340031 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340029(void)
{

loc_00340029: ;
    PUSH32(esp, 0x0034002Eu); RECOMP_ABI_CALL(0x00351233u, sub_00351233); /* call 0x00351233 */

loc_0034002E: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00340031
 * Original: 0x00340031 - 0x0034004D (28 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340031(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00340031: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034004Au); RECOMP_ABI_CALL(0x003512EEu, sub_003512EE); /* call 0x003512EE */

loc_0034004A: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00340033
 * Original: 0x00340033 - 0x0034004D (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340033(void)
{

loc_00340033: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034004Au); RECOMP_ABI_CALL(0x003512EEu, sub_003512EE); /* call 0x003512EE */

loc_0034004A: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0034004D
 * Original: 0x0034004D - 0x00340070 (35 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034004D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034004D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340062u); RECOMP_ABI_CALL(0x00347A5Fu, sub_00347A5F); /* call 0x00347A5F */

loc_00340062: ;
    MEM16(edi + esi * 2 + -2) = MEM16(edi + esi * 2 + -2) & 0;
    _fa = (uint32_t)(MEM16(edi + esi * 2 + -2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00340070
 * Original: 0x00340070 - 0x00340092 (34 bytes, 13 insns)
 * Category: crt
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00340070: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340085u); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_00340085: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + esi + -1) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00340092
 * Original: 0x00340092 - 0x003400BA (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00340092(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00340092: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003400B5; /* jbe: below or equal (unsigned <=) */

loc_0034009B: ;
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003400ADu); RECOMP_ABI_CALL(0x00348229u, sub_00348229); /* call 0x00348229 */

loc_003400AD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003400B8; /* jne: not equal / not zero */

loc_003400B5: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003400B8: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003400BA
 * Original: 0x003400BA - 0x0034031E (612 bytes, 179 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003400BA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003400BA: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_003400CE; /* jne: not equal / not zero */

loc_003400C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003400E2; /* jl: less (signed <) */

loc_003400CE: ;
    ecx = eax * 4 + 0x37B3B0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00340318; /* je: equal / zero */

loc_003400DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00340101; /* jge: greater or equal (signed >=) */

loc_003400E2: ;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esi + 0x41F200);
    edx = edi;
    PUSH32(esp, 0x003400F5u); RECOMP_ABI_CALL(0x0036CB70u, sub_0036CB70); /* call 0x0036CB70 */

loc_003400F5: ;
    MEM32(esi + 0x37B3B0) = edi;
    POP32(esp, esi);
    goto loc_00340318;

loc_00340101: ;
    edx = 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0034011E; /* jge: greater or equal (signed >=) */

loc_0034010A: ;
    eax = MEM32(eax * 4 + 0x41EFE0);
    MEM32(0x37B1A8) = MEM32(0x37B1A8) | eax;
    _fa = (uint32_t)(MEM32(0x37B1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = edi;
    goto loc_00340318;

loc_0034011E: ;
    if (CMP_NE(_fa, _fb)) goto loc_0034012B; /* jne: not equal / not zero */

loc_00340120: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340126u); RECOMP_ABI_CALL(0x0036CB40u, sub_0036CB40); /* call 0x0036CB40 */

loc_00340126: ;
    goto loc_00340318;

loc_0034012B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034013D; /* jne: not equal / not zero */

loc_00340132: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340138u); RECOMP_ABI_CALL(0x0036D390u, sub_0036D390); /* call 0x0036D390 */

loc_00340138: ;
    goto loc_00340318;

loc_0034013D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034014F; /* jne: not equal / not zero */

loc_00340144: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0034014Au); RECOMP_ABI_CALL(0x0036CEF0u, sub_0036CEF0); /* call 0x0036CEF0 */

loc_0034014A: ;
    goto loc_00340318;

loc_0034014F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340161; /* jne: not equal / not zero */

loc_00340156: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0034015Cu); RECOMP_ABI_CALL(0x0036D260u, sub_0036D260); /* call 0x0036D260 */

loc_0034015C: ;
    goto loc_00340318;

loc_00340161: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340173; /* jne: not equal / not zero */

loc_00340168: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0034016Eu); RECOMP_ABI_CALL(0x0036D2B0u, sub_0036D2B0); /* call 0x0036D2B0 */

loc_0034016E: ;
    goto loc_00340318;

loc_00340173: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340185; /* jne: not equal / not zero */

loc_0034017A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340180u); RECOMP_ABI_CALL(0x0036D310u, sub_0036D310); /* call 0x0036D310 */

loc_00340180: ;
    goto loc_00340318;

loc_00340185: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340197; /* jne: not equal / not zero */

loc_0034018C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340192u); RECOMP_ABI_CALL(0x0036CFF0u, sub_0036CFF0); /* call 0x0036CFF0 */

loc_00340192: ;
    goto loc_00340318;

loc_00340197: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003401A9; /* jne: not equal / not zero */

loc_0034019E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003401A4u); RECOMP_ABI_CALL(0x0036DDC0u, sub_0036DDC0); /* call 0x0036DDC0 */

loc_003401A4: ;
    goto loc_00340318;

loc_003401A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003401BB; /* jne: not equal / not zero */

loc_003401B0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003401B6u); RECOMP_ABI_CALL(0x0036DE50u, sub_0036DE50); /* call 0x0036DE50 */

loc_003401B6: ;
    goto loc_00340318;

loc_003401BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x91 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003401CD; /* jne: not equal / not zero */

loc_003401C2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003401C8u); RECOMP_ABI_CALL(0x0036DEE0u, sub_0036DEE0); /* call 0x0036DEE0 */

loc_003401C8: ;
    goto loc_00340318;

loc_003401CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x93 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003401DF; /* jne: not equal / not zero */

loc_003401D4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003401DAu); RECOMP_ABI_CALL(0x0036CF40u, sub_0036CF40); /* call 0x0036CF40 */

loc_003401DA: ;
    goto loc_00340318;

loc_003401DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003401F1; /* jne: not equal / not zero */

loc_003401E6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003401ECu); RECOMP_ABI_CALL(0x0036CFB0u, sub_0036CFB0); /* call 0x0036CFB0 */

loc_003401EC: ;
    goto loc_00340318;

loc_003401F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340203; /* jne: not equal / not zero */

loc_003401F8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003401FEu); RECOMP_ABI_CALL(0x0036D030u, sub_0036D030); /* call 0x0036D030 */

loc_003401FE: ;
    goto loc_00340318;

loc_00340203: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340215; /* jne: not equal / not zero */

loc_0034020A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340210u); RECOMP_ABI_CALL(0x0036D180u, sub_0036D180); /* call 0x0036D180 */

loc_00340210: ;
    goto loc_00340318;

loc_00340215: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340227; /* jne: not equal / not zero */

loc_0034021C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340222u); RECOMP_ABI_CALL(0x0036D200u, sub_0036D200); /* call 0x0036D200 */

loc_00340222: ;
    goto loc_00340318;

loc_00340227: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x97 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340239; /* jne: not equal / not zero */

loc_0034022E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340234u); RECOMP_ABI_CALL(0x0036CE70u, sub_0036CE70); /* call 0x0036CE70 */

loc_00340234: ;
    goto loc_00340318;

loc_00340239: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034024B; /* jne: not equal / not zero */

loc_00340240: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340246u); RECOMP_ABI_CALL(0x0036E120u, sub_0036E120); /* call 0x0036E120 */

loc_00340246: ;
    goto loc_00340318;

loc_0034024B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034025D; /* jne: not equal / not zero */

loc_00340252: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340258u); RECOMP_ABI_CALL(0x0036E1A0u, sub_0036E1A0); /* call 0x0036E1A0 */

loc_00340258: ;
    goto loc_00340318;

loc_0034025D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034026F; /* jne: not equal / not zero */

loc_00340264: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0034026Au); RECOMP_ABI_CALL(0x0036E0C0u, sub_0036E0C0); /* call 0x0036E0C0 */

loc_0034026A: ;
    goto loc_00340318;

loc_0034026F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340281; /* jne: not equal / not zero */

loc_00340276: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0034027Cu); RECOMP_ABI_CALL(0x0036E0F0u, sub_0036E0F0); /* call 0x0036E0F0 */

loc_0034027C: ;
    goto loc_00340318;

loc_00340281: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340293; /* jne: not equal / not zero */

loc_00340288: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0034028Eu); RECOMP_ABI_CALL(0x0036CEB0u, sub_0036CEB0); /* call 0x0036CEB0 */

loc_0034028E: ;
    goto loc_00340318;

loc_00340293: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003402A2; /* jne: not equal / not zero */

loc_0034029A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003402A0u); RECOMP_ABI_CALL(0x0036D090u, sub_0036D090); /* call 0x0036D090 */

loc_003402A0: ;
    goto loc_00340318;

loc_003402A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003402B1; /* jne: not equal / not zero */

loc_003402A9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003402AFu); RECOMP_ABI_CALL(0x0036E1F0u, sub_0036E1F0); /* call 0x0036E1F0 */

loc_003402AF: ;
    goto loc_00340318;

loc_003402B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003402C0; /* jne: not equal / not zero */

loc_003402B8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003402BEu); RECOMP_ABI_CALL(0x0036D100u, sub_0036D100); /* call 0x0036D100 */

loc_003402BE: ;
    goto loc_00340318;

loc_003402C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003402CF; /* jne: not equal / not zero */

loc_003402C7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003402CDu); RECOMP_ABI_CALL(0x0036DF50u, sub_0036DF50); /* call 0x0036DF50 */

loc_003402CD: ;
    goto loc_00340318;

loc_003402CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003402DE; /* jne: not equal / not zero */

loc_003402D6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003402DCu); RECOMP_ABI_CALL(0x0036DF80u, sub_0036DF80); /* call 0x0036DF80 */

loc_003402DC: ;
    goto loc_00340318;

loc_003402DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003402ED; /* jne: not equal / not zero */

loc_003402E5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003402EBu); RECOMP_ABI_CALL(0x0036DFF0u, sub_0036DFF0); /* call 0x0036DFF0 */

loc_003402EB: ;
    goto loc_00340318;

loc_003402ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003402FC; /* jne: not equal / not zero */

loc_003402F4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003402FAu); RECOMP_ABI_CALL(0x0036E060u, sub_0036E060); /* call 0x0036E060 */

loc_003402FA: ;
    goto loc_00340318;

loc_003402FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034030B; /* jne: not equal / not zero */

loc_00340303: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340309u); RECOMP_ABI_CALL(0x0036E080u, sub_0036E080); /* call 0x0036E080 */

loc_00340309: ;
    goto loc_00340318;

loc_0034030B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340318; /* jne: not equal / not zero */

loc_00340312: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340318u); RECOMP_ABI_CALL(0x0036E0A0u, sub_0036E0A0); /* call 0x0036E0A0 */

loc_00340318: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00340138
 * Original: 0x00340138 - 0x0034031E (486 bytes, 143 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00340138(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00340138: ;
    goto loc_00340318;

    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034014F; /* jne: not equal / not zero */

loc_00340144: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0034014Au); RECOMP_ABI_CALL(0x0036CEF0u, sub_0036CEF0); /* call 0x0036CEF0 */

loc_0034014A: ;
    goto loc_00340318;

loc_0034014F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340161; /* jne: not equal / not zero */

loc_00340156: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0034015Cu); RECOMP_ABI_CALL(0x0036D260u, sub_0036D260); /* call 0x0036D260 */

loc_0034015C: ;
    goto loc_00340318;

loc_00340161: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340173; /* jne: not equal / not zero */

loc_00340168: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0034016Eu); RECOMP_ABI_CALL(0x0036D2B0u, sub_0036D2B0); /* call 0x0036D2B0 */

loc_0034016E: ;
    goto loc_00340318;

loc_00340173: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340185; /* jne: not equal / not zero */

loc_0034017A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340180u); RECOMP_ABI_CALL(0x0036D310u, sub_0036D310); /* call 0x0036D310 */

loc_00340180: ;
    goto loc_00340318;

loc_00340185: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340197; /* jne: not equal / not zero */

loc_0034018C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340192u); RECOMP_ABI_CALL(0x0036CFF0u, sub_0036CFF0); /* call 0x0036CFF0 */

loc_00340192: ;
    goto loc_00340318;

loc_00340197: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003401A9; /* jne: not equal / not zero */

loc_0034019E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003401A4u); RECOMP_ABI_CALL(0x0036DDC0u, sub_0036DDC0); /* call 0x0036DDC0 */

loc_003401A4: ;
    goto loc_00340318;

loc_003401A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003401BB; /* jne: not equal / not zero */

loc_003401B0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003401B6u); RECOMP_ABI_CALL(0x0036DE50u, sub_0036DE50); /* call 0x0036DE50 */

loc_003401B6: ;
    goto loc_00340318;

loc_003401BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x91 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003401CD; /* jne: not equal / not zero */

loc_003401C2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003401C8u); RECOMP_ABI_CALL(0x0036DEE0u, sub_0036DEE0); /* call 0x0036DEE0 */

loc_003401C8: ;
    goto loc_00340318;

loc_003401CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x93 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003401DF; /* jne: not equal / not zero */

loc_003401D4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003401DAu); RECOMP_ABI_CALL(0x0036CF40u, sub_0036CF40); /* call 0x0036CF40 */

loc_003401DA: ;
    goto loc_00340318;

loc_003401DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003401F1; /* jne: not equal / not zero */

loc_003401E6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003401ECu); RECOMP_ABI_CALL(0x0036CFB0u, sub_0036CFB0); /* call 0x0036CFB0 */

loc_003401EC: ;
    goto loc_00340318;

loc_003401F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340203; /* jne: not equal / not zero */

loc_003401F8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003401FEu); RECOMP_ABI_CALL(0x0036D030u, sub_0036D030); /* call 0x0036D030 */

loc_003401FE: ;
    goto loc_00340318;

loc_00340203: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340215; /* jne: not equal / not zero */

loc_0034020A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340210u); RECOMP_ABI_CALL(0x0036D180u, sub_0036D180); /* call 0x0036D180 */

loc_00340210: ;
    goto loc_00340318;

loc_00340215: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340227; /* jne: not equal / not zero */

loc_0034021C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340222u); RECOMP_ABI_CALL(0x0036D200u, sub_0036D200); /* call 0x0036D200 */

loc_00340222: ;
    goto loc_00340318;

loc_00340227: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x97 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340239; /* jne: not equal / not zero */

loc_0034022E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340234u); RECOMP_ABI_CALL(0x0036CE70u, sub_0036CE70); /* call 0x0036CE70 */

loc_00340234: ;
    goto loc_00340318;

loc_00340239: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034024B; /* jne: not equal / not zero */

loc_00340240: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340246u); RECOMP_ABI_CALL(0x0036E120u, sub_0036E120); /* call 0x0036E120 */

loc_00340246: ;
    goto loc_00340318;

loc_0034024B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034025D; /* jne: not equal / not zero */

loc_00340252: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340258u); RECOMP_ABI_CALL(0x0036E1A0u, sub_0036E1A0); /* call 0x0036E1A0 */

loc_00340258: ;
    goto loc_00340318;

loc_0034025D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034026F; /* jne: not equal / not zero */

loc_00340264: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0034026Au); RECOMP_ABI_CALL(0x0036E0C0u, sub_0036E0C0); /* call 0x0036E0C0 */

loc_0034026A: ;
    goto loc_00340318;

loc_0034026F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340281; /* jne: not equal / not zero */

loc_00340276: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0034027Cu); RECOMP_ABI_CALL(0x0036E0F0u, sub_0036E0F0); /* call 0x0036E0F0 */

loc_0034027C: ;
    goto loc_00340318;

loc_00340281: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340293; /* jne: not equal / not zero */

loc_00340288: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0034028Eu); RECOMP_ABI_CALL(0x0036CEB0u, sub_0036CEB0); /* call 0x0036CEB0 */

loc_0034028E: ;
    goto loc_00340318;

loc_00340293: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003402A2; /* jne: not equal / not zero */

loc_0034029A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003402A0u); RECOMP_ABI_CALL(0x0036D090u, sub_0036D090); /* call 0x0036D090 */

loc_003402A0: ;
    goto loc_00340318;

loc_003402A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003402B1; /* jne: not equal / not zero */

loc_003402A9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003402AFu); RECOMP_ABI_CALL(0x0036E1F0u, sub_0036E1F0); /* call 0x0036E1F0 */

loc_003402AF: ;
    goto loc_00340318;

loc_003402B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003402C0; /* jne: not equal / not zero */

loc_003402B8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003402BEu); RECOMP_ABI_CALL(0x0036D100u, sub_0036D100); /* call 0x0036D100 */

loc_003402BE: ;
    goto loc_00340318;

loc_003402C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003402CF; /* jne: not equal / not zero */

loc_003402C7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003402CDu); RECOMP_ABI_CALL(0x0036DF50u, sub_0036DF50); /* call 0x0036DF50 */

loc_003402CD: ;
    goto loc_00340318;

loc_003402CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003402DE; /* jne: not equal / not zero */

loc_003402D6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003402DCu); RECOMP_ABI_CALL(0x0036DF80u, sub_0036DF80); /* call 0x0036DF80 */

loc_003402DC: ;
    goto loc_00340318;

loc_003402DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003402ED; /* jne: not equal / not zero */

loc_003402E5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003402EBu); RECOMP_ABI_CALL(0x0036DFF0u, sub_0036DFF0); /* call 0x0036DFF0 */

loc_003402EB: ;
    goto loc_00340318;

loc_003402ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003402FC; /* jne: not equal / not zero */

loc_003402F4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003402FAu); RECOMP_ABI_CALL(0x0036E060u, sub_0036E060); /* call 0x0036E060 */

loc_003402FA: ;
    goto loc_00340318;

loc_003402FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034030B; /* jne: not equal / not zero */

loc_00340303: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340309u); RECOMP_ABI_CALL(0x0036E080u, sub_0036E080); /* call 0x0036E080 */

loc_00340309: ;
    goto loc_00340318;

loc_0034030B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00340318; /* jne: not equal / not zero */

loc_00340312: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00340318u); RECOMP_ABI_CALL(0x0036E0A0u, sub_0036E0A0); /* call 0x0036E0A0 */

loc_00340318: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}
