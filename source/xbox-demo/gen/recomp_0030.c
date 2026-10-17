/**
 * PoP SoT xbox-demo - Recompiled code chunk 30
 * Functions: 250 (0x0026C1C0 - 0x00272520)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0026C1C0
 * Original: 0x0026C1C0 - 0x0026C210 (80 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C1C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C1C0: ;
    edx = MEM32(0x64D858);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x6270D8);
    esi = edi + 0x6270D8;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0026C1E3u); RECOMP_ABI_CALL(0x0026C170u, sub_0026C170); /* call 0x0026C170 */

loc_0026C1E3: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(edx * 8 + 0x616FDC) = esi;
    MEM32(0x64D854) = edi;
    MEM16(edx * 8 + 0x616FD8) = 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026C210
 * Original: 0x0026C210 - 0x0026C265 (85 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C210: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C264; /* je: equal / zero */

loc_0026C214: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C264; /* je: equal / zero */

loc_0026C21B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C264; /* je: equal / zero */

loc_0026C222: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C264; /* je: equal / zero */

loc_0026C228: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C264; /* je: equal / zero */

loc_0026C22F: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C264; /* je: equal / zero */

loc_0026C236: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C245; /* je: equal / zero */

loc_0026C23D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C236; /* jne: not equal / not zero */

loc_0026C244: ;
    esp += 4; return; /* ret */

loc_0026C245: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C264; /* je: equal / zero */

loc_0026C24C: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0026C261u); RECOMP_ABI_CALL(0x00049080u, sub_00049080); /* call 0x00049080 */

loc_0026C261: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026C264: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026C270
 * Original: 0x0026C270 - 0x0026C324 (180 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C270: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C29B; /* jne: not equal / not zero */

loc_0026C291: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_0026C2A3;

loc_0026C29B: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_0026C2A3: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0026C2C0; /* jne: not equal / not zero */

loc_0026C2B6: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_0026C2C8;

loc_0026C2C0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_0026C2C8: ;
    edx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 0x6270DC);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x6270E0);
    MEM32(0x64D858) = ecx;
    ecx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270D8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026C319u); RECOMP_ABI_CALL(0x0026C210u, sub_0026C210); /* call 0x0026C210 */

loc_0026C319: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026C330
 * Original: 0x0026C330 - 0x0026C37F (79 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C330: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C37E; /* je: equal / zero */

loc_0026C334: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C37E; /* je: equal / zero */

loc_0026C33B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C37E; /* je: equal / zero */

loc_0026C342: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C37E; /* je: equal / zero */

loc_0026C348: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C37E; /* je: equal / zero */

loc_0026C34F: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C37E; /* je: equal / zero */

loc_0026C356: ;
    PUSH32(esp, edi);

loc_0026C357: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C367; /* je: equal / zero */

loc_0026C35E: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C357; /* jne: not equal / not zero */

loc_0026C365: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0026C367: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C37D; /* je: equal / zero */

loc_0026C36E: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    edi = eax;
    PUSH32(esp, 0x0026C37Au); RECOMP_ABI_CALL(0x00048A20u, sub_00048A20); /* call 0x00048A20 */

loc_0026C37A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026C37D: ;
    POP32(esp, edi);

loc_0026C37E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026C380
 * Original: 0x0026C380 - 0x0026C3D9 (89 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C380: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D854);
    edx = MEM32(eax + 0x6270BC);
    ecx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = edx;
    edx = MEM32(0x64D858);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = ecx;
    ecx = MEM32(eax + 0x6270E0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D858) = edx;
    edx = esp;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 0x6270D8);
    PUSH32(esp, edx);
    MEM32(0x64D854) = eax;
    PUSH32(esp, 0x0026C3CEu); RECOMP_ABI_CALL(0x0026C330u, sub_0026C330); /* call 0x0026C330 */

loc_0026C3CE: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026C3E0
 * Original: 0x0026C3E0 - 0x0026C423 (67 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026C3E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C414; /* je: equal / zero */

loc_0026C3E4: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C414; /* je: equal / zero */

loc_0026C3EB: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C414; /* je: equal / zero */

loc_0026C3F2: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C414; /* je: equal / zero */

loc_0026C3F8: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C414; /* je: equal / zero */

loc_0026C3FF: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C414; /* je: equal / zero */

loc_0026C406: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C415; /* je: equal / zero */

loc_0026C40D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C406; /* jne: not equal / not zero */

loc_0026C414: ;
    esp += 4; return; /* ret */

loc_0026C415: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C414; /* je: equal / zero */

loc_0026C41C: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00049040(); return; /* tail jmp 0x00049040 */

}

/**
 * sub_0026C430
 * Original: 0x0026C430 - 0x0026C45D (45 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C430: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270D8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    PUSH32(esp, 0x0026C455u); RECOMP_ABI_CALL(0x0026C3E0u, sub_0026C3E0); /* call 0x0026C3E0 */

loc_0026C455: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026C460
 * Original: 0x0026C460 - 0x0026C4A5 (69 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C460: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C494; /* je: equal / zero */

loc_0026C464: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C494; /* je: equal / zero */

loc_0026C46B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C494; /* je: equal / zero */

loc_0026C472: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C494; /* je: equal / zero */

loc_0026C478: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C494; /* je: equal / zero */

loc_0026C47F: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C494; /* je: equal / zero */

loc_0026C486: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C497; /* je: equal / zero */

loc_0026C48D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C486; /* jne: not equal / not zero */

loc_0026C494: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0026C497: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C494; /* je: equal / zero */

loc_0026C49E: ;
    eax = MEM32(eax + 4);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026C4B0
 * Original: 0x0026C4B0 - 0x0026C500 (80 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C4B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C4B0: ;
    edx = MEM32(0x64D858);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x6270D8);
    esi = edi + 0x6270D8;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0026C4D3u); RECOMP_ABI_CALL(0x0026C460u, sub_0026C460); /* call 0x0026C460 */

loc_0026C4D3: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(edx * 8 + 0x616FDC) = esi;
    MEM32(0x64D854) = edi;
    MEM16(edx * 8 + 0x616FD8) = 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026C500
 * Original: 0x0026C500 - 0x0026C548 (72 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C500: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C534; /* je: equal / zero */

loc_0026C504: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C534; /* je: equal / zero */

loc_0026C50B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C534; /* je: equal / zero */

loc_0026C512: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C534; /* je: equal / zero */

loc_0026C518: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C534; /* je: equal / zero */

loc_0026C51F: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C534; /* je: equal / zero */

loc_0026C526: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C537; /* je: equal / zero */

loc_0026C52D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C526; /* jne: not equal / not zero */

loc_0026C534: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0026C537: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C534; /* je: equal / zero */

loc_0026C53E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026C544u); RECOMP_ABI_CALL(0x00049850u, sub_00049850); /* call 0x00049850 */

loc_0026C544: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026C550
 * Original: 0x0026C550 - 0x0026C5A2 (82 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C550: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D854);
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebx + 0x6270D8);
    PUSH32(esp, edi);
    edi = ebx + 0x6270D8;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0026C574u); RECOMP_ABI_CALL(0x0026C500u, sub_0026C500); /* call 0x0026C500 */

loc_0026C574: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 8 + 0x616FDC) = edi;
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x10);
    MEM16(esi * 8 + 0x616FD8) = 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = esi;
    POP32(esp, esi);
    MEM32(0x64D854) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026C5B0
 * Original: 0x0026C5B0 - 0x0026C5FE (78 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C5B0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C5E4; /* je: equal / zero */

loc_0026C5B4: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C5E4; /* je: equal / zero */

loc_0026C5BB: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C5E4; /* je: equal / zero */

loc_0026C5C2: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C5E4; /* je: equal / zero */

loc_0026C5C8: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C5E4; /* je: equal / zero */

loc_0026C5CF: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C5E4; /* je: equal / zero */

loc_0026C5D6: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C5E7; /* je: equal / zero */

loc_0026C5DD: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C5D6; /* jne: not equal / not zero */

loc_0026C5E4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0026C5E7: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C5E4; /* je: equal / zero */

loc_0026C5EE: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026C5FAu); RECOMP_ABI_CALL(0x00049940u, sub_00049940); /* call 0x00049940 */

loc_0026C5FA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026C600
 * Original: 0x0026C600 - 0x0026C683 (131 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C600: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D854);
    eax = MEM32(esi + 0x6270B8);
    ecx = MEM32(esi + 0x6270BC);
    edx = MEM32(esi + 0x6270C0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(0x64D858);
    MEM32(esp + 0xC) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 0xC;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esi + 0x6270D8);
    ebx = esi + 0x6270D8;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0026C64Fu); RECOMP_ABI_CALL(0x0026C5B0u, sub_0026C5B0); /* call 0x0026C5B0 */

loc_0026C64F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi * 8 + 0x616FDC) = ebx;
    MEM16(edi * 8 + 0x616FD8) = 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(0x64D858) = edi;
    POP32(esp, edi);
    MEM32(0x64D854) = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026C690
 * Original: 0x0026C690 - 0x0026C6DA (74 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C690: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C6C4; /* je: equal / zero */

loc_0026C694: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C6C4; /* je: equal / zero */

loc_0026C69B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C6C4; /* je: equal / zero */

loc_0026C6A2: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C6C4; /* je: equal / zero */

loc_0026C6A8: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C6C4; /* je: equal / zero */

loc_0026C6AF: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C6C4; /* je: equal / zero */

loc_0026C6B6: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C6C7; /* je: equal / zero */

loc_0026C6BD: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C6B6; /* jne: not equal / not zero */

loc_0026C6C4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0026C6C7: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C6C4; /* je: equal / zero */

loc_0026C6CE: ;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0026C6D6u); RECOMP_ABI_CALL(0x00049B00u, sub_00049B00); /* call 0x00049B00 */

loc_0026C6D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026C6E0
 * Original: 0x0026C6E0 - 0x0026C732 (82 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C6E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C6E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D854);
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebx + 0x6270D8);
    PUSH32(esp, edi);
    edi = ebx + 0x6270D8;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0026C704u); RECOMP_ABI_CALL(0x0026C690u, sub_0026C690); /* call 0x0026C690 */

loc_0026C704: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 8 + 0x616FDC) = edi;
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x10);
    MEM16(esi * 8 + 0x616FD8) = 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = esi;
    POP32(esp, esi);
    MEM32(0x64D854) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026C740
 * Original: 0x0026C740 - 0x0026C78D (77 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C740: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C78C; /* je: equal / zero */

loc_0026C744: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C78C; /* je: equal / zero */

loc_0026C74B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C78C; /* je: equal / zero */

loc_0026C752: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C78C; /* je: equal / zero */

loc_0026C758: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C78C; /* je: equal / zero */

loc_0026C75F: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C78C; /* je: equal / zero */

loc_0026C766: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C775; /* je: equal / zero */

loc_0026C76D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C766; /* jne: not equal / not zero */

loc_0026C774: ;
    esp += 4; return; /* ret */

loc_0026C775: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C78C; /* je: equal / zero */

loc_0026C77C: ;
    ecx = MEM32(eax + 4);
    ecx = ecx | 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x78) = 0;
    MEM32(eax + 4) = ecx;

loc_0026C78C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026C790
 * Original: 0x0026C790 - 0x0026C7BD (45 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C790: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270D8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    PUSH32(esp, 0x0026C7B5u); RECOMP_ABI_CALL(0x0026C740u, sub_0026C740); /* call 0x0026C740 */

loc_0026C7B5: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026C7C0
 * Original: 0x0026C7C0 - 0x0026C842 (130 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C7C0(void)
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

loc_0026C7C0: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C81E; /* je: equal / zero */

loc_0026C7C5: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C7FE; /* je: equal / zero */

loc_0026C7CC: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C7FE; /* je: equal / zero */

loc_0026C7D3: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C7FE; /* je: equal / zero */

loc_0026C7D9: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C7FE; /* je: equal / zero */

loc_0026C7E0: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C7FE; /* je: equal / zero */

loc_0026C7E7: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C7F7; /* je: equal / zero */

loc_0026C7EE: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C7E7; /* jne: not equal / not zero */

loc_0026C7F5: ;
    goto loc_0026C7FE;

loc_0026C7F7: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C82D; /* jne: not equal / not zero */

loc_0026C7FE: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C81E; /* je: equal / zero */

loc_0026C805: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C81E; /* je: equal / zero */

loc_0026C80C: ;
    /* nop */

loc_0026C810: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C826; /* je: equal / zero */

loc_0026C817: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C810; /* jne: not equal / not zero */

loc_0026C81E: ;
    fp_push(MEMF(0x3337C0)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026C826: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C81E; /* je: equal / zero */

loc_0026C82D: ;
    ecx = MEM32(eax + 0x30);
    fp_push((double)SMEM32(eax + 0x30)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026C83D; /* jge: greater or equal (signed >=) */

loc_0026C837: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_0026C83D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026C850
 * Original: 0x0026C850 - 0x0026C8A2 (82 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C850(void)
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

loc_0026C850: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D854);
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebx + 0x6270D8);
    PUSH32(esp, edi);
    edi = ebx + 0x6270D8;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0026C874u); RECOMP_ABI_CALL(0x0026C7C0u, sub_0026C7C0); /* call 0x0026C7C0 */

loc_0026C874: ;
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 8 + 0x616FDC) = edi;
    MEM16(esi * 8 + 0x616FD8) = 2;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = esi;
    POP32(esp, esi);
    MEM32(0x64D854) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026C8B0
 * Original: 0x0026C8B0 - 0x0026C902 (82 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C8B0: ;
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C8EE; /* je: equal / zero */

loc_0026C8B7: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C8EE; /* je: equal / zero */

loc_0026C8BE: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C8EE; /* je: equal / zero */

loc_0026C8C5: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C8EE; /* je: equal / zero */

loc_0026C8CB: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C8EE; /* je: equal / zero */

loc_0026C8D2: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C8EE; /* je: equal / zero */

loc_0026C8D9: ;
    /* nop */

loc_0026C8E0: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C8F2; /* je: equal / zero */

loc_0026C8E7: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C8E0; /* jne: not equal / not zero */

loc_0026C8EE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0026C8F2: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C8EE; /* je: equal / zero */

loc_0026C8F9: ;
    ecx = eax;
    PUSH32(esp, 0x0026C900u); RECOMP_ABI_CALL(0x00049BA0u, sub_00049BA0); /* call 0x00049BA0 */

loc_0026C900: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026C910
 * Original: 0x0026C910 - 0x0026C946 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C910: ;
    eax = MEM32(0x64D854);
    edx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270D8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = edx;
    PUSH32(esp, 0x0026C935u); RECOMP_ABI_CALL(0x0026C8B0u, sub_0026C8B0); /* call 0x0026C8B0 */

loc_0026C935: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026C93Bu); RECOMP_ABI_CALL(0x001080C0u, sub_001080C0); /* call 0x001080C0 */

loc_0026C93B: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026C950
 * Original: 0x0026C950 - 0x0026C998 (72 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C950: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C997; /* je: equal / zero */

loc_0026C954: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C997; /* je: equal / zero */

loc_0026C95B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C997; /* je: equal / zero */

loc_0026C962: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C997; /* je: equal / zero */

loc_0026C968: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C997; /* je: equal / zero */

loc_0026C96F: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C997; /* je: equal / zero */

loc_0026C976: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C985; /* je: equal / zero */

loc_0026C97D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C976; /* jne: not equal / not zero */

loc_0026C984: ;
    esp += 4; return; /* ret */

loc_0026C985: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C997; /* je: equal / zero */

loc_0026C98C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */

loc_0026C997: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026C9A0
 * Original: 0x0026C9A0 - 0x0026C9FB (91 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C9A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C9C5; /* jne: not equal / not zero */

loc_0026C9BB: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_0026C9CD;

loc_0026C9C5: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_0026C9CD: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(0x64D858) = ecx;
    ecx = MEM32(esp);
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270D8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026C9F0u); RECOMP_ABI_CALL(0x0026C950u, sub_0026C950); /* call 0x0026C950 */

loc_0026C9F0: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026CA00
 * Original: 0x0026CA00 - 0x0026CA45 (69 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CA00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026CA00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CA34; /* je: equal / zero */

loc_0026CA04: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CA34; /* je: equal / zero */

loc_0026CA0B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CA34; /* je: equal / zero */

loc_0026CA12: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CA34; /* je: equal / zero */

loc_0026CA18: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CA34; /* je: equal / zero */

loc_0026CA1F: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CA34; /* je: equal / zero */

loc_0026CA26: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CA37; /* je: equal / zero */

loc_0026CA2D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026CA26; /* jne: not equal / not zero */

loc_0026CA34: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0026CA37: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CA34; /* je: equal / zero */

loc_0026CA3E: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00049BE0(); return; /* tail jmp 0x00049BE0 */

}

/**
 * sub_0026CA50
 * Original: 0x0026CA50 - 0x0026CACF (127 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026CA50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026CA79; /* jne: not equal / not zero */

loc_0026CA6F: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edi + 0x6270D8); /* cvtsi2ss */
    goto loc_0026CA81;

loc_0026CA79: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x6270D8)); /* movss */

loc_0026CA81: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = edi + 0x6270D8;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0026CA9Du); RECOMP_ABI_CALL(0x0026CA00u, sub_0026CA00); /* call 0x0026CA00 */

loc_0026CA9D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 8 + 0x616FDC) = ebx;
    MEM16(esi * 8 + 0x616FD8) = 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    MEM32(0x64D858) = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026CAD0
 * Original: 0x0026CAD0 - 0x0026CB18 (72 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026CAD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CB17; /* je: equal / zero */

loc_0026CAD4: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CB17; /* je: equal / zero */

loc_0026CADB: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CB17; /* je: equal / zero */

loc_0026CAE2: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CB17; /* je: equal / zero */

loc_0026CAE8: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CB17; /* je: equal / zero */

loc_0026CAEF: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CB17; /* je: equal / zero */

loc_0026CAF6: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CB05; /* je: equal / zero */

loc_0026CAFD: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026CAF6; /* jne: not equal / not zero */

loc_0026CB04: ;
    esp += 4; return; /* ret */

loc_0026CB05: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CB16; /* je: equal / zero */

loc_0026CB0D: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x0026CB16u); RECOMP_ABI_CALL(0x00049FD0u, sub_00049FD0); /* call 0x00049FD0 */

loc_0026CB16: ;
    POP32(esp, esi);

loc_0026CB17: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026CB20
 * Original: 0x0026CB20 - 0x0026CB58 (56 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CB20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026CB20: ;
    PUSH32(esp, 0x0026CB25u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026CB25: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x6270D8);
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = edx;
    PUSH32(esp, 0x0026CB4Du); RECOMP_ABI_CALL(0x0026CAD0u, sub_0026CAD0); /* call 0x0026CAD0 */

loc_0026CB4D: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026CB60
 * Original: 0x0026CB60 - 0x0026CBA5 (69 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026CB60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CB94; /* je: equal / zero */

loc_0026CB64: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CB94; /* je: equal / zero */

loc_0026CB6B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CB94; /* je: equal / zero */

loc_0026CB72: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CB94; /* je: equal / zero */

loc_0026CB78: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CB94; /* je: equal / zero */

loc_0026CB7F: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CB94; /* je: equal / zero */

loc_0026CB86: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CB98; /* je: equal / zero */

loc_0026CB8D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026CB86; /* jne: not equal / not zero */

loc_0026CB94: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esp += 4; return; /* ret */

loc_0026CB98: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CB94; /* je: equal / zero */

loc_0026CB9F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0026CBB0
 * Original: 0x0026CBB0 - 0x0026CC02 (82 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CBB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026CBB0: ;
    edx = MEM32(0x64D858);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x6270D8);
    esi = edi + 0x6270D8;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0026CBD3u); RECOMP_ABI_CALL(0x0026CB60u, sub_0026CB60); /* call 0x0026CB60 */

loc_0026CBD3: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx * 8 + 0x616FDC) = esi;
    MEM32(0x64D854) = edi;
    MEM16(edx * 8 + 0x616FD8) = 2;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEM32(0x64D858) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026CC10
 * Original: 0x0026CC10 - 0x0026CC66 (86 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026CC10: ;
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CC64; /* je: equal / zero */

loc_0026CC17: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CC64; /* je: equal / zero */

loc_0026CC1E: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CC64; /* je: equal / zero */

loc_0026CC25: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CC64; /* je: equal / zero */

loc_0026CC2B: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CC64; /* je: equal / zero */

loc_0026CC32: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CC64; /* je: equal / zero */

loc_0026CC39: ;
    /* nop */

loc_0026CC40: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CC50; /* je: equal / zero */

loc_0026CC47: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026CC40; /* jne: not equal / not zero */

loc_0026CC4E: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0026CC50: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CC64; /* je: equal / zero */

loc_0026CC57: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = eax;
    PUSH32(esp, 0x0026CC63u); RECOMP_ABI_CALL(0x0004A080u, sub_0004A080); /* call 0x0004A080 */

loc_0026CC63: ;
    POP32(esp, esi);

loc_0026CC64: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026CC70
 * Original: 0x0026CC70 - 0x0026CCC9 (89 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CC70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026CC70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D854);
    edx = MEM32(eax + 0x6270BC);
    ecx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = edx;
    edx = MEM32(0x64D858);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = ecx;
    ecx = MEM32(eax + 0x6270E0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D858) = edx;
    edx = esp;
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270D8);
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0x0026CCBEu); RECOMP_ABI_CALL(0x0026CC10u, sub_0026CC10); /* call 0x0026CC10 */

loc_0026CCBE: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026CCD0
 * Original: 0x0026CCD0 - 0x0026CD28 (88 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026CCD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CD27; /* je: equal / zero */

loc_0026CCD4: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CD27; /* je: equal / zero */

loc_0026CCDB: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CD27; /* je: equal / zero */

loc_0026CCE2: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CD27; /* je: equal / zero */

loc_0026CCE8: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CD27; /* je: equal / zero */

loc_0026CCEF: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CD27; /* je: equal / zero */

loc_0026CCF6: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CD05; /* je: equal / zero */

loc_0026CCFD: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026CCF6; /* jne: not equal / not zero */

loc_0026CD04: ;
    esp += 4; return; /* ret */

loc_0026CD05: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CD27; /* je: equal / zero */

loc_0026CD0C: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026CD24u); RECOMP_ABI_CALL(0x000497A0u, sub_000497A0); /* call 0x000497A0 */

loc_0026CD24: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026CD27: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026CD30
 * Original: 0x0026CD30 - 0x0026CE05 (213 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026CD30: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026CD5B; /* jne: not equal / not zero */

loc_0026CD51: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026CD63;

loc_0026CD5B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026CD63: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0026CD80; /* jne: not equal / not zero */

loc_0026CD76: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026CD88;

loc_0026CD80: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026CD88: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026CDB1; /* jne: not equal / not zero */

loc_0026CDA7: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026CDB9;

loc_0026CDB1: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026CDB9: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026CDC4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026CDC4: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = edx;
    edx = MEM32(esp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x6270D8);
    MEM32(0x64D854) = ecx;
    PUSH32(esp, 0x0026CDFAu); RECOMP_ABI_CALL(0x0026CCD0u, sub_0026CCD0); /* call 0x0026CCD0 */

loc_0026CDFA: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026CE10
 * Original: 0x0026CE10 - 0x0026CE55 (69 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026CE10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CE44; /* je: equal / zero */

loc_0026CE14: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CE44; /* je: equal / zero */

loc_0026CE1B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CE44; /* je: equal / zero */

loc_0026CE22: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CE44; /* je: equal / zero */

loc_0026CE28: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CE44; /* je: equal / zero */

loc_0026CE2F: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CE44; /* je: equal / zero */

loc_0026CE36: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CE48; /* je: equal / zero */

loc_0026CE3D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026CE36; /* jne: not equal / not zero */

loc_0026CE44: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esp += 4; return; /* ret */

loc_0026CE48: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CE44; /* je: equal / zero */

loc_0026CE4F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0026CE60
 * Original: 0x0026CE60 - 0x0026CEB2 (82 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CE60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026CE60: ;
    edx = MEM32(0x64D858);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x6270D8);
    esi = edi + 0x6270D8;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0026CE83u); RECOMP_ABI_CALL(0x0026CE10u, sub_0026CE10); /* call 0x0026CE10 */

loc_0026CE83: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx * 8 + 0x616FDC) = esi;
    MEM32(0x64D854) = edi;
    MEM16(edx * 8 + 0x616FD8) = 2;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEM32(0x64D858) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026CEC0
 * Original: 0x0026CEC0 - 0x0026CF43 (131 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0026CEC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CEF4; /* je: equal / zero */

loc_0026CEC4: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CEF4; /* je: equal / zero */

loc_0026CECB: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CEF4; /* je: equal / zero */

loc_0026CED2: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CEF4; /* je: equal / zero */

loc_0026CED8: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CEF4; /* je: equal / zero */

loc_0026CEDF: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CEF4; /* je: equal / zero */

loc_0026CEE6: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CEF8; /* je: equal / zero */

loc_0026CEED: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026CEE6; /* jne: not equal / not zero */

loc_0026CEF4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0026CEF7: ;
    esp += 4; return; /* ret */

loc_0026CEF8: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CEF4; /* je: equal / zero */

loc_0026CEFF: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x68); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x5C)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0026CF22; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x68)) */

loc_0026CF12: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x68); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    goto loc_0026CF27;

loc_0026CF22: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x6C); /* divss */

loc_0026CF27: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026CF34; /* je: equal / zero */

loc_0026CF2E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026CEF7; /* jne: not equal / not zero */

loc_0026CF32: ;
    goto loc_0026CF38;

loc_0026CF34: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026CEF7; /* je: equal / zero */

loc_0026CF38: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */
    esp += 4; return; /* ret */

}

/**
 * sub_0026CF50
 * Original: 0x0026CF50 - 0x0026CFA2 (82 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CF50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026CF50: ;
    edx = MEM32(0x64D858);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x6270D8);
    esi = edi + 0x6270D8;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0026CF73u); RECOMP_ABI_CALL(0x0026CEC0u, sub_0026CEC0); /* call 0x0026CEC0 */

loc_0026CF73: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx * 8 + 0x616FDC) = esi;
    MEM32(0x64D854) = edi;
    MEM16(edx * 8 + 0x616FD8) = 2;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEM32(0x64D858) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026CFB0
 * Original: 0x0026CFB0 - 0x0026CFF5 (69 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026CFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026CFB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CFE4; /* je: equal / zero */

loc_0026CFB4: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CFE4; /* je: equal / zero */

loc_0026CFBB: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CFE4; /* je: equal / zero */

loc_0026CFC2: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CFE4; /* je: equal / zero */

loc_0026CFC8: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CFE4; /* je: equal / zero */

loc_0026CFCF: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CFE4; /* je: equal / zero */

loc_0026CFD6: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CFE8; /* je: equal / zero */

loc_0026CFDD: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026CFD6; /* jne: not equal / not zero */

loc_0026CFE4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esp += 4; return; /* ret */

loc_0026CFE8: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026CFE4; /* je: equal / zero */

loc_0026CFEF: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0026D000
 * Original: 0x0026D000 - 0x0026D052 (82 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026D000: ;
    edx = MEM32(0x64D858);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x6270D8);
    esi = edi + 0x6270D8;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0026D023u); RECOMP_ABI_CALL(0x0026CFB0u, sub_0026CFB0); /* call 0x0026CFB0 */

loc_0026D023: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx * 8 + 0x616FDC) = esi;
    MEM32(0x64D854) = edi;
    MEM16(edx * 8 + 0x616FD8) = 2;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEM32(0x64D858) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026D060
 * Original: 0x0026D060 - 0x0026D09C (60 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026D060: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026D09B; /* je: equal / zero */

loc_0026D067: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D09B; /* je: equal / zero */

loc_0026D06E: ;
    ecx = MEM32(eax + 0x1C);
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D09B; /* je: equal / zero */

loc_0026D077: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x1D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D086; /* je: equal / zero */

loc_0026D07E: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026D077; /* jne: not equal / not zero */

loc_0026D085: ;
    esp += 4; return; /* ret */

loc_0026D086: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D09B; /* je: equal / zero */

loc_0026D08D: ;
    ecx = MEM32(eax + 0x34);
    edx = MEM32(esp + 4);
    MEM32(eax + ecx * 4 + 0x38) = edx;
    MEM32(eax + 0x34) = MEM32(eax + 0x34) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0026D09B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026D0A0
 * Original: 0x0026D0A0 - 0x0026D0F0 (80 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D0A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026D0A0: ;
    ecx = MEM32(0x64D880);
    eax = MEM32(0x64D884);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D858);
    MEM32(0x64D854) = ecx;
    ecx = MEM32(ecx + 0x6270D8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    MEM32(0x64D858) = edx;
    PUSH32(esp, 0x0026D0E5u); RECOMP_ABI_CALL(0x0026D060u, sub_0026D060); /* call 0x0026D060 */

loc_0026D0E5: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026D0F0
 * Original: 0x0026D0F0 - 0x0026D1AF (191 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D0F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026D0F0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0x2000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0026D1AB; /* je: equal / zero */

loc_0026D11A: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D140; /* je: equal / zero */

loc_0026D121: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026D140; /* je: equal / zero */

loc_0026D126: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D140; /* je: equal / zero */

loc_0026D12C: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D140; /* je: equal / zero */

loc_0026D133: ;
    ebp = eax;
    eax = MEM32(ebp);
    esi = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_0026D140: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D148; /* je: equal / zero */

loc_0026D144: ;
    eax = MEM32(ecx);
    goto loc_0026D157;

loc_0026D148: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0026D157; /* je: equal / zero */

loc_0026D14E: ;
    ecx = MEM32(ebp);
    ecx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0026D157: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D1A4; /* je: equal / zero */

loc_0026D15B: ;
    ebx = eax;
    SET_LO8(ebx, LO8(ebx) & 3);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D1A4; /* je: equal / zero */

loc_0026D165: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D1A4; /* je: equal / zero */

loc_0026D16C: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D1A4; /* je: equal / zero */

loc_0026D173: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026D19D; /* jne: not equal / not zero */

loc_0026D17A: ;
    ebx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x30), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D187; /* je: equal / zero */

loc_0026D182: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026D19D; /* jne: not equal / not zero */

loc_0026D187: ;
    edx = MEM32(eax + 4);
    ebx = MEM32(esp + 0x14);
    edx = edx & 0xFDFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x10);

loc_0026D19D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026D173; /* jne: not equal / not zero */

loc_0026D1A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0026D140; /* jbe: below or equal (unsigned <=) */

loc_0026D1AB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026D1B0
 * Original: 0x0026D1B0 - 0x0026D28E (222 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026D1B0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0xC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026D289; /* je: equal / zero */

loc_0026D1CC: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D1F1; /* je: equal / zero */

loc_0026D1D3: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D1F1; /* je: equal / zero */

loc_0026D1D9: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026D1F1; /* je: equal / zero */

loc_0026D1DE: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D1F1; /* je: equal / zero */

loc_0026D1E5: ;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(eax);
    ebx = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0026D1F1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D1F9; /* je: equal / zero */

loc_0026D1F5: ;
    eax = MEM32(edi);
    goto loc_0026D20B;

loc_0026D1F9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026D20B; /* je: equal / zero */

loc_0026D1FF: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);
    edi = MEM32(edx + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0026D20B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D27E; /* je: equal / zero */

loc_0026D20F: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D27E; /* je: equal / zero */

loc_0026D219: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D27E; /* je: equal / zero */

loc_0026D220: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D27E; /* je: equal / zero */

loc_0026D227: ;
    edx = eax;
    /* nop */

loc_0026D230: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026D273; /* jne: not equal / not zero */

loc_0026D237: ;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D244; /* je: equal / zero */

loc_0026D23F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026D273; /* jne: not equal / not zero */

loc_0026D244: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0026D273; /* jbe: below or equal (unsigned <=) */

loc_0026D24B: ;
    goto loc_0026D250;

    /* nop */

loc_0026D250: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D25E; /* je: equal / zero */

loc_0026D255: ;
    ebp = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(ebp + ecx * 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + ecx * 8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026D267; /* jne: not equal / not zero */

loc_0026D25E: ;
    ebp = MEM32(eax + 0x1C);
    MEMF(ebp + ecx * 8 + 4) = xmm0.f[0]; /* movss */

loc_0026D267: ;
    ebp = MEM32(eax + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0026D250; /* jb: below (unsigned <) */

loc_0026D26F: ;
    ebp = MEM32(esp + 0x18);

loc_0026D273: ;
    edx = MEM32(edx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026D230; /* jne: not equal / not zero */

loc_0026D27A: ;
    ecx = MEM32(esp + 0x14);

loc_0026D27E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0026D1F1; /* jbe: below or equal (unsigned <=) */

loc_0026D289: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026D290
 * Original: 0x0026D290 - 0x0026D2CE (62 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026D290: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026D2B3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026D2B3: ;
    esi = eax;
    PUSH32(esp, 0x0026D2BAu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026D2BA: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026D2C1u); RECOMP_ABI_CALL(0x0026D0F0u, sub_0026D0F0); /* call 0x0026D0F0 */

loc_0026D2C1: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026D2D0
 * Original: 0x0026D2D0 - 0x0026D353 (131 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026D2D0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026D31E; /* jne: not equal / not zero */

loc_0026D314: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026D326;

loc_0026D31E: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026D326: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026D331u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026D331: ;
    esi = eax;
    PUSH32(esp, 0x0026D338u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026D338: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0026D345u); RECOMP_ABI_CALL(0x0026D1B0u, sub_0026D1B0); /* call 0x0026D1B0 */

loc_0026D345: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026D360
 * Original: 0x0026D360 - 0x0026D3F7 (151 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026D360: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D3E9; /* je: equal / zero */

loc_0026D371: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D395; /* je: equal / zero */

loc_0026D378: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D395; /* je: equal / zero */

loc_0026D37E: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026D395; /* je: equal / zero */

loc_0026D384: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D395; /* je: equal / zero */

loc_0026D38B: ;
    ebx = eax;
    eax = MEM32(ebx);
    esi = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0026D395: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D39D; /* je: equal / zero */

loc_0026D399: ;
    eax = MEM32(edx);
    goto loc_0026D3AB;

loc_0026D39D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0026D3AB; /* je: equal / zero */

loc_0026D3A3: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0026D3AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D3E2; /* je: equal / zero */

loc_0026D3AF: ;
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D3E2; /* je: equal / zero */

loc_0026D3B9: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D3E2; /* je: equal / zero */

loc_0026D3C0: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D3E2; /* je: equal / zero */

loc_0026D3C7: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026D3DB; /* jne: not equal / not zero */

loc_0026D3CE: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x30), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D3F0; /* je: equal / zero */

loc_0026D3D6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D3F0; /* je: equal / zero */

loc_0026D3DB: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026D3C7; /* jne: not equal / not zero */

loc_0026D3E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0026D395; /* jbe: below or equal (unsigned <=) */

loc_0026D3E9: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0026D3F0: ;
    eax = MEM32(ecx + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026D400
 * Original: 0x0026D400 - 0x0026D46B (107 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026D400: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026D423u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026D423: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0026D42Bu); RECOMP_ABI_CALL(0x0026D360u, sub_0026D360); /* call 0x0026D360 */

loc_0026D42B: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026D470
 * Original: 0x0026D470 - 0x0026D4F8 (136 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026D470: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026D4A0; /* jne: not equal / not zero */

loc_0026D496: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026D4A8;

loc_0026D4A0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026D4A8: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026D4D7u); RECOMP_ABI_CALL(0x00014DE0u, sub_00014DE0); /* call 0x00014DE0 */

loc_0026D4D7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0026D4EF; /* je: equal / zero */

loc_0026D4DF: ;
    eax = MEM32(eax + 8);
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(eax + 0x570) = xmm0.f[0]; /* movss */

loc_0026D4EF: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026D500
 * Original: 0x0026D500 - 0x0026D558 (88 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026D500: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0026D508u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026D508: ;
    edi = eax;
    PUSH32(esp, 0x0026D50Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026D50F: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    esi = eax;
    eax = MEM32(0x64D884);
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026D539u); RECOMP_ABI_CALL(0x00014DE0u, sub_00014DE0); /* call 0x00014DE0 */

loc_0026D539: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D54D; /* je: equal / zero */

loc_0026D540: ;
    eax = MEM32(eax + 8);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + esi + 0x5A8) = edi;

loc_0026D54D: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026D560
 * Original: 0x0026D560 - 0x0026D5F6 (150 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026D560: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026D590; /* jne: not equal / not zero */

loc_0026D586: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026D598;

loc_0026D590: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026D598: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026D5A5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026D5A5: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    esi = eax;
    eax = MEM32(0x64D884);
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026D5CFu); RECOMP_ABI_CALL(0x00014DE0u, sub_00014DE0); /* call 0x00014DE0 */

loc_0026D5CF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D5EB; /* je: equal / zero */

loc_0026D5D6: ;
    eax = MEM32(eax + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(eax + esi + 0x5B4) = xmm0.f[0]; /* movss */

loc_0026D5EB: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026D600
 * Original: 0x0026D600 - 0x0026D695 (149 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026D600: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026D630; /* jne: not equal / not zero */

loc_0026D626: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026D638;

loc_0026D630: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026D638: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026D645u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026D645: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    esi = eax;
    eax = MEM32(0x64D884);
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026D66Fu); RECOMP_ABI_CALL(0x00014DE0u, sub_00014DE0); /* call 0x00014DE0 */

loc_0026D66F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D68A; /* je: equal / zero */

loc_0026D676: ;
    eax = MEM32(eax + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fb = (uint32_t)(0x5B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5B;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(esi + eax) = xmm0.f[0]; /* movss */

loc_0026D68A: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026D69C
 * Original: 0x0026D69C - 0x0026D6A0 (4 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D69C(void)
{

loc_0026D69C: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0026D6A0
 * Original: 0x0026D6A0 - 0x0026D736 (150 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026D6A0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026D6D0; /* jne: not equal / not zero */

loc_0026D6C6: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026D6D8;

loc_0026D6D0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026D6D8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026D6E5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026D6E5: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    esi = eax;
    eax = MEM32(0x64D884);
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026D70Fu); RECOMP_ABI_CALL(0x00014DE0u, sub_00014DE0); /* call 0x00014DE0 */

loc_0026D70F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D72B; /* je: equal / zero */

loc_0026D716: ;
    eax = MEM32(eax + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(eax + esi + 0x5AC) = xmm0.f[0]; /* movss */

loc_0026D72B: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026D740
 * Original: 0x0026D740 - 0x0026D7C8 (136 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026D740: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026D770; /* jne: not equal / not zero */

loc_0026D766: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026D778;

loc_0026D770: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026D778: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026D7A7u); RECOMP_ABI_CALL(0x00014DE0u, sub_00014DE0); /* call 0x00014DE0 */

loc_0026D7A7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0026D7BF; /* je: equal / zero */

loc_0026D7AF: ;
    eax = MEM32(eax + 8);
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(eax + 0x568) = xmm0.f[0]; /* movss */

loc_0026D7BF: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026D7D0
 * Original: 0x0026D7D0 - 0x0026D858 (136 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026D7D0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026D800; /* jne: not equal / not zero */

loc_0026D7F6: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026D808;

loc_0026D800: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026D808: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026D837u); RECOMP_ABI_CALL(0x00014DE0u, sub_00014DE0); /* call 0x00014DE0 */

loc_0026D837: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0026D84F; /* je: equal / zero */

loc_0026D83F: ;
    eax = MEM32(eax + 8);
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(eax + 0x56C) = xmm0.f[0]; /* movss */

loc_0026D84F: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026D860
 * Original: 0x0026D860 - 0x0026D8E8 (136 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026D860: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026D890; /* jne: not equal / not zero */

loc_0026D886: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026D898;

loc_0026D890: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026D898: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026D8C7u); RECOMP_ABI_CALL(0x00014DE0u, sub_00014DE0); /* call 0x00014DE0 */

loc_0026D8C7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0026D8DF; /* je: equal / zero */

loc_0026D8CF: ;
    eax = MEM32(eax + 8);
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(eax + 0x578) = xmm0.f[0]; /* movss */

loc_0026D8DF: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026D8F0
 * Original: 0x0026D8F0 - 0x0026D978 (136 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026D8F0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026D920; /* jne: not equal / not zero */

loc_0026D916: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026D928;

loc_0026D920: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026D928: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026D957u); RECOMP_ABI_CALL(0x00014DE0u, sub_00014DE0); /* call 0x00014DE0 */

loc_0026D957: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0026D96F; /* je: equal / zero */

loc_0026D95F: ;
    eax = MEM32(eax + 8);
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(eax + 0x5EC) = xmm0.f[0]; /* movss */

loc_0026D96F: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026D980
 * Original: 0x0026D980 - 0x0026DACE (334 bytes, 134 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026D980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026D980: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DACD; /* je: equal / zero */

loc_0026D988: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DACD; /* je: equal / zero */

loc_0026D993: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DACD; /* je: equal / zero */

loc_0026D99E: ;
    PUSH32(esp, edi);
    /* nop */

loc_0026D9A0: ;
    edi = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026D9AF; /* jne: not equal / not zero */

loc_0026D9A7: ;
    edi = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(edi + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x60), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026D9B8; /* je: equal / zero */

loc_0026D9AF: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026D9A0; /* jne: not equal / not zero */

loc_0026D9B6: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0026D9B8: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DACC; /* je: equal / zero */

loc_0026D9C3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0026DACC; /* ja: above (unsigned >) */

loc_0026D9CC: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x26DAD0); /* switch: 12 entries, 12 targets */
    if (_jt == 0x0026D9D3u) goto loc_0026D9D3;
    if (_jt == 0x0026D9E5u) goto loc_0026D9E5;
    if (_jt == 0x0026D9F8u) goto loc_0026D9F8;
    if (_jt == 0x0026DA10u) goto loc_0026DA10;
    if (_jt == 0x0026DA24u) goto loc_0026DA24;
    if (_jt == 0x0026DA38u) goto loc_0026DA38;
    if (_jt == 0x0026DA4Cu) goto loc_0026DA4C;
    if (_jt == 0x0026DA60u) goto loc_0026DA60;
    if (_jt == 0x0026DA76u) goto loc_0026DA76;
    if (_jt == 0x0026DA8Cu) goto loc_0026DA8C;
    if (_jt == 0x0026DAA2u) goto loc_0026DAA2;
    if (_jt == 0x0026DAB8u) goto loc_0026DAB8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0026D9D3: ;
    edx = MEM32(ecx + 4);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(ecx + 4);
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

loc_0026D9E5: ;
    edi = MEM32(ecx + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

loc_0026D9F8: ;
    edi = MEM32(ecx + 4);
    edx = eax * 4;
    edx = edx ^ edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    edx = edx & 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

loc_0026DA10: ;
    edi = MEM32(ecx + 4);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

loc_0026DA24: ;
    edi = MEM32(ecx + 4);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

loc_0026DA38: ;
    edi = MEM32(ecx + 4);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;
    eax = eax & 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

loc_0026DA4C: ;
    edi = MEM32(ecx + 4);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

loc_0026DA60: ;
    edi = MEM32(ecx + 4);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;
    eax = eax & 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

loc_0026DA76: ;
    edi = MEM32(ecx + 4);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;
    eax = eax & 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

loc_0026DA8C: ;
    edi = MEM32(ecx + 4);
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;
    eax = eax & 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

loc_0026DAA2: ;
    edi = MEM32(ecx + 4);
    eax = eax << 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;
    eax = eax & 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

loc_0026DAB8: ;
    edi = MEM32(ecx + 4);
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edi;
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = edx;

loc_0026DACC: ;
    POP32(esp, edi);

loc_0026DACD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026DACE
 * Original: 0x0026DACE - 0x0026DB48 (122 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DACE(void)
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

loc_0026DACE: ;
    edi = edi;
    { uint32_t _rcv = RC_ROT((uint32_t)(ecx), (unsigned)(LO8(ecx)), &_cf, 32, 0);
      ecx = _rcv; } /* rcr */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + HI8(eax));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* FPU: fldenv [esi] */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + HI8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* FPU: fldenv [esi] */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - (double)SMEM32(esi)); /* fisub dword ptr [esi] */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + ebx * 8)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edx + ebx * 8) = MEM8(edx + ebx * 8) + HI8(eax);
    _fa = (uint32_t)(MEM8(edx + ebx * 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(ebx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - (double)SMEM32(esi)); /* fisub dword ptr [esi] */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + ebx * 8 + 0x26)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + ebx * 8 + 0x26) = MEM8(edx + ebx * 8 + 0x26) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + ebx * 8 + 0x26)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + -38)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax + -38) = MEM8(eax + -38) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + -38)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + -38)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(esi + -38) = MEM8(esi + -38) + HI8(edx);
    _fa = (uint32_t)(MEM8(esi + -38)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + ebx * 8 + -626917338)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + ebx * 8 + -626917338) = MEM8(edx + ebx * 8 + -626917338) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + ebx * 8 + -626917338)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + -1593825574)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(eax + -1593825574) = MEM8(eax + -1593825574) + HI8(ebx);
    _fa = (uint32_t)(MEM8(eax + -1593825574)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0x64) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + 0x64D8780D)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx + 0x64D8780D) = MEM8(ebx + 0x64D8780D) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + 0x64D8780D)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + 0x56)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ebx + 0x56) = MEM8(ebx + 0x56) + LO8(edx);
    _fa = (uint32_t)(MEM8(ebx + 0x56)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026DB24u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026DB24: ;
    ebx = eax;
    PUSH32(esp, 0x0026DB2Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026DB2B: ;
    esi = eax;
    PUSH32(esp, 0x0026DB32u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026DB32: ;
    edx = eax;
    eax = ebx;
    ecx = edi;
    PUSH32(esp, 0x0026DB3Du); RECOMP_ABI_CALL(0x0026D980u, sub_0026D980); /* call 0x0026D980 */

loc_0026DB3D: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026DB00
 * Original: 0x0026DB00 - 0x0026DB48 (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DB00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026DB00: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026DB24u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026DB24: ;
    ebx = eax;
    PUSH32(esp, 0x0026DB2Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026DB2B: ;
    esi = eax;
    PUSH32(esp, 0x0026DB32u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026DB32: ;
    edx = eax;
    eax = ebx;
    ecx = edi;
    PUSH32(esp, 0x0026DB3Du); RECOMP_ABI_CALL(0x0026D980u, sub_0026D980); /* call 0x0026D980 */

loc_0026DB3D: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026DB50
 * Original: 0x0026DB50 - 0x0026DC4C (252 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026DB50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DC4B; /* je: equal / zero */

loc_0026DB58: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DC4B; /* je: equal / zero */

loc_0026DB63: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DC4B; /* je: equal / zero */

loc_0026DB6E: ;
    PUSH32(esp, esi);
    /* nop */

loc_0026DB70: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026DB7F; /* jne: not equal / not zero */

loc_0026DB77: ;
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x60), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DB88; /* je: equal / zero */

loc_0026DB7F: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026DB70; /* jne: not equal / not zero */

loc_0026DB86: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026DB88: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DC4A; /* je: equal / zero */

loc_0026DB93: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0026DC4A; /* ja: above (unsigned >) */

loc_0026DB9C: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x26DC4C); /* switch: 13 entries, 13 targets */
    if (_jt == 0x0026DBA3u) goto loc_0026DBA3;
    if (_jt == 0x0026DBB0u) goto loc_0026DBB0;
    if (_jt == 0x0026DBBDu) goto loc_0026DBBD;
    if (_jt == 0x0026DBCAu) goto loc_0026DBCA;
    if (_jt == 0x0026DBD7u) goto loc_0026DBD7;
    if (_jt == 0x0026DBE4u) goto loc_0026DBE4;
    if (_jt == 0x0026DBF1u) goto loc_0026DBF1;
    if (_jt == 0x0026DBFEu) goto loc_0026DBFE;
    if (_jt == 0x0026DC0Bu) goto loc_0026DC0B;
    if (_jt == 0x0026DC18u) goto loc_0026DC18;
    if (_jt == 0x0026DC25u) goto loc_0026DC25;
    if (_jt == 0x0026DC32u) goto loc_0026DC32;
    if (_jt == 0x0026DC3Fu) goto loc_0026DC3F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0026DBA3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026DBB0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026DBBD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026DBCA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026DBD7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026DBE4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026DBF1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026DBFE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026DC0B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026DC18: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026DC25: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026DC32: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026DC3F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */

loc_0026DC4A: ;
    POP32(esp, esi);

loc_0026DC4B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026DC80
 * Original: 0x0026DC80 - 0x0026DD10 (144 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026DC80: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026DCCE; /* jne: not equal / not zero */

loc_0026DCC4: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026DCD6;

loc_0026DCCE: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026DCD6: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026DCE1u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026DCE1: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    esi = eax;
    PUSH32(esp, 0x0026DCEDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026DCED: ;
    ecx = eax;
    edx = esi;
    eax = edi;
    PUSH32(esp, 0x0026DCF8u); RECOMP_ABI_CALL(0x0026DB50u, sub_0026DB50); /* call 0x0026DB50 */

loc_0026DCF8: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026DD10
 * Original: 0x0026DD10 - 0x0026DD6B (91 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DD10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026DD10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DD6A; /* je: equal / zero */

loc_0026DD14: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DD6A; /* je: equal / zero */

loc_0026DD1B: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DD6A; /* je: equal / zero */

loc_0026DD22: ;
    PUSH32(esp, edi);

loc_0026DD23: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026DD32; /* jne: not equal / not zero */

loc_0026DD2A: ;
    edi = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(edi + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x60), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DD3B; /* je: equal / zero */

loc_0026DD32: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026DD23; /* jne: not equal / not zero */

loc_0026DD39: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0026DD3B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DD69; /* je: equal / zero */

loc_0026DD42: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0026DD69; /* ja: above (unsigned >) */

loc_0026DD47: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x26DD6C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0026DD4Eu) goto loc_0026DD4E;
    if (_jt == 0x0026DD53u) goto loc_0026DD53;
    if (_jt == 0x0026DD58u) goto loc_0026DD58;
    if (_jt == 0x0026DD5Du) goto loc_0026DD5D;
    if (_jt == 0x0026DD61u) goto loc_0026DD61;
    if (_jt == 0x0026DD66u) goto loc_0026DD66;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0026DD4E: ;
    POP32(esp, edi);
    MEM32(eax + 0x4C) = ecx;
    esp += 4; return; /* ret */

loc_0026DD53: ;
    POP32(esp, edi);
    MEM32(eax + 0x50) = ecx;
    esp += 4; return; /* ret */

loc_0026DD58: ;
    POP32(esp, edi);
    MEM32(eax + 0x54) = ecx;
    esp += 4; return; /* ret */

loc_0026DD5D: ;
    POP32(esp, edi);
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0026DD61: ;
    POP32(esp, edi);
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

loc_0026DD66: ;
    MEM32(eax + 0xC) = ecx;

loc_0026DD69: ;
    POP32(esp, edi);

loc_0026DD6A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026DD90
 * Original: 0x0026DD90 - 0x0026DDE0 (80 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DD90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026DD90: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026DDB4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026DDB4: ;
    ebx = eax;
    PUSH32(esp, 0x0026DDBBu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026DDBB: ;
    esi = eax;
    PUSH32(esp, 0x0026DDC2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026DDC2: ;
    edx = eax;
    ecx = ebx;
    eax = edi;
    PUSH32(esp, 0x0026DDCDu); RECOMP_ABI_CALL(0x0026DD10u, sub_0026DD10); /* call 0x0026DD10 */

loc_0026DDCD: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026DDE0
 * Original: 0x0026DDE0 - 0x0026DE39 (89 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026DDE0: ;
    PUSH32(esp, 0x0026DDE5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026DDE5: ;
    edx = MEM32(0x64D880);
    ecx = eax;
    eax = MEM32(0x64D884);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D884) = edx;
    edx = MEM32(0x64D878);
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026DE31; /* je: equal / zero */

loc_0026DE0E: ;
    edi = edi;

loc_0026DE10: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DE26; /* je: equal / zero */

loc_0026DE17: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026DE10; /* jne: not equal / not zero */

loc_0026DE1E: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026DE26: ;
    edx = MEM32(eax + 8);
    MEM32(edx + 0x14) = ecx;
    PUSH32(esp, 0x0026DE31u); RECOMP_ABI_CALL(0x00054230u, sub_00054230); /* call 0x00054230 */

loc_0026DE31: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026DE40
 * Original: 0x0026DE40 - 0x0026DEB7 (119 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026DE40: ;
    edx = MEM32(eax + 0x18);
    eax = MEM32(edx + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DEB3; /* je: equal / zero */

loc_0026DE4D: ;
    PUSH32(esp, esi);
    edi = edi;

loc_0026DE50: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DE63; /* je: equal / zero */

loc_0026DE57: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026DE50; /* jne: not equal / not zero */

loc_0026DE5E: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026DE63: ;
    eax = MEM32(eax + 8);
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x14) (32-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_0026DEB2; /* jge: greater or equal (signed >=) */

loc_0026DE85: ;
    edx = MEM32(esp + 0x20);
    esi = MEM32(eax + 0x18);
    PUSH32(esp, 6);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    ecx = ecx + ecx * 2;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0026DEAFu); RECOMP_ABI_CALL(0x000C5030u, sub_000C5030); /* call 0x000C5030 */

loc_0026DEAF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026DEB2: ;
    POP32(esp, esi);

loc_0026DEB3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026DEC0
 * Original: 0x0026DEC0 - 0x0026DFAE (238 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DEC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026DEC0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = MEM32(0x64D854);
    ecx = MEM32(eax + 0x6270B8);
    edx = MEM32(eax + 0x6270BC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = ecx;
    ecx = MEM32(eax + 0x6270E0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 0x6270D8);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 0x6270DC);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 0x6270E0);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 0x6270E0);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x6270DC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 0x6270D8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0x6270E0);
    MEM32(0x64D858) = ecx;
    ecx = MEM32(eax + 0x6270DC);
    esi = MEM32(0x64D884);
    MEM32(0x64D854) = eax;
    eax = MEM32(0x64D880);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(0x64D878);
    edx = esp + 4;
    PUSH32(esp, edx);
    MEM32(0x64D884) = eax;
    eax = esp + 0x14;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026DF96u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026DF96: ;
    ecx = eax;
    eax = esi;
    PUSH32(esp, 0x0026DF9Fu); RECOMP_ABI_CALL(0x0026DE40u, sub_0026DE40); /* call 0x0026DE40 */

loc_0026DF9F: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026DEC9
 * Original: 0x0026DEC9 - 0x0026DFAE (229 bytes, 55 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DEC9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026DEC9: ;
    ecx = MEM32(eax + 0x6270B8);
    edx = MEM32(eax + 0x6270BC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = ecx;
    ecx = MEM32(eax + 0x6270E0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 0x6270D8);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 0x6270DC);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 0x6270E0);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 0x6270E0);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x6270DC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 0x6270D8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0x6270E0);
    MEM32(0x64D858) = ecx;
    ecx = MEM32(eax + 0x6270DC);
    esi = MEM32(0x64D884);
    MEM32(0x64D854) = eax;
    eax = MEM32(0x64D880);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(0x64D878);
    edx = esp + 4;
    PUSH32(esp, edx);
    MEM32(0x64D884) = eax;
    eax = esp + 0x14;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026DF96u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026DF96: ;
    ecx = eax;
    eax = esi;
    PUSH32(esp, 0x0026DF9Fu); RECOMP_ABI_CALL(0x0026DE40u, sub_0026DE40); /* call 0x0026DE40 */

loc_0026DF9F: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026DFB0
 * Original: 0x0026DFB0 - 0x0026E01E (110 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026DFB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0026DFB6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026DFB6: ;
    esi = eax;
    PUSH32(esp, 0x0026DFBDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026DFBD: ;
    ecx = MEM32(0x64D884);
    edx = MEM32(0x64D880);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x64D884) = edx;
    edx = MEM32(0x64D878);
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026E015; /* je: equal / zero */

loc_0026DFE5: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DFFC; /* je: equal / zero */

loc_0026DFEC: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026DFE5; /* jne: not equal / not zero */

loc_0026DFF3: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026DFFC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = MEM32(ecx + 8);
    if (CMP_L(_fas, _fbs)) goto loc_0026E015; /* jl: less (signed <) */

loc_0026E003: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x14) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E015; /* jge: greater or equal (signed >=) */

loc_0026E008: ;
    ecx = MEM32(ecx + 0x18);
    eax = eax + eax * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + eax + 0x50) = esi;

loc_0026E015: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026E020
 * Original: 0x0026E020 - 0x0026E0B4 (148 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026E020: ;
    PUSH32(esp, 0x0026E025u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E025: ;
    ecx = MEM32(0x64D884);
    edx = MEM32(0x64D880);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x64D884) = edx;
    edx = MEM32(0x64D878);
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026E05E; /* je: equal / zero */

loc_0026E04D: ;
    /* nop */

loc_0026E050: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E09D; /* je: equal / zero */

loc_0026E057: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E050; /* jne: not equal / not zero */

loc_0026E05E: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0026E060: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026E09D: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x14) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E05E; /* jge: greater or equal (signed >=) */

loc_0026E0A5: ;
    ecx = MEM32(ecx + 0x18);
    eax = eax + eax * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ecx + eax + 0x50);
    goto loc_0026E060;

}

/**
 * sub_0026E0C0
 * Original: 0x0026E0C0 - 0x0026E145 (133 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026E0C0: ;
    eax = MEM32(0x64D854);
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = esi;
    esi = MEM32(eax + 0x6270D8);
    MEM32(0x64D854) = eax;
    PUSH32(esp, 0x0026E0E6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E0E6: ;
    ecx = MEM32(0x64D884);
    edx = MEM32(0x64D880);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x64D884) = edx;
    edx = MEM32(0x64D878);
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026E13C; /* je: equal / zero */

loc_0026E10E: ;
    edi = edi;

loc_0026E110: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E127; /* je: equal / zero */

loc_0026E117: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E110; /* jne: not equal / not zero */

loc_0026E11E: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026E127: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x14) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E13C; /* jge: greater or equal (signed >=) */

loc_0026E12F: ;
    ecx = MEM32(ecx + 0x18);
    eax = eax + eax * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + eax + 0x54) = esi;

loc_0026E13C: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026E150
 * Original: 0x0026E150 - 0x0026E1C7 (119 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026E150: ;
    PUSH32(esp, 0x0026E155u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E155: ;
    ecx = MEM32(0x64D884);
    edx = MEM32(0x64D880);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x64D884) = edx;
    edx = MEM32(0x64D878);
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026E18E; /* je: equal / zero */

loc_0026E17D: ;
    /* nop */

loc_0026E180: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E1A1; /* je: equal / zero */

loc_0026E187: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E180; /* jne: not equal / not zero */

loc_0026E18E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026E196u); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_0026E196: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026E1A1: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x14) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E18E; /* jge: greater or equal (signed >=) */

loc_0026E1A9: ;
    ecx = MEM32(ecx + 0x18);
    eax = eax + eax * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ecx + eax + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026E1BCu); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_0026E1BC: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026E1D0
 * Original: 0x0026E1D0 - 0x0026E241 (113 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026E1D0: ;
    PUSH32(esp, 0x0026E1D5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E1D5: ;
    ecx = MEM32(0x64D884);
    edx = MEM32(0x64D880);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x64D884) = edx;
    edx = MEM32(0x64D878);
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026E20E; /* je: equal / zero */

loc_0026E1FD: ;
    /* nop */

loc_0026E200: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E221; /* je: equal / zero */

loc_0026E207: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E200; /* jne: not equal / not zero */

loc_0026E20E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026E216u); RECOMP_ABI_CALL(0x001080C0u, sub_001080C0); /* call 0x001080C0 */

loc_0026E216: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026E221: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026E20E; /* jl: less (signed <) */

loc_0026E225: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0026E20E; /* jg: greater (signed >) */

loc_0026E22A: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx + eax * 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026E236u); RECOMP_ABI_CALL(0x001080C0u, sub_001080C0); /* call 0x001080C0 */

loc_0026E236: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026E250
 * Original: 0x0026E250 - 0x0026E32F (223 bytes, 53 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026E250: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E27A; /* je: equal / zero */

loc_0026E25C: ;
    PUSH32(esp, edi);
    /* nop */

loc_0026E260: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E272; /* jne: not equal / not zero */

loc_0026E267: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x1C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C0), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E279; /* je: equal / zero */

loc_0026E272: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E260; /* jne: not equal / not zero */

loc_0026E279: ;
    POP32(esp, edi);

loc_0026E27A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0026E32E; /* ja: above (unsigned >) */

loc_0026E283: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x26E330); /* switch: 12 entries, 12 targets */
    if (_jt == 0x0026E28Au) goto loc_0026E28A;
    if (_jt == 0x0026E299u) goto loc_0026E299;
    if (_jt == 0x0026E2A8u) goto loc_0026E2A8;
    if (_jt == 0x0026E2B7u) goto loc_0026E2B7;
    if (_jt == 0x0026E2C6u) goto loc_0026E2C6;
    if (_jt == 0x0026E2D5u) goto loc_0026E2D5;
    if (_jt == 0x0026E2E4u) goto loc_0026E2E4;
    if (_jt == 0x0026E2F3u) goto loc_0026E2F3;
    if (_jt == 0x0026E302u) goto loc_0026E302;
    if (_jt == 0x0026E311u) goto loc_0026E311;
    if (_jt == 0x0026E320u) goto loc_0026E320;
    if (_jt == 0x0026E32Eu) goto loc_0026E32E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0026E28A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x84) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0026E299: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x8C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0026E2A8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x16C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0026E2B7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x174) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0026E2C6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x17C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0026E2D5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x1A4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0026E2E4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x188) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0026E2F3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x190) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0026E302: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x18C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0026E311: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x1AC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0026E320: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x1A0) = xmm0.f[0]; /* movss */

loc_0026E32E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026E360
 * Original: 0x0026E360 - 0x0026E3F0 (144 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026E360: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0026E390; /* jne: not equal / not zero */

loc_0026E386: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_0026E398;

loc_0026E390: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_0026E398: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026E3A5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E3A5: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x64D878);
    edi = MEM32(0x64D884);
    esi = eax;
    eax = MEM32(0x64D880);
    PUSH32(esp, edx);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026E3CDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E3CD: ;
    edx = eax;
    eax = edi;
    PUSH32(esp, 0x0026E3D6u); RECOMP_ABI_CALL(0x0026E250u, sub_0026E250); /* call 0x0026E250 */

loc_0026E3D6: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026E3F0
 * Original: 0x0026E3F0 - 0x0026E4D3 (227 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E3F0(void)
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

loc_0026E3F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E41A; /* je: equal / zero */

loc_0026E3FD: ;
    PUSH32(esp, edi);
    edi = edi;

loc_0026E400: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E412; /* jne: not equal / not zero */

loc_0026E407: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x1C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C0), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E419; /* je: equal / zero */

loc_0026E412: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E400; /* jne: not equal / not zero */

loc_0026E419: ;
    POP32(esp, edi);

loc_0026E41A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_A(_fa, _fb)) goto loc_0026E4D1; /* ja: above (unsigned >) */

loc_0026E426: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x26E4D4); /* switch: 13 entries, 13 targets */
    if (_jt == 0x0026E42Du) goto loc_0026E42D;
    if (_jt == 0x0026E437u) goto loc_0026E437;
    if (_jt == 0x0026E441u) goto loc_0026E441;
    if (_jt == 0x0026E44Bu) goto loc_0026E44B;
    if (_jt == 0x0026E455u) goto loc_0026E455;
    if (_jt == 0x0026E45Fu) goto loc_0026E45F;
    if (_jt == 0x0026E469u) goto loc_0026E469;
    if (_jt == 0x0026E473u) goto loc_0026E473;
    if (_jt == 0x0026E47Du) goto loc_0026E47D;
    if (_jt == 0x0026E487u) goto loc_0026E487;
    if (_jt == 0x0026E491u) goto loc_0026E491;
    if (_jt == 0x0026E49Bu) goto loc_0026E49B;
    if (_jt == 0x0026E4D1u) goto loc_0026E4D1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0026E42D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x84)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E437: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x8C)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E441: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x16C)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E44B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x174)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E455: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x17C)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E45F: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1A4)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E469: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x188)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E473: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x190)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E47D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18C)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E487: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1AC)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E491: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1A0)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E49B: ;
    fp_push(MEMF(0x64D354)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x64D90C)); /* fsub dword ptr [0x64d90c] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x80)); /* fsub dword ptr [ecx + 0x80] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x84)); /* fdiv dword ptr [ecx + 0x84] */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_push(MEMD(0x3338B0)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0026E4D1; /* ja: above (unsigned >) */

loc_0026E4CC: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_0026E4D1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026E410
 * Original: 0x0026E410 - 0x0026E4D3 (195 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E410(void)
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

loc_0026E410: ;
    if (_flags /* je: equal / zero */) goto loc_0026E419;

loc_0026E412: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0026E400(); return; } /* jne: not equal / not zero */

loc_0026E419: ;
    POP32(esp, edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_A(_fa, _fb)) goto loc_0026E4D1; /* ja: above (unsigned >) */

loc_0026E426: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x26E4D4); /* switch: 13 entries, 13 targets */
    if (_jt == 0x0026E42Du) goto loc_0026E42D;
    if (_jt == 0x0026E437u) goto loc_0026E437;
    if (_jt == 0x0026E441u) goto loc_0026E441;
    if (_jt == 0x0026E44Bu) goto loc_0026E44B;
    if (_jt == 0x0026E455u) goto loc_0026E455;
    if (_jt == 0x0026E45Fu) goto loc_0026E45F;
    if (_jt == 0x0026E469u) goto loc_0026E469;
    if (_jt == 0x0026E473u) goto loc_0026E473;
    if (_jt == 0x0026E47Du) goto loc_0026E47D;
    if (_jt == 0x0026E487u) goto loc_0026E487;
    if (_jt == 0x0026E491u) goto loc_0026E491;
    if (_jt == 0x0026E49Bu) goto loc_0026E49B;
    if (_jt == 0x0026E4D1u) goto loc_0026E4D1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0026E42D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x84)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E437: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x8C)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E441: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x16C)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E44B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x174)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E455: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x17C)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E45F: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1A4)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E469: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x188)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E473: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x190)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E47D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18C)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E487: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1AC)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E491: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1A0)); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026E49B: ;
    fp_push(MEMF(0x64D354)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x64D90C)); /* fsub dword ptr [0x64d90c] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x80)); /* fsub dword ptr [ecx + 0x80] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x84)); /* fdiv dword ptr [ecx + 0x84] */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_push(MEMD(0x3338B0)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0026E4D1; /* ja: above (unsigned >) */

loc_0026E4CC: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_0026E4D1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026E454
 * Original: 0x0026E454 - 0x0026E4D3 (127 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E454(void)
{
    int _flags = 0; /* fallback flag var */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0026E454: ;
    esp += 4; return; /* ret */

    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_0026E4D1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026E510
 * Original: 0x0026E510 - 0x0026E590 (128 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026E510: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0026E517u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E517: ;
    ecx = MEM32(0x64D878);
    edi = MEM32(0x64D884);
    esi = eax;
    eax = MEM32(0x64D880);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026E53Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E53A: ;
    edx = eax;
    eax = edi;
    PUSH32(esp, 0x0026E543u); RECOMP_ABI_CALL(0x0026E3F0u, sub_0026E3F0); /* call 0x0026E3F0 */

loc_0026E543: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026E590
 * Original: 0x0026E590 - 0x0026E5CD (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026E590: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E5BA; /* je: equal / zero */

loc_0026E59C: ;
    PUSH32(esp, esi);
    /* nop */

loc_0026E5A0: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E5B2; /* jne: not equal / not zero */

loc_0026E5A7: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x1C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C0), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E5B9; /* je: equal / zero */

loc_0026E5B2: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E5A0; /* jne: not equal / not zero */

loc_0026E5B9: ;
    POP32(esp, esi);

loc_0026E5BA: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E5CC; /* jne: not equal / not zero */

loc_0026E5C2: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x90) = edx;

loc_0026E5CC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026E5D0
 * Original: 0x0026E5D0 - 0x0026E618 (72 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E5D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026E5D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0026E5D7u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E5D7: ;
    esi = eax;
    PUSH32(esp, 0x0026E5DEu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E5DE: ;
    edi = eax;
    PUSH32(esp, 0x0026E5E5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E5E5: ;
    ecx = MEM32(0x64D880);
    edx = eax;
    eax = MEM32(0x64D884);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026E60Bu); RECOMP_ABI_CALL(0x0026E590u, sub_0026E590); /* call 0x0026E590 */

loc_0026E60B: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026E620
 * Original: 0x0026E620 - 0x0026E696 (118 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026E620: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0026E649; /* je: equal / zero */

loc_0026E62D: ;
    /* nop */

loc_0026E630: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E642; /* jne: not equal / not zero */

loc_0026E637: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x1C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C0), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E649; /* je: equal / zero */

loc_0026E642: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E630; /* jne: not equal / not zero */

loc_0026E649: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0026E682; /* je: equal / zero */

loc_0026E652: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0026E66A; /* je: equal / zero */

loc_0026E655: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0026E694; /* jne: not equal / not zero */

loc_0026E658: ;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(ecx + 0x10);
    edx = edx ^ esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x10) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0026E66A: ;
    edi = MEM32(ecx + 0x10);
    eax = esi * 8;
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi;
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x10) = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0026E682: ;
    edi = MEM32(ecx + 0x10);
    edx = esi + esi;
    edx = edx ^ edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edi;
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x10) = eax;

loc_0026E694: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026E6A0
 * Original: 0x0026E6A0 - 0x0026E6E7 (71 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E6A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026E6A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0026E6A7u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E6A7: ;
    esi = eax;
    PUSH32(esp, 0x0026E6AEu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E6AE: ;
    edi = eax;
    PUSH32(esp, 0x0026E6B5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E6B5: ;
    ecx = MEM32(0x64D880);
    edx = eax;
    eax = MEM32(0x64D884);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D878);
    PUSH32(esp, edi);
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026E6DAu); RECOMP_ABI_CALL(0x0026E620u, sub_0026E620); /* call 0x0026E620 */

loc_0026E6DA: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026E6F0
 * Original: 0x0026E6F0 - 0x0026E765 (117 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E6F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026E6F0: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E764; /* je: equal / zero */

loc_0026E6FC: ;
    PUSH32(esp, edi);
    /* nop */

loc_0026E700: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E712; /* jne: not equal / not zero */

loc_0026E707: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x1C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C0), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E719; /* je: equal / zero */

loc_0026E712: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E700; /* jne: not equal / not zero */

loc_0026E719: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0026E764; /* je: equal / zero */

loc_0026E71E: ;
    eax = MEM32(ecx);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0026E730; /* je: equal / zero */

loc_0026E725: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0026E764; /* jne: not equal / not zero */

loc_0026E728: ;
    MEM32(ecx + 0x10) = 1;
    esp += 4; return; /* ret */

loc_0026E730: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0026E764; /* ja: above (unsigned >) */

loc_0026E735: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x26E768); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0026E73Cu) goto loc_0026E73C;
    if (_jt == 0x0026E744u) goto loc_0026E744;
    if (_jt == 0x0026E74Fu) goto loc_0026E74F;
    if (_jt == 0x0026E75Au) goto loc_0026E75A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0026E73C: ;
    MEM32(ecx + 0x14) = 1;
    esp += 4; return; /* ret */

loc_0026E744: ;
    MEM32(ecx + 0x168) = 1;
    esp += 4; return; /* ret */

loc_0026E74F: ;
    MEM32(ecx + 0x1A8) = 1;
    esp += 4; return; /* ret */

loc_0026E75A: ;
    MEM32(ecx + 0x1A8) = 3;

loc_0026E764: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026E780
 * Original: 0x0026E780 - 0x0026E7C0 (64 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026E780: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0026E786u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E786: ;
    esi = eax;
    PUSH32(esp, 0x0026E78Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E78D: ;
    ecx = MEM32(0x64D880);
    edx = eax;
    eax = MEM32(0x64D884);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D878);
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026E7B1u); RECOMP_ABI_CALL(0x0026E6F0u, sub_0026E6F0); /* call 0x0026E6F0 */

loc_0026E7B1: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026E7C0
 * Original: 0x0026E7C0 - 0x0026E7FA (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026E7C0: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E7EA; /* je: equal / zero */

loc_0026E7CC: ;
    PUSH32(esp, esi);
    /* nop */

loc_0026E7D0: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E7E2; /* jne: not equal / not zero */

loc_0026E7D7: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x1C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C0), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E7E9; /* je: equal / zero */

loc_0026E7E2: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E7D0; /* jne: not equal / not zero */

loc_0026E7E9: ;
    POP32(esp, esi);

loc_0026E7EA: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E7F9; /* jne: not equal / not zero */

loc_0026E7F2: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x24) = edx;

loc_0026E7F9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026E800
 * Original: 0x0026E800 - 0x0026E862 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026E800: ;
    eax = MEM32(0x64D854);
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = esi;
    esi = MEM32(eax + 0x6270D8);
    PUSH32(esp, edi);
    MEM32(0x64D854) = eax;
    PUSH32(esp, 0x0026E827u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E827: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    edi = MEM32(0x64D884);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026E84Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E84C: ;
    edx = eax;
    eax = edi;
    PUSH32(esp, 0x0026E855u); RECOMP_ABI_CALL(0x0026E7C0u, sub_0026E7C0); /* call 0x0026E7C0 */

loc_0026E855: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026E870
 * Original: 0x0026E870 - 0x0026E8E4 (116 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026E870: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E89A; /* je: equal / zero */

loc_0026E87F: ;
    PUSH32(esp, esi);

loc_0026E880: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E892; /* jne: not equal / not zero */

loc_0026E887: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x1C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C0), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E899; /* je: equal / zero */

loc_0026E892: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E880; /* jne: not equal / not zero */

loc_0026E899: ;
    POP32(esp, esi);

loc_0026E89A: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0026E8E0; /* jne: not equal / not zero */

loc_0026E8BB: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 6);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0026E8DDu); RECOMP_ABI_CALL(0x000C5030u, sub_000C5030); /* call 0x000C5030 */

loc_0026E8DD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026E8E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026E8F0
 * Original: 0x0026E8F0 - 0x0026E9E5 (245 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E8F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026E8F0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D854);
    ecx = MEM32(eax + 0x6270B8);
    edx = MEM32(eax + 0x6270BC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = ecx;
    ecx = MEM32(eax + 0x6270E0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x6270D8);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 0x6270DC);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x6270E0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 0x6270D8);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x6270DC);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 0x6270E0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 0x6270D8);
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 0x6270DC);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0x6270E0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = esi;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0x0026E995u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E995: ;
    ecx = MEM32(0x64D880);
    esi = MEM32(0x64D884);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026E9CDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026E9CD: ;
    edx = eax;
    eax = esi;
    PUSH32(esp, 0x0026E9D6u); RECOMP_ABI_CALL(0x0026E870u, sub_0026E870); /* call 0x0026E870 */

loc_0026E9D6: ;
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026E9F0
 * Original: 0x0026E9F0 - 0x0026EA03 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E9F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026E9F0: ;
    eax = MEM32(0x64D1DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026E9FBu); RECOMP_ABI_CALL(0x00015F90u, sub_00015F90); /* call 0x00015F90 */

loc_0026E9FB: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026EA10
 * Original: 0x0026EA10 - 0x0026EA2D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EA10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026EA10: ;
    PUSH32(esp, esi);
    esi = MEM32(0x64D1DC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0026EA1Du); RECOMP_ABI_CALL(0x00016210u, sub_00016210); /* call 0x00016210 */

loc_0026EA1D: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x3C) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026EA30
 * Original: 0x0026EA30 - 0x0026EA43 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EA30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026EA30: ;
    eax = MEM32(0x64D1DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026EA3Bu); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_0026EA3B: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026EA50
 * Original: 0x0026EA50 - 0x0026EA63 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EA50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026EA50: ;
    eax = MEM32(0x64D1DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026EA5Bu); RECOMP_ABI_CALL(0x00016B60u, sub_00016B60); /* call 0x00016B60 */

loc_0026EA5B: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026EA70
 * Original: 0x0026EA70 - 0x0026EA8A (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026EA70: ;
    eax = MEM32(0x64D1DC);
    _fa = (uint32_t)(MEM32(eax + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3C), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026EA82; /* jne: not equal / not zero */

loc_0026EA7B: ;
    MEM32(eax + 0x3C) = 4;

loc_0026EA82: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026EA90
 * Original: 0x0026EA90 - 0x0026EAE8 (88 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026EA90: ;
    eax = MEM32(0x64D1DC);
    eax = MEM32(eax + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026EAA6; /* je: equal / zero */

loc_0026EA9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026EAA6; /* je: equal / zero */

loc_0026EAA2: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0026EAAB;

loc_0026EAA6: ;
    edx = 1;

loc_0026EAAB: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026EAF0
 * Original: 0x0026EAF0 - 0x0026EB47 (87 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026EAF0: ;
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D1DC);
    edx = MEM32(ecx + 0x48);
    MEM32(0x64D884) = eax;
    eax = MEM32(ecx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026EB3E; /* je: equal / zero */

loc_0026EB1D: ;
    /* nop */

loc_0026EB20: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x38), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026EB37; /* je: equal / zero */

loc_0026EB27: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026EB20; /* jne: not equal / not zero */

loc_0026EB2E: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026EB37: ;
    MEM32(ecx + 0x44) = 1;

loc_0026EB3E: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026EB50
 * Original: 0x0026EB50 - 0x0026EB96 (70 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EB50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026EB50: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(0x64D1DC);
    edx = MEM32(edx + 0x20);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026EBA0
 * Original: 0x0026EBA0 - 0x0026EBF9 (89 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026EBA0: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0026EBDF; /* jne: not equal / not zero */

loc_0026EBC5: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    eax = MEM32(0x64D1DC);
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026EBDF: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */
    eax = MEM32(0x64D1DC);
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026EC00
 * Original: 0x0026EC00 - 0x0026EC4C (76 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EC00(void)
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

loc_0026EC00: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(0x64D1DC);
    fp_push((double)SMEM64(edx + 0x30)); /* fild */
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x33379C)); /* fmul dword ptr [0x33379c] */
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM16(ecx * 8 + 0x616FD8) = 2;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026EC50
 * Original: 0x0026EC50 - 0x0026EC8A (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026EC50: ;
    ecx = MEM32(0x64D1DC);
    edx = MEM32(ecx + 0x44);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026EC69; /* je: equal / zero */

loc_0026EC5D: ;
    eax = MEM32(ecx + 0x48);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026EC71; /* jne: not equal / not zero */

loc_0026EC69: ;
    MEM32(ecx + 0x3C) = 0;
    esp += 4; return; /* ret */

loc_0026EC71: ;
    eax = MEM32(0x64D9F0);
    MEM32(ecx + 8) = eax;
    edx = MEM32(0x64D9F4);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x3C) = 5;
    esp += 4; return; /* ret */

}

/**
 * sub_0026EC90
 * Original: 0x0026EC90 - 0x0026ECD8 (72 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026EC90: ;
    ecx = MEM32(0x64D1DC);
    edx = MEM32(ecx + 0x44);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026ECA9; /* je: equal / zero */

loc_0026EC9D: ;
    eax = MEM32(ecx + 0x48);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026ECB8; /* jne: not equal / not zero */

loc_0026ECA9: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3C) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026ECB8: ;
    eax = MEM32(0x64D9F0);
    MEM32(ecx + 8) = eax;
    edx = MEM32(0x64D9F4);
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x3C) = 5;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026ECE0
 * Original: 0x0026ECE0 - 0x0026ECF2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026ECE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026ECE0: ;
    eax = MEM32(0x64D1DC);
    PUSH32(esp, 0x0026ECEAu); RECOMP_ABI_CALL(0x00016860u, sub_00016860); /* call 0x00016860 */

loc_0026ECEA: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026ED00
 * Original: 0x0026ED00 - 0x0026ED79 (121 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026ED00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0026ED00: ;
    PUSH32(esp, 0x0026ED05u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026ED05: ;
    edx = MEM32(0x64D880);
    ecx = MEM32(0x64D884);
    ecx = MEM32(ecx + 0x18);
    MEM32(0x64D884) = edx;
    edx = MEM32(0x64D878);
    MEM32(0x64D87C) = edx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0026ED32; /* je: equal / zero */

loc_0026ED2C: ;
    SET_LO16(edx, MEM16(ecx + 0x2E));
    _cf = 0; /* logical op clears CF */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0026ED32: ;
    edx = ZX16(LO16(edx));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    PUSH32(esp, esi);
    esi = MEM32(0x64D854);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = esi + 0x6270D8;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x20)) >> 32) & 1);
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = esi;
    MEM32(ecx) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026ED80
 * Original: 0x0026ED80 - 0x0026EDBD (61 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026ED80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0026ED80: ;
    edx = MEM32(0x64D1DC);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(edx + 0x38) = 1;
    MEM32(edx + 0x30) = eax;
    MEM32(edx + 0x34) = eax;
    ecx = MEM32(0x64D9F0);
    esi = MEM32(0x64D9F4);
    _fb = (uint32_t)(0x411A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x411A)) >> 32) & 1);
    ecx = ecx + 0x411A;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x14);
    { uint64_t _t = (uint64_t)(esi) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); esi = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(edx) = ecx;
    MEM32(edx + 4) = esi;
    ecx = 0x12;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026EDC0
 * Original: 0x0026EDC0 - 0x0026EE04 (68 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EDC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0026EDC0: ;
    edx = MEM32(0x64D1DC);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x30) = eax;
    MEM32(edx + 0x34) = eax;
    PUSH32(esp, esi);
    MEM32(edx + 0x38) = 1;
    ecx = MEM32(0x64D9F0);
    esi = MEM32(0x64D9F4);
    _fb = (uint32_t)(0x411A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x411A)) >> 32) & 1);
    ecx = ecx + 0x411A;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x14);
    { uint64_t _t = (uint64_t)(esi) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); esi = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(edx) = ecx;
    MEM32(edx + 4) = esi;
    ecx = 0x12;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026EE10
 * Original: 0x0026EE10 - 0x0026EE8A (122 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EE10(void)
{
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

loc_0026EE10: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x20));
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0026EE40; /* jne: not equal / not zero */

loc_0026EE36: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_0026EE48;

loc_0026EE40: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_0026EE48: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3338A4)); /* fmul dword ptr [0x3338a4] */
    PUSH32(esp, 0x0026EE5Cu); RECOMP_ABI_CALL(0x0028AF78u, sub_0028AF78); /* call 0x0028AF78 */

loc_0026EE5C: ;
    esi = MEM32(0x64D1DC);
    ecx = MEM32(esi + 0x30);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x34);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0026EE7A; /* jg: greater (signed >) */

loc_0026EE70: ;
    if (CMP_L(_fas, _fbs)) goto loc_0026EE76; /* jl: less (signed <) */

loc_0026EE72: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_AE(_fa, _fb)) goto loc_0026EE7A; /* jae: above or equal (unsigned >=) */

loc_0026EE76: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0026EE7A: ;
    MEM32(esi + 0x34) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x30) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0026EE90
 * Original: 0x0026EE90 - 0x0026EEC2 (50 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EE90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026EE90: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    PUSH32(esp, esi);
    esi = MEM32(0x64D1DC);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026EEB9u); RECOMP_ABI_CALL(0x00016DF0u, sub_00016DF0); /* call 0x00016DF0 */

loc_0026EEB9: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026EED0
 * Original: 0x0026EED0 - 0x0026EEEB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026EED0: ;
    eax = MEM32(0x64D1DC);
    eax = MEM32(eax + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026EEE5; /* je: equal / zero */

loc_0026EEDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026EEE5; /* je: equal / zero */

loc_0026EEE2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0026EEE5: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0026EEF0
 * Original: 0x0026EEF0 - 0x0026EF42 (82 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026EEF0: ;
    ecx = MEM32(0x64D854);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D1DC);
    esi = MEM32(edi + 0x3C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    eax = ecx + 0x6270D8;
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = edx;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026EF50
 * Original: 0x0026EF50 - 0x0026EFDF (143 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026EF50: ;
    SET_LO8(ecx, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0026EFA5; /* je: equal / zero */

loc_0026EF5D: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026EFA5; /* je: equal / zero */

loc_0026EF66: ;
    SET_LO8(ecx, MEM8(0x33A1F0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026EFA5; /* je: equal / zero */

loc_0026EF70: ;
    ecx = MEM32(0x64CFB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026EF81; /* je: equal / zero */

loc_0026EF7A: ;
    PUSH32(esp, 0x0026EF7Fu); RECOMP_ABI_CALL(0x000D00A0u, sub_000D00A0); /* call 0x000D00A0 */

loc_0026EF7F: ;
    esi = eax;

loc_0026EF81: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026EFA5; /* je: equal / zero */

loc_0026EF85: ;
    eax = edi;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    if ((_fa == 0)) goto loc_0026EFBB; /* je: equal / zero */

loc_0026EF8D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0026EFA7; /* je: equal / zero */

loc_0026EF90: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = MEM32(0x33A1B8);
    if ((_fa != 0)) goto loc_0026EFCE; /* jne: not equal / not zero */

loc_0026EF99: ;
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0026EFA4u); RECOMP_ABI_CALL(0x000CB0A0u, sub_000CB0A0); /* call 0x000CB0A0 */

loc_0026EFA4: ;
    POP32(esp, ebx);

loc_0026EFA5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026EFA7: ;
    ebx = MEM32(0x33A1BC);
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0026EFB8u); RECOMP_ABI_CALL(0x000CB0A0u, sub_000CB0A0); /* call 0x000CB0A0 */

loc_0026EFB8: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026EFBB: ;
    ebx = MEM32(0x33A1C0);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0026EFCBu); RECOMP_ABI_CALL(0x000CB0A0u, sub_000CB0A0); /* call 0x000CB0A0 */

loc_0026EFCB: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026EFCE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026EF99; /* jne: not equal / not zero */

loc_0026EFD2: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0026EFDCu); RECOMP_ABI_CALL(0x000CB0A0u, sub_000CB0A0); /* call 0x000CB0A0 */

loc_0026EFDC: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026EFE0
 * Original: 0x0026EFE0 - 0x0026F065 (133 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EFE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026EFE0: ;
    ecx = MEM32(0x64D878);
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D880);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x64CFB8));
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D884);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026F037; /* je: equal / zero */

loc_0026F026: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F037; /* je: equal / zero */

loc_0026F02F: ;
    esi = MEM32(edx + 0x6270D8);
    goto loc_0026F039;

loc_0026F037: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0026F039: ;
    PUSH32(esp, 0x0026F03Eu); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0026F03E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026F059; /* jne: not equal / not zero */

loc_0026F045: ;
    SET_LO8(eax, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026F059; /* jne: not equal / not zero */

loc_0026F04E: ;
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0x0026F056u); RECOMP_ABI_CALL(0x0026EF50u, sub_0026EF50); /* call 0x0026EF50 */

loc_0026F056: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026F059: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026F070
 * Original: 0x0026F070 - 0x0026F108 (152 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F070: ;
    SET_LO8(ecx, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0026F103; /* je: equal / zero */

loc_0026F081: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F103; /* je: equal / zero */

loc_0026F08A: ;
    SET_LO8(ecx, MEM8(0x33A1F0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F103; /* je: equal / zero */

loc_0026F094: ;
    ecx = MEM32(0x64CFB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F0A5; /* je: equal / zero */

loc_0026F09E: ;
    PUSH32(esp, 0x0026F0A3u); RECOMP_ABI_CALL(0x000D00A0u, sub_000D00A0); /* call 0x000D00A0 */

loc_0026F0A3: ;
    esi = eax;

loc_0026F0A5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F103; /* je: equal / zero */

loc_0026F0A9: ;
    eax = edi;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    if ((_fa == 0)) goto loc_0026F0DF; /* je: equal / zero */

loc_0026F0B1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0026F0CB; /* je: equal / zero */

loc_0026F0B4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = MEM32(0x33A1B8);
    if ((_fa != 0)) goto loc_0026F0F2; /* jne: not equal / not zero */

loc_0026F0BD: ;
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0026F0C8u); RECOMP_ABI_CALL(0x000CB0A0u, sub_000CB0A0); /* call 0x000CB0A0 */

loc_0026F0C8: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026F0CB: ;
    ebx = MEM32(0x33A1BC);
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0026F0DCu); RECOMP_ABI_CALL(0x000CB0A0u, sub_000CB0A0); /* call 0x000CB0A0 */

loc_0026F0DC: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026F0DF: ;
    ebx = MEM32(0x33A1C0);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0026F0EFu); RECOMP_ABI_CALL(0x000CB0A0u, sub_000CB0A0); /* call 0x000CB0A0 */

loc_0026F0EF: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026F0F2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026F0BD; /* jne: not equal / not zero */

loc_0026F0F6: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0026F100u); RECOMP_ABI_CALL(0x000CB0A0u, sub_000CB0A0); /* call 0x000CB0A0 */

loc_0026F100: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026F103: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026F110
 * Original: 0x0026F110 - 0x0026F1B7 (167 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026F110: ;
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    edx = MEM32(0x64D854);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D884);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D884) = eax;
    SET_LO8(eax, MEM8(0x64CFB8));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026F165; /* je: equal / zero */

loc_0026F154: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F165; /* je: equal / zero */

loc_0026F15D: ;
    esi = MEM32(edx + 0x6270D8);
    goto loc_0026F167;

loc_0026F165: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0026F167: ;
    PUSH32(esp, 0x0026F16Cu); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0026F16C: ;
    edi = eax;
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0x0026F176u); RECOMP_ABI_CALL(0x0026F070u, sub_0026F070); /* call 0x0026F070 */

loc_0026F176: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0026F1C0
 * Original: 0x0026F1C0 - 0x0026F236 (118 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F1C0: ;
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    edx = MEM32(0x64D854);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D884);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D884) = eax;
    SET_LO8(eax, MEM8(0x64CFB8));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026F215; /* je: equal / zero */

loc_0026F204: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F215; /* je: equal / zero */

loc_0026F20D: ;
    esi = MEM32(edx + 0x6270D8);
    goto loc_0026F217;

loc_0026F215: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0026F217: ;
    PUSH32(esp, 0x0026F21Cu); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0026F21C: ;
    edi = eax;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0x0026F228u); RECOMP_ABI_CALL(0x00026B40u, sub_00026B40); /* call 0x00026B40 */

loc_0026F228: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026F240
 * Original: 0x0026F240 - 0x0026F29F (95 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0026F240: ;
    SET_LO8(eax, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F25F; /* je: equal / zero */

loc_0026F249: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0026F25F; /* je: equal / zero */

loc_0026F252: ;
    PUSH32(esp, 0x0026F257u); RECOMP_ABI_CALL(0x000CBDA0u, sub_000CBDA0); /* call 0x000CBDA0 */

loc_0026F257: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0026F264;

loc_0026F25F: ;
    eax = 1;

loc_0026F264: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x20)) >> 32) & 1);
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026F2A0
 * Original: 0x0026F2A0 - 0x0026F2CA (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F2A0: ;
    PUSH32(esp, 0x0026F2A5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026F2A5: ;
    SET_LO8(eax, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F2C2; /* je: equal / zero */

loc_0026F2AE: ;
    SET_LO8(ecx, MEM8(0x64CFB9));
    eax = 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F2C2; /* je: equal / zero */

loc_0026F2BD: ;
    PUSH32(esp, 0x0026F2C2u); RECOMP_ABI_CALL(0x000CBD90u, sub_000CBD90); /* call 0x000CBD90 */

loc_0026F2C2: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026F2D0
 * Original: 0x0026F2D0 - 0x0026F2EF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F2D0: ;
    SET_LO8(eax, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F2E7; /* je: equal / zero */

loc_0026F2D9: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F2E7; /* je: equal / zero */

loc_0026F2E2: ;
    PUSH32(esp, 0x0026F2E7u); RECOMP_ABI_CALL(0x000CB800u, sub_000CB800); /* call 0x000CB800 */

loc_0026F2E7: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026F2F0
 * Original: 0x0026F2F0 - 0x0026F31C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F2F0: ;
    SET_LO8(eax, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F314; /* je: equal / zero */

loc_0026F2F9: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F314; /* je: equal / zero */

loc_0026F302: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0026F308u); RECOMP_ABI_CALL(0x000CB850u, sub_000CB850); /* call 0x000CB850 */

loc_0026F308: ;
    edi = MEM32(0x64D204);
    PUSH32(esp, 0x0026F313u); RECOMP_ABI_CALL(0x000274C0u, sub_000274C0); /* call 0x000274C0 */

loc_0026F313: ;
    POP32(esp, edi);

loc_0026F314: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026F320
 * Original: 0x0026F320 - 0x0026F3A6 (134 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F320: ;
    PUSH32(esp, 0x0026F325u); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0026F325: ;
    SET_LO8(ecx, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F364; /* je: equal / zero */

loc_0026F32F: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F364; /* je: equal / zero */

loc_0026F338: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0026F358; /* je: equal / zero */

loc_0026F33D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0026F34C; /* je: equal / zero */

loc_0026F340: ;
    eax = MEM32(0x33A1D0);
    PUSH32(esp, 0x0026F34Au); RECOMP_ABI_CALL(0x000CB760u, sub_000CB760); /* call 0x000CB760 */

loc_0026F34A: ;
    goto loc_0026F367;

loc_0026F34C: ;
    eax = MEM32(0x33A1CC);
    PUSH32(esp, 0x0026F356u); RECOMP_ABI_CALL(0x000CB760u, sub_000CB760); /* call 0x000CB760 */

loc_0026F356: ;
    goto loc_0026F367;

loc_0026F358: ;
    eax = MEM32(0x33A1D4);
    PUSH32(esp, 0x0026F362u); RECOMP_ABI_CALL(0x000CB760u, sub_000CB760); /* call 0x000CB760 */

loc_0026F362: ;
    goto loc_0026F367;

loc_0026F364: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0026F367: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026F3B0
 * Original: 0x0026F3B0 - 0x0026F407 (87 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F3B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0026F3E0; /* jne: not equal / not zero */

loc_0026F3D6: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_0026F3E8;

loc_0026F3E0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_0026F3E8: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026F3F2u); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0026F3F2: ;
    ecx = MEM32(esp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026F3FCu); RECOMP_ABI_CALL(0x00026DC0u, sub_00026DC0); /* call 0x00026DC0 */

loc_0026F3FC: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026F410
 * Original: 0x0026F410 - 0x0026F47D (109 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F410: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026F432u); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0026F432: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x0026F43Au); RECOMP_ABI_CALL(0x00026E20u, sub_00026E20); /* call 0x00026E20 */

loc_0026F43A: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026F480
 * Original: 0x0026F480 - 0x0026F4CE (78 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F480(void)
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

loc_0026F480: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026F4A3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026F4A3: ;
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0026F4B4u); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0026F4B4: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x0026F4C1u); RECOMP_ABI_CALL(0x00026E80u, sub_00026E80); /* call 0x00026E80 */

loc_0026F4C1: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0026F4D0
 * Original: 0x0026F4D0 - 0x0026F51D (77 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F4D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F4D0: ;
    PUSH32(esp, 0x0026F4D5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026F4D5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026F4DBu); RECOMP_ABI_CALL(0x00026F50u, sub_00026F50); /* call 0x00026F50 */

loc_0026F4DB: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026F520
 * Original: 0x0026F520 - 0x0026F576 (86 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F520: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0026F550; /* jne: not equal / not zero */

loc_0026F546: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_0026F558;

loc_0026F550: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_0026F558: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026F562u); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0026F562: ;
    ecx = MEM32(esp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026F56Bu); RECOMP_ABI_CALL(0x00026FA0u, sub_00026FA0); /* call 0x00026FA0 */

loc_0026F56B: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026F580
 * Original: 0x0026F580 - 0x0026F5E7 (103 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F580: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026F5B4; /* jne: not equal / not zero */

loc_0026F5AA: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026F5BC;

loc_0026F5B4: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026F5BC: ;
    SET_LO8(eax, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F5DE; /* je: equal / zero */

loc_0026F5CA: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F5DE; /* je: equal / zero */

loc_0026F5D2: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026F5DBu); RECOMP_ABI_CALL(0x000CADD0u, sub_000CADD0); /* call 0x000CADD0 */

loc_0026F5DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026F5DE: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026F5F0
 * Original: 0x0026F5F0 - 0x0026F685 (149 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F5F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026F5F6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026F5F6: ;
    edx = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026F61B; /* jne: not equal / not zero */

loc_0026F611: ;
    xmm1.f[0] = (float)(int32_t)MEM32(edx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026F623;

loc_0026F61B: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 0x6270D8)); /* movss */

loc_0026F623: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0026F648; /* jne: not equal / not zero */

loc_0026F63E: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026F650;

loc_0026F648: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6270D8)); /* movss */

loc_0026F650: ;
    SET_LO8(ecx, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F67C; /* je: equal / zero */

loc_0026F65F: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F67C; /* je: equal / zero */

loc_0026F668: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0026F678u); RECOMP_ABI_CALL(0x000CBC10u, sub_000CBC10); /* call 0x000CBC10 */

loc_0026F678: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_0026F67C: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026F690
 * Original: 0x0026F690 - 0x0026F6DB (75 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0026F690: ;
    PUSH32(esp, 0x0026F695u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026F695: ;
    SET_LO8(ecx, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F6C8; /* je: equal / zero */

loc_0026F69F: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0026F6C8; /* je: equal / zero */

loc_0026F6A8: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0x0026F6B0u); RECOMP_ABI_CALL(0x000D1FB0u, sub_000D1FB0); /* call 0x000D1FB0 */

loc_0026F6B0: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026F6BDu); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_0026F6BD: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026F6C8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026F6D0u); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_0026F6D0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026F6E0
 * Original: 0x0026F6E0 - 0x0026F73D (93 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F6E0: ;
    PUSH32(esp, 0x0026F6E5u); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0026F6E5: ;
    SET_LO8(ecx, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F735; /* je: equal / zero */

loc_0026F6EF: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F735; /* je: equal / zero */

loc_0026F6F8: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    if ((_fa == 0)) goto loc_0026F729; /* je: equal / zero */

loc_0026F6FE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0026F715; /* je: equal / zero */

loc_0026F701: ;
    esi = MEM32(0x33A1B8);
    PUSH32(esp, 0x0026F70Cu); RECOMP_ABI_CALL(0x000CB2E0u, sub_000CB2E0); /* call 0x000CB2E0 */

loc_0026F70C: ;
    eax = MEM32(esp + 8);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026F715: ;
    esi = MEM32(0x33A1BC);
    PUSH32(esp, 0x0026F720u); RECOMP_ABI_CALL(0x000CB2E0u, sub_000CB2E0); /* call 0x000CB2E0 */

loc_0026F720: ;
    eax = MEM32(esp + 8);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026F729: ;
    esi = MEM32(0x33A1C0);
    PUSH32(esp, 0x0026F734u); RECOMP_ABI_CALL(0x000CB2E0u, sub_000CB2E0); /* call 0x000CB2E0 */

loc_0026F734: ;
    POP32(esp, esi);

loc_0026F735: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026F740
 * Original: 0x0026F740 - 0x0026F7C2 (130 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F740: ;
    PUSH32(esp, 0x0026F745u); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0026F745: ;
    SET_LO8(ecx, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F784; /* je: equal / zero */

loc_0026F74F: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F784; /* je: equal / zero */

loc_0026F758: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0026F76F; /* je: equal / zero */

loc_0026F75D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0026F768; /* je: equal / zero */

loc_0026F760: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(0x33A1B8);
    goto loc_0026F774;

loc_0026F768: ;
    eax = MEM32(0x33A1BC);
    goto loc_0026F774;

loc_0026F76F: ;
    eax = MEM32(0x33A1C0);

loc_0026F774: ;
    PUSH32(esp, 0x0026F779u); RECOMP_ABI_CALL(0x000CB0F0u, sub_000CB0F0); /* call 0x000CB0F0 */

loc_0026F779: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F784; /* je: equal / zero */

loc_0026F77D: ;
    PUSH32(esp, 0x0026F782u); RECOMP_ABI_CALL(0x000D0270u, sub_000D0270); /* call 0x000D0270 */

loc_0026F782: ;
    goto loc_0026F787;

loc_0026F784: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0026F787: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026F7D0
 * Original: 0x0026F7D0 - 0x0026F806 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F7D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F7D0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026F7F2u); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0026F7F2: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x0026F7FAu); RECOMP_ABI_CALL(0x00026EF0u, sub_00026EF0); /* call 0x00026EF0 */

loc_0026F7FA: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026F810
 * Original: 0x0026F810 - 0x0026F86D (93 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F810: ;
    PUSH32(esp, 0x0026F815u); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0026F815: ;
    SET_LO8(ecx, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F865; /* je: equal / zero */

loc_0026F81F: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F865; /* je: equal / zero */

loc_0026F828: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_0026F859; /* je: equal / zero */

loc_0026F82E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0026F845; /* je: equal / zero */

loc_0026F831: ;
    edi = MEM32(0x33A1B8);
    PUSH32(esp, 0x0026F83Cu); RECOMP_ABI_CALL(0x000CB940u, sub_000CB940); /* call 0x000CB940 */

loc_0026F83C: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026F845: ;
    edi = MEM32(0x33A1BC);
    PUSH32(esp, 0x0026F850u); RECOMP_ABI_CALL(0x000CB940u, sub_000CB940); /* call 0x000CB940 */

loc_0026F850: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026F859: ;
    edi = MEM32(0x33A1C0);
    PUSH32(esp, 0x0026F864u); RECOMP_ABI_CALL(0x000CB940u, sub_000CB940); /* call 0x000CB940 */

loc_0026F864: ;
    POP32(esp, edi);

loc_0026F865: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026F870
 * Original: 0x0026F870 - 0x0026F8CD (93 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F870: ;
    PUSH32(esp, 0x0026F875u); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0026F875: ;
    SET_LO8(ecx, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F8C5; /* je: equal / zero */

loc_0026F87F: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F8C5; /* je: equal / zero */

loc_0026F888: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_0026F8B9; /* je: equal / zero */

loc_0026F88E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0026F8A5; /* je: equal / zero */

loc_0026F891: ;
    edi = MEM32(0x33A1B8);
    PUSH32(esp, 0x0026F89Cu); RECOMP_ABI_CALL(0x000CB990u, sub_000CB990); /* call 0x000CB990 */

loc_0026F89C: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026F8A5: ;
    edi = MEM32(0x33A1BC);
    PUSH32(esp, 0x0026F8B0u); RECOMP_ABI_CALL(0x000CB990u, sub_000CB990); /* call 0x000CB990 */

loc_0026F8B0: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026F8B9: ;
    edi = MEM32(0x33A1C0);
    PUSH32(esp, 0x0026F8C4u); RECOMP_ABI_CALL(0x000CB990u, sub_000CB990); /* call 0x000CB990 */

loc_0026F8C4: ;
    POP32(esp, edi);

loc_0026F8C5: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026F8D0
 * Original: 0x0026F8D0 - 0x0026F92D (93 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F8D0: ;
    PUSH32(esp, 0x0026F8D5u); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0026F8D5: ;
    SET_LO8(ecx, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F925; /* je: equal / zero */

loc_0026F8DF: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F925; /* je: equal / zero */

loc_0026F8E8: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_0026F919; /* je: equal / zero */

loc_0026F8EE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0026F905; /* je: equal / zero */

loc_0026F8F1: ;
    edi = MEM32(0x33A1B8);
    PUSH32(esp, 0x0026F8FCu); RECOMP_ABI_CALL(0x000CB9E0u, sub_000CB9E0); /* call 0x000CB9E0 */

loc_0026F8FC: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026F905: ;
    edi = MEM32(0x33A1BC);
    PUSH32(esp, 0x0026F910u); RECOMP_ABI_CALL(0x000CB9E0u, sub_000CB9E0); /* call 0x000CB9E0 */

loc_0026F910: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026F919: ;
    edi = MEM32(0x33A1C0);
    PUSH32(esp, 0x0026F924u); RECOMP_ABI_CALL(0x000CB9E0u, sub_000CB9E0); /* call 0x000CB9E0 */

loc_0026F924: ;
    POP32(esp, edi);

loc_0026F925: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026F930
 * Original: 0x0026F930 - 0x0026F98D (93 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F930: ;
    PUSH32(esp, 0x0026F935u); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0026F935: ;
    SET_LO8(ecx, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F985; /* je: equal / zero */

loc_0026F93F: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F985; /* je: equal / zero */

loc_0026F948: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_0026F979; /* je: equal / zero */

loc_0026F94E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0026F965; /* je: equal / zero */

loc_0026F951: ;
    edi = MEM32(0x33A1B8);
    PUSH32(esp, 0x0026F95Cu); RECOMP_ABI_CALL(0x000CBA30u, sub_000CBA30); /* call 0x000CBA30 */

loc_0026F95C: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026F965: ;
    edi = MEM32(0x33A1BC);
    PUSH32(esp, 0x0026F970u); RECOMP_ABI_CALL(0x000CBA30u, sub_000CBA30); /* call 0x000CBA30 */

loc_0026F970: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026F979: ;
    edi = MEM32(0x33A1C0);
    PUSH32(esp, 0x0026F984u); RECOMP_ABI_CALL(0x000CBA30u, sub_000CBA30); /* call 0x000CBA30 */

loc_0026F984: ;
    POP32(esp, edi);

loc_0026F985: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026F990
 * Original: 0x0026F990 - 0x0026F9C6 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F990: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026F9B2u); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0026F9B2: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x0026F9BAu); RECOMP_ABI_CALL(0x00026D00u, sub_00026D00); /* call 0x00026D00 */

loc_0026F9BA: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026F9D0
 * Original: 0x0026F9D0 - 0x0026FA06 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F9D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F9D0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026F9F2u); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0026F9F2: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x0026F9FAu); RECOMP_ABI_CALL(0x00026D60u, sub_00026D60); /* call 0x00026D60 */

loc_0026F9FA: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026FA10
 * Original: 0x0026FA10 - 0x0026FA7B (107 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0026FA10: ;
    PUSH32(esp, 0x0026FA15u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026FA15: ;
    SET_LO8(ecx, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FA3E; /* je: equal / zero */

loc_0026FA1F: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0026FA3E; /* je: equal / zero */

loc_0026FA28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0026FA3E; /* je: equal / zero */

loc_0026FA2D: ;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x0026FA35u); RECOMP_ABI_CALL(0x000CBC40u, sub_000CBC40); /* call 0x000CBC40 */

loc_0026FA35: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, edi);
    goto loc_0026FA40;

loc_0026FA3E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0026FA40: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x20)) >> 32) & 1);
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026FA80
 * Original: 0x0026FA80 - 0x0026FAED (109 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026FA80: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026FAB0; /* jne: not equal / not zero */

loc_0026FAA6: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026FAB8;

loc_0026FAB0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026FAB8: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026FAC2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026FAC2: ;
    edx = eax;
    SET_LO8(eax, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FAE4; /* je: equal / zero */

loc_0026FACD: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FAE4; /* je: equal / zero */

loc_0026FAD6: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0026FAE1u); RECOMP_ABI_CALL(0x000CB0E0u, sub_000CB0E0); /* call 0x000CB0E0 */

loc_0026FAE1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026FAE4: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026FAF0
 * Original: 0x0026FAF0 - 0x0026FB3D (77 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026FAF0: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = eax;
    SET_LO8(eax, MEM8(0x64CFB8));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(0x64D858) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026FB35; /* je: equal / zero */

loc_0026FB13: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FB35; /* je: equal / zero */

loc_0026FB1C: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(eax + 0x6270D8);
    eax = MEM32(0x64D284);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;

loc_0026FB35: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026FB40
 * Original: 0x0026FB40 - 0x0026FBB6 (118 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026FB40: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026FB64; /* jne: not equal / not zero */

loc_0026FB5A: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_0026FB6C;

loc_0026FB64: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_0026FB6C: ;
    edx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D858) = ecx;
    SET_LO8(ecx, MEM8(0x64CFB8));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(0x64D854) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0026FBAE; /* je: equal / zero */

loc_0026FB90: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FBAE; /* je: equal / zero */

loc_0026FB99: ;
    ecx = MEM32(eax + 0x6270D8);
    eax = MEM32(0x64D284);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */

loc_0026FBAE: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026FBC0
 * Original: 0x0026FBC0 - 0x0026FC07 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026FBC0: ;
    edx = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    SET_LO8(eax, MEM8(0x64CFB8));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026FBFF; /* je: equal / zero */

loc_0026FBE5: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FBFF; /* je: equal / zero */

loc_0026FBEE: ;
    eax = edx;
    ecx = MEM32(eax + 0x6270D8);
    edx = MEM32(0x64D284);
    MEM32(edx + 8) = ecx;

loc_0026FBFF: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026FC10
 * Original: 0x0026FC10 - 0x0026FC7A (106 bytes, 29 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026FC10: ;
    PUSH32(esp, 0x0026FC15u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026FC15: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(ecx + 0x6270D8);
    ecx = MEM32(ecx + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x64D858) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026FC72; /* je: equal / zero */

loc_0026FC3E: ;
    ecx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FC50; /* je: equal / zero */

loc_0026FC45: ;
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026FC50: ;
    PUSH32(esp, 0x0026FC55u); RECOMP_ABI_CALL(0x000F8010u, sub_000F8010); /* call 0x000F8010 */

loc_0026FC55: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x32316C);
    PUSH32(esp, 0x485);
    PUSH32(esp, 0x3232EC);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0026FC6Fu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0026FC6F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026FC72: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026FC80
 * Original: 0x0026FC80 - 0x0026FD22 (162 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026FC80: ;
    edx = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x64CFB8));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, esi);
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026FCBB; /* je: equal / zero */

loc_0026FCA8: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FCBB; /* je: equal / zero */

loc_0026FCB1: ;
    eax = edx;
    esi = MEM32(eax + 0x6270D8);
    goto loc_0026FCBD;

loc_0026FCBB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0026FCBD: ;
    PUSH32(esp, 0x0026FCC2u); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0026FCC2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026FCE2; /* jne: not equal / not zero */

loc_0026FCC7: ;
    SET_LO8(ecx, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026FCE2; /* jne: not equal / not zero */

loc_0026FCD1: ;
    PUSH32(esp, edi);
    edi = MEM32(0x64D204);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026FCDFu); RECOMP_ABI_CALL(0x00027290u, sub_00027290); /* call 0x00027290 */

loc_0026FCDF: ;
    POP32(esp, edi);
    goto loc_0026FCE5;

loc_0026FCE2: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0026FCE5: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026FD30
 * Original: 0x0026FD30 - 0x0026FDC6 (150 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026FD30: ;
    edx = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    SET_LO8(ecx, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(0x64D854) = edx;
    SET_LO8(edx, MEM8(0x64CFB9));
    if (CMP_EQ(_fa, _fb)) goto loc_0026FD6E; /* je: equal / zero */

loc_0026FD5C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FD6E; /* je: equal / zero */

loc_0026FD61: ;
    eax = MEM32(0x64D854);
    eax = MEM32(eax + 0x6270D8);
    goto loc_0026FD70;

loc_0026FD6E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0026FD70: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026FD88; /* jne: not equal / not zero */

loc_0026FD75: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026FD88; /* jne: not equal / not zero */

loc_0026FD79: ;
    PUSH32(esp, edi);
    edi = MEM32(0x64D204);
    PUSH32(esp, 0x0026FD85u); RECOMP_ABI_CALL(0x00027380u, sub_00027380); /* call 0x00027380 */

loc_0026FD85: ;
    POP32(esp, edi);
    goto loc_0026FD8B;

loc_0026FD88: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0026FD8B: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026FDD0
 * Original: 0x0026FDD0 - 0x0026FDF9 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026FDD0: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026FDF5; /* jne: not equal / not zero */

loc_0026FDD9: ;
    SET_LO8(eax, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026FDF5; /* jne: not equal / not zero */

loc_0026FDE2: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(0x64D204);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026FDF3u); RECOMP_ABI_CALL(0x000271B0u, sub_000271B0); /* call 0x000271B0 */

loc_0026FDF3: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0026FDF5: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026FE00
 * Original: 0x0026FE00 - 0x0026FE66 (102 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026FE00: ;
    PUSH32(esp, 0x0026FE05u); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0026FE05: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026FE28; /* jne: not equal / not zero */

loc_0026FE0E: ;
    SET_LO8(ecx, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026FE28; /* jne: not equal / not zero */

loc_0026FE18: ;
    PUSH32(esp, edi);
    edi = MEM32(0x64D204);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026FE25u); RECOMP_ABI_CALL(0x000271B0u, sub_000271B0); /* call 0x000271B0 */

loc_0026FE25: ;
    POP32(esp, edi);
    goto loc_0026FE2B;

loc_0026FE28: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0026FE2B: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026FE70
 * Original: 0x0026FE70 - 0x0026FF22 (178 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026FE70: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026FE98; /* jne: not equal / not zero */

loc_0026FE8E: ;
    xmm2.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026FEA0;

loc_0026FE98: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026FEA0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026FEC3; /* jne: not equal / not zero */

loc_0026FEB9: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026FECB;

loc_0026FEC3: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026FECB: ;
    xmm0 = XMM_SCALAR(MEMF(0x33A1E0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x33A1E8)); /* movss */
    eax = MEM32(esp + 4);
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x33A1E4); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(0x33A1E4) = xmm3.f[0]; /* movss */
    MEMF(0x33A1E8) = xmm1.f[0]; /* movss */
    MEMF(0x33A1E0) = xmm0.f[0]; /* movss */
    MEMF(0x33A1EC) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026FF30
 * Original: 0x0026FF30 - 0x0026FF8C (92 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FF30(void)
{

loc_0026FF30: ;
    xmm0 = XMM_SCALAR(MEMF(0x33A1E0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x33A1E8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x33A1E4); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(0x33A1E8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x33A1E0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(0x33A1E4) = xmm1.f[0]; /* movss */
    MEMF(0x33A1EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0026FF90
 * Original: 0x0026FF90 - 0x0026FFFC (108 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026FF90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026FF96u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026FF96: ;
    edx = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0026FFC7; /* jne: not equal / not zero */

loc_0026FFBD: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026FFCF;

loc_0026FFC7: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6270D8)); /* movss */

loc_0026FFCF: ;
    SET_LO8(ecx, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FFF3; /* je: equal / zero */

loc_0026FFDE: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026FFF3; /* je: equal / zero */

loc_0026FFE7: ;
    ecx = MEM32(esp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026FFF0u); RECOMP_ABI_CALL(0x000CB350u, sub_000CB350); /* call 0x000CB350 */

loc_0026FFF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026FFF3: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270000
 * Original: 0x00270000 - 0x00270064 (100 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270000: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00270007u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270007: ;
    ecx = MEM32(0x64D854);
    esi = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00270038; /* jne: not equal / not zero */

loc_0027002E: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00270040;

loc_00270038: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00270040: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0027004Bu); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0027004B: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270057u); RECOMP_ABI_CALL(0x00027050u, sub_00027050); /* call 0x00027050 */

loc_00270057: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270018
 * Original: 0x00270018 - 0x00270064 (76 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270018(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270018: ;
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00270038; /* jne: not equal / not zero */

loc_0027002E: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00270040;

loc_00270038: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00270040: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0027004Bu); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0027004B: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270057u); RECOMP_ABI_CALL(0x00027050u, sub_00027050); /* call 0x00027050 */

loc_00270057: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270070
 * Original: 0x00270070 - 0x002700E6 (118 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00270070: ;
    eax = MEM32(0x34AC50);
    eax = MEM32(eax + ecx * 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x58);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x4C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002700E3; /* jae: above or equal (unsigned >=) */

loc_00270084: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00270086: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002700DA; /* je: equal / zero */

loc_0027008C: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002700DA; /* je: equal / zero */

loc_00270096: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002700DA; /* je: equal / zero */

loc_0027009D: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002700DA; /* je: equal / zero */

loc_002700A4: ;
    edi = MEM32(eax + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002700DA; /* je: equal / zero */

loc_002700AB: ;
    goto loc_002700B0;

    /* nop */

loc_002700B0: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002700D3; /* jne: not equal / not zero */

loc_002700B7: ;
    esi = MEM32(edi + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002700D3; /* je: equal / zero */

loc_002700C0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002700D0; /* jne: not equal / not zero */

loc_002700C4: ;
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002700CDu); RECOMP_ABI_CALL(0x00043260u, sub_00043260); /* call 0x00043260 */

loc_002700CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002700D0: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFFF9Eu;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002700D3: ;
    edi = MEM32(edi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002700B0; /* jne: not equal / not zero */

loc_002700DA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00270086; /* jb: below (unsigned <) */

loc_002700E1: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002700E3: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002700F0
 * Original: 0x002700F0 - 0x00270104 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002700F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002700F0: ;
    PUSH32(esp, 0x002700F5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002700F5: ;
    ecx = eax;
    PUSH32(esp, 0x002700FCu); RECOMP_ABI_CALL(0x00270070u, sub_00270070); /* call 0x00270070 */

loc_002700FC: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270110
 * Original: 0x00270110 - 0x002701AE (158 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270110: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D858);
    esi = MEM32(eax * 8 + 0x616FD4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D87C) = ecx;
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD8));
    MEM32(0x64D858) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    edx = SX16(LO16(ecx));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x3418EC); PUSH32(esp, 0x0027015Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00270155u); } /* indirect call */
    }

loc_0027015C: ;
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = edx;
    PUSH32(esp, 0x00270173u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270173: ;
    ebx = eax;
    PUSH32(esp, 0x0027017Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027017A: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002701A0; /* jne: not equal / not zero */

loc_00270183: ;
    SET_LO8(ecx, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002701A0; /* jne: not equal / not zero */

loc_0027018D: ;
    ecx = MEM32(0x64D20C);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0x002701A0u); RECOMP_ABI_CALL(0x00027DB0u, sub_00027DB0); /* call 0x00027DB0 */

loc_002701A0: ;
    eax = MEM32(esp + 0x48);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002701B0
 * Original: 0x002701B0 - 0x002701DF (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002701B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002701B0: ;
    PUSH32(esp, 0x002701B5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002701B5: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002701D7; /* jne: not equal / not zero */

loc_002701BE: ;
    SET_LO8(ecx, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002701D7; /* jne: not equal / not zero */

loc_002701C8: ;
    PUSH32(esp, esi);
    esi = MEM32(0x64D20C);
    edx = eax;
    PUSH32(esp, 0x002701D6u); RECOMP_ABI_CALL(0x00027E50u, sub_00027E50); /* call 0x00027E50 */

loc_002701D6: ;
    POP32(esp, esi);

loc_002701D7: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002701E0
 * Original: 0x002701E0 - 0x00270284 (164 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002701E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002701E0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D884);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0027022F; /* jne: not equal / not zero */

loc_00270225: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00270237;

loc_0027022F: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00270237: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00270242u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270242: ;
    esi = eax;
    PUSH32(esp, 0x00270249u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270249: ;
    edi = eax;
    PUSH32(esp, 0x00270250u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270250: ;
    edx = eax;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270278; /* jne: not equal / not zero */

loc_0027025B: ;
    SET_LO8(eax, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270278; /* jne: not equal / not zero */

loc_00270264: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x64D20C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0x00270278u); RECOMP_ABI_CALL(0x00027BC0u, sub_00027BC0); /* call 0x00027BC0 */

loc_00270278: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270290
 * Original: 0x00270290 - 0x002702F3 (99 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270290: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002702B4; /* jne: not equal / not zero */

loc_00270299: ;
    SET_LO8(eax, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002702B4; /* jne: not equal / not zero */

loc_002702A2: ;
    eax = MEM32(0x64D20C);
    ecx = MEM32(eax + 0x58);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    goto loc_002702B6;

loc_002702B4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002702B6: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270300
 * Original: 0x00270300 - 0x0027032F (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270300: ;
    PUSH32(esp, 0x00270305u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270305: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270327; /* jne: not equal / not zero */

loc_0027030E: ;
    SET_LO8(ecx, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270327; /* jne: not equal / not zero */

loc_00270318: ;
    ecx = MEM32(0x64D20C);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x00270326u); RECOMP_ABI_CALL(0x00027F90u, sub_00027F90); /* call 0x00027F90 */

loc_00270326: ;
    POP32(esp, edi);

loc_00270327: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270330
 * Original: 0x00270330 - 0x0027035F (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270330: ;
    PUSH32(esp, 0x00270335u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270335: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270357; /* jne: not equal / not zero */

loc_0027033E: ;
    SET_LO8(ecx, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270357; /* jne: not equal / not zero */

loc_00270348: ;
    ecx = MEM32(0x64D20C);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x00270356u); RECOMP_ABI_CALL(0x00028020u, sub_00028020); /* call 0x00028020 */

loc_00270356: ;
    POP32(esp, edi);

loc_00270357: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270360
 * Original: 0x00270360 - 0x0027038E (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270360: ;
    PUSH32(esp, 0x00270365u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270365: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270386; /* jne: not equal / not zero */

loc_0027036E: ;
    SET_LO8(ecx, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270386; /* jne: not equal / not zero */

loc_00270378: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D20C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270385u); RECOMP_ABI_CALL(0x000280A0u, sub_000280A0); /* call 0x000280A0 */

loc_00270385: ;
    POP32(esp, ebx);

loc_00270386: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270390
 * Original: 0x00270390 - 0x002703F8 (104 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270390: ;
    PUSH32(esp, 0x00270395u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270395: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002703BB; /* jne: not equal / not zero */

loc_0027039E: ;
    SET_LO8(ecx, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002703BB; /* jne: not equal / not zero */

loc_002703A8: ;
    PUSH32(esp, esi);
    esi = MEM32(0x64D20C);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x002703B7u); RECOMP_ABI_CALL(0x00028180u, sub_00028180); /* call 0x00028180 */

loc_002703B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    goto loc_002703BD;

loc_002703BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002703BD: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270400
 * Original: 0x00270400 - 0x00270484 (132 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270400: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00270431; /* je: equal / zero */

loc_0027040D: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027042A; /* je: equal / zero */

loc_00270414: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027042A; /* je: equal / zero */

loc_0027041B: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027042A; /* je: equal / zero */

loc_00270421: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270427u); RECOMP_ABI_CALL(0x0002B5F0u, sub_0002B5F0); /* call 0x0002B5F0 */

loc_00270427: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027042A: ;
    edx = esi;
    PUSH32(esp, 0x00270431u); RECOMP_ABI_CALL(0x0002B630u, sub_0002B630); /* call 0x0002B630 */

loc_00270431: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(edi);
    MEM32(eax + 0x30) = ecx;
    edx = MEM32(edi + 4);
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(edi + 8);
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | 2;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    PUSH32(esp, 0x00270450u); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_00270450: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x19);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    PUSH32(esp, 0x0027045Du); RECOMP_ABI_CALL(0x00014DE0u, sub_00014DE0); /* call 0x00014DE0 */

loc_0027045D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270480; /* je: equal / zero */

loc_00270464: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270480; /* je: equal / zero */

loc_0027046B: ;
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270477; /* jne: not equal / not zero */

loc_00270472: ;
    PUSH32(esp, 0x00270477u); RECOMP_ABI_CALL(0x00035370u, sub_00035370); /* call 0x00035370 */

loc_00270477: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027047Du); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0027047D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270480: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270490
 * Original: 0x00270490 - 0x002704DE (78 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270490: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D854);
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = ecx + 0x6270D8;
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = edx;
    PUSH32(esp, 0x002704D5u); RECOMP_ABI_CALL(0x00270400u, sub_00270400); /* call 0x00270400 */

loc_002704D5: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002704E0
 * Original: 0x002704E0 - 0x0027051E (62 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002704E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002704E0: ;
    edx = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edx);
    eax = MEM32(ecx + 8);
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00270512; /* ja: above (unsigned >) */

loc_002704FD: ;
    edx = MEM32(edx + 0xC);
    edx = MEM32(edx);

loc_00270502: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00270512; /* jae: above or equal (unsigned >=) */

loc_00270506: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270512; /* je: equal / zero */

loc_0027050A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00270502; /* jbe: below or equal (unsigned <=) */

loc_00270512: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x0027051Bu); RECOMP_ABI_CALL(0x001022C0u, sub_001022C0); /* call 0x001022C0 */

loc_0027051B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270520
 * Original: 0x00270520 - 0x0027057D (93 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270520: ;
    ecx = MEM32(0x64D880);
    eax = MEM32(0x64D884);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    MEM32(0x64D87C) = edx;
    edx = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(ecx + 0x6270D8);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    MEM32(0x64D858) = esi;
    PUSH32(esp, 0x00270571u); RECOMP_ABI_CALL(0x002704E0u, sub_002704E0); /* call 0x002704E0 */

loc_00270571: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270580
 * Original: 0x00270580 - 0x00270609 (137 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270580: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x19);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x002705ABu); RECOMP_ABI_CALL(0x00014DE0u, sub_00014DE0); /* call 0x00014DE0 */

loc_002705AB: ;
    eax = MEM32(eax + 8);
    esi = MEM32(eax + 0xF4);
    edx = MEM32(eax + 0xF0);
    edi = MEM32(0x64D854);
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    ecx = edi + 0x6270D8;
    MEM32(ecx + 8) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 3;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 4) = esi;
    POP32(esp, esi);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270610
 * Original: 0x00270610 - 0x0027065C (76 bytes, 20 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270610: ;
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D880);
    PUSH32(esp, esi);
    esi = MEM32(0x64D87C);
    MEM32(0x64D87C) = eax;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D884) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00270652; /* jne: not equal / not zero */

loc_00270634: ;
    PUSH32(esp, 0x3329B8);
    PUSH32(esp, 0x332990);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x332950);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0027064Fu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0027064F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270652: ;
    esi = MEM32(esi + 0x54);
    PUSH32(esp, 0x0027065Au); RECOMP_ABI_CALL(0x00108440u, sub_00108440); /* call 0x00108440 */

loc_0027065A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270660
 * Original: 0x00270660 - 0x0027068F (47 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270660: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = eax + 0x6270D8;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    PUSH32(esp, 0x00270686u); RECOMP_ABI_CALL(0x00270610u, sub_00270610); /* call 0x00270610 */

loc_00270686: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270690
 * Original: 0x00270690 - 0x002706DB (75 bytes, 19 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00270690: ;
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D880);
    PUSH32(esp, esi);
    esi = MEM32(0x64D87C);
    MEM32(0x64D87C) = eax;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D884) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002706D2; /* jne: not equal / not zero */

loc_002706B4: ;
    PUSH32(esp, 0x3329B8);
    PUSH32(esp, 0x332990);
    PUSH32(esp, 0x35);
    PUSH32(esp, 0x332950);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x002706CFu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_002706CF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002706D2: ;
    eax = MEM32(esi + 0x54);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001084A0(); return; /* tail jmp 0x001084A0 */

}

/**
 * sub_002706E0
 * Original: 0x002706E0 - 0x0027070F (47 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002706E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002706E0: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = eax + 0x6270D8;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    PUSH32(esp, 0x00270706u); RECOMP_ABI_CALL(0x00270690u, sub_00270690); /* call 0x00270690 */

loc_00270706: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270710
 * Original: 0x00270710 - 0x0027078B (123 bytes, 33 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270710: ;
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D880);
    PUSH32(esp, esi);
    esi = MEM32(0x64D87C);
    MEM32(0x64D87C) = eax;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D884) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00270752; /* jne: not equal / not zero */

loc_00270734: ;
    PUSH32(esp, 0x3329B8);
    PUSH32(esp, 0x332990);
    PUSH32(esp, 0x51);
    PUSH32(esp, 0x332950);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0027074Fu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0027074F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270752: ;
    esi = MEM32(esi + 0x54);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027077A; /* jne: not equal / not zero */

loc_00270759: ;
    PUSH32(esp, 0x332320);
    PUSH32(esp, 0x33230C);
    PUSH32(esp, 0xB6);
    PUSH32(esp, 0x33234C);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x00270777u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_00270777: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0027077A: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    edx = MEM32(esp + 8);
    SET_LO8(eax, LO8(eax) | 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x1C) = LO8(eax);
    MEM32(esi + 0x18) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270790
 * Original: 0x00270790 - 0x002707A6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270790: ;
    PUSH32(esp, 0x00270795u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270795: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027079Bu); RECOMP_ABI_CALL(0x00270710u, sub_00270710); /* call 0x00270710 */

loc_0027079B: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002707B0
 * Original: 0x002707B0 - 0x002707FC (76 bytes, 20 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002707B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002707B0: ;
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D880);
    PUSH32(esp, esi);
    esi = MEM32(0x64D87C);
    MEM32(0x64D87C) = eax;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D884) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002707F2; /* jne: not equal / not zero */

loc_002707D4: ;
    PUSH32(esp, 0x3329B8);
    PUSH32(esp, 0x332990);
    PUSH32(esp, 0x6C);
    PUSH32(esp, 0x332950);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x002707EFu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_002707EF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002707F2: ;
    esi = MEM32(esi + 0x54);
    PUSH32(esp, 0x002707FAu); RECOMP_ABI_CALL(0x00108510u, sub_00108510); /* call 0x00108510 */

loc_002707FA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270800
 * Original: 0x00270800 - 0x00270860 (96 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270800: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = esp + 4;
    PUSH32(esp, 0x0027080Du); RECOMP_ABI_CALL(0x002707B0u, sub_002707B0); /* call 0x002707B0 */

loc_0027080D: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(esp + 4);
    eax = ecx + 0x6270D8;
    MEM32(eax) = edx;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x14);
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270860
 * Original: 0x00270860 - 0x002708AE (78 bytes, 19 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00270860: ;
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D880);
    PUSH32(esp, edi);
    edi = MEM32(0x64D87C);
    MEM32(0x64D87C) = eax;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D884) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002708A5; /* jne: not equal / not zero */

loc_00270884: ;
    PUSH32(esp, 0x3329B8);
    PUSH32(esp, 0x332990);
    PUSH32(esp, 0x89);
    PUSH32(esp, 0x332950);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x002708A2u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_002708A2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002708A5: ;
    eax = MEM32(edi + 0x54);
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_001085A0(); return; /* tail jmp 0x001085A0 */

}

/**
 * sub_002708B0
 * Original: 0x002708B0 - 0x00270910 (96 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002708B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002708B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = esp + 4;
    PUSH32(esp, 0x002708BDu); RECOMP_ABI_CALL(0x00270860u, sub_00270860); /* call 0x00270860 */

loc_002708BD: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(esp + 4);
    eax = ecx + 0x6270D8;
    MEM32(eax) = edx;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x14);
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270910
 * Original: 0x00270910 - 0x0027095F (79 bytes, 20 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270910: ;
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D880);
    PUSH32(esp, esi);
    esi = MEM32(0x64D87C);
    MEM32(0x64D87C) = eax;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D884) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00270955; /* jne: not equal / not zero */

loc_00270934: ;
    PUSH32(esp, 0x3329B8);
    PUSH32(esp, 0x332990);
    PUSH32(esp, 0xA8);
    PUSH32(esp, 0x332950);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x00270952u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_00270952: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270955: ;
    esi = MEM32(esi + 0x54);
    PUSH32(esp, 0x0027095Du); RECOMP_ABI_CALL(0x00108630u, sub_00108630); /* call 0x00108630 */

loc_0027095D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270960
 * Original: 0x00270960 - 0x002709A0 (64 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270960: ;
    PUSH32(esp, 0x00270965u); RECOMP_ABI_CALL(0x00270910u, sub_00270910); /* call 0x00270910 */

loc_00270965: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002709A0
 * Original: 0x002709A0 - 0x002709C8 (40 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002709A0(void)
{

loc_002709A0: ;
    eax = MEM32(0x64D87C);
    ecx = MEM32(0x64D878);
    edx = MEM32(0x64D880);
    PUSH32(esp, esi);
    esi = eax + 0x54;
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D884) = edx;
    PUSH32(esp, 0x002709C6u); RECOMP_ABI_CALL(0x001083D0u, sub_001083D0); /* call 0x001083D0 */

loc_002709C6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002709D0
 * Original: 0x002709D0 - 0x00270A3C (108 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002709D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002709D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002709D7u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002709D7: ;
    edx = MEM32(0x64D878);
    ecx = MEM32(0x64D87C);
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D880);
    esi = ecx + 0x54;
    edi = eax;
    MEM32(0x64D884) = edx;
    PUSH32(esp, 0x002709FFu); RECOMP_ABI_CALL(0x001083D0u, sub_001083D0); /* call 0x001083D0 */

loc_002709FF: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270A40
 * Original: 0x00270A40 - 0x00270A7A (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00270A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270A40: ;
    eax = MEM32(0x64D87C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x64D878);
    edx = MEM32(0x64D880);
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D884) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00270A77; /* je: equal / zero */

loc_00270A61: ;
    eax = MEM32(eax + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270A77; /* je: equal / zero */

loc_00270A68: ;
    SET_LO8(ecx, MEM8(esp + 4));
    _fa = (uint32_t)(MEM8(eax + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1C), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00270A77; /* je: equal / zero */

loc_00270A71: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00270A77: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270A80
 * Original: 0x00270A80 - 0x00270AF9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270A80: ;
    PUSH32(esp, 0x00270A85u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270A85: ;
    edx = MEM32(0x64D878);
    ecx = MEM32(0x64D87C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D880);
    MEM32(0x64D884) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00270ABA; /* je: equal / zero */

loc_00270AA7: ;
    ecx = MEM32(ecx + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270ABA; /* je: equal / zero */

loc_00270AAE: ;
    _fa = (uint32_t)(MEM8(ecx + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1C), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00270ABA; /* je: equal / zero */

loc_00270AB3: ;
    edx = 1;
    goto loc_00270ABC;

loc_00270ABA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00270ABC: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270B00
 * Original: 0x00270B00 - 0x00270B35 (53 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270B00: ;
    eax = MEM32(0x64D87C);
    ecx = MEM32(0x64D878);
    edx = MEM32(0x64D880);
    PUSH32(esp, esi);
    esi = eax + 0x54;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D884) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00270B33; /* jne: not equal / not zero */

loc_00270B26: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270B30u); RECOMP_ABI_CALL(0x001082C0u, sub_001082C0); /* call 0x001082C0 */

loc_00270B30: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270B33: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270B40
 * Original: 0x00270B40 - 0x00270B7E (62 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270B40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00270B46u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270B46: ;
    ecx = MEM32(0x64D87C);
    edx = MEM32(0x64D878);
    esi = ecx + 0x54;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D880);
    MEM32(0x64D884) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00270B75; /* jne: not equal / not zero */

loc_00270B6C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270B72u); RECOMP_ABI_CALL(0x001082C0u, sub_001082C0); /* call 0x001082C0 */

loc_00270B72: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00270B75: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270B80
 * Original: 0x00270B80 - 0x00270B8D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270B80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270B80: ;
    PUSH32(esp, 0x00270B85u); RECOMP_ABI_CALL(0x00108160u, sub_00108160); /* call 0x00108160 */

loc_00270B85: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270B90
 * Original: 0x00270B90 - 0x00270B9D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270B90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270B90: ;
    PUSH32(esp, 0x00270B95u); RECOMP_ABI_CALL(0x00108680u, sub_00108680); /* call 0x00108680 */

loc_00270B95: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270BA0
 * Original: 0x00270BA0 - 0x00270BD3 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270BA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270BA0: ;
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D1E4);
    PUSH32(esp, eax);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x00270BCAu); RECOMP_ABI_CALL(0x00017950u, sub_00017950); /* call 0x00017950 */

loc_00270BCA: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270BE0
 * Original: 0x00270BE0 - 0x00270C53 (115 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270BE0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D1E4);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(eax + 0xF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00270C0C; /* je: equal / zero */

loc_00270C06: ;
    esi = MEM32(eax + ecx * 4 + 0x6C);
    goto loc_00270C0E;

loc_00270C0C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00270C0E: ;
    ecx = MEM32(0x64D854);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = ecx + 0x6270D8;
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = edx;
    eax = MEM32(esp + 8);
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270C60
 * Original: 0x00270C60 - 0x00270CBF (95 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270C60: ;
    eax = MEM32(0x64D1E4);
    ecx = MEM32(eax + 0xF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270C7F; /* je: equal / zero */

loc_00270C6F: ;
    eax = MEM32(eax + ecx * 4 + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270C7F; /* je: equal / zero */

loc_00270C77: ;
    edx = MEM32(eax + 0x80);
    goto loc_00270C82;

loc_00270C7F: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00270C82: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00270CC0
 * Original: 0x00270CC0 - 0x00270D2A (106 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270CC0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00270CE2u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00270CE2: ;
    ecx = MEM32(0x64D1E4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00270CEEu); RECOMP_ABI_CALL(0x00017D40u, sub_00017D40); /* call 0x00017D40 */

loc_00270CEE: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00270D30
 * Original: 0x00270D30 - 0x00270D9D (109 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270D30: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00270D53u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00270D53: ;
    PUSH32(esp, esi);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x00270D5Du); RECOMP_ABI_CALL(0x00018290u, sub_00018290); /* call 0x00018290 */

loc_00270D5D: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270DA0
 * Original: 0x00270DA0 - 0x00270E0D (109 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270DA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00270DC3u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00270DC3: ;
    PUSH32(esp, esi);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x00270DCDu); RECOMP_ABI_CALL(0x00018400u, sub_00018400); /* call 0x00018400 */

loc_00270DCD: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270E10
 * Original: 0x00270E10 - 0x00270E91 (129 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270E10: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00270E35u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270E35: ;
    edi = eax;
    PUSH32(esp, 0x00270E3Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270E3C: ;
    ebx = eax;
    PUSH32(esp, 0x00270E43u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00270E43: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00270E4Fu); RECOMP_ABI_CALL(0x00017F90u, sub_00017F90); /* call 0x00017F90 */

loc_00270E4F: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270EA0
 * Original: 0x00270EA0 - 0x00270F18 (120 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270EA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00270EC4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270EC4: ;
    edi = eax;
    PUSH32(esp, 0x00270ECBu); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00270ECB: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x00270ED7u); RECOMP_ABI_CALL(0x00018010u, sub_00018010); /* call 0x00018010 */

loc_00270ED7: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270F20
 * Original: 0x00270F20 - 0x00270FAC (140 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00270F20: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00270F46u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270F46: ;
    edi = eax;
    PUSH32(esp, 0x00270F4Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270F4D: ;
    ebx = eax;
    PUSH32(esp, 0x00270F54u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270F54: ;
    ebp = eax;
    PUSH32(esp, 0x00270F5Bu); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00270F5B: ;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0x00270F69u); RECOMP_ABI_CALL(0x00018080u, sub_00018080); /* call 0x00018080 */

loc_00270F69: ;
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00270FB0
 * Original: 0x00270FB0 - 0x0027103C (140 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00270FB0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00270FD6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270FD6: ;
    edi = eax;
    PUSH32(esp, 0x00270FDDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270FDD: ;
    ebx = eax;
    PUSH32(esp, 0x00270FE4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00270FE4: ;
    ebp = eax;
    PUSH32(esp, 0x00270FEBu); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00270FEB: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x00270FF9u); RECOMP_ABI_CALL(0x00018100u, sub_00018100); /* call 0x00018100 */

loc_00270FF9: ;
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271040
 * Original: 0x00271040 - 0x002710E5 (165 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271040: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D858);
    esi = MEM32(eax * 8 + 0x616FD4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D87C) = ecx;
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD8));
    MEM32(0x64D858) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    edx = SX16(LO16(ecx));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x3418EC); PUSH32(esp, 0x0027108Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00271084u); } /* indirect call */
    }

loc_0027108B: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x64D854) = MEM32(0x64D854) - 0x20;
    _fa = (uint32_t)(MEM32(0x64D854)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00271097u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00271097: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x002710A2u); RECOMP_ABI_CALL(0x00018170u, sub_00018170); /* call 0x00018170 */

loc_002710A2: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x48);
    POP32(esp, edi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002710F0
 * Original: 0x002710F0 - 0x002711A2 (178 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002710F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002710F0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    edx = MEM32(0x64D854);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D884);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D884) = eax;
    SET_LO8(eax, MEM8(0x64CFB8));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00271146; /* je: equal / zero */

loc_00271135: ;
    _fa = (uint32_t)(MEM8(0x64CFB9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB9), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271146; /* je: equal / zero */

loc_0027113E: ;
    edi = MEM32(edx + 0x6270D8);
    goto loc_00271148;

loc_00271146: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00271148: ;
    PUSH32(esp, 0x0027114Du); RECOMP_ABI_CALL(0x00110300u, sub_00110300); /* call 0x00110300 */

loc_0027114D: ;
    esi = eax;
    PUSH32(esp, 0x00271154u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00271154: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00271160u); RECOMP_ABI_CALL(0x000181D0u, sub_000181D0); /* call 0x000181D0 */

loc_00271160: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002711B0
 * Original: 0x002711B0 - 0x00271227 (119 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002711B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002711B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002711D4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002711D4: ;
    edi = eax;
    PUSH32(esp, 0x002711DBu); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_002711DB: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002711E6u); RECOMP_ABI_CALL(0x00018230u, sub_00018230); /* call 0x00018230 */

loc_002711E6: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271230
 * Original: 0x00271230 - 0x0027135D (301 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00271230: ;
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D884);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0027127B; /* jne: not equal / not zero */

loc_00271271: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00271283;

loc_0027127B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00271283: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_002712A1; /* jne: not equal / not zero */

loc_00271297: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_002712A9;

loc_002712A1: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_002712A9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002712D2; /* jne: not equal / not zero */

loc_002712C8: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_002712DA;

loc_002712D2: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_002712DA: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002712E5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002712E5: ;
    esi = eax;
    PUSH32(esp, 0x002712ECu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002712EC: ;
    edi = eax;
    PUSH32(esp, 0x002712F3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002712F3: ;
    ebx = eax;
    PUSH32(esp, 0x002712FAu); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_002712FA: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx;
    ecx = ebp;
    PUSH32(esp, 0x00271318u); RECOMP_ABI_CALL(0x000182F0u, sub_000182F0); /* call 0x000182F0 */

loc_00271318: ;
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x1C);
    POP32(esp, ebp);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271360
 * Original: 0x00271360 - 0x002713A1 (65 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271360: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00271367u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271367: ;
    esi = eax;
    PUSH32(esp, 0x0027136Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027136E: ;
    edi = eax;
    PUSH32(esp, 0x00271375u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271375: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx + eax * 4);
    eax = edx + eax * 4;
    eax = MEM32(ecx + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271397; /* jne: not equal / not zero */

loc_0027138E: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00271397u); RECOMP_ABI_CALL(0x0005E7C0u, sub_0005E7C0); /* call 0x0005E7C0 */

loc_00271397: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002713B0
 * Original: 0x002713B0 - 0x00271400 (80 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002713B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002713B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002713B6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002713B6: ;
    esi = eax;
    PUSH32(esp, 0x002713BDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002713BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = MEM32(0x64D1E4);
    if (CMP_NE(_fa, _fb)) goto loc_002713D8; /* jne: not equal / not zero */

loc_002713C8: ;
    eax = MEM32(ecx + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002713F7; /* je: equal / zero */

loc_002713D2: ;
    ecx = MEM32(ecx + eax * 4 + 0x6C);
    goto loc_002713E0;

loc_002713D8: ;
    ecx = MEM32(ecx + 4);
    eax = ecx + eax * 4;
    ecx = MEM32(eax);

loc_002713E0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002713F7; /* je: equal / zero */

loc_002713E4: ;
    _fa = (uint32_t)(MEM32(ecx + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x80), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002713F7; /* jne: not equal / not zero */

loc_002713ED: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002713F7u); RECOMP_ABI_CALL(0x0005EBD0u, sub_0005EBD0); /* call 0x0005EBD0 */

loc_002713F7: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00271400
 * Original: 0x00271400 - 0x0027143F (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271400: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00271408u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271408: ;
    esi = eax;
    PUSH32(esp, 0x0027140Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027140F: ;
    edi = eax;
    PUSH32(esp, 0x00271416u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271416: ;
    ebx = eax;
    PUSH32(esp, 0x0027141Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027141D: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 4);
    eax = edx + eax * 4;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    edx = ebx;
    PUSH32(esp, 0x00271434u); RECOMP_ABI_CALL(0x0005E760u, sub_0005E760); /* call 0x0005E760 */

loc_00271434: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271440
 * Original: 0x00271440 - 0x0027147C (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271440: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271447u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271447: ;
    esi = eax;
    PUSH32(esp, 0x0027144Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027144E: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0x24);
    eax = edx + eax * 4;
    edx = MEM32(ecx + esi * 4);
    ecx = ecx + esi * 4;
    esi = MEM32(eax);
    MEM32(esp + 4) = edx;
    edx = esp + 4;
    PUSH32(esp, 0x00271472u); RECOMP_ABI_CALL(0x00060880u, sub_00060880); /* call 0x00060880 */

loc_00271472: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271480
 * Original: 0x00271480 - 0x002714B5 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271480: ;
    eax = MEM32(0x64D1E4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 0x54);
    ecx = ecx + edx * 4;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = eax + edx * 4;
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = eax;
    eax = MEM32(ecx);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 8;
    PUSH32(esp, 0x002714B3u); RECOMP_ABI_CALL(0x00060880u, sub_00060880); /* call 0x00060880 */

loc_002714B3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002714C0
 * Original: 0x002714C0 - 0x0027150D (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002714C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002714C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002714C8u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002714C8: ;
    esi = eax;
    PUSH32(esp, 0x002714CFu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002714CF: ;
    edi = eax;
    PUSH32(esp, 0x002714D6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002714D6: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0x54);
    eax = edx + eax * 4;
    edx = MEM32(ecx + edi * 4);
    ecx = ecx + edi * 4;
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = edx;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 8;
    PUSH32(esp, 0x00271502u); RECOMP_ABI_CALL(0x00060880u, sub_00060880); /* call 0x00060880 */

loc_00271502: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271510
 * Original: 0x00271510 - 0x0027154F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271510: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271517u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271517: ;
    esi = eax;
    PUSH32(esp, 0x0027151Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027151E: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x44);
    ecx = MEM32(ecx + 0x24);
    ecx = ecx + esi * 4;
    esi = MEM32(edx + eax * 4);
    eax = edx + eax * 4;
    edx = MEM32(ecx);
    MEM32(esp + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, 0x00271545u); RECOMP_ABI_CALL(0x00060880u, sub_00060880); /* call 0x00060880 */

loc_00271545: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271550
 * Original: 0x00271550 - 0x0027159C (76 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271550: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00271558u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271558: ;
    esi = eax;
    PUSH32(esp, 0x0027155Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027155F: ;
    edi = eax;
    PUSH32(esp, 0x00271566u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271566: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x44);
    ecx = MEM32(ecx + 0x54);
    eax = edx + eax * 4;
    edx = MEM32(ecx + edi * 4);
    eax = MEM32(eax);
    ecx = ecx + edi * 4;
    MEM32(esp + 8) = edx;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi + eax + 0x18;
    edx = esp + 8;
    PUSH32(esp, 0x00271591u); RECOMP_ABI_CALL(0x00060880u, sub_00060880); /* call 0x00060880 */

loc_00271591: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002715A0
 * Original: 0x002715A0 - 0x002715D3 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002715A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002715A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002715A6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002715A6: ;
    esi = eax;
    PUSH32(esp, 0x002715ADu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002715AD: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x44);
    ecx = MEM32(ecx + 0x64);
    eax = edx + eax * 4;
    edx = MEM32(eax);
    eax = MEM32(ecx + esi * 4);
    ecx = ecx + esi * 4;
    MEM32(edx + 0x9C) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002715E0
 * Original: 0x002715E0 - 0x00271613 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002715E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002715E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002715E6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002715E6: ;
    esi = eax;
    PUSH32(esp, 0x002715EDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002715ED: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x44);
    ecx = MEM32(ecx + 0x64);
    eax = edx + eax * 4;
    edx = MEM32(eax);
    eax = MEM32(ecx + esi * 4);
    ecx = ecx + esi * 4;
    MEM32(edx + 0xA0) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00271620
 * Original: 0x00271620 - 0x0027164B (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271620: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271626u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271626: ;
    esi = eax;
    PUSH32(esp, 0x0027162Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027162D: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + eax * 4);
    edx = MEM32(edx + esi * 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00271642u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0027163Fu); } /* indirect call */
    }

loc_00271642: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00271650
 * Original: 0x00271650 - 0x0027168F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271650: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271657u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271657: ;
    esi = eax;
    PUSH32(esp, 0x0027165Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027165E: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0x14);
    ecx = ecx + esi * 4;
    esi = MEM32(edx + eax * 4);
    eax = edx + eax * 4;
    edx = MEM32(ecx);
    MEM32(esp + 4) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, 0x00271685u); RECOMP_ABI_CALL(0x00060880u, sub_00060880); /* call 0x00060880 */

loc_00271685: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271690
 * Original: 0x00271690 - 0x00271706 (118 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271690: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002716B3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002716B3: ;
    edi = eax;
    PUSH32(esp, 0x002716BAu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002716BA: ;
    ecx = MEM32(0x64D1E4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002716C9u); RECOMP_ABI_CALL(0x00017DF0u, sub_00017DF0); /* call 0x00017DF0 */

loc_002716C9: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00271710
 * Original: 0x00271710 - 0x00271790 (128 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271710: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00271734u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271734: ;
    edi = eax;
    PUSH32(esp, 0x0027173Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027173B: ;
    ebx = eax;
    PUSH32(esp, 0x00271742u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271742: ;
    ecx = MEM32(0x64D1E4);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00271752u); RECOMP_ABI_CALL(0x00017E90u, sub_00017E90); /* call 0x00017E90 */

loc_00271752: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271790
 * Original: 0x00271790 - 0x00271856 (198 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00271790: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    edx = MEM32(0x64D858);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = eax + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = edx;
    ebp = eax + 0x6270D8;
    PUSH32(esp, 0x002717E3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002717E3: ;
    edi = eax;
    PUSH32(esp, 0x002717EAu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002717EA: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002717F3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002717F3: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x002717FCu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002717FC: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00271805u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271805: ;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0027180Eu); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_0027180E: ;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00271817u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271817: ;
    edx = MEM32(0x64D1E4);
    ecx = MEM32(edx + 0x64);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    eax = ecx + eax * 4;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00271847u); RECOMP_ABI_CALL(0x000607E0u, sub_000607E0); /* call 0x000607E0 */

loc_00271847: ;
    eax = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271860
 * Original: 0x00271860 - 0x002718A1 (65 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271860(void)
{

loc_00271860: ;
    eax = MEM32(0x64D1E4);
    ecx = MEM32(eax + 0x64);
    eax = ecx + edx * 4;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002718A0u); RECOMP_ABI_CALL(0x00060770u, sub_00060770); /* call 0x00060770 */

loc_002718A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002718B0
 * Original: 0x002718B0 - 0x00271992 (226 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002718B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002718B0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D858);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = eax + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D858) = ebx;
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D854) = eax;
    ebx = eax + 0x6270D8;
    PUSH32(esp, 0x00271903u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271903: ;
    ebp = eax;
    PUSH32(esp, 0x0027190Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027190A: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00271913u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271913: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0027191Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027191C: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00271925u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271925: ;
    ecx = MEM32(0x64D858);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = eax + 0x6270D8;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x00271952u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271952: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x64);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    eax = edx + eax * 4;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00271983u); RECOMP_ABI_CALL(0x00060770u, sub_00060770); /* call 0x00060770 */

loc_00271983: ;
    eax = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0027190E
 * Original: 0x0027190E - 0x00271992 (132 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027190E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027190E: ;
    PUSH32(esp, 0x00271913u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271913: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0027191Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0027191C: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00271925u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271925: ;
    ecx = MEM32(0x64D858);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = eax + 0x6270D8;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x00271952u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271952: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x64);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    eax = edx + eax * 4;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00271983u); RECOMP_ABI_CALL(0x00060770u, sub_00060770); /* call 0x00060770 */

loc_00271983: ;
    eax = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002719A0
 * Original: 0x002719A0 - 0x002719D6 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002719A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002719A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002719A7u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002719A7: ;
    esi = eax;
    PUSH32(esp, 0x002719AEu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002719AE: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x64);
    eax = edx + eax * 4;
    MEM32(esp + 4) = esi;
    esi = MEM32(eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, 0x002719CCu); RECOMP_ABI_CALL(0x000608E0u, sub_000608E0); /* call 0x000608E0 */

loc_002719CC: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002719E0
 * Original: 0x002719E0 - 0x00271A3A (90 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002719E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002719E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002719E8u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_002719E8: ;
    ebx = eax;
    PUSH32(esp, 0x002719EFu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002719EF: ;
    edi = eax;
    PUSH32(esp, 0x002719F6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002719F6: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 0x64);
    esi = MEM32(edx + eax * 4);
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edx + eax * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00271A2F; /* je: equal / zero */

loc_00271A0C: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00271A2F; /* jae: above or equal (unsigned >=) */

loc_00271A18: ;
    eax = ecx;
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = eax + edi * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00271A2F; /* je: equal / zero */

loc_00271A24: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00271A2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00271A27u); } /* indirect call */
    }

loc_00271A2A: ;
    PUSH32(esp, 0x00271A2Fu); RECOMP_ABI_CALL(0x000605C0u, sub_000605C0); /* call 0x000605C0 */

loc_00271A2F: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271A40
 * Original: 0x00271A40 - 0x00271A8A (74 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271A40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271A46u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271A46: ;
    esi = eax;
    PUSH32(esp, 0x00271A4Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271A4D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    edx = MEM32(0x64D1E4);
    ecx = MEM32(edx + 4);
    eax = ecx + eax * 4;
    ecx = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00271A76; /* je: equal / zero */

loc_00271A60: ;
    edx = MEM32(edx + 0x44);
    eax = edx + esi * 4;
    eax = MEM32(eax);
    PUSH32(esp, 0x00271A6Du); RECOMP_ABI_CALL(0x0005F350u, sub_0005F350); /* call 0x0005F350 */

loc_00271A6D: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271A76: ;
    eax = MEM32(ecx + 0x88);
    PUSH32(esp, 0x00271A81u); RECOMP_ABI_CALL(0x0005F350u, sub_0005F350); /* call 0x0005F350 */

loc_00271A81: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00271A90
 * Original: 0x00271A90 - 0x00271ADF (79 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271A90: ;
    eax = MEM32(0x64D1E4);
    ecx = MEM32(eax + 0x44);
    eax = ecx + edx * 4;
    edx = MEM32(esp + 4);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x9C);
    if (CMP_EQ(_fa, _fb)) goto loc_00271AC9; /* je: equal / zero */

loc_00271AAE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271ADD; /* je: equal / zero */

loc_00271AB2: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271ADD; /* jne: not equal / not zero */

loc_00271AB7: ;
    MEM32(esi + 0x2C) = 1;
    MEM8(esi + 0x30) = 0xFF;
    PUSH32(esp, 0x00271AC7u); RECOMP_ABI_CALL(0x000605C0u, sub_000605C0); /* call 0x000605C0 */

loc_00271AC7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00271AC9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271ADD; /* je: equal / zero */

loc_00271ACD: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271ADD; /* je: equal / zero */

loc_00271AD2: ;
    MEM32(esi + 0x2C) = ecx;
    MEM8(esi + 0x30) = LO8(ecx);
    PUSH32(esp, 0x00271ADDu); RECOMP_ABI_CALL(0x000605C0u, sub_000605C0); /* call 0x000605C0 */

loc_00271ADD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00271AE0
 * Original: 0x00271AE0 - 0x00271B01 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271AE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271AE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271AE6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271AE6: ;
    esi = eax;
    PUSH32(esp, 0x00271AEDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271AED: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0x00271AF5u); RECOMP_ABI_CALL(0x00271A90u, sub_00271A90); /* call 0x00271A90 */

loc_00271AF5: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00271B10
 * Original: 0x00271B10 - 0x00271B4E (62 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271B10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271B17u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271B17: ;
    esi = eax;
    PUSH32(esp, 0x00271B1Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271B1E: ;
    ecx = MEM32(0x64D1E4);
    edx = MEM32(ecx + 4);
    ebx = MEM32(edx + esi * 4);
    edx = edx + esi * 4;
    MEM32(ecx + eax * 4 + 0x104) = ebx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x118;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271B44u); RECOMP_ABI_CALL(0x0005F6E0u, sub_0005F6E0); /* call 0x0005F6E0 */

loc_00271B44: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271B50
 * Original: 0x00271B50 - 0x00271BD1 (129 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00271B50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00271B5Au); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00271B5A: ;
    esi = eax;
    PUSH32(esp, 0x00271B61u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00271B61: ;
    edi = eax;
    PUSH32(esp, 0x00271B68u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00271B68: ;
    ebx = eax;
    PUSH32(esp, 0x00271B6Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271B6F: ;
    ebp = eax;
    PUSH32(esp, 0x00271B76u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271B76: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00271B7Fu); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00271B7F: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271B8Eu); RECOMP_ABI_CALL(0x00018460u, sub_00018460); /* call 0x00018460 */

loc_00271B8E: ;
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271BE0
 * Original: 0x00271BE0 - 0x00271C2A (74 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271BE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271BE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00271BE6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271BE6: ;
    MEM32(esp) = eax;
    PUSH32(esp, 0x00271BEEu); RECOMP_ABI_CALL(0x00018790u, sub_00018790); /* call 0x00018790 */

loc_00271BEE: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271C30
 * Original: 0x00271C30 - 0x00271CAE (126 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271C30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00271C36u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00271C36: ;
    ecx = MEM32(0x64D1E4);
    SET_LO16(esi, MEM16(ecx + 0x16C));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(eax) (16-bit) */
    edx = 0x10000;
    if (CMP_NE(_fa, _fb)) goto loc_00271C55; /* jne: not equal / not zero */

loc_00271C4D: ;
    edx = MEM32(ecx + 0x168);
    goto loc_00271C70;

loc_00271C55: ;
    _fa = (uint32_t)(MEM16(ecx + 0x17C)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x17C), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271C66; /* jne: not equal / not zero */

loc_00271C5E: ;
    edx = MEM32(ecx + 0x178);
    goto loc_00271C70;

loc_00271C66: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271C70; /* je: equal / zero */

loc_00271C6B: ;
    edx = 0x20000;

loc_00271C70: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00271CB0
 * Original: 0x00271CB0 - 0x00271CC7 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271CB0: ;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD0) = 2;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271CD0
 * Original: 0x00271CD0 - 0x00271D0A (58 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271CD0: ;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD0) = 2;
    ecx = MEM32(eax * 8 + 0x616FD4);
    eax = eax * 8 + 0x616FD4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = MEM32(eax);
    ecx = MEM32(0x64D854);
    MEM32(ecx + 0x6270B8) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271D10
 * Original: 0x00271D10 - 0x00271D4A (58 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271D10: ;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD0) = 2;
    ecx = MEM32(eax * 8 + 0x616FD4);
    eax = eax * 8 + 0x616FD4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = MEM32(eax);
    ecx = MEM32(0x64D854);
    MEM32(ecx + 0x6270B8) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271D50
 * Original: 0x00271D50 - 0x00271D6C (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271D50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271D50: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(0x60D180));
    MEM16(eax * 8 + 0x616FD0) = LO16(ecx);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271D70
 * Original: 0x00271D70 - 0x00271DB0 (64 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271D70: ;
    ecx = MEM32(0x64D858);
    edx = MEM32(ecx * 8 + 0x616FD4);
    eax = ecx * 8 + 0x616FD4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    SET_LO16(edx, MEM16(0x60D180));
    MEM16(ecx * 8 + 0x616FD0) = LO16(edx);
    eax = MEM32(eax);
    ecx = MEM32(eax);
    edx = MEM32(0x64D854);
    eax = MEM32(esp + 4);
    MEM32(edx + 0x6270B8) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271DB0
 * Original: 0x00271DB0 - 0x00271DF0 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271DB0: ;
    ecx = MEM32(0x64D858);
    edx = MEM32(ecx * 8 + 0x616FD4);
    eax = ecx * 8 + 0x616FD4;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(0x64D854);
    MEM16(ecx * 8 + 0x616FD0) = 1;
    eax = MEM32(eax);
    ecx = MEM32(eax);
    eax = MEM32(esp + 4);
    MEM32(edx + 0x6270B8) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271DF0
 * Original: 0x00271DF0 - 0x00271E3D (77 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271DF0: ;
    ecx = MEM32(0x64D858);
    edx = MEM32(ecx * 8 + 0x616FD4);
    eax = ecx * 8 + 0x616FD4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    MEM16(ecx * 8 + 0x616FD0) = 3;
    eax = MEM32(eax);
    edx = MEM32(eax);
    ecx = MEM32(0x64D854);
    MEM32(ecx + 0x6270B8) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x6270BC) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x6270C0) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271E40
 * Original: 0x00271E40 - 0x00271E8D (77 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271E40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271E40: ;
    ecx = MEM32(0x64D858);
    edx = MEM32(ecx * 8 + 0x616FD4);
    eax = ecx * 8 + 0x616FD4;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    MEM16(ecx * 8 + 0x616FD0) = 3;
    eax = MEM32(eax);
    edx = MEM32(eax);
    ecx = MEM32(0x64D854);
    MEM32(ecx + 0x6270B8) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x6270BC) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x6270C0) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271E90
 * Original: 0x00271E90 - 0x00271ECB (59 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271E90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271E90: ;
    ecx = MEM32(0x64D858);
    edx = MEM32(ecx * 8 + 0x616FD4);
    eax = ecx * 8 + 0x616FD4;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(0x64D854);
    MEM16(ecx * 8 + 0x616FD0) = 1;
    eax = MEM32(eax);
    ecx = MEM32(eax);
    eax = MEM32(esp + 4);
    MEM32(edx + 0x6270B8) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271ED0
 * Original: 0x00271ED0 - 0x00271F0B (59 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271ED0: ;
    ecx = MEM32(0x64D858);
    edx = MEM32(ecx * 8 + 0x616FD4);
    eax = ecx * 8 + 0x616FD4;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(0x64D854);
    MEM16(ecx * 8 + 0x616FD0) = 1;
    eax = MEM32(eax);
    ecx = MEM32(eax);
    eax = MEM32(esp + 4);
    MEM32(edx + 0x6270B8) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271F10
 * Original: 0x00271F10 - 0x00271F4B (59 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271F10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271F10: ;
    ecx = MEM32(0x64D858);
    edx = MEM32(ecx * 8 + 0x616FD4);
    eax = ecx * 8 + 0x616FD4;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(0x64D854);
    MEM16(ecx * 8 + 0x616FD0) = 2;
    eax = MEM32(eax);
    ecx = MEM32(eax);
    eax = MEM32(esp + 4);
    MEM32(edx + 0x6270B8) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271F50
 * Original: 0x00271F50 - 0x00271F8B (59 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271F50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271F50: ;
    ecx = MEM32(0x64D858);
    edx = MEM32(ecx * 8 + 0x616FD4);
    eax = ecx * 8 + 0x616FD4;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(0x64D854);
    MEM16(ecx * 8 + 0x616FD0) = 2;
    eax = MEM32(eax);
    ecx = MEM32(eax);
    eax = MEM32(esp + 4);
    MEM32(edx + 0x6270B8) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00271F90
 * Original: 0x00271F90 - 0x0027200E (126 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271F90: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x00271FBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00271FB7u); } /* indirect call */
    }

loc_00271FBE: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00271FE2; /* je: equal / zero */

loc_00271FD7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00271FE8; /* jne: not equal / not zero */

loc_00271FDA: ;
    esi = MEM32(0x614FD0);
    goto loc_00271FE8;

loc_00271FE2: ;
    esi = MEM32(0x614FCC);

loc_00271FE8: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = 1;
    PUSH32(esp, 0x00272002u); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_00272002: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272010
 * Original: 0x00272010 - 0x00272091 (129 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272010: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x0027203Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272037u); } /* indirect call */
    }

loc_0027203E: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00272062; /* je: equal / zero */

loc_00272057: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272068; /* jne: not equal / not zero */

loc_0027205A: ;
    esi = MEM32(0x614FD0);
    goto loc_00272068;

loc_00272062: ;
    esi = MEM32(0x614FCC);

loc_00272068: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = 1;
    PUSH32(esp, 0x00272085u); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_00272085: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002720A0
 * Original: 0x002720A0 - 0x00272121 (129 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002720A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002720A0: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x002720CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002720C7u); } /* indirect call */
    }

loc_002720CE: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_002720F2; /* je: equal / zero */

loc_002720E7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002720F8; /* jne: not equal / not zero */

loc_002720EA: ;
    esi = MEM32(0x614FD0);
    goto loc_002720F8;

loc_002720F2: ;
    esi = MEM32(0x614FCC);

loc_002720F8: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = 1;
    PUSH32(esp, 0x00272115u); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_00272115: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272130
 * Original: 0x00272130 - 0x002721B6 (134 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272130: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x0027215Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272157u); } /* indirect call */
    }

loc_0027215E: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00272182; /* je: equal / zero */

loc_00272177: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272188; /* jne: not equal / not zero */

loc_0027217A: ;
    esi = MEM32(0x614FD0);
    goto loc_00272188;

loc_00272182: ;
    esi = MEM32(0x614FCC);

loc_00272188: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    SET_LO16(ecx, MEM16(0x60D188));
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = LO16(ecx);
    PUSH32(esp, 0x002721AAu); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_002721AA: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002721C0
 * Original: 0x002721C0 - 0x00272246 (134 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002721C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002721C0: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x002721EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002721E7u); } /* indirect call */
    }

loc_002721EE: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00272212; /* je: equal / zero */

loc_00272207: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272218; /* jne: not equal / not zero */

loc_0027220A: ;
    esi = MEM32(0x614FD0);
    goto loc_00272218;

loc_00272212: ;
    esi = MEM32(0x614FCC);

loc_00272218: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    SET_LO16(ecx, MEM16(0x60D188));
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x44;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = LO16(ecx);
    PUSH32(esp, 0x0027223Au); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_0027223A: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272250
 * Original: 0x00272250 - 0x002722D1 (129 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272250: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x0027227Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272277u); } /* indirect call */
    }

loc_0027227E: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_002722A2; /* je: equal / zero */

loc_00272297: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002722A8; /* jne: not equal / not zero */

loc_0027229A: ;
    esi = MEM32(0x614FD0);
    goto loc_002722A8;

loc_002722A2: ;
    esi = MEM32(0x614FCC);

loc_002722A8: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = 2;
    PUSH32(esp, 0x002722C5u); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_002722C5: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002722E0
 * Original: 0x002722E0 - 0x00272361 (129 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002722E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002722E0: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x0027230Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272307u); } /* indirect call */
    }

loc_0027230E: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00272332; /* je: equal / zero */

loc_00272327: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272338; /* jne: not equal / not zero */

loc_0027232A: ;
    esi = MEM32(0x614FD0);
    goto loc_00272338;

loc_00272332: ;
    esi = MEM32(0x614FCC);

loc_00272338: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = 2;
    PUSH32(esp, 0x00272355u); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_00272355: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272370
 * Original: 0x00272370 - 0x002723F1 (129 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272370: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x0027239Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272397u); } /* indirect call */
    }

loc_0027239E: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_002723C2; /* je: equal / zero */

loc_002723B7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002723C8; /* jne: not equal / not zero */

loc_002723BA: ;
    esi = MEM32(0x614FD0);
    goto loc_002723C8;

loc_002723C2: ;
    esi = MEM32(0x614FCC);

loc_002723C8: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = 3;
    PUSH32(esp, 0x002723E5u); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_002723E5: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272400
 * Original: 0x00272400 - 0x00272481 (129 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272400: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x0027242Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272427u); } /* indirect call */
    }

loc_0027242E: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00272452; /* je: equal / zero */

loc_00272447: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272458; /* jne: not equal / not zero */

loc_0027244A: ;
    esi = MEM32(0x614FD0);
    goto loc_00272458;

loc_00272452: ;
    esi = MEM32(0x614FCC);

loc_00272458: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = 3;
    PUSH32(esp, 0x00272475u); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_00272475: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272490
 * Original: 0x00272490 - 0x00272516 (134 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272490: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x002724BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002724B7u); } /* indirect call */
    }

loc_002724BE: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_002724E2; /* je: equal / zero */

loc_002724D7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002724E8; /* jne: not equal / not zero */

loc_002724DA: ;
    esi = MEM32(0x614FD0);
    goto loc_002724E8;

loc_002724E2: ;
    esi = MEM32(0x614FCC);

loc_002724E8: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    SET_LO16(ecx, MEM16(0x60D180));
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = LO16(ecx);
    PUSH32(esp, 0x0027250Au); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_0027250A: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00272520
 * Original: 0x00272520 - 0x002725A6 (134 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00272520: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x0027254Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00272547u); } /* indirect call */
    }

loc_0027254E: ;
    edx = MEM32(0x64D854);
    esi = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    if ((_fa == 0)) goto loc_00272572; /* je: equal / zero */

loc_00272567: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00272578; /* jne: not equal / not zero */

loc_0027256A: ;
    esi = MEM32(0x614FD0);
    goto loc_00272578;

loc_00272572: ;
    esi = MEM32(0x614FCC);

loc_00272578: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 8);
    SET_LO16(ecx, MEM16(0x60D180));
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 4;
    MEM32(esp + 8) = eax;
    MEM16(esp + 4) = LO16(ecx);
    PUSH32(esp, 0x0027259Au); RECOMP_ABI_CALL(0x00110350u, sub_00110350); /* call 0x00110350 */

loc_0027259A: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
