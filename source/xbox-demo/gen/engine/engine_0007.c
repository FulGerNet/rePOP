/**
 * PoP SoT xbox-demo - engine, chunk 7
 * Jade engine code no evidence assigns to one module
 * Functions: 43 (0x000BD020 - 0x000EF600)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_000BD020
 * Original: 0x000BD020 - 0x000BD0D4 (180 bytes, 57 insns)
 * Folder: engine (library: 0x000B8270 and 0x000BE090)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BD020: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BD0D2; /* je: equal / zero */

loc_000BD02E: ;
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD0D1; /* je: equal / zero */

loc_000BD03E: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD0D1; /* jne: not equal / not zero */

loc_000BD049: ;
    PUSH32(esp, 0x000BD04Eu); RECOMP_ABI_CALL(0x000BCCF0u, sub_000BCCF0); /* call 0x000BCCF0 */

loc_000BD04E: ;
    eax = MEM32(0x64D324);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD0D1; /* je: equal / zero */

loc_000BD057: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x228) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x228 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BD09F; /* jg: greater (signed >) */

loc_000BD05F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BD0C6; /* je: equal / zero */

loc_000BD061: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x1C2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BD086; /* jg: greater (signed >) */

loc_000BD069: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BD078; /* je: equal / zero */

loc_000BD06B: ;
    _fb = (uint32_t)(0x96) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x96;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BD078; /* je: equal / zero */

loc_000BD073: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x64;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000BD0D1; /* jne: not equal / not zero */

loc_000BD078: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    POP32(esp, esi);
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000BD086: ;
    _fb = (uint32_t)(0x226) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x226;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000BD078; /* je: equal / zero */

loc_000BD08E: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BD0D1; /* jne: not equal / not zero */

loc_000BD091: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    POP32(esp, esi);
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000BD09F: ;
    ecx = ebx + -553;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x63 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000BD0D1; /* ja: above (unsigned >) */

loc_000BD0AA: ;
    ecx = ZX8(MEM8(ecx + 0xBD0E8));
    { uint32_t _jt = MEM32(ecx * 4 + 0xBD0D4); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000BD078u) goto loc_000BD078;
    if (_jt == 0x000BD091u) goto loc_000BD091;
    if (_jt == 0x000BD0B8u) goto loc_000BD0B8;
    if (_jt == 0x000BD0C6u) goto loc_000BD0C6;
    if (_jt == 0x000BD0D1u) goto loc_000BD0D1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000BD0B8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    POP32(esp, esi);
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000BD0C6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */

loc_000BD0D1: ;
    POP32(esp, esi);

loc_000BD0D2: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD150
 * Original: 0x000BD150 - 0x000BD6E0 (1424 bytes, 412 insns)
 * Folder: engine (library: 0x000B8270 and 0x000BE090)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BD150: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD175; /* je: equal / zero */

loc_000BD163: ;
    eax = ZX8(MEM8(edi + 0xC));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000BD175; /* jge: greater or equal (signed >=) */

loc_000BD16B: ;
    eax = MEM32(edi + 0x20);
    if (6) _cf = (int)(((ebp) >> (32 - (6))) & 1);
    ebp = ebp << 6;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(eax)) >> 32) & 1);
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000BD180; /* jne: not equal / not zero */

loc_000BD175: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BD180: ;
    SET_LO16(eax, MEM16(ebp));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000BD18E; /* jne: not equal / not zero */

loc_000BD189: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000BD196; /* je: equal / zero */

loc_000BD18E: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BD196: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = edi;
    PUSH32(esp, 0x000BD1A2u); RECOMP_ABI_CALL(0x0009F960u, sub_0009F960); /* call 0x0009F960 */

loc_000BD1A2: ;
    ebx = eax;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ebp);
    edx = edi;
    PUSH32(esp, 0x000BD1AFu); RECOMP_ABI_CALL(0x0009F9D0u, sub_0009F9D0); /* call 0x0009F9D0 */

loc_000BD1AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD347; /* je: equal / zero */

loc_000BD1BA: ;
    ecx = MEM32(edi + 0x1C);
    edi = ZX16(MEM16(ebp + 4));
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ebx)) >> 32) & 1);
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (4) _cf = (int)(((edi) >> (32 - (4))) & 1);
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    eax = MEM32(edx + 0x528);
    edx = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((4) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((4) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = MEM32(eax + edx * 4);
    edx = ebp;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi);
    if (((4) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((4) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = MEM32(eax + edx * 4 + -4);
    edx = ecx;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (2) _cf = (int)(((ebx) >> (32 - (2))) & 1);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = eax * 4 + 4;
    if (CMP_A(_fa, _fb)) goto loc_000BD347; /* ja: above (unsigned >) */

loc_000BD20C: ;
    { uint32_t _jt = MEM32(edx * 4 + 0xBD6C8); /* switch: 6 entries, 6 targets */
    if (_jt == 0x000BD213u) goto loc_000BD213;
    if (_jt == 0x000BD27Fu) goto loc_000BD27F;
    if (_jt == 0x000BD360u) goto loc_000BD360;
    if (_jt == 0x000BD432u) goto loc_000BD432;
    if (_jt == 0x000BD47Fu) goto loc_000BD47F;
    if (_jt == 0x000BD555u) goto loc_000BD555;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000BD213: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(0x64D2B0);
    ecx = MEM32(eax + 0x14);
    xmm2 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] / MEMF(esi + 0x14); /* divss */
    ebx = ecx + ebx * 4 + 4;
    if (CMP_AE(_fa, _fb)) goto loc_000BD257; /* jae: above or equal (unsigned >=) */

loc_000BD22D: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(edi));
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (4) _cf = (int)(((ebp) >> ((4) - 1)) & 1);
    ebp = ebp >> 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000BD234: ;
    ecx = MEM32(ebx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm0 = xmm2; /* movaps */
    PUSH32(esp, 0x000BD240u); RECOMP_ABI_CALL(0x00269770u, sub_00269770); /* call 0x00269770 */

loc_000BD240: ;
    MEM32(ebx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BD234; /* jne: not equal / not zero */

loc_000BD257: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x49362C); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x14); /* comiss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */

loc_000BD26D: ;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000BD347; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x20)) */

loc_000BD273: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BD27F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000BD2D2; /* je: equal / zero */

loc_000BD287: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x1000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337D8); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x14); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333884); /* mulss */
    if (TEST_Z(_fa, _fb)) goto loc_000BD2C5; /* je: equal / zero */

loc_000BD2B6: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */

loc_000BD2C5: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x000BD2D0u); RECOMP_ABI_CALL(0x00269770u, sub_00269770); /* call 0x00269770 */

loc_000BD2D0: ;
    goto loc_000BD2E2;

loc_000BD2D2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x1000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000BD2DF; /* je: equal / zero */

loc_000BD2DA: ;
    eax = MEM32(esi + 0x1C);
    goto loc_000BD2E2;

loc_000BD2DF: ;
    eax = MEM32(esi + 0x20);

loc_000BD2E2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(0x64D2B0);
    ecx = MEM32(edx + 0x14);
    ebx = ecx + ebx * 4 + 4;
    if (CMP_AE(_fa, _fb)) goto loc_000BD317; /* jae: above or equal (unsigned >=) */

loc_000BD2F3: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(edi));
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (4) _cf = (int)(((ebp) >> ((4) - 1)) & 1);
    ebp = ebp >> 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_000BD300: ;
    MEM32(ebx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BD300; /* jne: not equal / not zero */

loc_000BD317: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x49362C); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x14); /* comiss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000BD347; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x14)) */

loc_000BD32F: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x1000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_000BD350; /* je: equal / zero */

loc_000BD340: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFEFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = eax;

loc_000BD347: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BD350: ;
    POP32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x1000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BD360: ;
    edx = MEM32(0x64D2B0);
    ecx = MEM32(edx + 0xC);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    eax = eax + eax * 2;
    xmm0 = XMM_SCALAR(MEMF(ecx + eax * 4 + -24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + eax * 4 + -20)); /* movss */
    ebp = ecx + eax * 4;
    edi = ebx + ebx * 2;
    xmm4 = XMM_SCALAR(MEMF(ecx + edi * 4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + edi * 4 + 4)); /* movss */
    edi = ecx + edi * 4;
    ecx = MEM32(edx + 0x14);
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = ecx + ebx * 4 + 4;
    MEM32(esp + 0x24) = edx;
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000BD347; /* jnp: not parity */

loc_000BD3AB: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000BD347; /* jnp: not parity */

loc_000BD3B4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm2 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */
    xmm6 = xmm2; /* movaps */
    if (CMP_AE(_fa, _fb)) goto loc_000BD347; /* jae: above or equal (unsigned >=) */

loc_000BD3D2: ;
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] - xmm5.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm0 = xmm2; /* movaps */
    PUSH32(esp, 0x000BD3F9u); RECOMP_ABI_CALL(0x00269770u, sub_00269770); /* call 0x00269770 */

loc_000BD3F9: ;
    ecx = MEM32(esi + 0x14);
    ebx = eax;
    eax = MEM32(esi + 0x18);
    xmm0 = xmm2; /* movaps */
    PUSH32(esp, 0x000BD409u); RECOMP_ABI_CALL(0x00269770u, sub_00269770); /* call 0x00269770 */

loc_000BD409: ;
    ecx = eax;
    eax = ebx;
    xmm0 = xmm7; /* movaps */
    PUSH32(esp, 0x000BD415u); RECOMP_ABI_CALL(0x00269770u, sub_00269770); /* call 0x00269770 */

loc_000BD415: ;
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x24) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_000BD3D2; /* jb: below (unsigned <) */

loc_000BD429: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BD432: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x1C);
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x14); /* divss */
    PUSH32(esp, 0x000BD447u); RECOMP_ABI_CALL(0x00269770u, sub_00269770); /* call 0x00269770 */

loc_000BD447: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(0x64D2B0);
    edx = MEM32(ecx + 0x14);
    ecx = edx + ebx * 4 + 4;
    if (CMP_AE(_fa, _fb)) goto loc_000BD257; /* jae: above or equal (unsigned >=) */

loc_000BD45C: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(edi));
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (4) _cf = (int)(((ebp) >> ((4) - 1)) & 1);
    ebp = ebp >> 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000BD463: ;
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BD463; /* jne: not equal / not zero */

loc_000BD47A: ;
    goto loc_000BD257;

loc_000BD47F: ;
    ecx = MEM32(0x64D2B0);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x24); /* subss */
    ecx = MEM32(ecx + 0xC);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    edx = eax + eax * 2;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = ebx + ebx * 2;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    ebp = ecx + edx * 4;
    edi = ecx + eax * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    if (CMP_AE(_fa, _fb)) goto loc_000BD53A; /* jae: above or equal (unsigned >=) */

loc_000BD4C4: ;
    goto loc_000BD4D0;

loc_000BD4C6: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    /* nop */

loc_000BD4D0: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337D8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x1C); /* mulss */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000BD4F5u); RECOMP_ABI_CALL(0x00031A00u, sub_00031A00); /* call 0x00031A00 */

loc_000BD4F5: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(edi + -8)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEMF(edi + -44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + -32)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(edi + -32) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + -20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(edi + -20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(edi + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_B(_fa, _fb)) goto loc_000BD4C6; /* jb: below (unsigned <) */

loc_000BD53A: ;
    xmm0 = XMM_SCALAR(MEMF(0x49362C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x24); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x20); /* comiss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    goto loc_000BD26D;

loc_000BD555: ;
    ecx = MEM32(0x64D2B0);
    ecx = MEM32(ecx + 0xC);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esi + 0x1C); /* divss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    edx = eax + eax * 2;
    eax = ebx + ebx * 2;
    ebp = ecx + edx * 4;
    edi = ecx + eax * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    if (CMP_AE(_fa, _fb)) goto loc_000BD6AC; /* jae: above or equal (unsigned >=) */

loc_000BD592: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x14); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000BD5B0u); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_000BD5B0: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x18); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000BD5FEu); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_000BD5FE: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(edi) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(edi) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(edi) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + -8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi) = xmm2.f[0]; /* movss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000BD592; /* jb: below (unsigned <) */

loc_000BD6AC: ;
    xmm0 = XMM_SCALAR(MEMF(0x49362C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x20); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x1C); /* comiss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    goto loc_000BD26D;

    /* nop */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas > 0)) (void)0; /* goto loc_000BD6A0 - dead code, label not in function */ /* jg: greater (signed >) */

loc_000BD6CE: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    MEM32(ebx) = ROR32(MEM32(ebx), LO8(ecx));
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + HI8(edx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("aam 0xb", 0x000BD6D5u); /* TODO: aam 0xb */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + -44)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(edi + -44) = MEM8(edi + -44) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edi + -44)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebp);
    RECOMP_UNIMPL("aad 0xb", 0x000BD6DDu); /* TODO: aad 0xb */

    g_seh_ebp = ebp; sub_000BD6E0(); return; /* fallthrough 0x000BD6E0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BD6E0
 * Original: 0x000BD6E0 - 0x000BD73D (93 bytes, 40 insns)
 * Folder: engine (library: 0x000B8270 and 0x000BE090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BD6E0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ebx + 0xE));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 4) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_000BD73A; /* jbe: below or equal (unsigned <=) */

loc_000BD6EF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ebx + 0x24;

loc_000BD6F4: ;
    PUSH32(esp, ebx);
    esi = ebp;
    PUSH32(esp, 0x000BD6FCu); RECOMP_ABI_CALL(0x000BD150u, sub_000BD150); /* call 0x000BD150 */

loc_000BD6FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BD728; /* je: equal / zero */

loc_000BD703: ;
    SET_LO8(edx, MEM8(ebx + 0xE));
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = ZX8(LO8(edx));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM8(ebx + 0xE) = LO8(edx);
    if (CMP_GE(_fas, _fbs)) goto loc_000BD730; /* jge: greater or equal (signed >=) */

loc_000BD712: ;
    eax = eax + eax * 4;
    esi = ebx + eax * 8 + 0x24;
    ecx = 0xA;
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
    edi = MEM32(esp + 0xC);
    goto loc_000BD730;

loc_000BD728: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = edi;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x28;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BD730: ;
    ecx = ZX8(MEM8(ebx + 0xE));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BD6F4; /* jl: less (signed <) */

loc_000BD738: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000BD73A: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD740
 * Original: 0x000BD740 - 0x000BD7AF (111 bytes, 31 insns)
 * Folder: engine (library: 0x000B8270 and 0x000BE090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD740: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64D9C0);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x000BD74Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD745u); } /* indirect call */
    }

loc_000BD74B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD799; /* je: equal / zero */

loc_000BD74F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD799; /* je: equal / zero */

loc_000BD754: ;
    ecx = MEM32(0x64D338);
    edx = MEM32(esp + 4);
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47FC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47FC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = edx;
    SET_LO8(edx, MEM8(esp + 8));
    MEM32(0x64D330) = eax;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    MEM8(eax + 0xC) = LO8(edx);
    eax = ecx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1388;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64D9C0);
    MEM32(0x64D338) = edx;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x000BD798u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD792u); } /* indirect call */
    }

loc_000BD798: ;
    esp += 4; return; /* ret */

loc_000BD799: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD7A3; /* je: equal / zero */

loc_000BD79D: ;
    MEM32(edi) = 0;

loc_000BD7A3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64D9C0);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x000BD7AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD7A8u); } /* indirect call */
    }

loc_000BD7AE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD7B0
 * Original: 0x000BD7B0 - 0x000BD956 (422 bytes, 102 insns)
 * Folder: engine (library: 0x000B8270 and 0x000BE090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BD7B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF800000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF800000u (32-bit) */
    ebp = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000BD7E5; /* je: equal / zero */

loc_000BD7C4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF400000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF400000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD7E5; /* je: equal / zero */

loc_000BD7CC: ;
    eax = eax & 0xFF000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFD000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFD000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD7E5; /* je: equal / zero */

loc_000BD7D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFE000000u (32-bit) */
    MEM32(0x64D32C) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_000BD7EB; /* jne: not equal / not zero */

loc_000BD7E5: ;
    MEM32(0x64D32C) = ebx;

loc_000BD7EB: ;
    _fa = (uint32_t)(MEM32(0x64D33C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D33C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD952; /* je: equal / zero */

loc_000BD7F7: ;
    eax = MEM32(0x64D328);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD82C; /* jne: not equal / not zero */

loc_000BD800: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF800000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF800000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD952; /* je: equal / zero */

loc_000BD80C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF400000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF400000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD952; /* je: equal / zero */

loc_000BD818: ;
    ecx = esi;
    ecx = ecx & 0xFF000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFE000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD952; /* je: equal / zero */

loc_000BD82C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF400000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF400000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD8AA; /* je: equal / zero */

loc_000BD834: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF800000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF800000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD898; /* je: equal / zero */

loc_000BD83C: ;
    eax = esi;
    eax = eax & 0xFF000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFE000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD852; /* jne: not equal / not zero */

loc_000BD84A: ;
    MEM32(0x33B484) = ebp;
    goto loc_000BD8BC;

loc_000BD852: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFD000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFD000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD861; /* jne: not equal / not zero */

loc_000BD859: ;
    MEM32(0x33B484) = ebp;
    goto loc_000BD8BC;

loc_000BD861: ;
    eax = MEM32(esp + 0x10);
    edx = esi;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | 0xFF000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000BD88A; /* je: equal / zero */

loc_000BD884: ;
    esi = esi | 0x100000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000BD88A: ;
    MEM32(0x33B484) = ebp;
    MEM32(0x64D32C) = ebp;
    goto loc_000BD8C2;

loc_000BD898: ;
    eax = eax & 0xFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0xFF800000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x33B484) = ebp;
    goto loc_000BD8BA;

loc_000BD8AA: ;
    eax = eax & 0xFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0xFF400000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x33B484) = ebx;

loc_000BD8BA: ;
    esi = eax;

loc_000BD8BC: ;
    MEM32(0x64D32C) = ebx;

loc_000BD8C2: ;
    PUSH32(esp, edi);
    MEM32(0x64D328) = esi;
    MEM32(0x64D3B4) = ebx;
    MEM32(0x64D3A8) = ebx;
    MEM32(0x64D3BC) = ebx;
    MEM32(0x64D3AC) = ebx;
    MEM32(0x64D3A4) = ebx;
    PUSH32(esp, 0x000BD8ECu); RECOMP_ABI_CALL(0x000C3EA0u, sub_000C3EA0); /* call 0x000C3EA0 */

loc_000BD8EC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD951; /* je: equal / zero */

loc_000BD8F3: ;
    PUSH32(esp, esi);
    eax = 0x4934C0;
    MEM32(0x64D3B0) = edi;
    MEM32(0x64D3A4) = 2;
    MEM32(0x64D3AC) = 0x100000;
    MEM32(0x64D3B4) = ebx;
    MEM32(0x64D3B8) = ebx;
    PUSH32(esp, 0x000BD924u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_000BD924: ;
    edx = MEM32(0x64D940);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(0x4934D0) = eax;
    eax = MEM32(0x64D3D4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000BD940u); RECOMP_ABI_CALL(0x00275C40u, sub_00275C40); /* call 0x00275C40 */

loc_000BD940: ;
    ebx = MEM32(0x64D940);
    PUSH32(esp, 0x000BD94Bu); RECOMP_ABI_CALL(0x00276080u, sub_00276080); /* call 0x00276080 */

loc_000BD94B: ;
    MEM32(0x64CFB4) = ebp;

loc_000BD951: ;
    POP32(esp, edi);

loc_000BD952: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD960
 * Original: 0x000BD960 - 0x000BD9AF (79 bytes, 19 insns)
 * Folder: engine (library: 0x000B8270 and 0x000BE090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD960: ;
    eax = MEM32(0x64D33C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD9AE; /* je: equal / zero */

loc_000BD969: ;
    eax = MEM32(0x64D3A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD9A4; /* je: equal / zero */

loc_000BD972: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD9A4; /* jne: not equal / not zero */

loc_000BD97B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D940);
    PUSH32(esp, esi);
    esi = MEM32(0x64D3D4);
    MEM32(0x64D3A8) = 0;
    MEM32(0x64D3BC) = 0;
    PUSH32(esp, 0x000BD9A2u); RECOMP_ABI_CALL(0x00275D30u, sub_00275D30); /* call 0x00275D30 */

loc_000BD9A2: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000BD9A4: ;
    MEM32(0x64D3A4) = 0;

loc_000BD9AE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD9B0
 * Original: 0x000BD9B0 - 0x000BDB33 (387 bytes, 124 insns)
 * Folder: engine (library: 0x000B8270 and 0x000BE090)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BD9B0: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64D9C0);
    MEM32(esp + 0x6C) = eax;
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x000BD9C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD9C2u); } /* indirect call */
    }

loc_000BD9C8: ;
    ecx = MEM32(0x64D334);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x1388;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x64D338)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x64D338) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDB15; /* je: equal / zero */

loc_000BD9E4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    goto loc_000BD9F0;

    /* nop */

loc_000BD9F0: ;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47FC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x47FC30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ecx;
    PUSH32(esp, 0x000BDA00u); RECOMP_ABI_CALL(0x000EEAA0u, sub_000EEAA0); /* call 0x000EEAA0 */

loc_000BDA00: ;
    esi = MEM32(ebp);
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x000BDA0Eu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_000BDA0E: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDA24; /* je: equal / zero */

loc_000BDA1B: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDA2E; /* je: equal / zero */

loc_000BDA24: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDA35; /* je: equal / zero */

loc_000BDA2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ebx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000BDA37; /* je: equal / zero */

loc_000BDA35: ;
    ebx = eax;

loc_000BDA37: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BDA79; /* jne: not equal / not zero */

loc_000BDA3C: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BDAE5; /* je: equal / zero */

loc_000BDA46: ;
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, 0x323DB4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BDA56u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000BDA56: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x32316C);
    PUSH32(esp, 0x391);
    PUSH32(esp, 0x323D78);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000BDA74u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000BDA74: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000BDAE5;

loc_000BDA79: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDAE5; /* je: equal / zero */

loc_000BDA7E: ;
    edx = ebx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esi = ZX8(LO8(edx));
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi + 0x47EC30;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0x000BDA99u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_000BDA99: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BDADB; /* jne: not equal / not zero */

loc_000BDAA3: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BDAAD; /* je: equal / zero */

loc_000BDAA9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000BDADB;

loc_000BDAAD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ebp + 8); PUSH32(esp, 0x000BDAB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BDAAEu); } /* indirect call */
    }

loc_000BDAB1: ;
    edi = eax;
    SET_LO8(eax, MEM8(ebp + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BDADB; /* jne: not equal / not zero */

loc_000BDABD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDADB; /* je: equal / zero */

loc_000BDAC1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDADB; /* je: equal / zero */

loc_000BDAC5: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BDACCu); RECOMP_ABI_CALL(0x000C1000u, sub_000C1000); /* call 0x000C1000 */

loc_000BDACC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi = 0x47EC20;
    PUSH32(esp, 0x000BDAD8u); RECOMP_ABI_CALL(0x000C1000u, sub_000C1000); /* call 0x000C1000 */

loc_000BDAD8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BDADB: ;
    ebp = MEM32(ebp + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDAE5; /* je: equal / zero */

loc_000BDAE2: ;
    MEM32(ebp) = edi;

loc_000BDAE5: ;
    eax = MEM32(0x64D334);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1388;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = 0x1388;
    ecx = edx;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = MEM32(0x64D338);
    MEM32(0x64D334) = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD9F0; /* jne: not equal / not zero */

loc_000BDB12: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000BDB15: ;
    PUSH32(esp, 0x000BDB1Au); RECOMP_ABI_CALL(0x000C0190u, sub_000C0190); /* call 0x000C0190 */

loc_000BDB1A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64D9C0);
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x000BDB25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BDB1Fu); } /* indirect call */
    }

loc_000BDB25: ;
    ecx = MEM32(esp + 0x68);
    POP32(esp, esi);
    PUSH32(esp, 0x000BDB2Fu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_000BDB2F: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BDB40
 * Original: 0x000BDB40 - 0x000BDB5C (28 bytes, 10 insns)
 * Folder: engine (library: 0x000B8270 and 0x000BE090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDB40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDB40: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BDB58u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_000BDB58: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BDB60
 * Original: 0x000BDB60 - 0x000BDBA3 (67 bytes, 24 insns)
 * Folder: engine (library: 0x000B8270 and 0x000BE090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDB60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    ebx = 0x47EC20;
    PUSH32(esp, 0x000BDB75u); RECOMP_ABI_CALL(0x000C1120u, sub_000C1120); /* call 0x000C1120 */

loc_000BDB75: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDBA0; /* je: equal / zero */

loc_000BDB80: ;
    edx = eax;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebx = ZX8(LO8(edx));
    ecx = esp + 4;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x47EC30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000BDB9Du); RECOMP_ABI_CALL(0x000C1120u, sub_000C1120); /* call 0x000C1120 */

loc_000BDB9D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BDBA0: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BDBB0
 * Original: 0x000BDBB0 - 0x000BDCE0 (304 bytes, 90 insns)
 * Folder: engine (library: 0x000B8270 and 0x000BE090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000BDBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDBB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x2000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BDBC0u); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_000BDBC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64D9C0);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x000BDBCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BDBC7u); } /* indirect call */
    }

loc_000BDBCD: ;
    esi = 0x47EC38;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BDBD4: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + -8) = edi;
    MEM32(esi + -4) = edi;
    MEM32(esi) = 0x28;
    MEM32(esi + 4) = 0x28;
    if (CMP_NE(_fa, _fb)) goto loc_000BDBF5; /* jne: not equal / not zero */

loc_000BDBF0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BDBF5u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000BDBF5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x140);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000BDC01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BDBFEu); } /* indirect call */
    }

loc_000BDC01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDC6E; /* je: equal / zero */

loc_000BDC05: ;
    MEM32(esi + -8) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47FC38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x47FC38 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BDBD4; /* jl: less (signed <) */

loc_000BDC13: ;
    eax = 0x2710;
    MEM32(0x47EC28) = eax;
    MEM32(0x47EC2C) = eax;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x47EC20) = edi;
    MEM32(0x47EC24) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000BDC3C; /* jne: not equal / not zero */

loc_000BDC37: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BDC3Cu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000BDC3C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13880);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000BDC48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BDC45u); } /* indirect call */
    }

loc_000BDC48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDCA1; /* je: equal / zero */

loc_000BDC4C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64D9C0);
    MEM32(0x47EC20) = eax;
    MEM32(0x64D338) = edi;
    MEM32(0x64D334) = edi;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x000BDC68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BDC62u); } /* indirect call */
    }

loc_000BDC68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000BDC6E: ;
    PUSH32(esp, 0x322FB0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BDC7Du); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_000BDC7D: ;
    ecx = 0x400;
    esi = esp + 8;
    edi = esp + 0x1008;
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
    PUSH32(esp, 0x334D7C);
    ecx = esp + 0x100C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BDCA1u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000BDCA1: ;
    PUSH32(esp, 0x322FB0);
    eax = esp + 0x100C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BDCB3u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_000BDCB3: ;
    ecx = 0x400;
    esi = esp + 0x1008;
    edi = esp + 8;
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
    PUSH32(esp, 0x334D7C);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BDCD4u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000BDCD4: ;
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

}

/**
 * sub_000BDCE0
 * Original: 0x000BDCE0 - 0x000BDD67 (135 bytes, 42 insns)
 * Folder: engine (library: 0x000B8270 and 0x000BE090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDCE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64D9C0);
    { uint32_t _icall_target = MEM32(0x31C7B4); PUSH32(esp, 0x000BDCEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BDCE8u); } /* indirect call */
    }

loc_000BDCEE: ;
    esi = 0x47EC30;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BDCF5: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDD0A; /* je: equal / zero */

loc_000BDCFB: ;
    PUSH32(esp, 0x000BDD00u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000BDD00: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000BDD0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BDD07u); } /* indirect call */
    }

loc_000BDD0A: ;
    MEM32(esi) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47FC30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x47FC30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BDCF5; /* jl: less (signed <) */

loc_000BDD1D: ;
    edi = MEM32(0x47EC20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDD3A; /* je: equal / zero */

loc_000BDD27: ;
    PUSH32(esp, 0x000BDD2Cu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000BDD2C: ;
    ecx = MEM32(0x47EC20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000BDD3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BDD37u); } /* indirect call */
    }

loc_000BDD3A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64D9C0);
    MEM32(0x47EC20) = ebx;
    MEM32(0x47EC28) = ebx;
    MEM32(0x47EC24) = ebx;
    MEM32(0x64D338) = ebx;
    MEM32(0x64D334) = ebx;
    { uint32_t _icall_target = MEM32(0x31C7B0); PUSH32(esp, 0x000BDD63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BDD5Du); } /* indirect call */
    }

loc_000BDD63: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BDD70
 * Original: 0x000BDD70 - 0x000BDDB0 (64 bytes, 16 insns)
 * Folder: engine (library: 0x000B8270 and 0x000BE090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDD70: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM32(0x4934C0) = ecx;
    MEM32(0x4934C4) = ecx;
    MEM32(0x4934C8) = esi;
    MEM32(0x4934CC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000BDDAF; /* je: equal / zero */

loc_000BDD8E: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BDD9C; /* jne: not equal / not zero */

loc_000BDD97: ;
    PUSH32(esp, 0x000BDD9Cu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000BDD9C: ;
    edx = esi * 8;
    ecx = eax;
    PUSH32(esp, 0x000BDDAAu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000BDDAA: ;
    MEM32(0x4934C0) = eax;

loc_000BDDAF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BDDB0
 * Original: 0x000BDDB0 - 0x000BDF21 (369 bytes, 114 insns)
 * Folder: engine (library: 0x000B8270 and 0x000BE090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BDDB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0xD00C9B6);
    eax = 0x493610;
    PUSH32(esp, 0x000BDDC3u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_000BDDC3: ;
    ecx = MEM32(0x64D33C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDDDB; /* je: equal / zero */

loc_000BDDD2: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDDE3; /* je: equal / zero */

loc_000BDDDB: ;
    _fa = (uint32_t)(MEM32(0x3400FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3400FC), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDE05; /* je: equal / zero */

loc_000BDDE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BDE0A; /* jne: not equal / not zero */

loc_000BDDE8: ;
    MEM32(0x4934C0) = ebp;
    MEM32(0x4934C4) = ebp;
    MEM32(0x4934C8) = ebp;
    MEM32(0x4934CC) = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BDE05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDDE8; /* je: equal / zero */

loc_000BDE0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD00C9B6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD00C9B6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDDE8; /* je: equal / zero */

loc_000BDE11: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BDE21u); RECOMP_ABI_CALL(0x000BFF80u, sub_000BFF80); /* call 0x000BFF80 */

loc_000BDE21: ;
    esi = MEM32(esp + 0x24);
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = edi;
    PUSH32(esp, 0x000BDE34u); RECOMP_ABI_CALL(0x000BDD70u, sub_000BDD70); /* call 0x000BDD70 */

loc_000BDE34: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(0x33B4D0) = ebp;
    if (CMP_AE(_fa, _fb)) goto loc_000BDEE2; /* jae: above or equal (unsigned >=) */

loc_000BDE48: ;
    goto loc_000BDE50;

    /* nop */

loc_000BDE50: ;
    eax = MEM32(ebx);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x64D398);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDE8B; /* je: equal / zero */

loc_000BDE62: ;
    edx = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(esp + 0x14));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x14) = LO8(edx);
    MEM8(esp + 0x17) = LO8(ecx);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x14);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x15) = LO8(edx);
    MEM8(esp + 0x16) = LO8(ecx);

loc_000BDE8B: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000BDEBD; /* je: equal / zero */

loc_000BDE98: ;
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

loc_000BDEBD: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esi = 0x4934C0;
    PUSH32(esp, 0x000BDED1u); RECOMP_ABI_CALL(0x000C1000u, sub_000C1000); /* call 0x000C1000 */

loc_000BDED1: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BDE50; /* jb: below (unsigned <) */

loc_000BDEE2: ;
    edx = MEM32(0x4934C4);
    eax = MEM32(0x4934C0);
    PUSH32(esp, 0xC11B0);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(0x33B4D0) = 1;
    PUSH32(esp, 0x000BDF05u); RECOMP_ABI_CALL(0x0028B7C0u, sub_0028B7C0); /* call 0x0028B7C0 */

loc_000BDF05: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDF19; /* je: equal / zero */

loc_000BDF0C: ;
    PUSH32(esp, 0x000BDF11u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000BDF11: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000BDF19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BDF16u); } /* indirect call */
    }

loc_000BDF19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BDF30
 * Original: 0x000BDF30 - 0x000BDFBA (138 bytes, 39 insns)
 * Folder: engine (library: 0x000B8270 and 0x000BE090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDF30: ;
    PUSH32(esp, edi);
    edi = MEM32(0x64D344);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDF4E; /* je: equal / zero */

loc_000BDF3B: ;
    PUSH32(esp, 0x000BDF40u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000BDF40: ;
    ecx = MEM32(0x64D344);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000BDF4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BDF4Bu); } /* indirect call */
    }

loc_000BDF4E: ;
    PUSH32(esp, 0xB00572C);
    eax = 0x493610;
    MEM32(0x64D344) = 0;
    MEM32(0x64D348) = 0;
    PUSH32(esp, 0x000BDF71u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_000BDF71: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000BDF88; /* je: equal / zero */

loc_000BDF7F: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDF92; /* je: equal / zero */

loc_000BDF88: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDF98; /* je: equal / zero */

loc_000BDF92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BDF9D; /* jne: not equal / not zero */

loc_000BDF97: ;
    esp += 4; return; /* ret */

loc_000BDF98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDFB9; /* je: equal / zero */

loc_000BDF9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB00572C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB00572C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDFB9; /* je: equal / zero */

loc_000BDFA4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64D348);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BDFB1u); RECOMP_ABI_CALL(0x000BFF80u, sub_000BFF80); /* call 0x000BFF80 */

loc_000BDFB1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D344) = eax;

loc_000BDFB9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BDFC0
 * Original: 0x000BDFC0 - 0x000BE026 (102 bytes, 39 insns)
 * Folder: engine (library: 0x000B8270 and 0x000BE090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDFC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE020; /* je: equal / zero */

loc_000BDFC8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE020; /* je: equal / zero */

loc_000BDFCC: ;
    edx = MEM32(0x33B488);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000BDFE1; /* jae: above or equal (unsigned >=) */

loc_000BDFD9: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDFE1; /* je: equal / zero */

loc_000BDFDF: ;
    esi = edx;

loc_000BDFE1: ;
    eax = MEM32(ecx + esi * 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE020; /* je: equal / zero */

loc_000BDFE8: ;
    ecx = MEM32(0x64D398);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE023; /* je: equal / zero */

loc_000BDFF2: ;
    MEM32(esp + 4) = eax;
    ecx = eax;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 7) = LO8(eax);
    MEM8(esp + 4) = LO8(ecx);
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 4);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 5) = LO8(edx);
    MEM8(esp + 6) = LO8(eax);
    eax = MEM32(esp + 4);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000BE020: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000BE023: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BE030
 * Original: 0x000BE030 - 0x000BE041 (17 bytes, 5 insns)
 * Folder: engine (library: 0x000B8270 and 0x000BE090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BE030: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x200) = ecx;
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 0x100) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BE050
 * Original: 0x000BE050 - 0x000BE069 (25 bytes, 9 insns)
 * Folder: engine (library: 0x000B8270 and 0x000BE090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BE050: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0x200);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp) = 0;
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000BE067; /* je: equal / zero */

loc_000BE064: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000BE067: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BE070
 * Original: 0x000BE070 - 0x000BE089 (25 bytes, 10 insns)
 * Folder: engine (library: 0x000B8270 and 0x000BE090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BE070: ;
    eax = MEM32(eax + 0x200);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE088; /* je: equal / zero */

loc_000BE07A: ;
    ecx = eax + 4;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BE088; /* jne: not equal / not zero */

loc_000BE082: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000BE088u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BE086u); } /* indirect call */
    }

loc_000BE088: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000EEA80
 * Original: 0x000EEA80 - 0x000EEA92 (18 bytes, 4 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EEA80(void)
{

loc_000EEA80: ;
    PUSH32(esp, 0x000EEA85u); RECOMP_ABI_CALL(0x00019000u, sub_00019000); /* call 0x00019000 */

loc_000EEA85: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EEAA0
 * Original: 0x000EEAA0 - 0x000EEAA5 (5 bytes, 1 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EEAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EEAA0: ;
    g_seh_ebp = ebp; sub_00013B80(); return; /* tail jmp 0x00013B80 */

}

/**
 * sub_000EEAB0
 * Original: 0x000EEAB0 - 0x000EEAD2 (34 bytes, 6 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EEAB0(void)
{

loc_000EEAB0: ;
    ecx = eax + 0x6A0;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 8) = 1;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    MEM32(eax + 0xCA0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000EEAE0
 * Original: 0x000EEAE0 - 0x000EEB0B (43 bytes, 12 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EEAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EEAE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EEAF2; /* je: equal / zero */

loc_000EEAE4: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = 0xFFFFFFFFu;
    esp += 12; return; /* ret 8 */

loc_000EEAF2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64E7C0);
    PUSH32(esp, 0x000EEAFEu); RECOMP_ABI_CALL(0x000F17C0u, sub_000F17C0); /* call 0x000F17C0 */

loc_000EEAFE: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EEB08u); RECOMP_ABI_CALL(0x0029AAE0u, sub_0029AAE0); /* call 0x0029AAE0 */

loc_000EEB08: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EEB10
 * Original: 0x000EEB10 - 0x000EEB28 (24 bytes, 8 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EEB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EEB10: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    ecx = ecx & 0xFFFFBFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(eax + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EEB27; /* je: equal / zero */

loc_000EEB23: ;
    MEM32(eax + 4) = MEM32(eax + 4) | 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000EEB27: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000EEB30
 * Original: 0x000EEB30 - 0x000EEC1F (239 bytes, 63 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EEB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EEB30: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EEB60; /* je: equal / zero */

loc_000EEB36: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x64E7C0);
    PUSH32(esp, 0x000EEB42u); RECOMP_ABI_CALL(0x000F17C0u, sub_000F17C0); /* call 0x000F17C0 */

loc_000EEB42: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64ED98);
    PUSH32(esp, 0x000EEB50u); RECOMP_ABI_CALL(0x000F3570u, sub_000F3570); /* call 0x000F3570 */

loc_000EEB50: ;
    ecx = 0x64E7C0;
    PUSH32(esp, 0x000EEB5Au); RECOMP_ABI_CALL(0x000F17F0u, sub_000F17F0); /* call 0x000F17F0 */

loc_000EEB5A: ;
    ecx = MEM32(esi + 8);
    MEM32(esi + 0xC) = ecx;

loc_000EEB60: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EEB9F; /* je: equal / zero */

loc_000EEB66: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EEB9F; /* je: equal / zero */

loc_000EEB6D: ;
    edx = MEM32(esi + 0xCA0);
    eax = eax + eax * 2;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ecx = 0x5A;
    if (CMP_NE(_fa, _fb)) goto loc_000EEB8A; /* jne: not equal / not zero */

loc_000EEB83: ;
    PUSH32(esp, 0x000EEB88u); RECOMP_ABI_CALL(0x0029A470u, sub_0029A470); /* call 0x0029A470 */

loc_000EEB88: ;
    goto loc_000EEB9F;

loc_000EEB8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EEB96; /* jne: not equal / not zero */

loc_000EEB8F: ;
    PUSH32(esp, 0x000EEB94u); RECOMP_ABI_CALL(0x0029A4D0u, sub_0029A4D0); /* call 0x0029A4D0 */

loc_000EEB94: ;
    goto loc_000EEB9F;

loc_000EEB96: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EEB9Fu); RECOMP_ABI_CALL(0x0029A660u, sub_0029A660); /* call 0x0029A660 */

loc_000EEB9F: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EEBBD; /* je: equal / zero */

loc_000EEBA5: ;
    edx = MEM32(esi + 0xCA0);
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(0x500) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x500;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0x10;
    PUSH32(esp, 0x000EEBBDu); RECOMP_ABI_CALL(0x0029A580u, sub_0029A580); /* call 0x0029A580 */

loc_000EEBBD: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EEBDB; /* je: equal / zero */

loc_000EEBC3: ;
    edx = MEM32(esi + 0xCA0);
    PUSH32(esp, 8);
    _fb = (uint32_t)(0x5F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x5F0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 1;
    PUSH32(esp, 0x000EEBDBu); RECOMP_ABI_CALL(0x0029A580u, sub_0029A580); /* call 0x0029A580 */

loc_000EEBDB: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EEBF9; /* je: equal / zero */

loc_000EEBE1: ;
    edx = MEM32(esi + 0xCA0);
    PUSH32(esp, 0x30);
    _fb = (uint32_t)(0x5C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x5C0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 4;
    PUSH32(esp, 0x000EEBF9u); RECOMP_ABI_CALL(0x0029A580u, sub_0029A580); /* call 0x0029A580 */

loc_000EEBF9: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EEC17; /* je: equal / zero */

loc_000EEBFF: ;
    edx = MEM32(esi + 0xCA0);
    PUSH32(esp, 0x44);
    _fb = (uint32_t)(0x4C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x4C0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0x14;
    PUSH32(esp, 0x000EEC17u); RECOMP_ABI_CALL(0x0029A580u, sub_0029A580); /* call 0x0029A580 */

loc_000EEC17: ;
    MEM32(esi + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000EEC20
 * Original: 0x000EEC20 - 0x000EECB3 (147 bytes, 44 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EEC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EEC20: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EEC30; /* jne: not equal / not zero */

loc_000EEC26: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EECB2; /* je: equal / zero */

loc_000EEC2E: ;
    goto loc_000EEC34;

loc_000EEC30: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EECAA; /* je: equal / zero */

loc_000EEC34: ;
    eax = MEM32(esi + 0xCA0);
    edx = MEM32(ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x500) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x500;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = edx;
    edx = MEM32(ecx + 8);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0xC);
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    PUSH32(esp, eax);
    MEM32(eax + 0x24) = ecx;
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000EEC91u); RECOMP_ABI_CALL(0x00293C33u, sub_00293C33); /* call 0x00293C33 */

loc_000EEC91: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 8) = ecx;
    MEM32(esi + 4) = eax;
    esp += 4; return; /* ret */

loc_000EECAA: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = MEM32(esi + 4) | 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000EECB2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000EECC0
 * Original: 0x000EECC0 - 0x000EECFE (62 bytes, 23 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EECC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EECC0: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000EECCC; /* jne: not equal / not zero */

loc_000EECC8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EECFD; /* je: equal / zero */

loc_000EECCC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(eax + 8);
    edx = edx << 0xE;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x4000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(eax + 4);
    edx = edx | 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000EECFD; /* je: equal / zero */

loc_000EECF7: ;
    edx = edx | 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;

loc_000EECFD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000EED00
 * Original: 0x000EED00 - 0x000EED44 (68 bytes, 26 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000EED00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EED00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EED16u); RECOMP_ABI_CALL(0x000C3CB0u, sub_000C3CB0); /* call 0x000C3CB0 */

loc_000EED16: ;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EED1Fu); RECOMP_ABI_CALL(0x00293C33u, sub_00293C33); /* call 0x00293C33 */

loc_000EED1F: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0xCA0);
    edi = esi + esi * 2 + -6;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xC;
    esi = esp + 0x10;
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
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EED50
 * Original: 0x000EED50 - 0x000EEE94 (324 bytes, 94 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EED50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EED50: ;
    eax = MEM32(edi + 8);
    edx = eax;
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EEE90; /* je: equal / zero */

loc_000EED65: ;
    edx = ecx + ecx;
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EEE57; /* je: equal / zero */

loc_000EED7A: ;
    eax = MEM32(0x64D29C);
    ecx = MEM32(eax + 0x8C);
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx);
    edx = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    esi = eax + 0x30;
    eax = MEM32(eax + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EED9Du); RECOMP_ABI_CALL(0x000BC7D0u, sub_000BC7D0); /* call 0x000BC7D0 */

loc_000EED9D: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337F8)); /* movss */
    ecx = eax;
    edx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = eax;
    ecx = ZX8(LO8(ecx));
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0xFFFFFF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ecx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ZX8(LO8(eax));
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(LO8(eax));
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = ZX8(LO8(ecx));
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x14);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x18);
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(edi + 0xCA0);
    _fb = (uint32_t)(0x4C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x4C0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x20);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(edi + 4);
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = eax;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    MEM32(edi + 4) = eax;
    MEM32(edi) = 0;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000EEE57: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    PUSH32(esp, 0x000EEE62u); RECOMP_ABI_CALL(0x000EF0B0u, sub_000EF0B0); /* call 0x000EF0B0 */

loc_000EEE62: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 1;
    PUSH32(esp, 0x000EEE6Eu); RECOMP_ABI_CALL(0x000EF0B0u, sub_000EF0B0); /* call 0x000EF0B0 */

loc_000EEE6E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 2;
    PUSH32(esp, 0x000EEE7Au); RECOMP_ABI_CALL(0x000EF0B0u, sub_000EF0B0); /* call 0x000EF0B0 */

loc_000EEE7A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 3;
    PUSH32(esp, 0x000EEE86u); RECOMP_ABI_CALL(0x000EF0B0u, sub_000EF0B0); /* call 0x000EF0B0 */

loc_000EEE86: ;
    MEM32(edi + 4) = MEM32(edi + 4) | 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = 0;

loc_000EEE90: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EEEA0
 * Original: 0x000EEEA0 - 0x000EF0A2 (514 bytes, 131 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EEEA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EEEA0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = eax;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 2 (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000EF099; /* je: equal / zero */

loc_000EEEB2: ;
    edi = MEM32(esp + 0x24);
    eax = edi;
    edx = ebx;
    ecx = esi;
    PUSH32(esp, 0x000EEEC1u); RECOMP_ABI_CALL(0x000EF0B0u, sub_000EF0B0); /* call 0x000EF0B0 */

loc_000EEEC1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EEF9C; /* je: equal / zero */

loc_000EEECA: ;
    ecx = MEM32(esi + 0xCA0);
    xmm0 = XMM_SCALAR(MEMF(0x470D30)); /* movss */
    eax = ebx;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + -1200;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x470D34)); /* movss */
    edx = esi + 0x20;
    PUSH32(esp, edx);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x470D38)); /* movss */
    PUSH32(esp, eax);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    PUSH32(esp, eax);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000EEF1Au); RECOMP_ABI_CALL(0x00293AEFu, sub_00293AEF); /* call 0x00293AEF */

loc_000EEF1A: ;
    ebp = MEM32(esi + 0xCA0);
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    edi = ebx + -18;
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(0x470CF0);
    eax = MEM32(ebp + 0x14);
    MEM32(edi) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x10); /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EEF57u); RECOMP_ABI_CALL(0x000319B0u, sub_000319B0); /* call 0x000319B0 */

loc_000EEF57: ;
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EEF68u); RECOMP_ABI_CALL(0x000319B0u, sub_000319B0); /* call 0x000319B0 */

loc_000EEF68: ;
    eax = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000EEF7Au); RECOMP_ABI_CALL(0x000319B0u, sub_000319B0); /* call 0x000319B0 */

loc_000EEF7A: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EEF9C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EEFF3; /* je: equal / zero */

loc_000EEFA1: ;
    edx = MEM32(esi + 0xCA0);
    xmm0 = XMM_SCALAR(MEMF(0x470D10)); /* movss */
    ecx = ebx;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + ecx + -1184;
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x470D14)); /* movss */
    eax = esi + 0x20;
    PUSH32(esp, eax);
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x470D18)); /* movss */
    PUSH32(esp, edi);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edi);
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000EEFECu); RECOMP_ABI_CALL(0x00293AEFu, sub_00293AEF); /* call 0x00293AEF */

loc_000EEFEC: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000EEFF3u); RECOMP_ABI_CALL(0x00293A6Eu, sub_00293A6E); /* call 0x00293A6E */

loc_000EEFF3: ;
    ecx = MEM32(0x470CF4);
    xmm0 = XMM_SCALAR(MEMF(0x3337F8)); /* movss */
    eax = ecx;
    eax = eax | 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ZX8(MEM8(0x470CF6));
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX8(LO8(edx));
    edx = eax;
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = ZX8(LO8(edx));
    edx = ZX8(LO8(eax));
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x10);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esi + 0xCA0);
    ebx = ebx << 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + ebx + -1168;
    eax = MEM32(esp + 0x14);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = eax;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(ecx + 0xC) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) | 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000EF099: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EF0B0
 * Original: 0x000EF0B0 - 0x000EF106 (86 bytes, 31 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EF0B0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000EF105; /* ja: above (unsigned >) */

loc_000EF0B5: ;
    { uint32_t _jt = MEM32(edx * 4 + 0xEF108); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000EF0BCu) goto loc_000EF0BC;
    if (_jt == 0x000EF0CDu) goto loc_000EF0CD;
    if (_jt == 0x000EF0E0u) goto loc_000EF0E0;
    if (_jt == 0x000EF0F3u) goto loc_000EF0F3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000EF0BC: ;
    edx = MEM32(ecx + 8);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = edx;
    esp += 4; return; /* ret */

loc_000EF0CD: ;
    edx = MEM32(ecx + 8);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xE0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = edx;
    esp += 4; return; /* ret */

loc_000EF0E0: ;
    edx = MEM32(ecx + 8);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x700;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = edx;
    esp += 4; return; /* ret */

loc_000EF0F3: ;
    edx = MEM32(ecx + 8);
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x3800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = edx;

loc_000EF105: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000EF106
 * Original: 0x000EF106 - 0x000EF120 (26 bytes, 2 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF106(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EF106: ;
    edi = edi;
    esp = 0xCD000EF0u;

    g_seh_ebp = ebp; sub_000EF120(); return; /* fallthrough 0x000EF120 */

}

/**
 * sub_000EF120
 * Original: 0x000EF120 - 0x000EF135 (21 bytes, 9 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EF120: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 0x20;
    ecx = 0x10;
    esi = edx;
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
    g_seh_ebp = ebp; sub_000EF160(); return; /* tail jmp 0x000EF160 */

}

/**
 * sub_000EF140
 * Original: 0x000EF140 - 0x000EF155 (21 bytes, 9 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF140(void)
{
    extern void sub_000EF140_enter(void);
    sub_000EF140_enter();
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EF140: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 0x60;
    ecx = 0x10;
    esi = edx;
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
    g_seh_ebp = ebp; sub_000EF160(); return; /* tail jmp 0x000EF160 */

}

/**
 * sub_000EF160
 * Original: 0x000EF160 - 0x000EF1C4 (100 bytes, 37 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EF160: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = MEM32(esi + 0xCA0);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    ebx = esi + 0x20;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x5C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x5C0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x000EF180u); RECOMP_ABI_CALL(0x00293B35u, sub_00293B35); /* call 0x00293B35 */

loc_000EF180: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000EF187u); RECOMP_ABI_CALL(0x00293C33u, sub_00293C33); /* call 0x00293C33 */

loc_000EF187: ;
    PUSH32(esp, 0x000EF18Cu); RECOMP_ABI_CALL(0x000EF1D0u, sub_000EF1D0); /* call 0x000EF1D0 */

loc_000EF18C: ;
    ecx = MEM32(esi + 0xCA0);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x580;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EF19Fu); RECOMP_ABI_CALL(0x00293C33u, sub_00293C33); /* call 0x00293C33 */

loc_000EF19F: ;
    eax = MEM32(esi + 0xCA0);
    PUSH32(esp, ebx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x540) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x540;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EF1B6u); RECOMP_ABI_CALL(0x00293C7Eu, sub_00293C7E); /* call 0x00293C7E */

loc_000EF1B6: ;
    eax = MEM32(esi + 4);
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EF1D0
 * Original: 0x000EF1D0 - 0x000EF1ED (29 bytes, 8 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF1D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EF1D0: ;
    eax = MEM32(esi + 0xCA0);
    ecx = eax + -1504;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xFFFFFA10u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFA10u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EF1E8u); RECOMP_ABI_CALL(0x0029AEC0u, sub_0029AEC0); /* call 0x0029AEC0 */

loc_000EF1E8: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 8;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EF1F0
 * Original: 0x000EF1F0 - 0x000EF259 (105 bytes, 40 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EF1F0: ;
    eax = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EF203; /* je: equal / zero */

loc_000EF1FA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EF200u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000EF200: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EF203: ;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = edi;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EF21C; /* je: equal / zero */

loc_000EF213: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EF219u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000EF219: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EF21C: ;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = edi;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EF235; /* je: equal / zero */

loc_000EF22C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EF232u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000EF232: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EF235: ;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EF24E; /* je: equal / zero */

loc_000EF245: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EF24Bu); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000EF24B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000EF24E: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EF260
 * Original: 0x000EF260 - 0x000EF285 (37 bytes, 14 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EF260: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    ecx = 0x64E710;
    PUSH32(esp, 0x000EF26Fu); RECOMP_ABI_CALL(0x000F4010u, sub_000F4010); /* call 0x000F4010 */

loc_000EF26F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000EF281; /* jl: less (signed <) */

loc_000EF275: ;
    PUSH32(esp, ebx);
    ebx = 0x64ECE0;
    PUSH32(esp, 0x000EF280u); RECOMP_ABI_CALL(0x000F2230u, sub_000F2230); /* call 0x000F2230 */

loc_000EF280: ;
    POP32(esp, ebx);

loc_000EF281: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EF290
 * Original: 0x000EF290 - 0x000EF29F (15 bytes, 6 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EF290: ;
    PUSH32(esp, ebx);
    ebx = 0x64E710;
    PUSH32(esp, 0x000EF29Bu); RECOMP_ABI_CALL(0x000F4170u, sub_000F4170); /* call 0x000F4170 */

loc_000EF29B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EF2A0
 * Original: 0x000EF2A0 - 0x000EF2F7 (87 bytes, 31 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EF2A0: ;
    SET_LO8(eax, MEM8(esp + 4));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EF2AF; /* je: equal / zero */

loc_000EF2AA: ;
    ecx = 0xF0;

loc_000EF2AF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EF2B9; /* je: equal / zero */

loc_000EF2B3: ;
    ecx = ecx | 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000EF2B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EF2C0; /* je: equal / zero */

loc_000EF2BD: ;
    ecx = ecx | 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000EF2C0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax;
    edx = ZX8(LO8(edx));
    PUSH32(esp, 0);
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x3F800000);
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xFF00FF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000EF2F5u); RECOMP_ABI_CALL(0x00298A50u, sub_00298A50); /* call 0x00298A50 */

loc_000EF2F5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EF300
 * Original: 0x000EF300 - 0x000EF308 (8 bytes, 3 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF300(void)
{

loc_000EF300: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000EF307u); RECOMP_ABI_CALL(0x00299BA0u, sub_00299BA0); /* call 0x00299BA0 */

loc_000EF307: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000EF310
 * Original: 0x000EF310 - 0x000EF334 (36 bytes, 13 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000EF310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EF310: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    eax = esp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF324u); RECOMP_ABI_CALL(0x000C3CB0u, sub_000C3CB0); /* call 0x000C3CB0 */

loc_000EF324: ;
    edx = eax;
    eax = 0x64DA60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF330u); RECOMP_ABI_CALL(0x000EF120u, sub_000EF120); /* call 0x000EF120 */

loc_000EF330: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000EF340
 * Original: 0x000EF340 - 0x000EF5FA (698 bytes, 171 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF340(void)
{
    extern void sub_000EF340_enter(void);
    sub_000EF340_enter();
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

loc_000EF340: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D29C);
    ecx = MEM32(eax + 0xC4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000EF366; /* jle: less or equal (signed <=) */

loc_000EF356: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EF366; /* jge: greater or equal (signed >=) */

loc_000EF35B: ;
    xmm3 = XMM_SCALAR(MEMF(ecx * 4 + 0x33A3C0)); /* movss */
    goto loc_000EF36E;

loc_000EF366: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 0xB0)); /* movss */

loc_000EF36E: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xAC)); /* movss */
    ecx = MEM32(esp + 0x18);
    ebx = MEM32(eax + 0xA8);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    ebp = MEM32(eax + 0xA0);
    eax = MEM32(eax + 0xA4);
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEM32(esp + 0x18) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000EF3CE; /* je: equal / zero */

loc_000EF39E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    edi = eax;
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    if (TEST_Z(_fa, _fb)) goto loc_000EF3B5; /* je: equal / zero */

loc_000EF3B1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000EF3BE; /* jg: greater (signed >) */

loc_000EF3B5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EF3FC; /* je: equal / zero */

loc_000EF3BA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EF3FC; /* jge: greater or equal (signed >=) */

loc_000EF3BE: ;
    xmm1.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edi = (int32_t)xmm1.f[0]; /* cvttss2si */
    edx = ebp;
    goto loc_000EF3FC;

loc_000EF3CE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    xmm1.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edi = (int32_t)xmm1.f[0]; /* cvttss2si */
    edx = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_000EF3E5; /* je: equal / zero */

loc_000EF3E1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000EF3EE; /* jg: greater (signed >) */

loc_000EF3E5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EF3FC; /* je: equal / zero */

loc_000EF3EA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EF3FC; /* jge: greater or equal (signed >=) */

loc_000EF3EE: ;
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    edi = eax;

loc_000EF3FC: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000EF429; /* jp: parity */

loc_000EF415: ;
    MEMF(ecx + 0x34) = xmm4.f[0]; /* movss */
    MEMF(ecx + 0x38) = xmm4.f[0]; /* movss */
    MEMF(ecx + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x30) = xmm1.f[0]; /* movss */

loc_000EF429: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337D8)); /* fmul dword ptr [0x3337d8] */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    eax = ebp;
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = (int32_t)xmm2.f[0]; /* cvttss2si */
    MEM32(ecx + 0x3C) = ebx;
    xmm2.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm5.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    edi = (int32_t)xmm5.f[0]; /* cvttss2si */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    MEM32(ecx + 0x40) = edi;
    edx = MEM32(0x650C60);
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    edx = edx & 0xFFFFFFC3u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (int32_t)xmm2.f[0]; /* cvttss2si */
    MEM32(esp + 0x10) = eax;
    eax = 0x3F800000;
    MEM32(0x650C60) = edx;
    edx = MEM32(0x64D29C);
    MEM32(0x650C20) = eax;
    MEM32(0x650C24) = esi;
    MEM32(0x650C28) = esi;
    MEM32(0x650C2C) = esi;
    MEM32(0x650C30) = esi;
    MEM32(0x650C34) = eax;
    MEM32(0x650C38) = esi;
    MEM32(0x650C3C) = esi;
    MEM32(0x650C40) = esi;
    MEM32(0x650C44) = esi;
    MEM32(0x650C48) = eax;
    MEM32(0x650C4C) = esi;
    MEM32(0x650C50) = esi;
    MEM32(0x650C54) = esi;
    MEM32(0x650C58) = esi;
    MEM32(0x650C5C) = eax;
    _fa = (uint32_t)(MEM8(edx + 0xA8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0xA8), 4 (8-bit) */
    ebp = (int32_t)xmm5.f[0]; /* cvttss2si */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_000EF540; /* je: equal / zero */

loc_000EF52F: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(0x650C20) = xmm2.f[0]; /* movss */
    goto loc_000EF54C;

loc_000EF540: ;
    MEMF(0x650C20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */

loc_000EF54C: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(0x650C34) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    MEMF(0x650C48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x33390C)); /* movss */
    edx = 0x650C20;
    eax = 0x64DA60;
    MEMF(0x650C4C) = xmm4.f[0]; /* movss */
    MEMF(0x650C58) = xmm0.f[0]; /* movss */
    MEMF(0x650C5C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x000EF5AAu); RECOMP_ABI_CALL(0x000EF140u, sub_000EF140); /* call 0x000EF140 */

loc_000EF5AA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 0x10);
    MEMF(0x650C10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    PUSH32(esp, 0x650C00);
    MEM32(0x650C00) = ebx;
    MEM32(0x650C04) = edi;
    MEM32(0x650C08) = eax;
    MEM32(0x650C0C) = ebp;
    MEMF(0x650C14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000EF5EAu); RECOMP_ABI_CALL(0x00297F30u, sub_00297F30); /* call 0x00297F30 */

loc_000EF5EA: ;
    esi = 0x64DA60;
    PUSH32(esp, 0x000EF5F4u); RECOMP_ABI_CALL(0x000EF1D0u, sub_000EF1D0); /* call 0x000EF1D0 */

loc_000EF5F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_000EF600
 * Original: 0x000EF600 - 0x000EF62C (44 bytes, 19 insns)
 * Folder: engine (library: 0x000EEA50 and 0x000EF630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EF600: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EF615; /* je: equal / zero */

loc_000EF60C: ;
    PUSH32(esp, 0x000EF611u); RECOMP_ABI_CALL(0x000F1920u, sub_000F1920); /* call 0x000F1920 */

loc_000EF611: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000EF615: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EF625u); RECOMP_ABI_CALL(0x000EF630u, sub_000EF630); /* call 0x000EF630 */

loc_000EF625: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
