/**
 * PoP Warrior Within Xbox retail - sound, chunk 4
 * Ubisoft Dare sound engine and Jade's glue to it
 * Functions: 250 (0x00443D60 - 0x00449A00)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_00443D60
 * Original: 0x00443D60 - 0x00443D73 (19 bytes, 6 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00443D60: ;
    eax = MEM32(0x5B0F18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443D72; /* je: equal / zero */

loc_00443D69: ;
    eax = MEM32(esp + 4);
    MEM32(0x5B0ED8) = eax;

loc_00443D72: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00443D80
 * Original: 0x00443D80 - 0x00443D92 (18 bytes, 6 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00443D80: ;
    eax = MEM32(0x5B0F18);
    ecx = MEM32(0x5B0ED8);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00443DA0
 * Original: 0x00443DA0 - 0x00443DB3 (19 bytes, 6 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00443DA0: ;
    eax = MEM32(0x5B0F18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443DB2; /* je: equal / zero */

loc_00443DA9: ;
    eax = MEM32(esp + 4);
    MEM32(0x5B0EDC) = eax;

loc_00443DB2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00443DC0
 * Original: 0x00443DC0 - 0x00443DD3 (19 bytes, 6 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00443DC0: ;
    eax = MEM32(0x5B0F18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00443DD2; /* je: equal / zero */

loc_00443DC9: ;
    eax = MEM32(esp + 4);
    MEM32(0x5B0EE0) = eax;

loc_00443DD2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00443DE0
 * Original: 0x00443DE0 - 0x00443DF2 (18 bytes, 6 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00443DE0: ;
    eax = MEM32(0x5B0F18);
    ecx = MEM32(0x5B0EDC);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00443E00
 * Original: 0x00443E00 - 0x00443E12 (18 bytes, 6 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00443E00: ;
    eax = MEM32(0x5B0F18);
    ecx = MEM32(0x5B0EE0);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00443E20
 * Original: 0x00443E20 - 0x00443E54 (52 bytes, 21 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00443E20: ;
    eax = MEM32(0x5B0F14);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00443E52; /* jle: less or equal (signed <=) */

loc_00443E2C: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5B0F10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00443E36: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00443E3Fu); RECOMP_ABI_CALL(0x0043BF60u, sub_0043BF60); /* call 0x0043BF60 */

loc_00443E3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(0x5B0F14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00443E36; /* jl: less (signed <) */

loc_00443E51: ;
    POP32(esp, esi);

loc_00443E52: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00443E60
 * Original: 0x00443E60 - 0x00443FEE (398 bytes, 123 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443E60(void)
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

loc_00443E60: ;
    eax = MEM32(0x5B0F58);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00443E76; /* jne: not equal / not zero */

loc_00443E6C: ;
    fp_push(MEMF(0x586638)); /* fld float */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00443E76: ;
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(eax + 4);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = edx;
    _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x570B00)); /* fmul dword ptr [0x570b00] */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x570B00)); /* fmul dword ptr [0x570b00] */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x570B00)); /* fmul dword ptr [0x570b00] */
    fp_push((double)SMEM32(eax + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x570B00)); /* fmul dword ptr [0x570b00] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_push((double)SMEM32(eax + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x570B00)); /* fmul dword ptr [0x570b00] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push((double)SMEM32(eax + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x570B00)); /* fmul dword ptr [0x570b00] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(eax + 0x28)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x570B00)); /* fmul dword ptr [0x570b00] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_push((double)SMEM32(eax + 0x2C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x570B00)); /* fmul dword ptr [0x570b00] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push((double)SMEM32(eax + 0x24)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x570B00)); /* fmul dword ptr [0x570b00] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x586638)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    fp_push(MEMF(0x586638)); /* fld float */
    fp_push(MEMF(esp)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00443F54; /* jp: parity */

loc_00443F2B: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00443F6A; /* jnp: not parity */

loc_00443F30: ;
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x586638)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x586638] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00443F4A; /* jne: not equal / not zero */

loc_00443F40: ;
    fp_push(MEMF(0x5866AC)); /* fld float */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00443F4A: ;
    fp_push(MEMF(0x586834)); /* fld float */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00443F54: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00443F7E; /* jp: parity */

loc_00443F59: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x586638)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x586638] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00443F74; /* jne: not equal / not zero */

loc_00443F6A: ;
    fp_push(MEMF(0x586638)); /* fld float */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00443F74: ;
    fp_push(MEMF(0x586658)); /* fld float */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00443F7E: ;
    fp_push(MEMF(esp)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00443F8Eu); RECOMP_ABI_CALL(0x0044B0F0u, sub_0044B0F0); /* call 0x0044B0F0 */

loc_00443F8E: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x586638)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x586638] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00443FB8; /* jp: parity */

loc_00443F9E: ;
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x586638)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x586638] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00443FE4; /* je: equal / zero */

loc_00443FAE: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x5865C4)); /* fadd dword ptr [0x5865c4] */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00443FB8: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x586638)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x586638] */
    fp_push(MEMF(esp)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x586638)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x586638] */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    if (TEST_NZ(_fa, _fb)) goto loc_00443FDF; /* jne: not equal / not zero */

loc_00443FD0: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00443FEA; /* jp: parity */

loc_00443FD5: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x586658)); /* fadd dword ptr [0x586658] */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00443FDF: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00443FEA; /* jne: not equal / not zero */

loc_00443FE4: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x586658)); /* fadd dword ptr [0x586658] */

loc_00443FEA: ;
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
 * sub_00443FF0
 * Original: 0x00443FF0 - 0x00444045 (85 bytes, 26 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00443FF0: ;
    eax = MEM32(0x5B0F68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x10000;
    if (CMP_NE(_fa, _fb)) goto loc_00444024; /* jne: not equal / not zero */

loc_0044400B: ;
    PUSH32(esp, 0x572FB8);
    PUSH32(esp, 8);
    MEM32(0x5B0F68) = 1;
    PUSH32(esp, 0x00444021u); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00444021: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00444024: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0044403F; /* je: equal / zero */

loc_0044402C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0044403B; /* je: equal / zero */

loc_0044402F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00444043; /* jne: not equal / not zero */

loc_00444032: ;
    MEM32(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0044403B: ;
    MEM8(esi + 0xD) = 0;

loc_0044403F: ;
    MEM8(esi + 0xC) = 0x40;

loc_00444043: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00444050
 * Original: 0x00444050 - 0x00444208 (440 bytes, 159 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444050(void)
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

loc_00444050: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(0x5B0F58);
    eax = MEM32(edi + 0x30);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esp + 0x12) = 0x40;
    MEM8(esp + 0x13) = 0;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = 0x10000;
    MEM32(esp + 0x1C) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00444196; /* jne: not equal / not zero */

loc_00444088: ;
    ecx = MEM32(esi + 0x28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004440A3; /* jle: less or equal (signed <=) */

loc_00444091: ;
    edx = esi + 0x90;

loc_00444097: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004440A3; /* je: equal / zero */

loc_0044409B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00444097; /* jl: less (signed <) */

loc_004440A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00444196; /* jge: greater or equal (signed >=) */

loc_004440AB: ;
    _fa = (uint32_t)(MEM32(esi + eax * 8 + 0x94)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 8 + 0x94), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444196; /* je: equal / zero */

loc_004440B8: ;
    eax = MEM32(esi + 0xC);
    ebx = MEM32(edi);
    edx = MEM32(edi + 4);
    ecx = MEM32(esi + 0x10);
    ebp = esi + 0xC;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x14);
    MEM32(esp + 0x20) = eax;
    _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(edi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x004440E6u); RECOMP_ABI_CALL(0x00443540u, sub_00443540); /* call 0x00443540 */

loc_004440E6: ;
    SET_LO8(ecx, MEM8(esi + 0x24));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00444103; /* je: equal / zero */

loc_004440F1: ;
    ecx = esi + 0x98;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004440FEu); RECOMP_ABI_CALL(0x00443110u, sub_00443110); /* call 0x00443110 */

loc_004440FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0044410C;

loc_00444103: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00444109u); RECOMP_ABI_CALL(0x00443010u, sub_00443010); /* call 0x00443010 */

loc_00444109: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0044410C: ;
    ebx = MEM32(esp + 0x34);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebx + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00444162; /* je: equal / zero */

loc_0044411C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0044413A; /* je: equal / zero */

loc_0044411F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00444178; /* jne: not equal / not zero */

loc_00444122: ;
    ecx = ebp;
    PUSH32(esp, 0x00444129u); RECOMP_ABI_CALL(0x00443E60u, sub_00443E60); /* call 0x00443E60 */

loc_00444129: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x5866B4)); /* fmul dword ptr [0x5866b4] */
    PUSH32(esp, 0x00444134u); RECOMP_ABI_CALL(0x0047F548u, sub_0047F548); /* call 0x0047F548 */

loc_00444134: ;
    MEM32(esp + 0x1C) = eax;
    goto loc_00444178;

loc_0044413A: ;
    edx = edi + 0x24;
    PUSH32(esp, edx);
    ebx = edi + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00444149u); RECOMP_ABI_CALL(0x00443310u, sub_00443310); /* call 0x00443310 */

loc_00444149: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    MEM8(esp + 0x2E) = LO8(eax);
    PUSH32(esp, 0x00444155u); RECOMP_ABI_CALL(0x004433C0u, sub_004433C0); /* call 0x004433C0 */

loc_00444155: ;
    ebx = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x13) = LO8(eax);
    goto loc_00444178;

loc_00444162: ;
    eax = edi + 0x24;
    PUSH32(esp, eax);
    ecx = edi + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00444171u); RECOMP_ABI_CALL(0x00443310u, sub_00443310); /* call 0x00443310 */

loc_00444171: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x12) = LO8(eax);

loc_00444178: ;
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x24), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0044419A; /* jne: not equal / not zero */

loc_0044417E: ;
    edx = edi + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0044418Du); RECOMP_ABI_CALL(0x00443250u, sub_00443250); /* call 0x00443250 */

loc_0044418D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    goto loc_0044419A;

loc_00444196: ;
    ebx = MEM32(esp + 0x34);

loc_0044419A: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004441A7u); RECOMP_ABI_CALL(0x00442940u, sub_00442940); /* call 0x00442940 */

loc_004441A7: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ebx) = eax;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFA00000u (32-bit) */
    MEM32(ebx + 4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_004441C6; /* jge: greater or equal (signed >=) */

loc_004441BF: ;
    MEM32(ebx + 4) = 0xFFA00000u;

loc_004441C6: ;
    eax = MEM32(ebx + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004441F9; /* je: equal / zero */

loc_004441CE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004441E3; /* je: equal / zero */

loc_004441D1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00444200; /* jne: not equal / not zero */

loc_004441D4: ;
    edx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0xC) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_004441E3: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    SET_LO8(ecx, MEM8(esp + 0x13));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ebx + 0xC) = LO8(eax);
    MEM8(ebx + 0xD) = LO8(ecx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_004441F9: ;
    SET_LO8(edx, MEM8(esp + 0x12));
    MEM8(ebx + 0xC) = LO8(edx);

loc_00444200: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00444210
 * Original: 0x00444210 - 0x004442F6 (230 bytes, 82 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00444210: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x24), 1 (8-bit) */
    ebx = 0xFFA00000u;
    if (TEST_Z(_fa, _fb)) goto loc_0044422C; /* je: equal / zero */

loc_00444224: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0044422C: ;
    eax = MEM32(0x5B0F64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004442EE; /* je: equal / zero */

loc_00444239: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x5B0F58);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004442ED; /* je: equal / zero */

loc_00444248: ;
    PUSH32(esp, edi);
    /* nop */

loc_00444250: ;
    ecx = MEM32(ebp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = 0xFFA00000u;
    if (CMP_NE(_fa, _fb)) goto loc_004442DB; /* jne: not equal / not zero */

loc_0044425C: ;
    edx = MEM32(esi + 0x28);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0044427C; /* jle: less or equal (signed <=) */

loc_00444265: ;
    edi = esi + 0x90;
    goto loc_00444270;

    /* nop */

loc_00444270: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044427C; /* je: equal / zero */

loc_00444274: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00444270; /* jl: less (signed <) */

loc_0044427C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004442DB; /* jge: greater or equal (signed >=) */

loc_00444280: ;
    edx = MEM32(esi + ecx * 8 + 0x94);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004442DB; /* je: equal / zero */

loc_0044428B: ;
    edi = MEM32(ebp);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = eax;
    _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x14);
    MEM32(esp + 0x14) = ecx;
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x004442B5u); RECOMP_ABI_CALL(0x00443540u, sub_00443540); /* call 0x00443540 */

loc_004442B5: ;
    SET_LO8(ecx, MEM8(esi + 0x24));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004442D2; /* je: equal / zero */

loc_004442C0: ;
    ecx = esi + 0x98;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004442CDu); RECOMP_ABI_CALL(0x00443110u, sub_00443110); /* call 0x00443110 */

loc_004442CD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004442DB;

loc_004442D2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004442D8u); RECOMP_ABI_CALL(0x00443010u, sub_00443010); /* call 0x00443010 */

loc_004442D8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004442DB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004442E1; /* jge: greater or equal (signed >=) */

loc_004442DF: ;
    ebx = eax;

loc_004442E1: ;
    ebp = MEM32(ebp + 0x38);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00444250; /* jne: not equal / not zero */

loc_004442EC: ;
    POP32(esp, edi);

loc_004442ED: ;
    POP32(esp, ebp);

loc_004442EE: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00444300
 * Original: 0x00444300 - 0x0044431C (28 bytes, 7 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444300: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x5B0F64) = eax;
    MEM32(0x5B0F58) = eax;
    MEM32(0x5B0F5C) = eax;
    MEM32(0x5B0F60) = eax;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00444320
 * Original: 0x00444320 - 0x004443DA (186 bytes, 63 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444320: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x00444329u); RECOMP_ABI_CALL(0x000D40E0u, sub_000D40E0); /* call 0x000D40E0 */

loc_00444329: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x38) = eax;
    ecx = MEM32(0x5B0F5C);
    MEM32(esi + 0x3C) = ecx;
    MEM32(esi + 0x40) = 0x5B0F58;
    ecx = MEM32(0x5B0F58);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0044435B; /* jne: not equal / not zero */

loc_00444353: ;
    MEM32(0x5B0F58) = esi;
    goto loc_00444364;

loc_0044435B: ;
    edx = MEM32(0x5B0F5C);
    MEM32(edx + 0x38) = esi;

loc_00444364: ;
    edx = MEM32(0x5B0F60);
    edi = MEM32(esp + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(0x5B0F5C) = esi;
    MEM32(0x5B0F60) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00444391; /* jne: not equal / not zero */

loc_0044437F: ;
    MEM32(0x5B0F64) = MEM32(0x5B0F64) + 1;
    _fa = (uint32_t)(MEM32(0x5B0F64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x30) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00444391: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0044439Au); RECOMP_ABI_CALL(0x000D4080u, sub_000D4080); /* call 0x000D4080 */

loc_0044439A: ;
    PUSH32(esp, 0xC);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004443A9u); RECOMP_ABI_CALL(0x000D4080u, sub_000D4080); /* call 0x000D4080 */

loc_004443A9: ;
    PUSH32(esp, 0xC);
    edx = edi + 0x18;
    PUSH32(esp, edx);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004443B8u); RECOMP_ABI_CALL(0x000D4080u, sub_000D4080); /* call 0x000D4080 */

loc_004443B8: ;
    PUSH32(esp, 0xC);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x24;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004443C7u); RECOMP_ABI_CALL(0x000D4080u, sub_000D4080); /* call 0x000D4080 */

loc_004443C7: ;
    eax = MEM32(0x5B0F64);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x5B0F64) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004443E0
 * Original: 0x004443E0 - 0x00444449 (105 bytes, 44 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004443E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004443E0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5B0F58);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444447; /* je: equal / zero */

loc_004443EB: ;
    eax = MEM32(esp + 8);
    /* nop */

loc_004443F0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004443FD; /* je: equal / zero */

loc_004443F4: ;
    esi = MEM32(esi + 0x38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004443F0; /* jne: not equal / not zero */

loc_004443FB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004443FD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444447; /* je: equal / zero */

loc_00444401: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esi + 0x30) = 0;
    PUSH32(esp, 0x00444416u); RECOMP_ABI_CALL(0x000D4080u, sub_000D4080); /* call 0x000D4080 */

loc_00444416: ;
    PUSH32(esp, 0xC);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00444425u); RECOMP_ABI_CALL(0x000D4080u, sub_000D4080); /* call 0x000D4080 */

loc_00444425: ;
    PUSH32(esp, 0xC);
    edx = edi + 0x18;
    PUSH32(esp, edx);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00444434u); RECOMP_ABI_CALL(0x000D4080u, sub_000D4080); /* call 0x000D4080 */

loc_00444434: ;
    PUSH32(esp, 0xC);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00444443u); RECOMP_ABI_CALL(0x000D4080u, sub_000D4080); /* call 0x000D4080 */

loc_00444443: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_00444447: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00444450
 * Original: 0x00444450 - 0x004444B8 (104 bytes, 40 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444450: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004444B7; /* je: equal / zero */

loc_0044445A: ;
    ecx = MEM32(eax + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00444468; /* je: equal / zero */

loc_00444462: ;
    esi = MEM32(eax + 0x3C);
    MEM32(ecx + 0x3C) = esi;

loc_00444468: ;
    ecx = MEM32(eax + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444475; /* je: equal / zero */

loc_0044446F: ;
    esi = MEM32(eax + 0x38);
    MEM32(ecx + 0x38) = esi;

loc_00444475: ;
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444499; /* je: equal / zero */

loc_0044447C: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0044448B; /* jne: not equal / not zero */

loc_00444486: ;
    esi = MEM32(eax + 0x38);
    MEM32(ecx) = esi;

loc_0044448B: ;
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00444499; /* jne: not equal / not zero */

loc_00444493: ;
    esi = MEM32(eax + 0x3C);
    MEM32(ecx + 4) = esi;

loc_00444499: ;
    PUSH32(esp, eax);
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x40) = edx;
    PUSH32(esp, 0x004444A8u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_004444A8: ;
    eax = MEM32(0x5B0F64);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x5B0F64) = eax;
    POP32(esp, esi);

loc_004444B7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004444C0
 * Original: 0x004444C0 - 0x00444546 (134 bytes, 48 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004444C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004444C0: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 8);
    edx = 1;
    if ((_fa == 0)) goto loc_004444E6; /* je: equal / zero */

loc_004444D2: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004444E1; /* je: equal / zero */

loc_004444D5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004444ED; /* jne: not equal / not zero */

loc_004444D8: ;
    MEM32(eax + 8) = 2;
    goto loc_004444ED;

loc_004444E1: ;
    MEM32(eax + 8) = edx;
    goto loc_004444ED;

loc_004444E6: ;
    MEM32(eax + 8) = 0;

loc_004444ED: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(ecx + 0x24)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x24), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00444528; /* je: equal / zero */

loc_004444F6: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(eax + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00444521; /* je: equal / zero */

loc_00444508: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00444516; /* je: equal / zero */

loc_0044450B: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00444545; /* jne: not equal / not zero */

loc_0044450E: ;
    MEM32(eax + 0xC) = 0;
    esp += 4; return; /* ret */

loc_00444516: ;
    SET_LO8(ecx, MEM8(ecx + 8));
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = 0;
    esp += 4; return; /* ret */

loc_00444521: ;
    SET_LO8(edx, MEM8(ecx + 8));
    MEM8(eax + 0xC) = LO8(edx);
    esp += 4; return; /* ret */

loc_00444528: ;
    edx = MEM32(0x5B0F64);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0044453D; /* jne: not equal / not zero */

loc_00444534: ;
    PUSH32(esp, 0x00444539u); RECOMP_ABI_CALL(0x00443FF0u, sub_00443FF0); /* call 0x00443FF0 */

loc_00444539: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0044453D: ;
    PUSH32(esp, 0x00444542u); RECOMP_ABI_CALL(0x00444050u, sub_00444050); /* call 0x00444050 */

loc_00444542: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00444545: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0044454C
 * Original: 0x0044454C - 0x00444550 (4 bytes, 4 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044454C(void)
{

loc_0044454C: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00444550
 * Original: 0x00444550 - 0x004445B8 (104 bytes, 43 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00444550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444550: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00444577; /* je: equal / zero */

loc_00444561: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00444577; /* jne: not equal / not zero */

loc_00444567: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0044456Du); RECOMP_ABI_CALL(0x00448440u, sub_00448440); /* call 0x00448440 */

loc_0044456D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00444577; /* jbe: below or equal (unsigned <=) */

loc_00444575: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00444577: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    eax = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_00444588; /* jne: not equal / not zero */

loc_00444580: ;
    _fa = (uint32_t)(MEM8(eax + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x24), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00444588; /* je: equal / zero */

loc_00444586: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00444588: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00444594u); RECOMP_ABI_CALL(0x004444C0u, sub_004444C0); /* call 0x004444C0 */

loc_00444594: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004445B4; /* je: equal / zero */

loc_0044459B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004445A1u); RECOMP_ABI_CALL(0x00448440u, sub_00448440); /* call 0x00448440 */

loc_004445A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004445B4; /* jbe: below or equal (unsigned <=) */

loc_004445A9: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004445B4; /* jne: not equal / not zero */

loc_004445B0: ;
    MEM8(edi + 0xC) = 0x40;

loc_004445B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004445C0
 * Original: 0x004445C0 - 0x0044460B (75 bytes, 24 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004445C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004445C0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x572FEC;
    MEM32(eax + 0x4C) = 1;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00444610
 * Original: 0x00444610 - 0x004446C6 (182 bytes, 62 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444610(void)
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

loc_00444610: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004446A8; /* je: equal / zero */

loc_00444623: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004446A8; /* jne: not equal / not zero */

loc_0044462A: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00444636u); RECOMP_ABI_CALL(0x00441E20u, sub_00441E20); /* call 0x00441E20 */

loc_00444636: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004446A8; /* jne: not equal / not zero */

loc_0044463D: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004446A8; /* jne: not equal / not zero */

loc_00444646: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444654; /* je: equal / zero */

loc_0044464F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004446A8; /* jne: not equal / not zero */

loc_00444654: ;
    edx = esi + 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(edx + 8) = eax;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x44) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00444686; /* jge: greater or equal (signed >=) */

loc_00444680: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x586644)); /* fadd dword ptr [0x586644] */

loc_00444686: ;
    edx = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x5866A8)); /* fmul dword ptr [0x5866a8] */
    eax = MEM32(esp + 0x24);
    MEM32(esi + 0x18) = edx;
    edx = MEM32(esi);
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    MEM32(esi + 0x50) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004446A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004446A1u); } /* indirect call */
    }

loc_004446A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004446B5; /* jne: not equal / not zero */

loc_004446A8: ;
    POP32(esp, edi);
    eax = 0xFFFF;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_004446B5: ;
    POP32(esp, edi);
    MEM32(esi + 0x4C) = 3;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004446D0
 * Original: 0x004446D0 - 0x00444958 (648 bytes, 185 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004446D0(void)
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

loc_004446D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00444951; /* jne: not equal / not zero */

loc_004446E0: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x004446F2u); RECOMP_ABI_CALL(0x00441240u, sub_00441240); /* call 0x00441240 */

loc_004446F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00444951; /* jl: less (signed <) */

loc_004446FA: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 0x10);
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = eax;
    if ((_fas >= 0)) goto loc_00444713; /* jns: not sign (positive) */

loc_0044470C: ;
    _fb = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;

loc_00444713: ;
    fp_push(MEMF(0x5865C4)); /* fld float */
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x48)); /* fdiv dword ptr [esi + 0x48] */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0044494F; /* je: equal / zero */

loc_00444731: ;
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = eax;
    if ((_fas >= 0)) goto loc_00444742; /* jns: not sign (positive) */

loc_0044473B: ;
    _fb = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;

loc_00444742: ;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 4)); /* fimul dword ptr [esp + 4] */
    MEMF(esi + 0x2C) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x586638)); /* fld float */
    fp_push(MEMF(0x5B0F6C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00444772; /* jnp: not parity */

loc_0044475E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586624)); /* fmul dword ptr [0x586624] */
    fp_push(MEMF(0x5B0F6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586628)); /* fmul dword ptr [0x586628] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */

loc_00444772: ;
    MEMF(0x5B0F6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x5B0F6C)); /* fsub dword ptr [0x5b0f6c] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x586638)); /* fld float */
    fp_push(MEMF(0x5B0F70)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_004447AE; /* jnp: not parity */

loc_00444798: ;
    fp_push(MEMF(0x5B0F70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586628)); /* fmul dword ptr [0x586628] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586624)); /* fmul dword ptr [0x586624] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */

loc_004447AE: ;
    MEMF(0x5B0F70) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x24) = edx;
    fp_push(MEMF(0x5B0F70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586698)); /* fmul dword ptr [0x586698] */
    fp_push(MEMF(0x5B0F6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586684)); /* fmul dword ptr [0x586684] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x5B0F74)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004447E8; /* jp: parity */

loc_004447E0: ;
    MEMF(0x5B0F74) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_004447EA;

loc_004447E8: ;
    fp_pop(); /* fstp st(0) */

loc_004447EA: ;
    fp_push(MEMF(0x5B0F74)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00444816; /* jp: parity */

loc_004447FA: ;
    eax = MEM32(0x591984);
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    MEM32(0x5B0F74) = edx;
    PUSH32(esp, 0x0044480Eu); RECOMP_ABI_CALL(0x00442720u, sub_00442720); /* call 0x00442720 */

loc_0044480E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x5B0F78) = eax;

loc_00444816: ;
    fp_push(MEMF(0x5B0F74)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x587094)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x587094] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00444833; /* jp: parity */

loc_00444829: ;
    MEM32(0x5B0F74) = 0x42200000;

loc_00444833: ;
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    fp_push(MEMF(0x5B0F74)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00444851; /* jne: not equal / not zero */

loc_00444849: ;
    MEMF(0x5B0F74) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00444853;

loc_00444851: ;
    fp_pop(); /* fstp st(0) */

loc_00444853: ;
    ecx = MEM32(0x591984);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0044485Fu); RECOMP_ABI_CALL(0x00442720u, sub_00442720); /* call 0x00442720 */

loc_0044485F: ;
    _fb = (uint32_t)(MEM32(0x5B0F78)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x5B0F78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004448B6; /* jle: less or equal (signed <=) */

loc_0044486F: ;
    fp_push(MEMF(0x5B0F70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586698)); /* fmul dword ptr [0x586698] */
    fp_push(MEMF(0x5B0F6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x586684)); /* fmul dword ptr [0x586684] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x5B0F74)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004448A0; /* jne: not equal / not zero */

loc_00444898: ;
    MEMF(0x5B0F74) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_004448A2;

loc_004448A0: ;
    fp_pop(); /* fstp st(0) */

loc_004448A2: ;
    edx = MEM32(0x591984);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004448AEu); RECOMP_ABI_CALL(0x00442720u, sub_00442720); /* call 0x00442720 */

loc_004448AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x5B0F78) = eax;

loc_004448B6: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 8) = eax;
    if ((_fas >= 0)) goto loc_004448CC; /* jns: not sign (positive) */

loc_004448C5: ;
    _fb = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = eax;

loc_004448CC: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x48)); /* fdiv dword ptr [esi + 0x48] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x5B0F74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x586638)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x586638] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00444951; /* jnp: not parity */

loc_004448F2: ;
    fp_push(MEMF(0x5865C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x3C)); /* fdiv dword ptr [esi + 0x3c] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x00444906u); RECOMP_ABI_CALL(0x0047F548u, sub_0047F548); /* call 0x0047F548 */

loc_00444906: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00444919; /* jne: not equal / not zero */

loc_00444910: ;
    ecx = 1;
    MEM32(esp + 4) = ecx;

loc_00444919: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x34) - fp_top()); /* fsubr dword ptr [esi + 0x34] */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3C)); /* fmul dword ptr [esi + 0x3c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00444944; /* jne: not equal / not zero */

loc_00444934: ;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x0044493Bu); RECOMP_ABI_CALL(0x0047F548u, sub_0047F548); /* call 0x0047F548 */

loc_0044493B: ;
    fp_pop(); /* fstp st(0) */
    ecx = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00444944: ;
    fp_pop(); /* fstp st(0) */
    eax = ecx;
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0044494F: ;
    fp_pop(); /* fstp st(0) */

loc_00444951: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00444960
 * Original: 0x00444960 - 0x0044498B (43 bytes, 16 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444960: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x572FEC;
    if (CMP_EQ(_fa, _fb)) goto loc_00444988; /* je: equal / zero */

loc_00444971: ;
    ecx = edi;
    PUSH32(esp, 0x00444978u); RECOMP_ABI_CALL(0x00441B10u, sub_00441B10); /* call 0x00441B10 */

loc_00444978: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0044497Eu); RECOMP_ABI_CALL(0x00448EA0u, sub_00448EA0); /* call 0x00448EA0 */

loc_0044497E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_00444988: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00444990
 * Original: 0x00444990 - 0x00444AFE (366 bytes, 138 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00444990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444990: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00444AF4; /* je: equal / zero */

loc_004449B0: ;
    eax = MEM32(esi + 0x4C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00444AF4; /* ja: above (unsigned >) */

loc_004449BD: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x444B00); /* switch: 7 entries, 6 targets */
    if (_jt == 0x004449C4u) goto loc_004449C4;
    if (_jt == 0x004449CBu) goto loc_004449CB;
    if (_jt == 0x00444A5Eu) goto loc_00444A5E;
    if (_jt == 0x00444A71u) goto loc_00444A71;
    if (_jt == 0x00444A8Cu) goto loc_00444A8C;
    if (_jt == 0x00444AC8u) goto loc_00444AC8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004449C4: ;
    ebp = 1;
    goto loc_004449D4;

loc_004449CB: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004449D2u); RECOMP_ABI_CALL(0x004446D0u, sub_004446D0); /* call 0x004446D0 */

loc_004449D2: ;
    ebp = eax;

loc_004449D4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00444AC8; /* jbe: below or equal (unsigned <=) */

loc_004449DC: ;
    /* nop */

loc_004449E0: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00444AF4; /* je: equal / zero */

loc_004449F3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004449FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004449F7u); } /* indirect call */
    }

loc_004449FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AF4; /* je: equal / zero */

loc_00444A02: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00444A0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A0Bu); } /* indirect call */
    }

loc_00444A0E: ;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00444A2F; /* jne: not equal / not zero */

loc_00444A14: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x30) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00444AD5; /* jae: above or equal (unsigned >=) */

loc_00444A20: ;
    ecx = MEM32(esi + 0x38);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x40) = ecx;
    eax = 2;
    goto loc_00444A42;

loc_00444A2F: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00444A42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A3Fu); } /* indirect call */
    }

loc_00444A42: ;
    edx = MEM32(esi + 0x44);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x14));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00444A8C; /* ja: above (unsigned >) */

loc_00444A50: ;
    ecx = ZX8(MEM8(eax + 0x444B1C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x444B10); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00444A5Eu) goto loc_00444A5E;
    if (_jt == 0x00444A71u) goto loc_00444A71;
    if (_jt == 0x00444A8Cu) goto loc_00444A8C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00444A5E: ;
    edi = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A7E; /* je: equal / zero */

loc_00444A6B: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00444A7E;

loc_00444A71: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444A8C; /* je: equal / zero */

loc_00444A75: ;
    ecx = MEM32(esi + 0x38);
    edi = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00444A7E: ;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_00444A8C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00444A93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444A90u); } /* indirect call */
    }

loc_00444A93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00444AF4; /* jl: less (signed <) */

loc_00444A97: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(esi + 0x38);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x30));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x30)); }
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), 3 (32-bit) */
    MEM32(esi + 0x20) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00444ABF; /* jne: not equal / not zero */

loc_00444AAD: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00444AB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444AB1u); } /* indirect call */
    }

loc_00444AB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444AF4; /* je: equal / zero */

loc_00444AB8: ;
    MEM32(esi + 0x4C) = 4;

loc_00444ABF: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004449E0; /* jb: below (unsigned <) */

loc_00444AC8: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00444AD5: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0x4C) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00444AE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00444AE0u); } /* indirect call */
    }

loc_00444AE3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    eax = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00444AF4: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00444AFE
 * Original: 0x00444AFE - 0x00444B30 (50 bytes, 29 insns)
 * Folder: sound (between: 0x00443010 and 0x00444B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444AFE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444AFE: ;
    edi = edi;
    RECOMP_UNIMPL("enter 0x444a, 0", 0x00444B00u); /* TODO: enter 0x444a, 0 */
    RECOMP_UNIMPL("les ecx, ptr [ecx + 0x44]", 0x00444B04u); /* TODO: les ecx, ptr [ecx + 0x44] */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + LO8(eax));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + 0x4A) = MEM8(esi + 0x4A) + LO8(ebx);
    _fa = (uint32_t)(MEM8(esi + 0x4A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + 0x4A) = MEM8(ecx + 0x4A) + HI8(edx);
    _fa = (uint32_t)(MEM8(ecx + 0x4A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx + ecx * 2 + 0x44) = MEM8(edx + ecx * 2 + 0x44) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + ecx * 2 + 0x44)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00444B30
 * Original: 0x00444B30 - 0x00444B79 (73 bytes, 15 insns)
 * Folder: sound (match: xbox-retail 0x000ACD00, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444B30(void)
{

loc_00444B30: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00444B3Bu); RECOMP_ABI_CALL(0x003D6938u, sub_003D6938); /* call 0x003D6938 */

loc_00444B3B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    MEM32(0x5B0F80) = eax;
    PUSH32(esp, 0x00444B4Bu); RECOMP_ABI_CALL(0x003D6938u, sub_003D6938); /* call 0x003D6938 */

loc_00444B4B: ;
    MEM32(0x5B1018) = eax;
    MEM32(0x5B0F84) = 0;
    MEM32(0x5B1124) = 0;
    MEM32(0x5B112C) = 1;
    MEM32(0x5B0F88) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00444B80
 * Original: 0x00444B80 - 0x00444BB5 (53 bytes, 18 insns)
 * Folder: sound (between: 0x00444B30 and 0x00444FD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444B80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444B80: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5B0F80);
    PUSH32(esp, edi);
    edi = MEM32(0x5B1018);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(0x5B1018) = eax;
    MEM32(0x5B0F80) = eax;
    PUSH32(esp, 0x00444BA0u); RECOMP_ABI_CALL(0x003D6990u, sub_003D6990); /* call 0x003D6990 */

loc_00444BA0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00444BA6u); RECOMP_ABI_CALL(0x003D6990u, sub_003D6990); /* call 0x003D6990 */

loc_00444BA6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00444BACu); RECOMP_ABI_CALL(0x003D1793u, sub_003D1793); /* call 0x003D1793 */

loc_00444BAC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00444BB2u); RECOMP_ABI_CALL(0x003D1793u, sub_003D1793); /* call 0x003D1793 */

loc_00444BB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00444BC0
 * Original: 0x00444BC0 - 0x00444BEC (44 bytes, 11 insns)
 * Folder: sound (between: 0x00444B30 and 0x00444FD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444BC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B0F90);
    PUSH32(esp, 0x00444BD4u); RECOMP_ABI_CALL(0x0047E7E0u, sub_0047E7E0); /* call 0x0047E7E0 */

loc_00444BD4: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x5B1010) = ecx;
    PUSH32(esp, 0x00444BE6u); RECOMP_ABI_CALL(0x003D1AD8u, sub_003D1AD8); /* call 0x003D1AD8 */

loc_00444BE6: ;
    MEM32(0x5B1014) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00444BF0
 * Original: 0x00444BF0 - 0x00444C97 (167 bytes, 45 insns)
 * Folder: sound (between: 0x00444B30 and 0x00444FD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444BF0: ;
    eax = MEM32(0x5B112C);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00444C15; /* jne: not equal / not zero */

loc_00444BFF: ;
    PUSH32(esp, 0x57FF62);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00444C0Bu); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00444C0B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00444C15: ;
    eax = MEM32(0x5B0F80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444C81; /* je: equal / zero */

loc_00444C1E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00444C26u); RECOMP_ABI_CALL(0x003D6AC6u, sub_003D6AC6); /* call 0x003D6AC6 */

loc_00444C26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x5B0F88) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00444C45; /* jne: not equal / not zero */

loc_00444C34: ;
    MEM32(0x5B0F84) = 1;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00444C45: ;
    PUSH32(esp, 0x00444C4Au); RECOMP_ABI_CALL(0x003D0DF1u, sub_003D0DF1); /* call 0x003D0DF1 */

loc_00444C4A: ;
    eax = MEM32(0x5B1010);
    ecx = MEM32(0x5B1014);
    PUSH32(esp, 0x5B0F90);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x573044);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00444C6Bu); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00444C6B: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00444C77u); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00444C77: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00444C81: ;
    PUSH32(esp, 0x573004);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x00444C8Du); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00444C8D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00444CA0
 * Original: 0x00444CA0 - 0x00444D59 (185 bytes, 52 insns)
 * Folder: sound (between: 0x00444B30 and 0x00444FD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444CA0: ;
    eax = MEM32(0x5B112C);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00444CC5; /* jne: not equal / not zero */

loc_00444CAF: ;
    PUSH32(esp, 0x57FF62);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00444CBBu); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00444CBB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00444CC5: ;
    eax = MEM32(0x5B1018);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D43; /* je: equal / zero */

loc_00444CCE: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = esp + 8;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x114);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x00444CEDu); RECOMP_ABI_CALL(0x003D6AD8u, sub_003D6AD8); /* call 0x003D6AD8 */

loc_00444CED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00444D02; /* jne: not equal / not zero */

loc_00444CF1: ;
    MEM32(0x5B1124) = 1;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00444D02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444D52; /* je: equal / zero */

loc_00444D07: ;
    PUSH32(esp, 0x00444D0Cu); RECOMP_ABI_CALL(0x003D0DF1u, sub_003D0DF1); /* call 0x003D0DF1 */

loc_00444D0C: ;
    edx = MEM32(0x5B1120);
    eax = MEM32(0x5B1128);
    PUSH32(esp, 0x5B1020);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x573044);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00444D2Du); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00444D2D: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00444D39u); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00444D39: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00444D43: ;
    PUSH32(esp, 0x573004);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x00444D4Fu); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00444D4F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00444D52: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00444D60
 * Original: 0x00444D60 - 0x00444E19 (185 bytes, 52 insns)
 * Folder: sound (between: 0x00444B30 and 0x00444FD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444D60: ;
    eax = MEM32(0x5B112C);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00444D85; /* jne: not equal / not zero */

loc_00444D6F: ;
    PUSH32(esp, 0x57FF62);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00444D7Bu); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00444D7B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00444D85: ;
    eax = MEM32(0x5B0F80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E03; /* je: equal / zero */

loc_00444D8E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = esp + 8;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x114);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x00444DADu); RECOMP_ABI_CALL(0x003D6AD8u, sub_003D6AD8); /* call 0x003D6AD8 */

loc_00444DAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00444DC2; /* jne: not equal / not zero */

loc_00444DB1: ;
    MEM32(0x5B1124) = 1;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00444DC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444E12; /* je: equal / zero */

loc_00444DC7: ;
    PUSH32(esp, 0x00444DCCu); RECOMP_ABI_CALL(0x003D0DF1u, sub_003D0DF1); /* call 0x003D0DF1 */

loc_00444DCC: ;
    edx = MEM32(0x5B1120);
    eax = MEM32(0x5B1128);
    PUSH32(esp, 0x5B1020);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x573044);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00444DEDu); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00444DED: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00444DF9u); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00444DF9: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00444E03: ;
    PUSH32(esp, 0x573004);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x00444E0Fu); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00444E0F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00444E12: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00444E20
 * Original: 0x00444E20 - 0x00444E4F (47 bytes, 13 insns)
 * Folder: sound (between: 0x00444B30 and 0x00444FD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444E20: ;
    eax = MEM32(0x5B112C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00444E39; /* jne: not equal / not zero */

loc_00444E29: ;
    PUSH32(esp, 0x57FF62);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00444E35u); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00444E35: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00444E39: ;
    eax = MEM32(0x5B0F80);
    PUSH32(esp, eax);
    MEM32(0x5B0F84) = 0;
    PUSH32(esp, 0x00444E4Eu); RECOMP_ABI_CALL(0x003D6990u, sub_003D6990); /* call 0x003D6990 */

loc_00444E4E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00444E50
 * Original: 0x00444E50 - 0x00444EF4 (164 bytes, 46 insns)
 * Folder: sound (between: 0x00444B30 and 0x00444FD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444E50: ;
    eax = MEM32(0x5B112C);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00444E6E; /* jne: not equal / not zero */

loc_00444E5F: ;
    PUSH32(esp, 0x57FF62);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00444E6Bu); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00444E6B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00444E6E: ;
    eax = MEM32(0x5B1018);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00444EDE; /* je: equal / zero */

loc_00444E77: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00444E7Fu); RECOMP_ABI_CALL(0x003D6AC6u, sub_003D6AC6); /* call 0x003D6AC6 */

loc_00444E7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00444E94; /* jne: not equal / not zero */

loc_00444E83: ;
    MEM32(0x5B1124) = 1;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00444E94: ;
    PUSH32(esp, 0x00444E99u); RECOMP_ABI_CALL(0x003D0DF1u, sub_003D0DF1); /* call 0x003D0DF1 */

loc_00444E99: ;
    eax = MEM32(0x5B1120);
    ecx = MEM32(0x5B1128);
    PUSH32(esp, 0x5B1020);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x573044);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00444EBAu); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00444EBA: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00444EC6u); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00444EC6: ;
    ecx = MEM32(0x5B1018);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00444ED7u); RECOMP_ABI_CALL(0x003D6AC6u, sub_003D6AC6); /* call 0x003D6AC6 */

loc_00444ED7: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00444EDE: ;
    PUSH32(esp, 0x57306C);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x00444EEAu); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00444EEA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00444F00
 * Original: 0x00444F00 - 0x00444F16 (22 bytes, 5 insns)
 * Folder: sound (between: 0x00444B30 and 0x00444FD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444F00(void)
{

loc_00444F00: ;
    eax = MEM32(0x5B1018);
    PUSH32(esp, eax);
    MEM32(0x5B1124) = 0;
    PUSH32(esp, 0x00444F15u); RECOMP_ABI_CALL(0x003D6990u, sub_003D6990); /* call 0x003D6990 */

loc_00444F15: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00444F20
 * Original: 0x00444F20 - 0x00444F42 (34 bytes, 9 insns)
 * Folder: sound (between: 0x00444B30 and 0x00444FD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444F20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5B1020);
    PUSH32(esp, 0x00444F34u); RECOMP_ABI_CALL(0x0047E7E0u, sub_0047E7E0); /* call 0x0047E7E0 */

loc_00444F34: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x5B1120) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00444F50
 * Original: 0x00444F50 - 0x00444F56 (6 bytes, 2 insns)
 * Folder: sound (between: 0x00444B30 and 0x00444FD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444F50(void)
{

loc_00444F50: ;
    eax = 0x5B11D0;
    esp += 4; return; /* ret */

}

/**
 * sub_00444F60
 * Original: 0x00444F60 - 0x00444FB5 (85 bytes, 17 insns)
 * Folder: sound (between: 0x00444B30 and 0x00444FD0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00444F60: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00444F9D; /* je: equal / zero */

loc_00444F67: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00444F81; /* je: equal / zero */

loc_00444F6C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x94) = 1;
    MEM32(ecx + 0x98) = eax;
    esp += 8; return; /* ret 4 */

loc_00444F81: ;
    MEM32(ecx + 0x98) = 2;
    MEM32(ecx + 0x94) = 3;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00444F9D: ;
    eax = 1;
    MEM32(ecx + 0x94) = eax;
    MEM32(ecx + 0x98) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00444FC0
 * Original: 0x00444FC0 - 0x00444FC7 (7 bytes, 2 insns)
 * Folder: sound (between: 0x00444B30 and 0x00444FD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444FC0(void)
{

loc_00444FC0: ;
    eax = MEM32(ecx + 0x98);
    esp += 4; return; /* ret */

}

/**
 * sub_00444FD0
 * Original: 0x00444FD0 - 0x00445038 (104 bytes, 31 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00444FD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00444FD8u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00444FD8: ;
    PUSH32(esp, 0x23D);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00444FE7u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00444FE7: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00444FF6; /* jne: not equal / not zero */

loc_00444FF0: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00444F00(); return; /* tail jmp 0x00444F00 */

loc_00444FF6: ;
    ecx = esi + 4;
    PUSH32(esp, 0x00444FFEu); RECOMP_ABI_CALL(0x0044B750u, sub_0044B750); /* call 0x0044B750 */

loc_00444FFE: ;
    ecx = MEM32(0x5B11C0);
    edx = MEM32(esi + 0x4C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0044500Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044500Au); } /* indirect call */
    }

loc_0044500D: ;
    eax = esi + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00445016u); RECOMP_ABI_CALL(0x00455D40u, sub_00455D40); /* call 0x00455D40 */

loc_00445016: ;
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0044501Fu); RECOMP_ABI_CALL(0x00455D40u, sub_00455D40); /* call 0x00455D40 */

loc_0044501F: ;
    PUSH32(esp, 0x5B11C0);
    PUSH32(esp, 0x00445029u); RECOMP_ABI_CALL(0x00436390u, sub_00436390); /* call 0x00436390 */

loc_00445029: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00444F00(); return; /* tail jmp 0x00444F00 */

}

/**
 * sub_00445040
 * Original: 0x00445040 - 0x0044507E (62 bytes, 18 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445040: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00445048u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445048: ;
    PUSH32(esp, 0x24E);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445057u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445057: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00445076; /* je: equal / zero */

loc_00445061: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445076; /* je: equal / zero */

loc_00445069: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;

loc_00445076: ;
    PUSH32(esp, 0x0044507Bu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_0044507B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00445080
 * Original: 0x00445080 - 0x004450CD (77 bytes, 24 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445080: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00445088u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445088: ;
    PUSH32(esp, 0x25D);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445097u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445097: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004450C4; /* je: equal / zero */

loc_004450A0: ;
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004450C4; /* je: equal / zero */

loc_004450A8: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004450BD; /* je: equal / zero */

loc_004450AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004450B4u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_004450B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_004450BD: ;
    MEM32(esi + 4) = 0;

loc_004450C4: ;
    PUSH32(esp, 0x004450C9u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004450C9: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004450D0
 * Original: 0x004450D0 - 0x00445120 (80 bytes, 37 insns)
 * Folder: sound (between: 0x00445080 and 0x00445500)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004450D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004450D0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445101; /* je: equal / zero */

loc_004450D8: ;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00445101; /* ja: above (unsigned >) */

loc_004450E1: ;
    eax = ZX8(MEM8(eax + 0x445110));
    { uint32_t _jt = MEM32(eax * 4 + 0x445104); /* switch: 3 entries, 3 targets */
    if (_jt == 0x004450EFu) goto loc_004450EF;
    if (_jt == 0x004450FBu) goto loc_004450FB;
    if (_jt == 0x00445101u) goto loc_00445101;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004450EF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00448DE0(); return; /* tail jmp 0x00448DE0 */

loc_004450FB: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00445101: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00445120
 * Original: 0x00445120 - 0x00445270 (336 bytes, 146 insns)
 * Folder: sound (between: 0x00445080 and 0x00445500)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00445120: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0044512D; /* jne: not equal / not zero */

loc_00445129: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0044512D: ;
    eax = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_0044526A; /* ja: above (unsigned >) */

loc_0044513C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x445270); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00445143u) goto loc_00445143;
    if (_jt == 0x00445153u) goto loc_00445153;
    if (_jt == 0x0044515Au) goto loc_0044515A;
    if (_jt == 0x00445197u) goto loc_00445197;
    if (_jt == 0x004451CEu) goto loc_004451CE;
    if (_jt == 0x00445203u) goto loc_00445203;
    if (_jt == 0x00445233u) goto loc_00445233;
    if (_jt == 0x0044525Au) goto loc_0044525A;
    if (_jt == 0x00445263u) goto loc_00445263;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00445143: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0044514Cu); RECOMP_ABI_CALL(0x00434610u, sub_00434610); /* call 0x00434610 */

loc_0044514C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00445153: ;
    eax = MEM32(esi + 0x18);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0044515A: ;
    eax = MEM32(esi + 0x30);
    ebx = MEM32(esi + 0x2C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0044525A; /* jle: less or equal (signed <=) */

loc_0044516A: ;
    /* nop */

loc_00445170: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00445178u); RECOMP_ABI_CALL(0x00445120u, sub_00445120); /* call 0x00445120 */

loc_00445178: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044526A; /* je: equal / zero */

loc_00445183: ;
    eax = MEM32(esi + 0x30);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00445170; /* jl: less (signed <) */

loc_0044518E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00445197: ;
    eax = MEM32(esi + 0x34);
    ebx = MEM32(esi + 0x30);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0044525A; /* jle: less or equal (signed <=) */

loc_004451A7: ;
    ecx = MEM32(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004451AFu); RECOMP_ABI_CALL(0x00445120u, sub_00445120); /* call 0x00445120 */

loc_004451AF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044526A; /* je: equal / zero */

loc_004451BA: ;
    eax = MEM32(esi + 0x34);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004451A7; /* jl: less (signed <) */

loc_004451C5: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004451CE: ;
    eax = MEM32(esi + 0x48);
    ebx = MEM32(esi + 0x44);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0044525A; /* jle: less or equal (signed <=) */

loc_004451DE: ;
    edi = edi;

loc_004451E0: ;
    edx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004451E8u); RECOMP_ABI_CALL(0x00445120u, sub_00445120); /* call 0x00445120 */

loc_004451E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044526A; /* je: equal / zero */

loc_004451EF: ;
    eax = MEM32(esi + 0x48);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004451E0; /* jl: less (signed <) */

loc_004451FA: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00445203: ;
    eax = MEM32(esi + 0x14);
    ebx = MEM32(esi + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0044525A; /* jle: less or equal (signed <=) */

loc_0044520F: ;
    /* nop */

loc_00445210: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00445218u); RECOMP_ABI_CALL(0x00445120u, sub_00445120); /* call 0x00445120 */

loc_00445218: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044526A; /* je: equal / zero */

loc_0044521F: ;
    eax = MEM32(esi + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00445210; /* jl: less (signed <) */

loc_0044522A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00445233: ;
    eax = MEM32(esi + 0x14);
    ebx = MEM32(esi + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0044525A; /* jle: less or equal (signed <=) */

loc_0044523F: ;
    /* nop */

loc_00445240: ;
    ecx = MEM32(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00445248u); RECOMP_ABI_CALL(0x00445120u, sub_00445120); /* call 0x00445120 */

loc_00445248: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044526A; /* je: equal / zero */

loc_0044524F: ;
    eax = MEM32(esi + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00445240; /* jl: less (signed <) */

loc_0044525A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00445263: ;
    eax = MEM32(esi + 0x1C);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0044526A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004452A0
 * Original: 0x004452A0 - 0x0044539D (253 bytes, 105 insns)
 * Folder: sound (between: 0x00445080 and 0x00445500)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004452A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004452A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445382; /* je: equal / zero */

loc_004452B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004452BFu); RECOMP_ABI_CALL(0x000D40A0u, sub_000D40A0); /* call 0x000D40A0 */

loc_004452BF: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00445381; /* ja: above (unsigned >) */

loc_004452CF: ;
    PUSH32(esp, ebx);
    { uint32_t _jt = MEM32(eax * 4 + 0x4453A0); /* switch: 9 entries, 5 targets */
    if (_jt == 0x004452D7u) goto loc_004452D7;
    if (_jt == 0x004452EBu) goto loc_004452EB;
    if (_jt == 0x00445330u) goto loc_00445330;
    if (_jt == 0x00445380u) goto loc_00445380;
    if (_jt == 0x00445387u) goto loc_00445387;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004452D7: ;
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x004452E1u); RECOMP_ABI_CALL(0x004345A0u, sub_004345A0); /* call 0x004345A0 */

loc_004452E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_004452EB: ;
    ecx = MEM32(edi + 0x64);
    eax = MEM32(edi + 0x60);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00445380; /* jle: less or equal (signed <=) */

loc_004452FB: ;
    goto loc_00445300;

    /* nop */

loc_00445300: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 8) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0044530A; /* jbe: below or equal (unsigned <=) */

loc_00445307: ;
    MEM32(esi + 8) = ecx;

loc_0044530A: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00445315; /* jbe: below or equal (unsigned <=) */

loc_00445312: ;
    MEM32(esi + 4) = ecx;

loc_00445315: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0044531E; /* jbe: below or equal (unsigned <=) */

loc_0044531C: ;
    MEM32(esi) = ecx;

loc_0044531E: ;
    ecx = MEM32(edi + 0x64);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00445300; /* jl: less (signed <) */

loc_00445329: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00445330: ;
    eax = MEM32(edi + 0x48);
    ebx = MEM32(edi + 0x44);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0044537F; /* jle: less or equal (signed <=) */

loc_0044533D: ;
    /* nop */

loc_00445340: ;
    ecx = MEM32(ebx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0044534Du); RECOMP_ABI_CALL(0x004452A0u, sub_004452A0); /* call 0x004452A0 */

loc_0044534D: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0044535E; /* jbe: below or equal (unsigned <=) */

loc_0044535B: ;
    MEM32(esi + 8) = eax;

loc_0044535E: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0044536A; /* jbe: below or equal (unsigned <=) */

loc_00445367: ;
    MEM32(esi + 4) = eax;

loc_0044536A: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00445374; /* jbe: below or equal (unsigned <=) */

loc_00445372: ;
    MEM32(esi) = eax;

loc_00445374: ;
    eax = MEM32(edi + 0x48);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00445340; /* jl: less (signed <) */

loc_0044537F: ;
    POP32(esp, ebp);

loc_00445380: ;
    POP32(esp, ebx);

loc_00445381: ;
    POP32(esp, esi);

loc_00445382: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00445387: ;
    PUSH32(esp, 0xC);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00445393u); RECOMP_ABI_CALL(0x000D4080u, sub_000D4080); /* call 0x000D4080 */

loc_00445393: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004453D0
 * Original: 0x004453D0 - 0x004453ED (29 bytes, 13 insns)
 * Folder: sound (between: 0x00445080 and 0x00445500)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004453D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004453D0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004453E9; /* je: equal / zero */

loc_004453DA: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004453E5; /* je: equal / zero */

loc_004453DF: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_004453E5: ;
    eax = ecx + 0x24;
    esp += 4; return; /* ret */

loc_004453E9: ;
    eax = ecx + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_004453F0
 * Original: 0x004453F0 - 0x0044546C (124 bytes, 45 insns)
 * Folder: sound (between: 0x00445080 and 0x00445500)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004453F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004453F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    MEM32(esp) = 0;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00445415; /* je: equal / zero */

loc_00445404: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00445410; /* je: equal / zero */

loc_00445409: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00445418;

loc_00445410: ;
    eax = ecx + 0x24;
    goto loc_00445418;

loc_00445415: ;
    eax = ecx + 0x4C;

loc_00445418: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0044542Eu); RECOMP_ABI_CALL(0x0044CA70u, sub_0044CA70); /* call 0x0044CA70 */

loc_0044542E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00445448; /* jne: not equal / not zero */

loc_00445435: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp);
    MEM32(eax + 0xC) = ecx;
    eax = 1;
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_00445448: ;
    eax = MEM32(esp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445466; /* je: equal / zero */

loc_0044544F: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00445458u); RECOMP_ABI_CALL(0x0044CAC0u, sub_0044CAC0); /* call 0x0044CAC0 */

loc_00445458: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = 0;

loc_00445466: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00445470
 * Original: 0x00445470 - 0x004454D5 (101 bytes, 35 insns)
 * Folder: sound (between: 0x00445080 and 0x00445500)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445470: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00445494u); RECOMP_ABI_CALL(0x0044D020u, sub_0044D020); /* call 0x0044D020 */

loc_00445494: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004454AE; /* jne: not equal / not zero */

loc_0044549B: ;
    eax = MEM32(esp);
    edx = MEM32(esp + 8);
    MEM32(edx + 0xC) = eax;
    eax = 1;
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_004454AE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004454CE; /* je: equal / zero */

loc_004454BA: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004454C4u); RECOMP_ABI_CALL(0x0044CFF0u, sub_0044CFF0); /* call 0x0044CFF0 */

loc_004454C4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_004454CE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004454E0
 * Original: 0x004454E0 - 0x004454FE (30 bytes, 10 insns)
 * Folder: sound (between: 0x00445080 and 0x00445500)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004454E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004454E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004454F3; /* jne: not equal / not zero */

loc_004454EB: ;
    eax = 0xFFFF0000u;
    esp += 8; return; /* ret 4 */

loc_004454F3: ;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004454FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004454F8u); } /* indirect call */
    }

loc_004454FB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00445500
 * Original: 0x00445500 - 0x00445543 (67 bytes, 21 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00445500: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00445508u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445508: ;
    PUSH32(esp, 0x5B7);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445517u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445517: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00445526; /* jne: not equal / not zero */

loc_00445520: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00444F00(); return; /* tail jmp 0x00444F00 */

loc_00445526: ;
    ecx = esi + 4;
    PUSH32(esp, 0x0044552Eu); RECOMP_ABI_CALL(0x0044BA70u, sub_0044BA70); /* call 0x0044BA70 */

loc_0044552E: ;
    ecx = MEM32(0x5B11C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044553D; /* je: equal / zero */

loc_00445538: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0044553Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044553Au); } /* indirect call */
    }

loc_0044553D: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00444F00(); return; /* tail jmp 0x00444F00 */

}

/**
 * sub_00445550
 * Original: 0x00445550 - 0x004455C2 (114 bytes, 41 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445550: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00445558u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445558: ;
    PUSH32(esp, 0x5DA);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445567u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445567: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00445579; /* jne: not equal / not zero */

loc_00445570: ;
    PUSH32(esp, 0x00445575u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445575: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00445579: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004455B8; /* je: equal / zero */

loc_00445582: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004455AD; /* je: equal / zero */

loc_00445589: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004455AD; /* je: equal / zero */

loc_00445590: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004455B8; /* je: equal / zero */

loc_00445597: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0044559Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00445599u); } /* indirect call */
    }

loc_0044559C: ;
    MEM32(esi + 0x10) = 1;
    PUSH32(esp, 0x004455A8u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004455A8: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_004455AD: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = edi + 4;
    PUSH32(esp, 0x004455B8u); RECOMP_ABI_CALL(0x0044B250u, sub_0044B250); /* call 0x0044B250 */

loc_004455B8: ;
    PUSH32(esp, 0x004455BDu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004455BD: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004455D0
 * Original: 0x004455D0 - 0x00445642 (114 bytes, 41 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004455D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004455D0: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x004455D8u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_004455D8: ;
    PUSH32(esp, 0x5F7);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x004455E7u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_004455E7: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004455F9; /* jne: not equal / not zero */

loc_004455F0: ;
    PUSH32(esp, 0x004455F5u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004455F5: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_004455F9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445638; /* je: equal / zero */

loc_00445602: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044562D; /* je: equal / zero */

loc_00445609: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044562D; /* je: equal / zero */

loc_00445610: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445638; /* je: equal / zero */

loc_00445617: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0044561Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00445619u); } /* indirect call */
    }

loc_0044561C: ;
    MEM32(esi + 0x10) = 0;
    PUSH32(esp, 0x00445628u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445628: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0044562D: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = edi + 4;
    PUSH32(esp, 0x00445638u); RECOMP_ABI_CALL(0x0044B280u, sub_0044B280); /* call 0x0044B280 */

loc_00445638: ;
    PUSH32(esp, 0x0044563Du); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_0044563D: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00445650
 * Original: 0x00445650 - 0x004456CC (124 bytes, 45 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445650: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00445658u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445658: ;
    PUSH32(esp, 0x68B);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445667u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445667: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0044567E; /* jne: not equal / not zero */

loc_00445670: ;
    PUSH32(esp, 0x00445675u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445675: ;
    eax = 0xFFFF0000u;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0044567E: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = 0xFFFF0000u;
    if (CMP_EQ(_fa, _fb)) goto loc_004456C0; /* je: equal / zero */

loc_0044568C: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004456B3; /* je: equal / zero */

loc_00445693: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004456B3; /* je: equal / zero */

loc_0044569A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004456A5u); RECOMP_ABI_CALL(0x004454E0u, sub_004454E0); /* call 0x004454E0 */

loc_004456A5: ;
    esi = eax;
    PUSH32(esp, 0x004456ACu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004456AC: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_004456B3: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    ecx = edi + 4;
    PUSH32(esp, 0x004456BEu); RECOMP_ABI_CALL(0x0044B2B0u, sub_0044B2B0); /* call 0x0044B2B0 */

loc_004456BE: ;
    esi = eax;

loc_004456C0: ;
    PUSH32(esp, 0x004456C5u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004456C5: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004456D0
 * Original: 0x004456D0 - 0x00445723 (83 bytes, 26 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004456D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004456D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004456D6u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_004456D6: ;
    PUSH32(esp, 0x76E);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x004456E5u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_004456E5: ;
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445710; /* je: equal / zero */

loc_004456F0: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445710; /* je: equal / zero */

loc_004456F7: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044571D; /* je: equal / zero */

loc_004456FE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00445703u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00445700u); } /* indirect call */
    }

loc_00445703: ;
    MEM32(esi + 0x10) = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00444F00(); return; /* tail jmp 0x00444F00 */

loc_00445710: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0044571Au); RECOMP_ABI_CALL(0x00434920u, sub_00434920); /* call 0x00434920 */

loc_0044571A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0044571D: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00444F00(); return; /* tail jmp 0x00444F00 */

}

/**
 * sub_00445730
 * Original: 0x00445730 - 0x00445783 (83 bytes, 26 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00445730: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00445736u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445736: ;
    PUSH32(esp, 0x78E);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445745u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445745: ;
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445770; /* je: equal / zero */

loc_00445750: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445770; /* je: equal / zero */

loc_00445757: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044577D; /* je: equal / zero */

loc_0044575E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00445763u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00445760u); } /* indirect call */
    }

loc_00445763: ;
    MEM32(esi + 0x10) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00444F00(); return; /* tail jmp 0x00444F00 */

loc_00445770: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0044577Au); RECOMP_ABI_CALL(0x00434950u, sub_00434950); /* call 0x00434950 */

loc_0044577A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0044577D: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00444F00(); return; /* tail jmp 0x00444F00 */

}

/**
 * sub_00445790
 * Original: 0x00445790 - 0x004457F7 (103 bytes, 37 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445790: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00445796u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445796: ;
    PUSH32(esp, 0x7AE);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x004457A5u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_004457A5: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004457DF; /* je: equal / zero */

loc_004457B0: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004457DF; /* je: equal / zero */

loc_004457B7: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004457CC; /* jne: not equal / not zero */

loc_004457BE: ;
    esi = 0xFFFF0000u;
    PUSH32(esp, 0x004457C8u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004457C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004457CC: ;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004457D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004457D1u); } /* indirect call */
    }

loc_004457D4: ;
    esi = eax;
    PUSH32(esp, 0x004457DBu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004457DB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004457DF: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004457E9u); RECOMP_ABI_CALL(0x00434990u, sub_00434990); /* call 0x00434990 */

loc_004457E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x004457F3u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004457F3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00445800
 * Original: 0x00445800 - 0x00445851 (81 bytes, 28 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445800: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00445806u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445806: ;
    PUSH32(esp, 0x822);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445815u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445815: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445837; /* je: equal / zero */

loc_00445820: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445837; /* je: equal / zero */

loc_00445827: ;
    PUSH32(esp, 0x0044582Cu); RECOMP_ABI_CALL(0x00012040u, sub_00012040); /* call 0x00012040 */

loc_0044582C: ;
    esi = eax;
    PUSH32(esp, 0x00445833u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445833: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00445837: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00445843u); RECOMP_ABI_CALL(0x00435B00u, sub_00435B00); /* call 0x00435B00 */

loc_00445843: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x0044584Du); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_0044584D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00445860
 * Original: 0x00445860 - 0x0044589D (61 bytes, 20 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445860: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00445868u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445868: ;
    PUSH32(esp, 0x9C8);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445877u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445877: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00445895; /* je: equal / zero */

loc_00445881: ;
    ecx = MEM32(0x5B11C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445895; /* je: equal / zero */

loc_0044588B: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00445895u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00445892u); } /* indirect call */
    }

loc_00445895: ;
    PUSH32(esp, 0x0044589Au); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_0044589A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004458A0
 * Original: 0x004458A0 - 0x004458EC (76 bytes, 24 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004458A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004458A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004458A8u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_004458A8: ;
    PUSH32(esp, 0x9E9);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x004458B7u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_004458B7: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_004458CC; /* jne: not equal / not zero */

loc_004458C1: ;
    PUSH32(esp, 0x004458C6u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004458C6: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 12; return; /* ret 8 */

loc_004458CC: ;
    ecx = MEM32(0x5B11C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004458E0; /* je: equal / zero */

loc_004458D6: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x004458E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004458DDu); } /* indirect call */
    }

loc_004458E0: ;
    PUSH32(esp, 0x004458E5u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004458E5: ;
    eax = MEM32(esp + 8);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004458F0
 * Original: 0x004458F0 - 0x0044592D (61 bytes, 20 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004458F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004458F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004458F8u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_004458F8: ;
    PUSH32(esp, 0x9F8);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445907u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445907: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00445925; /* je: equal / zero */

loc_00445911: ;
    ecx = MEM32(0x5B11C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445925; /* je: equal / zero */

loc_0044591B: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00445925u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00445922u); } /* indirect call */
    }

loc_00445925: ;
    PUSH32(esp, 0x0044592Au); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_0044592A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00445930
 * Original: 0x00445930 - 0x00445968 (56 bytes, 18 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445930: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00445938u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445938: ;
    PUSH32(esp, 0xA05);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445947u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445947: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00445960; /* je: equal / zero */

loc_00445951: ;
    ecx = MEM32(0x5B11C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445960; /* je: equal / zero */

loc_0044595B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00445960u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044595Du); } /* indirect call */
    }

loc_00445960: ;
    PUSH32(esp, 0x00445965u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445965: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00445970
 * Original: 0x00445970 - 0x004459C4 (84 bytes, 26 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445970: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00445978u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445978: ;
    PUSH32(esp, 0xA1E);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445987u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445987: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004459BC; /* je: equal / zero */

loc_00445991: ;
    ecx = MEM32(0x5B11C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004459AD; /* je: equal / zero */

loc_0044599B: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x004459A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004459A2u); } /* indirect call */
    }

loc_004459A5: ;
    PUSH32(esp, 0x004459AAu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004459AA: ;
    esp += 8; return; /* ret 4 */

loc_004459AD: ;
    PUSH32(esp, 0x57311C);
    PUSH32(esp, 8);
    PUSH32(esp, 0x004459B9u); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_004459B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004459BC: ;
    PUSH32(esp, 0x004459C1u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004459C1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004459D0
 * Original: 0x004459D0 - 0x00445A06 (54 bytes, 17 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004459D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004459D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004459D8u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_004459D8: ;
    PUSH32(esp, 0xA73);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x004459E7u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_004459E7: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004459FE; /* je: equal / zero */

loc_004459F1: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004459FBu); RECOMP_ABI_CALL(0x0044D320u, sub_0044D320); /* call 0x0044D320 */

loc_004459FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004459FE: ;
    PUSH32(esp, 0x00445A03u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445A03: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00445A10
 * Original: 0x00445A10 - 0x00445A46 (54 bytes, 17 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445A10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00445A18u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445A18: ;
    PUSH32(esp, 0xA7B);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445A27u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445A27: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00445A3E; /* je: equal / zero */

loc_00445A31: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00445A3Bu); RECOMP_ABI_CALL(0x0044D310u, sub_0044D310); /* call 0x0044D310 */

loc_00445A3B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00445A3E: ;
    PUSH32(esp, 0x00445A43u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445A43: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00445A50
 * Original: 0x00445A50 - 0x00445B70 (288 bytes, 80 insns)
 * Folder: sound (between: 0x00445A10 and 0x00445B80)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445A50: ;
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xEC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00445B63; /* jne: not equal / not zero */

loc_00445A6B: ;
    eax = MEM32(esp + 0xFC);
    PUSH32(esp, 0xCC);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00445A82u); RECOMP_ABI_CALL(0x000D4080u, sub_000D4080); /* call 0x000D4080 */

loc_00445A82: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445AAC; /* je: equal / zero */

loc_00445A8C: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x68;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebx);
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx + 8);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ebx + 0xC);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    goto loc_00445AE8;

loc_00445AAC: ;
    ecx = MEM32(esp + 0xF0);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0x00445AC8u); RECOMP_ABI_CALL(0x004452A0u, sub_004452A0); /* call 0x004452A0 */

loc_00445AC8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x1C) = 0x10000;
    MEM8(esp + 0x24) = 0x40;
    MEM32(esp + 0x40) = 1;

loc_00445AE8: ;
    ecx = MEM32(esp + 0xF8);
    edx = MEM32(ecx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xF8);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00445B18u); RECOMP_ABI_CALL(0x0044D8E0u, sub_0044D8E0); /* call 0x0044D8E0 */

loc_00445B18: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00445B47; /* jne: not equal / not zero */

loc_00445B1F: ;
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00445B30u); RECOMP_ABI_CALL(0x0044D300u, sub_0044D300); /* call 0x0044D300 */

loc_00445B30: ;
    edx = MEM32(esp + 8);
    MEM32(esi + 0xC) = edx;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xE0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

loc_00445B47: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445B63; /* je: equal / zero */

loc_00445B4F: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00445B59u); RECOMP_ABI_CALL(0x0044D650u, sub_0044D650); /* call 0x0044D650 */

loc_00445B59: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_00445B63: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xE0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00445B70
 * Original: 0x00445B70 - 0x00445B75 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00445A10 and 0x00445B80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00445B70: ;
    g_seh_ebp = ebp; sub_00445650(); return; /* tail jmp 0x00445650 */

}

/**
 * sub_00445B80
 * Original: 0x00445B80 - 0x00445C37 (183 bytes, 58 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445B80: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00445B8Eu); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445B8E: ;
    PUSH32(esp, 0xB56);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445B9Du); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445B9D: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00445BB7; /* jne: not equal / not zero */

loc_00445BA6: ;
    PUSH32(esp, 0x00445BABu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445BAB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00445BB7: ;
    ecx = MEM32(esp + 0x408);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445C26; /* je: equal / zero */

loc_00445BC4: ;
    eax = MEM32(esp + 0x40C);
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00445C17; /* jne: not equal / not zero */

loc_00445BD3: ;
    edx = MEM32(eax + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00445C17; /* jne: not equal / not zero */

loc_00445BDA: ;
    eax = MEM32(eax);
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, 0x573158);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00445BF7u); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00445BF7: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00445C03u); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00445C03: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00445C0Bu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445C0B: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00445C17: ;
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445C26; /* je: equal / zero */

loc_00445C1E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00445C24u); RECOMP_ABI_CALL(0x0044D330u, sub_0044D330); /* call 0x0044D330 */

loc_00445C24: ;
    esi = eax;

loc_00445C26: ;
    PUSH32(esp, 0x00445C2Bu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445C2B: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00445C40
 * Original: 0x00445C40 - 0x00445C45 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00445B80 and 0x00445C60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00445C40: ;
    g_seh_ebp = ebp; sub_00445550(); return; /* tail jmp 0x00445550 */

}

/**
 * sub_00445C50
 * Original: 0x00445C50 - 0x00445C55 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00445B80 and 0x00445C60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00445C50: ;
    g_seh_ebp = ebp; sub_004455D0(); return; /* tail jmp 0x004455D0 */

}

/**
 * sub_00445C60
 * Original: 0x00445C60 - 0x00445CA8 (72 bytes, 23 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445C60: ;
    PUSH32(esp, 0x00445C65u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445C65: ;
    PUSH32(esp, 0xBCB);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445C74u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445C74: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445C90; /* je: equal / zero */

loc_00445C85: ;
    PUSH32(esp, 0x00445C8Au); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445C8A: ;
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

loc_00445C90: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00445C9Au); RECOMP_ABI_CALL(0x00434570u, sub_00434570); /* call 0x00434570 */

loc_00445C9A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x00445CA4u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445CA4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00445CB0
 * Original: 0x00445CB0 - 0x00445CDD (45 bytes, 14 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445CB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00445CB6u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445CB6: ;
    PUSH32(esp, 0xBD9);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445CC5u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445CC5: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00445CCFu); RECOMP_ABI_CALL(0x00434600u, sub_00434600); /* call 0x00434600 */

loc_00445CCF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x00445CD9u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445CD9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00445CE0
 * Original: 0x00445CE0 - 0x00445D0D (45 bytes, 14 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445CE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445CE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00445CE6u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445CE6: ;
    PUSH32(esp, 0xC15);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445CF5u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445CF5: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00445CFFu); RECOMP_ABI_CALL(0x00434600u, sub_00434600); /* call 0x00434600 */

loc_00445CFF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x00445D09u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445D09: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00445D10
 * Original: 0x00445D10 - 0x00445D77 (103 bytes, 30 insns)
 * Folder: sound (between: 0x00445CE0 and 0x00445E80)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445D10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00445D56; /* jne: not equal / not zero */

loc_00445D21: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x5731DC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00445D33u); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00445D33: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00445D3Fu); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00445D3F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00445D42: ;
    eax = MEM32(esp + 0x408);
    MEM32(eax) = MEM32(eax) | 0x4C4B400;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00445D56: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00445D42; /* jne: not equal / not zero */

loc_00445D5C: ;
    ecx = MEM32(esp + 0x408);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00445D6Du); RECOMP_ABI_CALL(0x004345D0u, sub_004345D0); /* call 0x004345D0 */

loc_00445D6D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00445D80
 * Original: 0x00445D80 - 0x00445E51 (209 bytes, 94 insns)
 * Folder: sound (between: 0x00445CE0 and 0x00445E80)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00445D80: ;
    PUSH32(esp, 0x00445D85u); RECOMP_ABI_CALL(0x000B3950u, sub_000B3950); /* call 0x000B3950 */

loc_00445D85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00445D8A; /* jne: not equal / not zero */

loc_00445D89: ;
    esp += 4; return; /* ret */

loc_00445D8A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00445D97; /* jne: not equal / not zero */

loc_00445D93: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00445D97: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM8(ebx + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x24), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00445DA7; /* je: equal / zero */

loc_00445DA2: ;
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00445DA7: ;
    eax = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_00445E4A; /* ja: above (unsigned >) */

loc_00445DB6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x445E54); /* switch: 9 entries, 5 targets */
    if (_jt == 0x00445DBDu) goto loc_00445DBD;
    if (_jt == 0x00445DCEu) goto loc_00445DCE;
    if (_jt == 0x00445E06u) goto loc_00445E06;
    if (_jt == 0x00445E37u) goto loc_00445E37;
    if (_jt == 0x00445E4Au) goto loc_00445E4A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00445DBD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00445DC6u); RECOMP_ABI_CALL(0x00434620u, sub_00434620); /* call 0x00434620 */

loc_00445DC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00445DCE: ;
    eax = MEM32(esi + 0x48);
    ebp = MEM32(esi + 0x44);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00445E2D; /* jle: less or equal (signed <=) */

loc_00445DDA: ;
    /* nop */

loc_00445DE0: ;
    eax = MEM32(ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00445DEAu); RECOMP_ABI_CALL(0x00445D80u, sub_00445D80); /* call 0x00445D80 */

loc_00445DEA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445E4A; /* je: equal / zero */

loc_00445DF1: ;
    eax = MEM32(esi + 0x48);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00445DE0; /* jl: less (signed <) */

loc_00445DFC: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00445E06: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445E4A; /* je: equal / zero */

loc_00445E0D: ;
    ecx = MEM32(esi + 0x60);
    esi = MEM32(esi + 0x64);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00445E2D; /* jle: less or equal (signed <=) */

loc_00445E19: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00445E20: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00445E4A; /* jne: not equal / not zero */

loc_00445E25: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00445E20; /* jl: less (signed <) */

loc_00445E2D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00445E37: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445E4A; /* je: equal / zero */

loc_00445E3E: ;
    ecx = MEM32(esi + 0x4C);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445E4C; /* je: equal / zero */

loc_00445E4A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00445E4C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00445E80
 * Original: 0x00445E80 - 0x00445EA8 (40 bytes, 12 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445E80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00445E86u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445E86: ;
    PUSH32(esp, 0xC70);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445E95u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445E95: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(eax + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00445EA4u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445EA4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00445EB0
 * Original: 0x00445EB0 - 0x00445ED8 (40 bytes, 12 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445EB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445EB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00445EB6u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445EB6: ;
    PUSH32(esp, 0xC78);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445EC5u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445EC5: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(eax + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00445ED4u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445ED4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00445EE0
 * Original: 0x00445EE0 - 0x00445F7B (155 bytes, 43 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445EE0: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00445EEBu); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445EEB: ;
    PUSH32(esp, 0xC81);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445EFAu); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445EFA: ;
    eax = MEM32(esp + 0x40C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00445F30; /* je: equal / zero */

loc_00445F08: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00445F49; /* jne: not equal / not zero */

loc_00445F0F: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x5731DC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00445F21u); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00445F21: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00445F2Du); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00445F2D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00445F30: ;
    eax = MEM32(esp + 0x408);
    MEM32(eax) = MEM32(eax) | 0x4C4B400;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00445F42u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445F42: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00445F49: ;
    ecx = MEM32(eax + 0x24);
    eax = MEM32(esp + 0x408);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00445F6A; /* je: equal / zero */

loc_00445F59: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    PUSH32(esp, 0x00445F63u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445F63: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00445F6A: ;
    ecx = ecx | 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    PUSH32(esp, 0x00445F74u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445F74: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00445F80
 * Original: 0x00445F80 - 0x00445FA6 (38 bytes, 18 insns)
 * Folder: sound (between: 0x00445EE0 and 0x00445FB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445F80: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x50);
    ecx = MEM32(ecx + 0x54);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00445FA5; /* jle: less or equal (signed <=) */

loc_00445F90: ;
    PUSH32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ecx;

loc_00445F96: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00445F9E; /* jbe: below or equal (unsigned <=) */

loc_00445F9C: ;
    eax = ecx;

loc_00445F9E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00445F96; /* jne: not equal / not zero */

loc_00445FA4: ;
    POP32(esp, esi);

loc_00445FA5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00445FB0
 * Original: 0x00445FB0 - 0x00445FF2 (66 bytes, 22 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00445FB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00445FB6u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00445FB6: ;
    PUSH32(esp, 0xD25);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00445FC5u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00445FC5: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(0x5B11C0);
    eax = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00445FE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00445FE4u); } /* indirect call */
    }

loc_00445FE7: ;
    esi = eax;
    PUSH32(esp, 0x00445FEEu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00445FEE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00446000
 * Original: 0x00446000 - 0x00446033 (51 bytes, 16 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00446000: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00446006u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00446006: ;
    PUSH32(esp, 0xD2D);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00446015u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00446015: ;
    ecx = MEM32(0x5B11C0);
    edx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x00446028u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00446025u); } /* indirect call */
    }

loc_00446028: ;
    esi = eax;
    PUSH32(esp, 0x0044602Fu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_0044602F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00446040
 * Original: 0x00446040 - 0x00446080 (64 bytes, 18 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00446040: ;
    PUSH32(esp, 0x00446045u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00446045: ;
    PUSH32(esp, 0xD74);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00446054u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00446054: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x10) = eax;
    PUSH32(esp, 0x0044607Au); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_0044607A: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00446080
 * Original: 0x00446080 - 0x004460FC (124 bytes, 48 insns)
 * Folder: sound (between: 0x00446040 and 0x004461F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00446080: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(esi + 0x14);
    MEM32(edi + 8) = edx;
    eax = MEM32(esi + 0x18);
    MEM32(edi + 0x10) = eax;
    ecx = MEM32(esi + 0x1C);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(esi + 0x20);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(esi + 0x24);
    MEM32(edi + 0x1C) = eax;
    ecx = MEM32(esi + 0x28);
    MEM32(edi + 0x20) = ecx;
    edx = MEM32(esi + 0x60);
    MEM32(edi + 0x58) = edx;
    eax = MEM32(esi + 0x64);
    MEM32(edi + 0x5C) = eax;
    ecx = MEM32(esi + 0x2C);
    MEM32(edi + 0x24) = ecx;
    edx = MEM32(esi + 0x5C);
    MEM32(edi + 0x54) = edx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004460F2; /* je: equal / zero */

loc_004460D7: ;
    PUSH32(esp, 0x25);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    ecx = edi + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004460E6u); RECOMP_ABI_CALL(0x0047E7E0u, sub_0047E7E0); /* call 0x0047E7E0 */

loc_004460E6: ;
    edx = MEM32(esi + 0x58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x50) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004460F2: ;
    eax = MEM32(esp + 0x14);
    MEM32(edi + 0x28) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00446100
 * Original: 0x00446100 - 0x00446165 (101 bytes, 42 insns)
 * Folder: sound (between: 0x00446040 and 0x004461F0)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00446100: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00446110u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044610Du); } /* indirect call */
    }

loc_00446110: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044615E; /* je: equal / zero */

loc_00446114: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446135; /* je: equal / zero */

loc_0044611B: ;
    ecx = MEM32(edi + 0x50);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00446123u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00446121u); } /* indirect call */
    }

loc_00446123: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0044615E; /* je: equal / zero */

loc_0044612B: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00446135: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00446147u); RECOMP_ABI_CALL(0x00436520u, sub_00436520); /* call 0x00436520 */

loc_00446147: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0044615E; /* je: equal / zero */

loc_00446154: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0044615E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00446170
 * Original: 0x00446170 - 0x004461BB (75 bytes, 28 insns)
 * Folder: sound (between: 0x00446040 and 0x004461F0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00446170: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446195; /* je: equal / zero */

loc_0044617C: ;
    ecx = MEM32(ecx + 0x50);
    edx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00446188u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00446185u); } /* indirect call */
    }

loc_00446188: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004461B5; /* je: equal / zero */

loc_0044618C: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00446195: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0044619Eu); RECOMP_ABI_CALL(0x00435E80u, sub_00435E80); /* call 0x00435E80 */

loc_0044619E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004461B5; /* je: equal / zero */

loc_004461A5: ;
    MEM32(esi + 0x14) = 0xFFFF;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_004461B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004461C0
 * Original: 0x004461C0 - 0x004461EE (46 bytes, 16 insns)
 * Folder: sound (between: 0x00446040 and 0x004461F0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004461C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004461C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004461DB; /* je: equal / zero */

loc_004461CB: ;
    edx = MEM32(eax + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 8; return; /* ret 4 */

loc_004461DB: ;
    ecx = MEM32(eax + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFF (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004461F0
 * Original: 0x004461F0 - 0x00446257 (103 bytes, 36 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004461F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004461F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004461F6u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_004461F6: ;
    PUSH32(esp, 0xE83);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00446205u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00446205: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0044624E; /* ja: above (unsigned >) */

loc_00446217: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x446258); /* switch: 9 entries, 4 targets */
    if (_jt == 0x0044621Eu) goto loc_0044621E;
    if (_jt == 0x00446235u) goto loc_00446235;
    if (_jt == 0x0044624Cu) goto loc_0044624C;
    if (_jt == 0x0044624Eu) goto loc_0044624E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0044621E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00446227u); RECOMP_ABI_CALL(0x00445CE0u, sub_00445CE0); /* call 0x00445CE0 */

loc_00446227: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x00446231u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446231: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00446235: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0044623Eu); RECOMP_ABI_CALL(0x00445EB0u, sub_00445EB0); /* call 0x00445EB0 */

loc_0044623E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x00446248u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446248: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0044624C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0044624E: ;
    PUSH32(esp, 0x00446253u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446253: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00446280
 * Original: 0x00446280 - 0x00446336 (182 bytes, 48 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00446280: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0044628Bu); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_0044628B: ;
    PUSH32(esp, 0xE93);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x0044629Au); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_0044629A: ;
    eax = MEM32(esp + 0x40C);
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004462E5; /* jne: not equal / not zero */

loc_004462AB: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x5731DC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004462BDu); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_004462BD: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x004462C9u); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_004462C9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004462CC: ;
    eax = MEM32(esp + 0x408);
    MEM32(eax) = MEM32(eax) | 0x4C4B400;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004462D9: ;
    PUSH32(esp, 0x004462DEu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004462DE: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_004462E5: ;
    ecx = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004462CC; /* ja: above (unsigned >) */

loc_004462EE: ;
    ecx = ZX8(MEM8(ecx + 0x446348));
    { uint32_t _jt = MEM32(ecx * 4 + 0x446338); /* switch: 4 entries, 4 targets */
    if (_jt == 0x004462CCu) goto loc_004462CC;
    if (_jt == 0x004462D9u) goto loc_004462D9;
    if (_jt == 0x004462FCu) goto loc_004462FC;
    if (_jt == 0x00446319u) goto loc_00446319;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004462FC: ;
    edx = MEM32(esp + 0x408);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0044630Au); RECOMP_ABI_CALL(0x00445D10u, sub_00445D10); /* call 0x00445D10 */

loc_0044630A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00446312u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446312: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00446319: ;
    ecx = MEM32(esp + 0x408);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00446327u); RECOMP_ABI_CALL(0x00445EE0u, sub_00445EE0); /* call 0x00445EE0 */

loc_00446327: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0044632Fu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_0044632F: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00446336
 * Original: 0x00446336 - 0x00446360 (42 bytes, 25 insns)
 * Folder: sound (between: 0x00446280 and 0x00446360)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446336(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00446336: ;
    edi = edi;
    g_df = 0; /* cld */
    RECOMP_UNIMPL("bound eax, qword ptr [eax + eax + 0x19]", 0x00446339u); /* TODO: bound eax, qword ptr [eax + eax + 0x19] */
    RECOMP_UNIMPL("arpl word ptr [eax + eax - 0x27], ax", 0x0044633Du); /* TODO: arpl word ptr [eax + eax - 0x27], ax */
    RECOMP_UNIMPL("bound eax, qword ptr [eax + eax - 0x34]", 0x00446341u); /* TODO: bound eax, qword ptr [eax + eax - 0x34] */
    RECOMP_UNIMPL("bound eax, qword ptr [eax + eax]", 0x00446345u); /* TODO: bound eax, qword ptr [eax + eax] */
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx) = MEM32(ebx) + eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
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
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00446360
 * Original: 0x00446360 - 0x004463D5 (117 bytes, 45 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00446360: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00446368u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00446368: ;
    PUSH32(esp, 0xEE1);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00446377u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00446377: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004463CC; /* je: equal / zero */

loc_00446380: ;
    esi = MEM32(esi + 0x84);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004463CC; /* je: equal / zero */

loc_0044638A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    /* nop */

loc_004463A0: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004463C2; /* je: equal / zero */

loc_004463A7: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004463C2; /* je: equal / zero */

loc_004463AE: ;
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    ecx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004463C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004463BFu); } /* indirect call */
    }

loc_004463C2: ;
    esi = MEM32(esi + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004463A0; /* jne: not equal / not zero */

loc_004463C9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004463CC: ;
    PUSH32(esp, 0x004463D1u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004463D1: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004463E0
 * Original: 0x004463E0 - 0x00446461 (129 bytes, 51 insns)
 * Folder: sound (between: 0x00446360 and 0x00446490)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004463E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004463E0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004463EBu); RECOMP_ABI_CALL(0x00443900u, sub_00443900); /* call 0x00443900 */

loc_004463EB: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044645D; /* je: equal / zero */

loc_004463F4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0044645C; /* jl: less (signed <) */

loc_004463FD: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00446452; /* jl: less (signed <) */

loc_00446405: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = ebx + 1;
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00446423; /* jne: not equal / not zero */

loc_00446411: ;
    ecx = eax * 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0044641Eu); RECOMP_ABI_CALL(0x000D40E0u, sub_000D40E0); /* call 0x000D40E0 */

loc_0044641E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00446434;

loc_00446423: ;
    edx = eax * 4;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00446431u); RECOMP_ABI_CALL(0x000D4010u, sub_000D4010); /* call 0x000D4010 */

loc_00446431: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00446434: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(esi) = eax;
    eax = edi;
    if (CMP_AE(_fa, _fb)) goto loc_00446452; /* jae: above or equal (unsigned >=) */

loc_00446440: ;
    edx = MEM32(esi);
    MEM32(edx + eax * 4) = 0;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00446440; /* jb: below (unsigned <) */

loc_00446452: ;
    edx = MEM32(esi);
    eax = MEM32(esp + 0x10);
    MEM32(edx + ebx * 4) = eax;
    POP32(esp, edi);

loc_0044645C: ;
    POP32(esp, ebx);

loc_0044645D: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00446470
 * Original: 0x00446470 - 0x00446482 (18 bytes, 7 insns)
 * Folder: sound (between: 0x00446360 and 0x00446490)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00446470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00446470: ;
    ecx = MEM32(0x5B11C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044647F; /* je: equal / zero */

loc_0044647A: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

loc_0044647F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00446490
 * Original: 0x00446490 - 0x004464CA (58 bytes, 18 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00446490: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00446498u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00446498: ;
    PUSH32(esp, 0xF64);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x004464A7u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_004464A7: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004464C5; /* je: equal / zero */

loc_004464B1: ;
    ecx = MEM32(0x5B11C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004464C0; /* je: equal / zero */

loc_004464BB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x004464C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004464BDu); } /* indirect call */
    }

loc_004464C0: ;
    PUSH32(esp, 0x004464C5u); RECOMP_ABI_CALL(0x0044D980u, sub_0044D980); /* call 0x0044D980 */

loc_004464C5: ;
    g_seh_ebp = ebp; sub_00444F00(); return; /* tail jmp 0x00444F00 */

}

/**
 * sub_004464D0
 * Original: 0x004464D0 - 0x0044651E (78 bytes, 27 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004464D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004464D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004464D8u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_004464D8: ;
    PUSH32(esp, 0xF7C);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x004464E7u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_004464E7: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004464FB; /* jne: not equal / not zero */

loc_004464F0: ;
    PUSH32(esp, 0x004464F5u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004464F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_004464FB: ;
    ecx = MEM32(0x5B11C0);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446513; /* je: equal / zero */

loc_00446507: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00446511u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044650Eu); } /* indirect call */
    }

loc_00446511: ;
    esi = eax;

loc_00446513: ;
    PUSH32(esp, 0x00446518u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446518: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00446520
 * Original: 0x00446520 - 0x0044652B (11 bytes, 3 insns)
 * Folder: sound (between: 0x004464D0 and 0x00446530)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00446520: ;
    ecx = MEM32(0x5B11C0);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x28)); return; /* indirect tail jmp */

}

/**
 * sub_00446530
 * Original: 0x00446530 - 0x004466DA (426 bytes, 150 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00446530: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00446539u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00446539: ;
    PUSH32(esp, 0x1EC);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00446548u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00446548: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446560; /* je: equal / zero */

loc_00446553: ;
    PUSH32(esp, 0x00446558u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446558: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00446560: ;
    MEM32(esi + 0x84) = edi;
    MEM32(esi + 0x88) = edi;
    MEM32(esi + 0x8C) = edi;
    MEM32(esi + 0x78) = edi;
    MEM32(esi + 0x7C) = edi;
    MEM32(esi + 0x80) = edi;
    ecx = MEM32(0x5B11C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_004465BE; /* jne: not equal / not zero */

loc_0044658D: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5B11C0);
    PUSH32(esp, 0x0044659Du); RECOMP_ABI_CALL(0x00436C60u, sub_00436C60); /* call 0x00436C60 */

loc_0044659D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004465B8; /* je: equal / zero */

loc_004465A4: ;
    MEM32(0x5B11C0) = edi;
    PUSH32(esp, 0x004465AFu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004465AF: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_004465B8: ;
    ecx = MEM32(0x5B11C0);

loc_004465BE: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004465E1; /* je: equal / zero */

loc_004465C5: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x004465CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004465C7u); } /* indirect call */
    }

loc_004465CA: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004465E1; /* jne: not equal / not zero */

loc_004465D0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x573214);
    PUSH32(esp, 8);
    PUSH32(esp, 0x004465DEu); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_004465DE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004465E1: ;
    PUSH32(esp, ebx);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    ecx = esi + 4;
    PUSH32(esp, 0x004465EEu); RECOMP_ABI_CALL(0x0044BA80u, sub_0044BA80); /* call 0x0044BA80 */

loc_004465EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0044660E; /* jne: not equal / not zero */

loc_004465F2: ;
    PUSH32(esp, 0x5B11C0);
    PUSH32(esp, 0x004465FCu); RECOMP_ABI_CALL(0x00436390u, sub_00436390); /* call 0x00436390 */

loc_004465FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00446604u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446604: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0044660E: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(esi + 0x60) = ecx;
    ecx = MEM32(0x5B11C0);
    ebx = esi + 0x68;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00446623u); RECOMP_ABI_CALL(0x00440680u, sub_00440680); /* call 0x00440680 */

loc_00446623: ;
    edi = esi + 0x58;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0044662Du); RECOMP_ABI_CALL(0x0044BB00u, sub_0044BB00); /* call 0x0044BB00 */

loc_0044662D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446656; /* je: equal / zero */

loc_00446634: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0044663Au); RECOMP_ABI_CALL(0x00455D40u, sub_00455D40); /* call 0x00455D40 */

loc_0044663A: ;
    PUSH32(esp, 0x5B11C0);
    PUSH32(esp, 0x00446644u); RECOMP_ABI_CALL(0x00436390u, sub_00436390); /* call 0x00436390 */

loc_00446644: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0044664Cu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_0044664C: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00446656: ;
    ebp = esi + 0x50;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00446660u); RECOMP_ABI_CALL(0x0044C9D0u, sub_0044C9D0); /* call 0x0044C9D0 */

loc_00446660: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004466B2; /* jne: not equal / not zero */

loc_00446667: ;
    ecx = MEM32(0x5B11C0);
    eax = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00446674u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00446672u); } /* indirect call */
    }

loc_00446674: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x4C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004466B2; /* je: equal / zero */

loc_0044667C: ;
    ecx = MEM32(edi);
    eax = MEM32(ebp);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00446686u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00446684u); } /* indirect call */
    }

loc_00446686: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004466B2; /* je: equal / zero */

loc_0044668B: ;
    ecx = MEM32(0x5B11C0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00446696u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00446693u); } /* indirect call */
    }

loc_00446696: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0044669Eu); RECOMP_ABI_CALL(0x00444F60u, sub_00444F60); /* call 0x00444F60 */

loc_0044669E: ;
    MEM32(esi) = 1;
    PUSH32(esp, 0x004466A9u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004466A9: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_004466B2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004466B8u); RECOMP_ABI_CALL(0x00455D40u, sub_00455D40); /* call 0x00455D40 */

loc_004466B8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004466BEu); RECOMP_ABI_CALL(0x00455D40u, sub_00455D40); /* call 0x00455D40 */

loc_004466BE: ;
    PUSH32(esp, 0x5B11C0);
    PUSH32(esp, 0x004466C8u); RECOMP_ABI_CALL(0x00436390u, sub_00436390); /* call 0x00436390 */

loc_004466C8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004466D0u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004466D0: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004466E0
 * Original: 0x004466E0 - 0x004467D6 (246 bytes, 83 insns)
 * Folder: sound (between: 0x00446530 and 0x004468E0)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004466E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004466E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2C);
    ebx = ecx;
    PUSH32(esp, 0x004466EDu); RECOMP_ABI_CALL(0x000D40E0u, sub_000D40E0); /* call 0x000D40E0 */

loc_004466ED: ;
    esi = eax;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004467CD; /* je: equal / zero */

loc_004466FC: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00446706u); RECOMP_ABI_CALL(0x004450D0u, sub_004450D0); /* call 0x004450D0 */

loc_00446706: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00446785; /* je: equal / zero */

loc_00446716: ;
    eax = MEM32(edi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_004467A8; /* ja: above (unsigned >) */

loc_00446723: ;
    eax = ZX8(MEM8(eax + 0x4467E8));
    { uint32_t _jt = MEM32(eax * 4 + 0x4467D8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00446731u) goto loc_00446731;
    if (_jt == 0x0044673Au) goto loc_0044673A;
    if (_jt == 0x00446743u) goto loc_00446743;
    if (_jt == 0x004467A8u) goto loc_004467A8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00446731: ;
    MEM32(esi + 0xC) = 3;
    goto loc_00446755;

loc_0044673A: ;
    MEM32(esi + 0xC) = 2;
    goto loc_00446755;

loc_00446743: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00446749u); RECOMP_ABI_CALL(0x004461F0u, sub_004461F0); /* call 0x004461F0 */

loc_00446749: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esi + 0xC) = eax;

loc_00446755: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(esi + 8) = ebp;
    MEM32(esi + 0x10) = ebp;
    PUSH32(esp, 0x00446766u); RECOMP_ABI_CALL(0x00445D80u, sub_00445D80); /* call 0x00445D80 */

loc_00446766: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x18) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFF)) >> 32) & 1);
    eax = eax + 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x14) = ebp;

loc_00446785: ;
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x28) = ebp;
    MEM32(esi + 0x20) = ebp;
    edx = MEM32(ebx + 0x88);
    eax = ebx + 0x84;
    MEM32(esi + 0x24) = edx;
    MEM32(esi + 0x28) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004467B1; /* jne: not equal / not zero */

loc_004467A4: ;
    MEM32(eax) = esi;
    goto loc_004467BA;

loc_004467A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_004467B1: ;
    eax = MEM32(ebx + 0x88);
    MEM32(eax + 0x20) = esi;

loc_004467BA: ;
    eax = MEM32(ebx + 0x8C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x88) = esi;
    MEM32(ebx + 0x8C) = eax;

loc_004467CD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004467D6
 * Original: 0x004467D6 - 0x00446800 (42 bytes, 27 insns)
 * Folder: sound (between: 0x00446530 and 0x004468E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004467D6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004467D6: ;
    edi = edi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx) = MEM8(edx) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx) = MEM8(ecx) + HI8(edx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + 0x4467) = MEM8(eax + 0x4467) + HI8(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x4467)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
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
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00446800
 * Original: 0x00446800 - 0x004468DE (222 bytes, 77 insns)
 * Folder: sound (between: 0x00446530 and 0x004468E0)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00446800: ;
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xDC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xF4);
    PUSH32(esp, edi);
    PUSH32(esp, 0xCC);
    eax = esp + 0x24;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ebx = ecx;
    PUSH32(esp, 0x00446823u); RECOMP_ABI_CALL(0x000D4080u, sub_000D4080); /* call 0x000D4080 */

loc_00446823: ;
    edi = MEM32(esp + 0xFC);
    eax = MEM32(edi + 0x10);
    ebp = MEM32(esp + 0x100);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044685B; /* je: equal / zero */

loc_0044683B: ;
    ecx = ebx + 0x68;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    goto loc_0044688C;

loc_0044685B: ;
    edx = MEM32(ebp);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = 1;
    PUSH32(esp, 0x00446871u); RECOMP_ABI_CALL(0x004452A0u, sub_004452A0); /* call 0x004452A0 */

loc_00446871: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x10000;
    MEM8(esi + 8) = 0x40;
    MEM32(esi + 0x24) = 1;

loc_0044688C: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004468C2; /* je: equal / zero */

loc_00446894: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004468A6; /* je: equal / zero */

loc_00446897: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xDC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_004468A6: ;
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x004468B5u); RECOMP_ABI_CALL(0x00445470u, sub_00445470); /* call 0x00445470 */

loc_004468B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xDC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_004468C2: ;
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x004468D1u); RECOMP_ABI_CALL(0x004453F0u, sub_004453F0); /* call 0x004453F0 */

loc_004468D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xDC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004468E0
 * Original: 0x004468E0 - 0x0044695C (124 bytes, 45 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004468E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004468E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004468E6u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_004468E6: ;
    PUSH32(esp, 0x7F4);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x004468F5u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_004468F5: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446942; /* je: equal / zero */

loc_00446902: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446942; /* je: equal / zero */

loc_00446909: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00446953; /* jl: less (signed <) */

loc_00446910: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00446928; /* jle: less or equal (signed <=) */

loc_00446915: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00446953; /* jne: not equal / not zero */

loc_0044691A: ;
    esi = 1;
    PUSH32(esp, 0x00446924u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446924: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00446928: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00446934u); RECOMP_ABI_CALL(0x004461F0u, sub_004461F0); /* call 0x004461F0 */

loc_00446934: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x0044693Eu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_0044693E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00446942: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0044694Eu); RECOMP_ABI_CALL(0x004461F0u, sub_004461F0); /* call 0x004461F0 */

loc_0044694E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_00446953: ;
    PUSH32(esp, 0x00446958u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446958: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00446960
 * Original: 0x00446960 - 0x004469CF (111 bytes, 41 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00446960: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00446966u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00446966: ;
    PUSH32(esp, 0xC00);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00446975u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00446975: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004469B8; /* je: equal / zero */

loc_00446982: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004469A1; /* je: equal / zero */

loc_00446987: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00446995; /* je: equal / zero */

loc_0044698C: ;
    PUSH32(esp, 0x00446991u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446991: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00446995: ;
    esi = MEM32(ecx + 0x4C);
    PUSH32(esp, 0x0044699Du); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_0044699D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004469A1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004469AAu); RECOMP_ABI_CALL(0x00445F80u, sub_00445F80); /* call 0x00445F80 */

loc_004469AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x004469B4u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004469B4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004469B8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004469C1u); RECOMP_ABI_CALL(0x004345C0u, sub_004345C0); /* call 0x004345C0 */

loc_004469C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x004469CBu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004469CB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004469D0
 * Original: 0x004469D0 - 0x00446A16 (70 bytes, 20 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004469D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004469D0: ;
    PUSH32(esp, 0x004469D5u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_004469D5: ;
    PUSH32(esp, 0xCFD);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x004469E4u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_004469E4: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x10);
    MEM32(ecx + 0x60) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x64) = edx;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00446A08u); RECOMP_ABI_CALL(0x00446080u, sub_00446080); /* call 0x00446080 */

loc_00446A08: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00446A10u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446A10: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00446A20
 * Original: 0x00446A20 - 0x00446AA0 (128 bytes, 45 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00446A20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446A9D; /* je: equal / zero */

loc_00446A2C: ;
    PUSH32(esp, 0x00446A31u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00446A31: ;
    PUSH32(esp, 0xDBF);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00446A40u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00446A40: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00446A6A; /* je: equal / zero */

loc_00446A49: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00446A5D; /* je: equal / zero */

loc_00446A4E: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00446A96; /* jne: not equal / not zero */

loc_00446A53: ;
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00444F00(); return; /* tail jmp 0x00444F00 */

loc_00446A5D: ;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00444F00(); return; /* tail jmp 0x00444F00 */

loc_00446A6A: ;
    PUSH32(esp, 0x00446A6Fu); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00446A6F: ;
    PUSH32(esp, 0xDD9);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00446A7Eu); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00446A7E: ;
    ecx = MEM32(0x5B11C0);
    eax = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00446A8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00446A8Bu); } /* indirect call */
    }

loc_00446A8E: ;
    MEM32(esi + 0x50) = edi;
    PUSH32(esp, 0x00446A96u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446A96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00444F00(); return; /* tail jmp 0x00444F00 */

loc_00446A9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00446AA0
 * Original: 0x00446AA0 - 0x00446B25 (133 bytes, 53 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00446AA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00446AA8u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00446AA8: ;
    PUSH32(esp, 0xEBC);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00446AB7u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00446AB7: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00446AC9; /* jne: not equal / not zero */

loc_00446AC0: ;
    PUSH32(esp, 0x00446AC5u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446AC5: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

loc_00446AC9: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00446AE2u); RECOMP_ABI_CALL(0x004463E0u, sub_004463E0); /* call 0x004463E0 */

loc_00446AE2: ;
    esi = MEM32(esi + 0x84);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446B19; /* je: equal / zero */

loc_00446AEC: ;
    /* nop */

loc_00446AF0: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446B12; /* je: equal / zero */

loc_00446AF7: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446B12; /* je: equal / zero */

loc_00446AFE: ;
    edx = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    ecx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00446B12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00446B0Fu); } /* indirect call */
    }

loc_00446B12: ;
    esi = MEM32(esi + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00446AF0; /* jne: not equal / not zero */

loc_00446B19: ;
    PUSH32(esp, 0x00446B1Eu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446B1E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00446B30
 * Original: 0x00446B30 - 0x00446BE6 (182 bytes, 64 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00446B30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00446B3Bu); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00446B3B: ;
    PUSH32(esp, 0xF43);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00446B4Au); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00446B4A: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00446B5F; /* jne: not equal / not zero */

loc_00446B53: ;
    PUSH32(esp, 0x00446B58u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446B58: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00446B5F: ;
    ecx = MEM32(0x5B11C0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edx = esp + 0xC;
    MEM32(esp + 0xC) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00446B7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00446B7Au); } /* indirect call */
    }

loc_00446B7D: ;
    ecx = MEM32(0x5B11C0);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446BA5; /* je: equal / zero */

loc_00446B89: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00446B8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00446B8Bu); } /* indirect call */
    }

loc_00446B8E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00446BA5; /* jne: not equal / not zero */

loc_00446B94: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x573214);
    PUSH32(esp, 8);
    PUSH32(esp, 0x00446BA2u); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_00446BA2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00446BA5: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = edi + 4;
    PUSH32(esp, 0x00446BB8u); RECOMP_ABI_CALL(0x0044B1C0u, sub_0044B1C0); /* call 0x0044B1C0 */

loc_00446BB8: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00446BBFu); RECOMP_ABI_CALL(0x0044D960u, sub_0044D960); /* call 0x0044D960 */

loc_00446BBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446BD9; /* je: equal / zero */

loc_00446BC3: ;
    ecx = MEM32(0x5B11C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446BD9; /* je: equal / zero */

loc_00446BCD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00446BD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00446BCFu); } /* indirect call */
    }

loc_00446BD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00446BD9; /* jne: not equal / not zero */

loc_00446BD7: ;
    esi = eax;

loc_00446BD9: ;
    PUSH32(esp, 0x00446BDEu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446BDE: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00446BF0
 * Original: 0x00446BF0 - 0x00446C44 (84 bytes, 28 insns)
 * Folder: sound (between: 0x00446B30 and 0x00446C50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00446BF0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(0x5B11C8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00446C08u); RECOMP_ABI_CALL(0x000D40E0u, sub_000D40E0); /* call 0x000D40E0 */

loc_00446C08: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446C1E; /* je: equal / zero */

loc_00446C0F: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = esi;
    MEM32(0x5B11CC) = MEM32(0x5B11CC) + 1;
    _fa = (uint32_t)(MEM32(0x5B11CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00446C1E: ;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = ebx;
    ecx = MEM32(0x5B11C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00446C39; /* je: equal / zero */

loc_00446C31: ;
    MEM32(ecx) = eax;
    MEM32(0x5B11C8) = eax;
    esp += 4; return; /* ret */

loc_00446C39: ;
    MEM32(0x5B11C4) = eax;
    MEM32(0x5B11C8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00446C50
 * Original: 0x00446C50 - 0x00446CC3 (115 bytes, 39 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00446C50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00446C56u); RECOMP_ABI_CALL(0x00444BF0u, sub_00444BF0); /* call 0x00444BF0 */

loc_00446C56: ;
    PUSH32(esp, 0xA57);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00446C65u); RECOMP_ABI_CALL(0x00444BC0u, sub_00444BC0); /* call 0x00444BC0 */

loc_00446C65: ;
    eax = MEM32(0x5B11CC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446CBD; /* je: equal / zero */

loc_00446C73: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00446C75: ;
    eax = MEM32(0x5B11C4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    esi = MEM32(eax + 8);
    edi = MEM32(eax + 0xC);
    MEM32(0x5B11C4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00446C91; /* je: equal / zero */

loc_00446C8C: ;
    MEM32(ecx + 4) = ebx;
    goto loc_00446C97;

loc_00446C91: ;
    MEM32(0x5B11C8) = ebx;

loc_00446C97: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00446C9Du); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_00446C9D: ;
    eax = MEM32(0x5B11CC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edi;
    MEM32(0x5B11CC) = eax;
    eax = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00446CAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00446CADu); } /* indirect call */
    }

loc_00446CAF: ;
    eax = MEM32(0x5B11CC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00446C75; /* jne: not equal / not zero */

loc_00446CBB: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00446CBD: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00444E20(); return; /* tail jmp 0x00444E20 */

}

/**
 * sub_00446CD0
 * Original: 0x00446CD0 - 0x00446D42 (114 bytes, 40 insns)
 * Folder: sound (between: 0x00446C50 and 0x00446D50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00446CD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x5B11C4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446D3D; /* je: equal / zero */

loc_00446CDE: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);

loc_00446CE3: ;
    ecx = esi;
    edx = MEM32(ecx + 8);
    MEM32(esp + 8) = edx;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edi (32-bit) */
    eax = esi;
    esi = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_00446D38; /* jne: not equal / not zero */

loc_00446CF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5B11C4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x5B11C4) (32-bit) */
    ecx = MEM32(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00446D07; /* jne: not equal / not zero */

loc_00446CFF: ;
    MEM32(0x5B11C4) = ecx;
    goto loc_00446D0C;

loc_00446D07: ;
    edx = MEM32(eax + 4);
    MEM32(edx) = ecx;

loc_00446D0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5B11C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x5B11C8) (32-bit) */
    edx = MEM32(eax + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00446D1F; /* jne: not equal / not zero */

loc_00446D17: ;
    MEM32(0x5B11C8) = edx;
    goto loc_00446D24;

loc_00446D1F: ;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = edx;

loc_00446D24: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00446D2Au); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_00446D2A: ;
    eax = MEM32(0x5B11CC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x5B11CC) = eax;

loc_00446D38: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00446CE3; /* jne: not equal / not zero */

loc_00446D3C: ;
    POP32(esp, edi);

loc_00446D3D: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00446D50
 * Original: 0x00446D50 - 0x00446D9E (78 bytes, 27 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00446D50: ;
    PUSH32(esp, 0x00446D55u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00446D55: ;
    PUSH32(esp, 0xBE9);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00446D64u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00446D64: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00446D83; /* je: equal / zero */

loc_00446D71: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00446D83; /* je: equal / zero */

loc_00446D76: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00446D83; /* je: equal / zero */

loc_00446D7B: ;
    PUSH32(esp, 0x00446D80u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446D80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00446D83: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00446D8Au); RECOMP_ABI_CALL(0x00446960u, sub_00446960); /* call 0x00446960 */

loc_00446D8A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00446D90u); RECOMP_ABI_CALL(0x000B3950u, sub_000B3950); /* call 0x000B3950 */

loc_00446D90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x00446D9Au); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446D9A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00446DA0
 * Original: 0x00446DA0 - 0x00446E3E (158 bytes, 61 insns)
 * Folder: sound (between: 0x00446D50 and 0x00446E80)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00446DA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00446E38; /* je: equal / zero */

loc_00446DB7: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00446DC9; /* jne: not equal / not zero */

loc_00446DBD: ;
    eax = MEM32(eax + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00446DC6u); RECOMP_ABI_CALL(0x00446CD0u, sub_00446CD0); /* call 0x00446CD0 */

loc_00446DC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00446DC9: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_00446DDA; /* je: equal / zero */

loc_00446DD3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    goto loc_00446DE2;

loc_00446DDA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFF (32-bit) */

loc_00446DE2: ;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446DF1; /* je: equal / zero */

loc_00446DE9: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00446DF1u); RECOMP_ABI_CALL(0x00446170u, sub_00446170); /* call 0x00446170 */

loc_00446DF1: ;
    esi = MEM32(esi + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00446E29; /* je: equal / zero */

loc_00446DF9: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00446E14; /* je: equal / zero */

loc_00446DFC: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00446E32; /* jne: not equal / not zero */

loc_00446DFF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00446E05u); RECOMP_ABI_CALL(0x0044D650u, sub_0044D650); /* call 0x0044D650 */

loc_00446E05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00446E14: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00446E1Au); RECOMP_ABI_CALL(0x0044CFF0u, sub_0044CFF0); /* call 0x0044CFF0 */

loc_00446E1A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00446E29: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00446E2Fu); RECOMP_ABI_CALL(0x0044CAC0u, sub_0044CAC0); /* call 0x0044CAC0 */

loc_00446E2F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00446E32: ;
    MEM32(edi) = 0;

loc_00446E38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00446E40
 * Original: 0x00446E40 - 0x00446E77 (55 bytes, 25 insns)
 * Folder: sound (between: 0x00446D50 and 0x00446E80)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00446E40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    ebx = ecx;
    esi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00446E65; /* je: equal / zero */

loc_00446E53: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446E65; /* je: equal / zero */

loc_00446E5A: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00446E61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00446E5Eu); } /* indirect call */
    }

loc_00446E61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446E6F; /* je: equal / zero */

loc_00446E65: ;
    PUSH32(esp, edi);
    ecx = ebx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00446E6Fu); RECOMP_ABI_CALL(0x00446DA0u, sub_00446DA0); /* call 0x00446DA0 */

loc_00446E6F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00446E80
 * Original: 0x00446E80 - 0x00446F09 (137 bytes, 42 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00446E80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00446E86u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00446E86: ;
    PUSH32(esp, 0x721);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00446E95u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00446E95: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446EF1; /* je: equal / zero */

loc_00446EA0: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446EF1; /* je: equal / zero */

loc_00446EA7: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = 0x5B11D0;
    if (CMP_EQ(_fa, _fb)) goto loc_00446EC3; /* je: equal / zero */

loc_00446EB4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00446EBDu); RECOMP_ABI_CALL(0x00446DA0u, sub_00446DA0); /* call 0x00446DA0 */

loc_00446EBD: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00444F00(); return; /* tail jmp 0x00444F00 */

loc_00446EC3: ;
    esi = eax + 8;
    eax = MEM32(eax + 0x14);
    MEM32(esi) = 2;
    PUSH32(esp, esi);
    MEM32(eax + 0x1C) = 1;
    PUSH32(esp, 0x00446EDCu); RECOMP_ABI_CALL(0x004461C0u, sub_004461C0); /* call 0x004461C0 */

loc_00446EDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446F03; /* je: equal / zero */

loc_00446EE0: ;
    PUSH32(esp, esi);
    ecx = 0x5B11D0;
    PUSH32(esp, 0x00446EEBu); RECOMP_ABI_CALL(0x00446170u, sub_00446170); /* call 0x00446170 */

loc_00446EEB: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00444F00(); return; /* tail jmp 0x00444F00 */

loc_00446EF1: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446F03; /* je: equal / zero */

loc_00446EFA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00446F00u); RECOMP_ABI_CALL(0x00436770u, sub_00436770); /* call 0x00436770 */

loc_00446F00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00446F03: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00444F00(); return; /* tail jmp 0x00444F00 */

}

/**
 * sub_00446F10
 * Original: 0x00446F10 - 0x00446F86 (118 bytes, 43 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00446F10: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00446F16u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00446F16: ;
    PUSH32(esp, 0x7D1);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00446F25u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00446F25: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446F6E; /* je: equal / zero */

loc_00446F30: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446F6E; /* je: equal / zero */

loc_00446F37: ;
    PUSH32(esp, esi);
    esi = eax + 8;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    edi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00446F57; /* je: equal / zero */

loc_00446F45: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446F57; /* je: equal / zero */

loc_00446F4C: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00446F53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00446F50u); } /* indirect call */
    }

loc_00446F53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446F64; /* je: equal / zero */

loc_00446F57: ;
    PUSH32(esp, esi);
    ecx = 0x5B11D0;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00446F64u); RECOMP_ABI_CALL(0x00446DA0u, sub_00446DA0); /* call 0x00446DA0 */

loc_00446F64: ;
    POP32(esp, esi);
    PUSH32(esp, 0x00446F6Au); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446F6A: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00446F6E: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00446F78u); RECOMP_ABI_CALL(0x004367E0u, sub_004367E0); /* call 0x004367E0 */

loc_00446F78: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x00446F82u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00446F82: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00446F90
 * Original: 0x00446F90 - 0x00446FFD (109 bytes, 43 insns)
 * Folder: sound (between: 0x00446F10 and 0x004470E0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00446F90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(esi + 0x20);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00446FA7; /* je: equal / zero */

loc_00446FA1: ;
    edi = MEM32(esi + 0x24);
    MEM32(eax + 0x24) = edi;

loc_00446FA7: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446FB4; /* je: equal / zero */

loc_00446FAE: ;
    edi = MEM32(esi + 0x20);
    MEM32(eax + 0x20) = edi;

loc_00446FB4: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00446FD8; /* je: equal / zero */

loc_00446FBB: ;
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00446FCA; /* jne: not equal / not zero */

loc_00446FC5: ;
    edi = MEM32(esi + 0x20);
    MEM32(eax) = edi;

loc_00446FCA: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00446FD8; /* jne: not equal / not zero */

loc_00446FD2: ;
    edi = MEM32(esi + 0x24);
    MEM32(eax + 4) = edi;

loc_00446FD8: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edx (32-bit) */
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x24) = edx;
    MEM32(esi + 0x28) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00446FEF; /* je: equal / zero */

loc_00446FE6: ;
    edx = esi + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00446FEFu); RECOMP_ABI_CALL(0x00446DA0u, sub_00446DA0); /* call 0x00446DA0 */

loc_00446FEF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00446FF5u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_00446FF5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00447000
 * Original: 0x00447000 - 0x00447044 (68 bytes, 28 insns)
 * Folder: sound (between: 0x00446F10 and 0x004470E0)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00447000: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0044703D; /* je: equal / zero */

loc_0044700F: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00447021u); RECOMP_ABI_CALL(0x00446100u, sub_00446100); /* call 0x00446100 */

loc_00447021: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00447035; /* je: equal / zero */

loc_00447025: ;
    POP32(esp, edi);
    MEM32(esi) = 1;
    eax = 1;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00447035: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0044703Du); RECOMP_ABI_CALL(0x00446DA0u, sub_00446DA0); /* call 0x00446DA0 */

loc_0044703D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00447050
 * Original: 0x00447050 - 0x004470D7 (135 bytes, 59 insns)
 * Folder: sound (between: 0x00446F10 and 0x004470E0)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00447050: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00447075; /* je: equal / zero */

loc_00447063: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00447075; /* je: equal / zero */

loc_0044706A: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00447071u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044706Eu); } /* indirect call */
    }

loc_00447071: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044707F; /* je: equal / zero */

loc_00447075: ;
    PUSH32(esp, esi);
    ecx = ebx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0044707Fu); RECOMP_ABI_CALL(0x00446DA0u, sub_00446DA0); /* call 0x00446DA0 */

loc_0044707F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004470B6; /* je: equal / zero */

loc_00447083: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044709F; /* je: equal / zero */

loc_0044708A: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00447097u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00447094u); } /* indirect call */
    }

loc_00447097: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0044709F: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004470ADu); RECOMP_ABI_CALL(0x00435EB0u, sub_00435EB0); /* call 0x00435EB0 */

loc_004470AD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_004470B6: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004470CF; /* jne: not equal / not zero */

loc_004470BC: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004470CF; /* je: equal / zero */

loc_004470C3: ;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004470CCu); RECOMP_ABI_CALL(0x00446CD0u, sub_00446CD0); /* call 0x00446CD0 */

loc_004470CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004470CF: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004470E0
 * Original: 0x004470E0 - 0x0044715A (122 bytes, 42 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004470E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004470E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004470E8u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_004470E8: ;
    PUSH32(esp, 0x614);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x004470F7u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_004470F7: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00447151; /* je: equal / zero */

loc_00447100: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00447151; /* je: equal / zero */

loc_0044710C: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044713A; /* je: equal / zero */

loc_00447113: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044713A; /* je: equal / zero */

loc_0044711A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00447125u); RECOMP_ABI_CALL(0x00446DA0u, sub_00446DA0); /* call 0x00446DA0 */

loc_00447125: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00447131u); RECOMP_ABI_CALL(0x00446F90u, sub_00446F90); /* call 0x00446F90 */

loc_00447131: ;
    PUSH32(esp, 0x00447136u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00447136: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0044713A: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    ecx = esi + 4;
    PUSH32(esp, 0x00447145u); RECOMP_ABI_CALL(0x0044BA20u, sub_0044BA20); /* call 0x0044BA20 */

loc_00447145: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00447151u); RECOMP_ABI_CALL(0x00446F90u, sub_00446F90); /* call 0x00446F90 */

loc_00447151: ;
    PUSH32(esp, 0x00447156u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00447156: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00447160
 * Original: 0x00447160 - 0x004471DE (126 bytes, 47 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00447160: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00447168u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00447168: ;
    PUSH32(esp, 0x6AA);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00447177u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00447177: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0044718B; /* jne: not equal / not zero */

loc_00447180: ;
    PUSH32(esp, 0x00447185u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00447185: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0044718B: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004471D2; /* je: equal / zero */

loc_0044719A: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004471B5; /* je: equal / zero */

loc_004471A1: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004471B5; /* je: equal / zero */

loc_004471A8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004471B3u); RECOMP_ABI_CALL(0x00446E40u, sub_00446E40); /* call 0x00446E40 */

loc_004471B3: ;
    goto loc_004471C0;

loc_004471B5: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    ecx = edi + 4;
    PUSH32(esp, 0x004471C0u); RECOMP_ABI_CALL(0x0044B9C0u, sub_0044B9C0); /* call 0x0044B9C0 */

loc_004471C0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004471D2; /* jne: not equal / not zero */

loc_004471C6: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x004471D2u); RECOMP_ABI_CALL(0x00446F90u, sub_00446F90); /* call 0x00446F90 */

loc_004471D2: ;
    PUSH32(esp, 0x004471D7u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004471D7: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004471E0
 * Original: 0x004471E0 - 0x00447268 (136 bytes, 51 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004471E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004471E0: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x004471E8u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_004471E8: ;
    PUSH32(esp, 0x6CE);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x004471F7u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_004471F7: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0044720B; /* jne: not equal / not zero */

loc_00447200: ;
    PUSH32(esp, 0x00447205u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00447205: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_0044720B: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0044725C; /* je: equal / zero */

loc_0044721A: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044723A; /* je: equal / zero */

loc_00447221: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044723A; /* je: equal / zero */

loc_00447228: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00447238u); RECOMP_ABI_CALL(0x00447050u, sub_00447050); /* call 0x00447050 */

loc_00447238: ;
    goto loc_0044724A;

loc_0044723A: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi + 4;
    PUSH32(esp, 0x0044724Au); RECOMP_ABI_CALL(0x0044B930u, sub_0044B930); /* call 0x0044B930 */

loc_0044724A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0044725C; /* jne: not equal / not zero */

loc_00447250: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0044725Cu); RECOMP_ABI_CALL(0x00446F90u, sub_00446F90); /* call 0x00446F90 */

loc_0044725C: ;
    PUSH32(esp, 0x00447261u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00447261: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00447270
 * Original: 0x00447270 - 0x004472F7 (135 bytes, 49 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00447270: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00447277u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00447277: ;
    PUSH32(esp, 0x6FA);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00447286u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00447286: ;
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004472CD; /* je: equal / zero */

loc_00447294: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004472CD; /* je: equal / zero */

loc_0044729B: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    MEM32(eax + 0x1C) = 0;
    PUSH32(esp, edx);
    eax = esi + 8;
    PUSH32(esp, eax);
    ecx = 0x5B11D0;
    PUSH32(esp, 0x004472BDu); RECOMP_ABI_CALL(0x00447000u, sub_00447000); /* call 0x00447000 */

loc_004472BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004472ED; /* je: equal / zero */

loc_004472C1: ;
    edi = esi;
    PUSH32(esp, 0x004472C8u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004472C8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004472CD: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004472E8u); RECOMP_ABI_CALL(0x00436680u, sub_00436680); /* call 0x00436680 */

loc_004472E8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_004472ED: ;
    PUSH32(esp, 0x004472F2u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004472F2: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00447300
 * Original: 0x00447300 - 0x00447362 (98 bytes, 34 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00447300: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00447306u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00447306: ;
    PUSH32(esp, 0x74C);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00447315u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00447315: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00447345; /* je: equal / zero */

loc_00447320: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00447345; /* je: equal / zero */

loc_00447327: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x5B11D0;
    PUSH32(esp, 0x0044733Au); RECOMP_ABI_CALL(0x00447050u, sub_00447050); /* call 0x00447050 */

loc_0044733A: ;
    esi = eax;
    PUSH32(esp, 0x00447341u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00447341: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00447345: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00447354u); RECOMP_ABI_CALL(0x00436A60u, sub_00436A60); /* call 0x00436A60 */

loc_00447354: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x0044735Eu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_0044735E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00447370
 * Original: 0x00447370 - 0x00447541 (465 bytes, 156 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447370: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0044737Eu); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_0044737E: ;
    PUSH32(esp, 0xA96);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x0044738Du); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_0044738D: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00447441; /* je: equal / zero */

loc_0044739A: ;
    eax = MEM32(esp + 0x410);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00447441; /* je: equal / zero */

loc_004473AB: ;
    edx = MEM32(eax + 4);
    ecx = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004473FC; /* jne: not equal / not zero */

loc_004473B7: ;
    edx = MEM32(eax + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004473FC; /* jne: not equal / not zero */

loc_004473BE: ;
    eax = MEM32(eax);
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, 0x573248);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004473DBu); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_004473DB: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004473E7u); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_004473E7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004473EFu); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_004473EF: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_004473FC: ;
    edx = MEM32(esp + 0x414);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00447453; /* je: equal / zero */

loc_00447409: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00447453; /* jne: not equal / not zero */

loc_0044740E: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00447453; /* jne: not equal / not zero */

loc_00447415: ;
    eax = MEM32(eax);
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, 0x573158);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00447432u); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00447432: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0044743Eu); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_0044743E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00447441: ;
    PUSH32(esp, 0x00447446u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00447446: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_00447453: ;
    ecx = MEM32(esp + 0x41C);
    edx = MEM32(esp + 0x40C);
    eax = MEM32(edx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x41C);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00447476u); RECOMP_ABI_CALL(0x004466E0u, sub_004466E0); /* call 0x004466E0 */

loc_00447476: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00447494; /* jne: not equal / not zero */

loc_00447480: ;
    PUSH32(esp, 0x00447485u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00447485: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_00447494: ;
    ecx = MEM32(esp + 0x42C);
    edx = MEM32(esp + 0x41C);
    eax = MEM32(esp + 0x418);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x41C);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ebp = esi + 8;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x004474C1u); RECOMP_ABI_CALL(0x00445A50u, sub_00445A50); /* call 0x00445A50 */

loc_004474C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044750C; /* je: equal / zero */

loc_004474C5: ;
    eax = MEM32(esi + 0x18);
    edx = MEM32(esp + 0x428);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 0x41C);
    if (CMP_EQ(_fa, _fb)) goto loc_004474E6; /* je: equal / zero */

loc_004474DA: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x004474E4u); RECOMP_ABI_CALL(0x00447000u, sub_00447000); /* call 0x00447000 */

loc_004474E4: ;
    goto loc_00447508;

loc_004474E6: ;
    ecx = MEM32(esp + 0x42C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi + 4;
    PUSH32(esp, 0x004474FCu); RECOMP_ABI_CALL(0x0044B7F0u, sub_0044B7F0); /* call 0x0044B7F0 */

loc_004474FC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi) = eax;
    eax = edx;

loc_00447508: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0044752D; /* jne: not equal / not zero */

loc_0044750C: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00447518u); RECOMP_ABI_CALL(0x00446F90u, sub_00446F90); /* call 0x00446F90 */

loc_00447518: ;
    PUSH32(esp, 0x0044751Du); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_0044751D: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_0044752D: ;
    PUSH32(esp, 0x00447532u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00447532: ;
    POP32(esp, ebp);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00447550
 * Original: 0x00447550 - 0x00447555 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447370 and 0x00447570)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447550: ;
    g_seh_ebp = ebp; sub_004471E0(); return; /* tail jmp 0x004471E0 */

}

/**
 * sub_00447560
 * Original: 0x00447560 - 0x00447565 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447370 and 0x00447570)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447560: ;
    g_seh_ebp = ebp; sub_004470E0(); return; /* tail jmp 0x004470E0 */

}

/**
 * sub_00447570
 * Original: 0x00447570 - 0x0044766C (252 bytes, 103 insns)
 * Folder: sound (source: sndmanager.cpp)
 * Category: game_vehicle
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447570: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00447578u); RECOMP_ABI_CALL(0x00444E50u, sub_00444E50); /* call 0x00444E50 */

loc_00447578: ;
    PUSH32(esp, 0x3F2);
    PUSH32(esp, 0x5730B0);
    PUSH32(esp, 0x00447587u); RECOMP_ABI_CALL(0x00444F20u, sub_00444F20); /* call 0x00444F20 */

loc_00447587: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0044759C; /* jne: not equal / not zero */

loc_00447590: ;
    PUSH32(esp, 0x00447595u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00447595: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_0044759C: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = MEM32(ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x004475B7u); RECOMP_ABI_CALL(0x004466E0u, sub_004466E0); /* call 0x004466E0 */

loc_004475B7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0044764F; /* je: equal / zero */

loc_004475C5: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044761C; /* je: equal / zero */

loc_004475CC: ;
    PUSH32(esp, ebp);
    eax = esi + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004475D9u); RECOMP_ABI_CALL(0x00446800u, sub_00446800); /* call 0x00446800 */

loc_004475D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00447643; /* je: equal / zero */

loc_004475DD: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004475F7; /* je: equal / zero */

loc_004475E4: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esi + 8;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004475F5u); RECOMP_ABI_CALL(0x00447000u, sub_00447000); /* call 0x00447000 */

loc_004475F5: ;
    goto loc_0044763F;

loc_004475F7: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    ecx = edi + 4;
    PUSH32(esp, 0x0044760Eu); RECOMP_ABI_CALL(0x0044B7F0u, sub_0044B7F0); /* call 0x0044B7F0 */

loc_0044760E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi) = eax;
    eax = ecx;
    goto loc_0044763F;

loc_0044761C: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi + 4;
    PUSH32(esp, 0x00447633u); RECOMP_ABI_CALL(0x0044B7F0u, sub_0044B7F0); /* call 0x0044B7F0 */

loc_00447633: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi) = eax;
    eax = edx;

loc_0044763F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0044765E; /* jne: not equal / not zero */

loc_00447643: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0044764Fu); RECOMP_ABI_CALL(0x00446F90u, sub_00446F90); /* call 0x00446F90 */

loc_0044764F: ;
    PUSH32(esp, 0x00447654u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00447654: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_0044765E: ;
    PUSH32(esp, 0x00447663u); RECOMP_ABI_CALL(0x00444F00u, sub_00444F00); /* call 0x00444F00 */

loc_00447663: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00447670
 * Original: 0x00447670 - 0x004476FF (143 bytes, 41 insns)
 * Folder: sound (between: 0x00447570 and 0x00447BE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00447670: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x5B1290;

loc_00447677: ;
    edx = MEM32(eax + -32);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004476AD; /* jne: not equal / not zero */

loc_0044767E: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004476A2; /* jne: not equal / not zero */

loc_00447683: ;
    edx = MEM32(eax + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004476A5; /* jne: not equal / not zero */

loc_0044768A: ;
    edx = MEM32(eax + 0x40);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004476AA; /* jne: not equal / not zero */

loc_00447691: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5B3290) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5B3290 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00447677; /* jl: less (signed <) */

loc_004476A0: ;
    goto loc_004476AD;

loc_004476A2: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004476AD;

loc_004476A5: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004476AD;

loc_004476AA: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004476AD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004476CA; /* jne: not equal / not zero */

loc_004476B5: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x57FF62);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0x004476C3u); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_004476C3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_004476CA: ;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 1;
    eax = ecx + 0x5B1270;
    MEM32(ecx + 0x5B1280) = 0x4902385;
    MEM32(ecx + 0x5B1274) = edx;
    MEM32(eax) = 0;
    MEM32(ecx + 0x5B1278) = edx;
    MEM32(ecx + 0x5B1284) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_00447700
 * Original: 0x00447700 - 0x00447741 (65 bytes, 19 insns)
 * Folder: sound (between: 0x00447570 and 0x00447BE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00447700: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_00447730; /* je: equal / zero */

loc_0044770D: ;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x18) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = 1;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

loc_00447730: ;
    MEM32(eax + 0x10) = 0;
    MEM32(eax) = 1;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00447750
 * Original: 0x00447750 - 0x0044783F (239 bytes, 106 insns)
 * Folder: sound (between: 0x00447570 and 0x00447BE0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447750: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(edi + 4) = ecx;
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00447826; /* ja: above (unsigned >) */

loc_0044776F: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x447840); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00447776u) goto loc_00447776;
    if (_jt == 0x0044778Du) goto loc_0044778D;
    if (_jt == 0x004477A4u) goto loc_004477A4;
    if (_jt == 0x004477BBu) goto loc_004477BB;
    if (_jt == 0x004477D7u) goto loc_004477D7;
    if (_jt == 0x004477EEu) goto loc_004477EE;
    if (_jt == 0x00447805u) goto loc_00447805;
    if (_jt == 0x0044781Cu) goto loc_0044781C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00447776: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00447782u); RECOMP_ABI_CALL(0x0044F0E0u, sub_0044F0E0); /* call 0x0044F0E0 */

loc_00447782: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0044778D: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00447799u); RECOMP_ABI_CALL(0x0044E6B0u, sub_0044E6B0); /* call 0x0044E6B0 */

loc_00447799: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004477A4: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004477B0u); RECOMP_ABI_CALL(0x0044EC20u, sub_0044EC20); /* call 0x0044EC20 */

loc_004477B0: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004477BB: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004477CCu); RECOMP_ABI_CALL(0x00448A90u, sub_00448A90); /* call 0x00448A90 */

loc_004477CC: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004477D7: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004477E3u); RECOMP_ABI_CALL(0x0044E2C0u, sub_0044E2C0); /* call 0x0044E2C0 */

loc_004477E3: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004477EE: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004477FAu); RECOMP_ABI_CALL(0x0044F740u, sub_0044F740); /* call 0x0044F740 */

loc_004477FA: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00447805: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00447811u); RECOMP_ABI_CALL(0x00448AA0u, sub_00448AA0); /* call 0x00448AA0 */

loc_00447811: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0044781C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00447826: ;
    PUSH32(esp, 0x57FF62);
    PUSH32(esp, 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00447834u); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00447834: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00447860
 * Original: 0x00447860 - 0x004478ED (141 bytes, 48 insns)
 * Folder: sound (between: 0x00447570 and 0x00447BE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00447860: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00447868u); RECOMP_ABI_CALL(0x000D40E0u, sub_000D40E0); /* call 0x000D40E0 */

loc_00447868: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00447887; /* jne: not equal / not zero */

loc_00447871: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x572864);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0044787Fu); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_0044787F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00447887: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    MEM32(esi) = eax;
    MEM32(esi + 8) = 0;
    MEM32(esi + 4) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 1 (32-bit) */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004478D6; /* jne: not equal / not zero */

loc_004478B1: ;
    MEM32(eax + 4) = 1;
    PUSH32(esp, 0x004478BDu); RECOMP_ABI_CALL(0x00448A70u, sub_00448A70); /* call 0x00448A70 */

loc_004478BD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004478E9; /* jne: not equal / not zero */

loc_004478C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004478CEu); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_004478CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004478D6: ;
    PUSH32(esp, 0x004478DBu); RECOMP_ABI_CALL(0x00447750u, sub_00447750); /* call 0x00447750 */

loc_004478DB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004478C8; /* je: equal / zero */

loc_004478E2: ;
    MEM32(esi + 8) = 1;

loc_004478E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004478F0
 * Original: 0x004478F0 - 0x00447960 (112 bytes, 46 insns)
 * Folder: sound (between: 0x00447570 and 0x00447BE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004478F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004478F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044795C; /* je: equal / zero */

loc_004478F9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044795C; /* je: equal / zero */

loc_004478FE: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0044794C; /* jne: not equal / not zero */

loc_00447905: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0044790Fu); RECOMP_ABI_CALL(0x00448A80u, sub_00448A80); /* call 0x00448A80 */

loc_0044790F: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00447947; /* je: equal / zero */

loc_00447919: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00447935; /* jne: not equal / not zero */

loc_0044791E: ;
    ecx = MEM32(esi);
    PUSH32(esp, esi);
    MEM32(ecx + 0xC) = 1;
    PUSH32(esp, 0x0044792Du); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_0044792D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00447935: ;
    edx = MEM32(esi);
    PUSH32(esp, esi);
    MEM32(edx + 0xC) = 0;
    PUSH32(esp, 0x00447944u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_00447944: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00447947: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0044794C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00447952u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_00447952: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0044795C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00447960
 * Original: 0x00447960 - 0x00447983 (35 bytes, 15 insns)
 * Folder: sound (between: 0x00447570 and 0x00447BE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00447960: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00447970; /* je: equal / zero */

loc_0044796B: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00447979; /* jne: not equal / not zero */

loc_00447970: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00447976u); RECOMP_ABI_CALL(0x00448AB0u, sub_00448AB0); /* call 0x00448AB0 */

loc_00447976: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00447979: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00447990
 * Original: 0x00447990 - 0x00447A23 (147 bytes, 56 insns)
 * Folder: sound (between: 0x00447570 and 0x00447BE0)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00447990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00447990: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x5B3274);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00447A1C; /* je: equal / zero */

loc_004479AA: ;
    esi = 0x5B1288;
    /* nop */

loc_004479B0: ;
    _fa = (uint32_t)(MEM32(esi + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -24), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00447A11; /* jne: not equal / not zero */

loc_004479B5: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00447A11; /* jne: not equal / not zero */

loc_004479BC: ;
    _fa = (uint32_t)(MEM32(esi + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -20), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00447A11; /* je: equal / zero */

loc_004479C1: ;
    _fa = (uint32_t)(MEM32(esi + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -12), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00447A11; /* jne: not equal / not zero */

loc_004479C6: ;
    MEM8(esp + 0x10) = LO8(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xFF;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(edx);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x5732D0);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004479ECu); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_004479EC: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004479F8u); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_004479F8: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 4);
    edx = MEM32(esi + -4);
    ecx = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x5936B4); PUSH32(esp, 0x00447A0Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00447A04u); } /* indirect call */
    }

loc_00447A0B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + -20) = ebx;

loc_00447A11: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5B3288) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5B3288 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004479B0; /* jl: less (signed <) */

loc_00447A1C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00447A30
 * Original: 0x00447A30 - 0x00447A9C (108 bytes, 26 insns)
 * Folder: sound (between: 0x00447570 and 0x00447BE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00447A30: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x5B1280;
    goto loc_00447A40;

    /* nop */

loc_00447A40: ;
    MEM32(eax + -16) = 1;
    MEM32(eax) = 0;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5B3280) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5B3280 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00447A40; /* jl: less (signed <) */

loc_00447A57: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00447A61u); RECOMP_ABI_CALL(0x00448930u, sub_00448930); /* call 0x00448930 */

loc_00447A61: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(0x5B3270) = eax;
    PUSH32(esp, 0x00447A70u); RECOMP_ABI_CALL(0x00442FE0u, sub_00442FE0); /* call 0x00442FE0 */

loc_00447A70: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00447A7Au); RECOMP_ABI_CALL(0x00448AC0u, sub_00448AC0); /* call 0x00448AC0 */

loc_00447A7A: ;
    PUSH32(esp, 0x00447A7Fu); RECOMP_ABI_CALL(0x0044E430u, sub_0044E430); /* call 0x0044E430 */

loc_00447A7F: ;
    PUSH32(esp, 0x00447A84u); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_00447A84: ;
    PUSH32(esp, 0x00447A89u); RECOMP_ABI_CALL(0x0044F200u, sub_0044F200); /* call 0x0044F200 */

loc_00447A89: ;
    eax = MEM32(0x5B3270);
    MEM32(0x5B3274) = 1;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00447AA0
 * Original: 0x00447AA0 - 0x00447AB6 (22 bytes, 9 insns)
 * Folder: sound (between: 0x00447570 and 0x00447BE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00447AA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00447AABu); RECOMP_ABI_CALL(0x00442F70u, sub_00442F70); /* call 0x00442F70 */

loc_00447AAB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00447AB1u); RECOMP_ABI_CALL(0x00448AC0u, sub_00448AC0); /* call 0x00448AC0 */

loc_00447AB1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00447AC0
 * Original: 0x00447AC0 - 0x00447B50 (144 bytes, 55 insns)
 * Folder: sound (between: 0x00447570 and 0x00447BE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447AC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00447B1C; /* ja: above (unsigned >) */

loc_00447ACD: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x447B20); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00447AD4u) goto loc_00447AD4;
    if (_jt == 0x00447ADDu) goto loc_00447ADD;
    if (_jt == 0x00447AE6u) goto loc_00447AE6;
    if (_jt == 0x00447AEFu) goto loc_00447AEF;
    if (_jt == 0x00447AF8u) goto loc_00447AF8;
    if (_jt == 0x00447B01u) goto loc_00447B01;
    if (_jt == 0x00447B0Au) goto loc_00447B0A;
    if (_jt == 0x00447B13u) goto loc_00447B13;
    if (_jt == 0x00447B1Cu) goto loc_00447B1C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00447AD4: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_004489A0(); return; /* tail jmp 0x004489A0 */

loc_00447ADD: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0044F220(); return; /* tail jmp 0x0044F220 */

loc_00447AE6: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0044EE40(); return; /* tail jmp 0x0044EE40 */

loc_00447AEF: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0044E950(); return; /* tail jmp 0x0044E950 */

loc_00447AF8: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0044E470(); return; /* tail jmp 0x0044E470 */

loc_00447B01: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_004489A0(); return; /* tail jmp 0x004489A0 */

loc_00447B0A: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0044DA30(); return; /* tail jmp 0x0044DA30 */

loc_00447B13: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_004489A0(); return; /* tail jmp 0x004489A0 */

loc_00447B1C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(edx, HI8(edx) + HI8(eax));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_flags /* jp: parity */) { g_seh_ebp = ebp; sub_00447B6F(); return; }

loc_00447B2B: ;
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ebx, HI8(ebx) + HI8(ecx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_flags /* jp: parity */) { g_seh_ebp = ebp; sub_00447B73(); return; }

loc_00447B2F: ;
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + HI8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_flags /* jp: parity */) { g_seh_ebp = ebp; sub_00447B77(); return; }

loc_00447B33: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_flags /* jnp: not parity */) { g_seh_ebp = ebp; sub_00447B7B(); return; }

loc_00447B37: ;
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx) = MEM8(edx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_flags /* jnp: not parity */) { g_seh_ebp = ebp; sub_00447B7F(); return; }

loc_00447B3B: ;
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx) = MEM8(ebx) + LO8(edx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_flags /* jnp: not parity */) { g_seh_ebp = ebp; sub_00447B83(); return; }

loc_00447B3F: ;
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + edi * 2) = MEM8(ebx + edi * 2) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ebx + edi * 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
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
 * sub_00447B50
 * Original: 0x00447B50 - 0x00447BE0 (144 bytes, 41 insns)
 * Folder: sound (between: 0x00447570 and 0x00447BE0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447B50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00447BAC; /* ja: above (unsigned >) */

loc_00447B5D: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x447BB8); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00447B64u) goto loc_00447B64;
    if (_jt == 0x00447B6Du) goto loc_00447B6D;
    if (_jt == 0x00447B76u) goto loc_00447B76;
    if (_jt == 0x00447B7Fu) goto loc_00447B7F;
    if (_jt == 0x00447B88u) goto loc_00447B88;
    if (_jt == 0x00447B91u) goto loc_00447B91;
    if (_jt == 0x00447B9Au) goto loc_00447B9A;
    if (_jt == 0x00447BA3u) goto loc_00447BA3;
    if (_jt == 0x00447BB6u) goto loc_00447BB6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00447B64: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00448DD0(); return; /* tail jmp 0x00448DD0 */

loc_00447B6D: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0044F230(); return; /* tail jmp 0x0044F230 */

loc_00447B76: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0044EEA0(); return; /* tail jmp 0x0044EEA0 */

loc_00447B7F: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0044E9B0(); return; /* tail jmp 0x0044E9B0 */

loc_00447B88: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0044E480(); return; /* tail jmp 0x0044E480 */

loc_00447B91: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00448D80(); return; /* tail jmp 0x00448D80 */

loc_00447B9A: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0044DA90(); return; /* tail jmp 0x0044DA90 */

loc_00447BA3: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00448DD0(); return; /* tail jmp 0x00448DD0 */

loc_00447BAC: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = MEM32(eax) | 0x4C4B400;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00447BB6: ;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp + 0x7B) = MEM8(ebp + 0x7B) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebp + 0x7B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + 0x7B) = MEM8(esi + 0x7B) + HI8(edx);
    _fa = (uint32_t)(MEM8(esi + 0x7B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi + 0x7B) = MEM8(edi + 0x7B) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edi + 0x7B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + -1862253445) = MEM8(eax + -1862253445) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + -1862253445)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_flags /* jnp: not parity */) { g_seh_ebp = ebp; sub_00447C13(); return; }

loc_00447BCF: ;
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx + -1560263557) = MEM8(edx + -1560263557) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edx + -1560263557)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_flags /* jnp: not parity */) { g_seh_ebp = ebp; sub_00447C1B(); return; }

loc_00447BD7: ;
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + -872397701) = MEM8(esi + -872397701) + HI8(edx);
    _fa = (uint32_t)(MEM8(esi + -872397701)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00447B6B
 * Original: 0x00447B6B - 0x00447B76 (11 bytes, 3 insns)
 * Folder: sound (between: 0x00447570 and 0x00447BE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447B6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447B6B: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0044F230(); return; /* tail jmp 0x0044F230 */

}

/**
 * sub_00447B6F
 * Original: 0x00447B6F - 0x00447B76 (7 bytes, 2 insns)
 * Folder: sound (between: 0x00447570 and 0x00447BE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447B6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447B6F: ;
    SET_LO8(eax, LO8(eax) & 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_0044F230(); return; /* tail jmp 0x0044F230 */

}

/**
 * sub_00447B7B
 * Original: 0x00447B7B - 0x00447B9A (31 bytes, 8 insns)
 * Folder: sound (between: 0x00447570 and 0x00447BE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447B7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447B7B: ;
    MEM32(ebx) = MEM32(ebx) & esi;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + -385604540) = MEM8(ecx + -385604540) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + -385604540)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    MEM8(esi) = MEM8(esi) - HI8(ecx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + -385604540) = MEM8(ecx + -385604540) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + -385604540)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("out dx, eax", 0x00447B8Du); /* TODO: out dx, eax */
    PUSH32(esp, 0x44890000);
    SET_LO8(eax, LO8(eax) & 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_00448D80(); return; /* tail jmp 0x00448D80 */

}

/**
 * sub_00447BE0
 * Original: 0x00447BE0 - 0x00447DDF (511 bytes, 235 insns)
 * Folder: sound (string: Invalid type of ressource in SND_fn_vPlaySnd)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00447BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00447BE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00447C39; /* jne: not equal / not zero */

loc_00447BF8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 8) = 0;
    ecx = 0x1F;
    edi = esp + 9;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x5733D4);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447C1Fu); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00447C1F: ;
    PUSH32(esp, 3);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447C2Du); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_00447C2D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00447C30: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00447C39: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447C3Eu); RECOMP_ABI_CALL(0x00447670u, sub_00447670); /* call 0x00447670 */

loc_00447C3E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00447C30; /* je: equal / zero */

loc_00447C45: ;
    eax = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00447DBA; /* ja: above (unsigned >) */

loc_00447C52: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x447DE0); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00447C59u) goto loc_00447C59;
    if (_jt == 0x00447C81u) goto loc_00447C81;
    if (_jt == 0x00447CADu) goto loc_00447CAD;
    if (_jt == 0x00447CDDu) goto loc_00447CDD;
    if (_jt == 0x00447D0Du) goto loc_00447D0D;
    if (_jt == 0x00447D35u) goto loc_00447D35;
    if (_jt == 0x00447D61u) goto loc_00447D61;
    if (_jt == 0x00447D89u) goto loc_00447D89;
    if (_jt == 0x00447DB1u) goto loc_00447DB1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00447C59: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447C6Bu); RECOMP_ABI_CALL(0x004489C0u, sub_004489C0); /* call 0x004489C0 */

loc_00447C6B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447C78u); RECOMP_ABI_CALL(0x00447700u, sub_00447700); /* call 0x00447700 */

loc_00447C78: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00447C81: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447C97u); RECOMP_ABI_CALL(0x0044E4C0u, sub_0044E4C0); /* call 0x0044E4C0 */

loc_00447C97: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447CA4u); RECOMP_ABI_CALL(0x00447700u, sub_00447700); /* call 0x00447700 */

loc_00447CA4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00447CAD: ;
    ecx = MEM32(ebp + 0x1C);
    edx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447CC7u); RECOMP_ABI_CALL(0x0044E9F0u, sub_0044E9F0); /* call 0x0044E9F0 */

loc_00447CC7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447CD4u); RECOMP_ABI_CALL(0x00447700u, sub_00447700); /* call 0x00447700 */

loc_00447CD4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00447CDD: ;
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447CF7u); RECOMP_ABI_CALL(0x0044ED50u, sub_0044ED50); /* call 0x0044ED50 */

loc_00447CF7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447D04u); RECOMP_ABI_CALL(0x00447700u, sub_00447700); /* call 0x00447700 */

loc_00447D04: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00447D0D: ;
    edx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447D1Fu); RECOMP_ABI_CALL(0x004489C0u, sub_004489C0); /* call 0x004489C0 */

loc_00447D1F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447D2Cu); RECOMP_ABI_CALL(0x00447700u, sub_00447700); /* call 0x00447700 */

loc_00447D2C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00447D35: ;
    edx = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447D4Bu); RECOMP_ABI_CALL(0x0044DF30u, sub_0044DF30); /* call 0x0044DF30 */

loc_00447D4B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447D58u); RECOMP_ABI_CALL(0x00447700u, sub_00447700); /* call 0x00447700 */

loc_00447D58: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00447D61: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447D73u); RECOMP_ABI_CALL(0x0044F270u, sub_0044F270); /* call 0x0044F270 */

loc_00447D73: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447D80u); RECOMP_ABI_CALL(0x00447700u, sub_00447700); /* call 0x00447700 */

loc_00447D80: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00447D89: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447D9Bu); RECOMP_ABI_CALL(0x004489C0u, sub_004489C0); /* call 0x004489C0 */

loc_00447D9B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447DA8u); RECOMP_ABI_CALL(0x00447700u, sub_00447700); /* call 0x00447700 */

loc_00447DA8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00447DB1: ;
    PUSH32(esp, 0x573390);
    PUSH32(esp, 0x1D);
    goto loc_00447DC1;

loc_00447DBA: ;
    PUSH32(esp, 0x573360);
    PUSH32(esp, 0x18);

loc_00447DC1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447DC6u); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00447DC6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00447DD6u); RECOMP_ABI_CALL(0x00447700u, sub_00447700); /* call 0x00447700 */

loc_00447DD6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00447C13
 * Original: 0x00447C13 - 0x00447C39 (38 bytes, 15 insns)
 * Folder: sound (string: Invalid type of ressource in SND_fn_vPlaySnd)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447C13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447C13: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x68);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    RECOMP_UNIMPL("aam 0x33", 0x00447C15u); /* TODO: aam 0x33 */
    PUSH32(esp, edi);
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + -24)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ecx + -24) = MEM8(ecx + -24) + LO8(edx);
    _fa = (uint32_t)(MEM8(ecx + -24)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _rcv = RC_ROT((uint32_t)(MEM8(ebx + eax)), (unsigned)(0x6A), &_cf, 8, 0);
      MEM8(ebx + eax) = _rcv; } /* rcr */
    _fb = (uint32_t)(MEM32(ebp + 0x52182454)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + 0x52182454))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + 0x52182454);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, 0x00447C2Du); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_00447C2D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00447E10
 * Original: 0x00447E10 - 0x00447E62 (82 bytes, 32 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00447E10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00447E1E; /* je: equal / zero */

loc_00447E1A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00447E1E: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00447E32; /* jne: not equal / not zero */

loc_00447E25: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = eax;
    MEM32(esi) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00447E32: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 4);
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x14);
    ecx = eax + eax * 2;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x5936B0); PUSH32(esp, 0x00447E50u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00447E49u); } /* indirect call */
    }

loc_00447E50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00447E60; /* jne: not equal / not zero */

loc_00447E57: ;
    MEM32(esi + 0x10) = eax;
    MEM32(esi) = 1;

loc_00447E60: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00447E70
 * Original: 0x00447E70 - 0x00447EB8 (72 bytes, 28 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00447E70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00447E7E; /* je: equal / zero */

loc_00447E7A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00447E7E: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00447E92; /* jne: not equal / not zero */

loc_00447E85: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = eax;
    MEM32(esi) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00447E92: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 4);
    edx = MEM32(esi + 0x14);
    ecx = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x5936BC); PUSH32(esp, 0x00447EA6u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00447E9Fu); } /* indirect call */
    }

loc_00447EA6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00447EB6; /* jne: not equal / not zero */

loc_00447EAD: ;
    MEM32(esi + 0x10) = eax;
    MEM32(esi) = 1;

loc_00447EB6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00447EC0
 * Original: 0x00447EC0 - 0x00447EF7 (55 bytes, 18 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00447EC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00447EF5; /* jne: not equal / not zero */

loc_00447ECA: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00447EE8; /* je: equal / zero */

loc_00447ED1: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 4);
    edx = MEM32(esi + 0x14);
    ecx = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x5936B4); PUSH32(esp, 0x00447EE5u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00447EDEu); } /* indirect call */
    }

loc_00447EE5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00447EE8: ;
    MEM32(esi + 0x10) = 0;
    MEM32(esi) = 1;

loc_00447EF5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00447F00
 * Original: 0x00447F00 - 0x00447F2F (47 bytes, 14 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447F00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00447F2E; /* jne: not equal / not zero */

loc_00447F09: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00447F2E; /* je: equal / zero */

loc_00447F10: ;
    ecx = MEM32(eax + 0x18);
    MEM32(eax + 0x1C) = 1;
    ecx = MEM32(ecx + 4);
    eax = MEM32(eax + 0x14);
    edx = ecx + ecx * 2;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 8 + 0x5936A8)); return; /* indirect tail jmp */

loc_00447F2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00447F30
 * Original: 0x00447F30 - 0x00447F5F (47 bytes, 14 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447F30: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00447F5E; /* jne: not equal / not zero */

loc_00447F39: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00447F5E; /* je: equal / zero */

loc_00447F40: ;
    ecx = MEM32(eax + 0x18);
    MEM32(eax + 0x1C) = 0;
    ecx = MEM32(ecx + 4);
    eax = MEM32(eax + 0x14);
    edx = ecx + ecx * 2;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 8 + 0x5936AC)); return; /* indirect tail jmp */

loc_00447F5E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00447F60
 * Original: 0x00447F60 - 0x00447F7E (30 bytes, 7 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447F60: ;
    PUSH32(esp, 0x00447F65u); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_00447F65: ;
    PUSH32(esp, 0x00447F6Au); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_00447F6A: ;
    PUSH32(esp, 0x00447F6Fu); RECOMP_ABI_CALL(0x0044E740u, sub_0044E740); /* call 0x0044E740 */

loc_00447F6F: ;
    _fa = (uint32_t)(MEM32(0x5B3270)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5B3270), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00447F7D; /* jne: not equal / not zero */

loc_00447F78: ;
    g_seh_ebp = ebp; sub_00448990(); return; /* tail jmp 0x00448990 */

loc_00447F7D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00447F80
 * Original: 0x00447F80 - 0x00447F85 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447F80: ;
    g_seh_ebp = ebp; sub_00448B00(); return; /* tail jmp 0x00448B00 */

}

/**
 * sub_00447F90
 * Original: 0x00447F90 - 0x00447F95 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447F90: ;
    g_seh_ebp = ebp; sub_00448B20(); return; /* tail jmp 0x00448B20 */

}

/**
 * sub_00447FA0
 * Original: 0x00447FA0 - 0x00447FA5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447FA0: ;
    g_seh_ebp = ebp; sub_00448B70(); return; /* tail jmp 0x00448B70 */

}

/**
 * sub_00447FB0
 * Original: 0x00447FB0 - 0x00447FB5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447FB0: ;
    g_seh_ebp = ebp; sub_00448B40(); return; /* tail jmp 0x00448B40 */

}

/**
 * sub_00447FC0
 * Original: 0x00447FC0 - 0x00447FC5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447FC0: ;
    g_seh_ebp = ebp; sub_00448BE0(); return; /* tail jmp 0x00448BE0 */

}

/**
 * sub_00447FD0
 * Original: 0x00447FD0 - 0x00447FD5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00447FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00447FD0: ;
    g_seh_ebp = ebp; sub_00448C00(); return; /* tail jmp 0x00448C00 */

}

/**
 * sub_00447FE0
 * Original: 0x00447FE0 - 0x004480F9 (281 bytes, 120 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00447FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00447FE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00448038; /* jne: not equal / not zero */

loc_00447FFB: ;
    MEM8(esp + 0x10) = LO8(eax);
    ecx = 0x1F;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x573448);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0044801Fu); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_0044801F: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0044802Bu); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_0044802B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00448038: ;
    ebx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00448083; /* je: equal / zero */

loc_0044803F: ;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00448083; /* jne: not equal / not zero */

loc_00448044: ;
    MEM8(esp + 0x10) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1F;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x573400);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0044806Au); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_0044806A: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00448076u); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00448076: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00448079: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00448083: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00448088u); RECOMP_ABI_CALL(0x00447670u, sub_00447670); /* call 0x00447670 */

loc_00448088: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00448079; /* je: equal / zero */

loc_0044808F: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004480C7; /* je: equal / zero */

loc_00448097: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004480C7; /* je: equal / zero */

loc_0044809C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004480C7; /* je: equal / zero */

loc_004480A1: ;
    PUSH32(esp, 0x57FF62);
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004480ADu); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_004480AD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004480BDu); RECOMP_ABI_CALL(0x00447700u, sub_00447700); /* call 0x00447700 */

loc_004480BD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_004480C7: ;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(ebp + 0x1C);
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004480E2u); RECOMP_ABI_CALL(0x00448C20u, sub_00448C20); /* call 0x00448C20 */

loc_004480E2: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004480EFu); RECOMP_ABI_CALL(0x00447700u, sub_00447700); /* call 0x00447700 */

loc_004480EF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00448100
 * Original: 0x00448100 - 0x00448142 (66 bytes, 27 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448100: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044810E; /* je: equal / zero */

loc_0044810A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0044810E: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00448122; /* jne: not equal / not zero */

loc_00448115: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = eax;
    MEM32(esi) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00448122: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00448130u); RECOMP_ABI_CALL(0x00448C50u, sub_00448C50); /* call 0x00448C50 */

loc_00448130: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00448140; /* jne: not equal / not zero */

loc_00448137: ;
    MEM32(esi + 0x10) = eax;
    MEM32(esi) = 1;

loc_00448140: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00448150
 * Original: 0x00448150 - 0x00448241 (241 bytes, 96 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00448150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0x18);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00448195; /* je: equal / zero */

loc_0044816D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00448198; /* je: equal / zero */

loc_00448172: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00448195; /* je: equal / zero */

loc_00448177: ;
    PUSH32(esp, 0x57FF62);
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00448183u); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00448183: ;
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x18) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00448195: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */

loc_00448198: ;
    esi = MEM32(ebp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_004481E1; /* jne: not equal / not zero */

loc_0044819D: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004481E1; /* jne: not equal / not zero */

loc_004481A3: ;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004481E1; /* je: equal / zero */

loc_004481AB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x10) = 0;
    ecx = 0xFF;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x5734C8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004481D2u); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_004481D2: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004481DEu); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_004481DE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004481E1: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004481FF; /* je: equal / zero */

loc_004481E8: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004481F2u); RECOMP_ABI_CALL(0x00448C90u, sub_00448C90); /* call 0x00448C90 */

loc_004481F2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x18) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_004481FF: ;
    MEM8(esp + 0x10) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xFF;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    edx = esp + 0x14;
    PUSH32(esp, 0x57348C);
    PUSH32(esp, edx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00448226u); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00448226: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00448232u); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00448232: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ebx + 0x18) = esi;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00448250
 * Original: 0x00448250 - 0x00448255 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448250: ;
    g_seh_ebp = ebp; sub_00448CB0(); return; /* tail jmp 0x00448CB0 */

}

/**
 * sub_00448260
 * Original: 0x00448260 - 0x0044828C (44 bytes, 15 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448260: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0044828A; /* jne: not equal / not zero */

loc_0044826A: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044827D; /* je: equal / zero */

loc_00448271: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0044827Au); RECOMP_ABI_CALL(0x00448CE0u, sub_00448CE0); /* call 0x00448CE0 */

loc_0044827A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0044827D: ;
    MEM32(esi + 0x10) = 0;
    MEM32(esi) = 1;

loc_0044828A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00448290
 * Original: 0x00448290 - 0x004482B4 (36 bytes, 11 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448290: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004482B3; /* jne: not equal / not zero */

loc_00448299: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004482B3; /* je: equal / zero */

loc_004482A0: ;
    MEM32(eax + 0x1C) = 0;
    eax = MEM32(eax + 0x14);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00448D20(); return; /* tail jmp 0x00448D20 */

loc_004482B3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004482C0
 * Original: 0x004482C0 - 0x004482E4 (36 bytes, 11 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004482C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004482C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004482E3; /* jne: not equal / not zero */

loc_004482C9: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004482E3; /* je: equal / zero */

loc_004482D0: ;
    MEM32(eax + 0x1C) = 1;
    eax = MEM32(eax + 0x14);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00448D00(); return; /* tail jmp 0x00448D00 */

loc_004482E3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004482F0
 * Original: 0x004482F0 - 0x00448312 (34 bytes, 11 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004482F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004482F0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    eax = 0xFFFF0000u;
    if (CMP_EQ(_fa, _fb)) goto loc_004482FF; /* je: equal / zero */

loc_004482FE: ;
    esp += 4; return; /* ret */

loc_004482FF: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004482FE; /* je: equal / zero */

loc_00448306: ;
    eax = MEM32(ecx + 0x14);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00448C70(); return; /* tail jmp 0x00448C70 */

}

/**
 * sub_00448320
 * Original: 0x00448320 - 0x0044834D (45 bytes, 14 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448320: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    eax = 0xFFFF0000u;
    if (CMP_EQ(_fa, _fb)) goto loc_0044832F; /* je: equal / zero */

loc_0044832E: ;
    esp += 4; return; /* ret */

loc_0044832F: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044832E; /* je: equal / zero */

loc_00448336: ;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 4);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 0x14);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 8 + 0x5936B8)); return; /* indirect tail jmp */

}

/**
 * sub_00448350
 * Original: 0x00448350 - 0x004483EE (158 bytes, 46 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448350: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00448399; /* je: equal / zero */

loc_0044835C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00448399; /* je: equal / zero */

loc_00448361: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00448399; /* je: equal / zero */

loc_00448366: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00448399; /* je: equal / zero */

loc_0044836B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00448399; /* je: equal / zero */

loc_00448370: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00448399; /* je: equal / zero */

loc_00448375: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00448399; /* je: equal / zero */

loc_0044837A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00448399; /* je: equal / zero */

loc_0044837F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00448399; /* je: equal / zero */

loc_00448384: ;
    PUSH32(esp, 0x57FF62);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00448390u); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00448390: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00448393: ;
    eax = 0xFFFF0000u;
    esp += 4; return; /* ret */

loc_00448399: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00448393; /* ja: above (unsigned >) */

loc_0044839F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x4483F0); /* switch: 8 entries, 8 targets */
    if (_jt == 0x004483A6u) goto loc_004483A6;
    if (_jt == 0x004483AFu) goto loc_004483AF;
    if (_jt == 0x004483B8u) goto loc_004483B8;
    if (_jt == 0x004483C1u) goto loc_004483C1;
    if (_jt == 0x004483CAu) goto loc_004483CA;
    if (_jt == 0x004483D3u) goto loc_004483D3;
    if (_jt == 0x004483DCu) goto loc_004483DC;
    if (_jt == 0x004483E5u) goto loc_004483E5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004483A6: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00448BB0(); return; /* tail jmp 0x00448BB0 */

loc_004483AF: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0044F730(); return; /* tail jmp 0x0044F730 */

loc_004483B8: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0044F720(); return; /* tail jmp 0x0044F720 */

loc_004483C1: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0044F720(); return; /* tail jmp 0x0044F720 */

loc_004483CA: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0044E600(); return; /* tail jmp 0x0044E600 */

loc_004483D3: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00448D90(); return; /* tail jmp 0x00448D90 */

loc_004483DC: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0044DBE0(); return; /* tail jmp 0x0044DBE0 */

loc_004483E5: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00448DE0(); return; /* tail jmp 0x00448DE0 */

}

/**
 * sub_00448410
 * Original: 0x00448410 - 0x00448415 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448410: ;
    g_seh_ebp = ebp; sub_00448BC0(); return; /* tail jmp 0x00448BC0 */

}

/**
 * sub_00448420
 * Original: 0x00448420 - 0x00448425 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448420: ;
    g_seh_ebp = ebp; sub_00448DF0(); return; /* tail jmp 0x00448DF0 */

}

/**
 * sub_00448430
 * Original: 0x00448430 - 0x0044843D (13 bytes, 6 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448430: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00448439; /* jne: not equal / not zero */

loc_00448438: ;
    esp += 4; return; /* ret */

loc_00448439: ;
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00448440
 * Original: 0x00448440 - 0x00448464 (36 bytes, 14 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448440: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0044844B; /* jne: not equal / not zero */

loc_00448448: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0044844B: ;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0044845B; /* je: equal / zero */

loc_00448451: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0044845B; /* je: equal / zero */

loc_00448456: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00448448; /* jne: not equal / not zero */

loc_0044845B: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00448E20(); return; /* tail jmp 0x00448E20 */

}

/**
 * sub_00448470
 * Original: 0x00448470 - 0x0044849A (42 bytes, 14 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448470: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0044848E; /* je: equal / zero */

loc_0044847A: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00448482; /* je: equal / zero */

loc_0044847F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00448482: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00448E50(); return; /* tail jmp 0x00448E50 */

loc_0044848E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00448E40(); return; /* tail jmp 0x00448E40 */

}

/**
 * sub_004484A0
 * Original: 0x004484A0 - 0x004484E2 (66 bytes, 27 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004484A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004484A0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004484BAu); RECOMP_ABI_CALL(0x00447860u, sub_00447860); /* call 0x00447860 */

loc_004484BA: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004484DE; /* je: equal / zero */

loc_004484C4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004484CAu); RECOMP_ABI_CALL(0x004478F0u, sub_004478F0); /* call 0x004478F0 */

loc_004484CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004484C4; /* je: equal / zero */

loc_004484D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004484DE; /* jne: not equal / not zero */

loc_004484D7: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004484DE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004484F0
 * Original: 0x004484F0 - 0x0044851F (47 bytes, 21 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004484F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004484F0: ;
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x7F;

loc_004484F8: ;
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax * 4 + 0x593798)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x593798), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00448510; /* jge: greater or equal (signed >=) */

loc_0044850C: ;
    esi = eax;
    goto loc_00448512;

loc_00448510: ;
    ecx = eax;

loc_00448512: ;
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004484F8; /* jg: greater (signed >) */

loc_0044851B: ;
    eax = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00448520
 * Original: 0x00448520 - 0x00448557 (55 bytes, 19 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448520: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x0044852Bu); RECOMP_ABI_CALL(0x004484F0u, sub_004484F0); /* call 0x004484F0 */

loc_0044852B: ;
    esi = eax;
    eax = MEM32(esi * 8 + 0x593998);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0044853Bu); RECOMP_ABI_CALL(0x00442940u, sub_00442940); /* call 0x00442940 */

loc_0044853B: ;
    edi = MEM32(esi * 8 + 0x59399C);
    esi = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x19;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00448560
 * Original: 0x00448560 - 0x0044858D (45 bytes, 16 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448560: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x0044856Bu); RECOMP_ABI_CALL(0x004484F0u, sub_004484F0); /* call 0x004484F0 */

loc_0044856B: ;
    esi = eax;
    eax = MEM32(esi * 8 + 0x593998);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0044857Bu); RECOMP_ABI_CALL(0x00442940u, sub_00442940); /* call 0x00442940 */

loc_0044857B: ;
    edx = MEM32(esi * 8 + 0x59399C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00448590
 * Original: 0x00448590 - 0x004485BF (47 bytes, 21 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448590: ;
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x80;

loc_00448598: ;
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax * 4 + 0x593D98)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x593D98), edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004485B0; /* jg: greater (signed >) */

loc_004485AC: ;
    esi = eax;
    goto loc_004485B2;

loc_004485B0: ;
    ecx = eax;

loc_004485B2: ;
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00448598; /* jg: greater (signed >) */

loc_004485BB: ;
    eax = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004485C0
 * Original: 0x004485C0 - 0x00448649 (137 bytes, 35 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004485C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004485C0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((9) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004485D3; /* jl: less (signed <) */

loc_004485CE: ;
    eax = 0x7F;

loc_004485D3: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00448643; /* ja: above (unsigned >) */

loc_004485DC: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x44864C); /* switch: 12 entries, 12 targets */
    if (_jt == 0x004485E3u) goto loc_004485E3;
    if (_jt == 0x004485EBu) goto loc_004485EB;
    if (_jt == 0x004485F3u) goto loc_004485F3;
    if (_jt == 0x004485FBu) goto loc_004485FB;
    if (_jt == 0x00448603u) goto loc_00448603;
    if (_jt == 0x0044860Bu) goto loc_0044860B;
    if (_jt == 0x00448613u) goto loc_00448613;
    if (_jt == 0x0044861Bu) goto loc_0044861B;
    if (_jt == 0x00448623u) goto loc_00448623;
    if (_jt == 0x0044862Bu) goto loc_0044862B;
    if (_jt == 0x00448633u) goto loc_00448633;
    if (_jt == 0x0044863Bu) goto loc_0044863B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004485E3: ;
    eax = MEM32(eax * 4 + 0x594398);
    esp += 4; return; /* ret */

loc_004485EB: ;
    eax = MEM32(eax * 4 + 0x594598);
    esp += 4; return; /* ret */

loc_004485F3: ;
    eax = MEM32(eax * 4 + 0x594798);
    esp += 4; return; /* ret */

loc_004485FB: ;
    eax = MEM32(eax * 4 + 0x594998);
    esp += 4; return; /* ret */

loc_00448603: ;
    eax = MEM32(eax * 4 + 0x594B98);
    esp += 4; return; /* ret */

loc_0044860B: ;
    eax = MEM32(eax * 4 + 0x594D98);
    esp += 4; return; /* ret */

loc_00448613: ;
    eax = MEM32(eax * 4 + 0x594F98);
    esp += 4; return; /* ret */

loc_0044861B: ;
    eax = MEM32(eax * 4 + 0x595198);
    esp += 4; return; /* ret */

loc_00448623: ;
    eax = MEM32(eax * 4 + 0x595398);
    esp += 4; return; /* ret */

loc_0044862B: ;
    eax = MEM32(eax * 4 + 0x595598);
    esp += 4; return; /* ret */

loc_00448633: ;
    eax = MEM32(eax * 4 + 0x595798);
    esp += 4; return; /* ret */

loc_0044863B: ;
    eax = MEM32(eax * 4 + 0x595998);
    esp += 4; return; /* ret */

loc_00448643: ;
    eax = 0xFFA00000u;
    esp += 4; return; /* ret */

}

/**
 * sub_00448680
 * Original: 0x00448680 - 0x004487A7 (295 bytes, 104 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00448680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448680: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00448693; /* jne: not equal / not zero */

loc_0044868E: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00448693: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_004486A5; /* jge: greater or equal (signed >=) */

loc_00448699: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_004486B6;

loc_004486A5: ;
    edx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    eax = 0x10000;
    PUSH32(esp, edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);

loc_004486B6: ;
    PUSH32(esp, 0x004486BBu); RECOMP_ABI_CALL(0x004485C0u, sub_004485C0); /* call 0x004485C0 */

loc_004486BB: ;
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx;
    PUSH32(esp, 0x004486C7u); RECOMP_ABI_CALL(0x004484F0u, sub_004484F0); /* call 0x004484F0 */

loc_004486C7: ;
    edi = eax;
    ecx = MEM32(edi * 8 + 0x593998);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004486D7u); RECOMP_ABI_CALL(0x00442940u, sub_00442940); /* call 0x00442940 */

loc_004486D7: ;
    edx = MEM32(edi * 8 + 0x59399C);
    ebx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x004486ECu); RECOMP_ABI_CALL(0x004484F0u, sub_004484F0); /* call 0x004484F0 */

loc_004486EC: ;
    edi = eax;
    edx = MEM32(edi * 8 + 0x593998);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004486FCu); RECOMP_ABI_CALL(0x00442940u, sub_00442940); /* call 0x00442940 */

loc_004486FC: ;
    esi = eax;
    _fb = (uint32_t)(MEM32(edi * 8 + 0x59399C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edi * 8 + 0x59399C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebp;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((8) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x0044870Fu); RECOMP_ABI_CALL(0x004484F0u, sub_004484F0); /* call 0x004484F0 */

loc_0044870F: ;
    MEM32(esp + 0x30) = eax;
    eax = MEM32(eax * 8 + 0x593998);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448721u); RECOMP_ABI_CALL(0x00442940u, sub_00442940); /* call 0x00442940 */

loc_00448721: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx * 8 + 0x59399C);
    edi = eax;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((8) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0044874E; /* jge: greater or equal (signed >=) */

loc_0044873E: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00448747u); RECOMP_ABI_CALL(0x00442940u, sub_00442940); /* call 0x00442940 */

loc_00448747: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0044875C;

loc_0044874E: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00448757u); RECOMP_ABI_CALL(0x00442940u, sub_00442940); /* call 0x00442940 */

loc_00448757: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0044875C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00448764; /* jge: greater or equal (signed >=) */

loc_00448760: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00448770;

loc_00448764: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00448770; /* jle: less or equal (signed <=) */

loc_0044876B: ;
    eax = 0x10000;

loc_00448770: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    edi = eax;
    PUSH32(esp, 0x0044877Au); RECOMP_ABI_CALL(0x00448590u, sub_00448590); /* call 0x00448590 */

loc_0044877A: ;
    esi = eax;
    edx = MEM32(esi * 8 + 0x593F98);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0044878Au); RECOMP_ABI_CALL(0x00442940u, sub_00442940); /* call 0x00442940 */

loc_0044878A: ;
    edx = MEM32(esi * 8 + 0x593F9C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFA00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFA00000u (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_004487A4; /* jge: greater or equal (signed >=) */

loc_0044879F: ;
    eax = 0xFFA00000u;

loc_004487A4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004487B0
 * Original: 0x004487B0 - 0x004487C1 (17 bytes, 6 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004487B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004487B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004487B7u); RECOMP_ABI_CALL(0x00480A65u, sub_00480A65); /* call 0x00480A65 */

loc_004487B7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004487BDu); RECOMP_ABI_CALL(0x0047E904u, sub_0047E904); /* call 0x0047E904 */

loc_004487BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004487D0
 * Original: 0x004487D0 - 0x004487F2 (34 bytes, 11 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004487D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004487D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FFF);
    PUSH32(esp, 0x004487DFu); RECOMP_ABI_CALL(0x0047E911u, sub_0047E911); /* call 0x0047E911 */

loc_004487DF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004487E5u); RECOMP_ABI_CALL(0x004428E0u, sub_004428E0); /* call 0x004428E0 */

loc_004487E5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004487EEu); RECOMP_ABI_CALL(0x004428C0u, sub_004428C0); /* call 0x004428C0 */

loc_004487EE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00448800
 * Original: 0x00448800 - 0x00448841 (65 bytes, 28 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448800: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    /* nop */

loc_00448810: ;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x41 (8-bit) */
    SET_LO8(eax, MEM8(esi));
    if (CMP_L(_fas, _fbs)) goto loc_00448821; /* jl: less (signed <) */

loc_00448819: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00448821; /* jg: greater (signed >) */

loc_0044881E: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_00448821: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0044882B; /* jl: less (signed <) */

loc_00448825: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0044882B; /* jg: greater (signed >) */

loc_00448829: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_0044882B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00448837; /* jne: not equal / not zero */

loc_0044882F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00448837; /* je: equal / zero */

loc_00448833: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00448810;

loc_00448837: ;
    edx = SX8(LO8(eax));
    eax = SX8(LO8(ecx));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00448850
 * Original: 0x00448850 - 0x0044887A (42 bytes, 18 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448850: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    edx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00448879; /* je: equal / zero */

loc_0044885B: ;
    goto loc_00448860;

    /* nop */

loc_00448860: ;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00448871; /* jl: less (signed <) */

loc_00448867: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00448871; /* jg: greater (signed >) */

loc_0044886C: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(edx) = LO8(ecx);

loc_00448871: ;
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00448860; /* jne: not equal / not zero */

loc_00448879: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448880
 * Original: 0x00448880 - 0x004488D6 (86 bytes, 37 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448880: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004488D3; /* jbe: below or equal (unsigned <=) */

loc_0044888C: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = edi;
    edx = eax + 1;

loc_00448896: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00448896; /* jne: not equal / not zero */

loc_0044889D: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004488BA; /* jbe: below or equal (unsigned <=) */

loc_004488A4: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x5735A8);
    PUSH32(esp, 8);
    ebx = 1;
    PUSH32(esp, 0x004488B7u); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_004488B7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004488BA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004488C6u); RECOMP_ABI_CALL(0x0047E7E0u, sub_0047E7E0); /* call 0x0047E7E0 */

loc_004488C6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004488D2; /* je: equal / zero */

loc_004488CD: ;
    MEM8(edi + esi + -1) = 0;

loc_004488D2: ;
    POP32(esp, edi);

loc_004488D3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004488E0
 * Original: 0x004488E0 - 0x00448930 (80 bytes, 35 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004488E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004488E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(esi));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_004488F1; /* jne: not equal / not zero */

loc_004488EF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004488F1: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2D (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00448901; /* jne: not equal / not zero */

loc_004488F7: ;
    edi = 1;
    edx = esi + 1;
    goto loc_00448903;

loc_00448901: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00448903: ;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00448927; /* jl: less (signed <) */

loc_0044890A: ;
    /* nop */

loc_00448910: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00448927; /* jg: greater (signed >) */

loc_00448915: ;
    ecx = SX8(LO8(ecx));
    eax = eax + eax * 4;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx + eax * 2 + -48;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00448910; /* jge: greater or equal (signed >=) */

loc_00448927: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0044892E; /* je: equal / zero */

loc_0044892C: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_0044892E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00448930
 * Original: 0x00448930 - 0x0044898C (92 bytes, 28 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448930: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = 1;
    MEM32(esp + 0x18) = 0xBB80;
    MEM32(esp + 0x14) = 2;
    MEM32(esp + 0x10) = 0x10;
    PUSH32(esp, 0x00448961u); RECOMP_ABI_CALL(0x00444300u, sub_00444300); /* call 0x00444300 */

loc_00448961: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00448984; /* jne: not equal / not zero */

loc_00448969: ;
    eax = esp + 8;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448974u); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448974: ;
    ecx = eax;
    PUSH32(esp, 0x0044897Bu); RECOMP_ABI_CALL(0x00446530u, sub_00446530); /* call 0x00446530 */

loc_0044897B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00448986; /* je: equal / zero */

loc_00448984: ;
    eax = esi;

loc_00448986: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00448990
 * Original: 0x00448990 - 0x0044899C (12 bytes, 3 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448990: ;
    PUSH32(esp, 0x00448995u); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448995: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00444FD0(); return; /* tail jmp 0x00444FD0 */

}

/**
 * sub_004489A0
 * Original: 0x004489A0 - 0x004489B8 (24 bytes, 10 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004489A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004489A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004489AAu); RECOMP_ABI_CALL(0x004461F0u, sub_004461F0); /* call 0x004461F0 */

loc_004489AA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004489C0
 * Original: 0x004489C0 - 0x004489E1 (33 bytes, 12 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004489C0(void)
{

loc_004489C0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004489D9u); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_004489D9: ;
    ecx = eax;
    PUSH32(esp, 0x004489E0u); RECOMP_ABI_CALL(0x00447570u, sub_00447570); /* call 0x00447570 */

loc_004489E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004489F0
 * Original: 0x004489F0 - 0x00448A02 (18 bytes, 6 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004489F0(void)
{

loc_004489F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004489FAu); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_004489FA: ;
    ecx = eax;
    PUSH32(esp, 0x00448A01u); RECOMP_ABI_CALL(0x00445550u, sub_00445550); /* call 0x00445550 */

loc_00448A01: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448A10
 * Original: 0x00448A10 - 0x00448A22 (18 bytes, 6 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448A10(void)
{

loc_00448A10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448A1Au); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448A1A: ;
    ecx = eax;
    PUSH32(esp, 0x00448A21u); RECOMP_ABI_CALL(0x004455D0u, sub_004455D0); /* call 0x004455D0 */

loc_00448A21: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448A30
 * Original: 0x00448A30 - 0x00448A42 (18 bytes, 6 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448A30(void)
{

loc_00448A30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448A3Au); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448A3A: ;
    ecx = eax;
    PUSH32(esp, 0x00448A41u); RECOMP_ABI_CALL(0x004470E0u, sub_004470E0); /* call 0x004470E0 */

loc_00448A41: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448A50
 * Original: 0x00448A50 - 0x00448A62 (18 bytes, 6 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448A50(void)
{

loc_00448A50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448A5Au); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448A5A: ;
    ecx = eax;
    PUSH32(esp, 0x00448A61u); RECOMP_ABI_CALL(0x00447160u, sub_00447160); /* call 0x00447160 */

loc_00448A61: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448A70
 * Original: 0x00448A70 - 0x00448A75 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448A70: ;
    g_seh_ebp = ebp; sub_00445FB0(); return; /* tail jmp 0x00445FB0 */

}

/**
 * sub_00448A80
 * Original: 0x00448A80 - 0x00448A85 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448A80: ;
    g_seh_ebp = ebp; sub_00446000(); return; /* tail jmp 0x00446000 */

}

/**
 * sub_00448A90
 * Original: 0x00448A90 - 0x00448A95 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448A90: ;
    g_seh_ebp = ebp; sub_004469D0(); return; /* tail jmp 0x004469D0 */

}

/**
 * sub_00448AA0
 * Original: 0x00448AA0 - 0x00448AA5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448AA0: ;
    g_seh_ebp = ebp; sub_00446040(); return; /* tail jmp 0x00446040 */

}

/**
 * sub_00448AB0
 * Original: 0x00448AB0 - 0x00448AB5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448AB0: ;
    g_seh_ebp = ebp; sub_00446A20(); return; /* tail jmp 0x00446A20 */

}

/**
 * sub_00448AC0
 * Original: 0x00448AC0 - 0x00448AD2 (18 bytes, 6 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448AC0(void)
{

loc_00448AC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448ACAu); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448ACA: ;
    ecx = eax;
    PUSH32(esp, 0x00448AD1u); RECOMP_ABI_CALL(0x00445860u, sub_00445860); /* call 0x00445860 */

loc_00448AD1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448AE0
 * Original: 0x00448AE0 - 0x00448AF2 (18 bytes, 6 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448AE0(void)
{

loc_00448AE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448AEAu); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448AEA: ;
    ecx = eax;
    PUSH32(esp, 0x00448AF1u); RECOMP_ABI_CALL(0x004464D0u, sub_004464D0); /* call 0x004464D0 */

loc_00448AF1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448B00
 * Original: 0x00448B00 - 0x00448B12 (18 bytes, 6 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448B00(void)
{

loc_00448B00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448B0Au); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448B0A: ;
    ecx = eax;
    PUSH32(esp, 0x00448B11u); RECOMP_ABI_CALL(0x00445970u, sub_00445970); /* call 0x00445970 */

loc_00448B11: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448B20
 * Original: 0x00448B20 - 0x00448B3E (30 bytes, 12 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448B20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448B20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00448B2Bu); RECOMP_ABI_CALL(0x00444320u, sub_00444320); /* call 0x00444320 */

loc_00448B2B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00448B35u); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448B35: ;
    ecx = eax;
    PUSH32(esp, 0x00448B3Cu); RECOMP_ABI_CALL(0x004458A0u, sub_004458A0); /* call 0x004458A0 */

loc_00448B3C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00448B40
 * Original: 0x00448B40 - 0x00448B65 (37 bytes, 16 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448B40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448B40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00448B51u); RECOMP_ABI_CALL(0x004443E0u, sub_004443E0); /* call 0x004443E0 */

loc_00448B51: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00448B5Bu); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448B5B: ;
    ecx = eax;
    PUSH32(esp, 0x00448B62u); RECOMP_ABI_CALL(0x004458F0u, sub_004458F0); /* call 0x004458F0 */

loc_00448B62: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00448B70
 * Original: 0x00448B70 - 0x00448B8D (29 bytes, 11 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448B70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00448B7Bu); RECOMP_ABI_CALL(0x00444450u, sub_00444450); /* call 0x00444450 */

loc_00448B7B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00448B84u); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448B84: ;
    ecx = eax;
    PUSH32(esp, 0x00448B8Bu); RECOMP_ABI_CALL(0x00445930u, sub_00445930); /* call 0x00445930 */

loc_00448B8B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00448B90
 * Original: 0x00448B90 - 0x00448BA2 (18 bytes, 6 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448B90(void)
{

loc_00448B90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448B9Au); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448B9A: ;
    ecx = eax;
    PUSH32(esp, 0x00448BA1u); RECOMP_ABI_CALL(0x00445650u, sub_00445650); /* call 0x00445650 */

loc_00448BA1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448BB0
 * Original: 0x00448BB0 - 0x00448BBE (14 bytes, 5 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448BB0: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448BBAu); RECOMP_ABI_CALL(0x00445C60u, sub_00445C60); /* call 0x00445C60 */

loc_00448BBA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00448BC0
 * Original: 0x00448BC0 - 0x00448BD1 (17 bytes, 4 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448BC0: ;
    PUSH32(esp, 0x00448BC5u); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448BC5: ;
    ecx = eax;
    PUSH32(esp, 0x00448BCCu); RECOMP_ABI_CALL(0x00445500u, sub_00445500); /* call 0x00445500 */

loc_00448BCC: ;
    g_seh_ebp = ebp; sub_0044E420(); return; /* tail jmp 0x0044E420 */

}

/**
 * sub_00448BE0
 * Original: 0x00448BE0 - 0x00448BF2 (18 bytes, 6 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448BE0(void)
{

loc_00448BE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448BEAu); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448BEA: ;
    ecx = eax;
    PUSH32(esp, 0x00448BF1u); RECOMP_ABI_CALL(0x004459D0u, sub_004459D0); /* call 0x004459D0 */

loc_00448BF1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448C00
 * Original: 0x00448C00 - 0x00448C12 (18 bytes, 6 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448C00(void)
{

loc_00448C00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448C0Au); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448C0A: ;
    ecx = eax;
    PUSH32(esp, 0x00448C11u); RECOMP_ABI_CALL(0x00445A10u, sub_00445A10); /* call 0x00445A10 */

loc_00448C11: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448C20
 * Original: 0x00448C20 - 0x00448C50 (48 bytes, 18 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448C20(void)
{

loc_00448C20: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448C48u); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448C48: ;
    ecx = eax;
    PUSH32(esp, 0x00448C4Fu); RECOMP_ABI_CALL(0x00447370u, sub_00447370); /* call 0x00447370 */

loc_00448C4F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448C50
 * Original: 0x00448C50 - 0x00448C67 (23 bytes, 8 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448C50(void)
{

loc_00448C50: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00448C5Fu); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448C5F: ;
    ecx = eax;
    PUSH32(esp, 0x00448C66u); RECOMP_ABI_CALL(0x00447550u, sub_00447550); /* call 0x00447550 */

loc_00448C66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448C70
 * Original: 0x00448C70 - 0x00448C82 (18 bytes, 6 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448C70(void)
{

loc_00448C70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448C7Au); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448C7A: ;
    ecx = eax;
    PUSH32(esp, 0x00448C81u); RECOMP_ABI_CALL(0x00445B70u, sub_00445B70); /* call 0x00445B70 */

loc_00448C81: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448C90
 * Original: 0x00448C90 - 0x00448CA7 (23 bytes, 8 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448C90(void)
{

loc_00448C90: ;
    ecx = MEM32(esp + 4);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00448C9Fu); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448C9F: ;
    ecx = eax;
    PUSH32(esp, 0x00448CA6u); RECOMP_ABI_CALL(0x00445B80u, sub_00445B80); /* call 0x00445B80 */

loc_00448CA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448CB0
 * Original: 0x00448CB0 - 0x00448CD6 (38 bytes, 14 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448CB0(void)
{

loc_00448CB0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00448CCEu); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448CCE: ;
    ecx = eax;
    PUSH32(esp, 0x00448CD5u); RECOMP_ABI_CALL(0x00446360u, sub_00446360); /* call 0x00446360 */

loc_00448CD5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448CE0
 * Original: 0x00448CE0 - 0x00448CF2 (18 bytes, 6 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448CE0(void)
{

loc_00448CE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448CEAu); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448CEA: ;
    ecx = eax;
    PUSH32(esp, 0x00448CF1u); RECOMP_ABI_CALL(0x00447560u, sub_00447560); /* call 0x00447560 */

loc_00448CF1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448D00
 * Original: 0x00448D00 - 0x00448D12 (18 bytes, 6 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448D00(void)
{

loc_00448D00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448D0Au); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448D0A: ;
    ecx = eax;
    PUSH32(esp, 0x00448D11u); RECOMP_ABI_CALL(0x00445C40u, sub_00445C40); /* call 0x00445C40 */

loc_00448D11: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448D20
 * Original: 0x00448D20 - 0x00448D32 (18 bytes, 6 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448D20(void)
{

loc_00448D20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448D2Au); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448D2A: ;
    ecx = eax;
    PUSH32(esp, 0x00448D31u); RECOMP_ABI_CALL(0x00445C50u, sub_00445C50); /* call 0x00445C50 */

loc_00448D31: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448D40
 * Original: 0x00448D40 - 0x00448D52 (18 bytes, 6 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448D40(void)
{

loc_00448D40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448D4Au); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448D4A: ;
    ecx = eax;
    PUSH32(esp, 0x00448D51u); RECOMP_ABI_CALL(0x00445040u, sub_00445040); /* call 0x00445040 */

loc_00448D51: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448D60
 * Original: 0x00448D60 - 0x00448D72 (18 bytes, 6 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448D60(void)
{

loc_00448D60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448D6Au); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448D6A: ;
    ecx = eax;
    PUSH32(esp, 0x00448D71u); RECOMP_ABI_CALL(0x00445080u, sub_00445080); /* call 0x00445080 */

loc_00448D71: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448D80
 * Original: 0x00448D80 - 0x00448D85 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448D80: ;
    g_seh_ebp = ebp; sub_00445EE0(); return; /* tail jmp 0x00445EE0 */

}

/**
 * sub_00448D90
 * Original: 0x00448D90 - 0x00448DA7 (23 bytes, 9 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448D90: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x60);
    ecx = MEM32(eax);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00448DA3u); RECOMP_ABI_CALL(0x004428E0u, sub_004428E0); /* call 0x004428E0 */

loc_00448DA3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00448DB0
 * Original: 0x00448DB0 - 0x00448DC7 (23 bytes, 8 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448DB0(void)
{

loc_00448DB0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00448DBFu); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448DBF: ;
    ecx = eax;
    PUSH32(esp, 0x00448DC6u); RECOMP_ABI_CALL(0x004471E0u, sub_004471E0); /* call 0x004471E0 */

loc_00448DC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448DD0
 * Original: 0x00448DD0 - 0x00448DD5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448DD0: ;
    g_seh_ebp = ebp; sub_00446280(); return; /* tail jmp 0x00446280 */

}

/**
 * sub_00448DE0
 * Original: 0x00448DE0 - 0x00448DE8 (8 bytes, 3 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448DE0(void)
{

loc_00448DE0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00448DF0
 * Original: 0x00448DF0 - 0x00448E16 (38 bytes, 14 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448DF0(void)
{

loc_00448DF0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00448E0Eu); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448E0E: ;
    ecx = eax;
    PUSH32(esp, 0x00448E15u); RECOMP_ABI_CALL(0x00446AA0u, sub_00446AA0); /* call 0x00446AA0 */

loc_00448E15: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00448E20
 * Original: 0x00448E20 - 0x00448E25 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448E20: ;
    g_seh_ebp = ebp; sub_00446960(); return; /* tail jmp 0x00446960 */

}

/**
 * sub_00448E30
 * Original: 0x00448E30 - 0x00448E35 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448E30: ;
    g_seh_ebp = ebp; sub_00446D50(); return; /* tail jmp 0x00446D50 */

}

/**
 * sub_00448E40
 * Original: 0x00448E40 - 0x00448E45 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448E40: ;
    g_seh_ebp = ebp; sub_00445CB0(); return; /* tail jmp 0x00445CB0 */

}

/**
 * sub_00448E50
 * Original: 0x00448E50 - 0x00448E55 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448E50: ;
    g_seh_ebp = ebp; sub_00445E80(); return; /* tail jmp 0x00445E80 */

}

/**
 * sub_00448E60
 * Original: 0x00448E60 - 0x00448E6C (12 bytes, 3 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448E60: ;
    PUSH32(esp, 0x00448E65u); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448E65: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00446B30(); return; /* tail jmp 0x00446B30 */

}

/**
 * sub_00448E70
 * Original: 0x00448E70 - 0x00448E7C (12 bytes, 3 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448E70: ;
    PUSH32(esp, 0x00448E75u); RECOMP_ABI_CALL(0x00444F50u, sub_00444F50); /* call 0x00444F50 */

loc_00448E75: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00446490(); return; /* tail jmp 0x00446490 */

}

/**
 * sub_00448E80
 * Original: 0x00448E80 - 0x00448E9F (31 bytes, 11 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448E80: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5735E0;
    if (TEST_Z(_fa, _fb)) goto loc_00448E99; /* je: equal / zero */

loc_00448E90: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00448E96u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_00448E96: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00448E99: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00448EA0
 * Original: 0x00448EA0 - 0x00448EA5 (5 bytes, 1 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448EA0: ;
    g_seh_ebp = ebp; sub_000D4050(); return; /* tail jmp 0x000D4050 */

}

/**
 * sub_00448EB0
 * Original: 0x00448EB0 - 0x00448F1A (106 bytes, 33 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * Category: game_camera
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00448EB0: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40C);
    PUSH32(esp, edi);
    MEM32(esi) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00448ED2u); RECOMP_ABI_CALL(0x000D4120u, sub_000D4120); /* call 0x000D4120 */

loc_00448ED2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00448F0A; /* jne: not equal / not zero */

loc_00448EDC: ;
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, 0x5735E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00448EECu); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00448EEC: ;
    PUSH32(esp, 3);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00448EFAu); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_00448EFA: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00448F0A: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00448F20
 * Original: 0x00448F20 - 0x00449138 (536 bytes, 196 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00448F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00448F20: ;
    _fb = (uint32_t)(0x434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x434;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x43C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x00448F41u); RECOMP_ABI_CALL(0x000D4370u, sub_000D4370); /* call 0x000D4370 */

loc_00448F41: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00448F55; /* je: equal / zero */

loc_00448F48: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x434;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00448F55: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, 0x00448F5Du); RECOMP_ABI_CALL(0x000D40E0u, sub_000D40E0); /* call 0x000D40E0 */

loc_00448F5D: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00448F7F; /* je: equal / zero */

loc_00448F66: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00448F6Fu); RECOMP_ABI_CALL(0x000D42B0u, sub_000D42B0); /* call 0x000D42B0 */

loc_00448F6F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00448F8D; /* jne: not equal / not zero */

loc_00448F76: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00448F7Cu); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_00448F7C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00448F7F: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x434;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00448F8D: ;
    edi = MEM32(esi + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0x00448F9Eu); RECOMP_ABI_CALL(0x000D4010u, sub_000D4010); /* call 0x000D4010 */

loc_00448F9E: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00448FD4; /* je: equal / zero */

loc_00448FAB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00448FB5u); RECOMP_ABI_CALL(0x000D4370u, sub_000D4370); /* call 0x000D4370 */

loc_00448FB5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00448FCC; /* jne: not equal / not zero */

loc_00448FBD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00448FC4u); RECOMP_ABI_CALL(0x000D42B0u, sub_000D42B0); /* call 0x000D42B0 */

loc_00448FC4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00448FE3; /* je: equal / zero */

loc_00448FCB: ;
    PUSH32(esp, esi);

loc_00448FCC: ;
    PUSH32(esp, 0x00448FD1u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_00448FD1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00448FD4: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x434;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00448FE3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebp = esi + 8;
    if (CMP_BE(_fa, _fb)) goto loc_0044905D; /* jbe: below or equal (unsigned <=) */

loc_00448FEC: ;
    /* nop */

loc_00448FF0: ;
    SET_LO16(eax, MEM16(ebp));
    eax = ZX16(LO16(eax));
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebp;
    edi = esp + 0x20;
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
    ecx = MEM32(esp + 0x44C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + eax + 0x20) = 0;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00449029u); RECOMP_ABI_CALL(0x00448800u, sub_00448800); /* call 0x00448800 */

loc_00449029: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044903E; /* je: equal / zero */

loc_00449030: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00448FF0; /* jb: below (unsigned <) */

loc_0044903C: ;
    goto loc_00449059;

loc_0044903E: ;
    edx = MEM32(ebp);
    eax = MEM32(ebp + 4);
    ecx = MEM32(esp + 0x450);
    MEM32(esp + 0x10) = edx;
    MEM32(ecx) = eax;
    MEM32(esp + 0x14) = 1;

loc_00449059: ;
    esi = MEM32(esp + 0x18);

loc_0044905D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00449063u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_00449063: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00449097; /* jne: not equal / not zero */

loc_0044906E: ;
    edx = MEM32(esp + 0x44C);
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, 0x573630);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00449085u); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00449085: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x434;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00449097: ;
    esi = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x448);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004490ABu); RECOMP_ABI_CALL(0x000D4370u, sub_000D4370); /* call 0x000D4370 */

loc_004490AB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00448FD4; /* jne: not equal / not zero */

loc_004490B6: ;
    ecx = MEM32(esp + 0x450);
    esi = MEM32(ecx);
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004490E1; /* jne: not equal / not zero */

loc_004490C6: ;
    edx = MEM32(esp + 0x454);
    MEM32(edx) = esi;

loc_004490CF: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x434;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_004490E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004490E7u); RECOMP_ABI_CALL(0x000D40E0u, sub_000D40E0); /* call 0x000D40E0 */

loc_004490E7: ;
    edi = MEM32(esp + 0x458);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0044910F; /* jne: not equal / not zero */

loc_004490F7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004490FDu); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_004490FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x434;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0044910F: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00449117u); RECOMP_ABI_CALL(0x000D42B0u, sub_000D42B0); /* call 0x000D42B0 */

loc_00449117: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004490CF; /* je: equal / zero */

loc_0044911E: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00449126u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_00449126: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x434;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00449140
 * Original: 0x00449140 - 0x00449195 (85 bytes, 31 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00449140: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1C);
    esi = ecx;
    PUSH32(esp, 0x0044914Au); RECOMP_ABI_CALL(0x000D40E0u, sub_000D40E0); /* call 0x000D40E0 */

loc_0044914A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00449175; /* je: equal / zero */

loc_00449153: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    edx = 1;
    MEM32(eax) = 0x5735E0;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    goto loc_00449177;

loc_00449175: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00449177: ;
    MEM32(esi + 4) = eax;
    MEM32(eax + 0x10) = eax;
    eax = MEM32(esi + 4);
    edx = MEM32(eax + 0x10);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esi + 4);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(esi) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004491A0
 * Original: 0x004491A0 - 0x004491D5 (53 bytes, 20 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004491A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004491A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004491D0; /* je: equal / zero */

loc_004491AD: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004491B6u); RECOMP_ABI_CALL(0x004491A0u, sub_004491A0); /* call 0x004491A0 */

loc_004491B6: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x004491C1u); RECOMP_ABI_CALL(0x004491A0u, sub_004491A0); /* call 0x004491A0 */

loc_004491C1: ;
    PUSH32(esp, esi);
    MEM32(esi) = 0x5735E0;
    PUSH32(esp, 0x004491CDu); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_004491CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004491D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004491E0
 * Original: 0x004491E0 - 0x004492AE (206 bytes, 83 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004491E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004491E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0044923E; /* jne: not equal / not zero */

loc_004491F0: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x004491F7u); RECOMP_ABI_CALL(0x000D40E0u, sub_000D40E0); /* call 0x000D40E0 */

loc_004491F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00449232; /* je: equal / zero */

loc_00449203: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esp + 0x10);
    MEM32(eax) = 0x5735E0;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x18) = edi;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(ebx) = eax;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00449232: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx) = eax;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0044923E: ;
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edi + 8);
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00449251; /* jbe: below or equal (unsigned <=) */

loc_0044924C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00449256;

loc_00449251: ;
    if (CMP_AE(_fa, _fb)) goto loc_004492A6; /* jae: above or equal (unsigned >=) */

loc_00449253: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00449256: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0044925Fu); RECOMP_ABI_CALL(0x004491E0u, sub_004491E0); /* call 0x004491E0 */

loc_0044925F: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0044927A; /* jne: not equal / not zero */

loc_0044926C: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0xC) = edx;
    MEM32(ecx + 0x10) = eax;
    MEM32(ebx) = ecx;

loc_0044927A: ;
    ecx = MEM32(ebx);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0044929B; /* jne: not equal / not zero */

loc_0044928A: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x10) = edx;
    MEM32(eax + 0xC) = ecx;
    MEM32(ebx) = eax;
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0044929B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_004492A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004492B0
 * Original: 0x004492B0 - 0x00449448 (408 bytes, 148 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004492B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004492B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044943E; /* je: equal / zero */

loc_004492C3: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    ecx = MEM32(ebx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(0x5B3284) = eax;
    ecx = edi;
    if (CMP_AE(_fa, _fb)) goto loc_004492DE; /* jae: above or equal (unsigned >=) */

loc_004492D9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004492E6;

loc_004492DE: ;
    MEM32(0x5B3280) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004492E6: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004492EDu); RECOMP_ABI_CALL(0x004492B0u, sub_004492B0); /* call 0x004492B0 */

loc_004492ED: ;
    eax = MEM32(esi);
    edx = MEM32(0x5B3284);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00449358; /* jne: not equal / not zero */

loc_004492F9: ;
    ecx = MEM32(0x5B3280);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0044934B; /* je: equal / zero */

loc_00449304: ;
    ebx = MEM32(ebx + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0044934B; /* jne: not equal / not zero */

loc_0044930C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ebx = MEM32(eax + 4);
    MEM32(ecx + 4) = ebx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    ecx = MEM32(edi + 4);
    eax = MEM32(esi);
    MEM32(0x5B3280) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0044933B; /* je: equal / zero */

loc_0044932C: ;
    PUSH32(esp, edx);
    MEM32(edx) = 0x5735E0;
    PUSH32(esp, 0x00449338u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_00449338: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0044933B: ;
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, edi);
    MEM32(0x5B327C) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0044934B: ;
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(0x5B327C) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00449358: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0xC);
    edi = MEM32(edx + 0x18);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00449372; /* jl: less (signed <) */

loc_00449366: ;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(MEM32(edx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x18), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00449433; /* jge: greater or equal (signed >=) */

loc_00449372: ;
    MEM32(eax + 0x18) = MEM32(eax + 0x18) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00449385; /* jle: less or equal (signed <=) */

loc_00449382: ;
    MEM32(ecx + 0x18) = eax;

loc_00449385: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004493A0; /* jne: not equal / not zero */

loc_00449392: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0xC) = edx;
    MEM32(ecx + 0x10) = eax;
    MEM32(esi) = ecx;

loc_004493A0: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax + 0xC);
    edx = MEM32(edx + 0x18);
    edi = MEM32(eax + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004493C3; /* jne: not equal / not zero */

loc_004493B5: ;
    edx = MEM32(eax + 0xC);
    edi = MEM32(edx + 0x10);
    MEM32(eax + 0xC) = edi;
    MEM32(edx + 0x10) = eax;
    MEM32(ecx) = edx;

loc_004493C3: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax + 0xC);
    edx = MEM32(edx + 0x18);
    edi = MEM32(eax + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004493E9; /* jne: not equal / not zero */

loc_004493DB: ;
    edx = MEM32(eax + 0xC);
    edi = MEM32(edx + 0x10);
    MEM32(eax + 0xC) = edi;
    MEM32(edx + 0x10) = eax;
    MEM32(ecx) = edx;

loc_004493E9: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0044940A; /* jne: not equal / not zero */

loc_004493F9: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x10) = edx;
    MEM32(eax + 0xC) = ecx;
    MEM32(esi) = eax;
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0044940A: ;
    esi = MEM32(esi);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + 0x18);
    edx = MEM32(eax + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00449433; /* jne: not equal / not zero */

loc_00449422: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x10) = edx;
    MEM32(ecx + 0xC) = eax;
    MEM32(esi) = ecx;
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00449433: ;
    eax = MEM32(0x5B327C);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0044943E: ;
    eax = MEM32(0x5B327C);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00449450
 * Original: 0x00449450 - 0x0044945C (12 bytes, 6 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449450(void)
{

loc_00449450: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00449458u); RECOMP_ABI_CALL(0x00449140u, sub_00449140); /* call 0x00449140 */

loc_00449458: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00449460
 * Original: 0x00449460 - 0x0044949D (61 bytes, 24 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00449460: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00449490; /* je: equal / zero */

loc_0044946D: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00449476u); RECOMP_ABI_CALL(0x004491A0u, sub_004491A0); /* call 0x004491A0 */

loc_00449476: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00449481u); RECOMP_ABI_CALL(0x004491A0u, sub_004491A0); /* call 0x004491A0 */

loc_00449481: ;
    PUSH32(esp, edi);
    MEM32(edi) = 0x5735E0;
    PUSH32(esp, 0x0044948Du); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_0044948D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00449490: ;
    edx = MEM32(esi + 4);
    POP32(esp, edi);
    MEM32(esi) = edx;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004494A0
 * Original: 0x004494A0 - 0x004494E9 (73 bytes, 29 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004494A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004494A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004494D0; /* je: equal / zero */

loc_004494AD: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004494B6u); RECOMP_ABI_CALL(0x004491A0u, sub_004491A0); /* call 0x004491A0 */

loc_004494B6: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x004494C1u); RECOMP_ABI_CALL(0x004491A0u, sub_004491A0); /* call 0x004491A0 */

loc_004494C1: ;
    PUSH32(esp, edi);
    MEM32(edi) = 0x5735E0;
    PUSH32(esp, 0x004494CDu); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_004494CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004494D0: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004494E8; /* je: equal / zero */

loc_004494DB: ;
    PUSH32(esp, eax);
    MEM32(eax) = 0x5735E0;
    PUSH32(esp, 0x004494E7u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_004494E7: ;
    POP32(esp, ecx);

loc_004494E8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004494F0
 * Original: 0x004494F0 - 0x004495C4 (212 bytes, 79 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004494F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004494F0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = eax;
    edi = ecx;
    ecx = MEM32(esp + 0x24);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00449519u); RECOMP_ABI_CALL(0x00448EB0u, sub_00448EB0); /* call 0x00448EB0 */

loc_00449519: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00449524; /* jne: not equal / not zero */

loc_0044951D: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00449524: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00449540u); RECOMP_ABI_CALL(0x00448F20u, sub_00448F20); /* call 0x00448F20 */

loc_00449540: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00449557; /* jne: not equal / not zero */

loc_00449544: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0044954Au); RECOMP_ABI_CALL(0x000D44C0u, sub_000D44C0); /* call 0x000D44C0 */

loc_0044954A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00449557: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    if (CMP_BE(_fa, _fb)) goto loc_0044959F; /* jbe: below or equal (unsigned <=) */

loc_00449565: ;
    ebp = 0x5735E0;
    MEM32(esp + 0x1C) = ebp;
    edi = edi;

loc_00449570: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edx = esp + 0x20;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, edx);
    ecx = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x00449590u); RECOMP_ABI_CALL(0x004491E0u, sub_004491E0); /* call 0x004491E0 */

loc_00449590: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ebp;
    if ((_fa != 0)) goto loc_00449570; /* jne: not equal / not zero */

loc_00449597: ;
    ebp = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);

loc_0044959F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004495AC; /* je: equal / zero */

loc_004495A3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004495A9u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_004495A9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004495AC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004495B2u); RECOMP_ABI_CALL(0x000D44C0u, sub_000D44C0); /* call 0x000D44C0 */

loc_004495B2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004495D0
 * Original: 0x004495D0 - 0x004496D7 (263 bytes, 91 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * Category: game_debug
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004495D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004495D0: ;
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x218;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x224);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edi = ecx;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x004495FEu); RECOMP_ABI_CALL(0x00448EB0u, sub_00448EB0); /* call 0x00448EB0 */

loc_004495FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00449630; /* jne: not equal / not zero */

loc_00449602: ;
    PUSH32(esp, esi);
    ecx = esp + 0x24;
    PUSH32(esp, 0x573678);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00449612u); RECOMP_ABI_CALL(0x0047D8DFu, sub_0047D8DF); /* call 0x0047D8DF */

loc_00449612: ;
    PUSH32(esp, 3);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00449620u); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_00449620: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x218;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00449630: ;
    edx = MEM32(esp + 0x224);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0044964Fu); RECOMP_ABI_CALL(0x00448F20u, sub_00448F20); /* call 0x00448F20 */

loc_0044964F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0044966A; /* jne: not equal / not zero */

loc_00449653: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00449659u); RECOMP_ABI_CALL(0x000D44C0u, sub_000D44C0); /* call 0x000D44C0 */

loc_00449659: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x218;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0044966A: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004496AF; /* jbe: below or equal (unsigned <=) */

loc_00449677: ;
    ebp = 0x5735E0;
    MEM32(esp + 0x1C) = ebp;

loc_00449680: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, edi);
    eax = esp + 0x20;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004496A0u); RECOMP_ABI_CALL(0x004492B0u, sub_004492B0); /* call 0x004492B0 */

loc_004496A0: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ebp;
    if ((_fa != 0)) goto loc_00449680; /* jne: not equal / not zero */

loc_004496A7: ;
    ebp = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);

loc_004496AF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_004496BD; /* je: equal / zero */

loc_004496B4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004496BAu); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_004496BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004496BD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x004496C3u); RECOMP_ABI_CALL(0x000D44C0u, sub_000D44C0); /* call 0x000D44C0 */

loc_004496C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x218;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004496E0
 * Original: 0x004496E0 - 0x0044971E (62 bytes, 20 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004496E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004496E0: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x004496E7u); RECOMP_ABI_CALL(0x000D40E0u, sub_000D40E0); /* call 0x000D40E0 */

loc_004496E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00449702; /* jne: not equal / not zero */

loc_004496EE: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x572864);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x004496FCu); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_004496FC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00449702: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 0x112233;
    esp += 4; return; /* ret */

}

/**
 * sub_00449720
 * Original: 0x00449720 - 0x0044976C (76 bytes, 27 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00449720: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00449759; /* je: equal / zero */

loc_00449729: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x112233) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0x112233 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00449759; /* jne: not equal / not zero */

loc_00449732: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00449742u); RECOMP_ABI_CALL(0x000D4080u, sub_000D4080); /* call 0x000D4080 */

loc_00449742: ;
    PUSH32(esp, esi);
    MEM32(esi + 0xC) = 0x44556677;
    PUSH32(esp, 0x0044974Fu); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_0044974F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00449759: ;
    PUSH32(esp, 0x5736AC);
    PUSH32(esp, 8);
    PUSH32(esp, 0x00449765u); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_00449765: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00449770
 * Original: 0x00449770 - 0x0044979A (42 bytes, 13 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00449770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00449770: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00449797; /* ja: above (unsigned >) */

loc_00449779: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x44979C); /* switch: 4 entries, 2 targets */
    if (_jt == 0x00449780u) goto loc_00449780;
    if (_jt == 0x00449789u) goto loc_00449789;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00449780: ;
    MEM32(esp + 0xC) = eax;
    g_seh_ebp = ebp; sub_004499E0(); return; /* tail jmp 0x004499E0 */

loc_00449789: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00449793u); RECOMP_ABI_CALL(0x000D40E0u, sub_000D40E0); /* call 0x000D40E0 */

loc_00449793: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00449797: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0044979A
 * Original: 0x0044979A - 0x004497B0 (22 bytes, 9 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044979A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0044979A: ;
    edi = edi;
    { uint64_t _t = (uint64_t)(MEM8(edi + -1752629180)) + (uint64_t)(0x44) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(edi + -1752629180) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(edi + -1752629180)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + -2147466089)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax + -2147466089) = MEM8(eax + -2147466089) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax + -2147466089)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = edi;
    edi = eax;
    eax = _tmp; }
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_004497B0
 * Original: 0x004497B0 - 0x004497D9 (41 bytes, 13 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004497B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004497B0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004497D8; /* ja: above (unsigned >) */

loc_004497B9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x4497DC); /* switch: 4 entries, 2 targets */
    if (_jt == 0x004497C0u) goto loc_004497C0;
    if (_jt == 0x004497C9u) goto loc_004497C9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004497C0: ;
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_004499F0(); return; /* tail jmp 0x004499F0 */

loc_004497C9: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004497D8; /* je: equal / zero */

loc_004497D1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004497D7u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_004497D7: ;
    POP32(esp, ecx);

loc_004497D8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004497F0
 * Original: 0x004497F0 - 0x00449878 (136 bytes, 51 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004497F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004497F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x004497F8u); RECOMP_ABI_CALL(0x000D40E0u, sub_000D40E0); /* call 0x000D40E0 */

loc_004497F8: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00449816; /* jne: not equal / not zero */

loc_00449801: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x572864);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0044980Fu); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_0044980F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00449816: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esi) = 0x11223344;
    MEM32(esi + 4) = eax;
    if (CMP_A(_fa, _fb)) goto loc_0044986B; /* ja: above (unsigned >) */

loc_00449828: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x449878); /* switch: 4 entries, 2 targets */
    if (_jt == 0x0044982Fu) goto loc_0044982F;
    if (_jt == 0x00449849u) goto loc_00449849;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0044982F: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00449844u); RECOMP_ABI_CALL(0x00449A00u, sub_00449A00); /* call 0x00449A00 */

loc_00449844: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00449860;

loc_00449849: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0044985Du); RECOMP_ABI_CALL(0x004496E0u, sub_004496E0); /* call 0x004496E0 */

loc_0044985D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00449860: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0044986B; /* je: equal / zero */

loc_00449867: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0044986B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00449871u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_00449871: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00449890
 * Original: 0x00449890 - 0x00449915 (133 bytes, 50 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00449890: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00449902; /* je: equal / zero */

loc_00449899: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11223344) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x11223344 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00449902; /* jne: not equal / not zero */

loc_004498A1: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_004498EC; /* ja: above (unsigned >) */

loc_004498AA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x449918); /* switch: 4 entries, 2 targets */
    if (_jt == 0x004498B1u) goto loc_004498B1;
    if (_jt == 0x004498E1u) goto loc_004498E1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004498B1: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004498BAu); RECOMP_ABI_CALL(0x00449A60u, sub_00449A60); /* call 0x00449A60 */

loc_004498BA: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004498CD; /* je: equal / zero */

loc_004498C4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004498CD; /* je: equal / zero */

loc_004498C8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004498DC; /* jne: not equal / not zero */

loc_004498CD: ;
    PUSH32(esp, edi);
    MEM32(edi) = 0x55667788;
    PUSH32(esp, 0x004498D9u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_004498D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004498DC: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_004498E1: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004498EAu); RECOMP_ABI_CALL(0x00449720u, sub_00449720); /* call 0x00449720 */

loc_004498EA: ;
    goto loc_004498BA;

loc_004498EC: ;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = 0x55667788;
    PUSH32(esp, 0x004498FAu); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_004498FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00449902: ;
    PUSH32(esp, 0x5736AC);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0044990Eu); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_0044990E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00449930
 * Original: 0x00449930 - 0x00449969 (57 bytes, 19 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00449930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00449930: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00449966; /* ja: above (unsigned >) */

loc_00449939: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x44996C); /* switch: 4 entries, 2 targets */
    if (_jt == 0x00449940u) goto loc_00449940;
    if (_jt == 0x00449949u) goto loc_00449949;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00449940: ;
    MEM32(esp + 0x10) = eax;
    g_seh_ebp = ebp; sub_00449AC0(); return; /* tail jmp 0x00449AC0 */

loc_00449949: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00449966; /* je: equal / zero */

loc_00449952: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00449962u); RECOMP_ABI_CALL(0x000D42B0u, sub_000D42B0); /* call 0x000D42B0 */

loc_00449962: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00449966: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00449980
 * Original: 0x00449980 - 0x004499B5 (53 bytes, 23 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00449980: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004499A1; /* je: equal / zero */

loc_0044998A: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(5));
    ecx = ecx - 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00449995; /* je: equal / zero */

loc_0044998F: ;
    eax = 0xFFFFFFFEu;
    esp += 4; return; /* ret */

loc_00449995: ;
    eax = MEM32(eax + 0x2C);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_004499A1: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0044998F; /* jne: not equal / not zero */

loc_004499A8: ;
    edx = MEM32(eax + 0x28);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004499C0
 * Original: 0x004499C0 - 0x004499DF (31 bytes, 11 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004499C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004499C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004499CD; /* jl: less (signed <) */

loc_004499C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004499DC; /* jle: less or equal (signed <=) */

loc_004499CD: ;
    PUSH32(esp, 0x5736CC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004499D9u); RECOMP_ABI_CALL(0x000D3E90u, sub_000D3E90); /* call 0x000D3E90 */

loc_004499D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004499DC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004499E0
 * Original: 0x004499E0 - 0x004499ED (13 bytes, 2 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004499E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004499E0: ;
    MEM32(esp + 0xC) = 1;
    g_seh_ebp = ebp; sub_00449770(); return; /* tail jmp 0x00449770 */

}

/**
 * sub_004499F0
 * Original: 0x004499F0 - 0x004499FD (13 bytes, 2 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004499F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004499F0: ;
    MEM32(esp + 8) = 1;
    g_seh_ebp = ebp; sub_004497B0(); return; /* tail jmp 0x004497B0 */

}

/**
 * sub_00449A00
 * Original: 0x00449A00 - 0x00449A5B (91 bytes, 36 insns)
 * Folder: sound (between: 0x00447BE0 and 0x00449CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00449A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00449A00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, 0x00449A08u); RECOMP_ABI_CALL(0x000D40E0u, sub_000D40E0); /* call 0x000D40E0 */

loc_00449A08: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00449A26; /* jne: not equal / not zero */

loc_00449A11: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x572864);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00449A1Fu); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_00449A1F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00449A26: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esi) = 0x11223344;
    PUSH32(esp, 0x00449A40u); RECOMP_ABI_CALL(0x004496E0u, sub_004496E0); /* call 0x004496E0 */

loc_00449A40: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00449A57; /* jne: not equal / not zero */

loc_00449A4A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00449A50u); RECOMP_ABI_CALL(0x000D4050u, sub_000D4050); /* call 0x000D4050 */

loc_00449A50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00449A57: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
