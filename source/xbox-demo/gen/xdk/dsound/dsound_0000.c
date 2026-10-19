/**
 * PoP SoT xbox-demo - xdk/dsound, chunk 0
 * DirectSound for the MCPX (DSOUND section)
 * Functions: 250 (0x002E9F00 - 0x002EF0A6)
 */

#define RECOMP_GENERATED_CODE
#include "../../recomp_funcs.h"
#include <math.h>

/**
 * sub_002E9F00
 * Original: 0x002E9F00 - 0x002E9F1F (31 bytes, 12 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9F00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E9F1C; /* je: equal / zero */

loc_002E9F0A: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;

loc_002E9F1C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002E9F1F
 * Original: 0x002E9F1F - 0x002E9F30 (17 bytes, 5 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9F1F(void)
{

loc_002E9F1F: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x626F5344);
    PUSH32(esp, 0x002E9F2Fu); RECOMP_ABI_CALL(0x002ECADEu, sub_002ECADE); /* call 0x002ECADE */

loc_002E9F2F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002E9F30
 * Original: 0x002E9F30 - 0x002E9F52 (34 bytes, 13 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9F30(void)
{
    extern void sub_002E9F30_enter(void);
    sub_002E9F30_enter();
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002E9F30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    SET_LO8(ecx, 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esi + 4) = eax;
    if ((_fa == 0)) goto loc_002E9F50; /* je: equal / zero */

loc_002E9F48: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C898); PUSH32(esp, 0x002E9F4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9F48u); } /* indirect call */
    }

loc_002E9F4E: ;
    MEM8(esi) = LO8(eax);

loc_002E9F50: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E9F52
 * Original: 0x002E9F52 - 0x002E9F69 (23 bytes, 9 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9F52(void)
{
    extern void sub_002E9F52_enter(void);
    sub_002E9F52_enter();
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9F52: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E9F67; /* je: equal / zero */

loc_002E9F5B: ;
    SET_LO8(ecx, MEM8(esi));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x002E9F63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9F5Du); } /* indirect call */
    }

loc_002E9F63: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002E9F67: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E9F69
 * Original: 0x002E9F69 - 0x002E9F8E (37 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9F69(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9F69: ;
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E9F8D; /* je: equal / zero */

loc_002E9F73: ;
    eax = MEM32(0x3063E0);
    MEM32(0x3063E0) = MEM32(0x3063E0) + 1;
    _fa = (uint32_t)(MEM32(0x3063E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E9F8D; /* jne: not equal / not zero */

loc_002E9F82: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306AAC);
    { uint32_t _icall_target = MEM32(0x31C928); PUSH32(esp, 0x002E9F8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9F87u); } /* indirect call */
    }

loc_002E9F8D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002E9F8E
 * Original: 0x002E9F8E - 0x002E9FAC (30 bytes, 8 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9F8E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9F8E: ;
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E9FAB; /* je: equal / zero */

loc_002E9F98: ;
    MEM32(0x3063E0) = MEM32(0x3063E0) - 1;
    _fa = (uint32_t)(MEM32(0x3063E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002E9FAB; /* jne: not equal / not zero */

loc_002E9FA0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306AAC);
    { uint32_t _icall_target = MEM32(0x31C92C); PUSH32(esp, 0x002E9FABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9FA5u); } /* indirect call */
    }

loc_002E9FAB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002E9FAC
 * Original: 0x002E9FAC - 0x002E9FB9 (13 bytes, 4 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9FAC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9FAC: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(eax + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002E9FB9
 * Original: 0x002E9FB9 - 0x002E9FCA (17 bytes, 6 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9FB9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9FB9: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) & 0;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002E9FC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9FC5u); } /* indirect call */
    }

loc_002E9FC7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002E9FCA
 * Original: 0x002E9FCA - 0x002E9FEB (33 bytes, 14 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9FCA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9FCA: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002E9FE5; /* jbe: below or equal (unsigned <=) */

loc_002E9FD5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    if ((_fa != 0)) goto loc_002E9FE5; /* jne: not equal / not zero */

loc_002E9FDB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x002E9FE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9FDEu); } /* indirect call */
    }

loc_002E9FE1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002E9FE8;

loc_002E9FE5: ;
    eax = MEM32(ecx + 4);

loc_002E9FE8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002E9FEB
 * Original: 0x002E9FEB - 0x002EA034 (73 bytes, 23 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_002E9FEB(void)
{
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

loc_002E9FEB: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3337C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3337c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002EA003; /* jp: parity */

loc_002E9FFC: ;
    eax = 0xFFFFD8F0u;
    goto loc_002EA031;

loc_002EA003: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3337A0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3337a0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EA018; /* jne: not equal / not zero */

loc_002EA014: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002EA031;

loc_002EA018: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333A70)); /* fmul dword ptr [0x333a70] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002EA031u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002EA031: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EA034
 * Original: 0x002EA034 - 0x002EA038 (4 bytes, 2 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA034(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA034: ;
    { uint32_t _bs_v = (uint32_t)(ecx); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsf: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 0; _bs_i < 32; _bs_i++)
          if (_bs_v & (1u << _bs_i)) break;
        eax = (uint32_t)_bs_i;;
      } else { (void)(eax); } }
    esp += 4; return; /* ret */

}

/**
 * sub_002EA038
 * Original: 0x002EA038 - 0x002EA061 (41 bytes, 15 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EA038(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002EA038: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x24));
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x306AD8); PUSH32(esp, 0x002EA05Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA057u); } /* indirect call */
    }

loc_002EA05D: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EA061
 * Original: 0x002EA061 - 0x002EA098 (55 bytes, 19 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 8 params, returns float_sse
 * Frame: standard_frame
 */
void sub_002EA061(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002EA061: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x24));
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x14));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(0x306AE4); PUSH32(esp, 0x002EA094u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA08Eu); } /* indirect call */
    }

loc_002EA094: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EA098
 * Original: 0x002EA098 - 0x002EA0B8 (32 bytes, 12 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EA098(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002EA098: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x306AE8); PUSH32(esp, 0x002EA0B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA0AEu); } /* indirect call */
    }

loc_002EA0B4: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EA0B8
 * Original: 0x002EA0B8 - 0x002EA0EC (52 bytes, 17 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 7 params, returns float_sse
 * Frame: standard_frame
 */
void sub_002EA0B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002EA0B8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x20));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(0x306AEC); PUSH32(esp, 0x002EA0E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA0E2u); } /* indirect call */
    }

loc_002EA0E8: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EA0EC
 * Original: 0x002EA0EC - 0x002EA10E (34 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_002EA0EC(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002EA0EC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(0x306AF0); PUSH32(esp, 0x002EA10Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA105u); } /* indirect call */
    }

loc_002EA10B: ;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EA10E
 * Original: 0x002EA10E - 0x002EA135 (39 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_002EA10E(void)
{
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

loc_002EA10E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(0x306AF4); PUSH32(esp, 0x002EA132u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA12Cu); } /* indirect call */
    }

loc_002EA132: ;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EA135
 * Original: 0x002EA135 - 0x002EA153 (30 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA135(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA135: ;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA144; /* je: equal / zero */

loc_002EA141: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002EA144: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x002EA14Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA149u); } /* indirect call */
    }

loc_002EA14F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_002EA153
 * Original: 0x002EA153 - 0x002EA182 (47 bytes, 14 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA153(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA153: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x002EA16Au); RECOMP_ABI_CALL(0x002ED7FDu, sub_002ED7FD); /* call 0x002ED7FD */

loc_002EA16A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002EA177; /* jl: less (signed <) */

loc_002EA16E: ;
    MEM32(esi + 0x80) = MEM32(esi + 0x80) | 1;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002EA17E;

loc_002EA177: ;
    MEM32(esi + 0x80) = MEM32(esi + 0x80) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EA17E: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EA182
 * Original: 0x002EA182 - 0x002EA198 (22 bytes, 9 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA182(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EA182: ;
    eax = MEM32(esp + 4);
    ecx = eax + -8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x002EA195u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA192u); } /* indirect call */
    }

loc_002EA195: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EA198
 * Original: 0x002EA198 - 0x002EA19D (5 bytes, 2 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 5 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002EA198(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA198: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002EA19D
 * Original: 0x002EA19D - 0x002EA1B3 (22 bytes, 9 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA19D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EA19D: ;
    eax = MEM32(esp + 4);
    ecx = eax + -28;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x002EA1B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA1ADu); } /* indirect call */
    }

loc_002EA1B0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EA1B3
 * Original: 0x002EA1B3 - 0x002EA1D2 (31 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA1B3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA1B3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EA1B9u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EA1B9: ;
    esi = ZX8(LO8(eax));
    PUSH32(esp, 0x002EA1C1u); RECOMP_ABI_CALL(0x002ED48Du, sub_002ED48D); /* call 0x002ED48D */

loc_002EA1C1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002EA1D1; /* je: equal / zero */

loc_002EA1C6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA1D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA1CBu); } /* indirect call */
    }

loc_002EA1D1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002EA1D2
 * Original: 0x002EA1D2 - 0x002EA21C (74 bytes, 26 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EA1D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002EA1D2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EA1DEu); RECOMP_ABI_CALL(0x002E9F69u, sub_002E9F69); /* call 0x002E9F69 */

loc_002EA1DE: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBB80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EA1EC; /* jne: not equal / not zero */

loc_002EA1E8: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002EA20D;

loc_002EA1EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_002EA1FC; /* jge: greater or equal (signed >=) */

loc_002EA1F6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_002EA1FC: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x322A28)); /* fmul dword ptr [0x322a28] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EA20Bu); RECOMP_ABI_CALL(0x002EE9C7u, sub_002EE9C7); /* call 0x002EE9C7 */

loc_002EA20B: ;
    esi = eax;

loc_002EA20D: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EA215u); RECOMP_ABI_CALL(0x002E9F8Eu, sub_002E9F8E); /* call 0x002E9F8E */

loc_002EA215: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EA21C
 * Original: 0x002EA21C - 0x002EA23E (34 bytes, 15 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA21C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA21C: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA231; /* je: equal / zero */

loc_002EA224: ;
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 0xC) = eax;
    goto loc_002EA23B;

loc_002EA231: ;
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ecx + 8;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    POP32(esp, edi);

loc_002EA23B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EA23E
 * Original: 0x002EA23E - 0x002EA25B (29 bytes, 8 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA23E(void)
{

loc_002EA23E: ;
    eax = ecx;
    ecx = eax + 0x10;
    MEM32(eax + 4) = 2;
    MEM32(eax) = 0x322A2C;
    MEM32(0x306AA8) = eax;
    MEM32(eax + 0x14) = ecx;
    MEM32(ecx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002EA25B
 * Original: 0x002EA25B - 0x002EA295 (58 bytes, 21 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA25B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA25B: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x322A2C;
    MEM32(0x306AA8) = MEM32(0x306AA8) & 0;
    _fa = (uint32_t)(MEM32(0x306AA8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA27C; /* je: equal / zero */

loc_002EA272: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x002EA278u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA275u); } /* indirect call */
    }

loc_002EA278: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EA27C: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA28D; /* je: equal / zero */

loc_002EA283: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x002EA289u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA286u); } /* indirect call */
    }

loc_002EA289: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EA28D: ;
    MEM32(esi) = 0x322A18;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EA295
 * Original: 0x002EA295 - 0x002EA2E2 (77 bytes, 20 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002EA295(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA295: ;
    PUSH32(esp, 0x002EA29Au); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EA29A: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    eax = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EA2BC; /* je: equal / zero */

loc_002EA2A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA2B5; /* je: equal / zero */

loc_002EA2AA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA2B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA2AFu); } /* indirect call */
    }

loc_002EA2B5: ;
    eax = 0x80004005u;
    goto loc_002EA2DF;

loc_002EA2BC: ;
    ecx = MEM32(0x30641C);
    edx = MEM32(esp + 8);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edx) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EA2DD; /* je: equal / zero */

loc_002EA2D2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA2DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA2D7u); } /* indirect call */
    }

loc_002EA2DD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EA2DF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EA2E2
 * Original: 0x002EA2E2 - 0x002EA346 (100 bytes, 33 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EA2E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA2E2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EA2EBu); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EA2EB: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    edi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EA30D; /* je: equal / zero */

loc_002EA2F7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA306; /* je: equal / zero */

loc_002EA2FB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA306u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA300u); } /* indirect call */
    }

loc_002EA306: ;
    eax = 0x80004005u;
    goto loc_002EA341;

loc_002EA30D: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(esi + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EA31Cu); RECOMP_ABI_CALL(0x002EA21Cu, sub_002EA21C); /* call 0x002EA21C */

loc_002EA31C: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EA32Du); RECOMP_ABI_CALL(0x002EA153u, sub_002EA153); /* call 0x002EA153 */

loc_002EA32D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EA33E; /* je: equal / zero */

loc_002EA333: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA33Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA338u); } /* indirect call */
    }

loc_002EA33E: ;
    eax = esi;
    POP32(esp, esi);

loc_002EA341: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002EA346
 * Original: 0x002EA346 - 0x002EA3A5 (95 bytes, 31 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA346(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA346: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EA34Cu); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EA34C: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EA36E; /* je: equal / zero */

loc_002EA358: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA367; /* je: equal / zero */

loc_002EA35C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA367u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA361u); } /* indirect call */
    }

loc_002EA367: ;
    eax = 0x80004005u;
    goto loc_002EA3A1;

loc_002EA36E: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x14));
    PUSH32(esp, edi);
    MEM8(edx + ecx + 0x10) = LO8(ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x002EA38Cu); RECOMP_ABI_CALL(0x002EDF34u, sub_002EDF34); /* call 0x002EDF34 */

loc_002EA38C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EA39D; /* je: equal / zero */

loc_002EA392: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA39Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA397u); } /* indirect call */
    }

loc_002EA39D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_002EA3A1: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EA3A5
 * Original: 0x002EA3A5 - 0x002EA3D6 (49 bytes, 14 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA3A5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA3A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EA3ABu); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EA3AB: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_NE(_fa, _fb)) goto loc_002EA3C3; /* jne: not equal / not zero */

loc_002EA3B7: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x002EA3C3u); RECOMP_ABI_CALL(0x002EDE6Bu, sub_002EDE6B); /* call 0x002EDE6B */

loc_002EA3C3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA3D2; /* je: equal / zero */

loc_002EA3C7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA3D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA3CCu); } /* indirect call */
    }

loc_002EA3D2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EA3D6
 * Original: 0x002EA3D6 - 0x002EA4F1 (283 bytes, 91 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EA3D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA3D6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EA3E6u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EA3E6: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), ebx (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EA40D; /* je: equal / zero */

loc_002EA3F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA403; /* je: equal / zero */

loc_002EA3F8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA403u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA3FDu); } /* indirect call */
    }

loc_002EA403: ;
    eax = 0x80004005u;
    goto loc_002EA4EC;

loc_002EA40D: ;
    eax = MEM32(0x30641C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA4D8; /* je: equal / zero */

loc_002EA425: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    PUSH32(esp, edi);
    edi = 0x80000000u;
    if (CMP_EQ(_fa, _fb)) goto loc_002EA438; /* je: equal / zero */

loc_002EA430: ;
    MEM32(0x30641C) = MEM32(0x30641C) | edi;
    _fa = (uint32_t)(MEM32(0x30641C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002EA43F;

loc_002EA438: ;
    MEM8(0x30641F) = MEM8(0x30641F) & 0x7F;
    _fa = (uint32_t)(MEM8(0x30641F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_002EA43F: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EA44Bu); RECOMP_ABI_CALL(0x002EDF79u, sub_002EDF79); /* call 0x002EDF79 */

loc_002EA44B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002EA4D6; /* jl: less (signed <) */

loc_002EA456: ;
    eax = MEM32(0x30641C);
    ecx = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA472; /* je: equal / zero */

loc_002EA46B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EA47B; /* je: equal / zero */

loc_002EA472: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EA47B; /* jne: not equal / not zero */

loc_002EA476: ;
    MEM32(ebp + 0xC) = ebx;
    goto loc_002EA47F;

loc_002EA47B: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EA47F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA4D6; /* je: equal / zero */

loc_002EA488: ;
    edx = 0x4000000;

loc_002EA48D: ;
    ecx = MEM32(eax + -4);
    ecx = MEM32(ecx + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA4D0; /* je: equal / zero */

loc_002EA49A: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA4B3; /* je: equal / zero */

loc_002EA4A0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x58)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x58), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EA4D0; /* jne: not equal / not zero */

loc_002EA4A5: ;
    ecx = MEM32(eax + -4);
    ecx = MEM32(ecx + 0xB4);
    MEM32(ecx + 0x58) = MEM32(ecx + 0x58) | ebx;
    _fa = (uint32_t)(MEM32(ecx + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002EA4C5;

loc_002EA4B3: ;
    _fa = (uint32_t)(MEM8(ecx + 0x58)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x58), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EA4D0; /* je: equal / zero */

loc_002EA4B8: ;
    ecx = MEM32(eax + -4);
    ecx = MEM32(ecx + 0xB4);
    MEM32(ecx + 0x58) = MEM32(ecx + 0x58) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(ecx + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EA4C5: ;
    ecx = MEM32(eax + -4);
    ecx = MEM32(ecx + 0xB4);
    MEM32(ecx) = MEM32(ecx) | edx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002EA4D0: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EA48D; /* jne: not equal / not zero */

loc_002EA4D6: ;
    POP32(esp, esi);
    POP32(esp, edi);

loc_002EA4D8: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA4E9; /* je: equal / zero */

loc_002EA4DE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA4E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA4E3u); } /* indirect call */
    }

loc_002EA4E9: ;
    eax = MEM32(ebp + -4);

loc_002EA4EC: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EA4F1
 * Original: 0x002EA4F1 - 0x002EA516 (37 bytes, 17 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA4F1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA4F1: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EA512; /* jbe: below or equal (unsigned <=) */

loc_002EA4FC: ;
    PUSH32(esp, edi);

loc_002EA4FD: ;
    eax = MEM32(esi + 4);
    eax = eax + edx * 8;
    edi = MEM32(eax);
    eax = MEM32(eax + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + edi * 4 + 0x30) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EA4FD; /* jb: below (unsigned <) */

loc_002EA511: ;
    POP32(esp, edi);

loc_002EA512: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EA516
 * Original: 0x002EA516 - 0x002EA584 (110 bytes, 50 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EA516(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA516: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp + -8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EA52Cu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EA52C: ;
    ecx = MEM32(esi + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EA549; /* jbe: below or equal (unsigned <=) */

loc_002EA535: ;
    edx = ecx;
    PUSH32(esp, ebx);

loc_002EA538: ;
    ebx = ZX8(MEM8(esi + eax + 0x28));
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EA543; /* jne: not equal / not zero */

loc_002EA542: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002EA543: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EA538; /* jb: below (unsigned <) */

loc_002EA548: ;
    POP32(esp, ebx);

loc_002EA549: ;
    eax = ZX8(MEM8(esi + 0xE));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002EA576; /* jae: above or equal (unsigned >=) */

loc_002EA551: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EA562; /* jbe: below or equal (unsigned <=) */

loc_002EA55A: ;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x24) = ecx;

loc_002EA562: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA576; /* je: equal / zero */

loc_002EA566: ;
    ecx = MEM32(esi + 0x24);
    SET_LO8(edx, MEM8(ebp + 8));
    MEM8(esi + ecx + 0x28) = LO8(edx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002EA566; /* jne: not equal / not zero */

loc_002EA576: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EA57Eu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EA57E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EA584
 * Original: 0x002EA584 - 0x002EA5D1 (77 bytes, 30 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA584(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA584: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    MEM32(esi) = 0x322A4C;
    PUSH32(esp, 0x002EA596u); RECOMP_ABI_CALL(0x002E9F00u, sub_002E9F00); /* call 0x002E9F00 */

loc_002EA596: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA5A7; /* je: equal / zero */

loc_002EA59D: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x002EA5A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA5A0u); } /* indirect call */
    }

loc_002EA5A3: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EA5A7: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA5B8; /* je: equal / zero */

loc_002EA5AE: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x002EA5B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA5B1u); } /* indirect call */
    }

loc_002EA5B4: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EA5B8: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA5C9; /* je: equal / zero */

loc_002EA5BF: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x002EA5C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA5C2u); } /* indirect call */
    }

loc_002EA5C5: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EA5C9: ;
    MEM32(esi) = 0x322A18;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EA5D1
 * Original: 0x002EA5D1 - 0x002EA5EA (25 bytes, 7 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA5D1(void)
{

loc_002EA5D1: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x18) = edx;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x002EA5E7u); RECOMP_ABI_CALL(0x002F0118u, sub_002F0118); /* call 0x002F0118 */

loc_002EA5E7: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EA5EA
 * Original: 0x002EA5EA - 0x002EA606 (28 bytes, 8 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA5EA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA5EA: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x002EA603u); RECOMP_ABI_CALL(0x002F0080u, sub_002F0080); /* call 0x002F0080 */

loc_002EA603: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EA606
 * Original: 0x002EA606 - 0x002EA629 (35 bytes, 12 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA606(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA606: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) + ecx;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x20) = esi;
    ecx = MEM32(edx + 0xC);
    PUSH32(esp, 0x002EA625u); RECOMP_ABI_CALL(0x002F0080u, sub_002F0080); /* call 0x002F0080 */

loc_002EA625: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EA629
 * Original: 0x002EA629 - 0x002EA646 (29 bytes, 9 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA629(void)
{

loc_002EA629: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x002EA63Au); RECOMP_ABI_CALL(0x002EA4F1u, sub_002EA4F1); /* call 0x002EA4F1 */

loc_002EA63A: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x002EA642u); RECOMP_ABI_CALL(0x002F0080u, sub_002F0080); /* call 0x002F0080 */

loc_002EA642: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EA646
 * Original: 0x002EA646 - 0x002EA657 (17 bytes, 5 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002EA646(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA646: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x002EA652u); RECOMP_ABI_CALL(0x002F03CEu, sub_002F03CE); /* call 0x002F03CE */

loc_002EA652: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EA657
 * Original: 0x002EA657 - 0x002EA72C (213 bytes, 75 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EA657(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EA657: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0xD8);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002EA67E; /* je: equal / zero */

loc_002EA672: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EA678u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002EA678: ;
    MEM32(ebx + 0xD8) = edi;

loc_002EA67E: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebx + 0xDC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EA723; /* je: equal / zero */

loc_002EA68F: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    if (3) _cf = (int)(((esi) >> (32 - (3))) & 1);
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x61645344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EA6A1u); RECOMP_ABI_CALL(0x002ECADEu, sub_002ECADE); /* call 0x002ECADE */

loc_002EA6A1: ;
    ecx = eax;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FF8FFF2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    ecx = ecx + 0x8007000Eu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xD8) = eax;
    MEM32(ebp + -8) = ecx;
    if ((_fas < 0)) goto loc_002EA722; /* js: sign (negative) */

loc_002EA6BE: ;
    ecx = esi;
    esi = MEM32(ebp + 0xC);
    edi = eax;
    eax = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
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
    _cf = 0; /* logical op clears CF */
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
    eax = MEM32(ebx + 0xDC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002EA722; /* je: equal / zero */

loc_002EA6DC: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebx + 0xD8);
    if (3) _cf = (int)(((ecx) >> (32 - (3))) & 1);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_002EA713; /* jbe: below or equal (unsigned <=) */

loc_002EA6F1: ;
    edi = MEM32(eax + 8);
    esi = MEM32(eax + 4);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = edi;
    edi = MEM32(eax + 0xC);
    MEM32(eax + 4) = edi;
    eax = MEM32(ebx + 0xD8);
    MEM32(ecx + eax + 8) = edx;
    MEM32(ecx + eax + 0xC) = esi;
    goto loc_002EA716;

loc_002EA713: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002EA716: ;
    eax = MEM32(ebx + 0xDC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002EA6DC; /* jb: below (unsigned <) */

loc_002EA722: ;
    POP32(esp, esi);

loc_002EA723: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EA72C
 * Original: 0x002EA72C - 0x002EA75F (51 bytes, 20 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA72C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA72C: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x322A5C;
    if (CMP_EQ(_fa, _fb)) goto loc_002EA746; /* je: equal / zero */

loc_002EA73C: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x002EA742u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA73Fu); } /* indirect call */
    }

loc_002EA742: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EA746: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA757; /* je: equal / zero */

loc_002EA74D: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x002EA753u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA750u); } /* indirect call */
    }

loc_002EA753: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EA757: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002EA584(); return; /* tail jmp 0x002EA584 */

}

/**
 * sub_002EA75F
 * Original: 0x002EA75F - 0x002EA7A6 (71 bytes, 21 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA75F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA75F: ;
    PUSH32(esp, 0x002EA764u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EA764: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    ecx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EA786; /* je: equal / zero */

loc_002EA770: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA77F; /* je: equal / zero */

loc_002EA774: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA77Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA779u); } /* indirect call */
    }

loc_002EA77F: ;
    eax = 0x80004005u;
    goto loc_002EA7A3;

loc_002EA786: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_002EA7A0; /* je: equal / zero */

loc_002EA795: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA7A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA79Au); } /* indirect call */
    }

loc_002EA7A0: ;
    eax = esi;
    POP32(esp, esi);

loc_002EA7A3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EA7A6
 * Original: 0x002EA7A6 - 0x002EA7F0 (74 bytes, 23 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA7A6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA7A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EA7ACu); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EA7AC: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EA7CE; /* je: equal / zero */

loc_002EA7B8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA7C7; /* je: equal / zero */

loc_002EA7BC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA7C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA7C1u); } /* indirect call */
    }

loc_002EA7C7: ;
    eax = 0x80004005u;
    goto loc_002EA7EC;

loc_002EA7CE: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x002EA7D8u); RECOMP_ABI_CALL(0x002E9FCAu, sub_002E9FCA); /* call 0x002E9FCA */

loc_002EA7D8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EA7E9; /* je: equal / zero */

loc_002EA7DE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA7E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA7E3u); } /* indirect call */
    }

loc_002EA7E9: ;
    eax = edi;
    POP32(esp, edi);

loc_002EA7EC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EA7F0
 * Original: 0x002EA7F0 - 0x002EA841 (81 bytes, 25 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA7F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EA7F6u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EA7F6: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EA818; /* je: equal / zero */

loc_002EA802: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA811; /* je: equal / zero */

loc_002EA806: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA811u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA80Bu); } /* indirect call */
    }

loc_002EA811: ;
    eax = 0x80004005u;
    goto loc_002EA83D;

loc_002EA818: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x002EA829u); RECOMP_ABI_CALL(0x002F0FADu, sub_002F0FAD); /* call 0x002F0FAD */

loc_002EA829: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EA83A; /* je: equal / zero */

loc_002EA82F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA83Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA834u); } /* indirect call */
    }

loc_002EA83A: ;
    eax = edi;
    POP32(esp, edi);

loc_002EA83D: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002EA841
 * Original: 0x002EA841 - 0x002EA890 (79 bytes, 25 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA841(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA841: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EA847u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EA847: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EA869; /* je: equal / zero */

loc_002EA853: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA862; /* je: equal / zero */

loc_002EA857: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA862u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA85Cu); } /* indirect call */
    }

loc_002EA862: ;
    eax = 0x80004005u;
    goto loc_002EA88C;

loc_002EA869: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002EA878u); RECOMP_ABI_CALL(0x002F107Bu, sub_002F107B); /* call 0x002F107B */

loc_002EA878: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EA889; /* je: equal / zero */

loc_002EA87E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA889u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA883u); } /* indirect call */
    }

loc_002EA889: ;
    eax = edi;
    POP32(esp, edi);

loc_002EA88C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EA890
 * Original: 0x002EA890 - 0x002EA8E1 (81 bytes, 25 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA890: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EA896u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EA896: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EA8B8; /* je: equal / zero */

loc_002EA8A2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA8B1; /* je: equal / zero */

loc_002EA8A6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA8B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA8ABu); } /* indirect call */
    }

loc_002EA8B1: ;
    eax = 0x80004005u;
    goto loc_002EA8DD;

loc_002EA8B8: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x002EA8C9u); RECOMP_ABI_CALL(0x002F0B61u, sub_002F0B61); /* call 0x002F0B61 */

loc_002EA8C9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EA8DA; /* je: equal / zero */

loc_002EA8CF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA8DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA8D4u); } /* indirect call */
    }

loc_002EA8DA: ;
    eax = edi;
    POP32(esp, edi);

loc_002EA8DD: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EA8E1
 * Original: 0x002EA8E1 - 0x002EA966 (133 bytes, 43 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EA8E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA8E1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EA8EAu); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EA8EA: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    edi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EA90C; /* je: equal / zero */

loc_002EA8F6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA905; /* je: equal / zero */

loc_002EA8FA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA905u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA8FFu); } /* indirect call */
    }

loc_002EA905: ;
    eax = 0x80004005u;
    goto loc_002EA961;

loc_002EA90C: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_002EA931; /* je: equal / zero */

loc_002EA91D: ;
    PUSH32(esp, ebx);
    ebx = esi + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0xC8) (32-bit) */
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_002EA939; /* jbe: below or equal (unsigned <=) */

loc_002EA92A: ;
    esi = 0x88780032u;
    goto loc_002EA94F;

loc_002EA931: ;
    ecx = MEM32(eax + 0xC8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002EA939: ;
    MEM32(eax + 0xCC) = esi;
    MEM32(eax + 0xD0) = ecx;
    ecx = MEM32(edx + 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EA94Du); RECOMP_ABI_CALL(0x002F105Du, sub_002F105D); /* call 0x002F105D */

loc_002EA94D: ;
    esi = eax;

loc_002EA94F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA95E; /* je: equal / zero */

loc_002EA953: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA95Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA958u); } /* indirect call */
    }

loc_002EA95E: ;
    eax = esi;
    POP32(esp, esi);

loc_002EA961: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EA966
 * Original: 0x002EA966 - 0x002EA9BB (85 bytes, 26 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA966(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA966: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EA96Cu); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EA96C: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EA98E; /* je: equal / zero */

loc_002EA978: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA987; /* je: equal / zero */

loc_002EA97C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA987u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA981u); } /* indirect call */
    }

loc_002EA987: ;
    eax = 0x80004005u;
    goto loc_002EA9B7;

loc_002EA98E: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x002EA9A3u); RECOMP_ABI_CALL(0x002F0BA3u, sub_002F0BA3); /* call 0x002F0BA3 */

loc_002EA9A3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EA9B4; /* je: equal / zero */

loc_002EA9A9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA9B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA9AEu); } /* indirect call */
    }

loc_002EA9B4: ;
    eax = edi;
    POP32(esp, edi);

loc_002EA9B7: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EA9BB
 * Original: 0x002EA9BB - 0x002EAA9D (226 bytes, 80 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EA9BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA9BB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EA9CBu); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EA9CB: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), edi (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EA9F2; /* je: equal / zero */

loc_002EA9D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EA9E8; /* je: equal / zero */

loc_002EA9DD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EA9E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA9E2u); } /* indirect call */
    }

loc_002EA9E8: ;
    eax = 0x80004005u;
    goto loc_002EAA98;

loc_002EA9F2: ;
    _fa = (uint32_t)(MEM8(ebp + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x24), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    if (TEST_Z(_fa, _fb)) goto loc_002EAA0E; /* je: equal / zero */

loc_002EA9FC: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EAA07u); RECOMP_ABI_CALL(0x002EA966u, sub_002EA966); /* call 0x002EA966 */

loc_002EAA07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002EAA83; /* jl: less (signed <) */

loc_002EAA0E: ;
    _fa = (uint32_t)(MEM8(ebp + 0x24)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x24), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EAA1F; /* je: equal / zero */

loc_002EAA14: ;
    eax = MEM32(esi + 0x1C);
    eax = MEM32(eax + 0xC0);
    goto loc_002EAA22;

loc_002EAA1F: ;
    eax = MEM32(ebp + 0x10);

loc_002EAA22: ;
    ecx = MEM32(esi + 0x1C);
    ecx = MEM32(ecx + 0xBC);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + 0x14);
    MEM32(edx) = ecx;
    ecx = MEM32(esi + 0x1C);
    ecx = MEM32(ecx + 0xC0);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002EAA47; /* jae: above or equal (unsigned >=) */

loc_002EAA43: ;
    ecx = eax;
    goto loc_002EAA53;

loc_002EAA47: ;
    ecx = MEM32(esi + 0x1C);
    ecx = MEM32(ecx + 0xC0);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002EAA53: ;
    edi = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    MEM32(ebx) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EAA82; /* je: equal / zero */

loc_002EAA60: ;
    edx = MEM32(ebp + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAA82; /* je: equal / zero */

loc_002EAA67: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002EAA7C; /* jae: above or equal (unsigned >=) */

loc_002EAA6B: ;
    ecx = MEM32(esi + 0x1C);
    ecx = MEM32(ecx + 0xBC);
    MEM32(edi) = ecx;
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = eax;
    goto loc_002EAA82;

loc_002EAA7C: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx) = MEM32(edx) & 0;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EAA82: ;
    POP32(esp, ebx);

loc_002EAA83: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002EAA95; /* je: equal / zero */

loc_002EAA8A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EAA95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EAA8Fu); } /* indirect call */
    }

loc_002EAA95: ;
    eax = MEM32(ebp + -4);

loc_002EAA98: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_002EAA9D
 * Original: 0x002EAA9D - 0x002EAAEE (81 bytes, 25 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAA9D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EAA9D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EAAA3u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EAAA3: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EAAC5; /* je: equal / zero */

loc_002EAAAF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAABE; /* je: equal / zero */

loc_002EAAB3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EAABEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EAAB8u); } /* indirect call */
    }

loc_002EAABE: ;
    eax = 0x80004005u;
    goto loc_002EAAEA;

loc_002EAAC5: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x002EAAD6u); RECOMP_ABI_CALL(0x002F110Bu, sub_002F110B); /* call 0x002F110B */

loc_002EAAD6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EAAE7; /* je: equal / zero */

loc_002EAADC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EAAE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EAAE1u); } /* indirect call */
    }

loc_002EAAE7: ;
    eax = edi;
    POP32(esp, edi);

loc_002EAAEA: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EAAEE
 * Original: 0x002EAAEE - 0x002EAB58 (106 bytes, 36 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EAAEE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EAAEE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EAAF7u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EAAF7: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EAB19; /* je: equal / zero */

loc_002EAB03: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAB12; /* je: equal / zero */

loc_002EAB07: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EAB12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EAB0Cu); } /* indirect call */
    }

loc_002EAB12: ;
    eax = 0x80004005u;
    goto loc_002EAB53;

loc_002EAB19: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002EAB38; /* je: equal / zero */

loc_002EAB26: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EAB34u); RECOMP_ABI_CALL(0x002EE6C4u, sub_002EE6C4); /* call 0x002EE6C4 */

loc_002EAB34: ;
    edi = eax;
    goto loc_002EAB41;

loc_002EAB38: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EAB3Fu); RECOMP_ABI_CALL(0x002EE85Eu, sub_002EE85E); /* call 0x002EE85E */

loc_002EAB3F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EAB41: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAB50; /* je: equal / zero */

loc_002EAB45: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EAB50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EAB4Au); } /* indirect call */
    }

loc_002EAB50: ;
    eax = edi;
    POP32(esp, edi);

loc_002EAB53: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002EAB58
 * Original: 0x002EAB58 - 0x002EAE39 (737 bytes, 261 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EAB58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002EAB58: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EAB69u); RECOMP_ABI_CALL(0x002E9F69u, sub_002E9F69); /* call 0x002E9F69 */

loc_002EAB69: ;
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    esi = MEM32(ebp + 0xC);
    eax = eax | MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002EAB85; /* je: equal / zero */

loc_002EAB7D: ;
    eax = eax | 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 8) = eax;

loc_002EAB85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x15200010 (32-bit) */
    edi = MEM32(ebp + 0x18);
    if (TEST_Z(_fa, _fb)) goto loc_002EABE4; /* je: equal / zero */

loc_002EAB8F: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EABD4; /* je: equal / zero */

loc_002EAB95: ;
    fp_push(MEMF(esi + 0x68)); /* fld float */
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x58);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esi + 0x54));
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    PUSH32(esp, MEM32(esi + 0x50));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EABCFu); RECOMP_ABI_CALL(0x002EA061u, sub_002EA061); /* call 0x002EA061 */

loc_002EABCF: ;
    eax = MEM32(ebp + -52);
    goto loc_002EABD9;

loc_002EABD4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -52) = eax;

loc_002EABD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EABE4; /* je: equal / zero */

loc_002EABDE: ;
    MEM32(edi) = MEM32(edi) | 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 4) = eax;

loc_002EABE4: ;
    _fa = (uint32_t)(MEM16(ebp + 0xA)) & 0xFFFFu; _fb = (uint32_t)(0x4014) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + 0xA), 0x4014 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EAC20; /* je: equal / zero */

loc_002EABEC: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAC10; /* je: equal / zero */

loc_002EABF2: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, MEM32(esi + 0x20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EAC0Bu); RECOMP_ABI_CALL(0x002EA098u, sub_002EA098); /* call 0x002EA098 */

loc_002EAC0B: ;
    eax = MEM32(ebp + -48);
    goto loc_002EAC15;

loc_002EAC10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -48) = eax;

loc_002EAC15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAC20; /* je: equal / zero */

loc_002EAC1A: ;
    MEM32(edi) = MEM32(edi) | 2;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 8) = eax;

loc_002EAC20: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34800008) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 8), 0x34800008 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EAC89; /* je: equal / zero */

loc_002EAC29: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAC6C; /* je: equal / zero */

loc_002EAC2F: ;
    fp_push(MEMF(esi + 0x78)); /* fld float */
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x58);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EAC64u); RECOMP_ABI_CALL(0x002EA0B8u, sub_002EA0B8); /* call 0x002EA0B8 */

loc_002EAC64: ;
    ecx = MEM32(ebp + -40);
    eax = MEM32(ebp + -44);
    goto loc_002EAC76;

loc_002EAC6C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -40) = ecx;

loc_002EAC76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EAC80; /* jne: not equal / not zero */

loc_002EAC7B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAC89; /* je: equal / zero */

loc_002EAC80: ;
    MEM32(edi) = MEM32(edi) | 4;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = ecx;

loc_002EAC89: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), 0x24 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EACDC; /* je: equal / zero */

loc_002EAC8F: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EACBF; /* je: equal / zero */

loc_002EAC95: ;
    _fa = (uint32_t)(MEM8(esi + 0x58)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x58), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EACBF; /* je: equal / zero */

loc_002EAC9B: ;
    fp_push(MEMF(esi + 0x78)); /* fld float */
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EACB7u); RECOMP_ABI_CALL(0x002EA0ECu, sub_002EA0EC); /* call 0x002EA0EC */

loc_002EACB7: ;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -36);
    goto loc_002EACC9;

loc_002EACBF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = ecx;

loc_002EACC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EACD3; /* jne: not equal / not zero */

loc_002EACCE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EACDC; /* je: equal / zero */

loc_002EACD3: ;
    MEM32(edi) = MEM32(edi) | 8;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 0x18) = ecx;

loc_002EACDC: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82800028u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 8), 0x82800028u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EAD26; /* je: equal / zero */

loc_002EACE5: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAD16; /* je: equal / zero */

loc_002EACEB: ;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    eax = ebp + -20;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EAD11u); RECOMP_ABI_CALL(0x002EA10Eu, sub_002EA10E); /* call 0x002EA10E */

loc_002EAD11: ;
    eax = MEM32(ebp + -20);
    goto loc_002EAD1B;

loc_002EAD16: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -20) = eax;

loc_002EAD1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAD26; /* je: equal / zero */

loc_002EAD20: ;
    MEM32(edi) = MEM32(edi) | 0x20;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x24) = eax;

loc_002EAD26: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EAD77; /* je: equal / zero */

loc_002EAD2C: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAD40; /* je: equal / zero */

loc_002EAD32: ;
    fp_push(MEMF(esi + 0x74)); /* fld float */
    eax = MEM32(esi + 0x78);
    MEMF(ebp + -16) = (float)fp_top(); /* fst */
    MEM32(ebp + -12) = eax;
    goto loc_002EAD4A;

loc_002EAD40: ;
    fp_push(0.0); /* fldz */
    MEMF(ebp + -16) = (float)fp_top(); /* fst */
    fp_push(0.0); /* fldz */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */

loc_002EAD4A: ;
    fp_push(MEMF(edi + 0x28)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002EAD67; /* jp: parity */

loc_002EAD58: ;
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    fp_push(MEMF(ebp + -12)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EAD75; /* jnp: not parity */

loc_002EAD67: ;
    eax = MEM32(ebp + -12);
    MEMF(edi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi) = MEM32(edi) | 0x40;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x2C) = eax;
    goto loc_002EAD77;

loc_002EAD75: ;
    fp_pop(); /* fstp st(0) */

loc_002EAD77: ;
    eax = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAE2A; /* je: equal / zero */

loc_002EAD84: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAE2A; /* je: equal / zero */

loc_002EAD8F: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), 0x14 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EADA5; /* jne: not equal / not zero */

loc_002EAD95: ;
    ebx = MEM32(eax);
    ebx = ebx | MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F0804) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x7F0804 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EAE2A; /* je: equal / zero */

loc_002EADA5: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EADE6; /* je: equal / zero */

loc_002EADAB: ;
    fp_push(MEMF(eax + 0x30)); /* fld float */
    edx = ebp + -4;
    PUSH32(esp, edx);
    edx = ebp + -8;
    PUSH32(esp, edx);
    edx = ebp + -24;
    PUSH32(esp, edx);
    edx = ebp + -28;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EADD8u); RECOMP_ABI_CALL(0x002F18FBu, sub_002F18FB); /* call 0x002F18FB */

loc_002EADD8: ;
    _fa = (uint32_t)(MEM8(esi + 0x58)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x58), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EADF2; /* je: equal / zero */

loc_002EADDE: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    goto loc_002EADF2;

loc_002EADE6: ;
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -24) = edx;
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = edx;

loc_002EADF2: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x1C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EAE02; /* jne: not equal / not zero */

loc_002EADFA: ;
    ecx = MEM32(ebp + -24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAE0E; /* je: equal / zero */

loc_002EAE02: ;
    MEM32(edi) = MEM32(edi) | 0x10;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x1C) = eax;
    eax = MEM32(ebp + -24);
    MEM32(edi + 0x20) = eax;

loc_002EAE0E: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x30) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EAE1E; /* jne: not equal / not zero */

loc_002EAE16: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x34) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAE2A; /* je: equal / zero */

loc_002EAE1E: ;
    MEM8(edi) = MEM8(edi) | 0x80;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(edi + 0x30) = eax;
    eax = MEM32(ebp + -4);
    MEM32(edi + 0x34) = eax;

loc_002EAE2A: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EAE32u); RECOMP_ABI_CALL(0x002E9F8Eu, sub_002E9F8E); /* call 0x002E9F8E */

loc_002EAE32: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EAE39
 * Original: 0x002EAE39 - 0x002EAE70 (55 bytes, 17 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EAE39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EAE39: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EAE45u); RECOMP_ABI_CALL(0x002E9F69u, sub_002E9F69); /* call 0x002E9F69 */

loc_002EAE45: ;
    _fa = (uint32_t)(MEM32(0x30642C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x30642C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAE56; /* je: equal / zero */

loc_002EAE4E: ;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EAE56u); RECOMP_ABI_CALL(0x002F1659u, sub_002F1659); /* call 0x002F1659 */

loc_002EAE56: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -4;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EAE64u); RECOMP_ABI_CALL(0x002F1B14u, sub_002F1B14); /* call 0x002F1B14 */

loc_002EAE64: ;
    ecx = ebp + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EAE6Cu); RECOMP_ABI_CALL(0x002E9F8Eu, sub_002E9F8E); /* call 0x002E9F8E */

loc_002EAE6C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EAE70
 * Original: 0x002EAE70 - 0x002EAE85 (21 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EAE70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAE7F; /* je: equal / zero */

loc_002EAE79: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002EAE7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EAE7Cu); } /* indirect call */
    }

loc_002EAE7F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EAE85
 * Original: 0x002EAE85 - 0x002EAEA1 (28 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAE85(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EAE85: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x322A18;
    if (TEST_Z(_fa, _fb)) goto loc_002EAE9B; /* je: equal / zero */

loc_002EAE95: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EAE9Bu); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002EAE9B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EAEA1
 * Original: 0x002EAEA1 - 0x002EAEEF (78 bytes, 24 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAEA1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EAEA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EAEA7u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EAEA7: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EAEC9; /* je: equal / zero */

loc_002EAEB3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAEC2; /* je: equal / zero */

loc_002EAEB7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EAEC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EAEBCu); } /* indirect call */
    }

loc_002EAEC2: ;
    eax = 0x80004005u;
    goto loc_002EAEEB;

loc_002EAEC9: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x002EAED7u); RECOMP_ABI_CALL(0x002EA5EAu, sub_002EA5EA); /* call 0x002EA5EA */

loc_002EAED7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EAEE8; /* je: equal / zero */

loc_002EAEDD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EAEE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EAEE2u); } /* indirect call */
    }

loc_002EAEE8: ;
    eax = edi;
    POP32(esp, edi);

loc_002EAEEB: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EAEEF
 * Original: 0x002EAEEF - 0x002EAF3D (78 bytes, 24 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAEEF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EAEEF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EAEF5u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EAEF5: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EAF17; /* je: equal / zero */

loc_002EAF01: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAF10; /* je: equal / zero */

loc_002EAF05: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EAF10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EAF0Au); } /* indirect call */
    }

loc_002EAF10: ;
    eax = 0x80004005u;
    goto loc_002EAF39;

loc_002EAF17: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x002EAF25u); RECOMP_ABI_CALL(0x002EA606u, sub_002EA606); /* call 0x002EA606 */

loc_002EAF25: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EAF36; /* je: equal / zero */

loc_002EAF2B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EAF36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EAF30u); } /* indirect call */
    }

loc_002EAF36: ;
    eax = edi;
    POP32(esp, edi);

loc_002EAF39: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EAF3D
 * Original: 0x002EAF3D - 0x002EAF8B (78 bytes, 24 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAF3D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EAF3D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EAF43u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EAF43: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EAF65; /* je: equal / zero */

loc_002EAF4F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EAF5E; /* je: equal / zero */

loc_002EAF53: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EAF5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EAF58u); } /* indirect call */
    }

loc_002EAF5E: ;
    eax = 0x80004005u;
    goto loc_002EAF87;

loc_002EAF65: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x002EAF73u); RECOMP_ABI_CALL(0x002EA629u, sub_002EA629); /* call 0x002EA629 */

loc_002EAF73: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EAF84; /* je: equal / zero */

loc_002EAF79: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EAF84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EAF7Eu); } /* indirect call */
    }

loc_002EAF84: ;
    eax = edi;
    POP32(esp, edi);

loc_002EAF87: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EAF8B
 * Original: 0x002EAF8B - 0x002EAFA7 (28 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAF8B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EAF8B: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EAFA4u); RECOMP_ABI_CALL(0x002EA295u, sub_002EA295); /* call 0x002EA295 */

loc_002EAFA4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EAFA7
 * Original: 0x002EAFA7 - 0x002EAFCE (39 bytes, 16 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EAFA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EAFA7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0x10));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0xC));
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EAFCAu); RECOMP_ABI_CALL(0x002EA2E2u, sub_002EA2E2); /* call 0x002EA2E2 */

loc_002EAFCA: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002EAFCE
 * Original: 0x002EAFCE - 0x002EAFEA (28 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAFCE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EAFCE: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EAFE7u); RECOMP_ABI_CALL(0x002EA3D6u, sub_002EA3D6); /* call 0x002EA3D6 */

loc_002EAFE7: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EAFEA
 * Original: 0x002EAFEA - 0x002EB00A (32 bytes, 11 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAFEA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EAFEA: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EB007u); RECOMP_ABI_CALL(0x002EA346u, sub_002EA346); /* call 0x002EA346 */

loc_002EB007: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EB00A
 * Original: 0x002EB00A - 0x002EB026 (28 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB00A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EB00A: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EB023u); RECOMP_ABI_CALL(0x002EAEA1u, sub_002EAEA1); /* call 0x002EAEA1 */

loc_002EB023: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EB026
 * Original: 0x002EB026 - 0x002EB042 (28 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB026(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EB026: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EB03Fu); RECOMP_ABI_CALL(0x002EAEEFu, sub_002EAEEF); /* call 0x002EAEEF */

loc_002EB03F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EB042
 * Original: 0x002EB042 - 0x002EB05E (28 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB042(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EB042: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EB05Bu); RECOMP_ABI_CALL(0x002EAF3Du, sub_002EAF3D); /* call 0x002EAF3D */

loc_002EB05B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EB05E
 * Original: 0x002EB05E - 0x002EB082 (36 bytes, 12 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB05E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EB05E: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EB07Fu); RECOMP_ABI_CALL(0x002EA7F0u, sub_002EA7F0); /* call 0x002EA7F0 */

loc_002EB07F: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002EB082
 * Original: 0x002EB082 - 0x002EB09A (24 bytes, 9 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB082(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EB082: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EB097u); RECOMP_ABI_CALL(0x002EA841u, sub_002EA841); /* call 0x002EA841 */

loc_002EB097: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EB09A
 * Original: 0x002EB09A - 0x002EB0BA (32 bytes, 11 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB09A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EB09A: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EB0B7u); RECOMP_ABI_CALL(0x002EA8E1u, sub_002EA8E1); /* call 0x002EA8E1 */

loc_002EB0B7: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EB0BA
 * Original: 0x002EB0BA - 0x002EB0D6 (28 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB0BA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EB0BA: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EB0D3u); RECOMP_ABI_CALL(0x002EA890u, sub_002EA890); /* call 0x002EA890 */

loc_002EB0D3: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EB0D6
 * Original: 0x002EB0D6 - 0x002EB0F6 (32 bytes, 11 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB0D6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EB0D6: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EB0F3u); RECOMP_ABI_CALL(0x002EA966u, sub_002EA966); /* call 0x002EA966 */

loc_002EB0F3: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EB0F6
 * Original: 0x002EB0F6 - 0x002EB112 (28 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB0F6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EB0F6: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EB10Fu); RECOMP_ABI_CALL(0x002EAA9Du, sub_002EAA9D); /* call 0x002EAA9D */

loc_002EB10F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EB112
 * Original: 0x002EB112 - 0x002EB142 (48 bytes, 19 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EB112(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EB112: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x24));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0x1C));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0x18));
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, MEM32(ebp + 0x10));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EB13Eu); RECOMP_ABI_CALL(0x002EA9BBu, sub_002EA9BB); /* call 0x002EA9BB */

loc_002EB13E: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_002EB142
 * Original: 0x002EB142 - 0x002EB15A (24 bytes, 6 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB142(void)
{

loc_002EB142: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x002EB157u); RECOMP_ABI_CALL(0x002EAAEEu, sub_002EAAEE); /* call 0x002EAAEE */

loc_002EB157: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002EB15A
 * Original: 0x002EB15A - 0x002EB183 (41 bytes, 14 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB15A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB15A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EB160u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EB160: ;
    esi = ZX8(LO8(eax));
    eax = MEM32(0x306AA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB172; /* je: equal / zero */

loc_002EB16C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EB172u); RECOMP_ABI_CALL(0x002EA3A5u, sub_002EA3A5); /* call 0x002EA3A5 */

loc_002EB172: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002EB182; /* je: equal / zero */

loc_002EB177: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EB182u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EB17Cu); } /* indirect call */
    }

loc_002EB182: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002EB183
 * Original: 0x002EB183 - 0x002EB19E (27 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB183(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB183: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002EB18Bu); RECOMP_ABI_CALL(0x002EA25Bu, sub_002EA25B); /* call 0x002EA25B */

loc_002EB18B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB198; /* je: equal / zero */

loc_002EB192: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EB198u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002EB198: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EB19E
 * Original: 0x002EB19E - 0x002EB269 (203 bytes, 67 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB19E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB19E: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EB1D7; /* jne: not equal / not zero */

loc_002EB1AB: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), 0x200010 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB1BB; /* je: equal / zero */

loc_002EB1B4: ;
    eax = 0x3061D4;
    goto loc_002EB1D7;

loc_002EB1BB: ;
    _fa = (uint32_t)(MEM32(esi + 0xB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB0), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB1CA; /* je: equal / zero */

loc_002EB1C3: ;
    eax = 0x2F39DC;
    goto loc_002EB1D7;

loc_002EB1CA: ;
    eax = ZX8(MEM8(esi + 0xE));
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax * 4 + 0x2F39CC);

loc_002EB1D7: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EB1FA; /* jbe: below or equal (unsigned <=) */

loc_002EB1DB: ;
    PUSH32(esp, edi);

loc_002EB1DC: ;
    edx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(edx + ecx * 8));
    MEM8(esi + ecx + 0x28) = LO8(edx);
    edi = MEM32(eax + 4);
    edi = MEM32(edi + ecx * 8 + 4);
    edx = ZX8(LO8(edx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + edx * 4 + 0x30) = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EB1DC; /* jb: below (unsigned <) */

loc_002EB1F9: ;
    POP32(esp, edi);

loc_002EB1FA: ;
    eax = MEM32(eax);
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esi + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB222; /* je: equal / zero */

loc_002EB209: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x82000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB222; /* je: equal / zero */

loc_002EB215: ;
    PUSH32(esp, MEM32(eax + 0xD4));
    ecx = esi;
    PUSH32(esp, 0x002EB222u); RECOMP_ABI_CALL(0x002EA516u, sub_002EA516); /* call 0x002EA516 */

loc_002EB222: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB265; /* je: equal / zero */

loc_002EB228: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 5 (32-bit) */
    PUSH32(esp, 2);
    POP32(esp, edx);
    if (CMP_B(_fa, _fb)) goto loc_002EB24E; /* jb: below (unsigned <) */

loc_002EB231: ;
    _fa = (uint32_t)(MEM8(esi + 0x2C)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2C), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EB24E; /* jne: not equal / not zero */

loc_002EB236: ;
    ecx = esi + 0xB4;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x58)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x58), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EB265; /* jne: not equal / not zero */

loc_002EB243: ;
    MEM32(eax + 0x58) = MEM32(eax + 0x58) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ecx);
    MEM8(eax + 3) = MEM8(eax + 3) | 4;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_002EB265;

loc_002EB24E: ;
    ecx = esi + 0xB4;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x58)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x58), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB265; /* je: equal / zero */

loc_002EB25B: ;
    MEM32(eax + 0x58) = MEM32(eax + 0x58) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ecx);
    MEM8(ecx + 3) = MEM8(ecx + 3) | 4;
    _fa = (uint32_t)(MEM8(ecx + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_002EB265: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EB269
 * Original: 0x002EB269 - 0x002EB33C (211 bytes, 70 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EB269(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002EB269: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EB27Fu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EB27F: ;
    ecx = MEM32(esi + 0xB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB2E1; /* je: equal / zero */

loc_002EB289: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x82000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB2D4; /* je: equal / zero */

loc_002EB295: ;
    eax = MEM32(eax + 0xD4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), edi (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_002EB2C5; /* jbe: below or equal (unsigned <=) */

loc_002EB2A5: ;
    eax = MEM32(esi + 0x24);
    edx = esi + 0x28;
    MEM32(ebp + -4) = eax;
    PUSH32(esp, ebx);

loc_002EB2AF: ;
    SET_LO8(eax, MEM8(edx));
    ebx = ZX8(LO8(eax));
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB2BE; /* je: equal / zero */

loc_002EB2B9: ;
    MEM8(ebp + edi + -16) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002EB2BE: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002EB2AF; /* jne: not equal / not zero */

loc_002EB2C4: ;
    POP32(esp, ebx);

loc_002EB2C5: ;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(ebp + -12);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x24) = edi;

loc_002EB2D4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x002EB2DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EB2D7u); } /* indirect call */
    }

loc_002EB2DA: ;
    MEM32(esi + 0xB0) = MEM32(esi + 0xB0) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xB0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EB2E1: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EB2E9u); RECOMP_ABI_CALL(0x002EAE70u, sub_002EAE70); /* call 0x002EAE70 */

loc_002EB2E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xB0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB32E; /* je: equal / zero */

loc_002EB2F3: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x82000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB32E; /* je: equal / zero */

loc_002EB2FF: ;
    edi = MEM32(eax + 0xD4);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EB311u); RECOMP_ABI_CALL(0x002EA516u, sub_002EA516); /* call 0x002EA516 */

loc_002EB311: ;
    eax = ZX8(MEM8(esi + 0xE));
    MEM32(ebp + 8) = eax;
    PUSH32(esp, ecx);
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EB32Au); RECOMP_ABI_CALL(0x002E9FEBu, sub_002E9FEB); /* call 0x002E9FEB */

loc_002EB32A: ;
    MEM32(esi + edi * 4 + 0x30) = eax;

loc_002EB32E: ;
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EB336u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EB336: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EB33C
 * Original: 0x002EB33C - 0x002EB366 (42 bytes, 13 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB33C(void)
{

loc_002EB33C: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    eax = esi + 0x14;
    MEM32(esi + 4) = 1;
    MEM32(esi) = 0x322A4C;
    MEM32(esi + 0x18) = eax;
    MEM32(eax) = eax;
    PUSH32(esp, 0x002EB35Du); RECOMP_ABI_CALL(0x002EAE70u, sub_002EAE70); /* call 0x002EAE70 */

loc_002EB35D: ;
    MEM32(esi + 8) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EB366
 * Original: 0x002EB366 - 0x002EB381 (27 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB366(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB366: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002EB36Eu); RECOMP_ABI_CALL(0x002EA584u, sub_002EA584); /* call 0x002EA584 */

loc_002EB36E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB37B; /* je: equal / zero */

loc_002EB375: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EB37Bu); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002EB37B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EB381
 * Original: 0x002EB381 - 0x002EB418 (151 bytes, 45 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB381(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB381: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x002EB38Bu); RECOMP_ABI_CALL(0x002EAE70u, sub_002EAE70); /* call 0x002EAE70 */

loc_002EB38B: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x002EB39Bu); RECOMP_ABI_CALL(0x002EAE70u, sub_002EAE70); /* call 0x002EAE70 */

loc_002EB39B: ;
    MEM32(esi + 0x10) = eax;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB414; /* je: equal / zero */

loc_002EB3A4: ;
    ecx = MEM32(esi + 8);
    eax = esi + 0x14;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;
    eax = MEM32(0x30641C);
    edx = eax;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    ecx = 0x4000000;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB3DA; /* je: equal / zero */

loc_002EB3D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB3F6; /* je: equal / zero */

loc_002EB3DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_002EB3F6; /* js: sign (negative) */

loc_002EB3DE: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM32(eax + 0x58) = MEM32(eax + 0x58) | 1;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM32(eax) = MEM32(eax) | ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002EB3F6: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB414; /* je: equal / zero */

loc_002EB3FF: ;
    eax = MEM32(eax + 0xB4);
    MEM32(eax + 0x58) = MEM32(eax + 0x58) | 4;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM32(eax) = MEM32(eax) | ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002EB414: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EB418
 * Original: 0x002EB418 - 0x002EB43C (36 bytes, 14 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB418(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB418: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_002EB42B; /* jne: not equal / not zero */

loc_002EB425: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x10);

loc_002EB42B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EB431u); RECOMP_ABI_CALL(0x002EA1D2u, sub_002EA1D2); /* call 0x002EA1D2 */

loc_002EB431: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EB438u); RECOMP_ABI_CALL(0x002EA5D1u, sub_002EA5D1); /* call 0x002EA5D1 */

loc_002EB438: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EB43C
 * Original: 0x002EB43C - 0x002EB459 (29 bytes, 9 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB43C(void)
{

loc_002EB43C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x002EB44Du); RECOMP_ABI_CALL(0x002EB19Eu, sub_002EB19E); /* call 0x002EB19E */

loc_002EB44D: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x002EB455u); RECOMP_ABI_CALL(0x002EFFBFu, sub_002EFFBF); /* call 0x002EFFBF */

loc_002EB455: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EB459
 * Original: 0x002EB459 - 0x002EB48C (51 bytes, 14 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002EB459(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB459: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xB4);
    edx = MEM32(esp + 8);
    MEM32(eax + 0x3C) = edx;
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM8(eax + 2) = MEM8(eax + 2) | 0x20;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EB487; /* jne: not equal / not zero */

loc_002EB481: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EB487u); RECOMP_ABI_CALL(0x002EA646u, sub_002EA646); /* call 0x002EA646 */

loc_002EB487: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EB48C
 * Original: 0x002EB48C - 0x002EB4BF (51 bytes, 14 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002EB48C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB48C: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xB4);
    edx = MEM32(esp + 8);
    MEM32(eax + 0x38) = edx;
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM8(eax + 2) = MEM8(eax + 2) | 0x20;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EB4BA; /* jne: not equal / not zero */

loc_002EB4B4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EB4BAu); RECOMP_ABI_CALL(0x002EA646u, sub_002EA646); /* call 0x002EA646 */

loc_002EB4BA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EB4BF
 * Original: 0x002EB4BF - 0x002EB511 (82 bytes, 25 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EB4BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB4BF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    edx = MEM32(ebp + 0xC);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    edx = MEM32(ebp + 0x10);
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    edx = MEM32(ebp + 0x14);
    MEM32(ecx + 0x10) = edx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    MEM8(ecx + 2) = MEM8(ecx + 2) | 1;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x18), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EB50B; /* jne: not equal / not zero */

loc_002EB505: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EB50Bu); RECOMP_ABI_CALL(0x002EA646u, sub_002EA646); /* call 0x002EA646 */

loc_002EB50B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002EB511
 * Original: 0x002EB511 - 0x002EB563 (82 bytes, 25 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EB511(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB511: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    edx = MEM32(ebp + 0xC);
    MEM32(ecx + 0x14) = edx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    edx = MEM32(ebp + 0x10);
    MEM32(ecx + 0x18) = edx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    edx = MEM32(ebp + 0x14);
    MEM32(ecx + 0x1C) = edx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    MEM8(ecx + 2) = MEM8(ecx + 2) | 2;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x18), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EB55D; /* jne: not equal / not zero */

loc_002EB557: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EB55Du); RECOMP_ABI_CALL(0x002EA646u, sub_002EA646); /* call 0x002EA646 */

loc_002EB55D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002EB563
 * Original: 0x002EB563 - 0x002EB62D (202 bytes, 49 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002EB563(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB563: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0xB4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    MEM32(edx + 0x80) = esi;
    esi = MEM32(ecx + 4);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x84) = esi;
    esi = MEM32(ecx + 8);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x88) = esi;
    esi = MEM32(ecx + 0xC);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x8C) = esi;
    esi = MEM32(ecx + 0x10);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x90) = esi;
    esi = MEM32(ecx + 0x14);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x94) = esi;
    esi = MEM32(ecx + 0x18);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x98) = esi;
    esi = MEM32(ecx + 0x1C);
    edx = MEM32(eax + 0x10);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0x9C) = esi;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x20);
    edx = MEM32(edx + 0xB4);
    MEM32(edx + 0xA0) = ecx;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0xB4);
    MEM8(ecx + 0x7E) = MEM8(ecx + 0x7E) | 0x7F;
    _fa = (uint32_t)(MEM8(ecx + 0x7E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_002EB628; /* jne: not equal / not zero */

loc_002EB622: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EB628u); RECOMP_ABI_CALL(0x002EA646u, sub_002EA646); /* call 0x002EA646 */

loc_002EB628: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EB62D
 * Original: 0x002EB62D - 0x002EB651 (36 bytes, 7 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB62D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB62D: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xCC) = MEM32(ecx + 0xCC) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0xCC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xC4) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0xC8) = eax;
    MEM32(ecx + 0xD0) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EB651
 * Original: 0x002EB651 - 0x002EB669 (24 bytes, 8 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB651(void)
{

loc_002EB651: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x002EB65Du); RECOMP_ABI_CALL(0x002EB33Cu, sub_002EB33C); /* call 0x002EB33C */

loc_002EB65D: ;
    MEM32(esi) = 0x322A5C;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EB669
 * Original: 0x002EB669 - 0x002EB684 (27 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB669(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB669: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002EB671u); RECOMP_ABI_CALL(0x002EA72Cu, sub_002EA72C); /* call 0x002EA72C */

loc_002EB671: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB67E; /* je: equal / zero */

loc_002EB678: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EB67Eu); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002EB67E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EB684
 * Original: 0x002EB684 - 0x002EB6D2 (78 bytes, 24 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB684(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB684: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EB68Au); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EB68A: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EB6AC; /* je: equal / zero */

loc_002EB696: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB6A5; /* je: equal / zero */

loc_002EB69A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EB6A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EB69Fu); } /* indirect call */
    }

loc_002EB6A5: ;
    eax = 0x80004005u;
    goto loc_002EB6CE;

loc_002EB6AC: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x002EB6BAu); RECOMP_ABI_CALL(0x002EB418u, sub_002EB418); /* call 0x002EB418 */

loc_002EB6BA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB6CB; /* je: equal / zero */

loc_002EB6C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EB6CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EB6C5u); } /* indirect call */
    }

loc_002EB6CB: ;
    eax = edi;
    POP32(esp, edi);

loc_002EB6CE: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EB6D2
 * Original: 0x002EB6D2 - 0x002EB720 (78 bytes, 24 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB6D2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB6D2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EB6D8u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EB6D8: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EB6FA; /* je: equal / zero */

loc_002EB6E4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB6F3; /* je: equal / zero */

loc_002EB6E8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EB6F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EB6EDu); } /* indirect call */
    }

loc_002EB6F3: ;
    eax = 0x80004005u;
    goto loc_002EB71C;

loc_002EB6FA: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x002EB708u); RECOMP_ABI_CALL(0x002EB43Cu, sub_002EB43C); /* call 0x002EB43C */

loc_002EB708: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB719; /* je: equal / zero */

loc_002EB70E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EB719u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EB713u); } /* indirect call */
    }

loc_002EB719: ;
    eax = edi;
    POP32(esp, edi);

loc_002EB71C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EB720
 * Original: 0x002EB720 - 0x002EB776 (86 bytes, 27 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB720(void)
{
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

loc_002EB720: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EB726u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EB726: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EB748; /* je: equal / zero */

loc_002EB732: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB741; /* je: equal / zero */

loc_002EB736: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EB741u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EB73Bu); } /* indirect call */
    }

loc_002EB741: ;
    eax = 0x80004005u;
    goto loc_002EB772;

loc_002EB748: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x002EB75Eu); RECOMP_ABI_CALL(0x002EB459u, sub_002EB459); /* call 0x002EB459 */

loc_002EB75E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB76F; /* je: equal / zero */

loc_002EB764: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EB76Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EB769u); } /* indirect call */
    }

loc_002EB76F: ;
    eax = edi;
    POP32(esp, edi);

loc_002EB772: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EB776
 * Original: 0x002EB776 - 0x002EB7CC (86 bytes, 27 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB776(void)
{
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

loc_002EB776: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EB77Cu); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EB77C: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EB79E; /* je: equal / zero */

loc_002EB788: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB797; /* je: equal / zero */

loc_002EB78C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EB797u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EB791u); } /* indirect call */
    }

loc_002EB797: ;
    eax = 0x80004005u;
    goto loc_002EB7C8;

loc_002EB79E: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x002EB7B4u); RECOMP_ABI_CALL(0x002EB48Cu, sub_002EB48C); /* call 0x002EB48C */

loc_002EB7B4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB7C5; /* je: equal / zero */

loc_002EB7BA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EB7C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EB7BFu); } /* indirect call */
    }

loc_002EB7C5: ;
    eax = edi;
    POP32(esp, edi);

loc_002EB7C8: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EB7CC
 * Original: 0x002EB7CC - 0x002EB833 (103 bytes, 34 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EB7CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002EB7CC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EB7D5u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EB7D5: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EB7F7; /* je: equal / zero */

loc_002EB7E1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB7F0; /* je: equal / zero */

loc_002EB7E5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EB7F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EB7EAu); } /* indirect call */
    }

loc_002EB7F0: ;
    eax = 0x80004005u;
    goto loc_002EB82E;

loc_002EB7F7: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EB81Au); RECOMP_ABI_CALL(0x002EB4BFu, sub_002EB4BF); /* call 0x002EB4BF */

loc_002EB81A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB82B; /* je: equal / zero */

loc_002EB820: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EB82Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EB825u); } /* indirect call */
    }

loc_002EB82B: ;
    eax = edi;
    POP32(esp, edi);

loc_002EB82E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EB833
 * Original: 0x002EB833 - 0x002EB89A (103 bytes, 34 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EB833(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002EB833: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EB83Cu); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EB83C: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EB85E; /* je: equal / zero */

loc_002EB848: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB857; /* je: equal / zero */

loc_002EB84C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EB857u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EB851u); } /* indirect call */
    }

loc_002EB857: ;
    eax = 0x80004005u;
    goto loc_002EB895;

loc_002EB85E: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EB881u); RECOMP_ABI_CALL(0x002EB511u, sub_002EB511); /* call 0x002EB511 */

loc_002EB881: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB892; /* je: equal / zero */

loc_002EB887: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EB892u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EB88Cu); } /* indirect call */
    }

loc_002EB892: ;
    eax = edi;
    POP32(esp, edi);

loc_002EB895: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EB89A
 * Original: 0x002EB89A - 0x002EB8EC (82 bytes, 25 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB89A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB89A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EB8A0u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EB8A0: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EB8C2; /* je: equal / zero */

loc_002EB8AC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB8BB; /* je: equal / zero */

loc_002EB8B0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EB8BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EB8B5u); } /* indirect call */
    }

loc_002EB8BB: ;
    eax = 0x80004005u;
    goto loc_002EB8E8;

loc_002EB8C2: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x002EB8D4u); RECOMP_ABI_CALL(0x002EB563u, sub_002EB563); /* call 0x002EB563 */

loc_002EB8D4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB8E5; /* je: equal / zero */

loc_002EB8DA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EB8E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EB8DFu); } /* indirect call */
    }

loc_002EB8E5: ;
    eax = edi;
    POP32(esp, edi);

loc_002EB8E8: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EB8EC
 * Original: 0x002EB8EC - 0x002EB908 (28 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB8EC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EB8EC: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EB905u); RECOMP_ABI_CALL(0x002EB684u, sub_002EB684); /* call 0x002EB684 */

loc_002EB905: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EB908
 * Original: 0x002EB908 - 0x002EB924 (28 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB908(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EB908: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EB921u); RECOMP_ABI_CALL(0x002EB6D2u, sub_002EB6D2); /* call 0x002EB6D2 */

loc_002EB921: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EB924
 * Original: 0x002EB924 - 0x002EB948 (36 bytes, 13 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB924(void)
{
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

loc_002EB924: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EB945u); RECOMP_ABI_CALL(0x002EB720u, sub_002EB720); /* call 0x002EB720 */

loc_002EB945: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EB948
 * Original: 0x002EB948 - 0x002EB96C (36 bytes, 13 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB948(void)
{
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

loc_002EB948: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EB969u); RECOMP_ABI_CALL(0x002EB776u, sub_002EB776); /* call 0x002EB776 */

loc_002EB969: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EB96C
 * Original: 0x002EB96C - 0x002EB9A1 (53 bytes, 20 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EB96C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002EB96C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EB99Du); RECOMP_ABI_CALL(0x002EB7CCu, sub_002EB7CC); /* call 0x002EB7CC */

loc_002EB99D: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EB9A1
 * Original: 0x002EB9A1 - 0x002EB9D6 (53 bytes, 20 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EB9A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002EB9A1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EB9D2u); RECOMP_ABI_CALL(0x002EB833u, sub_002EB833); /* call 0x002EB833 */

loc_002EB9D2: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EB9D6
 * Original: 0x002EB9D6 - 0x002EB9F6 (32 bytes, 11 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB9D6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EB9D6: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EB9F3u); RECOMP_ABI_CALL(0x002EB89Au, sub_002EB89A); /* call 0x002EB89A */

loc_002EB9F3: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EB9F6
 * Original: 0x002EB9F6 - 0x002EBABF (201 bytes, 73 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EB9F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB9F6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBA00u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EBA00: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EBA28; /* je: equal / zero */

loc_002EBA0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EBA1E; /* je: equal / zero */

loc_002EBA13: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EBA1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EBA18u); } /* indirect call */
    }

loc_002EBA1E: ;
    eax = 0x80004005u;
    goto loc_002EBABB;

loc_002EBA28: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBA33u); RECOMP_ABI_CALL(0x002E9FCAu, sub_002E9FCA); /* call 0x002E9FCA */

loc_002EBA33: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EBAA6; /* jne: not equal / not zero */

loc_002EBA3A: ;
    esi = edi + 0x18;
    PUSH32(esp, ebx);
    ebx = esi;
    MEM32(ebp + 8) = 4;

loc_002EBA47: ;
    PUSH32(esp, MEM32(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBA4Eu); RECOMP_ABI_CALL(0x002EB082u, sub_002EB082); /* call 0x002EB082 */

loc_002EBA4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002EBA47; /* jne: not equal / not zero */

loc_002EBA56: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EBA58: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBA5Eu); RECOMP_ABI_CALL(0x002EA3A5u, sub_002EA3A5); /* call 0x002EA3A5 */

loc_002EBA5E: ;
    eax = MEM32(esi);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBA6Au); RECOMP_ABI_CALL(0x002EB0BAu, sub_002EB0BA); /* call 0x002EB0BA */

loc_002EBA6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002EBA74; /* jl: less (signed <) */

loc_002EBA6E: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EBA58; /* jne: not equal / not zero */

loc_002EBA74: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EBA83; /* je: equal / zero */

loc_002EBA7A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBA80u); RECOMP_ABI_CALL(0x002EA19Du, sub_002EA19D); /* call 0x002EA19D */

loc_002EBA80: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EBA83: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EBA58; /* jb: below (unsigned <) */

loc_002EBA8C: ;
    eax = MEM32(edi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_002EBA9E; /* je: equal / zero */

loc_002EBA94: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBA9Au); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002EBA9A: ;
    MEM32(edi + 0x28) = MEM32(edi + 0x28) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EBA9E: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBAA4u); RECOMP_ABI_CALL(0x002E9FCAu, sub_002E9FCA); /* call 0x002E9FCA */

loc_002EBAA4: ;
    esi = eax;

loc_002EBAA6: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EBAB7; /* je: equal / zero */

loc_002EBAAC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EBAB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EBAB1u); } /* indirect call */
    }

loc_002EBAB7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);

loc_002EBABB: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EBABF
 * Original: 0x002EBABF - 0x002EBB0C (77 bytes, 26 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBABF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EBABF: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB0), 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x322A3C;
    if (CMP_EQ(_fa, _fb)) goto loc_002EBAD9; /* je: equal / zero */

loc_002EBAD2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x002EBAD9u); RECOMP_ABI_CALL(0x002EB269u, sub_002EB269); /* call 0x002EB269 */

loc_002EBAD9: ;
    edi = esi + 0xB4;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EBAEE; /* je: equal / zero */

loc_002EBAE5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EBAEBu); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002EBAEB: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EBAEE: ;
    edi = esi + 0xB8;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EBB03; /* je: equal / zero */

loc_002EBAFA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EBB00u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002EBB00: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EBB03: ;
    POP32(esp, edi);
    MEM32(esi) = 0x322A18;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EBB0C
 * Original: 0x002EBB0C - 0x002EBB92 (134 bytes, 55 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EBB0C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EBB0C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBB25u); RECOMP_ABI_CALL(0x002ECC13u, sub_002ECC13); /* call 0x002ECC13 */

loc_002EBB25: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EBB7E; /* je: equal / zero */

loc_002EBB2B: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), 0x200010 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EBB7E; /* jne: not equal / not zero */

loc_002EBB34: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EBB7E; /* je: equal / zero */

loc_002EBB39: ;
    eax = ebp + -72;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = eax;

loc_002EBB42: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002EBB70; /* jae: above or equal (unsigned >=) */

loc_002EBB4A: ;
    ecx = edi;
    edx = ebp + eax * 8 + -72;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBB55u); RECOMP_ABI_CALL(0x002EA034u, sub_002EA034); /* call 0x002EA034 */

loc_002EBB55: ;
    MEM32(edx) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebp + eax * 8 + -68) = ebx;
    ecx = MEM32(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ~eax;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EBB42; /* jne: not equal / not zero */

loc_002EBB70: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBB7Bu); RECOMP_ABI_CALL(0x002EB19Eu, sub_002EB19E); /* call 0x002EB19E */

loc_002EBB7B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002EBB7E: ;
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBB86u); RECOMP_ABI_CALL(0x002EA1D2u, sub_002EA1D2); /* call 0x002EA1D2 */

loc_002EBB86: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EBB92
 * Original: 0x002EBB92 - 0x002EBC1E (140 bytes, 49 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EBB92(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EBB92: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x80000000u;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), edi (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -4) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_002EBBBA; /* jne: not equal / not zero */

loc_002EBBAA: ;
    eax = MEM32(esi + 0xBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002EBBC0; /* je: equal / zero */

loc_002EBBB4: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBBBAu); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002EBBBA: ;
    MEM32(esi + 0xBC) = ebx;

loc_002EBBC0: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xC0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EBC06; /* je: equal / zero */

loc_002EBBCD: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002EBBDF; /* je: equal / zero */

loc_002EBBD4: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 8) = MEM32(esi + 8) | edi;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xBC) = ecx;
    goto loc_002EBC06;

loc_002EBBDF: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0x7F;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x61645344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBBEFu); RECOMP_ABI_CALL(0x002ECADEu, sub_002ECADE); /* call 0x002ECADE */

loc_002EBBEF: ;
    MEM32(esi + 0xBC) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    eax = eax + 0x8007000Eu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;

loc_002EBC06: ;
    PUSH32(esp, MEM32(esi + 0xC0));
    ecx = esi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBC14u); RECOMP_ABI_CALL(0x002EB62Du, sub_002EB62D); /* call 0x002EB62D */

loc_002EBC14: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EBC1E
 * Original: 0x002EBC1E - 0x002EBCCC (174 bytes, 60 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EBC1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EBC1E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EBC35; /* jne: not equal / not zero */

loc_002EBC2D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    MEM32(ebp + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002EBC3C; /* je: equal / zero */

loc_002EBC35: ;
    MEM32(ebp + 0xC) = 1;

loc_002EBC3C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBC41u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EBC41: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), edi (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EBC65; /* je: equal / zero */

loc_002EBC4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EBC5E; /* je: equal / zero */

loc_002EBC53: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EBC5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EBC58u); } /* indirect call */
    }

loc_002EBC5E: ;
    eax = 0x80004005u;
    goto loc_002EBCC6;

loc_002EBC65: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xBC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0xBC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EBC7F; /* jne: not equal / not zero */

loc_002EBC74: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EBCB2; /* je: equal / zero */

loc_002EBC7F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBC8Au); RECOMP_ABI_CALL(0x002F133Cu, sub_002F133C); /* call 0x002F133C */

loc_002EBC8A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002EBCB2; /* jl: less (signed <) */

loc_002EBC90: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBC9Cu); RECOMP_ABI_CALL(0x002EBB92u, sub_002EBB92); /* call 0x002EBB92 */

loc_002EBC9C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002EBCB2; /* jl: less (signed <) */

loc_002EBCA2: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EBCB2; /* je: equal / zero */

loc_002EBCA8: ;
    ecx = MEM32(esi + 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBCB0u); RECOMP_ABI_CALL(0x002F1225u, sub_002F1225); /* call 0x002F1225 */

loc_002EBCB0: ;
    edi = eax;

loc_002EBCB2: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002EBCC4; /* je: equal / zero */

loc_002EBCB9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EBCC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EBCBEu); } /* indirect call */
    }

loc_002EBCC4: ;
    eax = edi;

loc_002EBCC6: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EBCCC
 * Original: 0x002EBCCC - 0x002EBF0C (576 bytes, 216 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EBCCC(void)
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

loc_002EBCCC: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + 0x78;
    PUSH32(esp, 0x002EBCE1u); RECOMP_ABI_CALL(0x002E9F69u, sub_002E9F69); /* call 0x002E9F69 */

loc_002EBCE1: ;
    esi = MEM32(ebp + 0x78);
    ebx = MEM32(ebp + 0x7C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(ebp + 0x6C) = eax;
    MEM32(ebp + 0x68) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EBD01; /* je: equal / zero */

loc_002EBCF6: ;
    eax = eax | MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | MEM32(ebx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x6C) = eax;
    MEM32(ebp + 0x68) = ecx;

loc_002EBD01: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_002EBD0B; /* jne: not equal / not zero */

loc_002EBD06: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EBD40; /* jne: not equal / not zero */

loc_002EBD0B: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EBD1Cu); RECOMP_ABI_CALL(0x002ECD1Cu, sub_002ECD1C); /* call 0x002ECD1C */

loc_002EBD1C: ;
    eax = esi + 0x44;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = eax;
    esi = ebp + -32;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_002EBD39; /* je: equal / zero */

loc_002EBD2D: ;
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | 0x40;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ebp + -32;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_002EBD39: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | 0x40;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(ebp + 0x78);

loc_002EBD40: ;
    eax = MEM32(ebp + 0x6C);
    eax = eax & 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_002EBD5B; /* je: equal / zero */

loc_002EBD4A: ;
    _fa = (uint32_t)(MEM32(ebx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EBD58; /* je: equal / zero */

loc_002EBD50: ;
    MEM16(ebp + 0x6E) = MEM16(ebp + 0x6E) | 0x7FF;
    _fa = (uint32_t)(MEM16(ebp + 0x6E)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    goto loc_002EBD5B;

loc_002EBD58: ;
    MEM32(ebp + 0x6C) = eax;

loc_002EBD5B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EBECE; /* je: equal / zero */

loc_002EBD63: ;
    ecx = MEM32(ebx + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EBECE; /* je: equal / zero */

loc_002EBD6F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x410001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x6C), 0x410001 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EBD86; /* jne: not equal / not zero */

loc_002EBD78: ;
    edx = MEM32(ebp + 0x68);
    eax = 0x18000000;
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EBDDA; /* je: equal / zero */

loc_002EBD86: ;
    eax = ebp + 0x54;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + 0x48;
    PUSH32(esp, eax);
    eax = ebx + 8;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x306AD4); PUSH32(esp, 0x002EBD9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EBD97u); } /* indirect call */
    }

loc_002EBD9D: ;
    eax = ebx + 0x5C;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = eax;
    esi = ebp + 0x48;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_002EBDBA; /* je: equal / zero */

loc_002EBDAE: ;
    MEM8(ebp + 0x6F) = MEM8(ebp + 0x6F) | 8;
    _fa = (uint32_t)(MEM8(ebp + 0x6F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esi = ebp + 0x48;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_002EBDBA: ;
    fp_push(MEMF(ebx + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x54)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EBDD3; /* jnp: not parity */

loc_002EBDC9: ;
    eax = MEM32(ebp + 0x54);
    MEM8(ebp + 0x6F) = MEM8(ebp + 0x6F) | 0x10;
    _fa = (uint32_t)(MEM8(ebp + 0x6F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebx + 0x68) = eax;

loc_002EBDD3: ;
    MEM8(ebp + 0x6B) = MEM8(ebp + 0x6B) | 0x18;
    _fa = (uint32_t)(MEM8(ebp + 0x6B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esi = MEM32(ebp + 0x78);

loc_002EBDDA: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18400044) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x6C), 0x18400044 (32-bit) */
    edi = 0x20000000;
    if (TEST_NZ(_fa, _fb)) goto loc_002EBDED; /* jne: not equal / not zero */

loc_002EBDE8: ;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x68), edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EBE44; /* jne: not equal / not zero */

loc_002EBDED: ;
    fp_push(MEMF(ebx + 0x68)); /* fld float */
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebx + 0x5C;
    PUSH32(esp, eax);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x40));
    PUSH32(esp, 0x002EBE14u); RECOMP_ABI_CALL(0x002EA038u, sub_002EA038); /* call 0x002EA038 */

loc_002EBE14: ;
    fp_push(MEMF(ebx + 0x74)); /* fld float */
    fp_push(MEMF(ebp + 0x60)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002EBE32; /* jp: parity */

loc_002EBE23: ;
    fp_push(MEMF(ebx + 0x78)); /* fld float */
    fp_push(MEMF(ebp + 0x64)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EBE41; /* jnp: not parity */

loc_002EBE32: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | edi;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x74) = eax;
    eax = MEM32(ebp + 0x64);
    MEM32(ebx + 0x78) = eax;

loc_002EBE41: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | edi;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002EBE44: ;
    _fa = (uint32_t)(MEM16(ebp + 0x6E)) & 0xFFFFu; _fb = (uint32_t)(0x808) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + 0x6E), 0x808 (16-bit) */
    edi = 0x40000000;
    if (TEST_NZ(_fa, _fb)) goto loc_002EBE56; /* jne: not equal / not zero */

loc_002EBE51: ;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x68), edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EBE83; /* jne: not equal / not zero */

loc_002EBE56: ;
    eax = ebp + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebx + 0x5C;
    PUSH32(esp, eax);
    eax = ebx + 0x28;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x306ADC); PUSH32(esp, 0x002EBE68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EBE62u); } /* indirect call */
    }

loc_002EBE68: ;
    fp_push(MEMF(ebx + 0x70)); /* fld float */
    fp_push(MEMF(ebp + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EBE80; /* jnp: not parity */

loc_002EBE77: ;
    eax = MEM32(ebp + 0x5C);
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | edi;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x70) = eax;

loc_002EBE80: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | edi;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002EBE83: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8420002) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x6C), 0x8420002 (32-bit) */
    edi = 0x80000000u;
    if (TEST_NZ(_fa, _fb)) goto loc_002EBE9A; /* jne: not equal / not zero */

loc_002EBE91: ;
    eax = MEM32(ebp + 0x68);
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EBECE; /* je: equal / zero */

loc_002EBE9A: ;
    eax = ebp + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebx + 0x5C;
    PUSH32(esp, eax);
    eax = ebx + 0x14;
    PUSH32(esp, eax);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x40));
    { uint32_t _icall_target = MEM32(0x306AE0); PUSH32(esp, 0x002EBEB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EBEADu); } /* indirect call */
    }

loc_002EBEB3: ;
    fp_push(MEMF(ebx + 0x6C)); /* fld float */
    fp_push(MEMF(ebp + 0x58)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EBECB; /* jnp: not parity */

loc_002EBEC2: ;
    eax = MEM32(ebp + 0x58);
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | edi;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x6C) = eax;

loc_002EBECB: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | edi;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002EBECE: ;
    ecx = MEM32(ebp + 0x6C);
    eax = ecx;
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    if ((_fa == 0)) goto loc_002EBEDB; /* je: equal / zero */

loc_002EBED9: ;
    MEM32(esi) = eax;

loc_002EBEDB: ;
    eax = MEM32(ebp + 0x68);
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_002EBEE6; /* je: equal / zero */

loc_002EBEE3: ;
    MEM32(esi + 4) = eax;

loc_002EBEE6: ;
    eax = 0xFFFF0000u;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_002EBEF1; /* je: equal / zero */

loc_002EBEEF: ;
    MEM32(ebx) = ecx;

loc_002EBEF1: ;
    ecx = MEM32(ebp + 0x68);
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_002EBEFB; /* je: equal / zero */

loc_002EBEF8: ;
    MEM32(ebx + 4) = ecx;

loc_002EBEFB: ;
    ecx = ebp + 0x78;
    PUSH32(esp, 0x002EBF03u); RECOMP_ABI_CALL(0x002E9F8Eu, sub_002E9F8E); /* call 0x002E9F8E */

loc_002EBF03: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EBF0C
 * Original: 0x002EBF0C - 0x002EBF2C (32 bytes, 11 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBF0C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EBF0C: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EBF29u); RECOMP_ABI_CALL(0x002EBC1Eu, sub_002EBC1E); /* call 0x002EBC1E */

loc_002EBF29: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EBF2C
 * Original: 0x002EBF2C - 0x002EBFBB (143 bytes, 51 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBF2C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EBF2C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0xF);
    POP32(esp, ecx);
    PUSH32(esp, 0x3F);
    POP32(esp, ebp);
    MEM32(ebx + 4) = 1;
    MEM32(ebx) = 0x322A18;
    edi = ebx + 0x38;
    esi = 0x306124;
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
    eax = ebx + 0x80;
    edx = 0xFFF;
    PUSH32(esp, 0xC);
    MEM32(ebx + 0x30) = ebp;
    MEM32(eax) = edx;
    edi = ebx + 0x84;
    POP32(esp, ecx);
    esi = 0x3060F0;
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
    MEM32(ebx + 0x30) = ebp;
    MEM32(eax) = edx;
    eax = MEM32(0x306420);
    ecx = eax;
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002EBF8D; /* ja: above (unsigned >) */

loc_002EBF86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFC0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFC0000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EBF92; /* je: equal / zero */

loc_002EBF8D: ;
    PUSH32(esp, 0x002EBF92u); RECOMP_ABI_CALL(0x00295E7Du, sub_00295E7D); /* call 0x00295E7D */

loc_002EBF92: ;
    MEM32(0x30641C) = eax;
    PUSH32(esp, 7);
    POP32(esp, ecx);
    edi = ebx + 0x10;
    eax = 0x1010101;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    PUSH32(esp, 0);
    ecx = ebx;
    MEM8(ebx + 0x2F) = 0;
    PUSH32(esp, 0x002EBFB4u); RECOMP_ABI_CALL(0x002EA21Cu, sub_002EA21C); /* call 0x002EA21C */

loc_002EBFB4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EBFB5
 * Original: 0x002EBFB5 - 0x002EBFBB (6 bytes, 5 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBFB5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EBFB5: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EBFBB
 * Original: 0x002EBFBB - 0x002EC055 (154 bytes, 53 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EBFBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EBFBB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBFC4u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EBFC4: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EBFE9; /* je: equal / zero */

loc_002EBFD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EBFE2; /* je: equal / zero */

loc_002EBFD7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EBFE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EBFDCu); } /* indirect call */
    }

loc_002EBFE2: ;
    eax = 0x80004005u;
    goto loc_002EC051;

loc_002EBFE9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EBFF4u); RECOMP_ABI_CALL(0x002E9F69u, sub_002E9F69); /* call 0x002E9F69 */

loc_002EBFF4: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC005u); RECOMP_ABI_CALL(0x002EBCCCu, sub_002EBCCC); /* call 0x002EBCCC */

loc_002EC005: ;
    ecx = MEM32(esi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC00Du); RECOMP_ABI_CALL(0x002EE00Au, sub_002EE00A); /* call 0x002EE00A */

loc_002EC00D: ;
    ebx = esi + 0x10;
    edi = MEM32(ebx);
    goto loc_002EC01F;

loc_002EC014: ;
    eax = edi + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC01Du); RECOMP_ABI_CALL(0x002EA646u, sub_002EA646); /* call 0x002EA646 */

loc_002EC01D: ;
    edi = MEM32(edi);

loc_002EC01F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EC014; /* jne: not equal / not zero */

loc_002EC023: ;
    eax = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x30) = edi;
    eax = MEM32(esi + 8);
    ecx = ebp + 8;
    MEM32(eax + 0x80) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC03Cu); RECOMP_ABI_CALL(0x002E9F8Eu, sub_002E9F8E); /* call 0x002E9F8E */

loc_002EC03C: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_002EC04F; /* je: equal / zero */

loc_002EC044: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EC04Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC049u); } /* indirect call */
    }

loc_002EC04F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EC051: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EC055
 * Original: 0x002EC055 - 0x002EC070 (27 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EC055(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EC055: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002EC05Du); RECOMP_ABI_CALL(0x002EBABFu, sub_002EBABF); /* call 0x002EBABF */

loc_002EC05D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EC06A; /* je: equal / zero */

loc_002EC064: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EC06Au); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002EC06A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EC070
 * Original: 0x002EC070 - 0x002EC172 (258 bytes, 79 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EC070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EC070: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x182000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebx + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002EC089; /* je: equal / zero */

loc_002EC084: ;
    MEM32(ebx + 0x20) = ebp;
    goto loc_002EC097;

loc_002EC089: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200010 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_002EC084; /* jne: not equal / not zero */

loc_002EC090: ;
    MEM32(ebx + 0x20) = 0x258;

loc_002EC097: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_002EC10A; /* je: equal / zero */

loc_002EC09B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA4);
    PUSH32(esp, 0x61645344);
    PUSH32(esp, 0x002EC0ACu); RECOMP_ABI_CALL(0x002ECADEu, sub_002ECADE); /* call 0x002ECADE */

loc_002EC0AC: ;
    ebp = eax;
    _cf = (int)((ebp) != 0);
    ebp = (uint32_t)(-(int32_t)ebp);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebp = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0x7FF8FFF2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    ebp = ebp + 0x8007000Eu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xB4) = eax;
    if ((_fas < 0)) goto loc_002EC16B; /* js: sign (negative) */

loc_002EC0CA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x12);
    POP32(esp, ecx);
    edi = eax + 8;
    esi = 0x30618C;
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
    edi = MEM32(ebx + 0xB4);
    PUSH32(esp, 9);
    POP32(esp, ecx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x80)) >> 32) & 1);
    edi = edi + 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x306160;
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
    eax = MEM32(ebx + 0xB4);
    MEM32(eax) = 0x7FF0000;
    eax = MEM32(ebx + 0xB4);
    POP32(esp, edi);
    MEM32(eax + 0x7C) = 0x7F0000;
    POP32(esp, esi);

loc_002EC10A: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 8), 0x400010 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_002EC13B; /* je: equal / zero */

loc_002EC113: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x61645344);
    PUSH32(esp, 0x002EC121u); RECOMP_ABI_CALL(0x002ECADEu, sub_002ECADE); /* call 0x002ECADE */

loc_002EC121: ;
    MEM32(ebx + 0xB8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    eax = eax + 0x8007000Eu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0xB) = MEM8(ebx + 0xB) | 1;
    _fa = (uint32_t)(MEM8(ebx + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ebp = eax;

loc_002EC13B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_002EC16B; /* jl: less (signed <) */

loc_002EC13F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = ebx;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x002EC154u); RECOMP_ABI_CALL(0x002EBB0Cu, sub_002EBB0C); /* call 0x002EBB0C */

loc_002EC154: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002EC163; /* jne: not equal / not zero */

loc_002EC158: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = ebx;
    PUSH32(esp, 0x002EC163u); RECOMP_ABI_CALL(0x002EB19Eu, sub_002EB19E); /* call 0x002EB19E */

loc_002EC163: ;
    eax = MEM32(ebx + 0x20);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebx + 0x1C) = eax;

loc_002EC16B: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EC172
 * Original: 0x002EC172 - 0x002EC197 (37 bytes, 13 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EC172(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EC172: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0);
    MEM32(esi) = 0x322A6C;
    PUSH32(esp, 0x002EC184u); RECOMP_ABI_CALL(0x002EBB92u, sub_002EBB92); /* call 0x002EBB92 */

loc_002EC184: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002EC18Fu); RECOMP_ABI_CALL(0x002EA657u, sub_002EA657); /* call 0x002EA657 */

loc_002EC18F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002EBABF(); return; /* tail jmp 0x002EBABF */

}

/**
 * sub_002EC197
 * Original: 0x002EC197 - 0x002EC1FC (101 bytes, 35 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EC197(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EC197: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x182000 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0x2F39B8;
    if (TEST_NZ(_fa, _fb)) goto loc_002EC1B1; /* jne: not equal / not zero */

loc_002EC1AE: ;
    ecx = MEM32(esi + 0xC);

loc_002EC1B1: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002EC1BDu); RECOMP_ABI_CALL(0x002EC070u, sub_002EC070); /* call 0x002EC070 */

loc_002EC1BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002EC1F7; /* jl: less (signed <) */

loc_002EC1C1: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x180000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x180000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EC1D7; /* je: equal / zero */

loc_002EC1CC: ;
    ecx = MEM32(esi + 0x14);
    MEM32(edi + 0xD4) = ecx;
    goto loc_002EC1E6;

loc_002EC1D7: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EC1E6; /* je: equal / zero */

loc_002EC1DC: ;
    MEM32(edi + 0xD4) = 0x1F;

loc_002EC1E6: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC1F7; /* je: equal / zero */

loc_002EC1ED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x002EC1F7u); RECOMP_ABI_CALL(0x002EBB92u, sub_002EBB92); /* call 0x002EBB92 */

loc_002EC1F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EC1FC
 * Original: 0x002EC1FC - 0x002EC2E3 (231 bytes, 80 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EC1FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EC1FC: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EC202u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EC202: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = ZX8(LO8(eax));
    MEM32(esp) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EC22A; /* je: equal / zero */

loc_002EC211: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC220; /* je: equal / zero */

loc_002EC215: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EC220u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC21Au); } /* indirect call */
    }

loc_002EC220: ;
    eax = 0x80004005u;
    goto loc_002EC2DF;

loc_002EC22A: ;
    PUSH32(esp, 0xE0);
    PUSH32(esp, 0x002EC234u); RECOMP_ABI_CALL(0x002E9F1Fu, sub_002E9F1F); /* call 0x002E9F1F */

loc_002EC234: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_002EC24A; /* je: equal / zero */

loc_002EC239: ;
    MEM32(eax + 4) = 1;
    MEM32(eax) = 0x322A6C;
    ecx = eax;
    goto loc_002EC24C;

loc_002EC24A: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EC24C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ebp = 0x7FF8FFF2;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _cf = 0; /* logical op clears CF */
    esi = esi & ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0x8007000Eu;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x1C) = ecx;
    if ((_fas < 0)) goto loc_002EC2C7; /* js: sign (negative) */

loc_002EC26D: ;
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, 0x002EC276u); RECOMP_ABI_CALL(0x002EC197u, sub_002EC197); /* call 0x002EC197 */

loc_002EC276: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_002EC2C7; /* jl: less (signed <) */

loc_002EC27C: ;
    PUSH32(esp, 0x158);
    PUSH32(esp, 0x002EC286u); RECOMP_ABI_CALL(0x002E9F1Fu, sub_002E9F1F); /* call 0x002E9F1F */

loc_002EC286: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_002EC29D; /* je: equal / zero */

loc_002EC28B: ;
    PUSH32(esp, MEM32(edi + 0x1C));
    ecx = MEM32(edi + 8);
    PUSH32(esp, MEM32(ecx + 0xC));
    ecx = eax;
    PUSH32(esp, 0x002EC29Bu); RECOMP_ABI_CALL(0x002F0DADu, sub_002F0DAD); /* call 0x002F0DAD */

loc_002EC29B: ;
    goto loc_002EC29F;

loc_002EC29D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EC29F: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x20) = eax;
    if ((_fas < 0)) goto loc_002EC2C7; /* js: sign (negative) */

loc_002EC2AE: ;
    ecx = eax;
    PUSH32(esp, 0x002EC2B5u); RECOMP_ABI_CALL(0x002F1201u, sub_002F1201); /* call 0x002F1201 */

loc_002EC2B5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_002EC2C7; /* jl: less (signed <) */

loc_002EC2BB: ;
    PUSH32(esp, MEM32(edi + 0x1C));
    PUSH32(esp, MEM32(edi + 0x20));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EC2C7u); RECOMP_ABI_CALL(0x002EB381u, sub_002EB381); /* call 0x002EB381 */

loc_002EC2C7: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC2D9; /* je: equal / zero */

loc_002EC2CE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EC2D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC2D3u); } /* indirect call */
    }

loc_002EC2D9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002EC2DF: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EC2E3
 * Original: 0x002EC2E3 - 0x002EC2FB (24 bytes, 9 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EC2E3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EC2E3: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EC2F8u); RECOMP_ABI_CALL(0x002EBFBBu, sub_002EBFBB); /* call 0x002EBFBB */

loc_002EC2F8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EC2FB
 * Original: 0x002EC2FB - 0x002EC397 (156 bytes, 57 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EC2FB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EC2FB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EC302u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EC302: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EC325; /* je: equal / zero */

loc_002EC30F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002EC31E; /* je: equal / zero */

loc_002EC313: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EC31Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC318u); } /* indirect call */
    }

loc_002EC31E: ;
    eax = 0x80004005u;
    goto loc_002EC392;

loc_002EC325: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x002EC32Cu); RECOMP_ABI_CALL(0x002E9F1Fu, sub_002E9F1F); /* call 0x002E9F1F */

loc_002EC32C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_002EC33E; /* je: equal / zero */

loc_002EC331: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, 0x002EC33Cu); RECOMP_ABI_CALL(0x002EB651u, sub_002EB651); /* call 0x002EB651 */

loc_002EC33C: ;
    edi = eax;

loc_002EC33E: ;
    PUSH32(esp, esi);
    esi = edi;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_002EC376; /* js: sign (negative) */

loc_002EC353: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EC35Du); RECOMP_ABI_CALL(0x002EC1FCu, sub_002EC1FC); /* call 0x002EC1FC */

loc_002EC35D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_002EC376; /* jl: less (signed <) */

loc_002EC363: ;
    ecx = MEM32(esp + 0x18);
    eax = edi;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x1C)) >> 32) & 1);
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = eax;
    goto loc_002EC380;

loc_002EC376: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC380; /* je: equal / zero */

loc_002EC37A: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x002EC380u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC37Du); } /* indirect call */
    }

loc_002EC380: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC38F; /* je: equal / zero */

loc_002EC384: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EC38Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC389u); } /* indirect call */
    }

loc_002EC38F: ;
    eax = esi;
    POP32(esp, esi);

loc_002EC392: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002EC397
 * Original: 0x002EC397 - 0x002EC3F6 (95 bytes, 28 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EC397(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EC397: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EC39Du); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EC39D: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EC3BF; /* je: equal / zero */

loc_002EC3A9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC3B8; /* je: equal / zero */

loc_002EC3AD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EC3B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC3B2u); } /* indirect call */
    }

loc_002EC3B8: ;
    eax = 0x80004005u;
    goto loc_002EC3F2;

loc_002EC3BF: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x70) = edx;
    eax = MEM32(ecx + 8);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 0x20;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EC3E1; /* jne: not equal / not zero */

loc_002EC3DB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EC3E1u); RECOMP_ABI_CALL(0x002EBFBBu, sub_002EBFBB); /* call 0x002EBFBB */

loc_002EC3E1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC3F0; /* je: equal / zero */

loc_002EC3E5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EC3F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC3EAu); } /* indirect call */
    }

loc_002EC3F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EC3F2: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EC3F6
 * Original: 0x002EC3F6 - 0x002EC455 (95 bytes, 28 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EC3F6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EC3F6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EC3FCu); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EC3FC: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EC41E; /* je: equal / zero */

loc_002EC408: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC417; /* je: equal / zero */

loc_002EC40C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EC417u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC411u); } /* indirect call */
    }

loc_002EC417: ;
    eax = 0x80004005u;
    goto loc_002EC451;

loc_002EC41E: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x6C) = edx;
    eax = MEM32(ecx + 8);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 0x10;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EC440; /* jne: not equal / not zero */

loc_002EC43A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EC440u); RECOMP_ABI_CALL(0x002EBFBBu, sub_002EBFBB); /* call 0x002EBFBB */

loc_002EC440: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC44F; /* je: equal / zero */

loc_002EC444: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EC44Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC449u); } /* indirect call */
    }

loc_002EC44F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EC451: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EC455
 * Original: 0x002EC455 - 0x002EC4E2 (141 bytes, 46 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EC455(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EC455: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC45Eu); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EC45E: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EC480; /* je: equal / zero */

loc_002EC46A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC479; /* je: equal / zero */

loc_002EC46E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EC479u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC473u); } /* indirect call */
    }

loc_002EC479: ;
    eax = 0x80004005u;
    goto loc_002EC4DD;

loc_002EC480: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    edx = MEM32(ebp + 0xC);
    MEM32(ecx + 0x50) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(ebp + 0x10);
    MEM32(ecx + 0x54) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(ebp + 0x14);
    MEM32(ecx + 0x58) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(ebp + 0x18);
    MEM32(ecx + 0x5C) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(ebp + 0x1C);
    MEM32(ecx + 0x60) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(ebp + 0x20);
    MEM32(ecx + 0x64) = edx;
    ecx = MEM32(eax + 8);
    MEM32(ecx + 0x30) = MEM32(ecx + 0x30) | 4;
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(ebp + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x24), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EC4CC; /* jne: not equal / not zero */

loc_002EC4C6: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC4CCu); RECOMP_ABI_CALL(0x002EBFBBu, sub_002EBFBB); /* call 0x002EBFBB */

loc_002EC4CC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC4DB; /* je: equal / zero */

loc_002EC4D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EC4DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC4D5u); } /* indirect call */
    }

loc_002EC4DB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EC4DD: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_002EC4E2
 * Original: 0x002EC4E2 - 0x002EC555 (115 bytes, 40 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EC4E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EC4E2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC4EBu); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EC4EB: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EC50D; /* je: equal / zero */

loc_002EC4F7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC506; /* je: equal / zero */

loc_002EC4FB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EC506u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC500u); } /* indirect call */
    }

loc_002EC506: ;
    eax = 0x80004005u;
    goto loc_002EC550;

loc_002EC50D: ;
    ecx = MEM32(ebp + 8);
    eax = ecx + 8;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(edx + 0x38) = edi;
    edx = MEM32(eax);
    edi = MEM32(ebp + 0x10);
    MEM32(edx + 0x3C) = edi;
    edx = MEM32(eax);
    edi = MEM32(ebp + 0x14);
    MEM32(edx + 0x40) = edi;
    eax = MEM32(eax);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 1;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x18), 1 (8-bit) */
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_002EC53F; /* jne: not equal / not zero */

loc_002EC539: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC53Fu); RECOMP_ABI_CALL(0x002EBFBBu, sub_002EBFBB); /* call 0x002EBFBB */

loc_002EC53F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC54E; /* je: equal / zero */

loc_002EC543: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EC54Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC548u); } /* indirect call */
    }

loc_002EC54E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EC550: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002EC555
 * Original: 0x002EC555 - 0x002EC5C8 (115 bytes, 40 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EC555(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EC555: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC55Eu); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EC55E: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EC580; /* je: equal / zero */

loc_002EC56A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC579; /* je: equal / zero */

loc_002EC56E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EC579u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC573u); } /* indirect call */
    }

loc_002EC579: ;
    eax = 0x80004005u;
    goto loc_002EC5C3;

loc_002EC580: ;
    ecx = MEM32(ebp + 8);
    eax = ecx + 8;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(edx + 0x44) = edi;
    edx = MEM32(eax);
    edi = MEM32(ebp + 0x10);
    MEM32(edx + 0x48) = edi;
    edx = MEM32(eax);
    edi = MEM32(ebp + 0x14);
    MEM32(edx + 0x4C) = edi;
    eax = MEM32(eax);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 2;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x18), 1 (8-bit) */
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_002EC5B2; /* jne: not equal / not zero */

loc_002EC5AC: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC5B2u); RECOMP_ABI_CALL(0x002EBFBBu, sub_002EBFBB); /* call 0x002EBFBB */

loc_002EC5B2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC5C1; /* je: equal / zero */

loc_002EC5B6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EC5C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC5BBu); } /* indirect call */
    }

loc_002EC5C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EC5C3: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002EC5C8
 * Original: 0x002EC5C8 - 0x002EC6D0 (264 bytes, 72 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EC5C8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EC5C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002EC5D1u); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EC5D1: ;
    _fa = (uint32_t)(MEM32(0x306424)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306424), edi (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_002EC5F5; /* je: equal / zero */

loc_002EC5DC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC5EB; /* je: equal / zero */

loc_002EC5E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EC5EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC5E5u); } /* indirect call */
    }

loc_002EC5EB: ;
    eax = 0x80004005u;
    goto loc_002EC6CB;

loc_002EC5F5: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EC60C; /* jne: not equal / not zero */

loc_002EC602: ;
    edi = 0x88780032u;
    goto loc_002EC6BA;

loc_002EC60C: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    MEM32(edx + 0x84) = ebx;
    ebx = MEM32(ecx + 4);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x88) = ebx;
    ebx = MEM32(ecx + 8);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x8C) = ebx;
    ebx = MEM32(ecx + 0xC);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x90) = ebx;
    ebx = MEM32(ecx + 0x10);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x94) = ebx;
    ebx = MEM32(ecx + 0x14);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x98) = ebx;
    ebx = MEM32(ecx + 0x18);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x9C) = ebx;
    ebx = MEM32(ecx + 0x1C);
    edx = MEM32(eax + 8);
    MEM32(edx + 0xA0) = ebx;
    ebx = MEM32(ecx + 0x20);
    edx = MEM32(eax + 8);
    MEM32(edx + 0xA4) = ebx;
    ebx = MEM32(ecx + 0x24);
    edx = MEM32(eax + 8);
    MEM32(edx + 0xA8) = ebx;
    ebx = MEM32(ecx + 0x28);
    edx = MEM32(eax + 8);
    MEM32(edx + 0xAC) = ebx;
    ecx = MEM32(ecx + 0x2C);
    edx = MEM32(eax + 8);
    MEM32(edx + 0xB0) = ecx;
    ecx = MEM32(eax + 8);
    MEM16(ecx + 0x80) = MEM16(ecx + 0x80) | 0xFFF;
    _fa = (uint32_t)(MEM16(ecx + 0x80)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 1 (8-bit) */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_002EC6BA; /* jne: not equal / not zero */

loc_002EC6B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EC6BAu); RECOMP_ABI_CALL(0x002EBFBBu, sub_002EBFBB); /* call 0x002EBFBB */

loc_002EC6BA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC6C9; /* je: equal / zero */

loc_002EC6BE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002EC6C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC6C3u); } /* indirect call */
    }

loc_002EC6C9: ;
    eax = edi;

loc_002EC6CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EC6D0
 * Original: 0x002EC6D0 - 0x002EC6EB (27 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EC6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EC6D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002EC6D8u); RECOMP_ABI_CALL(0x002EC172u, sub_002EC172); /* call 0x002EC172 */

loc_002EC6D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EC6E5; /* je: equal / zero */

loc_002EC6DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EC6E5u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002EC6E5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EC6EB
 * Original: 0x002EC6EB - 0x002EC70F (36 bytes, 12 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EC6EB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EC6EB: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EC70Cu); RECOMP_ABI_CALL(0x002EC2FBu, sub_002EC2FB); /* call 0x002EC2FB */

loc_002EC70C: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002EC70F
 * Original: 0x002EC70F - 0x002EC733 (36 bytes, 13 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EC70F(void)
{
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

loc_002EC70F: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EC730u); RECOMP_ABI_CALL(0x002EC397u, sub_002EC397); /* call 0x002EC397 */

loc_002EC730: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EC733
 * Original: 0x002EC733 - 0x002EC77D (74 bytes, 26 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EC733(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002EC733: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x24));
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC779u); RECOMP_ABI_CALL(0x002EC455u, sub_002EC455); /* call 0x002EC455 */

loc_002EC779: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EC77D
 * Original: 0x002EC77D - 0x002EC7B2 (53 bytes, 20 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EC77D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002EC77D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC7AEu); RECOMP_ABI_CALL(0x002EC4E2u, sub_002EC4E2); /* call 0x002EC4E2 */

loc_002EC7AE: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EC7B2
 * Original: 0x002EC7B2 - 0x002EC7D6 (36 bytes, 13 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EC7B2(void)
{
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

loc_002EC7B2: ;
    PUSH32(esp, MEM32(esp + 0xC));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EC7D3u); RECOMP_ABI_CALL(0x002EC3F6u, sub_002EC3F6); /* call 0x002EC3F6 */

loc_002EC7D3: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EC7D6
 * Original: 0x002EC7D6 - 0x002EC80B (53 bytes, 20 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EC7D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002EC7D6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = eax;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC807u); RECOMP_ABI_CALL(0x002EC555u, sub_002EC555); /* call 0x002EC555 */

loc_002EC807: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EC80B
 * Original: 0x002EC80B - 0x002EC82B (32 bytes, 11 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EC80B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EC80B: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EC828u); RECOMP_ABI_CALL(0x002EC5C8u, sub_002EC5C8); /* call 0x002EC5C8 */

loc_002EC828: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EC82B
 * Original: 0x002EC82B - 0x002EC964 (313 bytes, 117 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EC82B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EC82B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x60));
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xB4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC83Bu); RECOMP_ABI_CALL(0x002E9F1Fu, sub_002E9F1F); /* call 0x002E9F1F */

loc_002EC83B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_002EC849; /* je: equal / zero */

loc_002EC840: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC847u); RECOMP_ABI_CALL(0x002EBF2Cu, sub_002EBF2C); /* call 0x002EBF2C */

loc_002EC847: ;
    goto loc_002EC84B;

loc_002EC849: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EC84B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(esi + 8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = 0x7FF8FFF2;
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0x8007000Eu;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_002EC95D; /* js: sign (negative) */

loc_002EC86C: ;
    PUSH32(esp, 0x540);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC876u); RECOMP_ABI_CALL(0x002E9F1Fu, sub_002E9F1F); /* call 0x002E9F1F */

loc_002EC876: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_002EC889; /* je: equal / zero */

loc_002EC87B: ;
    PUSH32(esp, MEM32(esi + 8));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC885u); RECOMP_ABI_CALL(0x002ED9A3u, sub_002ED9A3); /* call 0x002ED9A3 */

loc_002EC885: ;
    ecx = eax;
    goto loc_002EC88B;

loc_002EC889: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EC88B: ;
    eax = ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = ecx;
    if ((_fas < 0)) goto loc_002EC95D; /* js: sign (negative) */

loc_002EC89E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC8A3u); RECOMP_ABI_CALL(0x002EE41Cu, sub_002EE41C); /* call 0x002EE41C */

loc_002EC8A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_002EC95D; /* jl: less (signed <) */

loc_002EC8AB: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x10);
    edi = ebp + -32;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, ecx);
    edi = ebp + -96;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 1);
    eax = ebp + -8;
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 0x40);
    eax = ebp + -96;
    PUSH32(esp, 0x626F5344);
    MEM32(ebp + -32) = 0x18;
    MEM32(ebp + -20) = 0x2F39E4;
    MEM32(ebp + -8) = 8;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC8ECu); RECOMP_ABI_CALL(0x002ECADEu, sub_002ECADE); /* call 0x002ECADE */

loc_002EC8EC: ;
    MEM32(esi + 0x28) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_002EC95D; /* js: sign (negative) */

loc_002EC8FC: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 8) = edi;
    ebx = esi + 0x18;

loc_002EC904: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_002EC95D; /* jae: above or equal (unsigned >=) */

loc_002EC90C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EC90E: ;
    edx = ecx + eax;
    MEM32(ebp + eax * 8 + -96) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002EC90E; /* jb: below (unsigned <) */

loc_002EC91B: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x1F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002EC924; /* jne: not equal / not zero */

loc_002EC921: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002EC924: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC930u); RECOMP_ABI_CALL(0x002EC2FBu, sub_002EC2FB); /* call 0x002EC2FB */

loc_002EC930: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_002EC952; /* jl: less (signed <) */

loc_002EC934: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(ebx);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC942u); RECOMP_ABI_CALL(0x002EBF0Cu, sub_002EBF0C); /* call 0x002EBF0C */

loc_002EC942: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_002EC952; /* jl: less (signed <) */

loc_002EC946: ;
    eax = MEM32(ebx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC952u); RECOMP_ABI_CALL(0x002EB05Eu, sub_002EB05E); /* call 0x002EB05E */

loc_002EC952: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(8)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 8;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_002EC904; /* jge: greater or equal (signed >=) */

loc_002EC95D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EC964
 * Original: 0x002EC964 - 0x002EC9D1 (109 bytes, 44 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EC964(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EC964: ;
    eax = MEM32(0x306AA8);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC97E; /* je: equal / zero */

loc_002EC970: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EC976u); RECOMP_ABI_CALL(0x002EAE70u, sub_002EAE70); /* call 0x002EAE70 */

loc_002EC976: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    goto loc_002EC9CB;

loc_002EC97E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x002EC986u); RECOMP_ABI_CALL(0x002E9F1Fu, sub_002E9F1F); /* call 0x002E9F1F */

loc_002EC986: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_002EC996; /* je: equal / zero */

loc_002EC98B: ;
    ecx = eax;
    PUSH32(esp, 0x002EC992u); RECOMP_ABI_CALL(0x002EA23Eu, sub_002EA23E); /* call 0x002EA23E */

loc_002EC992: ;
    edi = eax;
    goto loc_002EC998;

loc_002EC996: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EC998: ;
    esi = edi;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_002EC9C0; /* js: sign (negative) */

loc_002EC9AC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EC9B2u); RECOMP_ABI_CALL(0x002EC82Bu, sub_002EC82B); /* call 0x002EC82B */

loc_002EC9B2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_002EC9C0; /* jl: less (signed <) */

loc_002EC9B8: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edi;
    goto loc_002EC9CA;

loc_002EC9C0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002EC9CA; /* je: equal / zero */

loc_002EC9C4: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x002EC9CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EC9C7u); } /* indirect call */
    }

loc_002EC9CA: ;
    POP32(esp, edi);

loc_002EC9CB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EC9D1
 * Original: 0x002EC9D1 - 0x002ECA18 (71 bytes, 30 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EC9D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EC9D1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC9DCu); RECOMP_ABI_CALL(0x002EA135u, sub_002EA135); /* call 0x002EA135 */

loc_002EC9DC: ;
    esi = ZX8(LO8(eax));
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EC9E8u); RECOMP_ABI_CALL(0x002EC964u, sub_002EC964); /* call 0x002EC964 */

loc_002EC9E8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_002ECA01; /* jl: less (signed <) */

loc_002EC9EE: ;
    eax = MEM32(ebp + -4);
    ecx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;

loc_002ECA01: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002ECA10; /* je: equal / zero */

loc_002ECA05: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306430);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x002ECA10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002ECA0Au); } /* indirect call */
    }

loc_002ECA10: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002ECA18
 * Original: 0x002ECA18 - 0x002ECA5F (71 bytes, 27 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECA18(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ECA18: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 0x10));
    { uint32_t _icall_target = MEM32(0x31C82C); PUSH32(esp, 0x002ECA27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002ECA21u); } /* indirect call */
    }

loc_002ECA27: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ECA59; /* je: equal / zero */

loc_002ECA2D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C930); PUSH32(esp, 0x002ECA34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002ECA2Eu); } /* indirect call */
    }

loc_002ECA34: ;
    edx = MEM32(0x306AD0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ECA59; /* je: equal / zero */

loc_002ECA43: ;
    ecx = eax;
    edx = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);

loc_002ECA59: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002ECA5F
 * Original: 0x002ECA5F - 0x002ECA77 (24 bytes, 5 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECA5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002ECA5F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x31C930); PUSH32(esp, 0x002ECA69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002ECA63u); } /* indirect call */
    }

loc_002ECA69: ;
    ecx = MEM32(0x306AD0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx) = MEM32(ecx) - eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x31C820)); return; /* indirect tail jmp */

}

/**
 * sub_002ECA77
 * Original: 0x002ECA77 - 0x002ECAC6 (79 bytes, 30 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECA77(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ECA77: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    { uint32_t _icall_target = MEM32(0x31C8E4); PUSH32(esp, 0x002ECA8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002ECA88u); } /* indirect call */
    }

loc_002ECA8E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ECAC0; /* je: equal / zero */

loc_002ECA94: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C8E8); PUSH32(esp, 0x002ECA9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002ECA95u); } /* indirect call */
    }

loc_002ECA9B: ;
    edx = MEM32(0x306ACC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ECAC0; /* je: equal / zero */

loc_002ECAAA: ;
    ecx = eax;
    edx = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);

loc_002ECAC0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002ECAC6
 * Original: 0x002ECAC6 - 0x002ECADE (24 bytes, 5 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECAC6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002ECAC6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x31C8E8); PUSH32(esp, 0x002ECAD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002ECACAu); } /* indirect call */
    }

loc_002ECAD0: ;
    ecx = MEM32(0x306ACC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx) = MEM32(ecx) - eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x31C76C)); return; /* indirect tail jmp */

}

/**
 * sub_002ECADE
 * Original: 0x002ECADE - 0x002ECB46 (104 bytes, 42 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECADE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ECADE: ;
    ecx = MEM32(0x306A20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_002ECB1A; /* je: equal / zero */

loc_002ECAED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002ECAF3u); RECOMP_ABI_CALL(0x002EED8Fu, sub_002EED8F); /* call 0x002EED8F */

loc_002ECAF3: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ECB20; /* je: equal / zero */

loc_002ECAF9: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ECB1C; /* je: equal / zero */

loc_002ECB00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, ebx);
    goto loc_002ECB1C;

loc_002ECB1A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002ECB1C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002ECB40; /* jne: not equal / not zero */

loc_002ECB20: ;
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x002ECB31u); RECOMP_ABI_CALL(0x002ECA18u, sub_002ECA18); /* call 0x002ECA18 */

loc_002ECB31: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ECB40; /* je: equal / zero */

loc_002ECB37: ;
    MEM32(edx) = 0x6C6F6F70;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002ECB40: ;
    eax = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002ECB46
 * Original: 0x002ECB46 - 0x002ECB7A (52 bytes, 16 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECB46(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ECB46: ;
    edx = MEM32(esp + 4);
    eax = edx + -4;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C6F6F70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6C6F6F70 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002ECB5F; /* jne: not equal / not zero */

loc_002ECB57: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002ECB5Du); RECOMP_ABI_CALL(0x002ECA5Fu, sub_002ECA5F); /* call 0x002ECA5F */

loc_002ECB5D: ;
    goto loc_002ECB77;

loc_002ECB5F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x706F6C73) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x706F6C73 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002ECB77; /* jne: not equal / not zero */

loc_002ECB67: ;
    ecx = MEM32(0x306A20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ECB77; /* je: equal / zero */

loc_002ECB71: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002ECB77u); RECOMP_ABI_CALL(0x002EEFACu, sub_002EEFAC); /* call 0x002EEFAC */

loc_002ECB77: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002ECB7A
 * Original: 0x002ECB7A - 0x002ECBA3 (41 bytes, 12 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECB7A(void)
{

loc_002ECB7A: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM16(eax) = 1;
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 2) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0xE));
    MEM8(eax + 3) = LO8(edx);
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = ZX8(MEM8(ecx + 0xC));
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002ECBA3
 * Original: 0x002ECBA3 - 0x002ECBCA (39 bytes, 11 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECBA3(void)
{

loc_002ECBA3: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM16(eax) = 0x69;
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 2) = LO8(edx);
    MEM8(eax + 3) = 4;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = ZX8(MEM8(ecx + 0xC));
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002ECBCA
 * Original: 0x002ECBCA - 0x002ECC13 (73 bytes, 31 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECBCA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ECBCA: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx + 0x18;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    edi = 0x3060E0;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_002ECBF0; /* jne: not equal / not zero */

loc_002ECBE4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x002ECBEEu); RECOMP_ABI_CALL(0x002ECB7Au, sub_002ECB7A); /* call 0x002ECB7A */

loc_002ECBEE: ;
    goto loc_002ECC0A;

loc_002ECBF0: ;
    PUSH32(esp, 4);
    esi = eax;
    POP32(esp, ecx);
    edi = 0x3060D0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_002ECC0A; /* jne: not equal / not zero */

loc_002ECC00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x002ECC0Au); RECOMP_ABI_CALL(0x002ECBA3u, sub_002ECBA3); /* call 0x002ECBA3 */

loc_002ECC0A: ;
    eax = MEM32(ebx + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002ECC13
 * Original: 0x002ECC13 - 0x002ECC56 (67 bytes, 25 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECC13(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ECC13: ;
    ecx = MEM32(esp + 8);
    eax = ZX16(MEM16(ecx));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002ECC46; /* je: equal / zero */

loc_002ECC20: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x68;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002ECC3A; /* je: equal / zero */

loc_002ECC25: ;
    _fb = (uint32_t)(0xFF95) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xFF95;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_002ECC50; /* jne: not equal / not zero */

loc_002ECC2C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x002ECC36u); RECOMP_ABI_CALL(0x002ECBCAu, sub_002ECBCA); /* call 0x002ECBCA */

loc_002ECC36: ;
    esi = eax;
    goto loc_002ECC50;

loc_002ECC3A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x002ECC44u); RECOMP_ABI_CALL(0x002ECBA3u, sub_002ECBA3); /* call 0x002ECBA3 */

loc_002ECC44: ;
    goto loc_002ECC50;

loc_002ECC46: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x002ECC50u); RECOMP_ABI_CALL(0x002ECB7Au, sub_002ECB7A); /* call 0x002ECB7A */

loc_002ECC50: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002ECC56
 * Original: 0x002ECC56 - 0x002ECC61 (11 bytes, 2 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECC56(void)
{

loc_002ECC56: ;
    MEM32(0x306AD0) = 0x3063F8;
    esp += 4; return; /* ret */

}

/**
 * sub_002ECC61
 * Original: 0x002ECC61 - 0x002ECC6C (11 bytes, 2 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECC61(void)
{

loc_002ECC61: ;
    MEM32(0x306ACC) = 0x3063FC;
    esp += 4; return; /* ret */

}

/**
 * sub_002ECC6C
 * Original: 0x002ECC6C - 0x002ECC75 (9 bytes, 2 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ECC6C(void)
{

loc_002ECC6C: ;
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002ECC75
 * Original: 0x002ECC75 - 0x002ECC9C (39 bytes, 17 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_002ECC75(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002ECC75: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002ECC9C
 * Original: 0x002ECC9C - 0x002ECCD3 (55 bytes, 17 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002ECC9C(void)
{
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

loc_002ECC9C: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3337C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3337c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002ECCCE; /* jne: not equal / not zero */

loc_002ECCAD: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337A0)); /* fadd dword ptr [0x3337a0] */
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x322A7C)); /* fmul dword ptr [0x322a7c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002ECCCCu); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002ECCCC: ;
    goto loc_002ECCD0;

loc_002ECCCE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002ECCD0: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002ECCD3
 * Original: 0x002ECCD3 - 0x002ECD1C (73 bytes, 23 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_002ECCD3(void)
{
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

loc_002ECCD3: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3337C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3337c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002ECCEB; /* jp: parity */

loc_002ECCE4: ;
    eax = 0xFFFFD8F0u;
    goto loc_002ECD19;

loc_002ECCEB: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3337A0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3337a0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002ECD00; /* jne: not equal / not zero */

loc_002ECCFC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002ECD19;

loc_002ECD00: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3338CC)); /* fmul dword ptr [0x3338cc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002ECD19u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002ECD19: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002ECD1C
 * Original: 0x002ECD1C - 0x002ECD59 (61 bytes, 22 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_002ECD1C(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002ECD1C: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    edx = MEM32(esp + 0xC);
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002ECD59
 * Original: 0x002ECD59 - 0x002ECDA2 (73 bytes, 28 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_002ECD59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002ECD59: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    ecx = MEM32(ebp + 0x10);
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(ebp + 0x14);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002ECD93; /* je: equal / zero */

loc_002ECD78: ;
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_002ECD93: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ECD99u); RECOMP_ABI_CALL(0x002EE93Eu, sub_002EE93E); /* call 0x002EE93E */

loc_002ECD99: ;
    eax = MEM32(ebp + 0x18);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002ECDA2
 * Original: 0x002ECDA2 - 0x002ECF05 (355 bytes, 140 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 8 params, returns float_sse
 * Frame: standard_frame
 */
void sub_002ECDA2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002ECDA2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002ECDBA; /* je: equal / zero */

loc_002ECDAF: ;
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    goto loc_002ECDC9;

loc_002ECDBA: ;
    eax = 0x30613C;
    esi = 0x306148;
    edx = 0x2F3ACC;

loc_002ECDC9: ;
    ecx = MEM32(ebp + 0x18);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x3337C0)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002ECE72; /* jnp: not parity */

loc_002ECE0B: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    ecx = MEM32(ebp + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002ECE4F; /* jp: parity */

loc_002ECE3F: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333E50)); /* fmul dword ptr [0x333e50] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_002ECE5F;

loc_002ECE4F: ;
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333E50)); /* fmul dword ptr [0x333e50] */
    fp_top() = RECOMP_FP_PC(MEMF(0x333CD8) - fp_top()); /* fsubr dword ptr [0x333cd8] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_002ECE5F: ;
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002ECE79; /* jp: parity */

loc_002ECE6A: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_002ECE79;

loc_002ECE72: ;
    eax = MEM32(ebp + 0x24);
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */

loc_002ECE79: ;
    ecx = MEM32(ebp + 0x20);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    POP32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002ECEBE; /* jnp: not parity */

loc_002ECE8B: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002ECEAD; /* jne: not equal / not zero */

loc_002ECE9F: ;
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333E50)); /* fmul dword ptr [0x333e50] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_002ECEA9: ;
    fp_pop(); /* fstp st(0) */
    goto loc_002ECEC2;

loc_002ECEAD: ;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002ECEEF; /* jp: parity */

loc_002ECEBA: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_002ECEBE: ;
    fp_push(0.0); /* fldz */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_002ECEC2: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002ECED8; /* jp: parity */

loc_002ECECE: ;
    fp_push(MEMF(0x322A80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_002ECED8: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002ECEEB; /* jp: parity */

loc_002ECEE5: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_002ECEEB: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

loc_002ECEEF: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333E50)); /* fmul dword ptr [0x333e50] */
    fp_top() = RECOMP_FP_PC(MEMF(0x333CD8) - fp_top()); /* fsubr dword ptr [0x333cd8] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_002ECEA9;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002ECF05
 * Original: 0x002ECF05 - 0x002ECF9B (150 bytes, 53 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns float_sse
 * Frame: standard_frame
 */
void sub_002ECF05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002ECF05: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    eax = ebp + -12;
    PUSH32(esp, eax);
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ECF35u); RECOMP_ABI_CALL(0x002ECC75u, sub_002ECC75); /* call 0x002ECC75 */

loc_002ECF35: ;
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + -12;
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ECF5Au); RECOMP_ABI_CALL(0x002ECC75u, sub_002ECC75); /* call 0x002ECC75 */

loc_002ECF5A: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp + 8] */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(ebp + 0x10);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002ECF7C; /* jp: parity */

loc_002ECF69: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 8)); /* fdiv dword ptr [ebp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333E50)); /* fmul dword ptr [0x333e50] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337CC)); /* fmul dword ptr [0x3337cc] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_002ECF97;

loc_002ECF7C: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333E50)); /* fmul dword ptr [0x333e50] */
    fp_top() = RECOMP_FP_PC(MEMF(0x333CD8) - fp_top()); /* fsubr dword ptr [0x333cd8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337CC)); /* fmul dword ptr [0x3337cc] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_002ECF97: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002ECF9B
 * Original: 0x002ECF9B - 0x002ECFE6 (75 bytes, 30 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_002ECF9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002ECF9B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    eax = MEM32(ebp + 0x10);
    fp_push(MEMF(eax + 8)); /* fld float */
    if (CMP_NE(_fa, _fb)) goto loc_002ECFBE; /* jne: not equal / not zero */

loc_002ECFAA: ;
    ecx = MEM32(ebp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    goto loc_002ECFDB;

loc_002ECFBE: ;
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    edx = MEM32(ebp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */

loc_002ECFDB: ;
    eax = MEM32(ebp + 0x18);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002ECFE6
 * Original: 0x002ECFE6 - 0x002ED0F7 (273 bytes, 99 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002ECFE6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002ECFE6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0xc] */
    PUSH32(esp, edi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002ED0EB; /* jne: not equal / not zero */

loc_002ECFFE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ED01F; /* je: equal / zero */

loc_002ED004: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002ED01F; /* jne: not equal / not zero */

loc_002ED011: ;
    eax = MEM32(ebp + 0x24);
    MEM32(eax) = 0xFFFFD8F0u;
    goto loc_002ED0F1;

loc_002ED01F: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002ED032; /* jne: not equal / not zero */

loc_002ED02C: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + 0x1C) = eax;

loc_002ED032: ;
    edi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ED0D1; /* je: equal / zero */

loc_002ED03D: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ED0D1; /* je: equal / zero */

loc_002ED048: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    MEM32(ebp + 0x1C) = esi;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0xC)); /* fsub dword ptr [ebp + 0xc] */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0xC)); /* fsub dword ptr [ebp + 0xc] */
    fp_push((double)SMEM32(ebp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_002ED062; /* jge: greater or equal (signed >=) */

loc_002ED05C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_002ED062: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(ebp + 0x1C) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED072u); RECOMP_ABI_CALL(0x0028AF78u, sub_0028AF78); /* call 0x0028AF78 */

loc_002ED072: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002ED079; /* jb: below (unsigned <) */

loc_002ED076: ;
    eax = esi + -1;

loc_002ED079: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002ED08B; /* jne: not equal / not zero */

loc_002ED07D: ;
    eax = MEM32(edi);
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    MEM32(ebp + -4) = eax;
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_002ED0AF;

loc_002ED08B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edi + eax * 4;
    edx = MEM32(ecx + -4);
    ecx = MEM32(ecx);
    MEM32(ebp + 0x10) = eax;
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_002ED0A9; /* jge: greater or equal (signed >=) */

loc_002ED0A3: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_002ED0A9: ;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); fp_pop(); /* fsubp st(2) */
    fp_pop(); /* fstp st(0) */

loc_002ED0AF: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -8)); /* fsub dword ptr [ebp - 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -8)); /* fadd dword ptr [ebp - 8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED0CAu); RECOMP_ABI_CALL(0x002E9FEBu, sub_002E9FEB); /* call 0x002E9FEB */

loc_002ED0CA: ;
    ecx = MEM32(ebp + 0x24);
    MEM32(ecx) = eax;
    goto loc_002ED0F1;

loc_002ED0D1: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0xC)); /* fdiv dword ptr [ebp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3337A0)); /* fsub dword ptr [0x3337a0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED0E9u); RECOMP_ABI_CALL(0x002ECC9Cu, sub_002ECC9C); /* call 0x002ECC9C */

loc_002ED0E9: ;
    goto loc_002ED0CA;

loc_002ED0EB: ;
    eax = MEM32(ebp + 0x24);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002ED0F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002ED0F7
 * Original: 0x002ED0F7 - 0x002ED187 (144 bytes, 56 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002ED0F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002ED0F7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 8);
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002ED10A; /* jge: greater or equal (signed >=) */

loc_002ED104: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_002ED10A: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002ED120; /* jp: parity */

loc_002ED116: ;
    eax = MEM32(ebp + 0x18);
    fp_pop(); /* fstp st(0) */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_002ED183;

loc_002ED120: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002ED14D; /* jae: above or equal (unsigned >=) */

loc_002ED127: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + 8) = ecx;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_002ED137; /* jge: greater or equal (signed >=) */

loc_002ED131: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_002ED137: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002ED14D; /* jp: parity */

loc_002ED141: ;
    eax = MEM32(ebp + 0x18);
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    goto loc_002ED183;

loc_002ED14D: ;
    eax = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002ED159; /* jae: above or equal (unsigned >=) */

loc_002ED156: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002ED159: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEM32(ebp + 0x14) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(ebp + 0x10)); /* fimul dword ptr [ebp + 0x10] */
    fp_push((double)SMEM32(ebp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_002ED171; /* jge: greater or equal (signed >=) */

loc_002ED16B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_002ED171: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED17Eu); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002ED17E: ;
    ecx = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;

loc_002ED183: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002ED187
 * Original: 0x002ED187 - 0x002ED256 (207 bytes, 75 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002ED187(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002ED187: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ED243; /* je: equal / zero */

loc_002ED194: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(ebp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3337D8)); /* fld float */
    fp_push(MEMF(0x3337A0)); /* fld float */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x322A84)); /* fmul dword ptr [0x322a84] */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x322A84)); /* fmul dword ptr [0x322a84] */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    MEMF(ebp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002ED1E9; /* jne: not equal / not zero */

loc_002ED1E5: ;
    fp_push(1.0); /* fld1 */
    goto loc_002ED1FB;

loc_002ED1E9: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3337C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3337c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002ED1FE; /* jp: parity */

loc_002ED1F9: ;
    fp_push(0.0); /* fldz */

loc_002ED1FB: ;
    MEMF(ebp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_002ED1FE: ;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), g_fp_stack[(g_fp_top + 2) & 7]); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(2) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002ED217; /* jp: parity */

loc_002ED209: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(ebp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_002ED217: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, ecx);
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x18)); /* fsub dword ptr [ebp + 0x18] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED22Bu); RECOMP_ABI_CALL(0x002ECCD3u, sub_002ECCD3); /* call 0x002ECCD3 */

loc_002ED22B: ;
    ecx = MEM32(ebp + 0x1C);
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED23Cu); RECOMP_ABI_CALL(0x002ECCD3u, sub_002ECCD3); /* call 0x002ECCD3 */

loc_002ED23C: ;
    ecx = MEM32(ebp + 0x20);
    MEM32(ecx) = eax;
    goto loc_002ED252;

loc_002ED243: ;
    eax = MEM32(ebp + 0x1C);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 0x20);
    MEM32(eax) = 0xFFFFD8F0u;

loc_002ED252: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002ED256
 * Original: 0x002ED256 - 0x002ED2F8 (162 bytes, 55 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002ED256(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002ED256: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3337C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3337c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002ED26B; /* je: equal / zero */

loc_002ED269: ;
    fp_top() = -fp_top(); /* fchs */

loc_002ED26B: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED274u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002ED274: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ecx = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3337C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3337c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002ED288; /* je: equal / zero */

loc_002ED286: ;
    fp_top() = -fp_top(); /* fchs */

loc_002ED288: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED291u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002ED291: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2D (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002ED2E5; /* jge: greater or equal (signed >=) */

loc_002ED296: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002ED2E5; /* jge: greater or equal (signed >=) */

loc_002ED29B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax;
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(edi + 0x2F3B90)); /* fld float */
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x2F3B90)); /* fmul dword ptr [esi + 0x2f3b90] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED2BCu); RECOMP_ABI_CALL(0x002E9FEBu, sub_002E9FEB); /* call 0x002E9FEB */

loc_002ED2BC: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;
    fp_push(MEMF(edi + 0x2F3AD8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x2F3AD8)); /* fmul dword ptr [esi + 0x2f3ad8] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) - fp_top()); /* fsubr dword ptr [0x3337a0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED2DCu); RECOMP_ABI_CALL(0x002E9FEBu, sub_002E9FEB); /* call 0x002E9FEB */

loc_002ED2DC: ;
    ecx = MEM32(ebp + 0x10);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    goto loc_002ED2F4;

loc_002ED2E5: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = 0xFFFFD8F0u;

loc_002ED2F4: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002ED2F8
 * Original: 0x002ED2F8 - 0x002ED371 (121 bytes, 40 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002ED2F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002ED2F8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_push(MEMF(0x3337C0)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002ED31F; /* jp: parity */

loc_002ED315: ;
    eax = MEM32(ebp + 0x14);
    fp_pop(); /* fstp st(0) */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_002ED36D;

loc_002ED31F: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F3C44)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x2f3c44] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002ED339; /* jne: not equal / not zero */

loc_002ED32C: ;
    eax = MEM32(ebp + 0x14);
    fp_pop(); /* fstp st(0) */
    MEM32(eax) = 0xFFFF8001u;
    goto loc_002ED36D;

loc_002ED339: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x322A8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x322a8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002ED353; /* jp: parity */

loc_002ED346: ;
    eax = MEM32(ebp + 0x14);
    fp_pop(); /* fstp st(0) */
    MEM32(eax) = 0x1000;
    goto loc_002ED36D;

loc_002ED353: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x322A88)); /* fmul dword ptr [0x322a88] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) - fp_top()); /* fsubr dword ptr [0x3337a0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED368u); RECOMP_ABI_CALL(0x002EE9C7u, sub_002EE9C7); /* call 0x002EE9C7 */

loc_002ED368: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;

loc_002ED36D: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002ED371
 * Original: 0x002ED371 - 0x002ED48D (284 bytes, 108 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002ED371(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002ED371: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3337C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3337c0] */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002ED390; /* jne: not equal / not zero */

loc_002ED388: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337C8)); /* fadd dword ptr [0x3337c8] */
    goto loc_002ED396;

loc_002ED390: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3337C8)); /* fsub dword ptr [0x3337c8] */

loc_002ED396: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED39Eu); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002ED39E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, 6);
    fp_top() = fabs(fp_top()); /* fabs */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, esi);
    ecx = eax + eax * 2;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002ED3C1; /* jne: not equal / not zero */

loc_002ED3BB: ;
    fp_pop(); /* fstp st(0) */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002ED41A;

loc_002ED3C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    PUSH32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_002ED3E3; /* jle: less or equal (signed <=) */

loc_002ED3C7: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x333AD0)); /* fadd dword ptr [0x333ad0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED3D5u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002ED3D5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0xC);
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_002ED41A;

loc_002ED3E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002ED403; /* jle: less or equal (signed <=) */

loc_002ED3E8: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337C8)); /* fadd dword ptr [0x3337c8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED3F6u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002ED3F6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 6);
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = eax + eax * 2;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_002ED41A;

loc_002ED403: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x333914)); /* fadd dword ptr [0x333914] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED411u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002ED411: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 3);
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = eax + eax * 2;

loc_002ED41A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ED42E; /* je: equal / zero */

loc_002ED420: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002ED42E; /* jle: less or equal (signed <=) */

loc_002ED425: ;
    edx = 0xB4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx;

loc_002ED42E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 3);
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    PUSH32(esp, 6);
    esi = eax;
    eax = ecx + 0x5A;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3D (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002ED446; /* jb: below (unsigned <) */

loc_002ED444: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002ED446: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002ED44D; /* jb: below (unsigned <) */

loc_002ED44B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002ED44D: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1F);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3337C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3337c0] */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX16(MEM16(esi * 2 + 0x305208));
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx + 0x2F3C48;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    eax = MEM32(ebp + 0x14);
    POP32(esp, esi);
    ecx = ecx + 0x2F3C68;
    if (TEST_NZ(_fa, _fb)) goto loc_002ED484; /* jne: not equal / not zero */

loc_002ED47D: ;
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    goto loc_002ED489;

loc_002ED484: ;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;

loc_002ED489: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002ED48D
 * Original: 0x002ED48D - 0x002ED4FC (111 bytes, 12 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED48D(void)
{

loc_002ED48D: ;
    MEM32(0x306AD4) = 0x2ECD59;
    MEM32(0x306AD8) = 0x2ECDA2;
    MEM32(0x306ADC) = 0x2ECF05;
    MEM32(0x306AE0) = 0x2ECF9B;
    MEM32(0x306AE4) = 0x2ECFE6;
    MEM32(0x306AE8) = 0x2ED0F7;
    MEM32(0x306AEC) = 0x2ED187;
    MEM32(0x306AF0) = 0x2ED256;
    MEM32(0x306AF4) = 0x2ED2F8;
    MEM32(0x306AF8) = 0x2ED371;
    MEM32(0x306AFC) = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_002ED4FC
 * Original: 0x002ED4FC - 0x002ED51B (31 bytes, 9 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED4FC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED4FC: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = 0x1000;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x18) = 0x8000;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002ED51B
 * Original: 0x002ED51B - 0x002ED590 (117 bytes, 43 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED51B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED51B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    edi = 0x626F5344;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x002ED52Eu); RECOMP_ABI_CALL(0x002ECADEu, sub_002ECADE); /* call 0x002ECADE */

loc_002ED52E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ED53B; /* je: equal / zero */

loc_002ED532: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_002ED53D;

loc_002ED53B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002ED53D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x28);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, edi);
    MEM32(eax) = 0x306450;
    MEM32(eax + 4) = 0x5CC;
    PUSH32(esp, 0x002ED557u); RECOMP_ABI_CALL(0x002ECADEu, sub_002ECADE); /* call 0x002ECADE */

loc_002ED557: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ED566; /* je: equal / zero */

loc_002ED55B: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x002ED564u); RECOMP_ABI_CALL(0x002F1E9Cu, sub_002F1E9C); /* call 0x002F1E9C */

loc_002ED564: ;
    goto loc_002ED568;

loc_002ED566: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002ED568: ;
    PUSH32(esp, 0x204);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x002ED577u); RECOMP_ABI_CALL(0x002F1EE4u, sub_002F1EE4); /* call 0x002F1EE4 */

loc_002ED577: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ED58D; /* je: equal / zero */

loc_002ED57E: ;
    esi = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0);
    PUSH32(esp, 0x002ED58Du); RECOMP_ABI_CALL(0x002F1FE9u, sub_002F1FE9); /* call 0x002F1FE9 */

loc_002ED58D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002ED590
 * Original: 0x002ED590 - 0x002ED705 (373 bytes, 124 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002ED590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    eax = MEM32(eax + 0x10);
    ebx = MEM32(eax);
    eax = MEM32(ebx + 0x80C);
    _fb = (uint32_t)(MEM32(ebx + 0x804)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx + 0x804);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi + 0x20);
    esi = ebx + eax * 4 + 0x818;
    eax = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -16) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002ED5D9; /* je: equal / zero */

loc_002ED5CC: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED5D2u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002ED5D2: ;
    MEM32(edi + 0x20) = MEM32(edi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + -16);

loc_002ED5D9: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x626F5344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED5E6u); RECOMP_ABI_CALL(0x002ECADEu, sub_002ECADE); /* call 0x002ECADE */

loc_002ED5E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002ED5F7; /* jne: not equal / not zero */

loc_002ED5ED: ;
    eax = 0x8007000Eu;
    goto loc_002ED6FE;

loc_002ED5F7: ;
    PUSH32(esp, MEM32(esi + 4));
    ecx = MEM32(edi + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED602u); RECOMP_ABI_CALL(0x002F2011u, sub_002F2011); /* call 0x002F2011 */

loc_002ED602: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002ED6FE; /* jl: less (signed <) */

loc_002ED60A: ;
    eax = ebx + 0x818;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;
    eax = ebp + -28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED624u); RECOMP_ABI_CALL(0x002F2162u, sub_002F2162); /* call 0x002F2162 */

loc_002ED624: ;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -8));
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    eax = ebp + -28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED63Bu); RECOMP_ABI_CALL(0x002F218Fu, sub_002F218F); /* call 0x002F218F */

loc_002ED63B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002ED64B; /* jle: less or equal (signed <=) */

loc_002ED63F: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */

loc_002ED64B: ;
    if (CMP_L(_fas, _fbs)) goto loc_002ED6FE; /* jl: less (signed <) */

loc_002ED651: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002ED6D9; /* jbe: below or equal (unsigned <=) */

loc_002ED65A: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -8) = eax;
    edi = esi + 8;

loc_002ED663: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(edi + 4));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED676u); RECOMP_ABI_CALL(0x002F218Fu, sub_002F218F); /* call 0x002F218F */

loc_002ED676: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002ED686; /* jle: less or equal (signed <=) */

loc_002ED67A: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */

loc_002ED686: ;
    if (CMP_L(_fas, _fbs)) goto loc_002ED6FE; /* jl: less (signed <) */

loc_002ED688: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -20);
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(0xFE836000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 0x10) = MEM32(edi + 0x10) + 0xFE836000u;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 8;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x17C6818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x17C6818;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + ecx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xFFA0BE7Au;
    _fb = (uint32_t)(MEM32(ebx + 0x804)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebx + 0x804);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + -24) = MEM32(edi + -24) + ecx;
    _fa = (uint32_t)(MEM32(edi + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x14);
    _fb = (uint32_t)(0xC000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + -8) = MEM32(edi + -8) + eax;
    _fa = (uint32_t)(MEM32(edi + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002ED663; /* jb: below (unsigned <) */

loc_002ED6D6: ;
    edi = MEM32(ebp + -20);

loc_002ED6D9: ;
    ecx = MEM32(ebp + -16);
    edi = MEM32(edi + 0x20);
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
    PUSH32(esp, 3);
    POP32(esp, eax);
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x810) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x810;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    MEM32(ebx) = eax;

loc_002ED6F7: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002ED6F7; /* jne: not equal / not zero */

loc_002ED6FC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002ED6FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002ED705
 * Original: 0x002ED705 - 0x002ED72C (39 bytes, 14 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002ED705(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED705: ;
    eax = MEM32(ecx + 0x20);
    edx = MEM32(eax);
    ecx = MEM32(esp + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002ED71A; /* jbe: below or equal (unsigned <=) */

loc_002ED713: ;
    eax = 0x88780032u;
    goto loc_002ED729;

loc_002ED71A: ;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + 8;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002ED729: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002ED72C
 * Original: 0x002ED72C - 0x002ED791 (101 bytes, 33 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED72C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED72C: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_002ED749; /* jne: not equal / not zero */

loc_002ED735: ;
    esi = MEM32(ecx + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8000 (32-bit) */
    edx = MEM32(ecx + 0x1C);
    if (CMP_EQ(_fa, _fb)) goto loc_002ED78D; /* je: equal / zero */

loc_002ED743: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ED78D; /* je: equal / zero */

loc_002ED747: ;
    goto loc_002ED74D;

loc_002ED749: ;
    esi = MEM32(esp + 8);

loc_002ED74D: ;
    eax = MEM32(ecx + 8);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax);
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002ED75A: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002ED75A; /* jne: not equal / not zero */

loc_002ED760: ;
    PUSH32(esp, ebx);
    ebx = esi;
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(eax + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x206) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x206;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = ebx;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = 2;
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x18) = 0x8000;
    POP32(esp, ebx);

loc_002ED78D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002ED791
 * Original: 0x002ED791 - 0x002ED7A5 (20 bytes, 6 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED791(void)
{

loc_002ED791: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(ecx + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x002ED7A2u); RECOMP_ABI_CALL(0x002F1F97u, sub_002F1F97); /* call 0x002F1F97 */

loc_002ED7A2: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002ED7A5
 * Original: 0x002ED7A5 - 0x002ED7BC (23 bytes, 7 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED7A5(void)
{

loc_002ED7A5: ;
    eax = ecx + 4;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x002ED7B9u); RECOMP_ABI_CALL(0x002F1F97u, sub_002F1F97); /* call 0x002F1F97 */

loc_002ED7B9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002ED7BC
 * Original: 0x002ED7BC - 0x002ED7FD (65 bytes, 26 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED7BC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED7BC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ED7D8; /* je: equal / zero */

loc_002ED7C7: ;
    ecx = edi;
    PUSH32(esp, 0x002ED7CEu); RECOMP_ABI_CALL(0x002F1EB6u, sub_002F1EB6); /* call 0x002F1EB6 */

loc_002ED7CE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002ED7D4u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002ED7D4: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002ED7D8: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ED7E9; /* je: equal / zero */

loc_002ED7DF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002ED7E5u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002ED7E5: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002ED7E9: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ED7FA; /* je: equal / zero */

loc_002ED7F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002ED7F6u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002ED7F6: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002ED7FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002ED7FD
 * Original: 0x002ED7FD - 0x002ED896 (153 bytes, 56 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002ED7FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED7FD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ecx;
    MEM32(ebp + -4) = edx;
    ebx = MEM32(ebp + 8);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    esi = MEM32(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x800;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 0x800);
    MEM32(esi) = eax;
    eax = MEM32(ebx + 0x804);
    MEM32(esi + 4) = eax;
    eax = MEM32(ebx + 0x808);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebx + 0x80C);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebx + 0x814);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(edx + 8);
    _fb = (uint32_t)(0xFFFFF7E8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF7E8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = ebx + 0x818;
    PUSH32(esp, eax);
    PUSH32(esp, 0x818);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED86Cu); RECOMP_ABI_CALL(0x002F1FE9u, sub_002F1FE9); /* call 0x002F1FE9 */

loc_002ED86C: ;
    edi = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED877u); RECOMP_ABI_CALL(0x002ED590u, sub_002ED590); /* call 0x002ED590 */

loc_002ED877: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002ED88F; /* jl: less (signed <) */

loc_002ED87B: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ED887; /* je: equal / zero */

loc_002ED882: ;
    edx = MEM32(edi + 0x20);
    MEM32(ecx) = edx;

loc_002ED887: ;
    PUSH32(esp, 6);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
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

loc_002ED88F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002ED896
 * Original: 0x002ED896 - 0x002ED93F (169 bytes, 67 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002ED896(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED896: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED8A8u); RECOMP_ABI_CALL(0x002ED705u, sub_002ED705); /* call 0x002ED705 */

loc_002ED8A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002ED93A; /* jl: less (signed <) */

loc_002ED8B0: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax);
    edx = MEM32(ebp + 8);
    eax = MEM32(eax + 0x804);
    edx = MEM32(edx + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = edx + eax * 4 + 0x17D0618;
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED8DDu); RECOMP_ABI_CALL(0x002F1FE9u, sub_002F1FE9); /* call 0x002F1FE9 */

loc_002ED8DD: ;
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x18), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002ED91A; /* je: equal / zero */

loc_002ED8E3: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002ED90C; /* je: equal / zero */

loc_002ED8ED: ;
    ecx = MEM32(edi + 0x1C);
    edx = ecx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002ED901; /* jae: above or equal (unsigned >=) */

loc_002ED8F7: ;
    edx = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002ED90C;

loc_002ED901: ;
    ecx = esi + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002ED90C; /* jbe: below or equal (unsigned <=) */

loc_002ED908: ;
    ebx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002ED90C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002ED912; /* jb: below (unsigned <) */

loc_002ED910: ;
    eax = esi;

loc_002ED912: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) + ebx;
    _fa = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x18) = eax;
    goto loc_002ED936;

loc_002ED91A: ;
    eax = MEM32(ebp + 8);
    edi = MEM32(eax + 8);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + 0x10);
    ecx = ebx;
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

loc_002ED936: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_002ED93A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002ED93F
 * Original: 0x002ED93F - 0x002ED979 (58 bytes, 26 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002ED93F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED93F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002ED94Eu); RECOMP_ABI_CALL(0x002ED705u, sub_002ED705); /* call 0x002ED705 */

loc_002ED94E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002ED975; /* jl: less (signed <) */

loc_002ED952: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
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
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);

loc_002ED975: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002ED979
 * Original: 0x002ED979 - 0x002ED9A3 (42 bytes, 15 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED979(void)
{

loc_002ED979: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002ED9A3
 * Original: 0x002ED9A3 - 0x002EDA3B (152 bytes, 40 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ED9A3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002ED9A3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x322A18;
    MEM32(esi + 4) = 1;
    PUSH32(esp, 0x002ED9C2u); RECOMP_ABI_CALL(0x002F2991u, sub_002F2991); /* call 0x002F2991 */

loc_002ED9C2: ;
    ecx = esi + 0x60;
    MEM32(esi) = 0x322A94;
    MEM32(edi) = 0x322A90;
    MEM32(esi + 0x58) = 0x306408;
    MEM32(esi + 0x5C) = 0x30640C;
    PUSH32(esp, 0x002ED9E4u); RECOMP_ABI_CALL(0x002EEA42u, sub_002EEA42); /* call 0x002EEA42 */

loc_002ED9E4: ;
    PUSH32(esp, 3);
    eax = esi + 0x488;
    POP32(esp, ecx);

loc_002ED9ED: ;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002ED9ED; /* jne: not equal / not zero */

loc_002ED9F8: ;
    eax = esi + 0x4A0;
    MEM32(esi + 0x4A4) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x4A8;
    MEM32(esi + 0x4AC) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x4B0;
    MEM32(esi + 0x4B4) = eax;
    MEM32(eax) = eax;
    eax = MEM32(esi + 0x58);
    MEM32(eax) = 0xC0;
    eax = MEM32(esi + 0x5C);
    MEM32(eax) = 0x40;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EDA3B
 * Original: 0x002EDA3B - 0x002EDA9E (99 bytes, 34 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EDA3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDA3B: ;
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
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDA52u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EDA52: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi + 0x488;
    MEM32(ebp + -4) = 3;

loc_002EDA66: ;
    edi = MEM32(ebx);
    goto loc_002EDA76;

loc_002EDA6A: ;
    PUSH32(esp, 0);
    ecx = edi + -76;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDA74u); RECOMP_ABI_CALL(0x002F0294u, sub_002F0294); /* call 0x002F0294 */

loc_002EDA74: ;
    edi = MEM32(edi);

loc_002EDA76: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDA6A; /* jne: not equal / not zero */

loc_002EDA7A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002EDA66; /* jne: not equal / not zero */

loc_002EDA82: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDA91u); RECOMP_ABI_CALL(0x002F2D9Eu, sub_002F2D9E); /* call 0x002F2D9E */

loc_002EDA91: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDA99u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EDA99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EDA9E
 * Original: 0x002EDA9E - 0x002EDB2F (145 bytes, 55 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EDA9E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDA9E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = ebp + -8;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDAB5u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EDAB5: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x70);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x200010 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EDAD0; /* je: equal / zero */

loc_002EDACB: ;
    edx = MEM32(esi + 0x5C);
    goto loc_002EDAD6;

loc_002EDAD0: ;
    edx = MEM32(esi + 0x58);
    PUSH32(esp, 0x40);
    POP32(esp, ebx);

loc_002EDAD6: ;
    edi = ZX8(MEM8(ecx + 0x64));
    eax = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002EDB12; /* ja: above (unsigned >) */

loc_002EDAE0: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = eax;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 0x64)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x64), LO8(edx) (8-bit) */
    edi = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_002EDB0E; /* jbe: below or equal (unsigned <=) */

loc_002EDAED: ;
    eax = ZX16(LO16(edi));
    eax = esi + eax * 4 + 0x88;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDB08; /* jne: not equal / not zero */

loc_002EDAFC: ;
    ebx = ZX8(LO8(edx));
    MEM16(ecx + ebx * 2 + 0xC) = LO16(edi);
    MEM32(eax) = ecx;
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_002EDB08: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x64)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ecx + 0x64) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EDAED; /* jb: below (unsigned <) */

loc_002EDB0E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002EDB17;

loc_002EDB12: ;
    edi = 0x88780032u;

loc_002EDB17: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDB26u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EDB26: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EDB2F
 * Original: 0x002EDB2F - 0x002EDB9C (109 bytes, 37 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EDB2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDB2F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDB44u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EDB44: ;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(edx + 0x64)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x64), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EDB87; /* jbe: below or equal (unsigned <=) */

loc_002EDB56: ;
    eax = ZX16(LO16(edi));
    eax = edx + eax * 2 + 0xC;
    ecx = ZX16(MEM16(eax));
    MEM16(eax) = MEM16(eax) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM32(esi + ecx * 4 + 0x88) = MEM32(esi + ecx * 4 + 0x88) & 0;
    _fa = (uint32_t)(MEM32(esi + ecx * 4 + 0x88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002EDB77; /* jae: above or equal (unsigned >=) */

loc_002EDB72: ;
    eax = MEM32(esi + 0x5C);
    goto loc_002EDB7A;

loc_002EDB77: ;
    eax = MEM32(esi + 0x58);

loc_002EDB7A: ;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, ZX8(MEM8(edx + 0x64)));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EDB56; /* jb: below (unsigned <) */

loc_002EDB87: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDB96u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EDB96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EDB9C
 * Original: 0x002EDB9C - 0x002EDBFF (99 bytes, 36 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDB9C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDB9C: ;
    eax = MEM32(0x306A1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x306BA0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    MEM32(0x306A1C) = eax;
    edi = ecx + 8;
    eax = ~eax;
    MEM32(esi) = eax;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x002EDBC3u); RECOMP_ABI_CALL(0x002F2704u, sub_002F2704); /* call 0x002F2704 */

loc_002EDBC3: ;
    eax = MEM32(0x306BA4);
    MEM32(0xFE801324u) = eax;
    eax = MEM32(0x306A1C);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(0xFE801334u) = eax;
    PUSH32(esp, 0x002EDBE0u); RECOMP_ABI_CALL(0x002F2704u, sub_002F2704); /* call 0x002F2704 */

loc_002EDBE0: ;
    goto loc_002EDBF1;

loc_002EDBE2: ;
    eax = ebx;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EDBFB; /* je: equal / zero */

loc_002EDBE9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(0x31C8A4); PUSH32(esp, 0x002EDBF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDBEBu); } /* indirect call */
    }

loc_002EDBF1: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x306A1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x306A1C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDBE2; /* jne: not equal / not zero */

loc_002EDBFB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EDBFF
 * Original: 0x002EDBFF - 0x002EDC78 (121 bytes, 43 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EDBFF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDBFF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDC0Du); RECOMP_ABI_CALL(0x002EDB9Cu, sub_002EDB9C); /* call 0x002EDB9C */

loc_002EDC0D: ;
    ebx = esi + 0x488;
    MEM32(ebp + -4) = 3;

loc_002EDC1A: ;
    edi = MEM32(ebx);
    goto loc_002EDC3E;

loc_002EDC1E: ;
    ecx = edi + -76;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002EDC26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDC23u); } /* indirect call */
    }

loc_002EDC26: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002EDC37; /* jne: not equal / not zero */

loc_002EDC35: ;
    edi = MEM32(ebx);

loc_002EDC37: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002EDC3E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDC1E; /* jne: not equal / not zero */

loc_002EDC42: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002EDC1A; /* jne: not equal / not zero */

loc_002EDC4A: ;
    edi = esi + 0x4A0;

loc_002EDC50: ;
    PUSH32(esp, MEM32(edi));
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDC5Eu); RECOMP_ABI_CALL(0x002E9F00u, sub_002E9F00); /* call 0x002E9F00 */

loc_002EDC5E: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EDC73; /* je: equal / zero */

loc_002EDC69: ;
    ecx = eax + -84;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002EDC71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDC6Eu); } /* indirect call */
    }

loc_002EDC71: ;
    goto loc_002EDC50;

loc_002EDC73: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EDC78
 * Original: 0x002EDC78 - 0x002EDCA4 (44 bytes, 16 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EDC78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDC78: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esi + 0x4B8;
    MEM32(ebp + 8) = eax;
    edx = 0;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);

loc_002EDC92: ;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    if ((_fa != _fb)) goto loc_002EDC92; /* jne: not equal / not zero */

loc_002EDC97: ;
    MEM32(esi + 0x4C0) = MEM32(esi + 0x4C0) | eax;
    _fa = (uint32_t)(MEM32(esi + 0x4C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EDCA4
 * Original: 0x002EDCA4 - 0x002EDD12 (110 bytes, 37 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDCA4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDCA4: ;
    MEM32(0x306414) = MEM32(0x306414) + 1;
    _fa = (uint32_t)(MEM32(0x306414)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x002EDCBAu); RECOMP_ABI_CALL(0x002F2796u, sub_002F2796); /* call 0x002F2796 */

loc_002EDCBA: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EDCC6; /* je: equal / zero */

loc_002EDCC1: ;
    PUSH32(esp, 0x002EDCC6u); RECOMP_ABI_CALL(0x002F317Au, sub_002F317A); /* call 0x002F317A */

loc_002EDCC6: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EDCD2; /* je: equal / zero */

loc_002EDCCD: ;
    PUSH32(esp, 0x002EDCD2u); RECOMP_ABI_CALL(0x002F317Au, sub_002F317A); /* call 0x002F317A */

loc_002EDCD2: ;
    ecx = edi;
    PUSH32(esp, 0x002EDCD9u); RECOMP_ABI_CALL(0x002F28EBu, sub_002F28EB); /* call 0x002F28EB */

loc_002EDCD9: ;
    ecx = edi;
    MEM32(-24772612) = 1;
    PUSH32(esp, 0x002EDCEAu); RECOMP_ABI_CALL(0x002F2470u, sub_002F2470); /* call 0x002F2470 */

loc_002EDCEA: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EDCF8; /* je: equal / zero */

loc_002EDCF1: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x002EDCF8u); RECOMP_ABI_CALL(0x002F323Au, sub_002F323A); /* call 0x002F323A */

loc_002EDCF8: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EDD06; /* je: equal / zero */

loc_002EDCFF: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x002EDD06u); RECOMP_ABI_CALL(0x002F323Au, sub_002F323A); /* call 0x002F323A */

loc_002EDD06: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x002EDD0Fu); RECOMP_ABI_CALL(0x002F2796u, sub_002F2796); /* call 0x002F2796 */

loc_002EDD0F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EDD12
 * Original: 0x002EDD12 - 0x002EDD62 (80 bytes, 23 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDD12(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDD12: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002EDD5F; /* jae: above or equal (unsigned >=) */

loc_002EDD1D: ;
    _fa = (uint32_t)(MEM32(ecx + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x84), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDD5F; /* jne: not equal / not zero */

loc_002EDD26: ;
    PUSH32(esp, esi);
    esi = MEM32(0x306BB0);
    edx = eax;
    edx = edx << 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(edx + esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + esi + 4), 0x800000 (32-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_002EDD5F; /* jne: not equal / not zero */

loc_002EDD3D: ;
    ecx = MEM32(ecx + eax * 4 + 0x88);
    edx = ZX8(MEM8(ecx + 0x64));
    edx = ZX16(MEM16(ecx + edx * 2 + 0xA));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDD5F; /* jne: not equal / not zero */

loc_002EDD51: ;
    eax = ecx + 0x4C;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EDD5F; /* je: equal / zero */

loc_002EDD58: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x002EDD5Fu); RECOMP_ABI_CALL(0x002EF6CDu, sub_002EF6CD); /* call 0x002EF6CD */

loc_002EDD5F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EDD62
 * Original: 0x002EDD62 - 0x002EDD87 (37 bytes, 13 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDD62(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDD62: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EDD81; /* jne: not equal / not zero */

loc_002EDD6C: ;
    _fb = (uint32_t)(0x4B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4B0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;

loc_002EDD81: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EDD87
 * Original: 0x002EDD87 - 0x002EDDE9 (98 bytes, 34 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDD87(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDD87: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x4A8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    PUSH32(esp, eax);
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x002EDDA3u); RECOMP_ABI_CALL(0x002E9F00u, sub_002E9F00); /* call 0x002E9F00 */

loc_002EDDA3: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDDC5; /* jne: not equal / not zero */

loc_002EDDA9: ;
    eax = edi + 0x4E8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x002EDDB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDDB0u); } /* indirect call */
    }

loc_002EDDB6: ;
    _fb = (uint32_t)(0x510) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x510;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C934); PUSH32(esp, 0x002EDDC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDDBDu); } /* indirect call */
    }

loc_002EDDC3: ;
    goto loc_002EDDE3;

loc_002EDDC5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EDDE3; /* je: equal / zero */

loc_002EDDC9: ;
    ecx = edi + 0x510;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 0x1C));
    _fb = (uint32_t)(0x4E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4E8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(eax + 0x18));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x002EDDE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDDDDu); } /* indirect call */
    }

loc_002EDDE3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EDDE9
 * Original: 0x002EDDE9 - 0x002EDE6B (130 bytes, 48 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EDDE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDDE9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDE00u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EDE00: ;
    edi = ebx + 0x4A8;
    goto loc_002EDE3C;

loc_002EDE08: ;
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C838); PUSH32(esp, 0x002EDE12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDE0Cu); } /* indirect call */
    }

loc_002EDE12: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002EDE44; /* jg: greater (signed >) */

loc_002EDE1A: ;
    if (CMP_L(_fas, _fbs)) goto loc_002EDE24; /* jl: less (signed <) */

loc_002EDE1C: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002EDE44; /* ja: above (unsigned >) */

loc_002EDE24: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDE2Eu); RECOMP_ABI_CALL(0x002E9F00u, sub_002E9F00); /* call 0x002E9F00 */

loc_002EDE2E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(esi + 0x10));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x002EDE3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDE39u); } /* indirect call */
    }

loc_002EDE3C: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDE08; /* jne: not equal / not zero */

loc_002EDE42: ;
    goto loc_002EDE5E;

loc_002EDE44: ;
    eax = ebx + 0x510;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x1C));
    _fb = (uint32_t)(0x4E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x4E8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x002EDE5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDE58u); } /* indirect call */
    }

loc_002EDE5E: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDE66u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EDE66: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EDE6B
 * Original: 0x002EDE6B - 0x002EDEFD (146 bytes, 55 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EDE6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDE6B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    eax = ebp + -8;
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -16;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDE8Au); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EDE8A: ;
    edi = esi + 0x4B0;
    goto loc_002EDE9C;

loc_002EDE92: ;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDE9Cu); RECOMP_ABI_CALL(0x002ED979u, sub_002ED979); /* call 0x002ED979 */

loc_002EDE9C: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDE92; /* jne: not equal / not zero */

loc_002EDEA2: ;
    goto loc_002EDEE0;

loc_002EDEA4: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EDEBC; /* je: equal / zero */

loc_002EDEAB: ;
    MEM32(esi) = edi;
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    MEM32(eax) = esi;
    eax = MEM32(esi);
    MEM32(eax + 4) = esi;
    goto loc_002EDEC2;

loc_002EDEBC: ;
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = eax;

loc_002EDEC2: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDECAu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EDECA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(esi + 0x10));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x002EDED8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDED5u); } /* indirect call */
    }

loc_002EDED8: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDEE0u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EDEE0: ;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDEE8u); RECOMP_ABI_CALL(0x002E9F00u, sub_002E9F00); /* call 0x002E9F00 */

loc_002EDEE8: ;
    esi = eax;
    eax = ebp + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDEA4; /* jne: not equal / not zero */

loc_002EDEF1: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDEF9u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EDEF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EDEFD
 * Original: 0x002EDEFD - 0x002EDF34 (55 bytes, 19 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EDEFD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDEFD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDF0Eu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EDF0E: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EDF0E; /* jb: below (unsigned <) */

loc_002EDF1B: ;
    eax = MEM32(ebp + 8);
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    MEM32(0xFE820280u) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDF2Eu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EDF2E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EDF34
 * Original: 0x002EDF34 - 0x002EDF79 (69 bytes, 24 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EDF34(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDF34: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDF48u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EDF48: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EDF48; /* jb: below (unsigned <) */

loc_002EDF55: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ebp + 8);
    ecx = ZX8(MEM8(ecx + eax + 0x10));
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax * 4 + -25034240) = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDF72u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EDF72: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EDF79
 * Original: 0x002EDF79 - 0x002EDFD2 (89 bytes, 36 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EDF79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDF79: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EDFCD; /* je: equal / zero */

loc_002EDF8D: ;
    PUSH32(esp, 0x34);
    ecx = ebp + -52;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDF9Eu); RECOMP_ABI_CALL(0x002ED93Fu, sub_002ED93F); /* call 0x002ED93F */

loc_002EDF9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002EDFCD; /* jl: less (signed <) */

loc_002EDFA2: ;
    _fa = (uint32_t)(MEM8(0x30641F)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x30641F), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EDFB1; /* je: equal / zero */

loc_002EDFAB: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_002EDFB5;

loc_002EDFB1: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) | 2;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002EDFB5: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDFCDu); RECOMP_ABI_CALL(0x002ED896u, sub_002ED896); /* call 0x002ED896 */

loc_002EDFCD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EDFD2
 * Original: 0x002EDFD2 - 0x002EDFF9 (39 bytes, 14 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDFD2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDFD2: ;
    edx = MEM32(esp + 4);
    edx = ZX8(MEM8(edx + 0x64));
    _fb = (uint32_t)(0x53C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x53C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1D (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_002EDFF4; /* jbe: below or equal (unsigned <=) */

loc_002EDFED: ;
    eax = 0x88780032u;
    goto loc_002EDFF6;

loc_002EDFF4: ;
    MEM32(ecx) = edx;

loc_002EDFF6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EDFF9
 * Original: 0x002EDFF9 - 0x002EE00A (17 bytes, 4 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDFF9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDFF9: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0x64));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx + 0x53C) = MEM32(ecx + 0x53C) - eax;
    _fa = (uint32_t)(MEM32(ecx + 0x53C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE00A
 * Original: 0x002EE00A - 0x002EE0C1 (183 bytes, 59 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE00A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE00A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x224) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x224;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE01Eu); RECOMP_ABI_CALL(0x002E9F69u, sub_002E9F69); /* call 0x002E9F69 */

loc_002EE01E: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM16(eax + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0xFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(eax + 0x80), 0xFFF (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE0B6; /* je: equal / zero */

loc_002EE030: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE0B6; /* je: equal / zero */

loc_002EE038: ;
    PUSH32(esp, edi);
    edi = 0x118;
    PUSH32(esp, edi);
    ecx = ebp + -548;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE051u); RECOMP_ABI_CALL(0x002ED93Fu, sub_002ED93F); /* call 0x002ED93F */

loc_002EE051: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002EE0B5; /* jl: less (signed <) */

loc_002EE055: ;
    eax = ebp + -548;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE06Au); RECOMP_ABI_CALL(0x002EAE39u, sub_002EAE39); /* call 0x002EAE39 */

loc_002EE06A: ;
    MEM32(ebp + -532) = MEM32(ebp + -532) | 4;
    _fa = (uint32_t)(MEM32(ebp + -532)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = ebp + -532;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE08Cu); RECOMP_ABI_CALL(0x002ED896u, sub_002ED896); /* call 0x002ED896 */

loc_002EE08C: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 0x108);
    eax = ebp + -268;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE0A9u); RECOMP_ABI_CALL(0x002ED896u, sub_002ED896); /* call 0x002ED896 */

loc_002EE0A9: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE0B5u); RECOMP_ABI_CALL(0x002ED72Cu, sub_002ED72C); /* call 0x002ED72C */

loc_002EE0B5: ;
    POP32(esp, edi);

loc_002EE0B6: ;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE0BEu); RECOMP_ABI_CALL(0x002E9F8Eu, sub_002E9F8E); /* call 0x002E9F8E */

loc_002EE0BE: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EE0C1
 * Original: 0x002EE0C1 - 0x002EE0CD (12 bytes, 3 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE0C1(void)
{

loc_002EE0C1: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x002EE0CAu); RECOMP_ABI_CALL(0x002EDDE9u, sub_002EDDE9); /* call 0x002EDDE9 */

loc_002EE0CA: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002EE0CD
 * Original: 0x002EE0CD - 0x002EE0E9 (28 bytes, 5 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE0CD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE0CD: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFAD4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFAD4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x306424) = 1;
    PUSH32(esp, 0x002EE0E6u); RECOMP_ABI_CALL(0x002EDA3Bu, sub_002EDA3B); /* call 0x002EDA3B */

loc_002EE0E6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE0E9
 * Original: 0x002EE0E9 - 0x002EE194 (171 bytes, 53 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE0E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EE0E9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x322A94;
    MEM32(esi + 8) = 0x322A90;
    PUSH32(esp, 0x002EE101u); RECOMP_ABI_CALL(0x002EDA3Bu, sub_002EDA3B); /* call 0x002EDA3B */

loc_002EE101: ;
    _fa = (uint32_t)(MEM32(0x306B00)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306B00), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE11C; /* je: equal / zero */

loc_002EE10A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306B00);
    { uint32_t _icall_target = MEM32(0x31C900); PUSH32(esp, 0x002EE115u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE10Fu); } /* indirect call */
    }

loc_002EE115: ;
    MEM32(0x306B00) = MEM32(0x306B00) & 0;
    _fa = (uint32_t)(MEM32(0x306B00)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EE11C: ;
    eax = esi + 0x4E8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x002EE129u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE123u); } /* indirect call */
    }

loc_002EE129: ;
    ebp = MEM32(0x31C934);
    edi = esi + 0x4C8;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), 0x13 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE141; /* jne: not equal / not zero */

loc_002EE13B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x002EE13Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE13Cu); } /* indirect call */
    }

loc_002EE13E: ;
    MEM16(edi) = ~MEM16(edi);

loc_002EE141: ;
    ebx = esi + 0x510;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx), 0x13 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE159; /* jne: not equal / not zero */

loc_002EE14D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x002EE150u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE14Eu); } /* indirect call */
    }

loc_002EE150: ;
    SET_LO16(eax, MEM16(edi));
    SET_LO16(eax, ~LO16(eax));
    MEM16(ebx) = LO16(eax);

loc_002EE159: ;
    edi = esi + 0x52C;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE16F; /* je: equal / zero */

loc_002EE165: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C850); PUSH32(esp, 0x002EE16Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE167u); } /* indirect call */
    }

loc_002EE16D: ;
    MEM32(edi) = ebx;

loc_002EE16F: ;
    eax = MEM32(esi + 0x58);
    MEM32(eax) = ebx;
    eax = MEM32(esi + 0x5C);
    ecx = esi + 0x60;
    MEM32(eax) = ebx;
    PUSH32(esp, 0x002EE181u); RECOMP_ABI_CALL(0x002EEA62u, sub_002EEA62); /* call 0x002EEA62 */

loc_002EE181: ;
    ecx = esi + 8;
    PUSH32(esp, 0x002EE189u); RECOMP_ABI_CALL(0x002F29B4u, sub_002F29B4); /* call 0x002F29B4 */

loc_002EE189: ;
    POP32(esp, edi);
    MEM32(esi) = 0x322A18;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE194
 * Original: 0x002EE194 - 0x002EE1D6 (66 bytes, 25 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE194(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EE194: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x31C938);
    esi = ecx;
    ebp = 0x2EDC78;
    ebx = 0x306B00;
    goto loc_002EE1C3;

loc_002EE1AC: ;
    _fa = (uint32_t)(MEM8(esi + 0x4C0)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x4C0), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE1BC; /* je: equal / zero */

loc_002EE1B5: ;
    ecx = esi;
    PUSH32(esp, 0x002EE1BCu); RECOMP_ABI_CALL(0x002EDBFFu, sub_002EDBFF); /* call 0x002EDBFF */

loc_002EE1BC: ;
    MEM32(esi + 0x4C0) = MEM32(esi + 0x4C0) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x4C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EE1C3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x002EE1C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE1C6u); } /* indirect call */
    }

loc_002EE1C8: ;
    _fa = (uint32_t)(MEM8(esi + 0x4C0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x4C0), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EE1AC; /* jne: not equal / not zero */

loc_002EE1D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE1D6
 * Original: 0x002EE1D6 - 0x002EE1EC (22 bytes, 5 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE1D6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE1D6: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x8000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE1E9; /* jne: not equal / not zero */

loc_002EE1E0: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x002EE1E9u); RECOMP_ABI_CALL(0x002EDD12u, sub_002EDD12); /* call 0x002EDD12 */

loc_002EE1E9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EE1EC
 * Original: 0x002EE1EC - 0x002EE230 (68 bytes, 28 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE1EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE1EC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE201u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EE201: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE21E; /* je: equal / zero */

loc_002EE20B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002EE217; /* je: equal / zero */

loc_002EE210: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE215u); RECOMP_ABI_CALL(0x002E9F00u, sub_002E9F00); /* call 0x002E9F00 */

loc_002EE215: ;
    goto loc_002EE21E;

loc_002EE217: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE21Eu); RECOMP_ABI_CALL(0x002EDD87u, sub_002EDD87); /* call 0x002EDD87 */

loc_002EE21E: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE22Au); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EE22A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE230
 * Original: 0x002EE230 - 0x002EE23C (12 bytes, 3 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE230(void)
{

loc_002EE230: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x002EE239u); RECOMP_ABI_CALL(0x002EE194u, sub_002EE194); /* call 0x002EE194 */

loc_002EE239: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002EE23C
 * Original: 0x002EE23C - 0x002EE257 (27 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE23C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE23C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002EE244u); RECOMP_ABI_CALL(0x002EE0E9u, sub_002EE0E9); /* call 0x002EE0E9 */

loc_002EE244: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE251; /* je: equal / zero */

loc_002EE24B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EE251u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002EE251: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE257
 * Original: 0x002EE257 - 0x002EE29E (71 bytes, 25 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE257(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE257: ;
    eax = MEM32(0xFE801100u);
    PUSH32(esp, esi);
    edx = 0xF00;
    PUSH32(esp, edi);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    edi = ecx;
    ecx = MEM32(-25160960);
    esi = MEM32(-25160956);
    if (CMP_NE(_fa, _fb)) goto loc_002EE286; /* jne: not equal / not zero */

loc_002EE277: ;
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x002EE286u); RECOMP_ABI_CALL(0x002EE1D6u, sub_002EE1D6); /* call 0x002EE1D6 */

loc_002EE286: ;
    esi = edi + 8;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002EE292u); RECOMP_ABI_CALL(0x002F273Bu, sub_002F273B); /* call 0x002F273B */

loc_002EE292: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x002EE29Bu); RECOMP_ABI_CALL(0x002F273Bu, sub_002F273B); /* call 0x002F273B */

loc_002EE29B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE29E
 * Original: 0x002EE29E - 0x002EE374 (214 bytes, 81 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE29E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EE29E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -4) = edi;
    if ((_fa == 0)) goto loc_002EE367; /* je: equal / zero */

loc_002EE2BA: ;
    eax = ebp + -12;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C838); PUSH32(esp, 0x002EE2C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE2BEu); } /* indirect call */
    }

loc_002EE2C4: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(esi + 0x18);
    if (CMP_G(_fas, _fbs)) goto loc_002EE2E4; /* jg: greater (signed >) */

loc_002EE2CE: ;
    if (CMP_L(_fas, _fbs)) goto loc_002EE2D4; /* jl: less (signed <) */

loc_002EE2D0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_A(_fa, _fb)) goto loc_002EE2E4; /* ja: above (unsigned >) */

loc_002EE2D4: ;
    edx = MEM32(ebp + -12);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -8);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0x1C) = ecx;

loc_002EE2E4: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_002EE367; /* jl: less (signed <) */

loc_002EE2EC: ;
    if (CMP_G(_fas, _fbs)) goto loc_002EE2F6; /* jg: greater (signed >) */

loc_002EE2EE: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_002EE367; /* jbe: below or equal (unsigned <=) */

loc_002EE2F6: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 8) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_002EE30B; /* je: equal / zero */

loc_002EE303: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE30Bu); RECOMP_ABI_CALL(0x002EE1ECu, sub_002EE1EC); /* call 0x002EE1EC */

loc_002EE30B: ;
    ecx = edi + 0x4A8;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002EE338; /* je: equal / zero */

loc_002EE317: ;
    edx = MEM32(esi + 0x18);
    edi = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);

loc_002EE31E: ;
    ebx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_002EE334; /* jg: greater (signed >) */

loc_002EE325: ;
    if (CMP_L(_fas, _fbs)) goto loc_002EE32E; /* jl: less (signed <) */

loc_002EE327: ;
    ebx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_002EE334; /* ja: above (unsigned >) */

loc_002EE32E: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002EE31E; /* jne: not equal / not zero */

loc_002EE334: ;
    edi = MEM32(ebp + -4);
    POP32(esp, ebx);

loc_002EE338: ;
    MEM32(esi) = eax;
    eax = MEM32(eax + 4);
    MEM32(esi + 4) = eax;
    MEM32(eax) = esi;
    eax = MEM32(esi);
    MEM32(eax + 4) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002EE36B; /* jne: not equal / not zero */

loc_002EE34B: ;
    eax = edi + 0x510;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x1C));
    _fb = (uint32_t)(0x4E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x4E8)) >> 32) & 1);
    edi = edi + 0x4E8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x002EE365u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE35Fu); } /* indirect call */
    }

loc_002EE365: ;
    goto loc_002EE36B;

loc_002EE367: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EE36B: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE374
 * Original: 0x002EE374 - 0x002EE3C9 (85 bytes, 30 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE374(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE374: ;
    PUSH32(esp, ebx);
    ebx = MEM32(-25161728);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ecx;
    if ((_fa == 0)) goto loc_002EE3C3; /* je: equal / zero */

loc_002EE386: ;
    MEM32(-25161728) = ebx;
    MEM32(esi + 0x4B8) = MEM32(esi + 0x4B8) | ebx;
    _fa = (uint32_t)(MEM32(esi + 0x4B8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE39C; /* je: equal / zero */

loc_002EE397: ;
    PUSH32(esp, 0x002EE39Cu); RECOMP_ABI_CALL(0x002EE257u, sub_002EE257); /* call 0x002EE257 */

loc_002EE39C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE3A8; /* je: equal / zero */

loc_002EE3A1: ;
    ecx = esi;
    PUSH32(esp, 0x002EE3A8u); RECOMP_ABI_CALL(0x002EDCA4u, sub_002EDCA4); /* call 0x002EDCA4 */

loc_002EE3A8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE3BE; /* je: equal / zero */

loc_002EE3AD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x4C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C8DC); PUSH32(esp, 0x002EE3BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE3B8u); } /* indirect call */
    }

loc_002EE3BE: ;
    eax = MEM32(0xFE801000u);

loc_002EE3C3: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE3C9
 * Original: 0x002EE3C9 - 0x002EE410 (71 bytes, 29 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE3C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE3C9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE3DEu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EE3DE: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 1 (8-bit) */
    ecx = edi;
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002EE3F1; /* je: equal / zero */

loc_002EE3EA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE3EFu); RECOMP_ABI_CALL(0x002EDD62u, sub_002EDD62); /* call 0x002EDD62 */

loc_002EE3EF: ;
    goto loc_002EE3F6;

loc_002EE3F1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE3F6u); RECOMP_ABI_CALL(0x002EE29Eu, sub_002EE29E); /* call 0x002EE29E */

loc_002EE3F6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE400; /* je: equal / zero */

loc_002EE3FC: ;
    MEM32(esi + 8) = MEM32(esi + 8) | 2;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002EE400: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE408u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EE408: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE410
 * Original: 0x002EE410 - 0x002EE41C (12 bytes, 3 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE410(void)
{

loc_002EE410: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x002EE419u); RECOMP_ABI_CALL(0x002EE374u, sub_002EE374); /* call 0x002EE374 */

loc_002EE419: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EE41C
 * Original: 0x002EE41C - 0x002EE50E (242 bytes, 83 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE41C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EE41C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = esi + 8;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x002EE42Du); RECOMP_ABI_CALL(0x002F2E1Bu, sub_002F2E1B); /* call 0x002F2E1B */

loc_002EE42D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002EE4F0; /* jl: less (signed <) */

loc_002EE437: ;
    PUSH32(esp, 0x7FF);
    ecx = esi + 0x60;
    PUSH32(esp, 0x002EE444u); RECOMP_ABI_CALL(0x002EEA84u, sub_002EEA84); /* call 0x002EEA84 */

loc_002EE444: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002EE4F0; /* jl: less (signed <) */

loc_002EE44E: ;
    ebx = MEM32(0x31C7A8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2EE230);
    eax = esi + 0x4C8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x002EE463u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE461u); } /* indirect call */
    }

loc_002EE463: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esi + 0x4E8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7A4); PUSH32(esp, 0x002EE472u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE46Cu); } /* indirect call */
    }

loc_002EE472: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2EE0C1);
    eax = esi + 0x510;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x002EE481u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE47Fu); } /* indirect call */
    }

loc_002EE481: ;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(0x31C894); PUSH32(esp, 0x002EE48Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE488u); } /* indirect call */
    }

loc_002EE48E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    ebx = 0x306B00;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2EE410);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C8A0); PUSH32(esp, 0x002EE4A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE4A3u); } /* indirect call */
    }

loc_002EE4A9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C89C); PUSH32(esp, 0x002EE4B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE4AAu); } /* indirect call */
    }

loc_002EE4B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE4B9; /* jne: not equal / not zero */

loc_002EE4B4: ;
    edi = 0x80004005u;

loc_002EE4B9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002EE4F0; /* jl: less (signed <) */

loc_002EE4BD: ;
    PUSH32(esp, 1);
    ecx = ebp;
    MEM32(-25161728) = 0xFFFFFFFFu;
    PUSH32(esp, 0x002EE4D0u); RECOMP_ABI_CALL(0x002F26CDu, sub_002F26CD); /* call 0x002F26CD */

loc_002EE4D0: ;
    eax = esi + 0x52C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(eax) = 0x2EE0CD;
    { uint32_t _icall_target = MEM32(0x31C850); PUSH32(esp, 0x002EE4E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE4DFu); } /* indirect call */
    }

loc_002EE4E5: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002EE4EEu); RECOMP_ABI_CALL(0x002EDEFDu, sub_002EDEFD); /* call 0x002EDEFD */

loc_002EE4EE: ;
    edi = eax;

loc_002EE4F0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EE4F2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002EE506; /* jl: less (signed <) */

loc_002EE4F6: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002EE4FEu); RECOMP_ABI_CALL(0x002EDF34u, sub_002EDF34); /* call 0x002EDF34 */

loc_002EE4FE: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20 (32-bit) */
    edi = eax;
    if (CMP_B(_fa, _fb)) goto loc_002EE4F2; /* jb: below (unsigned <) */

loc_002EE506: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE50E
 * Original: 0x002EE50E - 0x002EE552 (68 bytes, 28 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE50E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE50E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE520; /* je: equal / zero */

loc_002EE51B: ;
    edx = MEM32(ebp + 0xC);
    MEM32(ecx) = edx;

loc_002EE520: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(ebp + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_002EE52C; /* je: equal / zero */

loc_002EE52A: ;
    MEM32(ecx) = edx;

loc_002EE52C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE53E; /* je: equal / zero */

loc_002EE532: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, MEM32(ebp + 0x14));
    { uint32_t _icall_target = MEM32(ebp + 0x10); PUSH32(esp, 0x002EE53Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE539u); } /* indirect call */
    }

loc_002EE53C: ;
    goto loc_002EE54E;

loc_002EE53E: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE54E; /* je: equal / zero */

loc_002EE545: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C870); PUSH32(esp, 0x002EE54Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE548u); } /* indirect call */
    }

loc_002EE54E: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002EE552
 * Original: 0x002EE552 - 0x002EE56D (27 bytes, 11 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE552(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE552: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE567; /* je: equal / zero */

loc_002EE55D: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x002EE567u); RECOMP_ABI_CALL(0x002ED979u, sub_002ED979); /* call 0x002ED979 */

loc_002EE567: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EE56D
 * Original: 0x002EE56D - 0x002EE58B (30 bytes, 12 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE56D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE56D: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ZX8(MEM8(eax + ecx + 0xF));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002EE585; /* je: equal / zero */

loc_002EE57E: ;
    _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002EE588;

loc_002EE585: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002EE588: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE58B
 * Original: 0x002EE58B - 0x002EE5A4 (25 bytes, 8 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE58B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE58B: ;
    ecx = MEM32(ecx + 0x70);
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x14));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x14)); }
    _fa = (uint32_t)(MEM16(ecx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xC), 0x69 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE5A1; /* jne: not equal / not zero */

loc_002EE59E: ;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_002EE5A1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE5A4
 * Original: 0x002EE5A4 - 0x002EE5C6 (34 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE5A4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE5A4: ;
    ecx = MEM32(ecx + 0x70);
    _fa = (uint32_t)(MEM16(ecx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xC), 0x69 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE5BB; /* jne: not equal / not zero */

loc_002EE5AE: ;
    eax = MEM32(esp + 4);
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0x14));
    goto loc_002EE5C3;

loc_002EE5BB: ;
    eax = MEM32(ecx + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));

loc_002EE5C3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE5C6
 * Original: 0x002EE5C6 - 0x002EE638 (114 bytes, 46 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE5C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE5C6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp + -8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE5DCu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EE5DC: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE628; /* jne: not equal / not zero */

loc_002EE5E5: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE60E; /* je: equal / zero */

loc_002EE5EB: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE5FF; /* je: equal / zero */

loc_002EE5F1: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) | 0x1000);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(esi + 0x12) = LO16(eax);
    goto loc_002EE605;

loc_002EE5FF: ;
    MEM16(esi + 0x12) = MEM16(esi + 0x12) & 0xEFFF;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_002EE605: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE60Cu); RECOMP_ABI_CALL(0x002EF90Eu, sub_002EF90E); /* call 0x002EF90E */

loc_002EE60C: ;
    goto loc_002EE616;

loc_002EE60E: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE616u); RECOMP_ABI_CALL(0x002F0294u, sub_002F0294); /* call 0x002F0294 */

loc_002EE616: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EE628; /* jne: not equal / not zero */

loc_002EE61C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002EE628u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE625u); } /* indirect call */
    }

loc_002EE628: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE630u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EE630: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE638
 * Original: 0x002EE638 - 0x002EE684 (76 bytes, 25 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE638(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE638: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000000Au (32-bit) */
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EE64F; /* je: equal / zero */

loc_002EE64B: ;
    MEM32(esp + 0x14) = eax;

loc_002EE64F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi + 0xC));
    edi = esi + 8;
    PUSH32(esp, MEM32(edi));
    { uint32_t _icall_target = MEM32(0x31C8D8); PUSH32(esp, 0x002EE65Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE659u); } /* indirect call */
    }

loc_002EE65F: ;
    PUSH32(esp, MEM32(esp + 0x14));
    eax = MEM32(ebx + 0x80);
    PUSH32(esp, MEM32(eax + 0xC4));
    PUSH32(esp, MEM32(eax + 0xC0));
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EE67Eu); RECOMP_ABI_CALL(0x002EE50Eu, sub_002EE50E); /* call 0x002EE50E */

loc_002EE67E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EE684
 * Original: 0x002EE684 - 0x002EE6C4 (64 bytes, 26 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE684(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EE684: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x002EE690u); RECOMP_ABI_CALL(0x002F0294u, sub_002F0294); /* call 0x002F0294 */

loc_002EE690: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0xD8;

loc_002EE698: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE6A5; /* je: equal / zero */

loc_002EE69D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002EE6A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE6A2u); } /* indirect call */
    }

loc_002EE6A5: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EE698; /* jb: below (unsigned <) */

loc_002EE6AE: ;
    ecx = esi + 0x12;
    SET_LO16(edx, 0x3111);
    PUSH32(esp, 0x002EE6BAu); RECOMP_ABI_CALL(0x002EF0A6u, sub_002EF0A6); /* call 0x002EF0A6 */

loc_002EE6BA: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002EF24A(); return; /* tail jmp 0x002EF24A */

}

/**
 * sub_002EE6C4
 * Original: 0x002EE6C4 - 0x002EE6FD (57 bytes, 26 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE6C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE6C4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ecx;
    if ((_fa == 0)) goto loc_002EE6E9; /* je: equal / zero */

loc_002EE6D5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002EE6E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE6E2u); } /* indirect call */
    }

loc_002EE6E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE6F5; /* jne: not equal / not zero */

loc_002EE6E9: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE6F3u); RECOMP_ABI_CALL(0x002EE5C6u, sub_002EE5C6); /* call 0x002EE5C6 */

loc_002EE6F3: ;
    edi = eax;

loc_002EE6F5: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EE6FD
 * Original: 0x002EE6FD - 0x002EE773 (118 bytes, 47 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE6FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE6FD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    ebx = edi + 0xB8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE71Cu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EE71C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_002EE75A; /* jne: not equal / not zero */

loc_002EE721: ;
    goto loc_002EE737;

loc_002EE723: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE72Eu); RECOMP_ABI_CALL(0x002EE638u, sub_002EE638); /* call 0x002EE638 */

loc_002EE72E: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE736u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EE736: ;
    PUSH32(esp, esi);

loc_002EE737: ;
    eax = edi + 0xB0;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE743u); RECOMP_ABI_CALL(0x002EE552u, sub_002EE552); /* call 0x002EE552 */

loc_002EE743: ;
    ecx = ebp + -8;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE74Du); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EE74D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE723; /* jne: not equal / not zero */

loc_002EE751: ;
    goto loc_002EE76C;

loc_002EE753: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0x24) = ecx;
    PUSH32(esp, esi);

loc_002EE75A: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE760u); RECOMP_ABI_CALL(0x002EE552u, sub_002EE552); /* call 0x002EE552 */

loc_002EE760: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE753; /* jne: not equal / not zero */

loc_002EE764: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE76Cu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EE76C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EE773
 * Original: 0x002EE773 - 0x002EE79B (40 bytes, 16 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE773(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE773: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE786; /* je: equal / zero */

loc_002EE77F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002EE786u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE783u); } /* indirect call */
    }

loc_002EE786: ;
    PUSH32(esp, 0x8000000Au);
    eax = esi + 0xB8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002EE799u); RECOMP_ABI_CALL(0x002EE6FDu, sub_002EE6FD); /* call 0x002EE6FD */

loc_002EE799: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE79B
 * Original: 0x002EE79B - 0x002EE85E (195 bytes, 65 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE79B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE79B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE7B0u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EE7B0: ;
    eax = MEM32(ebp + 8);
    ecx = eax + 9;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ecx + esi;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE850; /* je: equal / zero */

loc_002EE7C5: ;
    ecx = ZX8(MEM8(esi + 0x64));
    edx = ecx + ecx;
    PUSH32(esp, edi);

loc_002EE7CD: ;
    edi = MEM32(-25034736);
    edi = edi >> 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EE7CD; /* jb: below (unsigned <) */

loc_002EE7DA: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EE81A; /* jbe: below or equal (unsigned <=) */

loc_002EE7E2: ;
    edi = esi + 0xC;

loc_002EE7E5: ;
    ecx = ZX16(MEM16(edi));
    edx = eax + ecx * 2;
    edx = edx << 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFFFF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(-25033992) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002EE806; /* jne: not equal / not zero */

loc_002EE7FE: ;
    MEM32(-25033952) = edx;
    goto loc_002EE80C;

loc_002EE806: ;
    MEM32(-25033892) = edx;

loc_002EE80C: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX8(MEM8(esi + 0x64));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EE7E5; /* jb: below (unsigned <) */

loc_002EE81A: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + esi;
    eax = edi + 0x88;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE831u); RECOMP_ABI_CALL(0x002EE6FDu, sub_002EE6FD); /* call 0x002EE6FD */

loc_002EE831: ;
    MEM32(edi + 0x94) = MEM32(edi + 0x94) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x94)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x194) = MEM32(esi + 0x194) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x194)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi + 0x190;
    ecx = MEM32(eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    POP32(esp, edi);

loc_002EE850: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE858u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EE858: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EE85E
 * Original: 0x002EE85E - 0x002EE93E (224 bytes, 81 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE85E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE85E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    MEM8(ebp + -1) = LO8(eax);
    MEM32(ebp + -12) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_002EE92C; /* je: equal / zero */

loc_002EE882: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE88Au); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EE88A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002EE892u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE88Fu); } /* indirect call */
    }

loc_002EE892: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EE88A; /* jb: below (unsigned <) */

loc_002EE898: ;
    edi = MEM32(esi + 0x190);
    PUSH32(esp, ebx);
    MEM32(ebp + -8) = 2;
    ebx = 0x80004004u;

loc_002EE8AB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE8B4u); RECOMP_ABI_CALL(0x002EE79Bu, sub_002EE79B); /* call 0x002EE79B */

loc_002EE8B4: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002EE8AB; /* jne: not equal / not zero */

loc_002EE8BD: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0x190) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE8CDu); RECOMP_ABI_CALL(0x002F0294u, sub_002F0294); /* call 0x002F0294 */

loc_002EE8CD: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE8D5u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EE8D5: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE8DCu); RECOMP_ABI_CALL(0x002F01AAu, sub_002F01AA); /* call 0x002F01AA */

loc_002EE8DC: ;
    PUSH32(esp, ebx);
    eax = esi + 0xA8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE8EBu); RECOMP_ABI_CALL(0x002EE6FDu, sub_002EE6FD); /* call 0x002EE6FD */

loc_002EE8EB: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 4 (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_002EE911; /* je: equal / zero */

loc_002EE8F8: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_002EE907; /* jne: not equal / not zero */

loc_002EE900: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE905u); RECOMP_ABI_CALL(0x002EE684u, sub_002EE684); /* call 0x002EE684 */

loc_002EE905: ;
    goto loc_002EE917;

loc_002EE907: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002EE911u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE90Eu); } /* indirect call */
    }

loc_002EE911: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE920; /* jne: not equal / not zero */

loc_002EE917: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE91Eu); RECOMP_ABI_CALL(0x002EE773u, sub_002EE773); /* call 0x002EE773 */

loc_002EE91E: ;
    goto loc_002EE92C;

loc_002EE920: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002EE92Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE929u); } /* indirect call */
    }

loc_002EE92C: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE938; /* jne: not equal / not zero */

loc_002EE932: ;
    MEM16(esi + 0x12) = MEM16(esi + 0x12) & 0xCFFF;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_002EE938: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE93E
 * Original: 0x002EE93E - 0x002EE9C7 (137 bytes, 56 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_002EE93E(void)
{
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

loc_002EE93E: ;
    fp_push(MEMF(0x3337C0)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002EE972; /* jp: parity */

loc_002EE956: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002EE972; /* jp: parity */

loc_002EE964: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EE9C3; /* jnp: not parity */

loc_002EE972: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x322820)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EE9C3; /* jnp: not parity */

loc_002EE987: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EE9C3; /* jnp: not parity */

loc_002EE995: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EE9C3; /* jnp: not parity */

loc_002EE9A3: ;
    PUSH32(esp, esi);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x002EE9ABu); RECOMP_ABI_CALL(0x002ECC75u, sub_002ECC75); /* call 0x002ECC75 */

loc_002EE9AB: ;
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_002EE9C3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EE9C7
 * Original: 0x002EE9C7 - 0x002EE9E5 (30 bytes, 12 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE9C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002EE9C7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = 0x45800000;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_push(MEMF(ebp + 8)); /* fld float */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    SMEM32(ebp + -8) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); fp_pop(); /* fistp */
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EE9E5
 * Original: 0x002EE9E5 - 0x002EEA1B (54 bytes, 16 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE9E5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE9E5: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    MEM32(eax + 4) = ecx;
    ecx = edx;
    MEM32(eax) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    SET_LO16(ecx, MEM16(esp + 8));
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(eax + 8) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(eax + 0xA) = LO16(ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002EEA1B
 * Original: 0x002EEA1B - 0x002EEA42 (39 bytes, 13 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEA1B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEA1B: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax + 4) = ecx;
    ecx = edx;
    MEM32(eax) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EEA42
 * Original: 0x002EEA42 - 0x002EEA62 (32 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEA42(void)
{

loc_002EEA42: ;
    eax = ecx;
    ecx = eax + 4;
    MEM32(eax + 8) = ecx;
    MEM32(ecx) = ecx;
    ecx = eax + 0xC;
    MEM32(eax) = 0x322AA4;
    MEM32(eax + 0x1C) = 0x306410;
    MEM32(eax + 0x10) = ecx;
    MEM32(ecx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002EEA62
 * Original: 0x002EEA62 - 0x002EEA84 (34 bytes, 13 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEA62(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEA62: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x322AA4;
    if (CMP_EQ(_fa, _fb)) goto loc_002EEA7C; /* je: equal / zero */

loc_002EEA72: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EEA78u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002EEA78: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EEA7C: ;
    eax = MEM32(esi + 0x1C);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EEA84
 * Original: 0x002EEA84 - 0x002EEB0F (139 bytes, 53 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EEA84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EEA84: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ebp + 8));
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    MEM32(eax) = edi;
    PUSH32(esp, 1);
    eax = edi + edi * 4 + 5;
    if (2) _cf = (int)(((eax) >> (32 - (2))) & 1);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x61645344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEAA9u); RECOMP_ABI_CALL(0x002ECADEu, sub_002ECADE); /* call 0x002ECADE */

loc_002EEAA9: ;
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0x7FF8FFF2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    ebx = ebx + 0x8007000Eu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;
    if ((_fas < 0)) goto loc_002EEB06; /* js: sign (negative) */

loc_002EEAC0: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEAD1u); RECOMP_ABI_CALL(0x002EE9E5u, sub_002EE9E5); /* call 0x002EE9E5 */

loc_002EEAD1: ;
    MEM32(esi + 0x18) = eax;
    eax = edi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_002EEB06; /* jbe: below or equal (unsigned <=) */

loc_002EEADC: ;
    ecx = esi + 0xC;
    MEM32(ebp + 8) = 0x14;
    edx = eax + -1;

loc_002EEAE9: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + 8))) >> 32) & 1);
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(0x14)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x14;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    edi = MEM32(ecx + 4);
    MEM32(eax + 4) = edi;
    MEM32(ecx + 4) = eax;
    edi = MEM32(eax + 4);
    MEM32(edi) = eax;
    if ((_fa != 0)) goto loc_002EEAE9; /* jne: not equal / not zero */

loc_002EEB06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EEB0F
 * Original: 0x002EEB0F - 0x002EEBE0 (209 bytes, 76 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEB0F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEB0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEBD9; /* je: equal / zero */

loc_002EEB20: ;
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(esp + 0x14));
    _fa = (uint32_t)(MEM16(eax + 0xA)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xA), LO16(ebx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EEBD8; /* jb: below (unsigned <) */

loc_002EEB30: ;
    edx = edi + 4;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEBD8; /* je: equal / zero */

loc_002EEB3D: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEB58; /* jne: not equal / not zero */

loc_002EEB43: ;
    SET_LO16(ecx, MEM16(eax + 0xA));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EEB58; /* jb: below (unsigned <) */

loc_002EEB4C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEB56; /* je: equal / zero */

loc_002EEB50: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(esi + 0xA) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002EEB58; /* jae: above or equal (unsigned >=) */

loc_002EEB56: ;
    esi = eax;

loc_002EEB58: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEB3D; /* jne: not equal / not zero */

loc_002EEB5E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEBD8; /* je: equal / zero */

loc_002EEB62: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), MEM16(esi + 0xA) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002EEB91; /* jae: above or equal (unsigned >=) */

loc_002EEB68: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, 0x002EEB70u); RECOMP_ABI_CALL(0x002E9F00u, sub_002E9F00); /* call 0x002E9F00 */

loc_002EEB70: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0xA));
    _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - LO16(ebx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 8));
    _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + LO16(ebx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002EEB8Du); RECOMP_ABI_CALL(0x002EE9E5u, sub_002EE9E5); /* call 0x002EE9E5 */

loc_002EEB8D: ;
    MEM16(esi + 0xA) = LO16(ebx);

loc_002EEB91: ;
    eax = MEM32(esp + 0x10);
    ecx = ZX16(MEM16(esi + 0xA));
    MEM32(esi + 0xC) = 1;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(edi + 0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax) = MEM32(eax) - ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEBD8; /* jne: not equal / not zero */

loc_002EEBAD: ;
    MEM32(edi + 0x18) = MEM32(edi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edi + 4;
    eax = MEM32(edx);
    goto loc_002EEBD4;

loc_002EEBB8: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEBD2; /* jne: not equal / not zero */

loc_002EEBBE: ;
    ecx = MEM32(edi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEBCF; /* je: equal / zero */

loc_002EEBC5: ;
    SET_LO16(ebx, MEM16(eax + 0xA));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), MEM16(ecx + 0xA) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EEBD2; /* jbe: below or equal (unsigned <=) */

loc_002EEBCF: ;
    MEM32(edi + 0x18) = eax;

loc_002EEBD2: ;
    eax = MEM32(eax);

loc_002EEBD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEBB8; /* jne: not equal / not zero */

loc_002EEBD8: ;
    POP32(esp, ebx);

loc_002EEBD9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EEBE0
 * Original: 0x002EEBE0 - 0x002EEC01 (33 bytes, 12 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEBE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEBE0: ;
    eax = MEM32(esp + 8);
    SET_LO16(edx, MEM16(eax + 0xA));
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(esi + 0xA) = MEM16(esi + 0xA) + LO16(edx);
    _fa = (uint32_t)(MEM16(esi + 0xA)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EEBFBu); RECOMP_ABI_CALL(0x002ED979u, sub_002ED979); /* call 0x002ED979 */

loc_002EEBFB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EEC01
 * Original: 0x002EEC01 - 0x002EEC6E (109 bytes, 40 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EEC01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEC01: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebx;
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x31C8D8); PUSH32(esp, 0x002EEC1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EEC19u); } /* indirect call */
    }

loc_002EEC1F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEC69; /* je: equal / zero */

loc_002EEC23: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);

loc_002EEC28: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x31C8D4); PUSH32(esp, 0x002EEC31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EEC2Bu); } /* indirect call */
    }

loc_002EEC31: ;
    ecx = ebp + -8;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEC3Bu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EEC3B: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EEC3B; /* jb: below (unsigned <) */

loc_002EEC48: ;
    MEM32(-25032700) = edi;
    ecx = ebp + -8;
    MEM32(-25032696) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEC5Cu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EEC5C: ;
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x1000;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002EEC28; /* jne: not equal / not zero */

loc_002EEC67: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002EEC69: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EEC6E
 * Original: 0x002EEC6E - 0x002EEC85 (23 bytes, 7 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEC6E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEC6E: ;
    eax = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    { uint32_t _icall_target = MEM32(0x31C8D8); PUSH32(esp, 0x002EEC82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EEC7Cu); } /* indirect call */
    }

loc_002EEC82: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EEC85
 * Original: 0x002EEC85 - 0x002EECAA (37 bytes, 11 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEC85(void)
{

loc_002EEC85: ;
    eax = ecx;
    ecx = eax + 8;
    MEM32(eax + 4) = 1;
    MEM32(eax) = 0x322AA8;
    MEM32(0x306A20) = eax;
    MEM32(eax + 0xC) = ecx;
    MEM32(ecx) = ecx;
    ecx = eax + 0x10;
    MEM32(eax + 0x14) = ecx;
    MEM32(ecx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002EECAA
 * Original: 0x002EECAA - 0x002EED0B (97 bytes, 34 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EECAA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EECAA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    MEM32(edi) = 0x322AA8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EECC5u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EECC5: ;
    MEM32(0x306A20) = MEM32(0x306A20) & 0;
    _fa = (uint32_t)(MEM32(0x306A20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = edi + 8;
    goto loc_002EECDE;

loc_002EECD1: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EECDE; /* je: equal / zero */

loc_002EECD8: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EECDEu); RECOMP_ABI_CALL(0x002ECAC6u, sub_002ECAC6); /* call 0x002ECAC6 */

loc_002EECDE: ;
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EECE5u); RECOMP_ABI_CALL(0x002E9F00u, sub_002E9F00); /* call 0x002E9F00 */

loc_002EECE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EECD1; /* jne: not equal / not zero */

loc_002EECE9: ;
    eax = MEM32(0x306B74);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x306B70);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EED01u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EED01: ;
    MEM32(edi) = 0x322A18;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EED0B
 * Original: 0x002EED0B - 0x002EED8F (132 bytes, 56 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EED0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EED0B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EED20u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EED20: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0x5C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_002EED7F; /* je: equal / zero */

loc_002EED33: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    ecx = esi + 8;
    MEM32(eax) = ecx;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    MEM32(eax + 4) = ebx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xFFFFFFF4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFFF4u)) >> 32) & 1);
    edx = edx + 0xFFFFFFF4u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EED62u); RECOMP_ABI_CALL(0x002EEA1Bu, sub_002EEA1B); /* call 0x002EEA1B */

loc_002EED62: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_002EED72; /* je: equal / zero */

loc_002EED6A: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_002EED75; /* jbe: below or equal (unsigned <=) */

loc_002EED72: ;
    MEM32(esi + 0x18) = eax;

loc_002EED75: ;
    eax = MEM32(0x306B74);
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002EED7F: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EED87u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EED87: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EED8F
 * Original: 0x002EED8F - 0x002EEE70 (225 bytes, 89 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EED8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EED8F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp + -8;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEDA6u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EEDA6: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x18);
    _fb = (uint32_t)(0x17) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x17)) >> 32) & 1);
    esi = esi + 0x17;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (3) _cf = (int)(((esi) >> ((3) - 1)) & 1);
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (3) _cf = (int)(((esi) >> (32 - (3))) & 1);
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEE56; /* je: equal / zero */

loc_002EEDBD: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002EEE56; /* jb: below (unsigned <) */

loc_002EEDC6: ;
    edx = edi + 0x10;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002EEE56; /* je: equal / zero */

loc_002EEDD3: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002EEDEB; /* jne: not equal / not zero */

loc_002EEDD9: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002EEDEB; /* jb: below (unsigned <) */

loc_002EEDE0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEDE9; /* je: equal / zero */

loc_002EEDE4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_002EEDEB; /* jae: above or equal (unsigned >=) */

loc_002EEDE9: ;
    ebx = eax;

loc_002EEDEB: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002EEDD3; /* jne: not equal / not zero */

loc_002EEDF1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEE56; /* je: equal / zero */

loc_002EEDF5: ;
    eax = MEM32(ebx + 8);
    ecx = esi + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_002EEE11; /* jae: above or equal (unsigned >=) */

loc_002EEDFF: ;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = ebx + esi;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEE0Eu); RECOMP_ABI_CALL(0x002EEA1Bu, sub_002EEA1B); /* call 0x002EEA1B */

loc_002EEE0E: ;
    MEM32(ebx + 8) = esi;

loc_002EEE11: ;
    MEM32(ebx + 0xC) = 0x706F6C73;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002EEE46; /* jne: not equal / not zero */

loc_002EEE1D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(edi + 0x18) = MEM32(edi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi + 0x10;
    eax = MEM32(ecx);
    goto loc_002EEE42;

loc_002EEE28: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002EEE40; /* jne: not equal / not zero */

loc_002EEE2E: ;
    edx = MEM32(edi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEE3D; /* je: equal / zero */

loc_002EEE35: ;
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_002EEE40; /* jbe: below or equal (unsigned <=) */

loc_002EEE3D: ;
    MEM32(edi + 0x18) = eax;

loc_002EEE40: ;
    eax = MEM32(eax);

loc_002EEE42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002EEE28; /* jne: not equal / not zero */

loc_002EEE46: ;
    eax = MEM32(0x306B70);
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002EEE56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EEE53u); } /* indirect call */
    }

loc_002EEE56: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEE5Eu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EEE5E: ;
    eax = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x10)) >> 32) & 1);
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EEE70
 * Original: 0x002EEE70 - 0x002EEE8B (27 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEE70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEE70: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 8) = MEM32(esi + 8) + ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EEE85u); RECOMP_ABI_CALL(0x002E9F00u, sub_002E9F00); /* call 0x002E9F00 */

loc_002EEE85: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EEE8B
 * Original: 0x002EEE8B - 0x002EEEA6 (27 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEE8B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEE8B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002EEE93u); RECOMP_ABI_CALL(0x002EEA62u, sub_002EEA62); /* call 0x002EEA62 */

loc_002EEE93: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EEEA0; /* je: equal / zero */

loc_002EEE9A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EEEA0u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002EEEA0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EEEA6
 * Original: 0x002EEEA6 - 0x002EEF35 (143 bytes, 56 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EEEA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEEA6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = ebx;
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + ecx + 0xFFF;
    ecx = ebp + -8;
    esi = esi >> 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0xFFFFF000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEED9u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EEED9: ;
    ecx = edi + 4;
    eax = MEM32(ecx);
    goto loc_002EEEF3;

loc_002EEEE0: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEEF1; /* je: equal / zero */

loc_002EEEE6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEEF1; /* jne: not equal / not zero */

loc_002EEEEB: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(eax + 0xA) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEF2E; /* je: equal / zero */

loc_002EEEF1: ;
    eax = MEM32(eax);

loc_002EEEF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEEE0; /* jne: not equal / not zero */

loc_002EEEF7: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEF00u); RECOMP_ABI_CALL(0x002EEB0Fu, sub_002EEB0F); /* call 0x002EEB0F */

loc_002EEF00: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEF1D; /* je: equal / zero */

loc_002EEF06: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEF0Eu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EEF0E: ;
    eax = ZX16(LO16(esi));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(edi + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEF1Du); RECOMP_ABI_CALL(0x002EEC01u, sub_002EEC01); /* call 0x002EEC01 */

loc_002EEF1D: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEF25u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EEF25: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_002EEF2E: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax;
    goto loc_002EEF1D;

}

/**
 * sub_002EEF35
 * Original: 0x002EEF35 - 0x002EEF91 (92 bytes, 38 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEF35(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEF35: ;
    eax = MEM32(esp + 4);
    edx = ZX16(MEM16(eax + 0xA));
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + edx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = esi + 4;
    goto loc_002EEF5A;

loc_002EEF4B: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEF71; /* jne: not equal / not zero */

loc_002EEF51: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002EEF5Au); RECOMP_ABI_CALL(0x002EEBE0u, sub_002EEBE0); /* call 0x002EEBE0 */

loc_002EEF5A: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEF4B; /* jne: not equal / not zero */

loc_002EEF60: ;
    goto loc_002EEF71;

loc_002EEF62: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEF78; /* jne: not equal / not zero */

loc_002EEF68: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002EEF71u); RECOMP_ABI_CALL(0x002EEBE0u, sub_002EEBE0); /* call 0x002EEBE0 */

loc_002EEF71: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEF62; /* jne: not equal / not zero */

loc_002EEF78: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEF89; /* je: equal / zero */

loc_002EEF7F: ;
    SET_LO16(edx, MEM16(eax + 0xA));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0xA) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EEF8C; /* jbe: below or equal (unsigned <=) */

loc_002EEF89: ;
    MEM32(esi + 0x18) = eax;

loc_002EEF8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EEF91
 * Original: 0x002EEF91 - 0x002EEFAC (27 bytes, 10 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEF91(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEF91: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002EEF99u); RECOMP_ABI_CALL(0x002EECAAu, sub_002EECAA); /* call 0x002EECAA */

loc_002EEF99: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EEFA6; /* je: equal / zero */

loc_002EEFA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EEFA6u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002EEFA6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EEFAC
 * Original: 0x002EEFAC - 0x002EF045 (153 bytes, 65 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EEFAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEFAC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEFC8u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EEFC8: ;
    eax = MEM32(0x306B70);
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax) = MEM32(eax) - ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = edi + 0x10;
    goto loc_002EEFF5;

loc_002EEFDB: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EF017; /* jne: not equal / not zero */

loc_002EEFE1: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EF017; /* jne: not equal / not zero */

loc_002EEFEA: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEFF3u); RECOMP_ABI_CALL(0x002EEE70u, sub_002EEE70); /* call 0x002EEE70 */

loc_002EEFF3: ;
    esi = eax;

loc_002EEFF5: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEFDB; /* jne: not equal / not zero */

loc_002EEFFB: ;
    goto loc_002EF017;

loc_002EEFFD: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EF01E; /* jne: not equal / not zero */

loc_002EF003: ;
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EF01E; /* jne: not equal / not zero */

loc_002EF00C: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF015u); RECOMP_ABI_CALL(0x002EEE70u, sub_002EEE70); /* call 0x002EEE70 */

loc_002EF015: ;
    esi = eax;

loc_002EF017: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEFFD; /* jne: not equal / not zero */

loc_002EF01E: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF02D; /* je: equal / zero */

loc_002EF025: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EF030; /* jbe: below or equal (unsigned <=) */

loc_002EF02D: ;
    MEM32(edi + 0x18) = esi;

loc_002EF030: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x002EF036u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EF033u); } /* indirect call */
    }

loc_002EF036: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF03Eu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EF03E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EF045
 * Original: 0x002EF045 - 0x002EF090 (75 bytes, 31 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EF045(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF045: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF059u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EF059: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) - 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002EF083; /* jne: not equal / not zero */

loc_002EF061: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(eax + 0xA));
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF072u); RECOMP_ABI_CALL(0x002EEF35u, sub_002EEF35); /* call 0x002EEF35 */

loc_002EF072: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF07Au); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EF07A: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF081u); RECOMP_ABI_CALL(0x002EEC6Eu, sub_002EEC6E); /* call 0x002EEC6E */

loc_002EF081: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002EF083: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF08Bu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EF08B: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EF090
 * Original: 0x002EF090 - 0x002EF09B (11 bytes, 2 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF090(void)
{

loc_002EF090: ;
    MEM32(0x306B74) = 0x306400;
    esp += 4; return; /* ret */

}

/**
 * sub_002EF09B
 * Original: 0x002EF09B - 0x002EF0A6 (11 bytes, 2 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF09B(void)
{

loc_002EF09B: ;
    MEM32(0x306B70) = 0x306404;
    esp += 4; return; /* ret */

}

/**
 * sub_002EF0A6
 * Original: 0x002EF0A6 - 0x002EF0AA (4 bytes, 2 insns)
 * Folder: xdk/dsound (section: DSOUND)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF0A6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF0A6: ;
    MEM16(ecx) = MEM16(ecx) & LO16(edx);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}
