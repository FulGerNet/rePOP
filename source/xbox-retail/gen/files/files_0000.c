/**
 * PoP SoT xbox-retail - files, chunk 0
 * BIG file archive and disk access (Jade SDK BIGfiles, Base disk)
 * Functions: 156 (0x0009A1C0 - 0x000E47A0)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_0009A1C0
 * Original: 0x0009A1C0 - 0x0009A283 (195 bytes, 58 insns)
 * Folder: files (source: file_native.cpp)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009A1C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0x0009A1EDu); RECOMP_ABI_CALL(0x003314E2u, sub_003314E2); /* call 0x003314E2 */

loc_0009A1ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A26F; /* jne: not equal / not zero */

loc_0009A1F6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x46B1B4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A20A; /* jne: not equal / not zero */

loc_0009A203: ;
    PUSH32(esp, 0x0009A208u); RECOMP_ABI_CALL(0x00096930u, sub_00096930); /* call 0x00096930 */

loc_0009A208: ;
    esi = eax;

loc_0009A20A: ;
    ebp = esi + 0x2E04;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = ebp;
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x0009A21Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A215u); } /* indirect call */
    }

loc_0009A21B: ;
    PUSH32(esp, 0x249);
    PUSH32(esp, 0x41FCF0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x41FCD0);
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x0009A238u); RECOMP_ABI_CALL(0x00096B40u, sub_00096B40); /* call 0x00096B40 */

loc_0009A238: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7659AC);
    ebx = eax;
    ecx = 2;
    edi = esi;
    PUSH32(esp, 0x0009A24Eu); RECOMP_ABI_CALL(0x00096B80u, sub_00096B80); /* call 0x00096B80 */

loc_0009A24E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009A254; /* jne: not equal / not zero */

loc_0009A253: ;
    /* int3: debug-trap slide byte, stepped over */

loc_0009A254: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x0009A263u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A25Du); } /* indirect call */
    }

loc_0009A263: ;
    esi = MEM32(esp + 0x24);
    PUSH32(esp, 0x0009A26Cu); RECOMP_ABI_CALL(0x00099DB0u, sub_00099DB0); /* call 0x00099DB0 */

loc_0009A26C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0009A26F: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DBDE0_gen
 * Original: 0x000DBDE0 - 0x000DBEA5 (197 bytes, 54 insns)
 * Folder: files (match: xbox-demo 0x000C05D0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DBDE0_gen(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DBDE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(int32_t)SMEM16(ecx);
    MEM32(esp + 8) = edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 4) = edx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_push(MEMF(esp + 8)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000DBE29; /* ja: above (unsigned >) */

loc_000DBE23: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_000DBE29: ;
    xmm2 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x42950C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x429360)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DBE7A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_000DBE74: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    goto loc_000DBE87;

loc_000DBE7A: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DBE87; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000DBE83: ;
    MEMF(eax) = xmm2.f[0]; /* movss */

loc_000DBE87: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DBE92; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_000DBE8D: ;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */

loc_000DBE92: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DBEA1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000DBE9C: ;
    MEMF(eax + 4) = xmm2.f[0]; /* movss */

loc_000DBEA1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
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
 * sub_000DBEB0
 * Original: 0x000DBEB0 - 0x000DC158 (680 bytes, 208 insns)
 * Folder: files (between: 0x000DBDE0 and 0x000DC420)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DBEB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DBEB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DBEBCu); RECOMP_ABI_CALL(0x000DBC60u, sub_000DBC60); /* call 0x000DBC60 */

loc_000DBEBC: ;
    ebp = 0x47131C;
    esi = 0x471078;
    MEM32(esp + 0x18) = 4;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000DBED0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000DC138; /* je: equal / zero */

loc_000DBEDA: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DBEE4u); RECOMP_ABI_CALL(0x00417F85u, sub_00417F85); /* call 0x00417F85 */

loc_000DBEE4: ;
    edi = esi + -208;
    edx = ebp;
    ecx = MEM32(edx);
    eax = edi;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(edx + 0xC);
    SET_LO16(edx, MEM16(edx + 0x10));
    MEM32(eax + 0xC) = ecx;
    MEM16(eax + 0x10) = LO16(edx);
    SET_LO16(eax, MEM16(esi + -198));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x2328) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x2328 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000DBF40; /* jle: less or equal (signed <=) */

loc_000DBF19: ;
    ecx = SX16(LO16(eax));
    _fb = (uint32_t)(0x2328) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x2328));
    ecx = ecx - 0x2328;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x7FFF);
    eax = 0x583CEC1;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    if (((9) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((9) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((9) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    if (0x1F) _cf = (int)(((eax) >> ((0x1F) - 1)) & 1);
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esp + 0x10) = LO16(eax);
    goto loc_000DBF72;

loc_000DBF40: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xDCD8) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xDCD8 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000DBF6D; /* jge: greater or equal (signed >=) */

loc_000DBF46: ;
    edx = SX16(LO16(eax));
    ecx = 0xFFFFDCD8u;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (0xF) _cf = (int)(((ecx) >> (32 - (0xF))) & 1);
    ecx = ecx << 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x4F880E79;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((0xE) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((0xE) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xE) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    if (0x1F) _cf = (int)(((eax) >> ((0x1F) - 1)) & 1);
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esp + 0x10) = LO16(eax);
    goto loc_000DBF72;

loc_000DBF6D: ;
    MEM16(esp + 0x10) = LO16(ebx);

loc_000DBF72: ;
    SET_LO16(eax, MEM16(esi + -196));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x2328) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x2328 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000DBFA6; /* jle: less or equal (signed <=) */

loc_000DBF7F: ;
    ecx = SX16(LO16(eax));
    _fb = (uint32_t)(0x2328) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x2328));
    ecx = ecx - 0x2328;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x7FFF);
    eax = 0x583CEC1;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    if (((9) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((9) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((9) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    if (0x1F) _cf = (int)(((ecx) >> ((0x1F) - 1)) & 1);
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esp + 0x12) = LO16(ecx);
    goto loc_000DBFD8;

loc_000DBFA6: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xDCD8) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xDCD8 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000DBFD3; /* jge: greater or equal (signed >=) */

loc_000DBFAC: ;
    edx = SX16(LO16(eax));
    ecx = 0xFFFFDCD8u;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (0xF) _cf = (int)(((ecx) >> (32 - (0xF))) & 1);
    ecx = ecx << 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x4F880E79;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((0xE) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((0xE) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xE) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    if (0x1F) _cf = (int)(((eax) >> ((0x1F) - 1)) & 1);
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esp + 0x12) = LO16(eax);
    goto loc_000DBFD8;

loc_000DBFD3: ;
    MEM16(esp + 0x12) = LO16(ebx);

loc_000DBFD8: ;
    SET_LO16(eax, MEM16(esi + -194));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x2328) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x2328 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000DC00C; /* jle: less or equal (signed <=) */

loc_000DBFE5: ;
    ecx = SX16(LO16(eax));
    _fb = (uint32_t)(0x2328) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x2328));
    ecx = ecx - 0x2328;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x7FFF);
    eax = 0x583CEC1;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    if (((9) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((9) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((9) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    if (0x1F) _cf = (int)(((ecx) >> ((0x1F) - 1)) & 1);
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esp + 0x14) = LO16(ecx);
    goto loc_000DC03E;

loc_000DC00C: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xDCD8) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xDCD8 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000DC039; /* jge: greater or equal (signed >=) */

loc_000DC012: ;
    edx = SX16(LO16(eax));
    ecx = 0xFFFFDCD8u;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (0xF) _cf = (int)(((ecx) >> (32 - (0xF))) & 1);
    ecx = ecx << 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x4F880E79;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((0xE) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((0xE) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xE) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    if (0x1F) _cf = (int)(((eax) >> ((0x1F) - 1)) & 1);
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esp + 0x14) = LO16(eax);
    goto loc_000DC03E;

loc_000DC039: ;
    MEM16(esp + 0x14) = LO16(ebx);

loc_000DC03E: ;
    SET_LO16(eax, MEM16(esi + -192));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x2328) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x2328 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000DC072; /* jle: less or equal (signed <=) */

loc_000DC04B: ;
    ecx = SX16(LO16(eax));
    _fb = (uint32_t)(0x2328) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x2328));
    ecx = ecx - 0x2328;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x7FFF);
    eax = 0x583CEC1;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    if (((9) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((9) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((9) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    if (0x1F) _cf = (int)(((ecx) >> ((0x1F) - 1)) & 1);
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esp + 0x16) = LO16(ecx);
    goto loc_000DC0A4;

loc_000DC072: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xDCD8) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xDCD8 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000DC09F; /* jge: greater or equal (signed >=) */

loc_000DC078: ;
    edx = SX16(LO16(eax));
    ecx = 0xFFFFDCD8u;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (0xF) _cf = (int)(((ecx) >> (32 - (0xF))) & 1);
    ecx = ecx << 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x4F880E79;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((0xE) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((0xE) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xE) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    if (0x1F) _cf = (int)(((eax) >> ((0x1F) - 1)) & 1);
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esp + 0x16) = LO16(eax);
    goto loc_000DC0A4;

loc_000DC09F: ;
    MEM16(esp + 0x16) = LO16(ebx);

loc_000DC0A4: ;
    eax = esi + -188;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000DC0B3u); RECOMP_ABI_CALL(0x000DBDE0u, sub_000DBDE0); /* call 0x000DBDE0 */

loc_000DC0B3: ;
    eax = esi + -180;
    ecx = esp + 0x14;
    PUSH32(esp, 0x000DC0C2u); RECOMP_ABI_CALL(0x000DBDE0u, sub_000DBDE0); /* call 0x000DBDE0 */

loc_000DC0C2: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + -172));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi));
    _cf = 0; /* logical op clears CF */
    SET_LO16(ecx, LO16(ecx) ^ LO16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    MEM16(esi + -172) = LO16(eax);
    edi = esi + -168;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esi + -136) = LO16(ecx);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000DC0F0;

    /* nop */

loc_000DC0F0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000DC109; /* je: equal / zero */

loc_000DC0F5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000DC109; /* je: equal / zero */

loc_000DC0FA: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + ecx + -206));
    SET_LO8(edx, 0x1E);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    goto loc_000DC116;

loc_000DC109: ;
    SET_LO8(edx, MEM8(esi + ecx + -206));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 0x6E);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    _cf = (int)(_fa < _fb);

loc_000DC116: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000DC12A; /* je: equal / zero */

loc_000DC11E: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(edi + 0x24) = edx;
    goto loc_000DC12D;

loc_000DC12A: ;
    MEM32(edi + 0x24) = ebx;

loc_000DC12D: ;
    MEM32(edi) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000DC0F0; /* jb: below (unsigned <) */

loc_000DC138: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x16)) >> 32) & 1);
    ebp = ebp + 0x16;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xDC)) >> 32) & 1);
    esi = esi + 0xDC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_000DBED0; /* jne: not equal / not zero */

loc_000DC150: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DC160
 * Original: 0x000DC160 - 0x000DC414 (692 bytes, 170 insns)
 * Folder: files (between: 0x000DBDE0 and 0x000DC420)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DC160: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DC16Au); RECOMP_ABI_CALL(0x000DBEB0u, sub_000DBEB0); /* call 0x000DBEB0 */

loc_000DC16A: ;
    esi = 0x470E90;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = esi;
    ebp = 0x470FCC;
    /* nop */

loc_000DC180: ;
    eax = MEM32(edi * 4 + 0x758CAC);
    MEM32(edi * 4 + 0x758C9C) = eax;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 4), ebx (32-bit) */
    MEM32(edi * 4 + 0x758CAC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000DC1A5; /* je: equal / zero */

loc_000DC19A: ;
    MEM32(edi * 4 + 0x758CAC) = 1;

loc_000DC1A5: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC1B2; /* je: equal / zero */

loc_000DC1AA: ;
    MEM32(edi * 4 + 0x758CAC) = MEM32(edi * 4 + 0x758CAC) | 2;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x758CAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000DC1B2: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC1BF; /* je: equal / zero */

loc_000DC1B7: ;
    MEM32(edi * 4 + 0x758CAC) = MEM32(edi * 4 + 0x758CAC) | 4;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x758CAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000DC1BF: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC1CC; /* je: equal / zero */

loc_000DC1C4: ;
    MEM32(edi * 4 + 0x758CAC) = MEM32(edi * 4 + 0x758CAC) | 8;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x758CAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000DC1CC: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC1D9; /* je: equal / zero */

loc_000DC1D1: ;
    MEM32(edi * 4 + 0x758CAC) = MEM32(edi * 4 + 0x758CAC) | 0x10;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x758CAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000DC1D9: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC1E6; /* je: equal / zero */

loc_000DC1DE: ;
    MEM32(edi * 4 + 0x758CAC) = MEM32(edi * 4 + 0x758CAC) | 0x20;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x758CAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000DC1E6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC1F3; /* je: equal / zero */

loc_000DC1EB: ;
    MEM32(edi * 4 + 0x758CAC) = MEM32(edi * 4 + 0x758CAC) | 0x40;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x758CAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000DC1F3: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC203; /* je: equal / zero */

loc_000DC1F8: ;
    MEM32(edi * 4 + 0x758CAC) = MEM32(edi * 4 + 0x758CAC) | 0x80;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x758CAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000DC203: ;
    SET_LO16(eax, MEM16(ebp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DC216; /* je: equal / zero */

loc_000DC20B: ;
    MEM32(edi * 4 + 0x758CAC) = MEM32(edi * 4 + 0x758CAC) | 0x100;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x758CAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000DC216: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DC225; /* je: equal / zero */

loc_000DC21A: ;
    MEM32(edi * 4 + 0x758CAC) = MEM32(edi * 4 + 0x758CAC) | 0x200;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x758CAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000DC225: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_000DC234; /* jns: not sign (positive) */

loc_000DC229: ;
    MEM32(edi * 4 + 0x758CAC) = MEM32(edi * 4 + 0x758CAC) | 0x400;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x758CAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000DC234: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DC243; /* je: equal / zero */

loc_000DC238: ;
    MEM32(edi * 4 + 0x758CAC) = MEM32(edi * 4 + 0x758CAC) | 0x800;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x758CAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000DC243: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DC252; /* je: equal / zero */

loc_000DC247: ;
    MEM32(edi * 4 + 0x758CAC) = MEM32(edi * 4 + 0x758CAC) | 0x1000;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x758CAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000DC252: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DC261; /* je: equal / zero */

loc_000DC256: ;
    MEM32(edi * 4 + 0x758CAC) = MEM32(edi * 4 + 0x758CAC) | 0x2000;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x758CAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000DC261: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DC270; /* je: equal / zero */

loc_000DC265: ;
    MEM32(edi * 4 + 0x758CAC) = MEM32(edi * 4 + 0x758CAC) | 0x4000;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x758CAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000DC270: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DC27F; /* je: equal / zero */

loc_000DC274: ;
    MEM32(edi * 4 + 0x758CAC) = MEM32(edi * 4 + 0x758CAC) | 0x8000;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x758CAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000DC27F: ;
    eax = MEM32(edi * 4 + 0x471390);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC2C8; /* je: equal / zero */

loc_000DC28A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(edi * 4 + 0x471390) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000DC2C8; /* jne: not equal / not zero */

loc_000DC296: ;
    eax = MEM32(ebp + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC2C8; /* je: equal / zero */

loc_000DC2A0: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC2B3; /* jne: not equal / not zero */

loc_000DC2A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM16(esi + 0x44) = LO16(ebx);
    PUSH32(esp, 0x000DC2B1u); RECOMP_ABI_CALL(0x00417FF8u, sub_00417FF8); /* call 0x00417FF8 */

loc_000DC2B1: ;
    goto loc_000DC2C8;

loc_000DC2B3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x48F (32-bit) */
    MEM32(edi * 4 + 0x471390) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000DC2C8; /* jne: not equal / not zero */

loc_000DC2C6: ;
    MEM32(esi) = ebx;

loc_000DC2C8: ;
    eax = MEM32(edi * 4 + 0x471380);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC2E8; /* je: equal / zero */

loc_000DC2D3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(edi * 4 + 0x471380) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000DC2E8; /* jne: not equal / not zero */

loc_000DC2DF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    PUSH32(esp, 0x000DC2E8u); RECOMP_ABI_CALL(0x000DC700u, sub_000DC700); /* call 0x000DC700 */

loc_000DC2E8: ;
    ecx = MEM32(0x43B14C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC3D9; /* jne: not equal / not zero */

loc_000DC2F7: ;
    eax = MEM32(edi * 4 + 0x758C9C);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DC30F; /* je: equal / zero */

loc_000DC303: ;
    edx = MEM32(edi * 4 + 0x758CAC);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DC325; /* je: equal / zero */

loc_000DC30F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DC3D9; /* je: equal / zero */

loc_000DC317: ;
    _fa = (uint32_t)(MEM8(edi * 4 + 0x758CAC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi * 4 + 0x758CAC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000DC3D9; /* jne: not equal / not zero */

loc_000DC325: ;
    _fa = (uint32_t)(MEM32(0x43B154)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x43B154), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC3D9; /* jne: not equal / not zero */

loc_000DC331: ;
    esi = MEM32(0x758C90);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(0x43B14C) = edi;
    MEM32(0x758C94) = 1;
    MEM32(0x758C98) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000DC3A0; /* je: equal / zero */

loc_000DC351: ;
    eax = edi;
    PUSH32(esp, 0x000DC358u); RECOMP_ABI_CALL(0x000DC420u, sub_000DC420); /* call 0x000DC420 */

loc_000DC358: ;
    PUSH32(esp, esi);
    MEM32(0x758C94) = ebx;
    PUSH32(esp, 0x000DC364u); RECOMP_ABI_CALL(0x00018990u, sub_00018990); /* call 0x00018990 */

loc_000DC364: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758C90) = ebx;
    PUSH32(esp, 0x000DC372u); RECOMP_ABI_CALL(0x0001A910u, sub_0001A910); /* call 0x0001A910 */

loc_000DC372: ;
    PUSH32(esp, 0x000DC377u); RECOMP_ABI_CALL(0x000E7360u, sub_000E7360); /* call 0x000E7360 */

loc_000DC377: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC3A0; /* jne: not equal / not zero */

loc_000DC37B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000DC384u); RECOMP_ABI_CALL(0x000E78A0u, sub_000E78A0); /* call 0x000E78A0 */

loc_000DC384: ;
    eax = MEM32(0x7584E0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC3A0; /* je: equal / zero */

loc_000DC390: ;
    eax = MEM32(0x7584F4);
    PUSH32(esp, 0x000DC39Au); RECOMP_ABI_CALL(0x0001CBF0u, sub_0001CBF0); /* call 0x0001CBF0 */

loc_000DC39A: ;
    MEM32(0x7584E0) = ebx;

loc_000DC3A0: ;
    PUSH32(esp, 0x000DC3A5u); RECOMP_ABI_CALL(0x00014870u, sub_00014870); /* call 0x00014870 */

loc_000DC3A5: ;
    _fa = (uint32_t)(MEM32(eax + 0x2A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2A0), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC3BB; /* jne: not equal / not zero */

loc_000DC3AD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000DC3B4u); RECOMP_ABI_CALL(0x00014870u, sub_00014870); /* call 0x00014870 */

loc_000DC3B4: ;
    esi = eax;
    PUSH32(esp, 0x000DC3BBu); RECOMP_ABI_CALL(0x00014AA0u, sub_00014AA0); /* call 0x00014AA0 */

loc_000DC3BB: ;
    ecx = MEM32(0x43B14C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x43B150)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x43B150) (32-bit) */
    esi = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_000DC3D9; /* jne: not equal / not zero */

loc_000DC3CD: ;
    MEM32(0x43B150) = 0xFFFFFFFFu;
    goto loc_000DC3E2;

loc_000DC3D9: ;
    _fa = (uint32_t)(MEM32(0x43B150)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x43B150), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC3F4; /* jne: not equal / not zero */

loc_000DC3E2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC3F4; /* je: equal / zero */

loc_000DC3E6: ;
    _fa = (uint32_t)(MEM32(ebp + 0xAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xAC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC3F4; /* je: equal / zero */

loc_000DC3EE: ;
    MEM32(0x43B150) = edi;

loc_000DC3F4: ;
    _fb = (uint32_t)(0x46) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x46;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xDC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x470FA8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x470FA8 (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000DC180; /* jl: less (signed <) */

loc_000DC40E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DC2EE
 * Original: 0x000DC2EE - 0x000DC414 (294 bytes, 73 insns)
 * Folder: files (between: 0x000DBDE0 and 0x000DC420)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC2EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DC2EE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC3D9; /* jne: not equal / not zero */

loc_000DC2F7: ;
    eax = MEM32(edi * 4 + 0x758C9C);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DC30F; /* je: equal / zero */

loc_000DC303: ;
    edx = MEM32(edi * 4 + 0x758CAC);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DC325; /* je: equal / zero */

loc_000DC30F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DC3D9; /* je: equal / zero */

loc_000DC317: ;
    _fa = (uint32_t)(MEM8(edi * 4 + 0x758CAC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi * 4 + 0x758CAC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000DC3D9; /* jne: not equal / not zero */

loc_000DC325: ;
    _fa = (uint32_t)(MEM32(0x43B154)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x43B154), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC3D9; /* jne: not equal / not zero */

loc_000DC331: ;
    esi = MEM32(0x758C90);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(0x43B14C) = edi;
    MEM32(0x758C94) = 1;
    MEM32(0x758C98) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000DC3A0; /* je: equal / zero */

loc_000DC351: ;
    eax = edi;
    PUSH32(esp, 0x000DC358u); RECOMP_ABI_CALL(0x000DC420u, sub_000DC420); /* call 0x000DC420 */

loc_000DC358: ;
    PUSH32(esp, esi);
    MEM32(0x758C94) = ebx;
    PUSH32(esp, 0x000DC364u); RECOMP_ABI_CALL(0x00018990u, sub_00018990); /* call 0x00018990 */

loc_000DC364: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758C90) = ebx;
    PUSH32(esp, 0x000DC372u); RECOMP_ABI_CALL(0x0001A910u, sub_0001A910); /* call 0x0001A910 */

loc_000DC372: ;
    PUSH32(esp, 0x000DC377u); RECOMP_ABI_CALL(0x000E7360u, sub_000E7360); /* call 0x000E7360 */

loc_000DC377: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC3A0; /* jne: not equal / not zero */

loc_000DC37B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000DC384u); RECOMP_ABI_CALL(0x000E78A0u, sub_000E78A0); /* call 0x000E78A0 */

loc_000DC384: ;
    eax = MEM32(0x7584E0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC3A0; /* je: equal / zero */

loc_000DC390: ;
    eax = MEM32(0x7584F4);
    PUSH32(esp, 0x000DC39Au); RECOMP_ABI_CALL(0x0001CBF0u, sub_0001CBF0); /* call 0x0001CBF0 */

loc_000DC39A: ;
    MEM32(0x7584E0) = ebx;

loc_000DC3A0: ;
    PUSH32(esp, 0x000DC3A5u); RECOMP_ABI_CALL(0x00014870u, sub_00014870); /* call 0x00014870 */

loc_000DC3A5: ;
    _fa = (uint32_t)(MEM32(eax + 0x2A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2A0), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC3BB; /* jne: not equal / not zero */

loc_000DC3AD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000DC3B4u); RECOMP_ABI_CALL(0x00014870u, sub_00014870); /* call 0x00014870 */

loc_000DC3B4: ;
    esi = eax;
    PUSH32(esp, 0x000DC3BBu); RECOMP_ABI_CALL(0x00014AA0u, sub_00014AA0); /* call 0x00014AA0 */

loc_000DC3BB: ;
    ecx = MEM32(0x43B14C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x43B150)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x43B150) (32-bit) */
    esi = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_000DC3D9; /* jne: not equal / not zero */

loc_000DC3CD: ;
    MEM32(0x43B150) = 0xFFFFFFFFu;
    goto loc_000DC3E2;

loc_000DC3D9: ;
    _fa = (uint32_t)(MEM32(0x43B150)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x43B150), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC3F4; /* jne: not equal / not zero */

loc_000DC3E2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC3F4; /* je: equal / zero */

loc_000DC3E6: ;
    _fa = (uint32_t)(MEM32(ebp + 0xAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xAC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC3F4; /* je: equal / zero */

loc_000DC3EE: ;
    MEM32(0x43B150) = edi;

loc_000DC3F4: ;
    _fb = (uint32_t)(0x46) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x46;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xDC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x470FA8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x470FA8 (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000DC180(); return; } /* jl: less (signed <) */

loc_000DC40E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DC420
 * Original: 0x000DC420 - 0x000DC4EC (204 bytes, 66 insns)
 * Folder: files (match: xbox-demo 0x000C0B40, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DC420: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC431; /* jne: not equal / not zero */

loc_000DC428: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 4;
    goto loc_000DC434;

loc_000DC431: ;
    ecx = eax + 1;

loc_000DC434: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000DC4E8; /* jge: greater or equal (signed >=) */

loc_000DC43C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp) = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx * 4;
    PUSH32(esp, edi);
    edx = eax * 4 + 0x758C9C;
    MEM32(esp + 0x14) = edx;
    edi = eax * 4 + 0x471380;
    ebx = eax * 4 + 0x471390;
    ebp = eax * 4 + 0x758CAC;
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0xDC);
    ecx = esi;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(esp + 0x14);
    ecx = esi;
    _fb = (uint32_t)(0x470FC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x470FC0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_000DC4A3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(edx + -4) = xmm0.f[0]; /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    MEM16(edx + 0x30) = LO16(esi);
    MEM16(edx + 0xC) = LO16(esi);
    eax = edx + 0x10;
    ecx = 8;

loc_000DC4C8: ;
    MEM32(eax + 0x24) = esi;
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000DC4C8; /* jne: not equal / not zero */

loc_000DC4D3: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xDC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_000DC4A3; /* jne: not equal / not zero */

loc_000DC4E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000DC4E8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DC4F0
 * Original: 0x000DC4F0 - 0x000DC55C (108 bytes, 40 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DC4F0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x43B154);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC534; /* jne: not equal / not zero */

loc_000DC4FD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC50F; /* jne: not equal / not zero */

loc_000DC501: ;
    eax = MEM32(0x43B14C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC522; /* jne: not equal / not zero */

loc_000DC50B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DC50F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC50B; /* jne: not equal / not zero */

loc_000DC514: ;
    eax = MEM32(0x43B150);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC522; /* jne: not equal / not zero */

loc_000DC51E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DC522: ;
    eax = MEM32(eax * 4 + 0x758CAC);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_000DC534: ;
    edx = 0x758CAC;
    /* nop */

loc_000DC540: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x758CBC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x758CBC (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000DC55A; /* jge: greater or equal (signed >=) */

loc_000DC548: ;
    esi = MEM32(edx);
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC540; /* je: equal / zero */

loc_000DC55A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DC560
 * Original: 0x000DC560 - 0x000DC59E (62 bytes, 19 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DC560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DC560: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC56C; /* jne: not equal / not zero */

loc_000DC564: ;
    edx = MEM32(0x43B14C);
    goto loc_000DC577;

loc_000DC56C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC59B; /* jne: not equal / not zero */

loc_000DC571: ;
    edx = MEM32(0x43B150);

loc_000DC577: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC59B; /* je: equal / zero */

loc_000DC57C: ;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(edx * 4 + 0x758CAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx * 4 + 0x758CAC), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DC59B; /* je: equal / zero */

loc_000DC58C: ;
    _fa = (uint32_t)(MEM32(edx * 4 + 0x758C9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx * 4 + 0x758C9C), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000DC59B; /* jne: not equal / not zero */

loc_000DC595: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000DC59B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DC5A0
 * Original: 0x000DC5A0 - 0x000DC627 (135 bytes, 45 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DC5A0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x43B154);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC5F0; /* jne: not equal / not zero */

loc_000DC5AD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC5C0; /* jne: not equal / not zero */

loc_000DC5B1: ;
    esi = MEM32(0x43B14C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC5D0; /* jne: not equal / not zero */

loc_000DC5BC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DC5C0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC5BC; /* jne: not equal / not zero */

loc_000DC5C5: ;
    esi = MEM32(0x43B150);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC5BC; /* je: equal / zero */

loc_000DC5D0: ;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(esi * 4 + 0x758CAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi * 4 + 0x758CAC), edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000DC625; /* jne: not equal / not zero */

loc_000DC5E0: ;
    _fa = (uint32_t)(MEM32(esi * 4 + 0x758C9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi * 4 + 0x758C9C), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DC625; /* je: equal / zero */

loc_000DC5E9: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DC5F0: ;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000DC600: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000DC625; /* jge: greater or equal (signed >=) */

loc_000DC605: ;
    _fa = (uint32_t)(MEM32(ecx + 0x758CAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0x758CAC), edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000DC61C; /* jne: not equal / not zero */

loc_000DC60D: ;
    _fa = (uint32_t)(MEM32(ecx + 0x758C9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0x758C9C), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000DC61C; /* je: equal / zero */

loc_000DC615: ;
    eax = 1;
    goto loc_000DC61E;

loc_000DC61C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000DC61E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC600; /* je: equal / zero */

loc_000DC625: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DC630
 * Original: 0x000DC630 - 0x000DC69A (106 bytes, 31 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DC630: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC63B; /* jne: not equal / not zero */

loc_000DC634: ;
    eax = MEM32(0x43B14C);
    goto loc_000DC645;

loc_000DC63B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC699; /* jne: not equal / not zero */

loc_000DC640: ;
    eax = MEM32(0x43B150);

loc_000DC645: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC65C; /* jne: not equal / not zero */

loc_000DC64A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000DC65C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xDC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC680; /* jne: not equal / not zero */

loc_000DC666: ;
    edx = MEM32(eax + 0x470FBC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx) = edx;
    eax = MEM32(eax + 0x470FC0);
    MEM32(ecx + 4) = eax;
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000DC680: ;
    edx = MEM32(eax + 0x470FC4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx) = edx;
    eax = MEM32(eax + 0x470FC8);
    MEM32(ecx + 4) = eax;
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */

loc_000DC699: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DC6A0
 * Original: 0x000DC6A0 - 0x000DC700 (96 bytes, 32 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000DC6A0: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xDC);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x471078);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC6FE; /* je: equal / zero */

loc_000DC6B3: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x46);
    edx = eax + 0x470E90;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000DC6E0; /* jne: not equal / not zero */

loc_000DC6C5: ;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, edx);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    MEM16(eax + 0x470ED4) = LO16(ecx);
    PUSH32(esp, 0x000DC6DDu); RECOMP_ABI_CALL(0x00417FF8u, sub_00417FF8); /* call 0x00417FF8 */

loc_000DC6DD: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DC6E0: ;
    ecx = MEM32(esi * 4 + 0x471390);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x48F (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi * 4 + 0x471390) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000DC6FD; /* jne: not equal / not zero */

loc_000DC6F7: ;
    MEM32(edx) = 0;

loc_000DC6FD: ;
    POP32(esp, edi);

loc_000DC6FE: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DC700
 * Original: 0x000DC700 - 0x000DC795 (149 bytes, 45 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC700(void)
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

loc_000DC700: ;
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xDC);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x471078);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC792; /* je: equal / zero */

loc_000DC714: ;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x46);
    ecx = MEM32(esi + 0x470D78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x470D78;
    if (CMP_NE(_fa, _fb)) goto loc_000DC773; /* jne: not equal / not zero */

loc_000DC72B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DC73D; /* jle: less or equal (signed <=) */

loc_000DC733: ;
    xmm0 = XMM_SCALAR(MEMF(0x429508)); /* movss */
    goto loc_000DC751;

loc_000DC73D: ;
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4293B0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429508); /* mulss */

loc_000DC751: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, 0x000DC760u); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_000DC760: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM16(esi + 0x470DBA) = LO16(eax);
    PUSH32(esp, 0x000DC76Eu); RECOMP_ABI_CALL(0x00417FF8u, sub_00417FF8); /* call 0x00417FF8 */

loc_000DC76E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000DC773: ;
    edx = MEM32(eax * 4 + 0x471380);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x48F (32-bit) */
    MEM32(eax * 4 + 0x471380) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000DC790; /* jne: not equal / not zero */

loc_000DC78A: ;
    MEM32(edi) = 0;

loc_000DC790: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000DC792: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DC7A0
 * Original: 0x000DC7A0 - 0x000DC804 (100 bytes, 25 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC7A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DC7A0: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x100) = eax;
    eax = MEM32(0x758CBC);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DC7C7u); RECOMP_ABI_CALL(0x00331621u, sub_00331621); /* call 0x00331621 */

loc_000DC7C7: ;
    edx = MEM32(esp + 0x108);
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DC7D9u); RECOMP_ABI_CALL(0x003316C4u, sub_003316C4); /* call 0x003316C4 */

loc_000DC7D9: ;
    PUSH32(esp, 0x428EEC);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DC7E8u); RECOMP_ABI_CALL(0x003316C4u, sub_003316C4); /* call 0x003316C4 */

loc_000DC7E8: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000DC7F1u); RECOMP_ABI_CALL(0x000D92A0u, sub_000D92A0); /* call 0x000D92A0 */

loc_000DC7F1: ;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, 0x000DC7FDu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000DC7FD: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DC810
 * Original: 0x000DC810 - 0x000DC862 (82 bytes, 20 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DC810: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x100) = eax;
    eax = MEM32(esp + 0x108);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, 0x428F18);
    PUSH32(esp, eax);
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x000DC840u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000DC840: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DC84Au); RECOMP_ABI_CALL(0x000DC7A0u, sub_000DC7A0); /* call 0x000DC7A0 */

loc_000DC84A: ;
    ecx = MEM32(esp + 0x118);
    eax = 1;
    PUSH32(esp, 0x000DC85Bu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000DC85B: ;
    _fb = (uint32_t)(0x11C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x11C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DC870
 * Original: 0x000DC870 - 0x000DC8CB (91 bytes, 33 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DC870: ;
    PUSH32(esp, 0x000DC875u); RECOMP_ABI_CALL(0x000DC8D0u, sub_000DC8D0); /* call 0x000DC8D0 */

loc_000DC875: ;
    PUSH32(esp, 0x000DC87Au); RECOMP_ABI_CALL(0x000D9370u, sub_000D9370); /* call 0x000D9370 */

loc_000DC87A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000DC8CA; /* je: equal / zero */

loc_000DC880: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DC88Au); RECOMP_ABI_CALL(0x00346DF4u, sub_00346DF4); /* call 0x00346DF4 */

loc_000DC88A: ;
    ecx = eax;
    eax = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x4713B8) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_000DC8BD; /* jbe: below or equal (unsigned <=) */

loc_000DC89D: ;
    /* nop */

loc_000DC8A0: ;
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x000DC8AAu); RECOMP_ABI_CALL(0x00346D50u, sub_00346D50); /* call 0x00346D50 */

loc_000DC8AA: ;
    ecx = MEM32(0x4713B8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + esi * 4) = eax;
    eax = MEM32(edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000DC8A0; /* jb: below (unsigned <) */

loc_000DC8BD: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DC8C6u); RECOMP_ABI_CALL(0x000D9440u, sub_000D9440); /* call 0x000D9440 */

loc_000DC8C6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_000DC8CA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DC8D0
 * Original: 0x000DC8D0 - 0x000DC91B (75 bytes, 25 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DC8D0: ;
    ecx = MEM32(0x4713B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC91A; /* je: equal / zero */

loc_000DC8DA: ;
    eax = MEM32(0x758E08);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000DC906; /* jbe: below or equal (unsigned <=) */

loc_000DC8E6: ;
    eax = MEM32(ecx + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC8FC; /* je: equal / zero */

loc_000DC8ED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DC8F3u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_000DC8F3: ;
    ecx = MEM32(0x4713B8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DC8FC: ;
    eax = MEM32(0x758E08);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000DC8E6; /* jb: below (unsigned <) */

loc_000DC906: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DC90Cu); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_000DC90C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4713B8) = 0;
    POP32(esp, esi);

loc_000DC91A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DC920
 * Original: 0x000DC920 - 0x000DC9B2 (146 bytes, 34 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DC920: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(esp + 0x100) = eax;
    eax = MEM32(0x758CBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC950; /* jne: not equal / not zero */

loc_000DC93B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x000DC949u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000DC949: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DC950: ;
    eax = MEM32(esp + 0x114);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DC962u); RECOMP_ABI_CALL(0x00331621u, sub_00331621); /* call 0x00331621 */

loc_000DC962: ;
    PUSH32(esp, 0x428EEC);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000DC971u); RECOMP_ABI_CALL(0x003316C4u, sub_003316C4); /* call 0x003316C4 */

loc_000DC971: ;
    eax = MEM32(esp + 0x10C);
    edx = MEM32(esp + 0x108);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, edx);
    MEM32(0x43B158) = 0;
    PUSH32(esp, 0x000DC99Cu); RECOMP_ABI_CALL(0x000D9910u, sub_000D9910); /* call 0x000D9910 */

loc_000DC99C: ;
    ecx = MEM32(esp + 0x10C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DC9ABu); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000DC9AB: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DC9C0
 * Original: 0x000DC9C0 - 0x000DCA05 (69 bytes, 30 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DC9C0: ;
    eax = MEM32(0x765518);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000DC9CC; /* ja: above (unsigned >) */

loc_000DC9C9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000DC9CC: ;
    eax = MEM32(0x765514);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000DC9FB; /* je: equal / zero */

loc_000DC9D9: ;
    /* nop */

loc_000DC9E0: ;
    edi = MEM32(esi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DC9EAu); RECOMP_ABI_CALL(0x00347E93u, sub_00347E93); /* call 0x00347E93 */

loc_000DC9EA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DCA00; /* je: equal / zero */

loc_000DC9F1: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x765514)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x765514) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC9E0; /* jne: not equal / not zero */

loc_000DC9FB: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DCA00: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DCA10
 * Original: 0x000DCA10 - 0x000DCA4B (59 bytes, 25 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DCA10: ;
    eax = MEM32(0x765514);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DCA49; /* je: equal / zero */

loc_000DCA1C: ;
    PUSH32(esp, edi);
    /* nop */

loc_000DCA20: ;
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DCA42; /* je: equal / zero */

loc_000DCA27: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DCA35; /* jne: not equal / not zero */

loc_000DCA30: ;
    PUSH32(esp, 0x000DCA35u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DCA35: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000DCA3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DCA3Au); } /* indirect call */
    }

loc_000DCA3D: ;
    eax = MEM32(0x765514);

loc_000DCA42: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DCA20; /* jne: not equal / not zero */

loc_000DCA48: ;
    POP32(esp, edi);

loc_000DCA49: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DCA50
 * Original: 0x000DCA50 - 0x000DCA83 (51 bytes, 14 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCA50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DCA50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x428EC4);
    PUSH32(esp, ecx);
    ecx = 4;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000DCA70u); RECOMP_ABI_CALL(0x000DB100u, sub_000DB100); /* call 0x000DB100 */

loc_000DCA70: ;
    edx = MEM32(esp + 0x10);
    MEM32(0x758CC4) = edx;
    eax = 1;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DCA90
 * Original: 0x000DCA90 - 0x000DCAE3 (83 bytes, 29 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DCA90: ;
    PUSH32(esp, ebx);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DCAD2; /* je: equal / zero */

loc_000DCA97: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000DCA9Du); RECOMP_ABI_CALL(0x00347558u, sub_00347558); /* call 0x00347558 */

loc_000DCA9D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DCAD2; /* je: equal / zero */

loc_000DCAA4: ;
    eax = MEM32(0x758CBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DCAB1; /* je: equal / zero */

loc_000DCAAD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DCAB1: ;
    PUSH32(esp, 0x000DCAB6u); RECOMP_ABI_CALL(0x000DC9C0u, sub_000DC9C0); /* call 0x000DC9C0 */

loc_000DCAB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DCAAD; /* je: equal / zero */

loc_000DCABA: ;
    PUSH32(esp, 0x000DCABFu); RECOMP_ABI_CALL(0x000DC9C0u, sub_000DC9C0); /* call 0x000DC9C0 */

loc_000DCABF: ;
    ecx = eax;
    MEM32(0x758CBC) = eax;
    PUSH32(esp, 0x000DCACBu); RECOMP_ABI_CALL(0x000DCA50u, sub_000DCA50); /* call 0x000DCA50 */

loc_000DCACB: ;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DCAD2: ;
    MEM32(0x758CBC) = 0;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DCAF0
 * Original: 0x000DCAF0 - 0x000DCB49 (89 bytes, 33 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000DCAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DCAF0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000DCB44; /* jbe: below or equal (unsigned <=) */

loc_000DCAFC: ;
    PUSH32(esp, esi);
    /* nop */

loc_000DCB00: ;
    eax = MEM32(0x758BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DCB14; /* je: equal / zero */

loc_000DCB09: ;
    esi = MEM32(0x451B4C);
    PUSH32(esp, 0x000DCB14u); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_000DCB14: ;
    eax = MEM32(esp + 0x10);
    ecx = edi + eax;
    eax = MEM32(0x758634);
    PUSH32(esp, ecx);
    ecx = MEM32(0x758D04);
    edx = ebp;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DCB32u); RECOMP_ABI_CALL(0x00095BE0u, sub_00095BE0); /* call 0x00095BE0 */

loc_000DCB32: ;
    ecx = MEM32(0x758634);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DCB3Fu); RECOMP_ABI_CALL(0x00095E80u, sub_00095E80); /* call 0x00095E80 */

loc_000DCB3F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000DCB00; /* jb: below (unsigned <) */

loc_000DCB43: ;
    POP32(esp, esi);

loc_000DCB44: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000DCB50
 * Original: 0x000DCB50 - 0x000DCEF2 (930 bytes, 248 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DCB50: ;
    ecx = MEM32(0x758CD8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000DCD0E; /* jne: not equal / not zero */

loc_000DCB66: ;
    eax = 0x577FE8;
    PUSH32(esp, 0x20000);
    PUSH32(esp, eax);
    ebx = 4;
    MEM32(0x758CD8) = 0x477FE8;
    MEM32(0x758CEC) = eax;
    MEM32(0x645068) = eax;
    PUSH32(esp, 0x000DCB8Fu); RECOMP_ABI_CALL(0x000DCAF0u, sub_000DCAF0); /* call 0x000DCAF0 */

loc_000DCB8F: ;
    esi = MEM32(0x758CEC);
    ecx = MEM32(esi);
    MEM32(0x758CFC) = ecx;
    ecx = MEM32(0x758D18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000DCBE3; /* je: equal / zero */

loc_000DCBAA: ;
    edx = MEM32(0x758CFC);
    SET_LO8(ecx, MEM8(0x758CFC));
    if (0x18) _cf = (int)(((edx) >> ((0x18) - 1)) & 1);
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(0x758CFC) = LO8(edx);
    MEM8(0x758CFF) = LO8(ecx);
    ecx = MEM32(0x758CFC);
    edx = MEM32(0x758CFC);
    if (8) _cf = (int)(((ecx) >> ((8) - 1)) & 1);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0x10) _cf = (int)(((edx) >> ((0x10) - 1)) & 1);
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(0x758CFD) = LO8(edx);
    MEM8(0x758CFE) = LO8(ecx);

loc_000DCBE3: ;
    ecx = MEM32(0x470008);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000DCBF4; /* je: equal / zero */

loc_000DCBEE: ;
    MEM32(0x758CFC) = ecx;

loc_000DCBF4: ;
    edx = MEM32(0x758CFC);
    ecx = MEM32(0x758CE0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x758D04);
    MEM32(edx + 0x10) = ecx;
    ecx = MEM32(0x758CFC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20000 (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = 0x20000;
    if (CMP_G(_fas, _fbs)) goto loc_000DCC20; /* jg: greater (signed >) */

loc_000DCC1E: ;
    edx = ecx;

loc_000DCC20: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x758CF0) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_000DCC42; /* jle: less or equal (signed <=) */

loc_000DCC2C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20000 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x758CFC) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_000DCC52; /* jge: greater or equal (signed >=) */

loc_000DCC3A: ;
    MEM32(0x758D00) = ecx;
    goto loc_000DCC5C;

loc_000DCC42: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x758CFC) = ecx;
    MEM32(0x758D00) = ecx;
    goto loc_000DCC5C;

loc_000DCC52: ;
    MEM32(0x758D00) = 0x20000;

loc_000DCC5C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20000 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi + 4;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x758CD8);
    MEM32(0x758CE4) = ebp;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x10) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_000DCC87; /* jge: greater or equal (signed >=) */

loc_000DCC7F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000DCCAA; /* jle: less or equal (signed <=) */

loc_000DCC83: ;
    ebx = edx;
    goto loc_000DCC8C;

loc_000DCC87: ;
    ebx = 0x20000;

loc_000DCC8C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000DCCAA; /* je: equal / zero */

loc_000DCC92: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DCC9Bu); RECOMP_ABI_CALL(0x000DCAF0u, sub_000DCAF0); /* call 0x000DCAF0 */

loc_000DCC9B: ;
    esi = MEM32(0x758CEC);
    edx = MEM32(0x758CF0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DCCAA: ;
    _fa = (uint32_t)(MEM32(0x758BBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758BBC), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000DCCCB; /* je: equal / zero */

loc_000DCCB2: ;
    esi = MEM32(0x451B4C);
    PUSH32(esp, 0x000DCCBDu); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_000DCCBD: ;
    esi = MEM32(0x758CEC);
    edx = MEM32(0x758CF0);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000DCCCB: ;
    eax = MEM32(0x758CDC);
    PUSH32(esp, eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(esi)) >> 32) & 1);
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DCCDEu); RECOMP_ABI_CALL(0x000E44C0u, sub_000E44C0); /* call 0x000E44C0 */

loc_000DCCDE: ;
    MEM32(0x758CF4) = eax;
    eax = MEM32(0x758BBC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000DCCFA; /* je: equal / zero */

loc_000DCCEF: ;
    esi = MEM32(0x451B4C);
    PUSH32(esp, 0x000DCCFAu); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_000DCCFA: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(0x758CE4);
    MEM32(0x758CF8) = edx;
    goto loc_000DCECC;

loc_000DCD0E: ;
    eax = MEM32(0x758CE4);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(0x758CF8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000DCECB; /* jle: less or equal (signed <=) */

loc_000DCD28: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758CF8) = edi;
    if ((_fa == 0)) goto loc_000DCD45; /* je: equal / zero */

loc_000DCD32: ;
    PUSH32(esp, edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DCD3Cu); RECOMP_ABI_CALL(0x00346EA0u, sub_00346EA0); /* call 0x00346EA0 */

loc_000DCD3C: ;
    edi = MEM32(0x758CF8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DCD45: ;
    eax = MEM32(0x758CF4);
    MEM32(0x758CE4) = ebp;

loc_000DCD50: ;
    ecx = MEM32(0x758CF0);
    edx = MEM32(0x758CEC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = ecx + edx;
    ecx = MEM32(0x43B0DC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DCD94; /* je: equal / zero */

loc_000DCD6B: ;
    esi = ZX8(MEM8(eax + 4));
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax + 4;
    SET_HI8(edx, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(ecx + 2));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(edx, MEM8(ecx));
    if (0x10) _cf = (int)(((edx) >> (32 - (0x10))) & 1);
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(8)) >> 32) & 1);
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    goto loc_000DCD9A;

loc_000DCD94: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x20000 (32-bit) */
    _cf = (int)(_fa < _fb);

loc_000DCD9A: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000DCE4D; /* jne: not equal / not zero */

loc_000DCDA5: ;
    esi = eax;
    eax = MEM32(0x645068);
    ecx = ebp;
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    edx = MEM32(0x758CFC);
    ecx = eax + ebp;
    eax = 0x40000;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebp));
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x758CEC) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_000DCDDA; /* jge: greater or equal (signed >=) */

loc_000DCDD8: ;
    eax = edx;

loc_000DCDDA: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ebx = eax;
    MEM32(0x758D00) = eax;
    MEM32(0x758CF0) = eax;
    PUSH32(esp, 0x000DCDEDu); RECOMP_ABI_CALL(0x000DCAF0u, sub_000DCAF0); /* call 0x000DCAF0 */

loc_000DCDED: ;
    eax = MEM32(0x758CFC);
    _fb = (uint32_t)(MEM32(0x758D00)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(0x758D00)));
    eax = eax - MEM32(0x758D00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000DCE12; /* jle: less or equal (signed <=) */

loc_000DCDFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x758CFC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000DCE20; /* jge: greater or equal (signed >=) */

loc_000DCE0B: ;
    MEM32(0x758D00) = eax;
    goto loc_000DCE2A;

loc_000DCE12: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x758CFC) = eax;
    MEM32(0x758D00) = eax;
    goto loc_000DCE2A;

loc_000DCE20: ;
    MEM32(0x758D00) = 0x40000;

loc_000DCE2A: ;
    ecx = MEM32(0x758CF0);
    eax = MEM32(0x645068);
    edi = MEM32(0x758CF8);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758CEC) = eax;
    MEM32(0x758CF0) = ecx;
    MEM32(0x758CF4) = eax;

loc_000DCE4D: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x758CD8);
    ecx = edi + eax;
    eax = MEM32(0x758BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000DCE7F; /* je: equal / zero */

loc_000DCE6E: ;
    esi = MEM32(0x451B4C);
    PUSH32(esp, 0x000DCE79u); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_000DCE79: ;
    edi = MEM32(0x758CF8);

loc_000DCE7F: ;
    edx = MEM32(0x758CDC);
    eax = MEM32(0x758CF0);
    ecx = MEM32(0x758CEC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(edi));
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000DCEA0u); RECOMP_ABI_CALL(0x000E44C0u, sub_000E44C0); /* call 0x000E44C0 */

loc_000DCEA0: ;
    edi = MEM32(0x758CF8);
    edx = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x38);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(edx)) >> 32) & 1);
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x758CF4) = eax;
    MEM32(0x758CF8) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000DCD50; /* jl: less (signed <) */

loc_000DCEC6: ;
    eax = MEM32(0x758CE4);

loc_000DCECB: ;
    POP32(esp, edi);

loc_000DCECC: ;
    ecx = MEM32(0x758CD8);
    edx = eax + ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 0x28);
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(0x758CE4) = eax;
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DCF00
 * Original: 0x000DCF00 - 0x000DD4A9 (1449 bytes, 436 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCF00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DCF00: ;
    eax = MEM32(0x758CD4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000DD47B; /* jne: not equal / not zero */

loc_000DCF15: ;
    ebp = MEM32(0x758CD8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000DD0F6; /* jne: not equal / not zero */

loc_000DCF23: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000DCF31; /* jne: not equal / not zero */

loc_000DCF2C: ;
    PUSH32(esp, 0x000DCF31u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DCF31: ;
    edx = MEM32(0x758CDC);
    ecx = eax;
    PUSH32(esp, 0x000DCF3Eu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000DCF3E: ;
    esi = MEM32(esp + 0x30);
    MEM32(0x758CD8) = eax;
    edi = eax;
    eax = MEM32(0x758CE0);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DCF58u); RECOMP_ABI_CALL(0x0034939Du, sub_0034939D); /* call 0x0034939D */

loc_000DCF58: ;
    ecx = MEM32(0x758CD8);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 0x800);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DCF6Du); RECOMP_ABI_CALL(0x003495EAu, sub_003495EA); /* call 0x003495EA */

loc_000DCF6D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_000DCF79; /* jg: greater (signed >) */

loc_000DCF74: ;
    g_seh_ebp = ebp; sub_000CB410(); return; /* tail jmp 0x000CB410 */

loc_000DCF79: ;
    edx = MEM32(0x758CD8);
    _fa = (uint32_t)(MEM32(0x758D18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758D18), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(edx);
    MEM32(0x758CFC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000DCFBF; /* je: equal / zero */

loc_000DCF8E: ;
    ecx = eax;
    if (0x18) _cf = (int)(((ecx) >> ((0x18) - 1)) & 1);
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(0x758CFF) = LO8(eax);
    MEM8(0x758CFC) = LO8(ecx);
    eax = MEM32(0x758CFC);
    edx = MEM32(0x758CFC);
    if (8) _cf = (int)(((eax) >> ((8) - 1)) & 1);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0x10) _cf = (int)(((edx) >> ((0x10) - 1)) & 1);
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(0x758CFD) = LO8(edx);
    MEM8(0x758CFE) = LO8(eax);
    eax = MEM32(0x758CFC);

loc_000DCFBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x758CD8) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_000DCFD1; /* jle: less or equal (signed <=) */

loc_000DCFCC: ;
    eax = 0x40000;

loc_000DCFD1: ;
    MEM32(0x758D00) = eax;
    MEM32(0x758CF0) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000DCFE9; /* jne: not equal / not zero */

loc_000DCFE4: ;
    PUSH32(esp, 0x000DCFE9u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DCFE9: ;
    edx = 0x41800;
    ecx = eax;
    PUSH32(esp, 0x000DCFF5u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000DCFF5: ;
    MEM32(0x758CEC) = eax;
    MEM32(0x645068) = eax;
    eax = MEM32(0x758CE0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DD00Cu); RECOMP_ABI_CALL(0x0034939Du, sub_0034939D); /* call 0x0034939D */

loc_000DD00C: ;
    ecx = MEM32(0x758CF0);
    edx = MEM32(0x758CEC);
    esi = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DD023u); RECOMP_ABI_CALL(0x003495EAu, sub_003495EA); /* call 0x003495EA */

loc_000DD023: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_000DD02F; /* jg: greater (signed >) */

loc_000DD02A: ;
    g_seh_ebp = ebp; sub_000CB410(); return; /* tail jmp 0x000CB410 */

loc_000DD02F: ;
    eax = MEM32(0x758CFC);
    _fb = (uint32_t)(MEM32(0x758D00)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(0x758D00)));
    eax = eax - MEM32(0x758D00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000DD051; /* jle: less or equal (signed <=) */

loc_000DD03E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x758CFC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000DD05F; /* jge: greater or equal (signed >=) */

loc_000DD04A: ;
    MEM32(0x758D00) = eax;
    goto loc_000DD069;

loc_000DD051: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x758CFC) = eax;
    MEM32(0x758D00) = eax;
    goto loc_000DD069;

loc_000DD05F: ;
    MEM32(0x758D00) = 0x40000;

loc_000DD069: ;
    eax = MEM32(0x758CEC);
    ecx = MEM32(0x758CD8);
    edx = esp + 0x10;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM32(0x758CE4) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0x000DD095u); RECOMP_ABI_CALL(0x000E43A0u, sub_000E43A0); /* call 0x000E43A0 */

loc_000DD095: ;
    ecx = MEM32(0x758CEC);
    ebx = MEM32(esp + 0x34);
    MEM32(0x758CF4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758CE8) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(0x758CF8) = eax;

loc_000DD0B7: ;
    edi = MEM32(esp + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD0DD; /* je: equal / zero */

loc_000DD0BF: ;
    edx = MEM32(0x758CD8);
    eax = MEM32(0x758CE4);
    ecx = ebx;
    esi = eax + edx;
    edx = ecx;
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
    ecx = edx;
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

loc_000DD0DD: ;
    eax = MEM32(0x758CE4);
    POP32(esp, edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x758CE4) = eax;
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DD0F6: ;
    ebx = MEM32(esp + 0x2C);
    esi = MEM32(0x758CE4);
    eax = MEM32(0x758CF8);
    ecx = esi + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000DD0B7; /* jle: less or equal (signed <=) */

loc_000DD10C: ;
    edi = MEM32(esp + 0x28);
    edx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD12E; /* je: equal / zero */

loc_000DD118: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebp)) >> 32) & 1);
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ebp = ecx;
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
    ecx = ebp;
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
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x28)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + edx;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DD12E: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(0x758CE4)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(0x758CE4) = MEM32(0x758CE4) + edx;
    _fa = (uint32_t)(MEM32(0x758CE4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(0x758CDC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edx));
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x2C) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_000DD1B7; /* jle: less or equal (signed <=) */

loc_000DD144: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000DD152; /* jne: not equal / not zero */

loc_000DD14D: ;
    PUSH32(esp, 0x000DD152u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DD152: ;
    edx = ebx;
    ecx = eax;
    PUSH32(esp, 0x000DD15Bu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000DD15B: ;
    ecx = MEM32(0x758CDC);
    edx = MEM32(0x758CD8);
    ebp = eax;
    eax = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx;
    edi = ebp;
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
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
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
    if (CMP_EQ(_fa, _fb)) goto loc_000DD19B; /* je: equal / zero */

loc_000DD17F: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000DD193; /* jne: not equal / not zero */

loc_000DD188: ;
    PUSH32(esp, 0x000DD18Du); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DD18D: ;
    edx = MEM32(0x758CD8);

loc_000DD193: ;
    esi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x000DD19Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DD198u); } /* indirect call */
    }

loc_000DD19B: ;
    edi = ebx;
    MEM32(0x758CD8) = ebp;
    MEM32(0x758CDC) = edi;
    MEM32(0x758CE4) = 0;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000DD1C4;

loc_000DD1B7: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebx)) >> 32) & 1);
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000DD1C9; /* jle: less or equal (signed <=) */

loc_000DD1BD: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x758CE4) = eax;

loc_000DD1C4: ;
    MEM32(0x758CF8) = eax;

loc_000DD1C9: ;
    ebp = MEM32(0x758CF4);
    /* nop */

loc_000DD1D0: ;
    ecx = MEM32(0x758CEC);
    edx = MEM32(0x758CF0);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebp));
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx + edx;
    edx = MEM32(0x43B0DC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD21E; /* je: equal / zero */

loc_000DD1EB: ;
    edi = ZX8(MEM8(ebp + 4));
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebp + 4;
    SET_HI8(ebx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    edi = edi | ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, MEM8(edx + 2));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, MEM8(edx));
    if (0x10) _cf = (int)(((ebx) >> (32 - (0x10))) & 1);
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx | edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = MEM32(0x758CDC);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0x7FFFFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(8)) >> 32) & 1);
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = MEM32(esp + 0x2C);
    goto loc_000DD224;

loc_000DD21E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20000 (32-bit) */
    _cf = (int)(_fa < _fb);

loc_000DD224: ;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000DD388; /* jne: not equal / not zero */

loc_000DD22F: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x645068);
    ebx = eax;
    eax = MEM32(0x758CF0);
    if (((0xB) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ebx)) >> ((((0xB) & 31u)) - 1)) & 1);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    if (0xB) _cf = (int)(((ebx) >> (32 - (0xB))) & 1);
    ebx = ebx << 0xB;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebx));
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    ecx = ebx;
    esi = ebp;
    ebp = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
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
    ecx = ebp;
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
    ecx = MEM32(0x758CFC);
    eax = ecx + eax + 0x7FF;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebx)) >> 32) & 1);
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758CEC) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((0xB) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((0xB) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = 0x40000;
    if (0xB) _cf = (int)(((eax) >> (32 - (0xB))) & 1);
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebx));
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x758CFC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000DD29D; /* jl: less (signed <) */

loc_000DD29B: ;
    eax = ecx;

loc_000DD29D: ;
    edx = MEM32(0x758CE0);
    esi = MEM32(esp + 0x30);
    MEM32(0x758D00) = eax;
    MEM32(0x758CF0) = eax;
    eax = MEM32(0x758CE8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DD2C3u); RECOMP_ABI_CALL(0x0034939Du, sub_0034939D); /* call 0x0034939D */

loc_000DD2C3: ;
    ecx = MEM32(0x758CF0);
    edx = MEM32(0x758CEC);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DD2DAu); RECOMP_ABI_CALL(0x003495EAu, sub_003495EA); /* call 0x003495EA */

loc_000DD2DA: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000DD499; /* jle: less or equal (signed <=) */

loc_000DD2E5: ;
    eax = MEM32(0x758CFC);
    _fb = (uint32_t)(MEM32(0x758D00)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(0x758D00)));
    eax = eax - MEM32(0x758D00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000DD307; /* jle: less or equal (signed <=) */

loc_000DD2F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x758CFC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000DD315; /* jge: greater or equal (signed >=) */

loc_000DD300: ;
    MEM32(0x758D00) = eax;
    goto loc_000DD31F;

loc_000DD307: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x758CFC) = eax;
    MEM32(0x758D00) = eax;
    goto loc_000DD31F;

loc_000DD315: ;
    MEM32(0x758D00) = 0x40000;

loc_000DD31F: ;
    ebp = MEM32(0x645068);
    esi = MEM32(0x758CEC);
    edi = ebx + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000DD361; /* je: equal / zero */

loc_000DD332: ;
    ecx = MEM32(0x758CF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000DD353; /* jle: less or equal (signed <=) */

loc_000DD33C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ebx));
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DD346u); RECOMP_ABI_CALL(0x00346EA0u, sub_00346EA0); /* call 0x00346EA0 */

loc_000DD346: ;
    ebp = MEM32(0x758CEC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(ebx));
    ebp = ebp - ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000DD361;

loc_000DD353: ;
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

loc_000DD361: ;
    eax = MEM32(0x758CF0);
    edi = MEM32(0x758CDC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(esp + 0x2C);
    MEM32(0x758CF0) = eax;
    eax = MEM32(0x758CF8);
    MEM32(0x758CEC) = ebp;
    MEM32(0x758CF4) = ebp;

loc_000DD388: ;
    ecx = MEM32(0x43B0DC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD3B3; /* je: equal / zero */

loc_000DD394: ;
    esi = ZX8(MEM8(ebp));
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(ebp + 1));
    ecx = ebp + 1;
    _cf = 0; /* logical op clears CF */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(ecx + 2));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(edx, MEM8(ecx));
    if (0x10) _cf = (int)(((edx) >> (32 - (0x10))) & 1);
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    goto loc_000DD3B9;

loc_000DD3B3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20000 (32-bit) */
    _cf = (int)(_fa < _fb);

loc_000DD3B9: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000DD415; /* jne: not equal / not zero */

loc_000DD3C0: ;
    edx = MEM32(0x758CE4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000DD3EE; /* je: equal / zero */

loc_000DD3CA: ;
    edi = MEM32(esp + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD3EE; /* je: equal / zero */

loc_000DD3D2: ;
    esi = MEM32(0x758CD8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    edx = ecx;
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
    ecx = edx;
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
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x28)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + eax;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DD3EE: ;
    ecx = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    MEM32(0x758CE4) = 0;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x2C) = eax;
    ebx = MEM32(esp + 0x2C);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x758CF8) = eax;

loc_000DD415: ;
    ecx = MEM32(0x758CD8);
    edx = esp + 0x10;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000DD439u); RECOMP_ABI_CALL(0x000E43A0u, sub_000E43A0); /* call 0x000E43A0 */

loc_000DD439: ;
    edi = MEM32(esp + 0x18);
    esi = MEM32(0x758CE8);
    edx = MEM32(esp + 0x20);
    ebp = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x758CF8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x758CF4) = ebp;
    MEM32(0x758CE8) = esi;
    MEM32(0x758CF8) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000DD0B7; /* jge: greater or equal (signed >=) */

loc_000DD470: ;
    edi = MEM32(0x758CDC);
    goto loc_000DD1D0;

loc_000DD47B: ;
    esi = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x30);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DD492u); RECOMP_ABI_CALL(0x003495EAu, sub_003495EA); /* call 0x003495EA */

loc_000DD492: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_000DD49E; /* jg: greater (signed >) */

loc_000DD499: ;
    g_seh_ebp = ebp; sub_000CB410(); return; /* tail jmp 0x000CB410 */

loc_000DD49E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, edi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DD4B0
 * Original: 0x000DD4B0 - 0x000DD4B8 (8 bytes, 4 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD4B0(void)
{

loc_000DD4B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DD4B6u); RECOMP_ABI_CALL(0x000DC160u, sub_000DC160); /* call 0x000DC160 */

loc_000DD4B6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DD4C0
 * Original: 0x000DD4C0 - 0x000DD571 (177 bytes, 55 insns)
 * Folder: files (between: 0x000DC420 and 0x000DD580)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD4C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DD4C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x471078;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000DD4D0: ;
    edx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    MEM32(esi + 0x43B130) = 0xFFFFFFFFu;
    MEM32(esi + 0x471390) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000DD554; /* je: equal / zero */

loc_000DD4E6: ;
    ecx = MEM32(ebx + 0x470E90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    eax = ebx + 0x470E90;
    if (CMP_NE(_fa, _fb)) goto loc_000DD503; /* jne: not equal / not zero */

loc_000DD4F6: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM16(eax + 0x44) = LO16(ebp);
    PUSH32(esp, 0x000DD501u); RECOMP_ABI_CALL(0x00417FF8u, sub_00417FF8); /* call 0x00417FF8 */

loc_000DD501: ;
    goto loc_000DD517;

loc_000DD503: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x48F (32-bit) */
    MEM32(esi + 0x471390) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000DD517; /* jne: not equal / not zero */

loc_000DD515: ;
    MEM32(eax) = ebp;

loc_000DD517: ;
    edx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD554; /* je: equal / zero */

loc_000DD51D: ;
    ecx = MEM32(ebx + 0x470D78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    eax = ebx + 0x470D78;
    if (CMP_NE(_fa, _fb)) goto loc_000DD53D; /* jne: not equal / not zero */

loc_000DD52D: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM16(ebx + 0x470DBA) = LO16(ebp);
    PUSH32(esp, 0x000DD53Bu); RECOMP_ABI_CALL(0x00417FF8u, sub_00417FF8); /* call 0x00417FF8 */

loc_000DD53B: ;
    goto loc_000DD554;

loc_000DD53D: ;
    edx = MEM32(esi + 0x471380);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x48F (32-bit) */
    MEM32(esi + 0x471380) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000DD554; /* jne: not equal / not zero */

loc_000DD552: ;
    MEM32(eax) = ebp;

loc_000DD554: ;
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xDC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x46) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x46;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4713E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x4713E8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DD4D0; /* jl: less (signed <) */

loc_000DD56C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DD580
 * Original: 0x000DD580 - 0x000DD7A5 (549 bytes, 152 insns)
 * Folder: files (match: xbox-demo 0x000BE490, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD580(void)
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

loc_000DD580: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebp + 0x2020;
    edi = ebp + 0x810;
    /* nop */

loc_000DD5A0: ;
    MEM32(ebp + ebx * 4) = ebx;
    PUSH32(esp, 0x000DD5A9u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_000DD5A9: ;
    eax = eax & 0x800001FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_000DD5B7; /* jns: not sign (positive) */

loc_000DD5B0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFE00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000DD5B7: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429504); /* mulss */
    MEMF(ebp + ebx * 4 + 0x3030) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x10) = 2;
    /* nop */

loc_000DD5E0: ;
    PUSH32(esp, 0x000DD5E5u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_000DD5E5: ;
    eax = eax & 0x800001FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_000DD5F3; /* jns: not sign (positive) */

loc_000DD5EC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFE00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000DD5F3: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429504); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000DD5E0; /* jne: not equal / not zero */

loc_000DD619: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    fp_push(MEMF(esi)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x14); /* divss */
    xmm1 = xmm0; /* movaps */
    fp_pop(); /* fstp st(0) */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi); /* mulss */
    fp_pop(); /* fstp st(0) */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 4); /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    esi = edi + -8;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = 3;

loc_000DD664: ;
    PUSH32(esp, 0x000DD669u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_000DD669: ;
    eax = eax & 0x800001FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_000DD677; /* jns: not sign (positive) */

loc_000DD670: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFE00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000DD677: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429504); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000DD664; /* jne: not equal / not zero */

loc_000DD69D: ;
    fp_push(MEMF(edi)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    fp_push(MEMF(edi + -4)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    fp_push(MEMF(esi)); /* fld float */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x100 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x14); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    fp_pop(); /* fstp st(0) */
    MEMF(esi) = xmm1.f[0]; /* movss */
    fp_pop(); /* fstp st(0) */
    esi = MEM32(esp + 0x1C);
    fp_pop(); /* fstp st(0) */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + -16); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + -12); /* mulss */
    MEMF(edi + -16) = xmm1.f[0]; /* movss */
    MEMF(edi + -12) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_000DD5A0; /* jl: less (signed <) */

loc_000DD705: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000DD736; /* je: equal / zero */

loc_000DD708: ;
    goto loc_000DD710;

    /* nop */

loc_000DD710: ;
    esi = MEM32(ebp + ebx * 4);
    PUSH32(esp, 0x000DD719u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_000DD719: ;
    eax = eax & 0x800000FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_000DD727; /* jns: not sign (positive) */

loc_000DD720: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000DD727: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + eax * 4);
    MEM32(ebp + ebx * 4 + 4) = ecx;
    MEM32(ebp + eax * 4) = esi;
    if ((_fa != 0)) goto loc_000DD710; /* jne: not equal / not zero */

loc_000DD736: ;
    ecx = ebp + 0x3030;
    eax = ebp + 0x1408;
    edx = ebp + 0x2820;
    esi = 0x102;
    /* nop */

loc_000DD750: ;
    edi = MEM32(ecx + -12336);
    MEM32(ecx + -11312) = edi;
    edi = MEM32(ecx);
    MEM32(ecx + 0x400) = edi;
    edi = MEM32(edx + -2048);
    MEM32(edx) = edi;
    edi = MEM32(edx + -2044);
    MEM32(edx + 4) = edi;
    edi = MEM32(eax + -3072);
    MEM32(eax) = edi;
    edi = MEM32(eax + -3068);
    MEM32(eax + 4) = edi;
    edi = MEM32(eax + -3064);
    MEM32(eax + 8) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000DD750; /* jne: not equal / not zero */

loc_000DD79B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DD7B0
 * Original: 0x000DD7B0 - 0x000DD95B (427 bytes, 77 insns)
 * Folder: files (match: xbox-demo 0x000BE6C0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD7B0(void)
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

loc_000DD7B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000DD7B8u); RECOMP_ABI_CALL(0x00348AE5u, sub_00348AE5); /* call 0x00348AE5 */

loc_000DD7B8: ;
    fp_push(MEMD(0x4294F0)); /* fld double */
    xmm0 = XMM_SCALAR(MEMF(0x429620)); /* movss */
    fp_push(MEMD(0x429618)); /* fld double */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(0x645160) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000DD7DCu); RECOMP_ABI_CALL(0x00349898u, sub_00349898); /* call 0x00349898 */

loc_000DD7DC: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x429610)); /* fmul qword ptr [0x429610] */
    MEMD(0x645158) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000DD7EDu); RECOMP_ABI_CALL(0x000E4720u, sub_000E4720); /* call 0x000E4720 */

loc_000DD7ED: ;
    PUSH32(esp, 0x000DD7F2u); RECOMP_ABI_CALL(0x000E46C0u, sub_000E46C0); /* call 0x000E46C0 */

loc_000DD7F2: ;
    PUSH32(esp, 0x000DD7F7u); RECOMP_ABI_CALL(0x000E4660u, sub_000E4660); /* call 0x000E4660 */

loc_000DD7F7: ;
    PUSH32(esp, 0x000DD7FCu); RECOMP_ABI_CALL(0x000E47A0u, sub_000E47A0); /* call 0x000E47A0 */

loc_000DD7FC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    esi = MEM32(0x645140);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3F800000;
    MEM32(0x645100) = ecx;
    MEM32(0x645114) = ecx;
    MEM32(0x645128) = ecx;
    MEM32(0x64513C) = ecx;
    MEM32(0x6450B0) = ecx;
    MEM32(0x6450C4) = ecx;
    MEM32(0x6450D8) = ecx;
    MEM32(0x6450EC) = ecx;
    ecx = MEM32(0x6450F0);
    edx = 0xFFFFFFC3u;
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x64B768);
    MEM32(0x645104) = eax;
    MEM32(0x645108) = eax;
    MEM32(0x64510C) = eax;
    MEM32(0x645110) = eax;
    MEM32(0x645118) = eax;
    MEM32(0x64511C) = eax;
    MEM32(0x645120) = eax;
    MEM32(0x645124) = eax;
    MEM32(0x64512C) = eax;
    MEM32(0x645130) = eax;
    MEM32(0x645134) = eax;
    MEM32(0x645138) = eax;
    MEM32(0x645140) = esi;
    MEM32(0x6450B4) = eax;
    MEM32(0x6450B8) = eax;
    MEM32(0x6450BC) = eax;
    MEM32(0x6450C0) = eax;
    MEM32(0x6450C8) = eax;
    MEM32(0x6450CC) = eax;
    MEM32(0x6450D0) = eax;
    MEM32(0x6450D4) = eax;
    MEM32(0x6450DC) = eax;
    MEM32(0x6450E0) = eax;
    MEM32(0x6450E4) = eax;
    MEM32(0x6450E8) = eax;
    MEM32(0x6450F0) = ecx;
    MEMF(0x64509C) = xmm1.f[0]; /* movss */
    MEMF(0x6450A0) = xmm1.f[0]; /* movss */
    MEMF(0x6450A4) = xmm1.f[0]; /* movss */
    MEMF(0x645090) = xmm1.f[0]; /* movss */
    MEMF(0x645094) = xmm0.f[0]; /* movss */
    MEMF(0x645098) = xmm0.f[0]; /* movss */
    MEMF(0x645084) = xmm0.f[0]; /* movss */
    MEMF(0x645088) = xmm1.f[0]; /* movss */
    MEMF(0x64508C) = xmm0.f[0]; /* movss */
    MEMF(0x645078) = xmm0.f[0]; /* movss */
    MEMF(0x64507C) = xmm0.f[0]; /* movss */
    MEMF(0x645080) = xmm1.f[0]; /* movss */
    MEMF(0x64506C) = xmm0.f[0]; /* movss */
    MEMF(0x645070) = xmm0.f[0]; /* movss */
    MEMF(0x645074) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000DD959u); RECOMP_ABI_CALL(0x000DD580u, sub_000DD580); /* call 0x000DD580 */

loc_000DD959: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DD960
 * Original: 0x000DD960 - 0x000DDB32 (466 bytes, 127 insns)
 * Folder: files (between: 0x000DD7B0 and 0x000DDCC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DD960: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x429500)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4294FC); /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429354); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    fp_push(MEMF(0x429428)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000DDA52; /* jbe: below or equal (unsigned <=) */

loc_000DD9F1: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429428)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000DDA12; /* jbe: below or equal (unsigned <=) */

loc_000DDA03: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    goto loc_000DDAF9;

loc_000DDA12: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x000DDA24u); RECOMP_ABI_CALL(0x000DE4A0u, sub_000DE4A0); /* call 0x000DE4A0 */

loc_000DDA24: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    eax = 2;
    goto loc_000DDAFE;

loc_000DDA52: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DDABA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000DDA5A: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x14) / fp_top()); /* fdivr dword ptr [esp + 0x14] */
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x000DDA71u); RECOMP_ABI_CALL(0x003673D8u, sub_003673D8); /* call 0x003673D8 */

loc_000DDA71: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429500)); /* fmul dword ptr [0x429500] */
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = -fp_top(); /* fchs */
    eax = 3;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4294F8)); /* fadd dword ptr [0x4294f8] */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x4294F8)); /* fsub dword ptr [0x4294f8] */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_000DDAFE;

loc_000DDABA: ;
    fp_push(MEMF(esp)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000DDAD0u); RECOMP_ABI_CALL(0x000DE4A0u, sub_000DE4A0); /* call 0x000DE4A0 */

loc_000DDAD0: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000DDAE4u); RECOMP_ABI_CALL(0x000DE4A0u, sub_000DE4A0); /* call 0x000DE4A0 */

loc_000DDAE4: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0xC) - fp_top()); /* fsubr dword ptr [esp + 0xc] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi) = (float)fp_top(); /* fst */
    MEMF(esi + 4) = (float)fp_top(); /* fst */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_000DDAF9: ;
    eax = 1;

loc_000DDAFE: ;
    xmm2.f[0] = xmm2.f[0] * MEMF(0x429500); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
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
 * sub_000DDB40
 * Original: 0x000DDB40 - 0x000DDCC0 (384 bytes, 102 insns)
 * Folder: files (between: 0x000DD7B0 and 0x000DDCC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DDB40: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = fabs(fp_top()); /* fabs */
    PUSH32(esp, ebx);
    fp_push(MEMF(0x429608)); /* fld float */
    ebx = MEM32(esp + 0x14);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000DDCA4; /* ja: above (unsigned >) */

loc_000DDB5E: ;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x18); /* divss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x429354); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x20); /* addss */
    xmm3.f[0] = xmm3.f[0] - MEMF(edi + 4); /* subss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0);
    esi = esp + 0x10;
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, 0x000DDBABu); RECOMP_ABI_CALL(0x000DD960u, sub_000DD960); /* call 0x000DD960 */

loc_000DDBAB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_000DDC75; /* jle: less or equal (signed <=) */

loc_000DDBB8: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 4); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi); /* subss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 4); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm6; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(edi); /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 4); /* subss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(edi); /* subss */
    xmm7 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DDC6B; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_000DDC61: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DDC7B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000DDC66: ;
    xmm4 = xmm5; /* movaps */
    goto loc_000DDC7B;

loc_000DDC6B: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DDC7B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000DDC70: ;
    xmm4 = xmm6; /* movaps */
    goto loc_000DDC7B;

loc_000DDC75: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_000DDC7B: ;
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebx) = xmm4.f[0]; /* movss */
    MEMF(ebx + 8) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DDCA4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ebx) = eax;
    MEMF(ebx + 8) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
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
 * sub_000DDCC0
 * Original: 0x000DDCC0 - 0x000DE0C3 (1027 bytes, 233 insns)
 * Folder: files (match: xbox-demo 0x000BEC90, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000DDCC0(void)
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

loc_000DDCC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xBC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    xmm2 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm5 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm4 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax + 8); /* subss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 4); /* subss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    xmm6 = XMM_SCALAR(MEMF(ecx)); /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm6.f[0] = xmm6.f[0] - MEMF(eax); /* subss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    MEMF(esp + 8) = xmm6.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm7 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm0 = xmm7; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = xmm1; /* movaps */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm7 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    xmm1 = xmm7; /* movaps */
    xmm7 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    xmm6 = xmm1; /* movaps */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm0.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm5.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    ecx = MEM32(eax);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    edx = MEM32(eax + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x58) = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    ecx = MEM32(esp + 0x60);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(esp + 0x54) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x2C) = edx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x20) = xmm6.f[0]; /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    xmm6 = xmm4; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    MEMF(esp + 0x28) = xmm6.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm7 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm7.f[0]; /* subss */
    xmm7 = xmm4; /* movaps */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x44) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x4C) = edx;
    ecx = ecx & 0xFFFFFFF7u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 0x20;
    eax = esp + 0x70;
    MEM32(esp + 0x60) = ecx;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DDF64u); RECOMP_ABI_CALL(0x000E1240u, sub_000E1240); /* call 0x000E1240 */

loc_000DDF64: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    eax = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DDF76u); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_000DDF76: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0xC); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x10); /* addss */
    edx = esp + 0x24;
    eax = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DDFA1u); RECOMP_ABI_CALL(0x000E1240u, sub_000E1240); /* call 0x000E1240 */

loc_000DDFA1: ;
    edx = esp + 0x24;
    eax = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DDFAEu); RECOMP_ABI_CALL(0x000E1240u, sub_000E1240); /* call 0x000E1240 */

loc_000DDFAE: ;
    ecx = MEM32(ebp + 0xC);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = esp + 0x78;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DDFBFu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_000DDFBF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xAC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x4293F8); /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x429354); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = xmm3.f[0]; /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edi = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DE03Du); RECOMP_ABI_CALL(0x000DDB40u, sub_000DDB40); /* call 0x000DDB40 */

loc_000DE03D: ;
    PUSH32(esp, esi);
    ecx = esp + 0x24;
    eax = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DE04Bu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_000DE04B: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x60); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x64); /* addss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x68); /* addss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4293F8); /* mulss */
    eax = MEM32(ebp + 8);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    ecx = esp + 0x34;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DE0BBu); RECOMP_ABI_CALL(0x000E0DD0u, sub_000E0DD0); /* call 0x000E0DD0 */

loc_000DE0BB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DE0D0
 * Original: 0x000DE0D0 - 0x000DE251 (385 bytes, 100 insns)
 * Folder: files (match: xbox-demo 0x000BF0A0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE0D0(void)
{
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

loc_000DE0D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm5 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(eax); /* subss */
    xmm6 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 4) = xmm5.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    MEMF(esp + 8) = xmm6.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax + 4); /* subss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm7 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm5 = xmm7; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx); /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(eax + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] - MEMF(eax + 8); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DE24D; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_000DE1F4: ;
    xmm2 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 4); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DE23D; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_000DE229: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DE23D: ;
    eax = MEM32(edx);
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;

loc_000DE24D: ;
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
 * sub_000DE260
 * Original: 0x000DE260 - 0x000DE49E (574 bytes, 157 insns)
 * Folder: files (between: 0x000DE0D0 and 0x000DE520)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE260(void)
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

loc_000DE260: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm3 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    xmm2 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ebx + 8); /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ebx + 4); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebx + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 4); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx); /* subss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000DE30E; /* jbe: below or equal (unsigned <=) */

loc_000DE2F5: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(edi) = eax;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = edx;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DE30E: ;
    edx = ebp;
    eax = ebx;
    ecx = edi;
    PUSH32(esp, 0x000DE319u); RECOMP_ABI_CALL(0x000DE0D0u, sub_000DE0D0); /* call 0x000DE0D0 */

loc_000DE319: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx)); /* fsub dword ptr [ebx] */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 4)); /* fsub dword ptr [ebx + 4] */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 8)); /* fsub dword ptr [ebx + 8] */
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
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000DE3DA; /* jbe: below or equal (unsigned <=) */

loc_000DE34F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx); /* subss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 4); /* subss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 8); /* subss */
    eax = edi;
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000DE384u); RECOMP_ABI_CALL(0x00030950u, sub_00030950); /* call 0x00030950 */

loc_000DE384: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 4); /* mulss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(edi + 8) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DE3DA: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp)); /* fsub dword ptr [ebp] */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 4)); /* fsub dword ptr [ebp + 4] */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 8)); /* fsub dword ptr [ebp + 8] */
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
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000DE499; /* jbe: below or equal (unsigned <=) */

loc_000DE411: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp); /* subss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 4); /* subss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    eax = edi;
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000DE447u); RECOMP_ABI_CALL(0x00030950u, sub_00030950); /* call 0x00030950 */

loc_000DE447: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 4); /* mulss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(edi + 8) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */

loc_000DE499: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DE4A0
 * Original: 0x000DE4A0 - 0x000DE4DE (62 bytes, 18 insns)
 * Folder: files (between: 0x000DE0D0 and 0x000DE520)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE4A0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DE4A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DE4BE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000DE4AE: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMD(0x4293B8)); /* fld double */
    PUSH32(esp, 0x000DE4BDu); RECOMP_ABI_CALL(0x00349898u, sub_00349898); /* call 0x00349898 */

loc_000DE4BD: ;
    esp += 4; return; /* ret */

loc_000DE4BE: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DE4D7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DE4C3: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMD(0x4293B8)); /* fld double */
    PUSH32(esp, 0x000DE4D4u); RECOMP_ABI_CALL(0x00349898u, sub_00349898); /* call 0x00349898 */

loc_000DE4D4: ;
    fp_top() = -fp_top(); /* fchs */
    esp += 4; return; /* ret */

loc_000DE4D7: ;
    fp_push(MEMF(0x429350)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DE4E0
 * Original: 0x000DE4E0 - 0x000DE511 (49 bytes, 22 insns)
 * Folder: files (between: 0x000DE0D0 and 0x000DE520)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE4E0: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE50F; /* je: equal / zero */

loc_000DE4E7: ;
    PUSH32(esp, edi);
    goto loc_000DE4F0;

    /* nop */

loc_000DE4F0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_000DE500; /* jne: not equal / not zero */

loc_000DE4FB: ;
    PUSH32(esp, 0x000DE500u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DE500: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000DE508u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DE505u); } /* indirect call */
    }

loc_000DE508: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000DE4F0; /* jne: not equal / not zero */

loc_000DE50E: ;
    POP32(esp, edi);

loc_000DE50F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DE520
 * Original: 0x000DE520 - 0x000DE56D (77 bytes, 24 insns)
 * Folder: files (match: xbox-demo 0x000BF4B0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE520: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE52E; /* jne: not equal / not zero */

loc_000DE529: ;
    PUSH32(esp, 0x000DE52Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DE52E: ;
    edx = 0xC;
    ecx = eax;
    PUSH32(esp, 0x000DE53Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000DE53A: ;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE55E; /* jne: not equal / not zero */

loc_000DE555: ;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_000DE55E: ;
    MEM32(ecx) = eax;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000DE570
 * Original: 0x000DE570 - 0x000DE608 (152 bytes, 56 insns)
 * Folder: files (match: xbox-demo 0x000BF500, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE570(void)
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

loc_000DE570: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE605; /* je: equal / zero */

loc_000DE57C: ;
    /* nop */

loc_000DE580: ;
    eax = MEM32(esi + 8);
    SET_LO8(ecx, MEM8(eax + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x14 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE5C0; /* jne: not equal / not zero */

loc_000DE58B: ;
    ecx = MEM32(eax + 8);
    fp_push((double)SMEM32(eax + 8)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000DE59B; /* jge: greater or equal (signed >=) */

loc_000DE595: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_000DE59B: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000DE5AB; /* jge: greater or equal (signed >=) */

loc_000DE5A5: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_000DE5AB: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000DE5FB; /* jbe: below or equal (unsigned <=) */

loc_000DE5B8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DE5BEu); RECOMP_ABI_CALL(0x000DE810u, sub_000DE810); /* call 0x000DE810 */

loc_000DE5BE: ;
    goto loc_000DE5F8;

loc_000DE5C0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x1E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x1E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE5FB; /* jne: not equal / not zero */

loc_000DE5C5: ;
    ecx = MEM32(eax + 8);
    fp_push((double)SMEM32(eax + 8)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000DE5D5; /* jge: greater or equal (signed >=) */

loc_000DE5CF: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_000DE5D5: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000DE5E5; /* jge: greater or equal (signed >=) */

loc_000DE5DF: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_000DE5E5: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000DE5FB; /* jbe: below or equal (unsigned <=) */

loc_000DE5F2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DE5F8u); RECOMP_ABI_CALL(0x000DEA80u, sub_000DEA80); /* call 0x000DEA80 */

loc_000DE5F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE5FB: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE580; /* jne: not equal / not zero */

loc_000DE605: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DE610
 * Original: 0x000DE610 - 0x000DE673 (99 bytes, 38 insns)
 * Folder: files (between: 0x000DE570 and 0x000DE680)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE610: ;
    PUSH32(esp, esi);
    esi = MEM32(0x65F068);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE671; /* je: equal / zero */

loc_000DE61B: ;
    goto loc_000DE620;

    /* nop */

loc_000DE620: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE62D; /* je: equal / zero */

loc_000DE625: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE620; /* jne: not equal / not zero */

loc_000DE62B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DE62D: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000DE63A; /* je: equal / zero */

loc_000DE636: ;
    MEM32(eax) = ecx;
    goto loc_000DE640;

loc_000DE63A: ;
    MEM32(0x65F068) = ecx;

loc_000DE640: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE649; /* je: equal / zero */

loc_000DE644: ;
    MEM32(ecx + 4) = eax;
    goto loc_000DE64E;

loc_000DE649: ;
    MEM32(0x65F06C) = eax;

loc_000DE64E: ;
    edx = MEM32(0x65F070);
    eax = MEM32(0x46B1A4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x65F070) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000DE669; /* jne: not equal / not zero */

loc_000DE664: ;
    PUSH32(esp, 0x000DE669u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DE669: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000DE671u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DE66Eu); } /* indirect call */
    }

loc_000DE671: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DE680
 * Original: 0x000DE680 - 0x000DE70E (142 bytes, 47 insns)
 * Folder: files (match: xbox-demo 0x000BF650, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000DE680: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    esi = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_000DE690; /* jae: above or equal (unsigned >=) */

loc_000DE68B: ;
    edi = 2;

loc_000DE690: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE69E; /* jne: not equal / not zero */

loc_000DE699: ;
    PUSH32(esp, 0x000DE69Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DE69E: ;
    PUSH32(esp, ebx);
    ebx = edi * 4;
    edx = ebx;
    ecx = eax;
    PUSH32(esp, 0x000DE6AFu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000DE6AF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    edi = eax;
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429344); /* ucomiss */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esi + 0x10);
    ecx = eax + ebx + -4;
    MEM32(esi + 4) = eax;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(esi) = ecx;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    MEM8(esi + 0x14) = 0x14;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000DE70B; /* jnp: not parity */

loc_000DE6FD: ;
    PUSH32(esp, esi);
    esi = 0x65F068;
    PUSH32(esp, 0x000DE708u); RECOMP_ABI_CALL(0x000DE520u, sub_000DE520); /* call 0x000DE520 */

loc_000DE708: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE70B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DE710
 * Original: 0x000DE710 - 0x000DE802 (242 bytes, 94 insns)
 * Folder: files (between: 0x000DE680 and 0x000DE810)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DE710: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi + 0x10);
    ebp = MEM32(esi);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((2) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000DE739; /* jge: greater or equal (signed >=) */

loc_000DE732: ;
    eax = ebp + 0x32;
    MEM32(esp + 0x14) = eax;

loc_000DE739: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x14);
    eax = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000DE75A; /* jae: above or equal (unsigned >=) */

loc_000DE756: ;
    MEM32(esp + 0x14) = eax;

loc_000DE75A: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE768; /* jne: not equal / not zero */

loc_000DE763: ;
    PUSH32(esp, 0x000DE768u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DE768: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edx = ebx;
    ecx = eax;
    PUSH32(esp, 0x000DE77Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000DE77A: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x10) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = MEM32(esi + 0x10);
    eax = ebx + ecx + -4;
    MEM32(esi) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) ebp = eax; /* cmovb */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_000DE7C2; /* jbe: below or equal (unsigned <=) */

loc_000DE7AD: ;
    /* nop */

loc_000DE7B0: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx + eax * 4);
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000DE7B0; /* jb: below (unsigned <) */

loc_000DE7C2: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000DE7D1; /* jb: below (unsigned <) */

loc_000DE7CC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 8) = eax;

loc_000DE7D1: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esp + 8);
    edx = eax + ecx * 4;
    MEM32(esi + 4) = edx;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE7FC; /* je: equal / zero */

loc_000DE7E6: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE7F4; /* jne: not equal / not zero */

loc_000DE7EF: ;
    PUSH32(esp, 0x000DE7F4u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DE7F4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000DE7FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DE7F9u); } /* indirect call */
    }

loc_000DE7FC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DE810
 * Original: 0x000DE810 - 0x000DE894 (132 bytes, 54 insns)
 * Folder: files (match: xbox-demo 0x000BF7D0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000DE810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE810: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    eax = edx;
    MEM32(ebp + 4) = esi;
    if (CMP_AE(_fa, _fb)) goto loc_000DE889; /* jae: above or equal (unsigned >=) */

loc_000DE830: ;
    esi = MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE840; /* je: equal / zero */

loc_000DE836: ;
    ecx = esi;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE865; /* jne: not equal / not zero */

loc_000DE840: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000DE846; /* jae: above or equal (unsigned >=) */

loc_000DE844: ;
    eax = edx;

loc_000DE846: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE877; /* je: equal / zero */

loc_000DE84D: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE846; /* je: equal / zero */

loc_000DE853: ;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE846; /* je: equal / zero */

loc_000DE85B: ;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    MEM32(eax) = 1;

loc_000DE865: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000DE830; /* jb: below (unsigned <) */

loc_000DE86C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 8) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000DE877: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE882; /* jne: not equal / not zero */

loc_000DE87E: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 4) = MEM32(ebp + 4) + 0xFFFFFFFCu;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE882: ;
    MEM32(ebp + 8) = 0;

loc_000DE889: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 8) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000DE8A0
 * Original: 0x000DE8A0 - 0x000DE8ED (77 bytes, 33 insns)
 * Folder: files (match: xbox-demo 0x000BF860, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE8A0: ;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE8C6; /* jne: not equal / not zero */

loc_000DE8AA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE8B8; /* je: equal / zero */

loc_000DE8AE: ;
    edx = ecx;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE8BF; /* jne: not equal / not zero */

loc_000DE8B8: ;
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

loc_000DE8BF: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) - 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

loc_000DE8C6: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE8EB; /* je: equal / zero */

loc_000DE8CD: ;
    edx = esi;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE8EB; /* je: equal / zero */

loc_000DE8D7: ;
    MEM32(ecx) = 1;
    edx = MEM32(eax + 8);
    ecx = MEM32(eax + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;

loc_000DE8EB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DE8F0
 * Original: 0x000DE8F0 - 0x000DE97E (142 bytes, 47 insns)
 * Folder: files (match: xbox-demo 0x000BF8B0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000DE8F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    esi = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_000DE900; /* jae: above or equal (unsigned >=) */

loc_000DE8FB: ;
    edi = 2;

loc_000DE900: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE90E; /* jne: not equal / not zero */

loc_000DE909: ;
    PUSH32(esp, 0x000DE90Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DE90E: ;
    PUSH32(esp, ebx);
    ebx = edi * 8;
    edx = ebx;
    ecx = eax;
    PUSH32(esp, 0x000DE91Fu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000DE91F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    edi = eax;
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429344); /* ucomiss */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esi + 0x10);
    ecx = eax + ebx + -8;
    MEM32(esi + 4) = eax;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(esi) = ecx;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x14) = 0x1E;
    POP32(esp, ebx);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000DE97B; /* jnp: not parity */

loc_000DE96D: ;
    PUSH32(esp, esi);
    esi = 0x65F068;
    PUSH32(esp, 0x000DE978u); RECOMP_ABI_CALL(0x000DE520u, sub_000DE520); /* call 0x000DE520 */

loc_000DE978: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DE97B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DE980
 * Original: 0x000DE980 - 0x000DEA7B (251 bytes, 97 insns)
 * Folder: files (between: 0x000DE8F0 and 0x000DEA80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DE980: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi + 0x10);
    ebp = MEM32(esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((3) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebp;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_000DE9AC; /* jge: greater or equal (signed >=) */

loc_000DE9A5: ;
    eax = ebp + 0x32;
    MEM32(esp + 0x18) = eax;

loc_000DE9AC: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x18);
    eax = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000DE9CD; /* jae: above or equal (unsigned >=) */

loc_000DE9C9: ;
    MEM32(esp + 0x18) = eax;

loc_000DE9CD: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE9DB; /* jne: not equal / not zero */

loc_000DE9D6: ;
    PUSH32(esp, 0x000DE9DBu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DE9DB: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    ebx = ebx << 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    ecx = eax;
    PUSH32(esp, 0x000DE9ECu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000DE9EC: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x10) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = MEM32(esi + 0x10);
    eax = ebx + ecx + -8;
    MEM32(esi) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) ebp = eax; /* cmovb */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_000DEA3A; /* jbe: below or equal (unsigned <=) */

loc_000DEA1E: ;
    edi = edi;

loc_000DEA20: ;
    ecx = MEM32(esp + 0x10);
    edi = MEM32(ecx + eax * 8);
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 8) = edi;
    ecx = MEM32(ecx + eax * 8 + 4);
    MEM32(edx + eax * 8 + 4) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000DEA20; /* jb: below (unsigned <) */

loc_000DEA3A: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000DEA49; /* jb: below (unsigned <) */

loc_000DEA44: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = eax;

loc_000DEA49: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esp + 0xC);
    ecx = edx + eax * 8;
    MEM32(esi + 4) = ecx;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEA74; /* je: equal / zero */

loc_000DEA5E: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEA6C; /* jne: not equal / not zero */

loc_000DEA67: ;
    PUSH32(esp, 0x000DEA6Cu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DEA6C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000DEA74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DEA71u); } /* indirect call */
    }

loc_000DEA74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DEA80
 * Original: 0x000DEA80 - 0x000DEAFC (124 bytes, 54 insns)
 * Folder: files (match: xbox-demo 0x000BFA40, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000DEA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DEA80: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    eax = edx;
    MEM32(ebp + 4) = esi;
    if (CMP_AE(_fa, _fb)) goto loc_000DEAF8; /* jae: above or equal (unsigned >=) */

loc_000DEAA0: ;
    esi = MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEAB0; /* je: equal / zero */

loc_000DEAA6: ;
    ecx = esi;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEADB; /* jne: not equal / not zero */

loc_000DEAB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000DEAB6; /* jae: above or equal (unsigned >=) */

loc_000DEAB4: ;
    eax = edx;

loc_000DEAB6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEAE6; /* je: equal / zero */

loc_000DEABD: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEAB6; /* je: equal / zero */

loc_000DEAC3: ;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEAB6; /* je: equal / zero */

loc_000DEACB: ;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    MEM32(eax) = 1;

loc_000DEADB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000DEAA0; /* jb: below (unsigned <) */

loc_000DEAE2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000DEAE6: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEAF1; /* jne: not equal / not zero */

loc_000DEAED: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 4) = MEM32(ebp + 4) + 0xFFFFFFF8u;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DEAF1: ;
    MEM32(ebp + 8) = 0;

loc_000DEAF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000DEB00
 * Original: 0x000DEB00 - 0x000DEB6E (110 bytes, 38 insns)
 * Folder: files (match: xbox-demo 0x000BFAC0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DEB00: ;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEB40; /* jne: not equal / not zero */

loc_000DEB0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEB18; /* je: equal / zero */

loc_000DEB0E: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEB2C; /* jne: not equal / not zero */

loc_000DEB18: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    MEM32(eax) = 1;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

loc_000DEB2C: ;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    MEM32(eax) = 1;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

loc_000DEB40: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEB65; /* je: equal / zero */

loc_000DEB47: ;
    edx = esi;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEB65; /* je: equal / zero */

loc_000DEB51: ;
    MEM32(eax) = 1;
    esi = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = esi;
    MEM32(ecx + 0xC) = edx;

loc_000DEB65: ;
    POP32(esp, esi);
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000DEB0A
 * Original: 0x000DEB0A - 0x000DEB6E (100 bytes, 34 insns)
 * Folder: files (between: 0x000DEB00 and 0x000DEB70)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEB0A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DEB0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEB18; /* je: equal / zero */

loc_000DEB0E: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEB2C; /* jne: not equal / not zero */

loc_000DEB18: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    MEM32(eax) = 1;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

loc_000DEB2C: ;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    MEM32(eax) = 1;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

    edx = esi;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEB65; /* je: equal / zero */

loc_000DEB51: ;
    MEM32(eax) = 1;
    esi = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = esi;
    MEM32(ecx + 0xC) = edx;

loc_000DEB65: ;
    POP32(esp, esi);
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000DEB70
 * Original: 0x000DEB70 - 0x000DEB91 (33 bytes, 12 insns)
 * Folder: files (match: xbox-demo 0x000BFB30, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DEB70: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000DEB8B; /* jae: above or equal (unsigned >=) */

loc_000DEB7A: ;
    /* nop */

loc_000DEB80: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEB8C; /* je: equal / zero */

loc_000DEB84: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000DEB80; /* jb: below (unsigned <) */

loc_000DEB8B: ;
    esp += 4; return; /* ret */

loc_000DEB8C: ;
    g_seh_ebp = ebp; sub_000DEB00(); return; /* tail jmp 0x000DEB00 */

}

/**
 * sub_000DEBA0
 * Original: 0x000DEBA0 - 0x000DEBC0 (32 bytes, 14 insns)
 * Folder: files (match: xbox-demo 0x000BFB60, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DEBA0: ;
    ecx = MEM32(edx + 0x10);
    edx = MEM32(edx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000DEBBC; /* jae: above or equal (unsigned >=) */

loc_000DEBAC: ;
    /* nop */

loc_000DEBB0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEBBF; /* je: equal / zero */

loc_000DEBB4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000DEBB0; /* jb: below (unsigned <) */

loc_000DEBBC: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000DEBBF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DEBC0
 * Original: 0x000DEBC0 - 0x000DEC8C (204 bytes, 84 insns)
 * Folder: files (match: xbox-demo 0x000BFB80, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEBC0(void)
{
    extern void sub_000DEBC0_enter(void);
    sub_000DEBC0_enter();
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DEBC0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x46B1A4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(edi);
    MEM32(esp + 0xC) = ebp;
    MEM32(esp + 0x10) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000DEBE4; /* jne: not equal / not zero */

loc_000DEBDF: ;
    PUSH32(esp, 0x000DEBE4u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DEBE4: ;
    edx = 8;
    ecx = eax;
    PUSH32(esp, 0x000DEBF0u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000DEBF0: ;
    ebx = eax;
    eax = MEM32(esp + 0x18);
    MEM32(ebx + 4) = eax;
    MEM32(ebx) = 0;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEC5F; /* je: equal / zero */

loc_000DEC06: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEC53; /* je: equal / zero */

loc_000DEC0A: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0xC); PUSH32(esp, 0x000DEC0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DEC0Cu); } /* indirect call */
    }

loc_000DEC0F: ;
    ebp = eax;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DEC21; /* jl: less (signed <) */

loc_000DEC1D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DEC2F; /* jle: less or equal (signed <=) */

loc_000DEC21: ;
    MEM32(esp + 0xC) = esi;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_000DEC0A; /* jne: not equal / not zero */

loc_000DEC2F: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEC57; /* je: equal / zero */

loc_000DEC37: ;
    edx = MEM32(eax);
    MEM32(ebx) = edx;
    MEM32(eax) = ebx;

loc_000DEC3D: ;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), eax (32-bit) */
    eax = MEM32(edi + 8);
    if (CMP_NE(_fa, _fb)) goto loc_000DEC81; /* jne: not equal / not zero */

loc_000DEC45: ;
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DEC53: ;
    eax = MEM32(esp + 0xC);

loc_000DEC57: ;
    ecx = MEM32(edi);
    MEM32(ebx) = ecx;
    MEM32(edi) = ebx;
    goto loc_000DEC3D;

loc_000DEC5F: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEC79; /* je: equal / zero */

loc_000DEC66: ;
    MEM32(eax) = ebx;
    eax = MEM32(edi + 8);
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DEC79: ;
    eax = MEM32(edi + 8);
    MEM32(edi) = ebx;
    MEM32(edi + 4) = ebx;

loc_000DEC81: ;
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(edi + 8) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DEC90
 * Original: 0x000DEC90 - 0x000DECE2 (82 bytes, 36 insns)
 * Folder: files (between: 0x000DEBC0 and 0x000DF040)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DEC90: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DECE0; /* je: equal / zero */

loc_000DEC99: ;
    /* nop */

loc_000DECA0: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DECAF; /* je: equal / zero */

loc_000DECA5: ;
    eax = esi;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DECA0; /* jne: not equal / not zero */

loc_000DECAD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DECAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DECB7; /* jne: not equal / not zero */

loc_000DECB3: ;
    edx = MEM32(esi);
    MEM32(ecx) = edx;

loc_000DECB7: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DECBF; /* jne: not equal / not zero */

loc_000DECBC: ;
    MEM32(ecx + 4) = eax;

loc_000DECBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DECC7; /* je: equal / zero */

loc_000DECC3: ;
    edx = MEM32(esi);
    MEM32(eax) = edx;

loc_000DECC7: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DECD8; /* jne: not equal / not zero */

loc_000DECD3: ;
    PUSH32(esp, 0x000DECD8u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DECD8: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000DECE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DECDDu); } /* indirect call */
    }

loc_000DECE0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DECF0
 * Original: 0x000DECF0 - 0x000DED37 (71 bytes, 27 insns)
 * Folder: files (between: 0x000DEBC0 and 0x000DF040)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000DECF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DECF0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DED1F; /* je: equal / zero */

loc_000DECFD: ;
    PUSH32(esp, edi);
    edi = edi;

loc_000DED00: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = esi;
    esi = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_000DED12; /* jne: not equal / not zero */

loc_000DED0D: ;
    PUSH32(esp, 0x000DED12u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DED12: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000DED1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DED17u); } /* indirect call */
    }

loc_000DED1A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DED00; /* jne: not equal / not zero */

loc_000DED1E: ;
    POP32(esp, edi);

loc_000DED1F: ;
    POP32(esp, esi);
    MEM32(ebp) = 0;
    MEM32(ebp + 4) = 0;
    MEM32(ebp + 8) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000DED40
 * Original: 0x000DED40 - 0x000DEE1B (219 bytes, 66 insns)
 * Folder: files (between: 0x000DEBC0 and 0x000DF040)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DED40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DED40: ;
    eax = MEM32(0x758CD4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DED63; /* je: equal / zero */

loc_000DED4D: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x470140);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DED60u); RECOMP_ABI_CALL(0x0034939Du, sub_0034939D); /* call 0x0034939D */

loc_000DED60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DED63: ;
    eax = MEM32(0x758BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DED75; /* je: equal / zero */

loc_000DED6C: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEDB2; /* je: equal / zero */

loc_000DED75: ;
    edx = MEM32(0x470140);
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DED88u); RECOMP_ABI_CALL(0x000DCF00u, sub_000DCF00); /* call 0x000DCF00 */

loc_000DED88: ;
    eax = MEM32(0x758D18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEDB2; /* je: equal / zero */

loc_000DED94: ;
    SET_LO8(eax, MEM8(esp));
    SET_LO8(ecx, MEM8(esp + 3));
    SET_LO8(edx, MEM8(esp + 2));
    MEM8(esp + 3) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 1));
    MEM8(esp) = LO8(ecx);
    MEM8(esp + 1) = LO8(edx);
    MEM8(esp + 2) = LO8(eax);

loc_000DEDB2: ;
    eax = MEM32(0x758BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEE0F; /* je: equal / zero */

loc_000DEDBB: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEE0F; /* jne: not equal / not zero */

loc_000DEDC4: ;
    eax = esp + 4;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x000DEDD8u); RECOMP_ABI_CALL(0x000DCB50u, sub_000DCB50); /* call 0x000DCB50 */

loc_000DEDD8: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(0x758D18);
    edx = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000DEE0F; /* je: equal / zero */

loc_000DEDED: ;
    ecx = edx;
    SET_LO8(eax, LO8(edx));
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 3) = LO8(eax);
    MEM8(esp) = LO8(ecx);
    eax = MEM32(esp);
    edx = MEM32(esp);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 1) = LO8(edx);
    MEM8(esp + 2) = LO8(eax);

loc_000DEE0F: ;
    eax = MEM32(esp);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DEE20
 * Original: 0x000DEE20 - 0x000DEF4C (300 bytes, 109 insns)
 * Folder: files (between: 0x000DEBC0 and 0x000DF040)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEE20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DEE20: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000DEE49; /* jne: not equal / not zero */

loc_000DEE2D: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DEE37u); RECOMP_ABI_CALL(0x000E0200u, sub_000E0200); /* call 0x000E0200 */

loc_000DEE37: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEE44; /* jne: not equal / not zero */

loc_000DEE3E: ;
    edi = MEM32(esp + 0xC);

loc_000DEE42: ;
    eax = edi;

loc_000DEE44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000DEE49: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(0x470140);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000DEE5Cu); RECOMP_ABI_CALL(0x0034939Du, sub_0034939D); /* call 0x0034939D */

loc_000DEE5C: ;
    eax = 4;
    PUSH32(esp, 0x000DEE66u); RECOMP_ABI_CALL(0x000DF040u, sub_000DF040); /* call 0x000DF040 */

loc_000DEE66: ;
    esi = eax;
    eax = MEM32(0x470140);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DEE76u); RECOMP_ABI_CALL(0x000DCF00u, sub_000DCF00); /* call 0x000DCF00 */

loc_000DEE76: ;
    eax = MEM32(0x758D18);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000DEEB3; /* je: equal / zero */

loc_000DEE88: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    ecx = esi;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0xC) = LO8(ecx);
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0xC);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(edx);
    MEM8(esp + 0xE) = LO8(eax);
    esi = MEM32(esp + 0xC);

loc_000DEEB3: ;
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    ebx = esi;
    ebx = ebx >> 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEED1; /* je: equal / zero */

loc_000DEEC7: ;
    eax = esi;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp) = eax;

loc_000DEED1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEEDE; /* jne: not equal / not zero */

loc_000DEED5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000DEEDBu); RECOMP_ABI_CALL(0x000E0200u, sub_000E0200); /* call 0x000E0200 */

loc_000DEEDB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DEEDE: ;
    eax = esi + 1;
    PUSH32(esp, 0x000DEEE6u); RECOMP_ABI_CALL(0x000DF040u, sub_000DF040); /* call 0x000DF040 */

loc_000DEEE6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000DEF01; /* je: equal / zero */

loc_000DEEEC: ;
    ecx = MEM32(0x470140);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DEEFAu); RECOMP_ABI_CALL(0x000DCF00u, sub_000DCF00); /* call 0x000DCF00 */

loc_000DEEFA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + esi) = 0;

loc_000DEF01: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000DEE42; /* je: equal / zero */

loc_000DEF0A: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEE42; /* je: equal / zero */

loc_000DEF16: ;
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0x000DEF1Fu); RECOMP_ABI_CALL(0x000D8D50u, sub_000D8D50); /* call 0x000D8D50 */

loc_000DEF1F: ;
    esi = eax;
    PUSH32(esp, 0x000DEF26u); RECOMP_ABI_CALL(0x000E08E0u, sub_000E08E0); /* call 0x000E08E0 */

loc_000DEF26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEF3E; /* je: equal / zero */

loc_000DEF2B: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DEF34u); RECOMP_ABI_CALL(0x000DEE20u, sub_000DEE20); /* call 0x000DEE20 */

loc_000DEF34: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000DEF3E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = 0;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DEF50
 * Original: 0x000DEF50 - 0x000DF036 (230 bytes, 84 insns)
 * Folder: files (between: 0x000DEBC0 and 0x000DF040)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DEF50: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    ecx = MEM32(0x470140);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DEF64u); RECOMP_ABI_CALL(0x0034939Du, sub_0034939D); /* call 0x0034939D */

loc_000DEF64: ;
    edx = MEM32(0x470140);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DEF77u); RECOMP_ABI_CALL(0x000DCF00u, sub_000DCF00); /* call 0x000DCF00 */

loc_000DEF77: ;
    eax = MEM32(0x758D18);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEFA1; /* je: equal / zero */

loc_000DEF83: ;
    SET_LO8(eax, MEM8(esp));
    SET_LO8(ecx, MEM8(esp + 3));
    SET_LO8(edx, MEM8(esp + 2));
    MEM8(esp + 3) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 1));
    MEM8(esp) = LO8(ecx);
    MEM8(esp + 1) = LO8(edx);
    MEM8(esp + 2) = LO8(eax);

loc_000DEFA1: ;
    eax = MEM32(esp);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi >> 0x1F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000DEFBF; /* je: equal / zero */

loc_000DEFBD: ;
    MEM32(ebx) = eax;

loc_000DEFBF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF004; /* je: equal / zero */

loc_000DEFC5: ;
    ecx = MEM32(0x46B1A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEFDA; /* jne: not equal / not zero */

loc_000DEFCF: ;
    PUSH32(esp, 0x000DEFD4u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DEFD4: ;
    ecx = eax;
    eax = MEM32(esp + 0xC);

loc_000DEFDA: ;
    edx = eax + 1;
    PUSH32(esp, 0x000DEFE2u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000DEFE2: ;
    ecx = MEM32(esp + 0xC);
    esi = eax;
    eax = MEM32(0x470140);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DEFF5u); RECOMP_ABI_CALL(0x000DCF00u, sub_000DCF00); /* call 0x000DCF00 */

loc_000DEFF5: ;
    edx = MEM32(esp + 0x18);
    MEM8(esi + edx) = 0;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DF004: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF02F; /* je: equal / zero */

loc_000DF008: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF02F; /* je: equal / zero */

loc_000DF010: ;
    ecx = esi;
    PUSH32(esp, 0x000DF017u); RECOMP_ABI_CALL(0x000D8D50u, sub_000D8D50); /* call 0x000D8D50 */

loc_000DF017: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    esi = eax;
    PUSH32(esp, 0x000DF021u); RECOMP_ABI_CALL(0x000E08E0u, sub_000E08E0); /* call 0x000E08E0 */

loc_000DF021: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DF027u); RECOMP_ABI_CALL(0x000DEF50u, sub_000DEF50); /* call 0x000DEF50 */

loc_000DF027: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000DF02F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DF040
 * Original: 0x000DF040 - 0x000DF0A0 (96 bytes, 27 insns)
 * Folder: files (match: xbox-demo 0x000C0130, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF040: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x758D0C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x758D0C) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DF09A; /* jle: less or equal (signed <=) */

loc_000DF048: ;
    MEM32(0x758D0C) = eax;
    eax = MEM32(0x758D08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(0x46B1A4);
    if (CMP_EQ(_fa, _fb)) goto loc_000DF07E; /* je: equal / zero */

loc_000DF05B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF064; /* jne: not equal / not zero */

loc_000DF05F: ;
    PUSH32(esp, 0x000DF064u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DF064: ;
    ecx = MEM32(0x758D08);
    edx = MEM32(0x758D0C);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000DF078u); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_000DF078: ;
    MEM32(0x758D08) = eax;
    esp += 4; return; /* ret */

loc_000DF07E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF087; /* jne: not equal / not zero */

loc_000DF082: ;
    PUSH32(esp, 0x000DF087u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DF087: ;
    edx = MEM32(0x758D0C);
    ecx = eax;
    PUSH32(esp, 0x000DF094u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000DF094: ;
    MEM32(0x758D08) = eax;
    esp += 4; return; /* ret */

loc_000DF09A: ;
    eax = MEM32(0x758D08);
    esp += 4; return; /* ret */

}

/**
 * sub_000DF0A0
 * Original: 0x000DF0A0 - 0x000DF10E (110 bytes, 33 insns)
 * Folder: files (between: 0x000DF040 and 0x000DF1B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF0A0: ;
    eax = MEM32(0x758498);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF10C; /* je: equal / zero */

loc_000DF0AC: ;
    _fa = (uint32_t)(MEM32(0x758D08)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758D08), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF0D0; /* je: equal / zero */

loc_000DF0B4: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF0C2; /* jne: not equal / not zero */

loc_000DF0BD: ;
    PUSH32(esp, 0x000DF0C2u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DF0C2: ;
    ecx = MEM32(0x758D08);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000DF0D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DF0CDu); } /* indirect call */
    }

loc_000DF0D0: ;
    _fa = (uint32_t)(MEM32(0x758D2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758D2C), esi (32-bit) */
    MEM32(0x758D08) = esi;
    MEM32(0x758D0C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000DF100; /* je: equal / zero */

loc_000DF0E4: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF0F2; /* jne: not equal / not zero */

loc_000DF0ED: ;
    PUSH32(esp, 0x000DF0F2u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000DF0F2: ;
    ecx = MEM32(0x758D2C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000DF100u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DF0FDu); } /* indirect call */
    }

loc_000DF100: ;
    MEM32(0x758D2C) = esi;
    MEM32(0x758D28) = esi;

loc_000DF10C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DF110
 * Original: 0x000DF110 - 0x000DF1AD (157 bytes, 45 insns)
 * Folder: files (between: 0x000DF040 and 0x000DF1B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF110: ;
    ecx = MEM32(0x46B190);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, ebx);
    MEM32(0x765500) = eax;
    MEM32(0x765504) = eax;
    MEM8(0x765508) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000DF134; /* jne: not equal / not zero */

loc_000DF12F: ;
    PUSH32(esp, 0x000DF134u); RECOMP_ABI_CALL(0x00095420u, sub_00095420); /* call 0x00095420 */

loc_000DF134: ;
    eax = esp + 8;
    MEM32(esp + 4) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    ebx = MEM32(esp + 0x14);
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = edx;
    POP32(esp, edx);
    POP32(esp, ecx);
    POP32(esp, ebx);
    POP32(esp, eax);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x7654F8) = ecx;
    MEM32(0x7654FC) = edx;
    MEM8(0x765508) = 1;
    MEM32(0x7654E0) = eax;
    MEM32(0x7654E4) = eax;
    MEM32(0x7654C8) = eax;
    MEM32(0x7654CC) = eax;
    MEM32(0x7654D0) = eax;
    MEM32(0x7654D4) = eax;
    MEM32(0x7654D8) = eax;
    MEM32(0x7654DC) = eax;
    MEM32(0x7654E8) = eax;
    MEM32(0x7654EC) = eax;
    MEM32(0x7654F0) = eax;
    MEM32(0x7654F4) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DF1B0
 * Original: 0x000DF1B0 - 0x000DF1E5 (53 bytes, 19 insns)
 * Folder: files (match: xbox-demo 0x000C2310, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF1B0(void)
{

loc_000DF1B0: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x18) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000DF1F0
 * Original: 0x000DF1F0 - 0x000DF215 (37 bytes, 13 insns)
 * Folder: files (match: xbox-demo 0x000C2350, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF1F0(void)
{

loc_000DF1F0: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 4);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(eax + 8);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(eax + 0x20);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(eax + 0x24);
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x18) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000DF220
 * Original: 0x000DF220 - 0x000DF3A0 (384 bytes, 111 insns)
 * Folder: files (match: xbox-demo 0x000C2380, between)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000DF220(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DF220: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(eax + 8)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    fp_push(MEMF(eax + 4)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
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
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    xmm2 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    xmm2 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x14); /* mulss */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0x20) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x24)); /* fmul dword ptr [eax + 0x24] */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DF3A0
 * Original: 0x000DF3A0 - 0x000DF4FC (348 bytes, 79 insns)
 * Folder: files (match: xbox-demo 0x000C2500, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DF3A0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000DF4BB; /* je: equal / zero */

loc_000DF3AC: ;
    eax = MEM32(esp + 0x1C);
    ecx = 0x768318;
    PUSH32(esp, 0x000DF3BAu); RECOMP_ABI_CALL(0x000DF850u, sub_000DF850); /* call 0x000DF850 */

loc_000DF3BA: ;
    eax = MEM32(esp + 0x20);
    ecx = 0x768308;
    PUSH32(esp, 0x000DF3C8u); RECOMP_ABI_CALL(0x000DF850u, sub_000DF850); /* call 0x000DF850 */

loc_000DF3C8: ;
    xmm0 = XMM_SCALAR(MEMF(0x768314)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x768324); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x768310)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x768320); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x76830C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x76831C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x768308)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x768318); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DF46C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DF422: ;
    ecx = MEM32(0x768308);
    esi = MEM32(0x76830C);
    edx = MEM32(0x768310);
    eax = 0x80000000u;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x768308) = ecx;
    ecx = MEM32(0x768314);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEM32(0x76830C) = esi;
    MEM32(0x768310) = edx;
    MEM32(0x768314) = ecx;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_000DF46C: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429450)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000DF4AB; /* jbe: below or equal (unsigned <=) */

loc_000DF47E: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x000DF487u); RECOMP_ABI_CALL(0x003673D8u, sub_003673D8); /* call 0x003673D8 */

loc_000DF487: ;
    MEMF(0x768304) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) - fp_top()); /* fsubr dword ptr [0x429344] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(0x768300) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000DF4BB;

loc_000DF4AB: ;
    MEMF(0x768304) = xmm1.f[0]; /* movss */
    MEMF(0x768300) = xmm1.f[0]; /* movss */

loc_000DF4BB: ;
    eax = MEM32(edi + 0x40);
    ecx = MEM32(0x768304);
    edx = MEM32(esp + 0x24);
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x40) = eax;
    eax = MEM32(0x768300);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esi = 0x768308;
    edx = 0x768318;
    ecx = esp + 0x14;
    PUSH32(esp, 0x000DF4E9u); RECOMP_ABI_CALL(0x000DF500u, sub_000DF500); /* call 0x000DF500 */

loc_000DF4E9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 8;
    ecx = edi;
    PUSH32(esp, 0x000DF4F7u); RECOMP_ABI_CALL(0x000DF700u, sub_000DF700); /* call 0x000DF700 */

loc_000DF4F7: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
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
 * sub_000DF500
 * Original: 0x000DF500 - 0x000DF5D5 (213 bytes, 60 insns)
 * Folder: files (match: xbox-demo 0x000C2660, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF500(void)
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

loc_000DF500: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000DF5BD; /* jnp: not parity */

loc_000DF518: ;
    fp_push(MEMF(0x429344)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    xmm3 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    eax = ecx;
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0xC); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000DFF40(); return; /* tail jmp 0x000DFF40 */

loc_000DF5BD: ;
    eax = MEM32(edx);
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    eax = MEM32(edx + 8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DF5E0
 * Original: 0x000DF5E0 - 0x000DF6F9 (281 bytes, 77 insns)
 * Folder: files (between: 0x000DF500 and 0x000DF700)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF5E0(void)
{
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

loc_000DF5E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x42960C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF6D7; /* je: equal / zero */

loc_000DF60A: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DF67D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DF64A: ;
    edx = MEM32(esi);
    ecx = MEM32(esi + 4);
    eax = 0x80000000u;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    edx = MEM32(esi + 8);
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm1; /* movaps */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm3; /* movaps */
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_000DF67D: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DF688; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000DF682: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_000DF688: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x429344)); /* fsub dword ptr [0x429344] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429548)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000DF6CB; /* jbe: below or equal (unsigned <=) */

loc_000DF6A2: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x000DF6ABu); RECOMP_ABI_CALL(0x003673D8u, sub_003673D8); /* call 0x003673D8 */

loc_000DF6AB: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) - fp_top()); /* fsubr dword ptr [0x429344] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000DF6D7;

loc_000DF6CB: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_000DF6D7: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = edi;
    PUSH32(esp, 0x000DF6F1u); RECOMP_ABI_CALL(0x000DF500u, sub_000DF500); /* call 0x000DF500 */

loc_000DF6F1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
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
 * sub_000DF700
 * Original: 0x000DF700 - 0x000DF848 (328 bytes, 75 insns)
 * Folder: files (match: xbox-demo 0x000C2850, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DF700: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax); /* mulss */
    xmm5.f[0] = xmm5.f[0] * MEMF(eax); /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x4293F8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 4); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 4); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm7.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    xmm7.f[0] = xmm7.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 8); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    eax = MEM32(ecx + 0x40);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp); /* subss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 4) = xmm3.f[0]; /* movss */
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm7.f[0] = xmm7.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    MEMF(ecx + 0x14) = xmm7.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm3.f[0]; /* movss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm6.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x40) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DF850
 * Original: 0x000DF850 - 0x000DFA72 (546 bytes, 144 insns)
 * Folder: files (match: xbox-demo 0x000C29A0, between)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000DF850(void)
{
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

loc_000DF850: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x28); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* comiss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DF8CE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x429350)) */

loc_000DF86D: ;
    fp_push(MEMF(esp)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429344)); /* fadd dword ptr [0x429344] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429354)); /* fmul dword ptr [0x429354] */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp); /* divss */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x24); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x10); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    goto loc_000DFA23;

loc_000DF8CE: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x14); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DF8E5; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x14)) */

loc_000DF8D8: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x28); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DF8F5; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x28)) */

loc_000DF8DE: ;
    edx = 1;
    goto loc_000DF8FA;

loc_000DF8E5: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x28); /* comiss */
    edx = 2;
    if ((_fca >= _fcb)) goto loc_000DF8FA; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(eax + 0x28)) */

loc_000DF8F5: ;
    edx = 3;

loc_000DF8FA: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000DF9C2; /* je: equal / zero */

loc_000DF901: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000DF968; /* je: equal / zero */

loc_000DF904: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000DFA23; /* jne: not equal / not zero */

loc_000DF90B: ;
    fp_push(MEMF(0x429344)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x14)); /* fsub dword ptr [eax + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x28)); /* fadd dword ptr [eax + 0x28] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429354)); /* fmul dword ptr [0x429354] */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp); /* divss */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 8); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x18); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x10); /* subss */
    goto loc_000DFA1A;

loc_000DF968: ;
    fp_push(MEMF(0x429344)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x14)); /* fadd dword ptr [eax + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x28)); /* fsub dword ptr [eax + 0x28] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429354)); /* fmul dword ptr [0x429354] */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp); /* divss */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x18); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    goto loc_000DFA1A;

loc_000DF9C2: ;
    fp_push(MEMF(eax)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429344)); /* fadd dword ptr [0x429344] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x14)); /* fsub dword ptr [eax + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x28)); /* fsub dword ptr [eax + 0x28] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429354)); /* fmul dword ptr [0x429354] */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp); /* divss */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 8); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x24); /* subss */

loc_000DFA1A: ;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0xC) = xmm1.f[0]; /* movss */

loc_000DFA23: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 4) & 7] = fp_top(); fp_pop(); /* fstp st(4) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DFA80
 * Original: 0x000DFA80 - 0x000DFF34 (1204 bytes, 325 insns)
 * Folder: files (between: 0x000DF850 and 0x000DFF40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000DFA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000DFA80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DFAA9; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_000DFAA2: ;
    MEMF(ebp + 8) = xmm3.f[0]; /* movss */
    goto loc_000DFAB3;

loc_000DFAA9: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DFAB3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DFAAE: ;
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */

loc_000DFAB3: ;
    xmm1 = XMM_SCALAR(MEMF(0x429548)); /* movss */
    ecx = MEM32(edi);
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000DFB04; /* jg: greater (signed >) */

loc_000DFAD3: ;
    ecx = MEM32(edi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000DFB04; /* jg: greater (signed >) */

loc_000DFAE0: ;
    ecx = MEM32(edi + 8);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000DFB04; /* jg: greater (signed >) */

loc_000DFAED: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    eax = MEM32(ebx + 4);
    MEM32(ecx + 4) = eax;
    eax = MEM32(ebx + 8);
    SET_LO8(edx, 1);
    MEM32(ecx + 8) = eax;
    goto loc_000DFB07;

loc_000DFB04: ;
    ecx = MEM32(ebp + 0xC);

loc_000DFB07: ;
    esi = MEM32(ebx);
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000DFB4C; /* jg: greater (signed >) */

loc_000DFB1D: ;
    esi = MEM32(ebx + 4);
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000DFB4C; /* jg: greater (signed >) */

loc_000DFB2A: ;
    esi = MEM32(ebx + 8);
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000DFB4C; /* jg: greater (signed >) */

loc_000DFB37: ;
    edx = MEM32(edi);
    MEM32(ecx) = edx;
    eax = MEM32(edi + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edi + 8);
    MEM32(ecx + 8) = edx;
    goto loc_000DFDDB;

loc_000DFB4C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFDDB; /* jne: not equal / not zero */

loc_000DFB54: ;
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebx + 8); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(ebx + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(ebx + 8); /* mulss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebx); /* mulss */
    edx = MEM32(esp + 0x18);
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(ebx); /* mulss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebx + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x429428)); /* movss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000DFD4B; /* jg: greater (signed >) */

loc_000DFBCE: ;
    edx = MEM32(esp + 0x1C);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000DFD4B; /* jg: greater (signed >) */

loc_000DFBE0: ;
    edx = MEM32(esp + 0x20);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000DFD4B; /* jg: greater (signed >) */

loc_000DFBF2: ;
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebx + 8); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(ebx + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(ebx); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DFC30; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_000DFC1B: ;
    eax = MEM32(edi);
    MEM32(ecx) = eax;
    edx = MEM32(edi + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(edi + 8);
    MEM32(ecx + 8) = eax;
    goto loc_000DFDDB;

loc_000DFC30: ;
    edx = MEM32(0x645094);
    eax = MEM32(0x645098);
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi)); /* movss */
    ecx = MEM32(0x645090);
    MEM32(esp + 0x2C) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    MEM32(esp + 0x28) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    MEM32(esp + 0x24) = ecx;
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    PUSH32(esp, 0x3A83126F);
    eax = esp + 0x1C;
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DFCBFu); RECOMP_ABI_CALL(0x00035E50u, sub_00035E50); /* call 0x00035E50 */

loc_000DFCBF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFD4B; /* je: equal / zero */

loc_000DFCCA: ;
    edx = MEM32(0x645088);
    eax = MEM32(0x64508C);
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi)); /* movss */
    ecx = MEM32(0x645084);
    MEM32(esp + 0x28) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEM32(esp + 0x2C) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    MEM32(esp + 0x24) = ecx;
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_000DFD4B: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, 1);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    PUSH32(esp, ebx);
    fp_push(MEMF(esp + 0x28)); /* fld float */
    esi = esp + 0x20;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DFD9Bu); RECOMP_ABI_CALL(0x00035B10u, sub_00035B10); /* call 0x00035B10 */

loc_000DFD9B: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    ecx = esp + 0x38;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DFDB3u); RECOMP_ABI_CALL(0x000E18D0u, sub_000E18D0); /* call 0x000E18D0 */

loc_000DFDB3: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    ecx = edi;
    eax = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DFDC2u); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_000DFDC2: ;
    xmm1 = XMM_SCALAR(MEMF(0x429548)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DFDDB: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    edx = MEM32(ecx);
    fp_push(MEMF(edi + 4)); /* fld float */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(edi)); /* fld float */
    eax = MEM32(esp + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
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
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_push(MEMF(ebx)); /* fld float */
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
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_G(_fas, _fbs)) goto loc_000DFE57; /* jg: greater (signed >) */

loc_000DFE39: ;
    edx = MEM32(ecx + 4);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000DFE57; /* jg: greater (signed >) */

loc_000DFE46: ;
    edx = MEM32(ecx + 8);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DFF20; /* jle: less or equal (signed <=) */

loc_000DFE57: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DFE70; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_000DFE67: ;
    xmm1 = xmm3; /* movaps */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */

loc_000DFE70: ;
    fp_push(MEMD(0x429430)); /* fld double */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000DFE83; /* jbe: below or equal (unsigned <=) */

loc_000DFE80: ;
    xmm1 = xmm0; /* movaps */

loc_000DFE83: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000DFEE7; /* jnp: not parity */

loc_000DFED1: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_000DFEE7: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000DFF20: ;
    POP32(esp, edi);
    MEMF(ecx) = xmm3.f[0]; /* movss */
    MEMF(ecx + 4) = xmm3.f[0]; /* movss */
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DFF40
 * Original: 0x000DFF40 - 0x000DFF8E (78 bytes, 33 insns)
 * Folder: files (match: xbox-demo 0x000C3060, between)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000DFF40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DFF40: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 4) & 7] = fp_top(); fp_pop(); /* fstp st(4) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DFF90
 * Original: 0x000DFF90 - 0x000E0028 (152 bytes, 71 insns)
 * Folder: files (match: xbox-demo 0x000C0F60, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFF90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DFF90: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    ebx = esi + ecx * 8 + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(0x758D14) = 0;
    if (CMP_A(_fa, _fb)) goto loc_000DFFEE; /* ja: above (unsigned >) */

loc_000DFFAF: ;
    /* nop */

loc_000DFFB0: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0006; /* je: equal / zero */

loc_000DFFBB: ;
    edi = ecx;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax;
    if ((_fa != 0)) goto loc_000DFFC7; /* jne: not equal / not zero */

loc_000DFFC4: ;
    ecx = eax + -1;

loc_000DFFC7: ;
    edx = MEM32(esi + ecx * 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    ecx = esi + ecx * 8;
    if (CMP_AE(_fa, _fb)) goto loc_000DFFDD; /* jae: above or equal (unsigned >=) */

loc_000DFFD1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = ecx + -8;
    if (CMP_NE(_fa, _fb)) goto loc_000DFFE8; /* jne: not equal / not zero */

loc_000DFFD8: ;
    ecx = eax + -1;
    goto loc_000DFFEA;

loc_000DFFDD: ;
    if (CMP_BE(_fa, _fb)) goto loc_000DFFF6; /* jbe: below or equal (unsigned <=) */

loc_000DFFDF: ;
    MEM32(0x758D14) = ecx;
    esi = ecx + 8;

loc_000DFFE8: ;
    ecx = eax;

loc_000DFFEA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000DFFB0; /* jbe: below or equal (unsigned <=) */

loc_000DFFEE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000DFFF6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ecx + -8;
    POP32(esp, ebp);
    MEM32(0x758D14) = eax;
    eax = MEM32(ecx + 4);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E0006: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFFEE; /* je: equal / zero */

loc_000E000A: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E001E; /* jbe: below or equal (unsigned <=) */

loc_000E0010: ;
    POP32(esp, edi);
    MEM32(0x758D14) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E001E: ;
    if (CMP_NE(_fa, _fb)) goto loc_000DFFEE; /* jne: not equal / not zero */

loc_000E0020: ;
    eax = MEM32(esi + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E0008
 * Original: 0x000E0008 - 0x000E0028 (32 bytes, 18 insns)
 * Folder: files (between: 0x000DFF90 and 0x000E0030)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0008(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0008: ;
    if (_flags /* je: equal / zero */) { g_seh_ebp = ebp; sub_000DFFEE(); return; }

loc_000E000A: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E001E; /* jbe: below or equal (unsigned <=) */

loc_000E0010: ;
    POP32(esp, edi);
    MEM32(0x758D14) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E001E: ;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000DFFEE(); return; } /* jne: not equal / not zero */

loc_000E0020: ;
    eax = MEM32(esi + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E000C
 * Original: 0x000E000C - 0x000E0028 (28 bytes, 16 insns)
 * Folder: files (between: 0x000DFF90 and 0x000E0030)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E000C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E000C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E001E; /* jbe: below or equal (unsigned <=) */

loc_000E0010: ;
    POP32(esp, edi);
    MEM32(0x758D14) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E001E: ;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000DFFEE(); return; } /* jne: not equal / not zero */

loc_000E0020: ;
    eax = MEM32(esi + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E000E
 * Original: 0x000E000E - 0x000E0028 (26 bytes, 15 insns)
 * Folder: files (between: 0x000DFF90 and 0x000E0030)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E000E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E000E: ;
    if (_flags /* jbe: below or equal (unsigned <=) */) goto loc_000E001E;

loc_000E0010: ;
    POP32(esp, edi);
    MEM32(0x758D14) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E001E: ;
    if (_flags /* jne: not equal / not zero */) { g_seh_ebp = ebp; sub_000DFFEE(); return; }

loc_000E0020: ;
    eax = MEM32(esi + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E0030
 * Original: 0x000E0030 - 0x000E0143 (275 bytes, 103 insns)
 * Folder: files (match: xbox-demo 0x000C1000, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0030: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000E0087; /* jne: not equal / not zero */

loc_000E0043: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(0x46B1A4);
    if (CMP_NE(_fa, _fb)) goto loc_000E006C; /* jne: not equal / not zero */

loc_000E0054: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E005D; /* jne: not equal / not zero */

loc_000E0058: ;
    PUSH32(esp, 0x000E005Du); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000E005D: ;
    edx = MEM32(esi + 8);
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    PUSH32(esp, 0x000E006Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000E006A: ;
    goto loc_000E0085;

loc_000E006C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0075; /* jne: not equal / not zero */

loc_000E0070: ;
    PUSH32(esp, 0x000E0075u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000E0075: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    PUSH32(esp, 0x000E0085u); RECOMP_ABI_CALL(0x00017330u, sub_00017330); /* call 0x00017330 */

loc_000E0085: ;
    MEM32(esi) = eax;

loc_000E0087: ;
    eax = MEM32(0x43B160);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000E0123; /* je: equal / zero */

loc_000E0096: ;
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0x000E009Eu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000E009E: ;
    edx = MEM32(esi + 4);
    eax = MEM32(0x758D14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E00CC; /* je: equal / zero */

loc_000E00AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E00B6; /* je: equal / zero */

loc_000E00B3: ;
    ecx = eax + 8;

loc_000E00B6: ;
    edx = edi + edx * 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E00CC; /* je: equal / zero */

loc_000E00BD: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E00CC; /* jne: not equal / not zero */

loc_000E00C1: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E00CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E010C; /* je: equal / zero */

loc_000E00D0: ;
    ecx = edi + ebx * 8 + -8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0107; /* je: equal / zero */

loc_000E00D8: ;
    edx = ebx * 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edx + edi + -8;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    edx = eax + 8;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E00F9u); RECOMP_ABI_CALL(0x00346EA0u, sub_00346EA0); /* call 0x00346EA0 */

loc_000E00F9: ;
    edi = MEM32(0x758D14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E0129;

loc_000E0107: ;
    edi = edi + ebx * 8;
    goto loc_000E0129;

loc_000E010C: ;
    eax = ebx * 8;
    PUSH32(esp, eax);
    ecx = edi + 8;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E011Eu); RECOMP_ABI_CALL(0x00346EA0u, sub_00346EA0); /* call 0x00346EA0 */

loc_000E011E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E0129;

loc_000E0123: ;
    edx = MEM32(esi + 4);
    edi = edi + edx * 8;

loc_000E0129: ;
    eax = MEM32(esp + 0x14);
    MEM32(edi) = ebp;
    MEM32(edi + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(0x758D14) = edi;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(esi + 4) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E0150
 * Original: 0x000E0150 - 0x000E01D6 (134 bytes, 53 insns)
 * Folder: files (match: xbox-demo 0x000C1120, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000E0150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0150: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM32(ebp) = 0;
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E01D3; /* je: equal / zero */

loc_000E0164: ;
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0x000E016Fu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000E016F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E01D2; /* je: equal / zero */

loc_000E0177: ;
    MEM32(ebp) = eax;
    eax = MEM32(0x758D14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E01BA; /* je: equal / zero */

loc_000E0183: ;
    ecx = edi + esi * 8 + -16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E01CF; /* je: equal / zero */

loc_000E018B: ;
    edx = esi * 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edx + edi + -8;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    edx = eax + 0x10;
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E01ACu); RECOMP_ABI_CALL(0x00346EA0u, sub_00346EA0); /* call 0x00346EA0 */

loc_000E01AC: ;
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ebx + 4) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000E01BA: ;
    eax = esi * 8 + -8;
    PUSH32(esp, eax);
    ecx = edi + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E01CCu); RECOMP_ABI_CALL(0x00346EA0u, sub_00346EA0); /* call 0x00346EA0 */

loc_000E01CC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E01CF: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) - 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000E01D2: ;
    POP32(esp, edi);

loc_000E01D3: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000E01E0
 * Original: 0x000E01E0 - 0x000E01F9 (25 bytes, 11 insns)
 * Folder: files (between: 0x000E0150 and 0x000E0370)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E01E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000E01E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = MEM32(eax);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000E01F4; /* jbe: below or equal (unsigned <=) */

loc_000E01F0: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000E01F4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E0200
 * Original: 0x000E0200 - 0x000E036A (362 bytes, 114 insns)
 * Folder: files (between: 0x000E0150 and 0x000E0370)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0200: ;
    eax = MEM32(0x758BBC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0364; /* je: equal / zero */

loc_000E0210: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0364; /* jne: not equal / not zero */

loc_000E021D: ;
    eax = MEM32(0x43B164);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000E0246; /* jne: not equal / not zero */

loc_000E0233: ;
    eax = MEM32(0x758BB4);
    ecx = MEM32(0x43B0E0);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = MEM32(eax + ecx);
    goto loc_000E0248;

loc_000E0246: ;
    ebp = eax;

loc_000E0248: ;
    edx = esp + 0x14;
    PUSH32(esp, 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E0254u); RECOMP_ABI_CALL(0x000DCB50u, sub_000DCB50); /* call 0x000DCB50 */

loc_000E0254: ;
    esi = MEM32(0x758BBC);
    edi = MEM32(0x758CD4);
    edx = MEM32(0x758D18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0291; /* je: equal / zero */

loc_000E026D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0291; /* jne: not equal / not zero */

loc_000E0272: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0291; /* jne: not equal / not zero */

loc_000E0276: ;
    eax = MEM32(esp + 0x14);
    edx = eax;
    ecx = MEM32(edx);
    ebx = MEM32(edx + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(esp + 0x14) = eax;
    goto loc_000E0307;

loc_000E0291: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E02C5; /* je: equal / zero */

loc_000E02A2: ;
    ebx = ecx;
    ebx = ebx >> 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(ebx);
    MEM8(esp + 0x13) = LO8(ecx);
    ecx = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x10);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(ecx);

loc_000E02C5: ;
    ebx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E0303; /* je: equal / zero */

loc_000E02DE: ;
    edx = ebx;
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(ebx));
    MEM8(esp + 0x10) = LO8(edx);
    MEM8(esp + 0x13) = LO8(eax);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x10);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(edx);
    MEM8(esp + 0x12) = LO8(eax);

loc_000E0303: ;
    ebx = MEM32(esp + 0x10);

loc_000E0307: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(esp + 0x28);
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E0338; /* je: equal / zero */

loc_000E0311: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0338; /* jne: not equal / not zero */

loc_000E0316: ;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x000E0329u); RECOMP_ABI_CALL(0x000DCB50u, sub_000DCB50); /* call 0x000DCB50 */

loc_000E0329: ;
    edi = MEM32(esp + 0x18);
    esi = MEM32(0x758BBC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E033A;

loc_000E0338: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E033A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0349; /* je: equal / zero */

loc_000E033E: ;
    esi = MEM32(0x451B4C);
    PUSH32(esp, 0x000E0349u); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_000E0349: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E035A; /* je: equal / zero */

loc_000E034D: ;
    SET_LO8(eax, MEM8(0x758D20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0248; /* je: equal / zero */

loc_000E035A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E0364: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E0370
 * Original: 0x000E0370 - 0x000E03C2 (82 bytes, 38 insns)
 * Folder: files (match: xbox-demo 0x000C1330, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0370: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E038D; /* je: equal / zero */

loc_000E037B: ;
    esi = MEM32(eax);
    ecx = edx;
    ebx = ecx;
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
    ecx = ebx;
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

loc_000E038D: ;
    SET_LO8(ebx, MEM8(esp + 0x14));
    ecx = 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E03B8; /* je: equal / zero */

loc_000E039A: ;
    esi = MEM32(0x758BBC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E03B8; /* je: equal / zero */

loc_000E03A4: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E03B8; /* jne: not equal / not zero */

loc_000E03AC: ;
    edx = MEM32(eax);
    POP32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E03B8: ;
    ecx = MEM32(eax);
    POP32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E03D0
 * Original: 0x000E03D0 - 0x000E0452 (130 bytes, 47 insns)
 * Folder: files (match: xbox-demo 0x000C1390, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E03D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E03D0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_000E03F5; /* jne: not equal / not zero */

loc_000E03D9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E03F0; /* je: equal / zero */

loc_000E03DE: ;
    eax = MEM32(0x758BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E03F0; /* je: equal / zero */

loc_000E03E7: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0450; /* je: equal / zero */

loc_000E03F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + 0xC;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E03F5: ;
    eax = MEM32(0x758BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0427; /* je: equal / zero */

loc_000E03FE: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0427; /* jne: not equal / not zero */

loc_000E0407: ;
    eax = MEM32(0x758D18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0427; /* jne: not equal / not zero */

loc_000E0410: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + 0xC;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E0427: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x000E042Fu); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E042F: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEMF(esi) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E043Bu); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E043B: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E0448u); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E0448: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */

loc_000E0450: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E0460
 * Original: 0x000E0460 - 0x000E05D2 (370 bytes, 124 insns)
 * Folder: files (match: xbox-demo 0x000C1420, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0460: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E049B; /* jne: not equal / not zero */

loc_000E046E: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    eax = 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E0491; /* je: equal / zero */

loc_000E047B: ;
    ecx = MEM32(0x758BBC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0491; /* je: equal / zero */

loc_000E0485: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E05CF; /* je: equal / zero */

loc_000E0491: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x44;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E049B: ;
    eax = MEM32(0x758BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000E04CF; /* je: equal / zero */

loc_000E04A6: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E04CF; /* jne: not equal / not zero */

loc_000E04AF: ;
    eax = MEM32(0x758D18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E04CF; /* jne: not equal / not zero */

loc_000E04B8: ;
    esi = MEM32(ebx);
    edi = ebp;
    ecx = 0x11;
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
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x44;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E04CF: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000E04DBu); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E04DB: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(ebp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E04ECu); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E04EC: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    ecx = ebx;
    MEMF(ebp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E04FDu); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E04FD: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E050Eu); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E050E: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(ebp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E051Fu); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E051F: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    ecx = ebx;
    MEMF(ebp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E0530u); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E0530: ;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(ebp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E0541u); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E0541: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(ebp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E0552u); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E0552: ;
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    ecx = ebx;
    MEMF(ebp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E0563u); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E0563: ;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(ebp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E0574u); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E0574: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(ebp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E0585u); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E0585: ;
    edx = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    ecx = ebx;
    MEMF(ebp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E0596u); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E0596: ;
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    esi = ebp + 0x30;
    edi = ebx;
    MEMF(ebp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E05AAu); RECOMP_ABI_CALL(0x000E03D0u, sub_000E03D0); /* call 0x000E03D0 */

loc_000E05AA: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x000E05B6u); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E05B6: ;
    edx = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    edx = ebx;
    MEMF(ebp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E05C7u); RECOMP_ABI_CALL(0x0001DD20u, sub_0001DD20); /* call 0x0001DD20 */

loc_000E05C7: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ebp + 0x40) = eax;
    POP32(esp, esi);

loc_000E05CF: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E05E0
 * Original: 0x000E05E0 - 0x000E066D (141 bytes, 48 insns)
 * Folder: files (match: xbox-demo 0x000C15A0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E05E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E05E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E05FF; /* jne: not equal / not zero */

loc_000E05E4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E05FB; /* je: equal / zero */

loc_000E05E9: ;
    eax = MEM32(0x758BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E05FB; /* je: equal / zero */

loc_000E05F2: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E066C; /* je: equal / zero */

loc_000E05FB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + 0x10;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E05FF: ;
    eax = MEM32(0x758BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0636; /* je: equal / zero */

loc_000E0608: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0636; /* jne: not equal / not zero */

loc_000E0611: ;
    eax = MEM32(0x758D18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0636; /* jne: not equal / not zero */

loc_000E061A: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + 0x10;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E0636: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x000E063Eu); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E063E: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEMF(esi) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E064Au); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E064A: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E0657u); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E0657: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E0664u); RECOMP_ABI_CALL(0x0001F770u, sub_0001F770); /* call 0x0001F770 */

loc_000E0664: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */

loc_000E066C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E0670
 * Original: 0x000E0670 - 0x000E0714 (164 bytes, 66 insns)
 * Folder: files (match: xbox-demo 0x000C1630, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0670: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000E0697; /* jne: not equal / not zero */

loc_000E0677: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E0692; /* je: equal / zero */

loc_000E067C: ;
    eax = MEM32(0x758BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0692; /* je: equal / zero */

loc_000E0685: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0712; /* je: equal / zero */

loc_000E0692: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + 4;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E0697: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x758BBC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E06C4; /* je: equal / zero */

loc_000E06A2: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E06C4; /* jne: not equal / not zero */

loc_000E06AB: ;
    eax = MEM32(0x758D18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E06C4; /* jne: not equal / not zero */

loc_000E06B4: ;
    eax = MEM32(esi);
    ecx = MEM32(eax);
    MEM32(edi) = ecx;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(esi) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E06C4: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000E06CCu); RECOMP_ABI_CALL(0x000372F0u, sub_000372F0); /* call 0x000372F0 */

loc_000E06CC: ;
    MEM16(edi) = LO16(eax);
    eax = ebx;
    ebx = 2;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000E06EB; /* je: equal / zero */

loc_000E06DF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E06EB; /* je: equal / zero */

loc_000E06E3: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E06F2; /* je: equal / zero */

loc_000E06EB: ;
    edx = MEM32(esi);
    SET_LO8(ecx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = edx;

loc_000E06F2: ;
    MEM8(edi + 2) = LO8(ecx);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0707; /* je: equal / zero */

loc_000E06FB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0707; /* je: equal / zero */

loc_000E06FF: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E070E; /* je: equal / zero */

loc_000E0707: ;
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;

loc_000E070E: ;
    MEM8(edi + 3) = LO8(ecx);
    POP32(esp, ebp);

loc_000E0712: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E0720
 * Original: 0x000E0720 - 0x000E079D (125 bytes, 44 insns)
 * Folder: files (match: xbox-demo 0x000C16E0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0720: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E073F; /* jne: not equal / not zero */

loc_000E0724: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E073B; /* je: equal / zero */

loc_000E0729: ;
    eax = MEM32(0x758BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E073B; /* je: equal / zero */

loc_000E0732: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E079C; /* je: equal / zero */

loc_000E073B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + 8;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E073F: ;
    eax = MEM32(0x758BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E076A; /* je: equal / zero */

loc_000E0748: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E076A; /* jne: not equal / not zero */

loc_000E0751: ;
    eax = MEM32(0x758D18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E076A; /* jne: not equal / not zero */

loc_000E075A: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + 8;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E076A: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x000E0772u); RECOMP_ABI_CALL(0x000372F0u, sub_000372F0); /* call 0x000372F0 */

loc_000E0772: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM16(esi) = LO16(eax);
    PUSH32(esp, 0x000E077Du); RECOMP_ABI_CALL(0x000372F0u, sub_000372F0); /* call 0x000372F0 */

loc_000E077D: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM16(esi + 2) = LO16(eax);
    PUSH32(esp, 0x000E0789u); RECOMP_ABI_CALL(0x000372F0u, sub_000372F0); /* call 0x000372F0 */

loc_000E0789: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM16(esi + 4) = LO16(eax);
    PUSH32(esp, 0x000E0795u); RECOMP_ABI_CALL(0x000372F0u, sub_000372F0); /* call 0x000372F0 */

loc_000E0795: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 6) = LO16(eax);

loc_000E079C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E07A0
 * Original: 0x000E07A0 - 0x000E0813 (115 bytes, 40 insns)
 * Folder: files (match: xbox-demo 0x000C1760, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E07A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E07A0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E07BF; /* jne: not equal / not zero */

loc_000E07A4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E07BB; /* je: equal / zero */

loc_000E07A9: ;
    eax = MEM32(0x758BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E07BB; /* je: equal / zero */

loc_000E07B2: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0812; /* je: equal / zero */

loc_000E07BB: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + 6;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E07BF: ;
    eax = MEM32(0x758BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E07EC; /* je: equal / zero */

loc_000E07C8: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E07EC; /* jne: not equal / not zero */

loc_000E07D1: ;
    eax = MEM32(0x758D18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E07EC; /* jne: not equal / not zero */

loc_000E07DA: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    SET_LO16(edx, MEM16(eax + 4));
    MEM16(esi + 4) = LO16(edx);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + 6;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E07EC: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x000E07F4u); RECOMP_ABI_CALL(0x000372F0u, sub_000372F0); /* call 0x000372F0 */

loc_000E07F4: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM16(esi) = LO16(eax);
    PUSH32(esp, 0x000E07FFu); RECOMP_ABI_CALL(0x000372F0u, sub_000372F0); /* call 0x000372F0 */

loc_000E07FF: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM16(esi + 2) = LO16(eax);
    PUSH32(esp, 0x000E080Bu); RECOMP_ABI_CALL(0x000372F0u, sub_000372F0); /* call 0x000372F0 */

loc_000E080B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 4) = LO16(eax);

loc_000E0812: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E0820
 * Original: 0x000E0820 - 0x000E08D3 (179 bytes, 71 insns)
 * Folder: files (match: xbox-demo 0x000C17E0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0820: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000E0847; /* jne: not equal / not zero */

loc_000E0827: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E0842; /* je: equal / zero */

loc_000E082C: ;
    eax = MEM32(0x758BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0842; /* je: equal / zero */

loc_000E0835: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E08D1; /* je: equal / zero */

loc_000E0842: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + 8;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E0847: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x758BBC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E087A; /* je: equal / zero */

loc_000E0852: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E087A; /* jne: not equal / not zero */

loc_000E085B: ;
    eax = MEM32(0x758D18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E087A; /* jne: not equal / not zero */

loc_000E0864: ;
    eax = MEM32(esi);
    ecx = MEM32(eax);
    MEM32(edi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + 4) = edx;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(esi) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E087A: ;
    PUSH32(esp, ebx);
    edx = esi;
    PUSH32(esp, 0x000E0882u); RECOMP_ABI_CALL(0x0001DD20u, sub_0001DD20); /* call 0x0001DD20 */

loc_000E0882: ;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x000E088Cu); RECOMP_ABI_CALL(0x000372F0u, sub_000372F0); /* call 0x000372F0 */

loc_000E088C: ;
    MEM16(edi + 4) = LO16(eax);
    edx = 2;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000E08AA; /* je: equal / zero */

loc_000E089E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E08AA; /* je: equal / zero */

loc_000E08A2: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E08B1; /* je: equal / zero */

loc_000E08AA: ;
    ecx = MEM32(esi);
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = ecx;

loc_000E08B1: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM8(edi + 6) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000E08C6; /* je: equal / zero */

loc_000E08BA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E08C6; /* je: equal / zero */

loc_000E08BE: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E08CD; /* je: equal / zero */

loc_000E08C6: ;
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;

loc_000E08CD: ;
    MEM8(edi + 7) = LO8(ecx);
    POP32(esp, ebp);

loc_000E08D1: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E08E0
 * Original: 0x000E08E0 - 0x000E0913 (51 bytes, 16 insns)
 * Folder: files (match: xbox-demo 0x000C3EA0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E08E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E08E0: ;
    PUSH32(esp, esi);
    eax = 0x470148;
    PUSH32(esp, 0x000E08EBu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000E08EB: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0901; /* je: equal / zero */

loc_000E08F8: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E090B; /* je: equal / zero */

loc_000E0901: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0912; /* je: equal / zero */

loc_000E090B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0912; /* jne: not equal / not zero */

loc_000E0910: ;
    eax = esi;

loc_000E0912: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E0920
 * Original: 0x000E0920 - 0x000E09A5 (133 bytes, 51 insns)
 * Folder: files (between: 0x000E08E0 and 0x000E0B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000E0920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0920: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx + 4);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E094E; /* jl: less (signed <) */

loc_000E092F: ;
    esi = 0x64B168;

loc_000E0934: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0987; /* je: equal / zero */

loc_000E0939: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    ebp = MEM32(edx + 4);
    if (CMP_EQ(_fa, _fb)) ecx = eax; /* cmove */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E0934; /* jle: less or equal (signed <=) */

loc_000E094A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E095C; /* jge: greater or equal (signed >=) */

loc_000E094E: ;
    ecx = edi + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E099F; /* jge: greater or equal (signed >=) */

loc_000E0959: ;
    MEM32(edx + 4) = ecx;

loc_000E095C: ;
    eax = ecx + ecx * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x64B170) = ebx;
    MEM32(eax + 0x64B16C) = 0;
    eax = eax + 0x64B168;
    MEM32(eax) = 1;
    ecx = MEM32(edx);
    POP32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(edx) = ecx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000E0987: ;
    eax = eax + eax * 2;
    ecx = MEM32(eax * 4 + 0x64B168);
    eax = eax * 4 + 0x64B168;
    POP32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000E099F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000E09B0
 * Original: 0x000E09B0 - 0x000E0A35 (133 bytes, 51 insns)
 * Folder: files (between: 0x000E08E0 and 0x000E0B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000E09B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E09B0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx + 4);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E09DE; /* jl: less (signed <) */

loc_000E09BF: ;
    esi = 0x64B168;

loc_000E09C4: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0A17; /* je: equal / zero */

loc_000E09C9: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    ebp = MEM32(edx + 4);
    if (CMP_EQ(_fa, _fb)) ecx = eax; /* cmove */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E09C4; /* jle: less or equal (signed <=) */

loc_000E09DA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E09EC; /* jge: greater or equal (signed >=) */

loc_000E09DE: ;
    ecx = edi + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E0A2F; /* jge: greater or equal (signed >=) */

loc_000E09E9: ;
    MEM32(edx + 4) = ecx;

loc_000E09EC: ;
    eax = ecx + ecx * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x64B170) = 0xFFFFFFFFu;
    MEM32(eax + 0x64B16C) = ebx;
    eax = eax + 0x64B168;
    MEM32(eax) = 1;
    ecx = MEM32(edx);
    POP32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(edx) = ecx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000E0A17: ;
    eax = eax + eax * 2;
    ecx = MEM32(eax * 4 + 0x64B168);
    eax = eax * 4 + 0x64B168;
    POP32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000E0A2F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000E0A40
 * Original: 0x000E0A40 - 0x000E0A81 (65 bytes, 25 insns)
 * Folder: files (between: 0x000E08E0 and 0x000E0B30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0A40: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0A80; /* je: equal / zero */

loc_000E0A44: ;
    MEM32(edi) = MEM32(edi) - 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E0A80; /* jne: not equal / not zero */

loc_000E0A48: ;
    ecx = edi;
    _fb = (uint32_t)(0x64B168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x64B168;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    PUSH32(esp, ebx);
    ebx = MEM32(esi);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi) = ebx;
    ebx = MEM32(esi + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0A71; /* jne: not equal / not zero */

loc_000E0A6D: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ebx;

loc_000E0A71: ;
    MEM32(edi + 4) = 0;
    MEM32(edi + 8) = 0xFFFFFFFFu;
    POP32(esp, ebx);

loc_000E0A80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E0A90
 * Original: 0x000E0A90 - 0x000E0B27 (151 bytes, 56 insns)
 * Folder: files (between: 0x000E08E0 and 0x000E0B30)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0A90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E0B23; /* jl: less (signed <) */

loc_000E0AA2: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x758BBC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x64B16C;

loc_000E0AB0: ;
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0B11; /* je: equal / zero */

loc_000E0AB8: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0B11; /* jne: not equal / not zero */

loc_000E0ABD: ;
    PUSH32(esp, esi);
    eax = 0x470148;
    PUSH32(esp, 0x000E0AC8u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000E0AC8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0AD8; /* je: equal / zero */

loc_000E0ACF: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0AE2; /* je: equal / zero */

loc_000E0AD8: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0AE9; /* je: equal / zero */

loc_000E0AE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E0AEB; /* je: equal / zero */

loc_000E0AE9: ;
    ecx = eax;

loc_000E0AEB: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E0B03u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000E0B03: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0B11; /* je: equal / zero */

loc_000E0B0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0B11; /* je: equal / zero */

loc_000E0B0F: ;
    MEM32(edi) = eax;

loc_000E0B11: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E0AB0; /* jle: less or equal (signed <=) */

loc_000E0B20: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000E0B23: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E0B30
 * Original: 0x000E0B30 - 0x000E0DC9 (665 bytes, 154 insns)
 * Folder: files (match: xbox-demo 0x000C30B0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0B30: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(eax + 0x40)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x40), 0x3C (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E0B59; /* jne: not equal / not zero */

loc_000E0B3D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0DC5; /* je: equal / zero */

loc_000E0B45: ;
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E0B59: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000E0CA6; /* jne: not equal / not zero */

loc_000E0B6B: ;
    edx = MEM32(ecx);
    MEM32(esp) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 4) = edx;
    _fa = (uint32_t)(MEM8(eax + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E0C2A; /* je: equal / zero */

loc_000E0B81: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E0C2A: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E0CA6: ;
    _fa = (uint32_t)(MEM8(eax + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E0D53; /* je: equal / zero */

loc_000E0CB0: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E0D53: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */

loc_000E0DC5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E0DD0
 * Original: 0x000E0DD0 - 0x000E0EEB (283 bytes, 71 insns)
 * Folder: files (match: xbox-demo 0x000C3350, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0DD0: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x40), 0x3C (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E0DF9; /* jne: not equal / not zero */

loc_000E0DDD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0EE7; /* je: equal / zero */

loc_000E0DE5: ;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E0DF9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if (CMP_NE(_fa, _fb)) goto loc_000E0E8F; /* jne: not equal / not zero */

loc_000E0E21: ;
    edx = MEM32(eax);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 8); /* mulss */
    MEM32(esp) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    edx = MEM32(eax + 4);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    MEM32(esp + 4) = edx;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E0E8F: ;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */

loc_000E0EE7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E0EF0
 * Original: 0x000E0EF0 - 0x000E107C (396 bytes, 113 insns)
 * Folder: files (between: 0x000E0DD0 and 0x000E1080)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000E0EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0EF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = eax;
    MEM32(esi + 0x40) = 0;
    _fa = (uint32_t)(MEM8(ebx + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x40), 8 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    if (TEST_NZ(_fa, _fb)) goto loc_000E0F5A; /* jne: not equal / not zero */

loc_000E0F14: ;
    _fa = (uint32_t)(MEM8(edi + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x40), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E0F5A; /* jne: not equal / not zero */

loc_000E0F1A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    PUSH32(esp, edi);
    MEMF(ebx + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x3C) = xmm1.f[0]; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(edi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x3C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E0F55u); RECOMP_ABI_CALL(0x00352302u, sub_00352302); /* call 0x00352302 */

loc_000E0F55: ;
    goto loc_000E1037;

loc_000E0F5A: ;
    ecx = ebx;
    eax = esp + 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E0F65u); RECOMP_ABI_CALL(0x000E16E0u, sub_000E16E0); /* call 0x000E16E0 */

loc_000E0F65: ;
    ecx = edi;
    eax = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E0F70u); RECOMP_ABI_CALL(0x000E16E0u, sub_000E16E0); /* call 0x000E16E0 */

loc_000E0F70: ;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E0F7Cu); RECOMP_ABI_CALL(0x00352302u, sub_00352302); /* call 0x00352302 */

loc_000E0F7C: ;
    eax = esi;
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E0F87u); RECOMP_ABI_CALL(0x000E17C0u, sub_000E17C0); /* call 0x000E17C0 */

loc_000E0F87: ;
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E0F8Eu); RECOMP_ABI_CALL(0x000E1620u, sub_000E1620); /* call 0x000E1620 */

loc_000E0F8E: ;
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E1034; /* je: equal / zero */

loc_000E0F98: ;
    xmm2 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x14); /* divss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x18); /* divss */
    xmm2.f[0] = xmm2.f[0] / MEMF(esp + 0x1C); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esi + 8) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */

loc_000E1034: ;
    edi = MEM32(ebp + 0xC);

loc_000E1037: ;
    SET_LO8(ecx, MEM8(ebx + 0x40));
    eax = 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E1048; /* jne: not equal / not zero */

loc_000E1043: ;
    _fa = (uint32_t)(MEM8(edi + 0x40)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x40), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E104B; /* je: equal / zero */

loc_000E1048: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) | eax;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E104B: ;
    ecx = MEM32(esi + 0x30);
    eax = 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E106C; /* jne: not equal / not zero */

loc_000E1057: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x34), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E106C; /* jne: not equal / not zero */

loc_000E105C: ;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x38), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E106C; /* jne: not equal / not zero */

loc_000E1061: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000E106C: ;
    eax = MEM32(esi + 0x40);
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi + 0x40) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000E1080
 * Original: 0x000E1080 - 0x000E1233 (435 bytes, 101 insns)
 * Folder: files (match: xbox-demo 0x000C35F0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E1080: ;
    _fa = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x40), 0x3C (8-bit) */
    eax = MEM32(esp + 4);
    if (TEST_NZ(_fa, _fb)) goto loc_000E1091; /* jne: not equal / not zero */

loc_000E108A: ;
    ecx = edx;
    g_seh_ebp = ebp; sub_0005D500(); return; /* tail jmp 0x0005D500 */

loc_000E1091: ;
    PUSH32(esp, ebx);
    _fa = (uint32_t)(MEM8(edx + 0x40)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x40), 0x3C (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E109E; /* jne: not equal / not zero */

loc_000E1098: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0005D500(); return; /* tail jmp 0x0005D500 */

loc_000E109E: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 0x28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 0x10); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 0x18); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    SET_LO8(ebx, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1231; /* je: equal / zero */

loc_000E1222: ;
    edx = MEM32(edx + 0x40);
    edx = edx | MEM32(ecx + 0x40);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E1231; /* je: equal / zero */

loc_000E122D: ;
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | 4;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E1231: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E1240
 * Original: 0x000E1240 - 0x000E12DE (158 bytes, 47 insns)
 * Folder: files (match: xbox-demo 0x000C37B0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E1240: ;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(edx + 0x10);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 0x14);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(edx + 0x18);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(edx + 0x28);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(edx + 0x20);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(edx + 0x24);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(edx + 0x40);
    MEM32(eax + 0x40) = ecx;
    _fa = (uint32_t)(MEM8(edx + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E12AC; /* je: equal / zero */

loc_000E1280: ;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(edx + 0xC); /* divss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(edx + 0x1C); /* divss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(edx + 0x2C); /* divss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */

loc_000E12AC: ;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x30);
    ecx = eax + 0x30;
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = esi;
    esi = MEM32(edx + 0x34);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 0x38);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0x000E12D9u); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_000E12D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E12E0
 * Original: 0x000E12E0 - 0x000E1478 (408 bytes, 103 insns)
 * Folder: files (match: xbox-demo 0x000C3850, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E12E0(void)
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

loc_000E12E0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx); /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 4); /* subss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 8); /* subss */
    eax = 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ebp (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_000E133E; /* jne: not equal / not zero */

loc_000E1332: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x14), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E133E; /* jne: not equal / not zero */

loc_000E1338: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x18), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E1368; /* je: equal / zero */

loc_000E133E: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edx); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_000E1368: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMD(0x4293D0)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000E1472; /* jnp: not parity */

loc_000E1380: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMD(0x429430)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000E13A8; /* jnp: not parity */

loc_000E1394: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(MEMD(0x429430) / fp_top()); /* fdivr qword ptr [0x429430] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_000E13A8: ;
    xmm3 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esi + 4); /* subss */
    xmm4.f[0] = xmm4.f[0] - MEMF(esi + 8); /* subss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMD(0x4293D0)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000E144A; /* jnp: not parity */

loc_000E140B: ;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(edi + 4); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm4 = xmm0; /* movaps */

loc_000E144A: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */

loc_000E1472: ;
    POP32(esp, edi);
    POP32(esp, ebp);
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
 * sub_000E1480
 * Original: 0x000E1480 - 0x000E1589 (265 bytes, 66 insns)
 * Folder: files (match: xbox-demo 0x000C39F0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1480(void)
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

loc_000E1480: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    eax = 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ebx (32-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_000E14CB; /* jne: not equal / not zero */

loc_000E14BF: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0xC), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E14CB; /* jne: not equal / not zero */

loc_000E14C5: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x10), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E14F1; /* je: equal / zero */

loc_000E14CB: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 8); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    goto loc_000E14F9;

loc_000E14F1: ;
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */

loc_000E14F9: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, ebx);
    fp_push(MEMD(0x4293D0)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000E1585; /* jnp: not parity */

loc_000E1514: ;
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edx); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 8); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */

loc_000E1585: ;
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
 * sub_000E1590
 * Original: 0x000E1590 - 0x000E15E7 (87 bytes, 26 insns)
 * Folder: files (match: xbox-demo 0x000C3B00, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000E1590: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    eax = MEM32(esp);
    ecx = 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_000E15D2; /* je: equal / zero */

loc_000E15CC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E15D2: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 4), ecx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000E15CC; /* jne: not equal / not zero */

loc_000E15D8: ;
    eax = MEM32(esp + 8);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E15F0
 * Original: 0x000E15F0 - 0x000E1616 (38 bytes, 14 insns)
 * Folder: files (match: xbox-demo 0x000C3B60, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E15F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E15F0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E1608; /* je: equal / zero */

loc_000E15F6: ;
    edx = MEM32(ecx + 0xC);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x2C);
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

loc_000E1608: ;
    ecx = 0x3F800000;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E1620
 * Original: 0x000E1620 - 0x000E16DE (190 bytes, 50 insns)
 * Folder: files (between: 0x000E15F0 and 0x000E16E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E1620: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x64509C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi); /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6450A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 4); /* subss */
    ecx = MEM32(esp + 4);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6450A4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 8); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429388)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = MEM32(esp);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E1695; /* jg: greater (signed >) */

loc_000E1679: ;
    edx = MEM32(esp + 8);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E1695; /* jg: greater (signed >) */

loc_000E1687: ;
    ecx = MEM32(esp + 0xC);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E16CB; /* jle: less or equal (signed <=) */

loc_000E1695: ;
    PUSH32(esp, 0x38D1B717);
    eax = edi;
    ecx = 0x64506C;
    PUSH32(esp, 0x000E16A6u); RECOMP_ABI_CALL(0x00035DD0u, sub_00035DD0); /* call 0x00035DD0 */

loc_000E16A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E16CB; /* jne: not equal / not zero */

loc_000E16AD: ;
    edx = MEM32(edi);
    MEM32(esi + 0xC) = edx;
    eax = MEM32(edi + 4);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(edi + 8);
    eax = eax | 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x40) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E16CB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E16E0
 * Original: 0x000E16E0 - 0x000E17C0 (224 bytes, 57 insns)
 * Folder: files (match: xbox-demo 0x000C3CB0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E16E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E16E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E17A2; /* je: equal / zero */

loc_000E16ED: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xC); /* mulss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xC); /* mulss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x1C); /* mulss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x1C); /* mulss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x1C); /* mulss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x2C); /* mulss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x2C); /* mulss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x2C); /* mulss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x30);
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEM32(eax + 0x30) = ecx;
    edx = MEM32(esi + 0x34);
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(esi + 0x38);
    MEM32(eax + 0x38) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x40) = MEM32(eax + 0x40) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E17A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E17B1; /* je: equal / zero */

loc_000E17A6: ;
    PUSH32(esp, edi);
    ecx = 0x14;
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
    POP32(esp, edi);

loc_000E17B1: ;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E17C0
 * Original: 0x000E17C0 - 0x000E189B (219 bytes, 73 insns)
 * Folder: files (match: xbox-demo 0x000C3D90, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E17C0(void)
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

loc_000E17C0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(eax + 8)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x429388)); /* movss */
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
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    edx = MEM32(eax + 0x10);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esp) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    MEMF(ecx + 4) = (float)fp_top(); /* fst */
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429444)); /* fmul dword ptr [0x429444] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x645158)); /* fadd qword ptr [0x645158] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    xmm1.f[0] = (float)(int32_t)MEM32(esp); /* cvtsi2ss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429444)); /* fmul dword ptr [0x429444] */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x645158)); /* fadd qword ptr [0x645158] */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 8); /* cvtsi2ss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429444)); /* fmul dword ptr [0x429444] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x645158)); /* fadd qword ptr [0x645158] */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
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
 * sub_000E18A0
 * Original: 0x000E18A0 - 0x000E18CF (47 bytes, 14 insns)
 * Folder: files (match: xbox-demo 0x000C3E70, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E18A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000E18A0: ;
    _fa = (uint32_t)(MEM8(eax + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E18C6; /* je: equal / zero */

loc_000E18A6: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E18BD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E18BA: ;
    xmm0 = xmm1; /* movaps */

loc_000E18BD: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E18CE; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000E18C2: ;
    xmm0 = xmm2; /* movaps */
    esp += 4; return; /* ret */

loc_000E18C6: ;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */

loc_000E18CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E18D0
 * Original: 0x000E18D0 - 0x000E1A6C (412 bytes, 103 insns)
 * Folder: files (match: xbox-demo 0x000C3EE0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E18D0(void)
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

loc_000E18D0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = MEM32(esp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429354)); /* fmul dword ptr [0x429354] */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_000E18F4; /* jne: not equal / not zero */

loc_000E18F0: ;
    eax = esp + 8;

loc_000E18F4: ;
    fp_top() = cos(fp_top()); /* fcos */
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x4293F8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm6 = xmm2; /* movaps */
    xmm3 = xmm2; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    SET_LO8(eax, MEM8(esp + 0x24));
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x20); /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x20); /* addss */
    xmm7.f[0] = xmm7.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x1C); /* subss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] - xmm6.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    eax = MEM32(ecx + 0x40);
    MEMF(ecx + 0x18) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm4.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1A61; /* je: equal / zero */

loc_000E1A3E: ;
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x1C) = ebx;
    MEM32(ecx + 0x2C) = ebx;
    MEM32(ecx + 0x30) = ebx;
    MEM32(ecx + 0x34) = ebx;
    MEM32(ecx + 0x38) = ebx;
    edx = MEM32(ecx + 0x40);
    edx = edx & 0xFFFFFFFDu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x40) = edx;
    eax = edx;

loc_000E1A61: ;
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x40) = eax;
    POP32(esp, ebx);
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
 * sub_000E1A70
 * Original: 0x000E1A70 - 0x000E1B46 (214 bytes, 51 insns)
 * Folder: files (between: 0x000E18D0 and 0x000E1B50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E1A70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E1A81u); RECOMP_ABI_CALL(0x000E18D0u, sub_000E18D0); /* call 0x000E18D0 */

loc_000E1A81: ;
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    SET_LO8(eax, MEM8(esp + 0x18));
    MEMF(esi + 0x30) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esi + 0x34) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 8); /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x38) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1B41; /* je: equal / zero */

loc_000E1B23: ;
    ecx = MEM32(esi + 0x40);
    ecx = ecx & 0xFFFFFFF7u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 0x1C) = 0;
    MEM32(esi + 0x2C) = 0;
    MEM32(esi + 0x40) = ecx;

loc_000E1B41: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) | 6;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E1B50
 * Original: 0x000E1B50 - 0x000E1C11 (193 bytes, 49 insns)
 * Folder: files (match: xbox-demo 0x000C4080, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1B50(void)
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

loc_000E1B50: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = MEM32(eax + 0x40);
    xmm3 = xmm2; /* movaps */
    ecx = ecx | 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x40) = ecx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(eax + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 0x24) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm2.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E1C20
 * Original: 0x000E1C20 - 0x000E1CE4 (196 bytes, 50 insns)
 * Folder: files (match: xbox-demo 0x000C4150, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1C20(void)
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

loc_000E1C20: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = MEM32(eax + 0x40);
    xmm4 = xmm2; /* movaps */
    ecx = ecx | 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x40) = ecx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(eax + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x28) = xmm3.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E1CF0
 * Original: 0x000E1CF0 - 0x000E1DB4 (196 bytes, 50 insns)
 * Folder: files (match: xbox-demo 0x000C4220, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1CF0(void)
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

loc_000E1CF0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = MEM32(eax + 0x40);
    xmm3 = xmm2; /* movaps */
    ecx = ecx | 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x40) = ecx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 0x24) = xmm3.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E1DC0
 * Original: 0x000E1DC0 - 0x000E1E7F (191 bytes, 49 insns)
 * Folder: files (match: xbox-demo 0x000C42F0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1DC0(void)
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

loc_000E1DC0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    ecx = MEM32(eax + 0x40);
    xmm3 = xmm2; /* movaps */
    ecx = ecx | 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x40) = ecx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(eax + 0x24) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x18) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E1E80
 * Original: 0x000E1E80 - 0x000E1F44 (196 bytes, 50 insns)
 * Folder: files (match: xbox-demo 0x000C43B0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1E80(void)
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

loc_000E1E80: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    ecx = MEM32(eax + 0x40);
    xmm3 = xmm2; /* movaps */
    ecx = ecx | 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x40) = ecx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(eax + 0x24) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 0x28) = xmm3.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E1F50
 * Original: 0x000E1F50 - 0x000E2014 (196 bytes, 50 insns)
 * Folder: files (match: xbox-demo 0x000C4480, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1F50(void)
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

loc_000E1F50: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    ecx = MEM32(eax + 0x40);
    xmm4 = xmm2; /* movaps */
    ecx = ecx | 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x40) = ecx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x18) = xmm3.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E2020
 * Original: 0x000E2020 - 0x000E236B (843 bytes, 222 insns)
 * Folder: files (between: 0x000E1F50 and 0x000E2650)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2020(void)
{
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

loc_000E2020: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    PUSH32(esp, ebx);
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000E207A; /* jnp: not parity */

loc_000E2064: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */

loc_000E207A: ;
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x18) = xmm1.f[0]; /* movss */
    ebx = MEM32(ecx + 0x10);
    eax = MEM32(ecx + 0x14);
    edi = 0x80000000u;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x10) = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) + edi;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(ecx + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E224C; /* je: equal / zero */

loc_000E20C5: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000E2112; /* jnp: not parity */

loc_000E20FC: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */

loc_000E2112: ;
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 4); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx)); /* movss */
    esi = MEM32(ecx);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429608)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    if (CMP_G(_fas, _fbs)) goto loc_000E221F; /* jg: greater (signed >) */

loc_000E21A9: ;
    esi = MEM32(ecx + 4);
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E221F; /* jg: greater (signed >) */

loc_000E21B6: ;
    esi = MEM32(ecx + 8);
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E221F; /* jg: greater (signed >) */

loc_000E21C3: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x429388); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */

loc_000E221F: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x20) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 0x24) = edx;
    MEM32(ecx + 0x28) = eax;
    esi = MEM32(ecx);
    edx = MEM32(ecx + 4);
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = esi;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    goto loc_000E22A2;

loc_000E224C: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */

loc_000E22A2: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    fp_push(MEMF(ecx + 4)); /* fld float */
    SET_LO8(eax, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    fp_push(MEMF(ecx)); /* fld float */
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
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x18); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000E235B; /* je: equal / zero */

loc_000E2341: ;
    MEM32(ecx + 0x40) = MEM32(ecx + 0x40) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x1C) = ebx;
    MEM32(ecx + 0x2C) = ebx;
    MEM32(ecx + 0x30) = ebx;
    MEM32(ecx + 0x34) = ebx;
    MEM32(ecx + 0x38) = ebx;
    MEM32(ecx + 0x40) = MEM32(ecx + 0x40) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000E235B: ;
    eax = MEM32(ecx + 0x40);
    POP32(esp, edi);
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    MEM32(ecx + 0x40) = eax;
    POP32(esp, ebx);
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
 * sub_000E2370
 * Original: 0x000E2370 - 0x000E2644 (724 bytes, 186 insns)
 * Folder: files (between: 0x000E1F50 and 0x000E2650)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2370(void)
{
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

loc_000E2370: ;
    xmm2 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000E23C6; /* jnp: not parity */

loc_000E23B0: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_000E23C6: ;
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x28) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2452; /* je: equal / zero */

loc_000E23F5: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 0x18) = eax;
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
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
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    MEMF(ecx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_000E2452: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x28); /* mulss */
    esi = MEM32(ecx);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x24); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429548)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E2578; /* jg: greater (signed >) */

loc_000E24CA: ;
    esi = MEM32(ecx + 4);
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E2578; /* jg: greater (signed >) */

loc_000E24DB: ;
    esi = MEM32(ecx + 8);
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E2578; /* jg: greater (signed >) */

loc_000E24EC: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x645090); /* addss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x645094); /* addss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x645098); /* addss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x14); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */

loc_000E2578: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    fp_push(MEMF(ecx + 4)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    fp_push(MEMF(ecx)); /* fld float */
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
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
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x24); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000E263E; /* je: equal / zero */

loc_000E261F: ;
    esi = MEM32(ecx + 0x40);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x1C) = edx;
    MEM32(ecx + 0x2C) = edx;
    esi = esi & 0xFFFFFFF7u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x40) = esi;
    MEM32(ecx + 0x30) = edx;
    MEM32(ecx + 0x34) = edx;
    MEM32(ecx + 0x38) = edx;
    MEM32(ecx + 0x40) = MEM32(ecx + 0x40) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000E263E: ;
    MEM32(ecx + 0x40) = MEM32(ecx + 0x40) | 4;
    _fa = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E2385
 * Original: 0x000E2385 - 0x000E2644 (703 bytes, 181 insns)
 * Folder: files (between: 0x000E1F50 and 0x000E2650)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2385(void)
{
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

loc_000E2385: ;
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000E23C6; /* jnp: not parity */

loc_000E23B0: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_000E23C6: ;
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x28) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2452; /* je: equal / zero */

loc_000E23F5: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 0x18) = eax;
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
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
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    MEMF(ecx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_000E2452: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x28); /* mulss */
    esi = MEM32(ecx);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x24); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429548)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E2578; /* jg: greater (signed >) */

loc_000E24CA: ;
    esi = MEM32(ecx + 4);
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E2578; /* jg: greater (signed >) */

loc_000E24DB: ;
    esi = MEM32(ecx + 8);
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E2578; /* jg: greater (signed >) */

loc_000E24EC: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x645090); /* addss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x645094); /* addss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x645098); /* addss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x14); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */

loc_000E2578: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    fp_push(MEMF(ecx + 4)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    fp_push(MEMF(ecx)); /* fld float */
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
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
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x24); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000E263E; /* je: equal / zero */

loc_000E261F: ;
    esi = MEM32(ecx + 0x40);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x1C) = edx;
    MEM32(ecx + 0x2C) = edx;
    esi = esi & 0xFFFFFFF7u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x40) = esi;
    MEM32(ecx + 0x30) = edx;
    MEM32(ecx + 0x34) = edx;
    MEM32(ecx + 0x38) = edx;
    MEM32(ecx + 0x40) = MEM32(ecx + 0x40) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000E263E: ;
    MEM32(ecx + 0x40) = MEM32(ecx + 0x40) | 4;
    _fa = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E2650
 * Original: 0x000E2650 - 0x000E2806 (438 bytes, 136 insns)
 * Folder: files (match: xbox-demo 0x000C4AF0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2650(void)
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

loc_000E2650: ;
    edx = MEM32(eax);
    ecx = 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E267F; /* jne: not equal / not zero */

loc_000E265B: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 4), ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E267F; /* jne: not equal / not zero */

loc_000E2660: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E267F; /* jne: not equal / not zero */

loc_000E2665: ;
    ecx = MEM32(0x645090);
    MEM32(eax) = ecx;
    edx = MEM32(0x645094);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x645098);
    MEM32(eax + 8) = ecx;

loc_000E267F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_push(MEMF(eax + 0x10)); /* fld float */
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
    SET_LO8(edx, MEM8(esp + 4));
    fp_pop(); /* fstp st(0) */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_push(MEMF(eax + 0x20)); /* fld float */
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
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x24)); /* fmul dword ptr [eax + 0x24] */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2801; /* je: equal / zero */

loc_000E27E7: ;
    MEM32(eax + 0x40) = MEM32(eax + 0x40) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x40) = MEM32(eax + 0x40) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000E2801: ;
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | 4;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E2810
 * Original: 0x000E2810 - 0x000E29C4 (436 bytes, 135 insns)
 * Folder: files (match: xbox-demo 0x000C4CB0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2810(void)
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

loc_000E2810: ;
    edx = MEM32(eax + 0x10);
    ecx = 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2841; /* jne: not equal / not zero */

loc_000E281C: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x14), ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2841; /* jne: not equal / not zero */

loc_000E2821: ;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x18), ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2841; /* jne: not equal / not zero */

loc_000E2826: ;
    ecx = MEM32(0x645084);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x645088);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(0x64508C);
    MEM32(eax + 0x18) = ecx;

loc_000E2841: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_push(MEMF(eax + 0x10)); /* fld float */
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
    SET_LO8(edx, MEM8(esp + 4));
    fp_pop(); /* fstp st(0) */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_push(MEMF(eax + 0x20)); /* fld float */
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
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x24)); /* fmul dword ptr [eax + 0x24] */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_000E29BF; /* je: equal / zero */

loc_000E29A5: ;
    MEM32(eax + 0x40) = MEM32(eax + 0x40) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x40) = MEM32(eax + 0x40) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000E29BF: ;
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | 4;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E29D0
 * Original: 0x000E29D0 - 0x000E2B8D (445 bytes, 137 insns)
 * Folder: files (match: xbox-demo 0x000C4E70, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E29D0(void)
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

loc_000E29D0: ;
    PUSH32(esp, ecx);
    edx = MEM32(eax + 0x20);
    ecx = 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2A02; /* jne: not equal / not zero */

loc_000E29DD: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x24), ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2A02; /* jne: not equal / not zero */

loc_000E29E2: ;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x28), ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E2A02; /* jne: not equal / not zero */

loc_000E29E7: ;
    ecx = MEM32(0x645078);
    MEM32(eax + 0x20) = ecx;
    edx = MEM32(0x64507C);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(0x645080);
    MEM32(eax + 0x28) = ecx;

loc_000E2A02: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(eax + 4)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    fp_push(MEMF(eax)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_push(MEMF(eax + 0x10)); /* fld float */
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
    SET_LO8(edx, MEM8(esp + 8));
    fp_pop(); /* fstp st(0) */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_push(MEMF(eax + 0x20)); /* fld float */
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
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x24)); /* fmul dword ptr [eax + 0x24] */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2B87; /* je: equal / zero */

loc_000E2B6D: ;
    MEM32(eax + 0x40) = MEM32(eax + 0x40) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x40) = MEM32(eax + 0x40) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000E2B87: ;
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | 4;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E2B90
 * Original: 0x000E2B90 - 0x000E2C0B (123 bytes, 46 insns)
 * Folder: files (match: xbox-demo 0x000C5030, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E2B90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    MEM32(eax + 0x40) = ebp;
    ebp = MEM32(ebx);
    MEM32(eax) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(eax + 4) = ebp;
    ebx = MEM32(ebx + 8);
    MEM32(eax + 8) = ebx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(edi);
    MEM32(eax + 0x10) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(eax + 0x14) = ebx;
    edi = MEM32(edi + 8);
    MEM32(eax + 0x18) = edi;
    edi = MEM32(esi);
    MEM32(eax + 0x20) = edi;
    edi = MEM32(esi + 4);
    MEM32(eax + 0x24) = edi;
    esi = MEM32(esi + 8);
    MEM32(eax + 0x28) = esi;
    esi = MEM32(ecx);
    MEM32(eax + 0xC) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + 0x1C) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(edx);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(edx + 4);
    POP32(esp, edi);
    MEM32(eax + 0x34) = ecx;
    edx = MEM32(edx + 8);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = 0x3F800000;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E2C10
 * Original: 0x000E2C10 - 0x000E2F2A (794 bytes, 201 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000E2C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2C10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x40);
    MEM32(esp + 0xC) = eax;
    eax = 8;
    SET_LO8(ecx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi + 0x40) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000E2C43; /* je: equal / zero */

loc_000E2C30: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x2C);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    goto loc_000E2C50;

loc_000E2C43: ;
    eax = 0x3F800000;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;

loc_000E2C50: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x64509C); /* subss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ecx = MEM32(esp + 0x24);
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x6450A0); /* subss */
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(0x6450A4); /* subss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x429388)); /* movss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E2CDA; /* jg: greater (signed >) */

loc_000E2CBB: ;
    edx = MEM32(esp + 0x28);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E2CDA; /* jg: greater (signed >) */

loc_000E2CC9: ;
    ecx = MEM32(esp + 0x2C);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E2CDA; /* jg: greater (signed >) */

loc_000E2CD7: ;
    MEM32(esi + 0x40) = edi;

loc_000E2CDA: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64506C); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x645070); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x645074); /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    if (CMP_G(_fas, _fbs)) goto loc_000E2D3C; /* jg: greater (signed >) */

loc_000E2D1C: ;
    ecx = MEM32(esp + 0x28);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E2D3C; /* jg: greater (signed >) */

loc_000E2D2A: ;
    edx = MEM32(esp + 0x2C);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E2D3C; /* jg: greater (signed >) */

loc_000E2D38: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000E2D3C: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esi + 0x10);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esi + 0x20);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(esi + 0x14);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esi + 0x18);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esi + 0x40);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esi + 0x24);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esi + 0x28);
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    eax = MEM32(esp + 0x70);
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x58) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000E2D8C; /* je: equal / zero */

loc_000E2D89: ;
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E2D8C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x645100); /* subss */
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x645104); /* subss */
    ecx = MEM32(esp + 0x24);
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    MEM32(esp + 0x70) = eax;
    eax = MEM32(esp + 0xC);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x645108); /* subss */
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x3C) = edi;
    MEM32(esp + 0x4C) = edi;
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x60) = edi;
    MEM32(esp + 0x64) = edi;
    MEM32(esp + 0x68) = edi;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_000E2E0B; /* jle: less or equal (signed <=) */

loc_000E2E05: ;
    MEM32(esp + 0xC) = edi;
    goto loc_000E2E34;

loc_000E2E0B: ;
    edx = MEM32(esp + 0x28);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E2E1F; /* jle: less or equal (signed <=) */

loc_000E2E19: ;
    MEM32(esp + 0xC) = edi;
    goto loc_000E2E34;

loc_000E2E1F: ;
    edx = MEM32(esp + 0x2C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    MEM32(esp + 0xC) = ecx;

loc_000E2E34: ;
    PUSH32(esp, 0x38D1B717);
    eax = 0x645120;
    ecx = esp + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2E47u); RECOMP_ABI_CALL(0x00035DD0u, sub_00035DD0); /* call 0x00035DD0 */

loc_000E2E47: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x38D1B717);
    eax = 0x645110;
    ecx = esp + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2E5Cu); RECOMP_ABI_CALL(0x00035DD0u, sub_00035DD0); /* call 0x00035DD0 */

loc_000E2E5C: ;
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(esp + 0x14));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E2E91; /* je: equal / zero */

loc_000E2E69: ;
    eax = 0x3F800000;
    MEM32(esi) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    eax = eax & 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_000E2E9E;

loc_000E2E91: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2E98u); RECOMP_ABI_CALL(0x000DF220u, sub_000DF220); /* call 0x000DF220 */

loc_000E2E98: ;
    eax = MEM32(esi + 0x40);
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E2E9E: ;
    MEM32(esi + 0x40) = eax;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64506C); /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x645070); /* subss */
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x645074); /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429608)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E2F16; /* jg: greater (signed >) */

loc_000E2EFA: ;
    edx = MEM32(esp + 0x28);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E2F16; /* jg: greater (signed >) */

loc_000E2F08: ;
    ecx = MEM32(esp + 0x2C);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E2F1A; /* jle: less or equal (signed <=) */

loc_000E2F16: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) | 2;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E2F1A: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x40);
    POP32(esp, edi);
    MEM32(esi + 0x40) = edx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000E2F30
 * Original: 0x000E2F30 - 0x000E2F4F (31 bytes, 11 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2F30: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x429030;
    if (TEST_Z(_fa, _fb)) goto loc_000E2F49; /* je: equal / zero */

loc_000E2F40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E2F46u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_000E2F46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E2F49: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2F50
 * Original: 0x000E2F50 - 0x000E2F57 (7 bytes, 2 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2F50(void)
{

loc_000E2F50: ;
    MEM32(ecx) = 0x429030;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2F60
 * Original: 0x000E2F60 - 0x000E2F8C (44 bytes, 16 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2F60: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x428FB8;
    if (TEST_Z(_fa, _fb)) goto loc_000E2F86; /* je: equal / zero */

loc_000E2F70: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2F7E; /* jne: not equal / not zero */

loc_000E2F79: ;
    PUSH32(esp, 0x000E2F7Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000E2F7E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000E2F86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2F83u); } /* indirect call */
    }

loc_000E2F86: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2F90
 * Original: 0x000E2F90 - 0x000E2FC1 (49 bytes, 19 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2F90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi;
    PUSH32(esp, 0x000E2F9Au); RECOMP_ABI_CALL(0x000E2FD0u, sub_000E2FD0); /* call 0x000E2FD0 */

loc_000E2F9A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E2FBB; /* je: equal / zero */

loc_000E2FA1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2FBB; /* je: equal / zero */

loc_000E2FA5: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2FB3; /* jne: not equal / not zero */

loc_000E2FAE: ;
    PUSH32(esp, 0x000E2FB3u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000E2FB3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000E2FBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2FB8u); } /* indirect call */
    }

loc_000E2FBB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2FD0
 * Original: 0x000E2FD0 - 0x000E2FD7 (7 bytes, 2 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2FD0(void)
{

loc_000E2FD0: ;
    MEM32(eax) = 0x428FB8;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2FE0
 * Original: 0x000E2FE0 - 0x000E2FFF (31 bytes, 12 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2FE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E2FE9u); RECOMP_ABI_CALL(0x00330490u, sub_00330490); /* call 0x00330490 */

loc_000E2FE9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E2FF9; /* je: equal / zero */

loc_000E2FF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E2FF6u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_000E2FF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E2FF9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3000
 * Original: 0x000E3000 - 0x000E3092 (146 bytes, 47 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3000: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x369195);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = edi + 0x18;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(edi + 4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E302E; /* je: equal / zero */

loc_000E3028: ;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0x14) = ebx;

loc_000E302E: ;
    MEM32(esp + 0x14) = ebx;
    MEM32(edi) = 0x428FB0;
    MEM32(esi) = 0x429034;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM8(esi + 4) = LO8(ebx);
    MEM8(esp + 0x14) = 1;
    eax = MEM32(0x46B18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E305D; /* jne: not equal / not zero */

loc_000E3058: ;
    PUSH32(esp, 0x000E305Du); RECOMP_ABI_CALL(0x00093250u, sub_00093250); /* call 0x00093250 */

loc_000E305D: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x41);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000E306Bu); RECOMP_ABI_CALL(0x00094170u, sub_00094170); /* call 0x00094170 */

loc_000E306B: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = edi;
    POP32(esp, edi);
    MEM8(esi + 4) = LO8(edx);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E30A0
 * Original: 0x000E30A0 - 0x000E30BF (31 bytes, 12 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E30A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E30A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E30A9u); RECOMP_ABI_CALL(0x000E30C0u, sub_000E30C0); /* call 0x000E30C0 */

loc_000E30A9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E30B9; /* je: equal / zero */

loc_000E30B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E30B6u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_000E30B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E30B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E30C0
 * Original: 0x000E30C0 - 0x000E3103 (67 bytes, 17 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E30C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E30C0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x369168);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000E30EBu); RECOMP_ABI_CALL(0x00330490u, sub_00330490); /* call 0x00330490 */

loc_000E30EB: ;
    ecx = MEM32(esp + 4);
    MEM32(esi) = 0x429030;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3110
 * Original: 0x000E3110 - 0x000E3164 (84 bytes, 35 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E3110: ;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebx + 0x10);
    edx = ecx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E312A; /* jbe: below or equal (unsigned <=) */

loc_000E3126: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;

loc_000E312A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E3159; /* jbe: below or equal (unsigned <=) */

loc_000E3130: ;
    edx = MEM32(0x758634);
    eax = esi + ebp;
    PUSH32(esp, eax);
    ecx = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E3148u); RECOMP_ABI_CALL(0x00095BE0u, sub_00095BE0); /* call 0x00095BE0 */

loc_000E3148: ;
    ecx = MEM32(0x758634);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000E3155u); RECOMP_ABI_CALL(0x00095E80u, sub_00095E80); /* call 0x00095E80 */

loc_000E3155: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000E3130; /* jb: below (unsigned <) */

loc_000E3159: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) + edi;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3170
 * Original: 0x000E3170 - 0x000E31F0 (128 bytes, 50 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E3170: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    if ((_fa == 0)) goto loc_000E31A0; /* je: equal / zero */

loc_000E317D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000E319C; /* je: equal / zero */

loc_000E3180: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000E318B; /* je: equal / zero */

loc_000E3183: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000E318B: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E3198; /* jae: above or equal (unsigned >=) */

loc_000E3192: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    goto loc_000E31A0;

loc_000E3198: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000E31A0;

loc_000E319C: ;
    esi = MEM32(esp + 0xC);

loc_000E31A0: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758634);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    if (CMP_A(_fa, _fb)) esi = eax; /* cmova */
    PUSH32(esp, 0x000E31B8u); RECOMP_ABI_CALL(0x00095A30u, sub_00095A30); /* call 0x00095A30 */

loc_000E31B8: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    edx = MEM32(0x758634);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(ebp + 0x14) = 0;
    PUSH32(esp, 0x000E31DCu); RECOMP_ABI_CALL(0x00095940u, sub_00095940); /* call 0x00095940 */

loc_000E31DC: ;
    ecx = MEM32(0x758634);
    PUSH32(esp, 0x000E31E7u); RECOMP_ABI_CALL(0x00095E80u, sub_00095E80); /* call 0x00095E80 */

loc_000E31E7: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E31F0
 * Original: 0x000E31F0 - 0x000E321A (42 bytes, 11 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E31F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E31F0: ;
    MEM32(eax + 0x10) = ecx;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    MEM32(eax + 0x14) = 0;
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x758634);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E320Fu); RECOMP_ABI_CALL(0x00095940u, sub_00095940); /* call 0x00095940 */

loc_000E320F: ;
    ecx = MEM32(0x758634);
    g_seh_ebp = ebp; sub_00095E80(); return; /* tail jmp 0x00095E80 */

}

/**
 * sub_000E3220
 * Original: 0x000E3220 - 0x000E32E4 (196 bytes, 77 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000E3220: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    MEM32(edi) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000E3240; /* jne: not equal / not zero */

loc_000E322F: ;
    edi = MEM32(esi + 0x10);
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000E3240: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(esi + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000E3295; /* je: equal / zero */

loc_000E3247: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000E3254; /* jge: greater or equal (signed >=) */

loc_000E324B: ;
    eax = 3;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000E3254: ;
    PUSH32(esp, eax);
    eax = MEM32(0x758634);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E3261u); RECOMP_ABI_CALL(0x00095BE0u, sub_00095BE0); /* call 0x00095BE0 */

loc_000E3261: ;
    ecx = MEM32(0x758634);
    MEM32(edi) = eax;
    PUSH32(esp, 0x000E326Eu); RECOMP_ABI_CALL(0x00095E80u, sub_00095E80); /* call 0x00095E80 */

loc_000E326E: ;
    ecx = MEM32(edi);
    edx = MEM32(esi + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x10);
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000E328F; /* jne: not equal / not zero */

loc_000E3281: ;
    edx = MEM32(edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_000E328F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000E3295: ;
    edx = MEM32(0x758634);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E32A3u); RECOMP_ABI_CALL(0x00095BE0u, sub_00095BE0); /* call 0x00095BE0 */

loc_000E32A3: ;
    ecx = MEM32(0x758634);
    MEM32(edi) = eax;
    PUSH32(esp, 0x000E32B0u); RECOMP_ABI_CALL(0x00095E80u, sub_00095E80); /* call 0x00095E80 */

loc_000E32B0: ;
    eax = MEM32(edi);
    edx = MEM32(esi + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = edx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = edx;
    if (CMP_AE(_fa, _fb)) goto loc_000E32D4; /* jae: above or equal (unsigned >=) */

loc_000E32C0: ;
    edx = MEM32(esi + 0x10);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    ecx = ecx + ecx + 2;
    eax = ecx;
    esp += 8; return; /* ret 4 */

loc_000E32D4: ;
    ecx = MEM32(esi + 0x10);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    eax = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E32F0
 * Original: 0x000E32F0 - 0x000E331B (43 bytes, 15 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E32F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E32F0: ;
    ecx = MEM32(0x758634);
    eax = MEM32(eax + 4);
    edx = MEM32(ecx + 0x18);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 0xC));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000E3315; /* jb: below (unsigned <) */

loc_000E3305: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3315; /* jne: not equal / not zero */

loc_000E330C: ;
    eax = 1;
    eax = ZX8(LO8(eax));
    esp += 4; return; /* ret */

loc_000E3315: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ZX8(LO8(eax));
    esp += 4; return; /* ret */

}

/**
 * sub_000E3320
 * Original: 0x000E3320 - 0x000E338A (106 bytes, 44 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3320: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 4) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x000E3331u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E332Eu); } /* indirect call */
    }

loc_000E3331: ;
    edx = MEM32(esi);
    eax = edi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000E333Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E3339u); } /* indirect call */
    }

loc_000E333C: ;
    edx = MEM32(esi);
    eax = edi + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000E3347u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E3344u); } /* indirect call */
    }

loc_000E3347: ;
    edx = MEM32(esi);
    eax = edi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000E3352u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E334Fu); } /* indirect call */
    }

loc_000E3352: ;
    edx = MEM32(esi);
    eax = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000E335Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E335Au); } /* indirect call */
    }

loc_000E335D: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E336B; /* jne: not equal / not zero */

loc_000E3366: ;
    PUSH32(esp, 0x000E336Bu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000E336B: ;
    edx = MEM32(esp);
    ecx = eax;
    PUSH32(esp, 0x000E3375u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000E3375: ;
    ecx = MEM32(esp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(edi + 0x10) = eax;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000E3386u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E3383u); } /* indirect call */
    }

loc_000E3386: ;
    eax = edi;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E3390
 * Original: 0x000E3390 - 0x000E3490 (256 bytes, 72 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3390: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3691E5);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x130;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x148);
    MEM32(esp + 0x134) = eax;
    PUSH32(esp, 0x000E33C5u); RECOMP_ABI_CALL(0x000348A0u, sub_000348A0); /* call 0x000348A0 */

loc_000E33C5: ;
    MEM32(esi + 4) = eax;
    MEM8(eax + 0x15) = 1;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = eax;
    MEM32(esi + 8) = ebx;
    PUSH32(esp, edi);
    eax = esp + 0x38;
    PUSH32(esp, 0x429050);
    MEM32(esp + 0x148) = ebx;
    PUSH32(esp, eax);
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, 0x000E33FCu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000E33FC: ;
    eax = MEM32(0x46B18C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E340D; /* jne: not equal / not zero */

loc_000E3408: ;
    PUSH32(esp, 0x000E340Du); RECOMP_ABI_CALL(0x00093250u, sub_00093250); /* call 0x00093250 */

loc_000E340D: ;
    PUSH32(esp, 0x41);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000E341Bu); RECOMP_ABI_CALL(0x00094170u, sub_00094170); /* call 0x00094170 */

loc_000E341B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3469; /* je: equal / zero */

loc_000E3422: ;
    PUSH32(esp, edi);
    edx = esp + 0x38;
    PUSH32(esp, 0x429044);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E3432u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_000E3432: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E3444u); RECOMP_ABI_CALL(0x000E3000u, sub_000E3000); /* call 0x000E3000 */

loc_000E3444: ;
    PUSH32(esp, ebx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM8(esp + 0x14C) = 1;
    PUSH32(esp, 0x000E3458u); RECOMP_ABI_CALL(0x000E34E0u, sub_000E34E0); /* call 0x000E34E0 */

loc_000E3458: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM8(esp + 0x144) = LO8(ebx);
    PUSH32(esp, 0x000E3469u); RECOMP_ABI_CALL(0x000E30C0u, sub_000E30C0); /* call 0x000E30C0 */

loc_000E3469: ;
    ecx = MEM32(esp + 0x138);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x130);
    POP32(esp, ebx);
    PUSH32(esp, 0x000E3487u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_000E3487: ;
    _fb = (uint32_t)(0x13C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x13C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3490
 * Original: 0x000E3490 - 0x000E34D1 (65 bytes, 31 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3490: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E34A7u); RECOMP_ABI_CALL(0x000E37E0u, sub_000E37E0); /* call 0x000E37E0 */

loc_000E34A7: ;
    edi = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E34C6; /* je: equal / zero */

loc_000E34B0: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E34BE; /* jne: not equal / not zero */

loc_000E34B9: ;
    PUSH32(esp, 0x000E34BEu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000E34BE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000E34C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E34C3u); } /* indirect call */
    }

loc_000E34C6: ;
    POP32(esp, edi);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E34D7
 * Original: 0x000E34D7 - 0x000E34E0 (9 bytes, 9 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E34D7(void)
{

loc_000E34D7: ;
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
 * sub_000E34E0
 * Original: 0x000E34E0 - 0x000E35C8 (232 bytes, 74 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000E34E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E34E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368C00);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x24) = 0x428F38;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    MEM32(esp + 0x3C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3539; /* je: equal / zero */

loc_000E351F: ;
    eax = esp + 0x10;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E352Au); RECOMP_ABI_CALL(0x00097130u, sub_00097130); /* call 0x00097130 */

loc_000E352A: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x10) = eax;
    goto loc_000E3545;

loc_000E3539: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000E3541u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E353Eu); } /* indirect call */
    }

loc_000E3541: ;
    MEM32(esp + 0x10) = eax;

loc_000E3545: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E35B4; /* jae: above or equal (unsigned >=) */

loc_000E354E: ;
    goto loc_000E3552;

loc_000E3550: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E3552: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3560; /* jne: not equal / not zero */

loc_000E355B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3560u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000E3560: ;
    edx = 0x14;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E356Cu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000E356C: ;
    MEM32(esp + 0x14) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esp + 0x3C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3586; /* je: equal / zero */

loc_000E3579: ;
    esi = esp + 0x24;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3584u); RECOMP_ABI_CALL(0x000E3320u, sub_000E3320); /* call 0x000E3320 */

loc_000E3584: ;
    goto loc_000E3588;

loc_000E3586: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E3588: ;
    edx = MEM32(ebp + 8);
    MEM8(esp + 0x3C) = LO8(ebx);
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    ebx = esp + 0x18;
    MEM32(esp + 0x20) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E35A8u); RECOMP_ABI_CALL(0x000E36B0u, sub_000E36B0); /* call 0x000E36B0 */

loc_000E35A8: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000E3550; /* jb: below (unsigned <) */

loc_000E35B4: ;
    ecx = MEM32(esp + 0x34);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E3506
 * Original: 0x000E3506 - 0x000E35C8 (194 bytes, 60 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3506(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E3506: ;
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x24) = 0x428F38;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    MEM32(esp + 0x3C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3539; /* je: equal / zero */

loc_000E351F: ;
    eax = esp + 0x10;
    ecx = esi;
    PUSH32(esp, 0x000E352Au); RECOMP_ABI_CALL(0x00097130u, sub_00097130); /* call 0x00097130 */

loc_000E352A: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x10) = eax;
    goto loc_000E3545;

loc_000E3539: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000E3541u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E353Eu); } /* indirect call */
    }

loc_000E3541: ;
    MEM32(esp + 0x10) = eax;

loc_000E3545: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E35B4; /* jae: above or equal (unsigned >=) */

loc_000E354E: ;
    goto loc_000E3552;

loc_000E3550: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E3552: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3560; /* jne: not equal / not zero */

loc_000E355B: ;
    PUSH32(esp, 0x000E3560u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000E3560: ;
    edx = 0x14;
    ecx = eax;
    PUSH32(esp, 0x000E356Cu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000E356C: ;
    MEM32(esp + 0x14) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esp + 0x3C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3586; /* je: equal / zero */

loc_000E3579: ;
    esi = esp + 0x24;
    edi = eax;
    PUSH32(esp, 0x000E3584u); RECOMP_ABI_CALL(0x000E3320u, sub_000E3320); /* call 0x000E3320 */

loc_000E3584: ;
    goto loc_000E3588;

loc_000E3586: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E3588: ;
    edx = MEM32(ebp + 8);
    MEM8(esp + 0x3C) = LO8(ebx);
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    ebx = esp + 0x18;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x000E35A8u); RECOMP_ABI_CALL(0x000E36B0u, sub_000E36B0); /* call 0x000E36B0 */

loc_000E35A8: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000E3550; /* jb: below (unsigned <) */

loc_000E35B4: ;
    ecx = MEM32(esp + 0x34);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E35D0
 * Original: 0x000E35D0 - 0x000E36A7 (215 bytes, 69 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E35D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E35D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x369058);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = esp + 0x1C;
    edi = esp + 8;
    PUSH32(esp, 0x000E35F7u); RECOMP_ABI_CALL(0x000E3790u, sub_000E3790); /* call 0x000E3790 */

loc_000E35F7: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3617; /* jne: not equal / not zero */

loc_000E3602: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000E3617: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_000E3629; /* jne: not equal / not zero */

loc_000E3624: ;
    PUSH32(esp, 0x000E3629u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000E3629: ;
    edx = 0x18;
    ecx = eax;
    PUSH32(esp, 0x000E3635u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000E3635: ;
    edi = eax;
    MEM32(esp + 0x20) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3691; /* je: equal / zero */

loc_000E3647: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0xC);
    MEM32(edi + 8) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(edi + 0xC) = ecx;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, ecx);
    MEM32(edi) = edx;
    MEM32(edi + 0x10) = 0;
    MEM32(edi + 0x14) = 0;
    PUSH32(esp, 0x000E3678u); RECOMP_ABI_CALL(0x000958C0u, sub_000958C0); /* call 0x000958C0 */

loc_000E3678: ;
    MEM32(edi + 4) = eax;
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000E3691: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E36B0
 * Original: 0x000E36B0 - 0x000E378D (221 bytes, 92 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E36B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E36B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 4);
    SET_LO8(edx, MEM8(esi + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, 1);
    MEM8(esp + 0x10) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000E3700; /* jne: not equal / not zero */

loc_000E36CF: ;
    /* nop */

loc_000E36D0: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ebp = esi;
    PUSH32(esp, 0x000E36DEu); RECOMP_ABI_CALL(0x0034761Du, sub_0034761D); /* call 0x0034761D */

loc_000E36DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x10) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000E36F2; /* je: equal / zero */

loc_000E36EE: ;
    esi = MEM32(esi);
    goto loc_000E36F5;

loc_000E36F2: ;
    esi = MEM32(esi + 8);

loc_000E36F5: ;
    SET_LO8(ecx, MEM8(esi + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E36D0; /* je: equal / zero */

loc_000E36FC: ;
    ecx = MEM32(esp + 0x18);

loc_000E3700: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = ebp;
    MEM32(esp + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3741; /* je: equal / zero */

loc_000E370A: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3734; /* jne: not equal / not zero */

loc_000E3711: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    edi = ecx;
    PUSH32(esp, 0x000E3721u); RECOMP_ABI_CALL(0x000346B0u, sub_000346B0); /* call 0x000346B0 */

loc_000E3721: ;
    eax = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = eax;
    MEM8(ebx + 4) = 1;
    eax = ebx;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000E3734: ;
    edx = esp + 0xC;
    PUSH32(esp, 0x000E373Du); RECOMP_ABI_CALL(0x000CEA70u, sub_000CEA70); /* call 0x000CEA70 */

loc_000E373D: ;
    esi = MEM32(esp + 0xC);

loc_000E3741: ;
    eax = MEM32(edi);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E374Du); RECOMP_ABI_CALL(0x0034761Du, sub_0034761D); /* call 0x0034761D */

loc_000E374D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E377C; /* jge: greater or equal (signed >=) */

loc_000E3754: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E3769u); RECOMP_ABI_CALL(0x000346B0u, sub_000346B0); /* call 0x000346B0 */

loc_000E3769: ;
    eax = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = eax;
    MEM8(ebx + 4) = 1;
    eax = ebx;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000E377C: ;
    POP32(esp, edi);
    MEM32(ebx) = esi;
    POP32(esp, esi);
    MEM8(ebx + 4) = 0;
    eax = ebx;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3790
 * Original: 0x000E3790 - 0x000E37DE (78 bytes, 32 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3790: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = eax;
    eax = esi;
    PUSH32(esp, 0x000E379Du); RECOMP_ABI_CALL(0x000E3860u, sub_000E3860); /* call 0x000E3860 */

loc_000E379D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    MEM32(esp + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E37C8; /* je: equal / zero */

loc_000E37A6: ;
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E37B2u); RECOMP_ABI_CALL(0x0034761Du, sub_0034761D); /* call 0x0034761D */

loc_000E37B2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E37C8; /* jl: less (signed <) */

loc_000E37B9: ;
    eax = esp + 4;
    ecx = MEM32(eax);
    MEM32(edi) = ecx;
    eax = edi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E37C8: ;
    eax = MEM32(esi + 4);
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    ecx = MEM32(eax);
    MEM32(edi) = ecx;
    eax = edi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E37E0
 * Original: 0x000E37E0 - 0x000E385A (122 bytes, 48 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E37E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E37E0: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_000E382B; /* jne: not equal / not zero */

loc_000E37F5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E382B; /* jne: not equal / not zero */

loc_000E37F9: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000E3804u); RECOMP_ABI_CALL(0x000E3B70u, sub_000E3B70); /* call 0x000E3B70 */

loc_000E3804: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = 0;
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    MEM32(ebp) = edx;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000E382B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3850; /* je: equal / zero */

loc_000E382F: ;
    PUSH32(esp, edi);

loc_000E3830: ;
    edx = esp + 0x14;
    edi = eax;
    PUSH32(esp, 0x000E383Bu); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_000E383B: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E3847u); RECOMP_ABI_CALL(0x000E38A0u, sub_000E38A0); /* call 0x000E38A0 */

loc_000E3847: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3830; /* jne: not equal / not zero */

loc_000E384F: ;
    POP32(esp, edi);

loc_000E3850: ;
    MEM32(ebp) = eax;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E3860
 * Original: 0x000E3860 - 0x000E3899 (57 bytes, 27 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3860: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(esi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3894; /* jne: not equal / not zero */

loc_000E3871: ;
    eax = MEM32(ebx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E387Du); RECOMP_ABI_CALL(0x0034761Du, sub_0034761D); /* call 0x0034761D */

loc_000E387D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E3889; /* jge: greater or equal (signed >=) */

loc_000E3884: ;
    esi = MEM32(esi + 8);
    goto loc_000E388D;

loc_000E3889: ;
    edi = esi;
    esi = MEM32(esi);

loc_000E388D: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3871; /* je: equal / zero */

loc_000E3894: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E38A0
 * Original: 0x000E38A0 - 0x000E3B61 (705 bytes, 248 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E38A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E38A0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368C78);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    MEM32(XBOX_FS_BASE) = esp;
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000E3915; /* je: equal / zero */

loc_000E38C9: ;
    PUSH32(esp, 0x1B);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x41F37C);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = 0xF;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x000E38ECu); RECOMP_ABI_CALL(0x00011600u, sub_00011600); /* call 0x00011600 */

loc_000E38EC: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM32(esp + 0x58) = esi;
    PUSH32(esp, 0x000E38FEu); RECOMP_ABI_CALL(0x000115A0u, sub_000115A0); /* call 0x000115A0 */

loc_000E38FE: ;
    PUSH32(esp, 0x42AB64);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x41F374;
    PUSH32(esp, 0x000E3915u); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_000E3915: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, edi);
    edx = esp + 0x6C;
    MEM32(esp + 0x64) = ebx;
    PUSH32(esp, 0x000E3926u); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_000E3926: ;
    eax = MEM32(ebx);
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3934; /* je: equal / zero */

loc_000E392F: ;
    edi = MEM32(ebx + 8);
    goto loc_000E394D;

loc_000E3934: ;
    edx = MEM32(ebx + 8);
    SET_LO8(ecx, MEM8(edx + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3942; /* je: equal / zero */

loc_000E393E: ;
    edi = eax;
    goto loc_000E394D;

loc_000E3942: ;
    ecx = MEM32(esp + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edi = MEM32(ecx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_000E39B7; /* jne: not equal / not zero */

loc_000E394D: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ebx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_000E395A; /* jne: not equal / not zero */

loc_000E3957: ;
    MEM32(edi + 4) = esi;

loc_000E395A: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3967; /* jne: not equal / not zero */

loc_000E3962: ;
    MEM32(eax + 4) = edi;
    goto loc_000E3972;

loc_000E3967: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E396F; /* jne: not equal / not zero */

loc_000E396B: ;
    MEM32(esi) = edi;
    goto loc_000E3972;

loc_000E396F: ;
    MEM32(esi + 8) = edi;

loc_000E3972: ;
    ebx = MEM32(ebp + 4);
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x64) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3991; /* jne: not equal / not zero */

loc_000E397D: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3988; /* je: equal / zero */

loc_000E3984: ;
    eax = esi;
    goto loc_000E398F;

loc_000E3988: ;
    eax = edi;
    PUSH32(esp, 0x000E398Fu); RECOMP_ABI_CALL(0x000E9440u, sub_000E9440); /* call 0x000E9440 */

loc_000E398F: ;
    MEM32(ebx) = eax;

loc_000E3991: ;
    ebx = MEM32(ebp + 4);
    ecx = MEM32(esp + 0x64);
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3A0F; /* jne: not equal / not zero */

loc_000E399D: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E39AB; /* je: equal / zero */

loc_000E39A4: ;
    eax = esi;
    MEM32(ebx + 8) = eax;
    goto loc_000E3A0F;

loc_000E39AB: ;
    eax = edi;
    PUSH32(esp, 0x000E39B2u); RECOMP_ABI_CALL(0x000E9460u, sub_000E9460); /* call 0x000E9460 */

loc_000E39B2: ;
    MEM32(ebx + 8) = eax;
    goto loc_000E3A0F;

loc_000E39B7: ;
    MEM32(eax + 4) = ecx;
    edx = MEM32(ebx);
    MEM32(ecx) = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E39C7; /* jne: not equal / not zero */

loc_000E39C3: ;
    esi = ecx;
    goto loc_000E39E2;

loc_000E39C7: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ecx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_000E39D4; /* jne: not equal / not zero */

loc_000E39D1: ;
    MEM32(edi + 4) = esi;

loc_000E39D4: ;
    MEM32(esi) = edi;
    eax = MEM32(ebx + 8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(ebx + 8);
    MEM32(edx + 4) = ecx;

loc_000E39E2: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E39EF; /* jne: not equal / not zero */

loc_000E39EA: ;
    MEM32(eax + 4) = ecx;
    goto loc_000E39FD;

loc_000E39EF: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E39FA; /* jne: not equal / not zero */

loc_000E39F6: ;
    MEM32(eax) = ecx;
    goto loc_000E39FD;

loc_000E39FA: ;
    MEM32(eax + 8) = ecx;

loc_000E39FD: ;
    eax = MEM32(ebx + 4);
    MEM32(ecx + 4) = eax;
    SET_LO8(edx, MEM8(ebx + 0x14));
    SET_LO8(eax, MEM8(ecx + 0x14));
    MEM8(ecx + 0x14) = LO8(edx);
    MEM8(ebx + 0x14) = LO8(eax);

loc_000E3A0F: ;
    eax = MEM32(esp + 0x64);
    SET_LO8(ecx, MEM8(eax + 0x14));
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3B1D; /* jne: not equal / not zero */

loc_000E3A20: ;
    ecx = MEM32(ebp + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3B1A; /* je: equal / zero */

loc_000E3A2C: ;
    /* nop */

loc_000E3A30: ;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3B1A; /* jne: not equal / not zero */

loc_000E3A39: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3AA4; /* jne: not equal / not zero */

loc_000E3A3F: ;
    ecx = MEM32(esi + 8);
    SET_LO8(eax, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3A5B; /* jne: not equal / not zero */

loc_000E3A49: ;
    MEM8(ecx + 0x14) = LO8(ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(esi + 0x14) = 0;
    PUSH32(esp, 0x000E3A58u); RECOMP_ABI_CALL(0x0009AD50u, sub_0009AD50); /* call 0x0009AD50 */

loc_000E3A58: ;
    ecx = MEM32(esi + 8);

loc_000E3A5B: ;
    SET_LO8(eax, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3AD6; /* jne: not equal / not zero */

loc_000E3A62: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3A71; /* jne: not equal / not zero */

loc_000E3A69: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x14), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3AD2; /* je: equal / zero */

loc_000E3A71: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3A8B; /* jne: not equal / not zero */

loc_000E3A79: ;
    eax = MEM32(ecx);
    MEM8(eax + 0x14) = LO8(ebx);
    PUSH32(esp, ebp);
    MEM8(ecx + 0x14) = 0;
    PUSH32(esp, 0x000E3A88u); RECOMP_ABI_CALL(0x000345A0u, sub_000345A0); /* call 0x000345A0 */

loc_000E3A88: ;
    ecx = MEM32(esi + 8);

loc_000E3A8B: ;
    SET_LO8(edx, MEM8(esi + 0x14));
    MEM8(ecx + 0x14) = LO8(edx);
    MEM8(esi + 0x14) = LO8(ebx);
    eax = MEM32(ecx + 8);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(eax + 0x14) = LO8(ebx);
    PUSH32(esp, 0x000E3AA2u); RECOMP_ABI_CALL(0x0009AD50u, sub_0009AD50); /* call 0x0009AD50 */

loc_000E3AA2: ;
    goto loc_000E3B1A;

loc_000E3AA4: ;
    SET_LO8(eax, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3ABC; /* jne: not equal / not zero */

loc_000E3AAB: ;
    MEM8(ecx + 0x14) = LO8(ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(esi + 0x14) = 0;
    PUSH32(esp, 0x000E3ABAu); RECOMP_ABI_CALL(0x000345A0u, sub_000345A0); /* call 0x000345A0 */

loc_000E3ABA: ;
    ecx = MEM32(esi);

loc_000E3ABC: ;
    SET_LO8(eax, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3AD6; /* jne: not equal / not zero */

loc_000E3AC3: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3AEB; /* jne: not equal / not zero */

loc_000E3ACB: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3AEB; /* jne: not equal / not zero */

loc_000E3AD2: ;
    MEM8(ecx + 0x14) = 0;

loc_000E3AD6: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx + 4);
    edi = esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    esi = MEM32(esi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_000E3A30; /* jne: not equal / not zero */

loc_000E3AE9: ;
    goto loc_000E3B1A;

loc_000E3AEB: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3B04; /* jne: not equal / not zero */

loc_000E3AF2: ;
    eax = MEM32(ecx + 8);
    MEM8(eax + 0x14) = LO8(ebx);
    PUSH32(esp, ebp);
    MEM8(ecx + 0x14) = 0;
    PUSH32(esp, 0x000E3B02u); RECOMP_ABI_CALL(0x0009AD50u, sub_0009AD50); /* call 0x0009AD50 */

loc_000E3B02: ;
    ecx = MEM32(esi);

loc_000E3B04: ;
    SET_LO8(edx, MEM8(esi + 0x14));
    MEM8(ecx + 0x14) = LO8(edx);
    MEM8(esi + 0x14) = LO8(ebx);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(eax + 0x14) = LO8(ebx);
    PUSH32(esp, 0x000E3B1Au); RECOMP_ABI_CALL(0x000345A0u, sub_000345A0); /* call 0x000345A0 */

loc_000E3B1A: ;
    MEM8(edi + 0x14) = LO8(ebx);

loc_000E3B1D: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000E3B2D; /* jne: not equal / not zero */

loc_000E3B28: ;
    PUSH32(esp, 0x000E3B2Du); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000E3B2D: ;
    ecx = MEM32(esp + 0x5C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000E3B39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E3B36u); } /* indirect call */
    }

loc_000E3B39: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E3B44; /* jbe: below or equal (unsigned <=) */

loc_000E3B40: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = eax;

loc_000E3B44: ;
    edx = MEM32(esp + 0x64);
    eax = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x4C);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E3B70
 * Original: 0x000E3B70 - 0x000E3BB8 (72 bytes, 32 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3B70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000E3BB2; /* jne: not equal / not zero */

loc_000E3B82: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000E3B8Du); RECOMP_ABI_CALL(0x000E3B70u, sub_000E3B70); /* call 0x000E3B70 */

loc_000E3B8D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000E3BA9; /* je: equal / zero */

loc_000E3B93: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3BA1; /* jne: not equal / not zero */

loc_000E3B9C: ;
    PUSH32(esp, 0x000E3BA1u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000E3BA1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000E3BA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E3BA6u); } /* indirect call */
    }

loc_000E3BA9: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3B82; /* je: equal / zero */

loc_000E3BB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3BC0
 * Original: 0x000E3BC0 - 0x000E3BE9 (41 bytes, 18 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E3BC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E3BC8u); RECOMP_ABI_CALL(0x003476BCu, sub_003476BC); /* call 0x003476BC */

loc_000E3BC8: ;
    esi = 0x64EFA0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000E3BD4: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3BD4; /* jne: not equal / not zero */

loc_000E3BDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000E3BE8; /* jne: not equal / not zero */

loc_000E3BE3: ;
    g_seh_ebp = ebp; sub_000CB410(); return; /* tail jmp 0x000CB410 */

loc_000E3BE8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E3BF0
 * Original: 0x000E3BF0 - 0x000E3E3F (591 bytes, 176 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3BF0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x470140);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x470010);
    PUSH32(esp, 0x000E3C03u); RECOMP_ABI_CALL(0x000DCF00u, sub_000DCF00); /* call 0x000DCF00 */

loc_000E3C03: ;
    eax = MEM32(0x758D18);
    ecx = MEM32(0x470010);
    edx = MEM32(0x470014);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x470010) = ecx;
    MEM32(esp) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3C44; /* je: equal / zero */

loc_000E3C24: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp) = LO8(edx);
    MEM8(esp + 3) = LO8(ecx);
    ecx = MEM32(esp);
    edx = MEM32(esp);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 1) = LO8(edx);
    MEM8(esp + 2) = LO8(ecx);

loc_000E3C44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp);
    edx = MEM32(0x470018);
    MEM32(0x470014) = ecx;
    MEM32(esp) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3C7A; /* je: equal / zero */

loc_000E3C5A: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp) = LO8(edx);
    MEM8(esp + 3) = LO8(ecx);
    ecx = MEM32(esp);
    edx = MEM32(esp);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 1) = LO8(edx);
    MEM8(esp + 2) = LO8(ecx);

loc_000E3C7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp);
    edx = MEM32(0x47001C);
    MEM32(0x470018) = ecx;
    MEM32(esp) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3CB0; /* je: equal / zero */

loc_000E3C90: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp) = LO8(edx);
    MEM8(esp + 3) = LO8(ecx);
    ecx = MEM32(esp);
    edx = MEM32(esp);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 1) = LO8(edx);
    MEM8(esp + 2) = LO8(ecx);

loc_000E3CB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp);
    edx = MEM32(0x470020);
    MEM32(0x47001C) = ecx;
    MEM32(esp) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3CE6; /* je: equal / zero */

loc_000E3CC6: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp) = LO8(edx);
    MEM8(esp + 3) = LO8(ecx);
    ecx = MEM32(esp);
    edx = MEM32(esp);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 1) = LO8(edx);
    MEM8(esp + 2) = LO8(ecx);

loc_000E3CE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp);
    edx = MEM32(0x470024);
    MEM32(0x470020) = ecx;
    MEM32(esp) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3D1C; /* je: equal / zero */

loc_000E3CFC: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp) = LO8(edx);
    MEM8(esp + 3) = LO8(ecx);
    ecx = MEM32(esp);
    edx = MEM32(esp);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 1) = LO8(edx);
    MEM8(esp + 2) = LO8(ecx);

loc_000E3D1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp);
    edx = MEM32(0x470028);
    MEM32(0x470024) = ecx;
    MEM32(esp) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3D52; /* je: equal / zero */

loc_000E3D32: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp) = LO8(edx);
    MEM8(esp + 3) = LO8(ecx);
    ecx = MEM32(esp);
    edx = MEM32(esp);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 1) = LO8(edx);
    MEM8(esp + 2) = LO8(ecx);

loc_000E3D52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp);
    edx = MEM32(0x47002C);
    MEM32(0x470028) = ecx;
    MEM32(esp) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3D88; /* je: equal / zero */

loc_000E3D68: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp) = LO8(edx);
    MEM8(esp + 3) = LO8(ecx);
    ecx = MEM32(esp);
    edx = MEM32(esp);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 1) = LO8(edx);
    MEM8(esp + 2) = LO8(ecx);

loc_000E3D88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp);
    edx = MEM32(0x470030);
    MEM32(0x47002C) = ecx;
    MEM32(esp) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3DBE; /* je: equal / zero */

loc_000E3D9E: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp) = LO8(edx);
    MEM8(esp + 3) = LO8(ecx);
    ecx = MEM32(esp);
    edx = MEM32(esp);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 1) = LO8(edx);
    MEM8(esp + 2) = LO8(ecx);

loc_000E3DBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp);
    edx = MEM32(0x470034);
    MEM32(0x470030) = ecx;
    MEM32(esp) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3DF4; /* je: equal / zero */

loc_000E3DD4: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp) = LO8(edx);
    MEM8(esp + 3) = LO8(ecx);
    ecx = MEM32(esp);
    edx = MEM32(esp);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 1) = LO8(edx);
    MEM8(esp + 2) = LO8(ecx);

loc_000E3DF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp);
    MEM32(0x470034) = ecx;
    ecx = MEM32(0x470038);
    MEM32(esp) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3E37; /* je: equal / zero */

loc_000E3E0A: ;
    edx = ecx;
    SET_LO8(eax, LO8(ecx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 3) = LO8(eax);
    MEM8(esp) = LO8(edx);
    eax = MEM32(esp);
    ecx = MEM32(esp);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 1) = LO8(ecx);
    MEM8(esp + 2) = LO8(eax);
    edx = MEM32(esp);
    MEM32(0x470038) = edx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000E3E37: ;
    MEM32(0x470038) = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E3E40
 * Original: 0x000E3E40 - 0x000E3F8D (333 bytes, 105 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E3E40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3F88; /* je: equal / zero */

loc_000E3E51: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(0x470140);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E3E63u); RECOMP_ABI_CALL(0x0034939Du, sub_0034939D); /* call 0x0034939D */

loc_000E3E63: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E3F88; /* jbe: below or equal (unsigned <=) */

loc_000E3E72: ;
    ecx = MEM32(0x470158);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    goto loc_000E3E80;

    /* nop */

loc_000E3E80: ;
    esi = edx + 0x64;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    ebp = 0x64;
    MEM32(esp + 0x14) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_000E3E94; /* jbe: below or equal (unsigned <=) */

loc_000E3E90: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = eax;

loc_000E3E94: ;
    edx = MEM32(0x470140);
    PUSH32(esp, edx);
    eax = ebp * 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E3EA9u); RECOMP_ABI_CALL(0x000DCF00u, sub_000DCF00); /* call 0x000DCF00 */

loc_000E3EA9: ;
    ecx = MEM32(0x470158);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ebx = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_000E3F75; /* jbe: below or equal (unsigned <=) */

loc_000E3EBE: ;
    esi = MEM32(0x758D18);

loc_000E3EC4: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3EF4; /* je: equal / zero */

loc_000E3ED1: ;
    SET_LO8(eax, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(edx);
    MEM8(esp + 0x13) = LO8(eax);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x10);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(edx);
    MEM8(esp + 0x12) = LO8(eax);

loc_000E3EF4: ;
    eax = MEM32(esp + 0x10);
    MEM32(ecx + edi * 8) = eax;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3F2D; /* je: equal / zero */

loc_000E3F08: ;
    edx = ecx;
    SET_LO8(eax, LO8(ecx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x13) = LO8(eax);
    MEM8(esp + 0x10) = LO8(edx);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x10);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(ecx);
    MEM8(esp + 0x12) = LO8(eax);

loc_000E3F2D: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(0x470158);
    MEM32(edx + edi * 8 + 4) = eax;
    ecx = MEM32(0x470158);
    eax = MEM32(ecx + edi * 8 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3F68; /* je: equal / zero */

loc_000E3F4A: ;
    ecx = MEM32(ecx + edi * 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    esi = 0x470148;
    PUSH32(esp, 0x000E3F59u); RECOMP_ABI_CALL(0x000E0030u, sub_000E0030); /* call 0x000E0030 */

loc_000E3F59: ;
    ecx = MEM32(0x470158);
    esi = MEM32(0x758D18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E3F68: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000E3EC4; /* jb: below (unsigned <) */

loc_000E3F71: ;
    esi = MEM32(esp + 0x14);

loc_000E3F75: ;
    eax = MEM32(esp + 0x1C);
    eax = MEM32(eax);
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000E3E80; /* jb: below (unsigned <) */

loc_000E3F85: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000E3F88: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E3F90
 * Original: 0x000E3F90 - 0x000E4300 (880 bytes, 262 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000E3F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3F90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x2008;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3FA0u); RECOMP_ABI_CALL(0x00347D50u, sub_00347D50); /* call 0x00347D50 */

loc_000E3FA0: ;
    eax = MEM32(0x46B1A4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000E3FB4; /* jne: not equal / not zero */

loc_000E3FAF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3FB4u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000E3FB4: ;
    edx = MEM32(0x470034);
    edx = edx + edx * 2;
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3FC7u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000E3FC7: ;
    MEM32(0x47015C) = eax;
    _fa = (uint32_t)(MEM32(0x470034)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x470034), ebp (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_BE(_fa, _fb)) goto loc_000E41B4; /* jbe: below or equal (unsigned <=) */

loc_000E3FDC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_000E3FE0: ;
    eax = MEM32(0x470140);
    ecx = MEM32(0x47015C);
    PUSH32(esp, eax);
    edx = esi + ecx;
    PUSH32(esp, 0x18);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3FF7u); RECOMP_ABI_CALL(0x000DCF00u, sub_000DCF00); /* call 0x000DCF00 */

loc_000E3FF7: ;
    eax = MEM32(0x47015C);
    edi = esi + eax;
    eax = edi;
    ecx = MEM32(eax);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(0x758D18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4040; /* je: equal / zero */

loc_000E4017: ;
    ebx = MEM32(esp + 0x10);
    SET_LO8(edx, MEM8(esp + 0x10));
    ebx = ebx >> 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(ebx);
    MEM8(esp + 0x13) = LO8(edx);
    edx = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x10);
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(edx);

loc_000E4040: ;
    edx = MEM32(esp + 0x10);
    MEM32(edi) = edx;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E4076; /* je: equal / zero */

loc_000E4053: ;
    ebx = edx;
    ebx = ebx >> 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(ebx);
    MEM8(esp + 0x13) = LO8(edx);
    edx = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x10);
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(edx);

loc_000E4076: ;
    edx = MEM32(0x47015C);
    edi = MEM32(esp + 0x10);
    MEM32(esi + edx + 4) = edi;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E40B4; /* je: equal / zero */

loc_000E4091: ;
    ebx = edx;
    ebx = ebx >> 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(ebx);
    MEM8(esp + 0x13) = LO8(edx);
    edx = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x10);
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(edx);

loc_000E40B4: ;
    edx = MEM32(0x47015C);
    edi = MEM32(esp + 0x10);
    MEM32(esi + edx + 8) = edi;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E40F2; /* je: equal / zero */

loc_000E40CF: ;
    ebx = edx;
    ebx = ebx >> 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(ebx);
    MEM8(esp + 0x13) = LO8(edx);
    edx = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x10);
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(edx);

loc_000E40F2: ;
    edx = MEM32(0x47015C);
    edi = MEM32(esp + 0x10);
    MEM32(esi + edx + 0xC) = edi;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E4130; /* je: equal / zero */

loc_000E410D: ;
    ebx = edx;
    ebx = ebx >> 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(ebx);
    MEM8(esp + 0x13) = LO8(edx);
    edx = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x10);
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(edx);

loc_000E4130: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    edi = MEM32(esp + 0x10);
    edx = MEM32(0x47015C);
    MEM32(esi + edx + 0x10) = edi;
    eax = MEM32(eax);
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E416B; /* je: equal / zero */

loc_000E4148: ;
    ecx = eax;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x13) = LO8(eax);
    MEM8(esp + 0x10) = LO8(ecx);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x10);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(edx);
    MEM8(esp + 0x12) = LO8(eax);

loc_000E416B: ;
    eax = MEM32(0x47015C);
    ecx = MEM32(esp + 0x10);
    MEM32(esi + eax + 0x14) = ecx;
    edx = MEM32(0x47015C);
    eax = MEM32(esi + edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E419A; /* je: equal / zero */

loc_000E4187: ;
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(0x470140);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4197u); RECOMP_ABI_CALL(0x0034939Du, sub_0034939D); /* call 0x0034939D */

loc_000E4197: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E419A: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x470034);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000E3FE0; /* jb: below (unsigned <) */

loc_000E41B4: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E41C2; /* jne: not equal / not zero */

loc_000E41BD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E41C2u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000E41C2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x320);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000E41CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E41CBu); } /* indirect call */
    }

loc_000E41CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E42B8; /* je: equal / zero */

loc_000E41D6: ;
    MEM32(0x470158) = eax;
    eax = MEM32(0x470018);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x470150) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(0x470148) = ebp;
    MEM32(0x47014C) = ebp;
    MEM32(0x470154) = 0xC8;
    if (CMP_NE(_fa, _fb)) goto loc_000E420A; /* jne: not equal / not zero */

loc_000E4205: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E420Au); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000E420A: ;
    edx = MEM32(0x470150);
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E421Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000E421A: ;
    MEM32(0x470148) = eax;
    eax = MEM32(0x470034);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(0x470020) = ebp;
    MEM32(0x43B160) = ebp;
    if (CMP_BE(_fa, _fb)) goto loc_000E425F; /* jbe: below or equal (unsigned <=) */

loc_000E4236: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000E4240;

    /* nop */

loc_000E4240: ;
    ecx = MEM32(0x47015C);
    edx = edi + ecx;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E424Fu); RECOMP_ABI_CALL(0x000E3E40u, sub_000E3E40); /* call 0x000E3E40 */

loc_000E424F: ;
    eax = MEM32(0x470034);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000E4240; /* jb: below (unsigned <) */

loc_000E425F: ;
    eax = MEM32(0x47014C);
    ecx = MEM32(0x470148);
    PUSH32(esp, 0xE01E0);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(0x43B160) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4282u); RECOMP_ABI_CALL(0x00348610u, sub_00348610); /* call 0x00348610 */

loc_000E4282: ;
    eax = MEM32(0x470158);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E42AA; /* je: equal / zero */

loc_000E428E: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E429C; /* jne: not equal / not zero */

loc_000E4297: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E429Cu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000E429C: ;
    ecx = MEM32(0x470158);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000E42AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E42A7u); } /* indirect call */
    }

loc_000E42AA: ;
    POP32(esp, edi);
    MEM32(0x470158) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000E42B8: ;
    edx = esp + 0x18;
    eax = 0x1000;
    PUSH32(esp, edx);
    edx = eax;
    ecx = 0x41F48C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E42CEu); RECOMP_ABI_CALL(0x00094B50u, sub_00094B50); /* call 0x00094B50 */

loc_000E42CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x42ABA0);
    eax = esp + 0x101C;
    ecx = 0x400;
    esi = esp + 0x1C;
    edi = esp + 0x101C;
    PUSH32(esp, eax);
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E42F5u); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_000E42F5: ;
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
 * sub_000E4300
 * Original: 0x000E4300 - 0x000E4394 (148 bytes, 56 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E4300: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_000E4376; /* jns: not sign (positive) */

loc_000E430B: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E4319; /* jne: not equal / not zero */

loc_000E4314: ;
    PUSH32(esp, 0x000E4319u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000E4319: ;
    PUSH32(esp, esi);
    edx = 0x20000;
    ecx = eax;
    PUSH32(esp, 0x000E4326u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000E4326: ;
    ecx = MEM32(esp + 0x14);
    esi = eax;
    eax = edi;
    PUSH32(esp, esi);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = esp + 0x10;
    PUSH32(esp, 0x000E433Du); RECOMP_ABI_CALL(0x000E47D0u, sub_000E47D0); /* call 0x000E47D0 */

loc_000E433D: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ebx = ebp;
    ecx = esi;
    PUSH32(esp, 0x000E434Fu); RECOMP_ABI_CALL(0x000E47D0u, sub_000E47D0); /* call 0x000E47D0 */

loc_000E434F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E436C; /* je: equal / zero */

loc_000E4356: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E4364; /* jne: not equal / not zero */

loc_000E435F: ;
    PUSH32(esp, 0x000E4364u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000E4364: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000E436Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E4369u); } /* indirect call */
    }

loc_000E436C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000E4376: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ebx = ebp;
    eax = edi;
    PUSH32(esp, 0x000E4388u); RECOMP_ABI_CALL(0x000E47D0u, sub_000E47D0); /* call 0x000E47D0 */

loc_000E4388: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E43A0
 * Original: 0x000E43A0 - 0x000E44B4 (276 bytes, 104 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E43A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E43A0: ;
    eax = MEM32(0x43B0DC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000E448C; /* je: equal / zero */

loc_000E43B4: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    MEM32(eax + 8) = ecx;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), ecx (32-bit) */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_000E4483; /* jbe: below or equal (unsigned <=) */

loc_000E43D3: ;
    PUSH32(esp, ebp);

loc_000E43D4: ;
    esi = ZX8(MEM8(ebx));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(ebx + 1));
    eax = ebx + 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(edx, MEM8(eax));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E4482; /* je: equal / zero */

loc_000E43FD: ;
    edi = ZX8(MEM8(ebx));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(ebx + 1));
    eax = ebx + 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(edx, MEM8(eax));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = edi;
    ebp = ebp & 0x7FFFFFFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E443B; /* jae: above or equal (unsigned >=) */

loc_000E4426: ;
    ecx = MEM32(esp + 0x10);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000E4436u); RECOMP_ABI_CALL(0x000E4300u, sub_000E4300); /* call 0x000E4300 */

loc_000E4436: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E4455;

loc_000E443B: ;
    edi = MEM32(esp + 0x10);
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
    esi = MEM32(esp + 0x18);

loc_000E4455: ;
    eax = MEM32(esp + 0x20);
    edi = MEM32(eax + 8);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = edi;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000E43D4; /* jb: below (unsigned <) */

loc_000E4482: ;
    POP32(esp, ebp);

loc_000E4483: ;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E448C: ;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    esi = esi << 0x11;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E44A4u); RECOMP_ABI_CALL(0x00346EA0u, sub_00346EA0); /* call 0x00346EA0 */

loc_000E44A4: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = esi;
    POP32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E44C0
 * Original: 0x000E44C0 - 0x000E4651 (401 bytes, 143 insns)
 * Folder: files (between: 0x000E2B90 and 0x000E4660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E44C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E44C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(0x43B0DC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E464A; /* je: equal / zero */

loc_000E44D2: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    MEM32(eax + 8) = 0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 8) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_000E4642; /* jae: above or equal (unsigned >=) */

loc_000E44F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_000E4500;

loc_000E44F5: ;
    ebp = MEM32(0x43B0DC);
    goto loc_000E4500;

    /* nop */

loc_000E4500: ;
    esi = MEM32(esp + 0x20);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ebx));
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4533; /* je: equal / zero */

loc_000E450A: ;
    edi = ZX8(MEM8(ebx + 4));
    eax = ebx + 4;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + 2));
    _cf = 0; /* logical op clears CF */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, MEM8(eax));
    if (0x10) _cf = (int)(((ecx) >> (32 - (0x10))) & 1);
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    goto loc_000E4539;

loc_000E4533: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20000 (32-bit) */
    _cf = (int)(_fa < _fb);

loc_000E4539: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4640; /* je: equal / zero */

loc_000E4544: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E456C; /* je: equal / zero */

loc_000E4548: ;
    esi = ZX8(MEM8(ebx));
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(ebx + 1));
    eax = ebx + 1;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + 2));
    _cf = 0; /* logical op clears CF */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, MEM8(eax));
    if (0x10) _cf = (int)(((ecx) >> (32 - (0x10))) & 1);
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    goto loc_000E4571;

loc_000E456C: ;
    eax = 0x20000;

loc_000E4571: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x24) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000E4640; /* jg: greater (signed >) */

loc_000E457B: ;
    esi = ZX8(MEM8(ebx));
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(ebx + 1));
    eax = ebx + 1;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, MEM8(eax));
    if (0x10) _cf = (int)(((ecx) >> (32 - (0x10))) & 1);
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4640; /* je: equal / zero */

loc_000E45A2: ;
    esi = ZX8(MEM8(ebx));
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(ebx + 1));
    eax = ebx + 1;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, MEM8(eax));
    if (0x10) _cf = (int)(((ecx) >> (32 - (0x10))) & 1);
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ecx;
    esi = edi;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = esi;
    if (CMP_AE(_fa, _fb)) goto loc_000E45E6; /* jae: above or equal (unsigned >=) */

loc_000E45D1: ;
    eax = MEM32(esp + 0x10);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000E45E1u); RECOMP_ABI_CALL(0x000E4300u, sub_000E4300); /* call 0x000E4300 */

loc_000E45E1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E4600;

loc_000E45E6: ;
    edi = MEM32(esp + 0x10);
    ecx = esi;
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
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
    esi = MEM32(esp + 0x14);

loc_000E4600: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(eax + 8);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(esi)) >> 32) & 1);
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebp)) >> 32) & 1);
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = edx;
    eax = MEM32(0x758BBC);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebp)) >> 32) & 1);
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebp));
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x24) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E4636; /* je: equal / zero */

loc_000E462B: ;
    esi = MEM32(0x451B4C);
    PUSH32(esp, 0x000E4636u); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_000E4636: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x20) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000E44F5; /* jb: below (unsigned <) */

loc_000E4640: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000E4642: ;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E464A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E4660
 * Original: 0x000E4660 - 0x000E46BC (92 bytes, 28 insns)
 * Folder: files (match: xbox-demo 0x000C5C70, between)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000E4660(void)
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

loc_000E4660: ;
    PUSH32(esp, ecx);
    fp_push(MEMD(0x4294F0)); /* fld double */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    edi = edi;

loc_000E4670: ;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4293AC)); /* fmul dword ptr [0x4293ac] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429344)); /* fadd dword ptr [0x429344] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    ecx = MEM32(esp);
    ecx = ecx & 0x7FFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax * 4 + 0x64A168) = ecx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp);
    edx = edx & 0x7FFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_pop(); /* fstp st(0) */
    MEM32(eax * 4 + 0x649168) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    MEM32(esp) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000E4670; /* jl: less (signed <) */

loc_000E46B8: ;
    fp_pop(); /* fstp st(0) */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E46C0
 * Original: 0x000E46C0 - 0x000E4712 (82 bytes, 19 insns)
 * Folder: files (match: xbox-demo 0x000C5CD0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E46C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E46C0: ;
    PUSH32(esp, ecx);
    xmm1 = XMM_SCALAR(MEMF(0x4293AC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    MEM32(0x648168) = 0x800000;
    eax = 1;

loc_000E46E0: ;
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] / xmm2.f[0]; /* divss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp);
    ecx = ecx & 0x7FFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax * 4 + 0x648168) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E46E0; /* jl: less (signed <) */

loc_000E4710: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4720
 * Original: 0x000E4720 - 0x000E4796 (118 bytes, 33 insns)
 * Folder: files (match: xbox-demo 0x000C5D30, between)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000E4720(void)
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

loc_000E4720: ;
    PUSH32(esp, ecx);
    fp_push(MEMD(0x4294F0)); /* fld double */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    edi = edi;

loc_000E4730: ;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4293AC)); /* fmul dword ptr [0x4293ac] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429344)); /* fadd dword ptr [0x429344] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    ecx = ecx & 0x7FFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax * 4 + 0x647168) = ecx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp);
    edx = edx & 0x7FFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x800000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 4 + 0x646168) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    MEM32(esp) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000E4730; /* jl: less (signed <) */

loc_000E4788: ;
    fp_pop(); /* fstp st(0) */
    MEM32(0x647168) = 0x800000;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E47A0
 * Original: 0x000E47A0 - 0x000E47C5 (37 bytes, 13 insns)
 * Folder: files (match: xbox-demo 0x000C5DB0, between)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000E47A0(void)
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

loc_000E47A0: ;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;

loc_000E47A6: ;
    fp_push((double)SMEM32(esp)); /* fild */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    MEM32(esp) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4294EC)); /* fmul dword ptr [0x4294ec] */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(eax * 4 + 0x645164) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_000E47A6; /* jl: less (signed <) */

loc_000E47C3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
