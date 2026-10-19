/**
 * PoP SoT xbox-retail - xdk/d3d8, chunk 1
 * Direct3D 8 for the NV2A (D3D section)
 * Functions: 87 (0x003735B6 - 0x00379158)
 */

#define RECOMP_GENERATED_CODE
#include "../../recomp_funcs.h"
#include <math.h>

/**
 * sub_003735B6
 * Original: 0x003735B6 - 0x003737A4 (494 bytes, 141 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003735B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003735B6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, edi);
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003735CDu); RECOMP_ABI_CALL(0x003732A1u, sub_003732A1); /* call 0x003732A1 */

loc_003735CD: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0xC);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -20) = eax;
    eax = 0x1FFC;
    ecx = edi * 4 + 0x10;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0xEA0000;
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -12) = ecx;
    ecx = edi * 4 + 0x30;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -24) = ecx;
    ecx = MEM32(ebp + 0x10);
    ecx = edx + ecx + -1;
    MEM32(ebp + -16) = ecx;
    ecx = edi * 4 + 0x50;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edi + 0x10024;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    eax = edi + 0x40090;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = eax;
    eax = edi;
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = ecx;
    MEM32(ebp + -4) = eax;

loc_00373640: ;
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373648u); RECOMP_ABI_CALL(0x003773BEu, sub_003773BE); /* call 0x003773BE */

loc_00373648: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    eax = MEM32(ebp + -4);
    edx = MEM32(ebp + -16);
    ecx = MEM32(ebp + 0x14);
    MEM32(eax + 0x100244) = edx;
    MEM32(eax + 0x100248) = ecx;
    MEM32(eax + 0x400904) = edx;
    edx = MEM32(ebp + 0x10);
    MEM32(eax + 0x400908) = ecx;
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0037367A; /* je: equal / zero */

loc_00373675: ;
    eax = eax | 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0037367D;

loc_0037367A: ;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0037367D: ;
    MEM32(edx) = eax;
    edx = MEM32(ebp + 8);
    MEM32(edx) = eax;
    edx = MEM32(ebp + -12);
    MEM32(esi + 0x400750) = edx;
    MEM32(esi + 0x400754) = eax;
    eax = MEM32(ebp + -24);
    MEM32(esi + 0x400750) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0x400754) = eax;
    eax = MEM32(ebp + -28);
    MEM32(esi + 0x400750) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x400754) = ecx;
    eax = MEM32(eax);
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373640; /* jne: not equal / not zero */

loc_003736C0: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx + 0x100248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x400908)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x400908) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373640; /* jne: not equal / not zero */

loc_003736D5: ;
    eax = ecx;
    ecx = MEM32(eax + 0x100244);
    eax = MEM32(eax + 0x400904);
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFC000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFC000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00373640; /* jne: not equal / not zero */

loc_003736F0: ;
    ecx = 0x80000000u;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x18), ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00373791; /* je: equal / zero */

loc_003736FE: ;
    eax = MEM32(ebp + 0x1C);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0x4000000;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x18), ecx (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00373718; /* je: equal / zero */

loc_00373713: ;
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0xC) = eax;

loc_00373718: ;
    eax = edi * 4 + 0x90;
    eax = eax & 0x1FFC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x18) = eax;
    ebx = esi + edi * 4 + 0x100300;

loc_00373730: ;
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373738u); RECOMP_ABI_CALL(0x003773BEu, sub_003773BE); /* call 0x003773BE */

loc_00373738: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x18);
    MEM32(ebx) = eax;
    MEM32(esi + edi * 4 + 0x400980) = eax;
    MEM32(esi + 0x400750) = ecx;
    MEM32(esi + 0x400754) = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + edi * 4 + 0x400980)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + edi * 4 + 0x400980) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373730; /* jne: not equal / not zero */

loc_0037375E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373791; /* je: equal / zero */

loc_00373764: ;
    edi = edi | MEM32(ebp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = esi + 0x100324;
    edi = edi | 0x80000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0xC) = edi;
    edi = esi + 0x4009A0;

loc_0037377C: ;
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373784u); RECOMP_ABI_CALL(0x003773BEu, sub_003773BE); /* call 0x003773BE */

loc_00373784: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebx) = eax;
    MEM32(edi) = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037377C; /* jne: not equal / not zero */

loc_00373791: ;
    eax = MEM32(ebp + -32);
    MEM32(esi + 0x3220) = eax;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_003737A4
 * Original: 0x003737A4 - 0x00373866 (194 bytes, 56 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003737A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003737A4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003737BBu); RECOMP_ABI_CALL(0x003732A1u, sub_003732A1); /* call 0x003732A1 */

loc_003737BB: ;
    edi = MEM32(ebp + 8);
    eax = edi + 0x10024;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    ebx = edi * 4 + 0x10;
    ebx = ebx & 0x1FFC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edi + 0x40090;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | 0xEA0000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;

loc_003737ED: ;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003737F5u); RECOMP_ABI_CALL(0x003773BEu, sub_003773BE); /* call 0x003773BE */

loc_003737F5: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edx;
    MEM32(ecx) = edx;
    MEM32(esi + 0x400750) = ebx;
    MEM32(esi + 0x400754) = edx;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003737ED; /* jne: not equal / not zero */

loc_00373813: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi * 4 + 0x90;
    ecx = ecx & 0x1FFC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + edi * 4 + 0x100300) = eax;
    ecx = ecx | 0xEA0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    MEM32(esi + edi * 4 + 0x400980) = eax;
    MEM32(esi + 0x400750) = ecx;
    MEM32(esi + 0x400754) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00373853; /* je: equal / zero */

loc_00373847: ;
    MEM32(esi + 0x100324) = eax;
    MEM32(esi + 0x4009A0) = eax;

loc_00373853: ;
    eax = MEM32(ebp + -12);
    MEM32(esi + 0x3220) = eax;
    POP32(esp, edi);
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
 * sub_00373866
 * Original: 0x00373866 - 0x00373A22 (444 bytes, 119 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00373866(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373866: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    eax = edi + 0x818;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373887; /* je: equal / zero */

loc_0037387F: ;
    MEM32(esi + 0x9140) = ebx;
    MEM32(eax) = ebx;

loc_00373887: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x418220); PUSH32(esp, 0x0037388Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373887u); } /* indirect call */
    }

loc_0037388D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037389D; /* jne: not equal / not zero */

loc_00373891: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 9);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x418224); PUSH32(esp, 0x0037389Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373897u); } /* indirect call */
    }

loc_0037389D: ;
    MEM32(ebp + -4) = ebx;

loc_003738A0: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003738ACu); RECOMP_ABI_CALL(0x003737A4u, sub_003737A4); /* call 0x003737A4 */

loc_003738AC: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003738A0; /* jl: less (signed <) */

loc_003738B5: ;
    MEM32(esi + 0x2044) = ebx;

loc_003738BB: ;
    _fa = (uint32_t)(MEM8(esi + 0x3214)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3214), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003738D6; /* je: equal / zero */

loc_003738C4: ;
    _fa = (uint32_t)(MEM8(esi + 0x2400)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2400), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003738D6; /* je: equal / zero */

loc_003738CD: ;
    _fa = (uint32_t)(MEM8(esi + 0x3220)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3220), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00373901; /* je: equal / zero */

loc_003738D6: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003738DDu); RECOMP_ABI_CALL(0x00372C10u, sub_00372C10); /* call 0x00372C10 */

loc_003738DD: ;
    _fa = (uint32_t)(MEM32(esi + 0x400100)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x400100), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003738EC; /* je: equal / zero */

loc_003738E5: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003738ECu); RECOMP_ABI_CALL(0x00372B60u, sub_00372B60); /* call 0x00372B60 */

loc_003738EC: ;
    _fa = (uint32_t)(MEM32(esi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x100), 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003738BB; /* je: equal / zero */

loc_003738F8: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003738FFu); RECOMP_ABI_CALL(0x003725F0u, sub_003725F0); /* call 0x003725F0 */

loc_003738FF: ;
    goto loc_003738BB;

loc_00373901: ;
    eax = esi + 0x3220;
    MEM32(eax) = ebx;

loc_00373909: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00373909; /* jne: not equal / not zero */

loc_0037390E: ;
    MEM32(esi + 0x2500) = ebx;
    MEM32(esi + 0x3000) = ebx;
    MEM32(esi + 0x3050) = ebx;
    MEM32(esi + 0x3200) = ebx;
    MEM32(esi + 0x3250) = ebx;
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373935u); RECOMP_ABI_CALL(0x00377436u, sub_00377436); /* call 0x00377436 */

loc_00373935: ;
    MEM32(esi + 0x3210) = ebx;
    MEM32(esi + 0x3270) = ebx;
    eax = MEM32(esi + 0x2500);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0x3200);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x3250);
    MEM32(esi + 0x2500) = ebx;
    MEM32(esi + 0x3200) = ebx;
    MEM32(ebp + -8) = eax;
    MEM32(esi + 0x3250) = ebx;
    MEM32(ebp + -4) = ebx;

loc_00373971: ;
    _fa = (uint32_t)(MEM32(edi + 0x108)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x108), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373998; /* je: equal / zero */

loc_00373979: ;
    ecx = MEM32(ebp + -4);
    eax = edi + 0x128;
    edx = MEM32(eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(ebp + -4);
    eax = MEM32(eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + eax + 0x10) = ebx;

loc_00373998: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x40;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x80 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00373971; /* jb: below (unsigned <) */

loc_003739A5: ;
    eax = MEM32(ebp + -8);
    MEM32(esi + 0x3250) = eax;
    eax = MEM32(ebp + -12);
    MEM32(esi + 0x3200) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0x2500) = eax;
    MEM32(esi + 0x2508) = ebx;
    MEM32(esi + 0x2140) = ebx;
    PUSH32(esp, 2);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003739D5u); RECOMP_ABI_CALL(0x0037825Fu, sub_0037825F); /* call 0x0037825F */

loc_003739D5: ;
    eax = MEM32(edi + 0x14C);
    MEM32(esi + 0x100200) = eax;
    eax = MEM32(edi + 0x150);
    MEM32(esi + 0x100204) = eax;
    eax = MEM32(edi + 0x154);
    MEM32(esi + 0x200) = eax;
    eax = MEM32(edi + 0x158);
    MEM32(esi + 0x140) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = edi + 0x164;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x4181DC); PUSH32(esp, 0x00373A13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373A0Du); } /* indirect call */
    }

loc_00373A13: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x418234); PUSH32(esp, 0x00373A1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373A17u); } /* indirect call */
    }

loc_00373A1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00373A30
 * Original: 0x00373A30 - 0x00373AC8 (152 bytes, 42 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373A30: ;
    ecx = MEM32(0x37B554);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373AC7; /* je: equal / zero */

loc_00373A40: ;
    eax = MEM32(0x37B558);
    ecx = MEM32(0x37B55C);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(0x37B560);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(0x37B564);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(0x37B568);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(0x37B56C);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(0x37B570);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(0x37B574);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(0x37B648);
    ecx = MEM32(ecx + 0x794);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00373AA9; /* jne: not equal / not zero */

loc_00373AA6: ;
    eax = eax & 0xFFFFFFAAu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00373AA9: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00373AB3; /* jne: not equal / not zero */

loc_00373AAE: ;
    eax = eax & 0xFFFFFF55u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00373AB3: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00373ABD; /* jne: not equal / not zero */

loc_00373AB8: ;
    eax = eax & 0xFFFFAAFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00373ABD: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00373AC7; /* jne: not equal / not zero */

loc_00373AC2: ;
    eax = eax & 0xFFFF55FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00373AC7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00373AD0
 * Original: 0x00373AD0 - 0x00373C35 (357 bytes, 99 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373AD0(void)
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

loc_00373AD0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00373AE5; /* jb: below (unsigned <) */

loc_00373AE0: ;
    PUSH32(esp, 0x00373AE5u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00373AE5: ;
    ecx = MEM32(0x37B584);
    edx = MEM32(0x37B59C);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(0x37B580);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x37B58C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = eax;
    MEM32(esp + 0x20) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00373B59; /* jne: not equal / not zero */

loc_00373B0F: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x964)); /* fmul dword ptr [edi + 0x964] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00373B2A; /* jp: parity */

loc_00373B24: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */

loc_00373B2A: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00373B3B; /* jne: not equal / not zero */

loc_00373B35: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */

loc_00373B3B: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x37A334)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x37a334] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00373BEC; /* jne: not equal / not zero */

loc_00373B4C: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x37A334)); /* fld float */
    goto loc_00373BEC;

loc_00373B59: ;
    edx = MEM32(0x37B590);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(0x37B594);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(0x37B598);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(edi + 0xEEC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0xC) = edx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00373B9F; /* jge: greater or equal (signed >=) */

loc_00373B99: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_00373B9F: ;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(eax) = 0x200A30;
    edx = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x20) / fp_top()); /* fdivr dword ptr [esp + 0x20] */
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 0x20) = edx;
    esi = eax + 0x24;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x20)); /* fdiv dword ptr [esp + 0x20] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */

loc_00373BEC: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429398)); /* fmul dword ptr [0x429398] */
    eax = MEM32(0x37B588);
    MEM32(esi) = 0x80318;
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00373C12u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_00373C12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1FF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00373C1E; /* jbe: below or equal (unsigned <=) */

loc_00373C19: ;
    eax = 0x1FF;

loc_00373C1E: ;
    MEM32(esi + 0xC) = 0x4043C;
    MEM32(esi + 0x10) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00373C40
 * Original: 0x00373C40 - 0x00373FBC (892 bytes, 306 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00373C40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x784);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00373DA6; /* jne: not equal / not zero */

loc_00373C54: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = 1;
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00373C64; /* jns: not sign (positive) */

loc_00373C60: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00373CA2;

loc_00373C64: ;
    edx = MEM32(0x37B2E0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x19 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373C76; /* jne: not equal / not zero */

loc_00373C6F: ;
    ecx = 6;
    goto loc_00373CA2;

loc_00373C76: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373C82; /* jne: not equal / not zero */

loc_00373C7B: ;
    ecx = 7;
    goto loc_00373CA2;

loc_00373C82: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00373C8D; /* je: equal / zero */

loc_00373C86: ;
    ecx = 3;
    goto loc_00373CA2;

loc_00373C8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00373C9D; /* jne: not equal / not zero */

loc_00373C94: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373CA2; /* jne: not equal / not zero */

loc_00373C9D: ;
    ecx = 2;

loc_00373CA2: ;
    eax = ecx;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = 1;
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00373CB4; /* jns: not sign (positive) */

loc_00373CB0: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00373CF6;

loc_00373CB4: ;
    esi = MEM32(0x37B260);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x19 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373CC6; /* jne: not equal / not zero */

loc_00373CBF: ;
    edx = 6;
    goto loc_00373CF6;

loc_00373CC6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373CD2; /* jne: not equal / not zero */

loc_00373CCB: ;
    edx = 7;
    goto loc_00373CF6;

loc_00373CD2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00373CDE; /* je: equal / zero */

loc_00373CD7: ;
    edx = 3;
    goto loc_00373CF6;

loc_00373CDE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x40000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00373CF1; /* jne: not equal / not zero */

loc_00373CE6: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373CF6; /* jne: not equal / not zero */

loc_00373CF1: ;
    edx = 2;

loc_00373CF6: ;
    ecx = MEM32(edi + 0x10);
    if (5) _cf = (int)(((eax) >> (32 - (5))) & 1);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = 1;
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00373D0B; /* jns: not sign (positive) */

loc_00373D07: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00373D4D;

loc_00373D0B: ;
    esi = MEM32(0x37B1E0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x19 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373D1D; /* jne: not equal / not zero */

loc_00373D16: ;
    edx = 6;
    goto loc_00373D4D;

loc_00373D1D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373D29; /* jne: not equal / not zero */

loc_00373D22: ;
    edx = 7;
    goto loc_00373D4D;

loc_00373D29: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00373D35; /* je: equal / zero */

loc_00373D2E: ;
    edx = 3;
    goto loc_00373D4D;

loc_00373D35: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x40000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00373D48; /* jne: not equal / not zero */

loc_00373D3D: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373D4D; /* jne: not equal / not zero */

loc_00373D48: ;
    edx = 2;

loc_00373D4D: ;
    ecx = MEM32(edi + 0xC);
    if (5) _cf = (int)(((eax) >> (32 - (5))) & 1);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = 1;
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00373D6C; /* jns: not sign (positive) */

loc_00373D5E: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if (5) _cf = (int)(((eax) >> (32 - (5))) & 1);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = eax;
    goto loc_00373F9D;

loc_00373D6C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00373D82; /* je: equal / zero */

loc_00373D71: ;
    edx = 3;
    if (5) _cf = (int)(((eax) >> (32 - (5))) & 1);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = eax;
    goto loc_00373F9D;

loc_00373D82: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x40000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00373D95; /* jne: not equal / not zero */

loc_00373D8A: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373D9A; /* jne: not equal / not zero */

loc_00373D95: ;
    edx = 2;

loc_00373D9A: ;
    if (5) _cf = (int)(((eax) >> (32 - (5))) & 1);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = eax;
    goto loc_00373F9D;

loc_00373DA6: ;
    eax = MEM32(edi + 0x78C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = MEM32(edi + 0x790);
    if (CMP_EQ(_fa, _fb)) goto loc_00373F9D; /* je: equal / zero */

loc_00373DBA: ;
    ecx = MEM32(edi + 0x18);
    eax = esi;
    if (0xF) _cf = (int)(((eax) >> ((0xF) - 1)) & 1);
    eax = eax >> 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00373DE1; /* jns: not sign (positive) */

loc_00373DC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373DE1; /* je: equal / zero */

loc_00373DCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373DE1; /* je: equal / zero */

loc_00373DD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373DE1; /* je: equal / zero */

loc_00373DD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373DE1; /* je: equal / zero */

loc_00373DDD: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00373E30;

loc_00373DE1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00373E18; /* jb: below (unsigned <) */

loc_00373DE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00373E18; /* ja: above (unsigned >) */

loc_00373DEB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00373DF7; /* je: equal / zero */

loc_00373DF0: ;
    eax = 3;
    goto loc_00373E30;

loc_00373DF7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x40000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00373E11; /* jne: not equal / not zero */

loc_00373DFF: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373E11; /* je: equal / zero */

loc_00373E0A: ;
    eax = 1;
    goto loc_00373E30;

loc_00373E11: ;
    eax = 2;
    goto loc_00373E30;

loc_00373E18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373E22; /* je: equal / zero */

loc_00373E1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373E30; /* jne: not equal / not zero */

loc_00373E22: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xD)) >> 32) & 1);
    ecx = ecx + 0xD;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;

loc_00373E30: ;
    edx = MEM32(edi + 0x14);
    ecx = esi;
    if (0xA) _cf = (int)(((ecx) >> ((0xA) - 1)) & 1);
    ecx = ecx >> 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00373E57; /* jns: not sign (positive) */

loc_00373E3F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373E57; /* je: equal / zero */

loc_00373E44: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373E57; /* je: equal / zero */

loc_00373E49: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373E57; /* je: equal / zero */

loc_00373E4E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x11 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373E57; /* je: equal / zero */

loc_00373E53: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00373EA6;

loc_00373E57: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00373E8E; /* jb: below (unsigned <) */

loc_00373E5C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00373E8E; /* ja: above (unsigned >) */

loc_00373E61: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00373E6D; /* je: equal / zero */

loc_00373E66: ;
    ecx = 3;
    goto loc_00373EA6;

loc_00373E6D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x40000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00373E87; /* jne: not equal / not zero */

loc_00373E75: ;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373E87; /* je: equal / zero */

loc_00373E80: ;
    ecx = 1;
    goto loc_00373EA6;

loc_00373E87: ;
    ecx = 2;
    goto loc_00373EA6;

loc_00373E8E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373E98; /* je: equal / zero */

loc_00373E93: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373EA6; /* jne: not equal / not zero */

loc_00373E98: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 4);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xD)) >> 32) & 1);
    edx = edx + 0xD;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;

loc_00373EA6: ;
    if (5) _cf = (int)(((eax) >> (32 - (5))) & 1);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(edi + 0x10);
    edx = eax;
    eax = esi;
    if (5) _cf = (int)(((eax) >> ((5) - 1)) & 1);
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00373ED4; /* jns: not sign (positive) */

loc_00373EBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373ED4; /* je: equal / zero */

loc_00373EC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373ED4; /* je: equal / zero */

loc_00373EC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373ED4; /* je: equal / zero */

loc_00373ECB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373ED4; /* je: equal / zero */

loc_00373ED0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00373F23;

loc_00373ED4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00373F0B; /* jb: below (unsigned <) */

loc_00373ED9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00373F0B; /* ja: above (unsigned >) */

loc_00373EDE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00373EEA; /* je: equal / zero */

loc_00373EE3: ;
    eax = 3;
    goto loc_00373F23;

loc_00373EEA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x40000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00373F04; /* jne: not equal / not zero */

loc_00373EF2: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373F04; /* je: equal / zero */

loc_00373EFD: ;
    eax = 1;
    goto loc_00373F23;

loc_00373F04: ;
    eax = 2;
    goto loc_00373F23;

loc_00373F0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373F15; /* je: equal / zero */

loc_00373F10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373F23; /* jne: not equal / not zero */

loc_00373F15: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xD)) >> 32) & 1);
    ecx = ecx + 0xD;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;

loc_00373F23: ;
    if (5) _cf = (int)(((edx) >> (32 - (5))) & 1);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(edi + 0xC);
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = esi;
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00373F4C; /* jns: not sign (positive) */

loc_00373F34: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373F4C; /* je: equal / zero */

loc_00373F39: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373F4C; /* je: equal / zero */

loc_00373F3E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373F4C; /* je: equal / zero */

loc_00373F43: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x11 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373F4C; /* je: equal / zero */

loc_00373F48: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00373F96;

loc_00373F4C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00373F7F; /* jb: below (unsigned <) */

loc_00373F51: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00373F7F; /* ja: above (unsigned >) */

loc_00373F56: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00373F61; /* je: equal / zero */

loc_00373F5A: ;
    ecx = 3;
    goto loc_00373F96;

loc_00373F61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00373F78; /* jne: not equal / not zero */

loc_00373F68: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373F78; /* je: equal / zero */

loc_00373F71: ;
    ecx = 1;
    goto loc_00373F96;

loc_00373F78: ;
    ecx = 2;
    goto loc_00373F96;

loc_00373F7F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373F89; /* je: equal / zero */

loc_00373F84: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373F96; /* jne: not equal / not zero */

loc_00373F89: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xD)) >> 32) & 1);
    eax = eax + 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;

loc_00373F96: ;
    if (5) _cf = (int)(((edx) >> (32 - (5))) & 1);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = edx;

loc_00373F9D: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00373FA9; /* jb: below (unsigned <) */

loc_00373FA4: ;
    PUSH32(esp, 0x00373FA9u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00373FA9: ;
    MEM32(eax) = 0x41E70;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00373FC0
 * Original: 0x00373FC0 - 0x003741A5 (485 bytes, 142 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373FC0(void)
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

loc_00373FC0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x774) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x774;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 0x41B14;
    MEM32(esp + 0x18) = ecx;
    esi = 0x37B1B4;
    MEM32(esp + 0x1C) = 4;
    /* nop */

loc_00373FF0: ;
    _fa = (uint32_t)(MEM8(esp + 0x30)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x30), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037416A; /* je: equal / zero */

loc_00373FFB: ;
    eax = MEM32(esi + 4);
    ebp = MEM32(esi);
    edx = MEM32(esi + 0x6C);
    ebx = MEM32(esi + 0x20);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = MEM32(esi + 0x28);
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(edx * 4 + 0x37B538);
    edx = MEM32(esi + -4);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = MEM32(esi + 0x18);
    edi = edi << 0x1A;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi | ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi | ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx + 0x814);
    edi = edi | 0x3FFC0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374049; /* je: equal / zero */

loc_00374043: ;
    edi = edi | 0x40000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00374049: ;
    ebx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    ebp = MEM32(esi + 8);
    MEM32(esp + 0x10) = 0x2000;
    if (CMP_AE(_fa, _fb)) goto loc_00374064; /* jae: above or equal (unsigned >=) */

loc_0037405C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003740B3; /* jb: below (unsigned <) */

loc_00374061: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */

loc_00374064: ;
    if (CMP_A(_fa, _fb)) goto loc_0037408F; /* ja: above (unsigned >) */

loc_00374066: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0037408F; /* ja: above (unsigned >) */

loc_0037406B: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00374080; /* jne: not equal / not zero */

loc_00374072: ;
    ebx = 1;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = ebx;
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_003740B3;

loc_00374080: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = ebx;
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_003740B3;

loc_0037408F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374099; /* je: equal / zero */

loc_00374094: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003740A1; /* jne: not equal / not zero */

loc_00374099: ;
    MEM32(esp + 0x10) = 0x4000;

loc_003740A1: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) | 0x70000;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = 2;
    ebp = 4;

loc_003740B3: ;
    edx = MEM32(esp + 0x2C);
    eax = edi;
    eax = eax | 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    ecx = MEM32(esi + 0x14);
    MEM32(esp + 0x20) = ecx;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x968)); /* fadd dword ptr [edx + 0x968] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429368)); /* fmul dword ptr [0x429368] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x003740E6u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_003740E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFF000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003740F4; /* jge: greater or equal (signed >=) */

loc_003740ED: ;
    eax = 0xFFFFF000u;
    goto loc_00374100;

loc_003740F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00374100; /* jle: less or equal (signed <=) */

loc_003740FB: ;
    eax = 0xFFF;

loc_00374100: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 0x19 (32-bit) */
    ecx = 0xC0000000u;
    if (CMP_AE(_fa, _fb)) goto loc_0037410E; /* jae: above or equal (unsigned >=) */

loc_0037410B: ;
    ecx = MEM32(esi + 0x24);

loc_0037410E: ;
    edx = ebx + ebx * 2;
    ebx = MEM32(esi + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebx * 4 + 0x379408);
    ebx = MEM32(esp + 0x2C);
    eax = eax & 0x1FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x10);
    ebp = ebp << 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebx + 4);
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00374145; /* jb: below (unsigned <) */

loc_00374140: ;
    PUSH32(esp, 0x00374145u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00374145: ;
    ecx = MEM32(esp + 0x14);
    edx = ecx + 0x3FFF4;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x10) = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;

loc_0037416A: ;
    edi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_00373FF0; /* jne: not equal / not zero */

loc_0037419B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003741B0
 * Original: 0x003741B0 - 0x0037438C (476 bytes, 130 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003741B0(void)
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

loc_003741B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = esi;
    PUSH32(esp, 0x003741BFu); RECOMP_ABI_CALL(0x0036EF10u, sub_0036EF10); /* call 0x0036EF10 */

loc_003741BF: ;
    eax = MEM32(0x37B520);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00374325; /* je: equal / zero */

loc_003741CC: ;
    ecx = MEM32(0x37B528);
    eax = MEM32(0x37B524);
    edx = MEM32(0x37B52C);
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(0x37B534);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x37B530);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0037421C; /* jne: not equal / not zero */

loc_00374203: ;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0xC) = 0x3F800000;
    edi = 0x2601;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0037428E;

loc_0037421C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00374261; /* jne: not equal / not zero */

loc_00374221: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00374242; /* jnp: not parity */

loc_00374232: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    goto loc_00374248;

loc_00374242: ;
    fp_push(MEMF(0x37A338)); /* fld float */

loc_00374248: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edi = 0x2601;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429344)); /* fadd dword ptr [0x429344] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = -fp_top(); /* fchs */
    goto loc_0037428A;

loc_00374261: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esp + 0x18) = 0x3FC00000;
    if (CMP_NE(_fa, _fb)) goto loc_0037427F; /* jne: not equal / not zero */

loc_00374272: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x418A88)); /* fmul dword ptr [0x418a88] */
    edi = 0x800;
    goto loc_0037428A;

loc_0037427F: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x418A84)); /* fmul dword ptr [0x418a84] */
    edi = 0x801;

loc_0037428A: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_0037428E: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0037429A; /* jb: below (unsigned <) */

loc_00374295: ;
    PUSH32(esp, 0x0037429Au); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0037429A: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x18);
    MEM32(eax) = 0x802A0;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = 1;
    MEM32(eax + 0xC) = 0x4029C;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = 0xC09C0;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = 0;
    ecx = MEM32(esi + 0x784);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003742F2; /* je: equal / zero */

loc_003742DC: ;
    ecx = MEM32(esi + 0x788);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003742F2; /* je: equal / zero */

loc_003742E6: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x24)) >> 32) & 1);
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003742F2: ;
    ecx = MEM32(0x37B54C);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x20000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x130C0300) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x130C0300)) >> 32) & 1);
    ecx = ecx + 0x130C0300;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x24) = 0x80288;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = 0x1C80;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00374325: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00374331; /* jb: below (unsigned <) */

loc_0037432C: ;
    PUSH32(esp, 0x00374331u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00374331: ;
    MEM32(eax) = 0x402A4;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi + 0x784);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0037435E; /* je: equal / zero */

loc_00374348: ;
    ecx = MEM32(esi + 0x788);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0037435E; /* je: equal / zero */

loc_00374352: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0037435E: ;
    edx = MEM32(0x37B54C);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(eax + 8) = 0x80288;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x14)) >> 32) & 1);
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx + 0xC;
    MEM32(eax + -8) = ecx;
    MEM32(eax + -4) = 0x1C80;
    MEM32(esi) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
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
 * sub_00374390
 * Original: 0x00374390 - 0x00374710 (896 bytes, 278 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374390(void)
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

loc_00374390: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x794);
    SET_LO8(edx, MEM8(eax + 4));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x12 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0037470A; /* jne: not equal / not zero */

loc_003743A9: ;
    edx = MEM32(ecx + 0x1928);
    edx = edx & 0xFFFFFFEFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037470A; /* je: equal / zero */

loc_003743BB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = 0x3FF9B4;
    PUSH32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = 0x40420;
    MEM32(esp + 0xC) = 0x37B220;
    esi = ecx + 0xD0C;
    MEM32(esp + 0x10) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    /* nop */

loc_003743E0: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(eax + -28);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003743F7; /* jb: below (unsigned <) */

loc_003743EE: ;
    PUSH32(esp, 0x003743F3u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_003743F3: ;
    ecx = MEM32(esp + 0x20);

loc_003743F7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037440A; /* jne: not equal / not zero */

loc_003743FB: ;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    goto loc_003746E6;

loc_0037440A: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx);
    edx = ecx;
    edx = edx & 0xFFFF0000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = edx;
    if ((_fa == 0)) goto loc_00374425; /* je: equal / zero */

loc_0037441E: ;
    edx = 3;
    goto loc_0037444A;

loc_00374425: ;
    edx = MEM32(esp + 0x20);
    edx = MEM32(edx + 0x794);
    edx = MEM32(edx + 0x10);
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_0037444A; /* jne: not equal / not zero */

loc_00374445: ;
    edx = 2;

loc_0037444A: ;
    ecx = edi;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x14);
    edi = edi >> 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebp;
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x320) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x320 (32-bit) */
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = ecx;
    ecx = eax + 0x4C;
    if (CMP_A(_fa, _fb)) goto loc_003745F9; /* ja: above (unsigned >) */

loc_00374483: ;
    if (CMP_EQ(_fa, _fb)) goto loc_003745B8; /* je: equal / zero */

loc_00374489: ;
    edx = ZX8(MEM8(edx + 0x374504));
    { uint32_t _jt = MEM32(edx * 4 + 0x374710); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00374497u) goto loc_00374497;
    if (_jt == 0x003744D2u) goto loc_003744D2;
    if (_jt == 0x00374510u) goto loc_00374510;
    if (_jt == 0x00374560u) goto loc_00374560;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00374497: ;
    fp_push(MEMF(esi + -12)); /* fld float */
    edx = MEM32(esi + -44);
    fp_push(MEMF(esi + -28)); /* fld float */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x14) = ebx;
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x24) = ebx;
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    goto loc_003746CE;

loc_003744D2: ;
    fp_push(MEMF(esi + -12)); /* fld float */
    edx = MEM32(esi + -44);
    fp_push(MEMF(esi + -28)); /* fld float */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x14) = ebx;
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x24) = ebx;
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -36);
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_push(MEMF(esi + -20)); /* fld float */
    MEM32(eax + 0x34) = ebx;
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_003746C8;

loc_00374510: ;
    fp_push(MEMF(esi + -12)); /* fld float */
    edx = MEM32(esi + -44);
    fp_push(MEMF(esi + -28)); /* fld float */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x14) = ebx;
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x24) = ebx;
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_push(MEMF(esi + -20)); /* fld float */
    edx = MEM32(esi + -36);
    MEMF(eax + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x44) = ebx;
    MEMF(eax + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_003746DE;

loc_00374560: ;
    fp_push(MEMF(esi + -12)); /* fld float */
    edx = MEM32(esi + -44);
    fp_push(MEMF(esi + -28)); /* fld float */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x14) = ebx;
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x24) = ebx;
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -36);
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_push(MEMF(esi + -20)); /* fld float */
    MEM32(eax + 0x2C) = edx;
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x34) = ebx;
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -32);
    fp_push(MEMF(esi)); /* fld float */
    fp_push(MEMF(esi + -16)); /* fld float */
    MEM32(eax + 0x3C) = edx;
    MEMF(eax + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x44) = ebx;
    MEMF(eax + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_003746DE;

loc_003745B8: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    edx = MEM32(esi + -44);
    fp_push(MEMF(esi + -12)); /* fld float */
    fp_push(MEMF(esi + -28)); /* fld float */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    goto loc_003746CE;

loc_003745F9: ;
    _fb = (uint32_t)(0x330) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x330;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_push(MEMF(esi + -12)); /* fld float */
    fp_push(MEMF(esi + -28)); /* fld float */
    if ((_fa == 0)) goto loc_0037468F; /* je: equal / zero */

loc_0037460E: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(esi + -44);
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa == 0)) goto loc_00374669; /* je: equal / zero */

loc_00374638: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    edx = MEM32(esi + -36);
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_push(MEMF(esi + -20)); /* fld float */
    MEM32(eax + 0x2C) = edx;
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -32);
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
    fp_push(MEMF(esi + -16)); /* fld float */
    MEM32(eax + 0x3C) = edx;
    MEMF(eax + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_003746DE;

loc_00374669: ;
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_push(MEMF(esi + -4)); /* fld float */
    edx = MEM32(esi + -36);
    fp_push(MEMF(esi + -20)); /* fld float */
    MEM32(eax + 0x3C) = edx;
    MEMF(eax + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_003746DE;

loc_0037468F: ;
    edx = MEM32(esi + -44);
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -40);
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_push(MEMF(esi + -8)); /* fld float */
    fp_push(MEMF(esi + -24)); /* fld float */
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + -36);
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_push(MEMF(esi + -20)); /* fld float */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */

loc_003746C8: ;
    MEM32(eax + 0x2C) = edx;
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */

loc_003746CE: ;
    MEM32(eax + 0x3C) = ebx;
    MEM32(eax + 0x40) = ebx;
    MEM32(eax + 0x44) = ebx;
    MEM32(eax + 0x48) = 0x3F800000;

loc_003746DE: ;
    eax = MEM32(esp + 0x20);
    MEM32(eax) = ecx;
    ecx = eax;

loc_003746E6: ;
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40430) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x40430 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_B(_fa, _fb)) goto loc_003743E0; /* jb: below (unsigned <) */

loc_00374706: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0037470A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00374750
 * Original: 0x00374750 - 0x0037483E (238 bytes, 82 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374750(void)
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

loc_00374750: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x37B5E4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x4820) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x4820;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(0x37B648);
    ebp = ebp << 7;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edi + 0xF00;
    MEM32(eax) = ebp;

loc_00374775: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xC (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00374797; /* jne: not equal / not zero */

loc_0037477A: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x24)); /* fmul dword ptr [ecx + 0x24] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x28)); /* fmul dword ptr [ecx + 0x28] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x2C)); /* fmul dword ptr [ecx + 0x2c] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_003747A9;

loc_00374797: ;
    ebp = MEM32(ecx + 0x24);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(ecx + 0x28);
    MEM32(eax + 8) = ebp;
    ebp = MEM32(ecx + 0x2C);
    MEM32(eax + 0xC) = ebp;

loc_003747A9: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x30 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003747CA; /* jne: not equal / not zero */

loc_003747AE: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_003747DC;

loc_003747CA: ;
    ebp = MEM32(ecx + 4);
    MEM32(eax + 0x10) = ebp;
    ebp = MEM32(ecx + 8);
    MEM32(eax + 0x14) = ebp;
    ebp = MEM32(ecx + 0xC);
    MEM32(eax + 0x18) = ebp;

loc_003747DC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xC0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003747FE; /* jne: not equal / not zero */

loc_003747E1: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x1C)); /* fmul dword ptr [ecx + 0x1c] */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00374810;

loc_003747FE: ;
    esi = MEM32(ecx + 0x14);
    MEM32(eax + 0x1C) = esi;
    esi = MEM32(ecx + 0x18);
    MEM32(eax + 0x20) = esi;
    esi = MEM32(ecx + 0x1C);
    MEM32(eax + 0x24) = esi;

loc_00374810: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebx;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374837; /* je: equal / zero */

loc_0037481A: ;
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x9030) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x9030;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax) = esi;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edi + 0xF44;
    goto loc_00374775;

loc_00374837: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00374840
 * Original: 0x00374840 - 0x003749F4 (436 bytes, 117 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374840(void)
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

loc_00374840: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x37B648);
    ecx = MEM32(0x37B5E4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(0x37B57C);
    _fb = (uint32_t)(0xF00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0xC0A10;
    edi = 0xC03A8;
    ebp = 0x403B4;
    goto loc_00374880;

    /* nop */
    /* nop */

loc_00374880: ;
    ebx = ecx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0xFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0037489D; /* jge: greater or equal (signed >=) */

loc_00374897: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0037489D: ;
    ebx = ecx;
    ebx = ebx >> 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0xFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4293B0)); /* fmul dword ptr [0x4293b0] */
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_003748C0; /* jge: greater or equal (signed >=) */

loc_003748BA: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_003748C0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4293B0)); /* fmul dword ptr [0x4293b0] */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_003748E2; /* jge: greater or equal (signed >=) */

loc_003748DC: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_003748E2: ;
    ebx = MEM32(esp + 0x30);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0xC (8-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4293B0)); /* fmul dword ptr [0x4293b0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_00374918; /* je: equal / zero */

loc_003748F5: ;
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x30)); /* fld float */
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x10);
    fp_push(MEMF(edx + 0x34)); /* fld float */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(edx + 0x38);
    MEM32(esp + 0x10) = ecx;
    goto loc_0037497B;

loc_00374918: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x10)); /* fmul dword ptr [edx + 0x10] */
    if (TEST_Z(_fa, _fb)) goto loc_00374948; /* je: equal / zero */

loc_00374920: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0x18) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x14)); /* fmul dword ptr [edx + 0x14] */
    MEM32(esp + 0x1C) = 0x3F800000;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esp + 0x20) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x18)); /* fmul dword ptr [edx + 0x18] */
    goto loc_00374977;

loc_00374948: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x30)); /* fadd dword ptr [edx + 0x30] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0x18) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x14)); /* fmul dword ptr [edx + 0x14] */
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x34)); /* fadd dword ptr [edx + 0x34] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x18)); /* fmul dword ptr [edx + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x38)); /* fadd dword ptr [edx + 0x38] */

loc_00374977: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_0037497B: ;
    ecx = MEM32(esp + 0x10);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(eax + 0xC) = ecx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x14) = ecx;
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax) = esi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 0x20) = ebp;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0x24) = edx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003749EA; /* je: equal / zero */

loc_003749BF: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(0x37B578);
    ebx = ebx >> 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x30) = ebx;
    _fb = (uint32_t)(0xF44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xF44;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0xC17A0;
    edi = 0xC17B0;
    ebp = 0x417AC;
    goto loc_00374880;

loc_003749EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00374A00
 * Original: 0x00374A00 - 0x00374B38 (312 bytes, 91 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374A00(void)
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

loc_00374A00: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x37B5E4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x37B648);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    esi = eax;
    eax = MEM32(edi + 0xF40);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = eax;
    MEM32(esi) = 0x1809E0;
    PUSH32(esp, 0x00374A34u); RECOMP_ABI_CALL(0x0036F480u, sub_0036F480); /* call 0x0036F480 */

loc_00374A34: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429344)); /* fadd dword ptr [0x429344] */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429354)); /* fmul dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00374A63u); RECOMP_ABI_CALL(0x0036F480u, sub_0036F480); /* call 0x0036F480 */

loc_00374A63: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429344)); /* fadd dword ptr [0x429344] */
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x20);
    MEM32(esi + 4) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    eax = MEM32(esp + 0x18);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374B2F; /* je: equal / zero */

loc_00374AA2: ;
    edx = MEM32(edi + 0xF84);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = edx;
    MEM32(esi) = 0x181E28;
    PUSH32(esp, 0x00374AC2u); RECOMP_ABI_CALL(0x0036F480u, sub_0036F480); /* call 0x0036F480 */

loc_00374AC2: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429344)); /* fadd dword ptr [0x429344] */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429354)); /* fmul dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00374AF1u); RECOMP_ABI_CALL(0x0036F480u, sub_0036F480); /* call 0x0036F480 */

loc_00374AF1: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429344)); /* fadd dword ptr [0x429344] */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x20);
    MEM32(esi + 4) = edx;
    edx = MEM32(esp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00374AA2; /* jne: not equal / not zero */

loc_00374B2F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_00374B40
 * Original: 0x00374B40 - 0x00374E8E (846 bytes, 240 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374B40(void)
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

loc_00374B40: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 4) (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_00374B58; /* jb: below (unsigned <) */

loc_00374B53: ;
    PUSH32(esp, 0x00374B58u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00374B58: ;
    ecx = MEM32(esp + 0x44);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x10 (8-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00374C32; /* je: equal / zero */

loc_00374B67: ;
    ecx = MEM32(0x37B54C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00374B80; /* jne: not equal / not zero */

loc_00374B76: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00374B80; /* jne: not equal / not zero */

loc_00374B7C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00374B82;

loc_00374B80: ;
    ecx = ebx;

loc_00374B82: ;
    edx = MEM32(ebp + 0x794);
    _fa = (uint32_t)(MEM8(edx + 4)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 4), 0x12 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00374C0A; /* jne: not equal / not zero */

loc_00374B8E: ;
    edx = MEM32(0x37B548);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374C0A; /* je: equal / zero */

loc_00374B98: ;
    edx = MEM32(ebp + 0x1928);
    edx = edx & 0xFFFFFFEFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374C0A; /* je: equal / zero */

loc_00374BA5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00374BCB; /* je: equal / zero */

loc_00374BAB: ;
    ecx = MEM32(0x37B550);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374BC4; /* je: equal / zero */

loc_00374BB5: ;
    ecx = MEM32(ebp + 0x7CC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374BC4; /* je: equal / zero */

loc_00374BBF: ;
    edi = 0x10001;

loc_00374BC4: ;
    PUSH32(esp, 0x00374BC9u); RECOMP_ABI_CALL(0x00374A00u, sub_00374A00); /* call 0x00374A00 */

loc_00374BC9: ;
    esi = eax;

loc_00374BCB: ;
    MEM32(esi) = 0x40294;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = 0x40314;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = 0x403B8;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, 0x00374BEDu); RECOMP_ABI_CALL(0x00373A30u, sub_00373A30); /* call 0x00373A30 */

loc_00374BED: ;
    MEM32(ebp + 0x7D0) = eax;
    MEM32(esi + 0x18) = 0x40298;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, 0x00374C06u); RECOMP_ABI_CALL(0x00374840u, sub_00374840); /* call 0x00374840 */

loc_00374C06: ;
    esi = eax;
    goto loc_00374C32;

loc_00374C0A: ;
    MEM32(eax) = 0x40314;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x403B8;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x40294;
    MEM32(eax + 0x14) = 0x20001;
    esi = eax + 0x18;

loc_00374C32: ;
    edx = MEM32(esp + 0x44);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFF8000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00374E81; /* je: equal / zero */

loc_00374C42: ;
    eax = MEM32(ebp + 0x7D0);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + 0x7CC);
    MEM32(esi) = 0x403BC;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp + 0x7AC;
    MEM32(esp + 0x40) = ecx;
    ebx = 0x41024;
    MEM32(esp + 0x10) = eax;
    goto loc_00374C80;

loc_00374C75: ;
    edx = MEM32(esp + 0x44);
    /* nop */

loc_00374C80: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374E5B; /* je: equal / zero */

loc_00374C8E: ;
    eax = 0x10000;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00374CC7; /* jne: not equal / not zero */

loc_00374C99: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(edx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00374E5B; /* jns: not sign (positive) */

loc_00374CA1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 4) (32-bit) */
    MEM32(ebp) = esi;
    eax = esi;
    if (CMP_B(_fa, _fb)) goto loc_00374CB0; /* jb: below (unsigned <) */

loc_00374CAB: ;
    PUSH32(esp, 0x00374CB0u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00374CB0: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00374CC0u); RECOMP_ABI_CALL(0x00374750u, sub_00374750); /* call 0x00374750 */

loc_00374CC0: ;
    esi = eax;
    goto loc_00374E5B;

loc_00374CC7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 4) (32-bit) */
    MEM32(ebp) = esi;
    eax = esi;
    if (CMP_B(_fa, _fb)) goto loc_00374CD6; /* jb: below (unsigned <) */

loc_00374CD1: ;
    PUSH32(esp, 0x00374CD6u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00374CD6: ;
    edx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    ecx = edi;
    PUSH32(esp, 0x00374CE6u); RECOMP_ABI_CALL(0x00374750u, sub_00374750); /* call 0x00374750 */

loc_00374CE6: ;
    esi = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 3 (32-bit) */
    eax = ebp + 0xC60;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_00374D7E; /* jne: not equal / not zero */

loc_00374CF8: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x6C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00374D08u); RECOMP_ABI_CALL(0x0036F320u, sub_0036F320); /* call 0x0036F320 */

loc_00374D08: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00374D12u); RECOMP_ABI_CALL(0x0036F5B0u, sub_0036F5B0); /* call 0x0036F5B0 */

loc_00374D12: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x429344)); /* fsub dword ptr [0x429344] */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, 0x00374D3Au); RECOMP_ABI_CALL(0x0036F5B0u, sub_0036F5B0); /* call 0x0036F5B0 */

loc_00374D3A: ;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = 0x7149F2CA;
    eax = ebx + 0x140004;
    MEM32(esi + 8) = eax;
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(esp + 0x28);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(esp + 0x2C);
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(esp + 0x20);
    MEM32(esi + 0x20) = eax;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00374E5B;

loc_00374D7E: ;
    fp_push(MEMF(edi + 0x4C)); /* fld float */
    PUSH32(esp, 0x3F800000);
    ecx = edi + 0x34;
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    MEM32(esi) = ebx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00374D99u); RECOMP_ABI_CALL(0x0036F320u, sub_0036F320); /* call 0x0036F320 */

loc_00374D99: ;
    eax = ebx + 0x140038;
    MEM32(esi + 8) = eax;
    ecx = MEM32(esp + 0x30);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(esp + 0x34);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(esp + 0x38);
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(edi + 0x54);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(edi + 0x58);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(edi + 0x5C);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00374E5B; /* jne: not equal / not zero */

loc_00374DD7: ;
    eax = ebp + 0xC60;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00374DEEu); RECOMP_ABI_CALL(0x0036F320u, sub_0036F320); /* call 0x0036F320 */

loc_00374DEE: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00374E13u); RECOMP_ABI_CALL(0x0036F550u, sub_0036F550); /* call 0x0036F550 */

loc_00374E13: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x84)); /* fmul dword ptr [edi + 0x84] */
    eax = ebx + 0x18001C;
    MEM32(esi) = eax;
    ecx = MEM32(edi + 0x78);
    MEM32(esi + 4) = ecx;
    edx = MEM32(edi + 0x7C);
    MEM32(esi + 8) = edx;
    eax = MEM32(edi + 0x80);
    MEM32(esi + 0xC) = eax;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + -16) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esi + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    MEMF(esi + -8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi + 0x88);
    MEM32(esi + -4) = ecx;

loc_00374E5B: ;
    ecx = MEM32(esp + 0x40);
    edi = MEM32(esp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41424) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x41424 (32-bit) */
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x10) = edi;
    if (CMP_B(_fa, _fb)) goto loc_00374C75; /* jb: below (unsigned <) */

loc_00374E81: ;
    POP32(esp, edi);
    MEM32(ebp) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00374E8E
 * Original: 0x00374E8E - 0x00374E90 (2 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374E8E(void)
{

loc_00374E8E: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00374E90
 * Original: 0x00374E90 - 0x00375083 (499 bytes, 154 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00374E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00374E90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x154) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x154;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0037507A; /* js: sign (negative) */

loc_00374EAA: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x794);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 0x12 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0037507A; /* jne: not equal / not zero */

loc_00374EBD: ;
    ecx = MEM32(esi + 0x1928);
    ecx = ecx & 0xFFFFFFEFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037507A; /* je: equal / zero */

loc_00374ECF: ;
    ebx = MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00374EDD; /* jb: below (unsigned <) */

loc_00374ED6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374EDBu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00374EDB: ;
    ebx = eax;

loc_00374EDD: ;
    eax = esi + 0xC60;
    PUSH32(esp, eax);
    edx = esi + 0xDE0;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374EF5u); RECOMP_ABI_CALL(0x0036F380u, sub_0036F380); /* call 0x0036F380 */

loc_00374EF5: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x400480);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374F05u); RECOMP_ABI_CALL(0x0036FBA0u, sub_0036FBA0); /* call 0x0036FBA0 */

loc_00374F05: ;
    eax = MEM32(esi + 0x950);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x44;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00374F1B; /* jne: not equal / not zero */

loc_00374F12: ;
    eax = MEM32(0x37B548);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374F57; /* je: equal / zero */

loc_00374F1B: ;
    eax = MEM32(0x37B5E8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = esp + 0x20;
    ecx = esp + 0xE0;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374F3Au); RECOMP_ABI_CALL(0x0036F600u, sub_0036F600); /* call 0x0036F600 */

loc_00374F3A: ;
    edi = ebx + 4;
    MEM32(ebx) = 0x300580;
    ecx = 0xC;
    esi = esp + 0xE0;
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
    esi = MEM32(ebp + 8);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x34;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00374F57: ;
    eax = MEM32(0x37B5D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00374F9A; /* jne: not equal / not zero */

loc_00374F60: ;
    edx = esi + 0x980;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0xA8;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374F79u); RECOMP_ABI_CALL(0x0036F380u, sub_0036F380); /* call 0x0036F380 */

loc_00374F79: ;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x400680);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374F8Cu); RECOMP_ABI_CALL(0x0036FBA0u, sub_0036FBA0); /* call 0x0036FBA0 */

loc_00374F8C: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x44;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00374F9A: ;
    eax = esi + 0x980;
    PUSH32(esp, eax);
    PUSH32(esp, 0x400680);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374FACu); RECOMP_ABI_CALL(0x0036FBA0u, sub_0036FBA0); /* call 0x0036FBA0 */

loc_00374FAC: ;
    ecx = MEM32(esi + 4);
    eax = ebx + 0x44;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00374FBD; /* jb: below (unsigned <) */

loc_00374FB8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374FBDu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00374FBD: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x4004C0;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edi;
    /* nop */

loc_00374FD0: ;
    eax = esi + 0xC60;
    PUSH32(esp, eax);
    ecx = esi + edi + -4191904;
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374FE9u); RECOMP_ABI_CALL(0x0036F380u, sub_0036F380); /* call 0x0036F380 */

loc_00374FE9: ;
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374FF5u); RECOMP_ABI_CALL(0x0036FBA0u, sub_0036FBA0); /* call 0x0036FBA0 */

loc_00374FF5: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x950);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x44;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x44;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00375016; /* jne: not equal / not zero */

loc_0037500D: ;
    eax = MEM32(0x37B548);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00375065; /* je: equal / zero */

loc_00375016: ;
    edx = MEM32(0x37B5E8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = esp + 0x60;
    eax = esp + 0x120;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375036u); RECOMP_ABI_CALL(0x0036F600u, sub_0036F600); /* call 0x0036F600 */

loc_00375036: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xFFF00100u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFF00100u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = edi;
    edi = MEM32(esp + 0x18);
    ecx = 0xC;
    esi = esp + 0x120;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x34;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    edi = MEM32(esp + 0x1C);
    esi = MEM32(ebp + 8);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;

loc_00375065: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400580) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x400580 (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_B(_fa, _fb)) goto loc_00374FD0; /* jb: below (unsigned <) */

loc_00375078: ;
    MEM32(esi) = ebx;

loc_0037507A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00375090
 * Original: 0x00375090 - 0x0037510E (126 bytes, 46 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375090: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x37B1A8);
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    if (TEST_Z(_fa, _fb)) goto loc_003750A9; /* je: equal / zero */

loc_003750A3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003750A9u); RECOMP_ABI_CALL(0x00373AD0u, sub_00373AD0); /* call 0x00373AD0 */

loc_003750A9: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003750B7; /* je: equal / zero */

loc_003750AE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003750B5u); RECOMP_ABI_CALL(0x00378720u, sub_00378720); /* call 0x00378720 */

loc_003750B5: ;
    ebx = eax;

loc_003750B7: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003750C2; /* je: equal / zero */

loc_003750BC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003750C2u); RECOMP_ABI_CALL(0x00373C40u, sub_00373C40); /* call 0x00373C40 */

loc_003750C2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0xF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003750CE; /* je: equal / zero */

loc_003750C7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003750CEu); RECOMP_ABI_CALL(0x00373FC0u, sub_00373FC0); /* call 0x00373FC0 */

loc_003750CE: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003750D9; /* je: equal / zero */

loc_003750D3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003750D9u); RECOMP_ABI_CALL(0x003741B0u, sub_003741B0); /* call 0x003741B0 */

loc_003750D9: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003750E4; /* je: equal / zero */

loc_003750DE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003750E4u); RECOMP_ABI_CALL(0x00374390u, sub_00374390); /* call 0x00374390 */

loc_003750E4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0xFF1000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003750F3; /* je: equal / zero */

loc_003750EC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003750F3u); RECOMP_ABI_CALL(0x00374B40u, sub_00374B40); /* call 0x00374B40 */

loc_003750F3: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003750FF; /* je: equal / zero */

loc_003750F8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003750FFu); RECOMP_ABI_CALL(0x00374E90u, sub_00374E90); /* call 0x00374E90 */

loc_003750FF: ;
    ebx = ebx & 0xC0000070u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    MEM32(0x37B1A8) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00375110
 * Original: 0x00375110 - 0x003752A1 (401 bytes, 127 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00375110: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x37B1A8);
    eax = ebx;
    PUSH32(esp, esi);
    eax = eax & 0xFFFFFFAFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFF8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x3FFFFF8F (32-bit) */
    esi = ecx;
    MEM32(esp + 0x10) = esi;
    MEM32(0x37B1A8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00375138; /* je: equal / zero */

loc_00375133: ;
    PUSH32(esp, 0x00375138u); RECOMP_ABI_CALL(0x00375090u, sub_00375090); /* call 0x00375090 */

loc_00375138: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x40000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00375299; /* jne: not equal / not zero */

loc_00375144: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (TEST_NZ(_fa, _fb)) goto loc_00375157; /* jne: not equal / not zero */

loc_0037514E: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00375298; /* je: equal / zero */

loc_00375157: ;
    eax = MEM32(esi + 0x794);
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebp);
    MEM32(esi + 0x20) = edi;
    ebp = MEM32(eax + 4);
    ebp = ebp & 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x42C8A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x42C8A0;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0037517F; /* jb: below (unsigned <) */

loc_0037517A: ;
    PUSH32(esp, 0x0037517Fu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0037517F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003751BF; /* je: equal / zero */

loc_00375186: ;
    MEM32(eax) = 0x401760;
    ecx = eax + 4;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00375191: ;
    eax = ZX8(MEM8(edx + ebp));
    esi = MEM32(esp + 0x10);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(eax + esi + 0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 0x14);
    esi = esi + esi * 2;
    esi = MEM32(esi * 4 + 0x37DAF0);
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375191; /* jb: below (unsigned <) */

loc_003751BF: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00375228; /* jne: not equal / not zero */

loc_003751C5: ;
    edi = 0x41720;
    /* nop */

loc_003751D0: ;
    eax = ZX8(MEM8(ebx + ebp));
    edx = MEM32(esp + 0x10);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(edx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x1C), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037520C; /* je: equal / zero */

loc_003751E3: ;
    eax = MEM32(edx + 0x14);
    esi = eax + eax * 2;
    eax = MEM32(esi * 4 + 0x37DAF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = esi * 4 + 0x37DAF0;
    if (CMP_EQ(_fa, _fb)) goto loc_0037520C; /* je: equal / zero */

loc_003751FB: ;
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(MEM32(edx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edi;
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037520C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41760) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x41760 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003751D0; /* jb: below (unsigned <) */

loc_00375218: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00375228: ;
    MEM32(esp + 0x14) = ebx;
    ebx = 0x41720;

loc_00375231: ;
    eax = MEM32(esp + 0x14);
    eax = ZX8(MEM8(eax + ebp));
    edx = MEM32(esp + 0x10);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + edx;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037527D; /* je: equal / zero */

loc_00375249: ;
    eax = MEM32(esi + 0x14);
    edx = eax + eax * 2;
    edi = MEM32(edx * 4 + 0x37DAF8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edx = edx * 4 + 0x37DAF0;
    if (CMP_EQ(_fa, _fb)) goto loc_0037527D; /* je: equal / zero */

loc_00375261: ;
    eax = MEM32(edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x20));
    _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esi + 0x18);
    esi = MEM32(edx + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037527D: ;
    esi = MEM32(esp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41760) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x41760 (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_B(_fa, _fb)) goto loc_00375231; /* jb: below (unsigned <) */

loc_00375291: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax) = ecx;
    POP32(esp, ebp);

loc_00375298: ;
    POP32(esp, edi);

loc_00375299: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003752B0
 * Original: 0x003752B0 - 0x003753EE (318 bytes, 91 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003752B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003752B0: ;
    eax = MEM32(0x37B1A8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFF8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x3FFFFF8F (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003752CC; /* je: equal / zero */

loc_003752C2: ;
    PUSH32(esp, 0x003752C7u); RECOMP_ABI_CALL(0x00375090u, sub_00375090); /* call 0x00375090 */

loc_003752C7: ;
    eax = MEM32(0x37B1A8);

loc_003752CC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003753E9; /* je: equal / zero */

loc_003752D4: ;
    eax = eax & 0xFFFFFFDFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x37B1A8) = eax;
    eax = MEM32(esi + 0x794);
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    PUSH32(esp, ebp);
    ebx = ebx & 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x42C8A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x42C8A0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = edi;
    if (CMP_B(_fa, _fb)) goto loc_00375310; /* jb: below (unsigned <) */

loc_0037530B: ;
    PUSH32(esp, 0x00375310u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00375310: ;
    MEM32(eax) = 0x401760;
    ebp = eax + 4;
    MEM32(esp + 0x10) = 0;

loc_00375321: ;
    eax = MEM32(esp + 0x10);
    eax = ZX8(MEM8(eax + ebx));
    ecx = MEM32(esp + 0x1C);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + ecx;
    ecx = MEM32(edx + 0x1C);
    MEM32(ebp) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003753AC; /* je: equal / zero */

loc_00375341: ;
    edx = MEM32(edx + 0x18);
    eax = ecx;
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ZX8(MEM8(eax + 0x379434));
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(MEM8(ecx + 0x37942C));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037537B; /* jne: not equal / not zero */

loc_0037536A: ;
    MEM32(esp + 0x20) = edx;
    MEM32(esi + 0xBD4) = eax;
    edi = 1;
    goto loc_0037539B;

loc_0037537B: ;
    ecx = edx;
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0037538C; /* jne: not equal / not zero */

loc_00375383: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + edi * 8 + 0xBCC) = MEM32(esi + edi * 8 + 0xBCC) + eax;
    _fa = (uint32_t)(MEM32(esi + edi * 8 + 0xBCC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0037539B;

loc_0037538C: ;
    MEM32(esi + edi * 8 + 0xBD0) = ecx;
    MEM32(esi + edi * 8 + 0xBD4) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0037539B: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx + eax * 4;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;

loc_003753AC: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00375321; /* jb: below (unsigned <) */

loc_003753BE: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0xBC8) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esi + 0xC54) = edi;
    POP32(esp, edi);
    MEM32(esi) = ebp;
    MEM32(esi + 0xBCC) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    MEM32(esi + 0xBD0) = eax;
    POP32(esp, ebx);

loc_003753E9: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003753F0
 * Original: 0x003753F0 - 0x00375438 (72 bytes, 22 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003753F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003753F0: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0x003753FFu); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003753FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037540B; /* jne: not equal / not zero */

loc_00375403: ;
    eax = 0x8007000Eu;
    esp += 12; return; /* ret 8 */

loc_0037540B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax + 0xC;
    MEM32(eax + 8) = edi;
    MEM32(eax) = 1;
    MEM32(eax + 4) = 1;
    ecx = 0x3C;
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
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00375440
 * Original: 0x00375440 - 0x00375454 (20 bytes, 5 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375440(void)
{

loc_00375440: ;
    eax = MEM32(0x37B648);
    ecx = MEM32(eax + 0x784);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00375460
 * Original: 0x00375460 - 0x00375479 (25 bytes, 10 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375460(void)
{

loc_00375460: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = 0x3C;
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
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00375480
 * Original: 0x00375480 - 0x00375673 (499 bytes, 124 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00375480: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(0x37B648);
    eax = MEM32(ebx + 0x784);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x784) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00375500; /* jne: not equal / not zero */

loc_003754A0: ;
    ecx = MEM32(0x37B1A8);
    ecx = ecx | 0x4800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x37B1A8) = ecx;
    eax = MEM32(ebx + 0x788);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003754C8; /* je: equal / zero */

loc_003754BC: ;
    eax = ecx;
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x37B1A8) = eax;

loc_003754C8: ;
    ecx = MEM32(0x37B600);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003754D4u); RECOMP_ABI_CALL(0x0036D030u, sub_0036D030); /* call 0x0036D030 */

loc_003754D4: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003754E0; /* jb: below (unsigned <) */

loc_003754DB: ;
    PUSH32(esp, 0x003754E0u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_003754E0: ;
    edx = eax;
    ecx = ebx;
    PUSH32(esp, 0x003754E9u); RECOMP_ABI_CALL(0x0036D6D0u, sub_0036D6D0); /* call 0x0036D6D0 */

loc_003754E9: ;
    MEM32(eax) = 0x41E78;
    MEM32(eax + 4) = 0x210000;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00375500: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(edx + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = ecx | MEM32(edx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00375521; /* jne: not equal / not zero */

loc_0037550D: ;
    edx = MEM32(ebx + 0x788);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00375521; /* je: equal / zero */

loc_00375517: ;
    MEM32(0x37B1A8) = MEM32(0x37B1A8) | 0x2000;
    _fa = (uint32_t)(MEM32(0x37B1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00375521: ;
    MEM32(ebx + 0x788) = ecx;
    edx = MEM32(eax + 8);
    ecx = MEM32(edx + 0xEC);
    ecx = ecx & 0x100;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x78C) = ecx;
    ebp = MEM32(eax + 8);
    edx = MEM32(ebp + 0xD8);
    MEM32(ebx + 0x790) = edx;
    MEM32(0x37B1A8) = MEM32(0x37B1A8) | 0x4000;
    _fa = (uint32_t)(MEM32(0x37B1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375561; /* jb: below (unsigned <) */

loc_0037555C: ;
    PUSH32(esp, 0x00375561u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00375561: ;
    _fa = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 8), 0x10 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00375582; /* jne: not equal / not zero */

loc_00375568: ;
    ecx = 0x39;
    esi = ebp;
    edi = 0x37B3B0;
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
    ecx = MEM32(ebp + 0xD8);
    MEM32(0x37B5D0) = ecx;

loc_00375582: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00375593; /* jne: not equal / not zero */

loc_0037558A: ;
    edx = eax;
    ecx = ebx;
    PUSH32(esp, 0x00375593u); RECOMP_ABI_CALL(0x0036D6D0u, sub_0036D6D0); /* call 0x0036D6D0 */

loc_00375593: ;
    MEM32(eax) = 0x200260;
    edi = eax + 4;
    ecx = 8;
    esi = ebp;
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
    MEM32(eax + 0x24) = 0x800A60;
    esi = ebp + 0x28;
    edi = eax + 0x28;
    ecx = 0x20;
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
    ecx = MEM32(ebp + 0xA8);
    MEM32(eax + 0xA8) = 0x417F8;
    MEM32(eax + 0xAC) = ecx;
    MEM32(eax + 0xB0) = 0x81E20;
    edx = MEM32(ebp + 0xAC);
    MEM32(eax + 0xB4) = edx;
    ecx = MEM32(ebp + 0xB0);
    MEM32(eax + 0xB8) = ecx;
    MEM32(eax + 0xBC) = 0x241E40;
    esi = ebp + 0xB4;
    edi = eax + 0xC0;
    ecx = 9;
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
    MEM32(eax + 0xE4) = 0x81E74;
    edx = MEM32(ebp + 0xDC);
    MEM32(eax + 0xE8) = edx;
    ecx = MEM32(ebp + 0xE0);
    MEM32(eax + 0xEC) = ecx;
    ecx = MEM32(ebx + 0x788);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00375665; /* je: equal / zero */

loc_0037563B: ;
    MEM32(eax + 0xF0) = 0x80288;
    edx = MEM32(ebp + 0x20);
    MEM32(eax + 0xF4) = edx;
    ecx = MEM32(ebp + 0x24);
    MEM32(eax + 0xF8) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00375665: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003754BE
 * Original: 0x003754BE - 0x00375673 (437 bytes, 108 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003754BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003754BE: ;
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x37B1A8) = eax;
    ecx = MEM32(0x37B600);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003754D4u); RECOMP_ABI_CALL(0x0036D030u, sub_0036D030); /* call 0x0036D030 */

loc_003754D4: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003754E0; /* jb: below (unsigned <) */

loc_003754DB: ;
    PUSH32(esp, 0x003754E0u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_003754E0: ;
    edx = eax;
    ecx = ebx;
    PUSH32(esp, 0x003754E9u); RECOMP_ABI_CALL(0x0036D6D0u, sub_0036D6D0); /* call 0x0036D6D0 */

loc_003754E9: ;
    MEM32(eax) = 0x41E78;
    MEM32(eax + 4) = 0x210000;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    edx = MEM32(ebx + 0x788);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00375521; /* je: equal / zero */

loc_00375517: ;
    MEM32(0x37B1A8) = MEM32(0x37B1A8) | 0x2000;
    _fa = (uint32_t)(MEM32(0x37B1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00375521: ;
    MEM32(ebx + 0x788) = ecx;
    edx = MEM32(eax + 8);
    ecx = MEM32(edx + 0xEC);
    ecx = ecx & 0x100;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x78C) = ecx;
    ebp = MEM32(eax + 8);
    edx = MEM32(ebp + 0xD8);
    MEM32(ebx + 0x790) = edx;
    MEM32(0x37B1A8) = MEM32(0x37B1A8) | 0x4000;
    _fa = (uint32_t)(MEM32(0x37B1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375561; /* jb: below (unsigned <) */

loc_0037555C: ;
    PUSH32(esp, 0x00375561u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00375561: ;
    _fa = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 8), 0x10 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00375582; /* jne: not equal / not zero */

loc_00375568: ;
    ecx = 0x39;
    esi = ebp;
    edi = 0x37B3B0;
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
    ecx = MEM32(ebp + 0xD8);
    MEM32(0x37B5D0) = ecx;

loc_00375582: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00375593; /* jne: not equal / not zero */

loc_0037558A: ;
    edx = eax;
    ecx = ebx;
    PUSH32(esp, 0x00375593u); RECOMP_ABI_CALL(0x0036D6D0u, sub_0036D6D0); /* call 0x0036D6D0 */

loc_00375593: ;
    MEM32(eax) = 0x200260;
    edi = eax + 4;
    ecx = 8;
    esi = ebp;
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
    MEM32(eax + 0x24) = 0x800A60;
    esi = ebp + 0x28;
    edi = eax + 0x28;
    ecx = 0x20;
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
    ecx = MEM32(ebp + 0xA8);
    MEM32(eax + 0xA8) = 0x417F8;
    MEM32(eax + 0xAC) = ecx;
    MEM32(eax + 0xB0) = 0x81E20;
    edx = MEM32(ebp + 0xAC);
    MEM32(eax + 0xB4) = edx;
    ecx = MEM32(ebp + 0xB0);
    MEM32(eax + 0xB8) = ecx;
    MEM32(eax + 0xBC) = 0x241E40;
    esi = ebp + 0xB4;
    edi = eax + 0xC0;
    ecx = 9;
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
    MEM32(eax + 0xE4) = 0x81E74;
    edx = MEM32(ebp + 0xDC);
    MEM32(eax + 0xE8) = edx;
    ecx = MEM32(ebp + 0xE0);
    MEM32(eax + 0xEC) = ecx;
    ecx = MEM32(ebx + 0x788);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00375665; /* je: equal / zero */

loc_0037563B: ;
    MEM32(eax + 0xF0) = 0x80288;
    edx = MEM32(ebp + 0x20);
    MEM32(eax + 0xF4) = edx;
    ecx = MEM32(ebp + 0x24);
    MEM32(eax + 0xF8) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00375665: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00375680
 * Original: 0x00375680 - 0x00375947 (711 bytes, 189 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00375680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375680: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x37B648);
    eax = MEM32(edx + 0x784);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00375941; /* je: equal / zero */

loc_003756AC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(ebp + 0x10) = eax;
    goto loc_003756C0;

    /* nop */
    edi = edi;

loc_003756C0: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_MEM(eax); /* movups */
    xmm0 = XMM_MIN(xmm0, XMM_MEM(0x42C8D0)); /* minps */
    xmm0 = XMM_MAX(xmm0, XMM_MEM(0x445850)); /* maxps */
    xmm0 = XMM_MUL(xmm0, XMM_MEM(0x42C8E0)); /* mulps */
    eax = (int32_t)xmm0.f[0]; /* cvtss2si */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x39); /* shufps */
    ebx = (int32_t)xmm0.f[0]; /* cvtss2si */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x39); /* shufps */
    ebx = (int32_t)xmm0.f[0]; /* cvtss2si */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x39); /* shufps */
    ebx = (int32_t)xmm0.f[0]; /* cvtss2si */
    ebx = ebx << 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 8) = eax;
    esi = MEM32(ebp + 8);
    MEM32(edx + edi * 4 + 0x8E4) = esi;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375722; /* jb: below (unsigned <) */

loc_0037571A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037571Fu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0037571F: ;
    edx = MEM32(ebp + -4);

loc_00375722: ;
    ecx = MEM32(edi * 4 + 0x42C8F0);
    ebx = MEM32(ebp + -8);
    ecx = ecx ^ MEM32(ebx + 0xE4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00375749; /* jne: not equal / not zero */

loc_00375737: ;
    MEM32(0x37B3D8) = esi;
    MEM32(eax) = 0x40A60;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00375749: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00375760; /* jne: not equal / not zero */

loc_0037574E: ;
    MEM32(0x37B3DC) = esi;
    MEM32(eax) = 0x40A64;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00375760: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00375777; /* jne: not equal / not zero */

loc_00375765: ;
    MEM32(0x37B3E0) = esi;
    MEM32(eax) = 0x40A68;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00375777: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xF0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0037578E; /* jne: not equal / not zero */

loc_0037577C: ;
    MEM32(0x37B3E4) = esi;
    MEM32(eax) = 0x40A6C;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037578E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF0000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003757A8; /* jne: not equal / not zero */

loc_00375796: ;
    MEM32(0x37B3E8) = esi;
    MEM32(eax) = 0x40A70;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003757A8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF00000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003757C2; /* jne: not equal / not zero */

loc_003757B0: ;
    MEM32(0x37B3EC) = esi;
    MEM32(eax) = 0x40A74;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003757C2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003757DC; /* jne: not equal / not zero */

loc_003757CA: ;
    MEM32(0x37B3F0) = esi;
    MEM32(eax) = 0x40A78;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003757DC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF0000000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003757F6; /* jne: not equal / not zero */

loc_003757E4: ;
    MEM32(0x37B3F4) = esi;
    MEM32(eax) = 0x40A7C;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003757F6: ;
    ecx = MEM32(edi * 4 + 0x42C8F0);
    ecx = ecx ^ MEM32(ebx + 0xE8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0037581A; /* jne: not equal / not zero */

loc_00375808: ;
    MEM32(0x37B3F8) = esi;
    MEM32(eax) = 0x40A80;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037581A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00375831; /* jne: not equal / not zero */

loc_0037581F: ;
    MEM32(0x37B3FC) = esi;
    MEM32(eax) = 0x40A84;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00375831: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00375848; /* jne: not equal / not zero */

loc_00375836: ;
    MEM32(0x37B400) = esi;
    MEM32(eax) = 0x40A88;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00375848: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xF0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0037585F; /* jne: not equal / not zero */

loc_0037584D: ;
    MEM32(0x37B404) = esi;
    MEM32(eax) = 0x40A8C;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037585F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF0000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00375879; /* jne: not equal / not zero */

loc_00375867: ;
    MEM32(0x37B408) = esi;
    MEM32(eax) = 0x40A90;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00375879: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF00000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00375893; /* jne: not equal / not zero */

loc_00375881: ;
    MEM32(0x37B40C) = esi;
    MEM32(eax) = 0x40A94;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00375893: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003758AD; /* jne: not equal / not zero */

loc_0037589B: ;
    MEM32(0x37B410) = esi;
    MEM32(eax) = 0x40A98;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003758AD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xF0000000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003758C7; /* jne: not equal / not zero */

loc_003758B5: ;
    MEM32(0x37B414) = esi;
    MEM32(eax) = 0x40A9C;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003758C7: ;
    ecx = MEM32(edi * 4 + 0x42C8F0);
    ecx = ecx ^ MEM32(ebx + 0xEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003758EB; /* jne: not equal / not zero */

loc_003758D9: ;
    MEM32(0x37B45C) = esi;
    MEM32(eax) = 0x41E20;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003758EB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00375902; /* jne: not equal / not zero */

loc_003758F0: ;
    MEM32(0x37B460) = esi;
    MEM32(eax) = 0x41E24;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00375902: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00375925; /* jne: not equal / not zero */

loc_00375906: ;
    esi = MEM32(ebp + 0xC);
    MEM32(eax) = 0xC181C;
    ebx = MEM32(esi);
    ecx = eax + 4;
    MEM32(ecx) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(ecx + 4) = ebx;
    esi = MEM32(esi + 8);
    MEM32(ecx + 8) = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00375925: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(edx) = eax;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = ecx;
    MEM32(ebp + 0x10) = eax;
    if ((_fa != 0)) goto loc_003756C0; /* jne: not equal / not zero */

loc_0037593E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00375941: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00375950
 * Original: 0x00375950 - 0x003759E0 (144 bytes, 52 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00375950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375950: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x10);
    ecx = edi;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00375970; /* jg: greater (signed >) */

loc_0037596C: ;
    ecx = edx;
    goto loc_003759D6;

loc_00375970: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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
    goto loc_003759CE;

    goto loc_00375980;

    /* nop */

loc_00375980: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    mm0 = MMX_MEM(esi); /* movq */
    mm1 = MMX_MEM(esi + 8); /* movq */
    mm2 = MMX_MEM(esi + 0x10); /* movq */
    mm3 = MMX_MEM(esi + 0x18); /* movq */
    mm4 = MMX_MEM(esi + 0x20); /* movq */
    mm5 = MMX_MEM(esi + 0x28); /* movq */
    mm6 = MMX_MEM(esi + 0x30); /* movq */
    mm7 = MMX_MEM(esi + 0x38); /* movq */
    MMX_STORE(edi, mm0); /* movntq */
    MMX_STORE(edi + 8, mm1); /* movntq */
    MMX_STORE(edi + 0x10, mm2); /* movntq */
    MMX_STORE(edi + 0x18, mm3); /* movntq */
    MMX_STORE(edi + 0x20, mm4); /* movntq */
    MMX_STORE(edi + 0x28, mm5); /* movntq */
    MMX_STORE(edi + 0x30, mm6); /* movntq */
    MMX_STORE(edi + 0x38, mm7); /* movntq */
    /* nop */
    /* nop */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003759CE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (CMP_GE((uint32_t)_fa + (uint32_t)_fb, (uint32_t)_fb)) goto loc_00375980; /* jge: greater or equal (signed >=) */

loc_003759D3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003759D6: ;
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
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003759E0
 * Original: 0x003759E0 - 0x00375B45 (357 bytes, 118 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003759E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003759E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x37B648);
    ecx = edi;
    MEM32(ebp + -20) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003759F9u); RECOMP_ABI_CALL(0x003752B0u, sub_003752B0); /* call 0x003752B0 */

loc_003759F9: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375A05; /* jb: below (unsigned <) */

loc_00375A00: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375A05u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00375A05: ;
    ecx = MEM32(ebp + 8);
    ebx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0x14);
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = ecx;
    edx = MEM32(edi + 0xC54);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    MEM32(edi + 8) = MEM32(edi + 8) | 0x800;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(edi + 0xBCC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ebp + 0xC);
    MEM32(ebp + 8) = eax;
    eax = MEM32(edi + 0xBD0);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    ecx = edi + 0xBD4;
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -12) = eax;
    MEM32(ecx + edx * 8 + -4) = eax;
    if (CMP_A(_fa, _fb)) goto loc_00375A61; /* ja: above (unsigned >) */

loc_00375A57: ;
    eax = 0x10;
    MEM32(ebp + 0x14) = eax;
    goto loc_00375A74;

loc_00375A61: ;
    eax = 0x7FF;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(edi + 0xBC8));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(edi + 0xBC8)); }
    MEM32(ebp + 0x14) = eax;

loc_00375A71: ;
    eax = MEM32(ebp + 0x14);

loc_00375A74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375A7A; /* jb: below (unsigned <) */

loc_00375A78: ;
    eax = ebx;

loc_00375A7A: ;
    esi = MEM32(edi + 0xBC8);
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    edx = esi + 3;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + 0xC) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375A94u); RECOMP_ABI_CALL(0x00370400u, sub_00370400); /* call 0x00370400 */

loc_00375A94: ;
    edx = esi;
    edx = edx << 0x12;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40001818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40001818;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80 (32-bit) */
    MEM32(ebp + 0x10) = eax;
    MEM32(ecx) = edx;
    if (CMP_B(_fa, _fb)) goto loc_00375AD7; /* jb: below (unsigned <) */

loc_00375AB1: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00375AD7; /* jne: not equal / not zero */

loc_00375AB7: ;
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00375AD7; /* jne: not equal / not zero */

loc_00375ABE: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375AC9u); RECOMP_ABI_CALL(0x00375950u, sub_00375950); /* call 0x00375950 */

loc_00375AC9: ;
    ecx = esi * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + ecx;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00375B05;

loc_00375AD7: ;
    edx = MEM32(ebp + -8);
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);

loc_00375AE0: ;
    ebx = MEM32(ebp + -16);
    eax = MEM32(ebp + -4);

loc_00375AE6: ;
    ecx = MEM32(ebx);
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
    _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00375AE6; /* jne: not equal / not zero */

loc_00375AF3: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00375AE0; /* jne: not equal / not zero */

loc_00375AF6: ;
    MEM32(ebp + 0x10) = edi;
    MEM32(ebp + 8) = esi;
    eax = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + -20);

loc_00375B05: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00375B10; /* je: equal / zero */

loc_00375B09: ;
    MEM32(edi) = eax;
    goto loc_00375A71;

loc_00375B10: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    eax = MEM32(edi + 8);
    edx = eax;
    edx = edx & 0xFFFFE7FFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    MEM32(edi + 8) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00375B3F; /* je: equal / zero */

loc_00375B38: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375B3Fu); RECOMP_ABI_CALL(0x00370080u, sub_00370080); /* call 0x00370080 */

loc_00375B3F: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00375B50
 * Original: 0x00375B50 - 0x00375DA7 (599 bytes, 192 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00375B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375B50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + -8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375B6Du); RECOMP_ABI_CALL(0x00375110u, sub_00375110); /* call 0x00375110 */

loc_00375B6D: ;
    ebx = MEM32(esi + 8);
    ebx = ebx | 0x800;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x209);
    MEM32(esi + 8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375B83u); RECOMP_ABI_CALL(0x00370400u, sub_00370400); /* call 0x00370400 */

loc_00375B83: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ebx = eax;
    MEM32(ebx) = 0x417FC;
    MEM32(ebx + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax + eax + 0x3E;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_00375D2D; /* jb: below (unsigned <) */

loc_00375BB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00375BF1; /* je: equal / zero */

loc_00375BB4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = ecx << 0x12;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x40001800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40001800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = eax;
    MEM32(ebx) = ecx;
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0xC);
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
    esi = MEM32(ebp + 0x10);
    ecx = eax * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = ebx + ecx + 4;
    edx = edx + eax * 2;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0x10) = esi;
    MEM32(ebp + 0xC) = edx;

loc_00375BF1: ;
    eax = 0x804021;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(ebp + 0xC);
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3FE);
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3E (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375C1E; /* jb: below (unsigned <) */

loc_00375C15: ;
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00375C23;

loc_00375C1E: ;
    edx = 0x1FF;

loc_00375C23: ;
    MEM32(ebp + -4) = edx;

loc_00375C26: ;
    eax = edx;
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x40001800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40001800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    eax = MEM32(esi);
    mm1 = MMX_MEM(esi + 4); /* movq */
    mm2 = MMX_MEM(esi + 0xC); /* movq */
    mm3 = MMX_MEM(esi + 0x14); /* movq */
    mm4 = MMX_MEM(esi + 0x1C); /* movq */
    mm5 = MMX_MEM(esi + 0x24); /* movq */
    mm6 = MMX_MEM(esi + 0x2C); /* movq */
    mm7 = MMX_MEM(esi + 0x34); /* movq */
    /* nop */
    /* nop */
    MEM32(edi + 4) = eax;
    MMX_STORE(edi + 8, mm1); /* movntq */
    MMX_STORE(edi + 0x10, mm2); /* movntq */
    MMX_STORE(edi + 0x18, mm3); /* movntq */
    MMX_STORE(edi + 0x20, mm4); /* movntq */
    MMX_STORE(edi + 0x28, mm5); /* movntq */
    MMX_STORE(edi + 0x30, mm6); /* movntq */
    MMX_STORE(edi + 0x38, mm7); /* movntq */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_00375C90: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    mm0 = MMX_MEM(esi); /* movq */
    mm1 = MMX_MEM(esi + 8); /* movq */
    mm2 = MMX_MEM(esi + 0x10); /* movq */
    mm3 = MMX_MEM(esi + 0x18); /* movq */
    mm4 = MMX_MEM(esi + 0x20); /* movq */
    mm5 = MMX_MEM(esi + 0x28); /* movq */
    mm6 = MMX_MEM(esi + 0x30); /* movq */
    mm7 = MMX_MEM(esi + 0x38); /* movq */
    /* nop */
    /* nop */
    MMX_STORE(edi, mm0); /* movntq */
    MMX_STORE(edi + 8, mm1); /* movntq */
    MMX_STORE(edi + 0x10, mm2); /* movntq */
    MMX_STORE(edi + 0x18, mm3); /* movntq */
    MMX_STORE(edi + 0x20, mm4); /* movntq */
    MMX_STORE(edi + 0x28, mm5); /* movntq */
    MMX_STORE(edi + 0x30, mm6); /* movntq */
    MMX_STORE(edi + 0x38, mm7); /* movntq */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00375C90; /* jne: not equal / not zero */

loc_00375CE1: ;
    ecx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 0x10);
    eax = edx * 4;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + edx * 2;
    ecx = MEM32(ebp + -8);
    eax = eax + ebx + 4;
    PUSH32(esp, 0x204);
    MEM32(ebp + 0x10) = edi;
    MEM32(ebp + 0xC) = edx;
    MEM32(ecx) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375D0Eu); RECOMP_ABI_CALL(0x00370400u, sub_00370400); /* call 0x00370400 */

loc_00375D0E: ;
    ebx = eax;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FE (32-bit) */
    edx = 0x1FF;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + -4) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_00375C26; /* jae: above or equal (unsigned >=) */

loc_00375D29: ;
    (void)0; /* emms - empty MMX state */
    edx = eax;

loc_00375D2D: ;
    eax = edx;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    ecx = ecx << 0x12;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x40001800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40001800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = eax;
    MEM32(ebx) = ecx;
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0xC);
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
    ecx = MEM32(ebp + 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    ebx = ebx + eax + 4;
    if (TEST_Z(_fa, _fb)) goto loc_00375D6F; /* je: equal / zero */

loc_00375D60: ;
    eax = ZX16(MEM16(ecx));
    MEM32(ebx) = 0x41808;
    MEM32(ebx + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00375D6F: ;
    ecx = MEM32(ebp + -8);
    MEM32(ebx) = 0x417FC;
    MEM32(ebx + 4) = 0;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    edx = eax;
    edx = edx & 0xFFFFE7FFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    POP32(esp, esi);
    MEM32(ecx) = ebx;
    MEM32(ecx + 8) = edx;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00375DA1; /* je: equal / zero */

loc_00375D9A: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375DA1u); RECOMP_ABI_CALL(0x00370080u, sub_00370080); /* call 0x00370080 */

loc_00375DA1: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00375DB0
 * Original: 0x00375DB0 - 0x00375DE7 (55 bytes, 17 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375DB0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375DC3; /* jb: below (unsigned <) */

loc_00375DBE: ;
    PUSH32(esp, 0x00375DC3u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00375DC3: ;
    ecx = MEM32(esp + 8);
    edx = ecx * 8 + 0x81880;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00375DF0
 * Original: 0x00375DF0 - 0x00375E49 (89 bytes, 27 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375DF0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375E03; /* jb: below (unsigned <) */

loc_00375DFE: ;
    PUSH32(esp, 0x00375E03u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00375E03: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00375E13; /* jne: not equal / not zero */

loc_00375E0C: ;
    ecx = 0x1518;
    goto loc_00375E1C;

loc_00375E13: ;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1A0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00375E1C: ;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x100000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00375E50
 * Original: 0x00375E50 - 0x00375E9C (76 bytes, 24 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375E50: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_00375E64; /* jb: below (unsigned <) */

loc_00375E5F: ;
    PUSH32(esp, 0x00375E64u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00375E64: ;
    ecx = MEM32(esp + 0xC);
    edx = ecx * 4 + 0x41940;
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = edx;
    edx = ZX8(MEM8(esp + 0x12));
    edi = ecx;
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx & 0xFF00FF00u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00375EA0
 * Original: 0x00375EA0 - 0x00375ED5 (53 bytes, 15 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375EA0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    PUSH32(esp, 0x00375EACu); RECOMP_ABI_CALL(0x00375090u, sub_00375090); /* call 0x00375090 */

loc_00375EAC: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375EB8; /* jb: below (unsigned <) */

loc_00375EB3: ;
    PUSH32(esp, 0x00375EB8u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00375EB8: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(esi + 8) = MEM32(esi + 8) | 0x800;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00375EE0
 * Original: 0x00375EE0 - 0x00375F21 (65 bytes, 20 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375EE0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375EF3; /* jb: below (unsigned <) */

loc_00375EEE: ;
    PUSH32(esp, 0x00375EF3u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00375EF3: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(esi + 8);
    ecx = eax;
    ecx = ecx & 0xFFFFE7FFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00375F20; /* je: equal / zero */

loc_00375F19: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00375F20u); RECOMP_ABI_CALL(0x00370080u, sub_00370080); /* call 0x00370080 */

loc_00375F20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00375F30
 * Original: 0x00375F30 - 0x00375F7D (77 bytes, 26 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375F30(void)
{

loc_00375F30: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00375F5Eu); RECOMP_ABI_CALL(0x00371E80u, sub_00371E80); /* call 0x00371E80 */

loc_00375F5E: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi) = 0x50001;
    MEM32(esi + 8) = 0;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x14) = 0;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00375F80
 * Original: 0x00375F80 - 0x00375FCA (74 bytes, 18 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00375F80: ;
    eax = MEM32(0x37B648);
    _fa = (uint32_t)(MEM8(eax + 0x8D8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x8D8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0037600B(); return; } /* je: equal / zero */

loc_00375F8E: ;
    eax = MEM32(0x37DE1C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x70) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x70 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0037600B(); return; } /* je: equal / zero */

loc_00375F97: ;
    _fa = (uint32_t)(MEM32(0x37DE18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37DE18), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0037600B(); return; } /* jne: not equal / not zero */

loc_00375FA0: ;
    ecx = MEM32(0x37B5AC);
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    MEM32(0x37DE18) = ecx;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0037600B(); return; } /* ja: above (unsigned >) */

loc_00375FB8: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x37600C)); return; /* indirect tail jmp */

    MEM32(0x37B5AC) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00375FBF
 * Original: 0x00375FBF - 0x00375FCA (11 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375FBF(void)
{

loc_00375FBF: ;
    MEM32(0x37B5AC) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00375FCA
 * Original: 0x00375FCA - 0x00375FD5 (11 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375FCA(void)
{

loc_00375FCA: ;
    MEM32(0x37B5AC) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00375FD5
 * Original: 0x00375FD5 - 0x00375FE0 (11 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375FD5(void)
{

loc_00375FD5: ;
    MEM32(0x37B5AC) = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00375FE0
 * Original: 0x00375FE0 - 0x00375FEB (11 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375FE0(void)
{

loc_00375FE0: ;
    MEM32(0x37B5AC) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_00375FEB
 * Original: 0x00375FEB - 0x00375FF6 (11 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375FEB(void)
{

loc_00375FEB: ;
    MEM32(0x37B5AC) = 0x80000001u;
    esp += 4; return; /* ret */

}

/**
 * sub_00375FF6
 * Original: 0x00375FF6 - 0x00376001 (11 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375FF6(void)
{

loc_00375FF6: ;
    MEM32(0x37B5AC) = 0x80000002u;
    esp += 4; return; /* ret */

}

/**
 * sub_00376001
 * Original: 0x00376001 - 0x0037600C (11 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376001(void)
{

loc_00376001: ;
    MEM32(0x37B5AC) = 0x80000004u;
    esp += 4; return; /* ret */

}

/**
 * sub_00376030
 * Original: 0x00376030 - 0x003763AB (891 bytes, 260 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00376030: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi + 0x8D8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x40000000;
    MEM32(esp + 0x20) = 0x40800000;
    MEM32(esp + 0x24) = 0x41000000;
    if (TEST_Z(_fa, _fb)) goto loc_00376167; /* je: equal / zero */

loc_0037606B: ;
    edi = MEM32(0x37DE20);
    eax = MEM32(esi + 0x8DC);
    ecx = MEM32(0x37DE14);
    PUSH32(esp, 0x37DE08);
    _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x1FF)) >> 32) & 1);
    edi = edi + 0x1FF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFFFE00u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x37DE00);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x41809C); PUSH32(esp, 0x003760A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037609Bu); } /* indirect call */
    }

loc_003760A1: ;
    ebx = MEM32(esi + 0x8DC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x18)) >> 32) & 1);
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003760B2; /* jge: greater or equal (signed >=) */

loc_003760AE: ;
    MEM32(ebx) = ebp;
    goto loc_00376106;

loc_003760B2: ;
    edx = MEM32(0x37DE14);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003760C3u); RECOMP_ABI_CALL(0x003373A0u, sub_003373A0); /* call 0x003373A0 */

loc_003760C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003760DF; /* jne: not equal / not zero */

loc_003760CA: ;
    PUSH32(esp, 0x37A35C);
    PUSH32(esp, 0x003760D4u); RECOMP_ABI_CALL(0x003769F0u, sub_003769F0); /* call 0x003769F0 */

loc_003760D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003760DF: ;
    eax = MEM32(0x37DE08);
    edx = MEM32(0x37DE0C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x37DE08) = eax;
    eax = MEM32(0x37DE10);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ebp) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x37DE0C) = edx;
    MEM32(0x37DE10) = eax;
    MEM32(ebx) = eax;

loc_00376106: ;
    _fa = (uint32_t)(MEM32(esi + 0x8D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8D4), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003763A3; /* jne: not equal / not zero */

loc_00376112: ;
    MEM32(esi + 0x8D4) = 0x26000000;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0xFFFFFFEFu;

loc_00376123: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0037612Au); RECOMP_ABI_CALL(0x003373CCu, sub_003373CC); /* call 0x003373CC */

loc_0037612A: ;
    eax = edi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2710 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00376153; /* jb: below (unsigned <) */

loc_00376134: ;
    ecx = MEM32(esi + 0x8D8);
    eax = MEM32(0x37DE10);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x8D4) = ebp;
    MEM32(esi + 0x8D8) = ecx;
    MEM32(0x37DE10) = eax;

loc_00376153: ;
    _fa = (uint32_t)(MEM32(esi + 0x8D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8D4), 0x26000000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00376123; /* je: equal / zero */

loc_0037615F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00376167: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003763A3; /* je: equal / zero */

loc_0037616F: ;
    ecx = MEM32(0x37DDF8);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | MEM32(0x37DDFC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_003761CC; /* je: equal / zero */

loc_0037617D: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00376187u); RECOMP_ABI_CALL(0x00351000u, sub_00351000); /* call 0x00351000 */

loc_00376187: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(0x37DDF8);
    edi = MEM32(esp + 0x14);
    ebp = MEM32(0x37DDFC);
    ebx = MEM32(0x37DDF4);
    ecx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ebp) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003763A3; /* jl: less (signed <) */

loc_003761B0: ;
    if (CMP_G(_fas, _fbs)) goto loc_003761BE; /* jg: greater (signed >) */

loc_003761B2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37DDF0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x37DDF0) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003763A3; /* jb: below (unsigned <) */

loc_003761BE: ;
    MEM32(0x37DDF8) = edx;
    MEM32(0x37DDFC) = edi;
    goto loc_003761D6;

loc_003761CC: ;
    PUSH32(esp, 0x37DDF8);
    PUSH32(esp, 0x003761D6u); RECOMP_ABI_CALL(0x00351000u, sub_00351000); /* call 0x00351000 */

loc_003761D6: ;
    SET_LO8(eax, MEM8(0x37DE1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0037620B; /* jns: not sign (positive) */

loc_003761DF: ;
    eax = MEM32(0x37DE14);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003761EFu); RECOMP_ABI_CALL(0x003373A0u, sub_003373A0); /* call 0x003373A0 */

loc_003761EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0037620B; /* jne: not equal / not zero */

loc_003761F6: ;
    PUSH32(esp, 0x37A33C);
    PUSH32(esp, 0x00376200u); RECOMP_ABI_CALL(0x003769F0u, sub_003769F0); /* call 0x003769F0 */

loc_00376200: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0037620B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00376212u); RECOMP_ABI_CALL(0x0036A610u, sub_0036A610); /* call 0x0036A610 */

loc_00376212: ;
    ebp = eax;
    eax = MEM32(0x37DE1C);
    edx = MEM32(ebp + 0x10);
    edi = eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0037623B; /* jne: not equal / not zero */

loc_0037622A: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(ebp + 0xF));
    eax = 1;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00376246;

loc_0037623B: ;
    eax = edx;
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00376246: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0037625C; /* jne: not equal / not zero */

loc_0037624A: ;
    ecx = MEM32(ebp + 0xC);
    if (0x14) _cf = (int)(((ecx) >> ((0x14) - 1)) & 1);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00376263;

loc_0037625C: ;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00376263: ;
    ecx = MEM32(esi + 0x8DC);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x40)) >> 32) & 1);
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx + ecx + 0x1C;
    PUSH32(esp, ecx);
    ecx = edi;
    if (LO8(ecx)) _cf = (int)(((eax) >> ((LO8(ecx)) - 1)) & 1);
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (LO8(ecx)) _cf = (int)(((edx) >> ((LO8(ecx)) - 1)) & 1);
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00376293u); RECOMP_ABI_CALL(0x00375F30u, sub_00375F30); /* call 0x00375F30 */

loc_00376293: ;
    edx = MEM32(esp + edi * 4 + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003762A3u); RECOMP_ABI_CALL(0x0036CA80u, sub_0036CA80); /* call 0x0036CA80 */

loc_003762A3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003762A9u); RECOMP_ABI_CALL(0x0036BDB0u, sub_0036BDB0); /* call 0x0036BDB0 */

loc_003762A9: ;
    PUSH32(esp, 0x003762AEu); RECOMP_ABI_CALL(0x00369FC0u, sub_00369FC0); /* call 0x00369FC0 */

loc_003762AE: ;
    edi = MEM32(esi + 0x8DC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003762BAu); RECOMP_ABI_CALL(0x00351000u, sub_00351000); /* call 0x00351000 */

loc_003762BA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(8)) >> 32) & 1);
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x003762C3u); RECOMP_ABI_CALL(0x00351011u, sub_00351011); /* call 0x00351011 */

loc_003762C3: ;
    SET_LO8(eax, MEM8(0x37DE1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(0x37DE10);
    MEM32(edi + 0x10) = ecx;
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00376343; /* jns: not sign (positive) */

loc_003762D5: ;
    edi = MEM32(0x37DE20);
    edx = MEM32(esi + 0x8DC);
    eax = MEM32(0x37DE14);
    PUSH32(esp, 0x37DE08);
    _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x1FF)) >> 32) & 1);
    edi = edi + 0x1FF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFFFE00u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x37DE00);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x418098); PUSH32(esp, 0x0037630Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00376305u); } /* indirect call */
    }

loc_0037630B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_003763A3; /* jl: less (signed <) */

loc_00376313: ;
    edx = MEM32(0x37DE10);
    ecx = MEM32(0x37DE08);
    eax = MEM32(0x37DE0C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    POP32(esp, ebp);
    MEM32(0x37DE10) = edx;
    MEM32(0x37DE08) = ecx;
    MEM32(0x37DE0C) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00376343: ;
    eax = MEM32(esi + 0x8D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003763A3; /* jne: not equal / not zero */

loc_0037634D: ;
    ebp = 0x26000000;
    MEM32(esi + 0x8D4) = ebp;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0xFFFFFFEFu;
    /* nop */

loc_00376360: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00376367u); RECOMP_ABI_CALL(0x003373CCu, sub_003373CC); /* call 0x003373CC */

loc_00376367: ;
    ecx = edi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2710 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00376395; /* jb: below (unsigned <) */

loc_00376372: ;
    ecx = MEM32(esi + 0x8D8);
    eax = MEM32(0x37DE10);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x8D4) = 0;
    MEM32(esi + 0x8D8) = ecx;
    MEM32(0x37DE10) = eax;

loc_00376395: ;
    _fa = (uint32_t)(MEM32(esi + 0x8D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8D4), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00376360; /* je: equal / zero */

loc_0037639D: ;
    MEM32(0x37DE10) = MEM32(0x37DE10) + 1;
    _fa = (uint32_t)(MEM32(0x37DE10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003763A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003763B0
 * Original: 0x003763B0 - 0x00376914 (1380 bytes, 409 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003763B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003763B0: ;
    eax = MEM32(0x37DE18);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x37B648);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003763DD; /* je: equal / zero */

loc_003763C9: ;
    _fa = (uint32_t)(MEM8(ebp + 0x8D8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x8D8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003763DD; /* je: equal / zero */

loc_003763D2: ;
    MEM32(0x37B5AC) = eax;
    MEM32(0x37DE18) = ebx;

loc_003763DD: ;
    ecx = MEM32(ebp + 0x8D4);
    eax = ecx;
    eax = eax & 0xFF000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28000000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003767CF; /* ja: above (unsigned >) */

loc_003763F5: ;
    if (CMP_EQ(_fa, _fb)) goto loc_003767AD; /* je: equal / zero */

loc_003763FB: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003767C2; /* je: equal / zero */

loc_00376405: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00376496; /* je: equal / zero */

loc_00376410: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037690C; /* jne: not equal / not zero */

loc_0037641B: ;
    SET_LO8(eax, MEM8(0x37DE1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0037645A; /* jns: not sign (positive) */

loc_00376424: ;
    eax = MEM32(0x37DE14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037645A; /* je: equal / zero */

loc_0037642D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    ecx = esp + 0x1B;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x37DE00);
    PUSH32(esp, eax);
    MEM8(esp + 0x27) = 1;
    { uint32_t _icall_target = MEM32(0x418094); PUSH32(esp, 0x00376447u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00376441u); } /* indirect call */
    }

loc_00376447: ;
    edx = MEM32(0x37DE14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x418080); PUSH32(esp, 0x00376454u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037644Eu); } /* indirect call */
    }

loc_00376454: ;
    MEM32(0x37DE14) = edi;

loc_0037645A: ;
    edx = MEM32(ebp + 0x8D8);
    eax = MEM32(ebp + 0x8DC);
    edx = edx & 0xFFFFFFCFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 0x8D8) = edx;
    MEM32(ebp + 0x8D4) = 0x24000000;
    if (CMP_EQ(_fa, _fb)) goto loc_00376488; /* je: equal / zero */

loc_0037647D: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00376488u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_00376488: ;
    MEM32(ebp + 0x8DC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00376496: ;
    eax = MEM32(ebp + 0x8DC);
    ecx = MEM32(eax);
    edx = MEM32(eax + 8);
    esi = MEM32(eax + 4);
    eax = MEM32(eax + 0xC);
    MEM32(0x37DE1C) = ecx;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(0x37DE2C) = edx;
    MEM32(0x37DE28) = eax;
    MEM32(0x37DE18) = ebx;
    PUSH32(esp, 0x003764C8u); RECOMP_ABI_CALL(0x00351011u, sub_00351011); /* call 0x00351011 */

loc_003764C8: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003764D9u); RECOMP_ABI_CALL(0x00347B40u, sub_00347B40); /* call 0x00347B40 */

loc_003764D9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003764E6u); RECOMP_ABI_CALL(0x00348030u, sub_00348030); /* call 0x00348030 */

loc_003764E6: ;
    PUSH32(esp, ebx);
    MEM32(0x37DDF0) = eax;
    MEM32(0x37DDF4) = edx;
    MEM32(0x37DDF8) = edi;
    MEM32(0x37DDFC) = edi;
    PUSH32(esp, 0x00376503u); RECOMP_ABI_CALL(0x0036A610u, sub_0036A610); /* call 0x0036A610 */

loc_00376503: ;
    ebx = eax;
    eax = MEM32(0x37DE1C);
    esi = MEM32(ebx + 0x10);
    edx = eax;
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00376534; /* jne: not equal / not zero */

loc_00376523: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(ebx + 0xF));
    eax = 1;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0037653F;

loc_00376534: ;
    eax = esi;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0037653F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00376555; /* jne: not equal / not zero */

loc_00376543: ;
    ecx = MEM32(ebx + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0037655C;

loc_00376555: ;
    esi = esi & 0xFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0037655C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx + ecx + 0x1C;
    PUSH32(esp, ecx);
    ecx = edx;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi >> LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037657Eu); RECOMP_ABI_CALL(0x00375F30u, sub_00375F30); /* call 0x00375F30 */

loc_0037657E: ;
    ebx = MEM32(esp + 0x50);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00376599; /* jne: not equal / not zero */

loc_00376586: ;
    ecx = MEM32(esp + 0x4C);
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_003765A5;

loc_00376599: ;
    edi = ebx;
    edi = edi >> 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 0xFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003765A5: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003765AFu); RECOMP_ABI_CALL(0x0036A1D0u, sub_0036A1D0); /* call 0x0036A1D0 */

loc_003765AF: ;
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0x58) = 0x28;
    if (CMP_NE(_fa, _fb)) goto loc_003765D8; /* jne: not equal / not zero */

loc_003765C5: ;
    ecx = MEM32(esp + 0x4C);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_003765E0;

loc_003765D8: ;
    eax = ebx;
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003765E0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0x5C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003765FB; /* jne: not equal / not zero */

loc_003765E8: ;
    ecx = MEM32(esp + 0x4C);
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 1;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00376605;

loc_003765FB: ;
    ebx = ebx >> 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0xFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00376605: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x60) = ebx;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edi (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    MEM16(esp + 0x68) = 1;
    MEM32(esp + 0x6C) = edi;
    MEM32(esp + 0x70) = esi;
    MEM32(0x37DE20) = esi;
    eax = eax * 8 + 0x10;
    MEM16(esp + 0x6A) = LO16(eax);
    MEM32(esp + 0x74) = edi;
    MEM32(esp + 0x78) = edi;
    MEM32(esp + 0x7C) = edi;
    PUSH32(esp, 0x00376649u); RECOMP_ABI_CALL(0x0036A1D0u, sub_0036A1D0); /* call 0x0036A1D0 */

loc_00376649: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    MEM32(esp + 0x80) = eax;
    PUSH32(esp, 0x0037665Au); RECOMP_ABI_CALL(0x0036BDB0u, sub_0036BDB0); /* call 0x0036BDB0 */

loc_0037665A: ;
    eax = esi + 0x1FF;
    eax = eax & 0xFFFFFE00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xAE800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00376670u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_00376670: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 0x8DC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0037668C; /* jne: not equal / not zero */

loc_0037667A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x8D4) = 0x25000003;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0037668C: ;
    edi = eax;
    SET_LO8(eax, MEM8(0x37DE1C));
    ecx = 0xA;
    esi = esp + 0x58;
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
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00376786; /* jns: not sign (positive) */

loc_003766A8: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x37A410);
    MEM32(0x37DE14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x003766C3u); RECOMP_ABI_CALL(0x003380B1u, sub_003380B1); /* call 0x003380B1 */

loc_003766C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003766DA; /* jne: not equal / not zero */

loc_003766C7: ;
    PUSH32(esp, 0x003766CCu); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_003766CC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x37A3E8);
    PUSH32(esp, 0x003766D7u); RECOMP_ABI_CALL(0x003769F0u, sub_003769F0); /* call 0x003769F0 */

loc_003766D7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003766DA: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003766F5; /* jl: less (signed <) */

loc_003766E0: ;
    eax = 0x40000000;
    if (CMP_G(_fas, _fbs)) goto loc_003766ED; /* jg: greater (signed >) */

loc_003766E7: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003766F5; /* jbe: below or equal (unsigned <=) */

loc_003766ED: ;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = esi;

loc_003766F5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x48);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x37DE00);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40100100);
    PUSH32(esp, 0x37DE14);
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x54) = 0x40;
    MEM32(esp + 0x50) = 0x42C960;
    { uint32_t _icall_target = MEM32(0x418090); PUSH32(esp, 0x0037672Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00376727u); } /* indirect call */
    }

loc_0037672D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0037673C; /* jge: greater or equal (signed >=) */

loc_00376731: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x37A3CC);
    goto loc_003768DC;

loc_0037673C: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(0x37DE14);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(0x37DE08) = esi;
    MEM32(0x37DE0C) = esi;
    PUSH32(esp, 0x00376760u); RECOMP_ABI_CALL(0x00332C0Eu, sub_00332C0E); /* call 0x00332C0E */

loc_00376760: ;
    eax = MEM32(0x37DE14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037676Bu); RECOMP_ABI_CALL(0x00332A90u, sub_00332A90); /* call 0x00332A90 */

loc_0037676B: ;
    ecx = MEM32(0x37DE0C);
    edx = MEM32(0x37DE08);
    eax = MEM32(0x37DE14);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00376786u); RECOMP_ABI_CALL(0x00332C0Eu, sub_00332C0E); /* call 0x00332C0E */

loc_00376786: ;
    eax = MEM32(ebp + 0x8D8);
    POP32(esp, edi);
    MEM32(0x37DE10) = esi;
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    MEM32(ebp + 0x8D8) = eax;
    MEM32(ebp + 0x8D4) = 0x22000000;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003767AD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003767C2; /* je: equal / zero */

loc_003767B1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x003767B8u); RECOMP_ABI_CALL(0x003373CCu, sub_003373CC); /* call 0x003373CC */

loc_003767B8: ;
    eax = MEM32(ebp + 0x8D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003767B1; /* jne: not equal / not zero */

loc_003767C2: ;
    PUSH32(esp, 0x003767C7u); RECOMP_ABI_CALL(0x00376030u, sub_00376030); /* call 0x00376030 */

loc_003767C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003767CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x29000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00376830; /* je: equal / zero */

loc_003767D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037690C; /* jne: not equal / not zero */

loc_003767E1: ;
    ecx = MEM32(ebp + 0x8DC);
    eax = MEM32(ecx);
    MEM32(0x37DE24) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00376803; /* je: equal / zero */

loc_003767F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x8D4) = 0x44000004;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00376803: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x37A3C4);
    PUSH32(esp, 0x37A3B8);
    PUSH32(esp, 0x37A3B0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0037681Bu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_0037681B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x8D4) = 0x43000000;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00376830: ;
    edx = MEM32(ebp + 0x8D8);
    edx = edx & 0xFFFFFFEFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x8D8) = edx;
    eax = MEM32(0x37DE14);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00376852u); RECOMP_ABI_CALL(0x003373A0u, sub_003373A0); /* call 0x003373A0 */

loc_00376852: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00376879; /* jne: not equal / not zero */

loc_00376859: ;
    PUSH32(esp, 0x37A33C);
    PUSH32(esp, 0x00376863u); RECOMP_ABI_CALL(0x003769F0u, sub_003769F0); /* call 0x003769F0 */

loc_00376863: ;
    eax = MEM32(0x37DE10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037687B; /* jle: less or equal (signed <=) */

loc_00376871: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x37DE10) = eax;
    goto loc_0037687B;

loc_00376879: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037687B: ;
    edi = MEM32(0x37DE2C);
    ecx = MEM32(0x37DE14);
    edi = edi & 0xFFFFFFFEu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(0x37DE2C) = edi;
    { uint32_t _icall_target = MEM32(0x418080); PUSH32(esp, 0x00376897u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00376891u); } /* indirect call */
    }

loc_00376897: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x37DE00);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x80110000u);
    PUSH32(esp, 0x37DE14);
    MEM32(0x37DE14) = ebx;
    MEM32(esp + 0x58) = esi;
    MEM32(esp + 0x60) = 0x40;
    MEM32(esp + 0x5C) = 0x42C960;
    { uint32_t _icall_target = MEM32(0x418090); PUSH32(esp, 0x003768D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003768CCu); } /* indirect call */
    }

loc_003768D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003768F6; /* jge: greater or equal (signed >=) */

loc_003768D6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x37A37C);

loc_003768DC: ;
    PUSH32(esp, 0x003768E1u); RECOMP_ABI_CALL(0x003769F0u, sub_003769F0); /* call 0x003769F0 */

loc_003768E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x8D4) = 0x25000004;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003768F6: ;
    MEM32(0x37DE08) = esi;
    MEM32(0x37DE0C) = esi;
    MEM32(ebp + 0x8D4) = 0x2A000000;

loc_0037690C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00376920
 * Original: 0x00376920 - 0x00376971 (81 bytes, 25 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00376920: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0037692Du); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_0037692D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00376937; /* jne: not equal / not zero */

loc_00376933: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00376937: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    MEM32(esi) = 0x1050001;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x0037696Bu); RECOMP_ABI_CALL(0x0036BD70u, sub_0036BD70); /* call 0x0036BD70 */

loc_0037696B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00376980
 * Original: 0x00376980 - 0x003769B0 (48 bytes, 13 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00376980: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x10) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x1050001;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003769B0
 * Original: 0x003769B0 - 0x003769C4 (20 bytes, 7 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003769B0(void)
{

loc_003769B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003769C1u); RECOMP_ABI_CALL(0x00371AF0u, sub_00371AF0); /* call 0x00371AF0 */

loc_003769C1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003769D0
 * Original: 0x003769D0 - 0x003769F0 (32 bytes, 12 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003769D0(void)
{

loc_003769D0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003769EDu); RECOMP_ABI_CALL(0x00371DE0u, sub_00371DE0); /* call 0x00371DE0 */

loc_003769ED: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003769F0
 * Original: 0x003769F0 - 0x00376A23 (51 bytes, 14 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003769F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003769F0: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 0x10C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, 0x104);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00376A12u); RECOMP_ABI_CALL(0x0034819Du, sub_0034819D); /* call 0x0034819D */

loc_00376A12: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00376A1Cu); RECOMP_ABI_CALL(0x0033A304u, sub_0033A304); /* call 0x0033A304 */

loc_00376A1C: ;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00376A30
 * Original: 0x00376A30 - 0x00376AC1 (145 bytes, 56 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00376A30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_00376A40: ;
    ecx = MEM32(ebx);
    edx = MEM32(ebx + 8);
    eax = ecx;
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x20000000 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(edx) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00376A9B; /* je: equal / zero */

loc_00376A5B: ;
    edx = MEM32(ebx + 0x10);
    eax = MEM32(ebx + 0xC);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00376A9B; /* je: equal / zero */

loc_00376A6C: ;
    /* nop */

loc_00376A70: ;
    edi = MEM32(eax + 4);
    ebp = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ebp = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax;
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
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00376A70; /* jne: not equal / not zero */

loc_00376A97: ;
    ecx = MEM32(esp + 0x10);

loc_00376A9B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebx + 4);
    MEM32(ebx + 4) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00376AB1; /* jns: not sign (positive) */

loc_00376AA9: ;
    ecx = ecx & 0xBFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx) = ecx;

loc_00376AB1: ;
    ebx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00376A40; /* ja: above (unsigned >) */

loc_00376AB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00376AD0
 * Original: 0x00376AD0 - 0x00376D6C (668 bytes, 211 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00376AD0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00376AE7u); RECOMP_ABI_CALL(0x00375110u, sub_00375110); /* call 0x00375110 */

loc_00376AE7: ;
    ebx = MEM32(esp + 0x40);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00376D40; /* js: sign (negative) */

loc_00376AF4: ;
    eax = MEM32(ebx + 0xC);
    edi = MEM32(ebx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00376B2B; /* je: equal / zero */

loc_00376B13: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x10) = 0x20000000;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;

loc_00376B2B: ;
    SET_LO8(eax, MEM8(esi + 8));
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    eax = MEM32(esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00376CD0; /* jne: not equal / not zero */

loc_00376B3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00376B4C; /* jb: below (unsigned <) */

loc_00376B43: ;
    PUSH32(esp, 0x00376B48u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00376B48: ;
    MEM32(esp + 0x18) = eax;

loc_00376B4C: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx);
    ecx = MEM32(esi + 0x2C);
    MEM32(esp + 0x1C) = edx;
    edx = ecx;
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    ecx = edi;
    if (CMP_B(_fa, _fb)) goto loc_00376BB3; /* jb: below (unsigned <) */

loc_00376B67: ;
    edx = MEM32(esp + 0x20);
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = eax;
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x14);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = edi;
    PUSH32(esp, 0x00376BA8u); RECOMP_ABI_CALL(0x00376A30u, sub_00376A30); /* call 0x00376A30 */

loc_00376BA8: ;
    edx = MEM32(esi + 0x54);
    MEM32(ebx + 0x14) = edx;
    goto loc_00376CA9;

loc_00376BB3: ;
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x40100;
    MEM32(eax + 4) = 0;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 8) = ecx;
    ecx = eax + 0xC;
    eax = MEM32(esi + 0x4C);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax + eax * 4;
    ebx = esi + edx * 4 + 0x264;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x40000000 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00376C09; /* jne: not equal / not zero */

loc_00376BE9: ;
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0xC0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = ebp | ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebp;
    ebp = eax;
    ebp = ebp << 5;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = ebp | 0xD;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x4C) = eax;
    goto loc_00376C26;

loc_00376C09: ;
    ebx = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ecx;
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp | ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebp;
    ebp = ebx;
    ebp = ebp << 5;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = ebp | 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00376C26: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x14);
    MEM32(ebx) = eax;
    eax = edi + ecx;
    MEM32(ebx + 4) = 0;
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0xC) = edx;
    MEM32(ebx + 0x10) = edi;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = esi + 0x50;
    MEM32(esp + 0x20) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00376C7F; /* jbe: below or equal (unsigned <=) */

loc_00376C55: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x54) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00376C7F; /* je: equal / zero */

loc_00376C61: ;
    edx = MEM32(esi + 0x58);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = edx;
    eax = 0;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x20);
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00376C9A; /* je: equal / zero */

loc_00376C7F: ;
    MEM32(esp + 0x20) = edi;
    eax = 1;
    ecx = MEM32(esp + 0x20);
    { uint32_t _old = RECOMP_ATOMIC_ADD32(XBOX_PTR(ecx), eax);
      eax = _old; }  /* xadd */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x54) = MEM32(esi + 0x54) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x18);
    MEM32(eax + 4) = ebp;

loc_00376C9A: ;
    edx = MEM32(esp + 0x40);
    ecx = MEM32(esi + 0x54);
    MEM32(edx + 0x14) = ecx;
    MEM32(esi + 0x58) = ebx;
    ebx = edx;

loc_00376CA9: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esi + 0x3C);
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(esi + 0x3C) = edx;
    ecx = MEM32(0x37DDE0);
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00376D22; /* jbe: below or equal (unsigned <=) */

loc_00376CC7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00376CCEu); RECOMP_ABI_CALL(0x00370080u, sub_00370080); /* call 0x00370080 */

loc_00376CCE: ;
    goto loc_00376D22;

loc_00376CD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00376CD9; /* jb: below (unsigned <) */

loc_00376CD4: ;
    PUSH32(esp, 0x00376CD9u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00376CD9: ;
    ecx = eax + 0xC;
    MEM32(eax) = 0x40100;
    edx = ecx;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | 0xE;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    edx = edi;
    edx = edx & 0xFFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 8) = edx;
    eax = ecx + 0x14;
    edx = eax;
    edx = edx & 0xFFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(ecx + 4) = 0;
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edi;
    MEM32(esi) = eax;

loc_00376D22: ;
    eax = MEM32(esi + 0x2C);
    MEM32(ebx + 8) = eax;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00376D62; /* je: equal / zero */

loc_00376D30: ;
    ecx = MEM32(esi + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00376D40: ;
    edi = MEM32(ebx + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi >> 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00376D4Fu); RECOMP_ABI_CALL(0x00370400u, sub_00370400); /* call 0x00370400 */

loc_00376D4F: ;
    edx = MEM32(ebx + 4);
    PUSH32(esp, edi);
    ebp = eax;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00376D5Cu); RECOMP_ABI_CALL(0x00375950u, sub_00375950); /* call 0x00375950 */

loc_00376D5C: ;
    eax = ebp + edi * 4;
    MEM32(esi) = eax;

loc_00376D62: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00376D70
 * Original: 0x00376D70 - 0x00376DFE (142 bytes, 55 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00376D70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = ebx + 0x18;
    if (CMP_NE(_fa, _fb)) goto loc_00376D87; /* jne: not equal / not zero */

loc_00376D82: ;
    eax = 0x18;

loc_00376D87: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00376D92u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_00376D92: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00376DF8; /* je: equal / zero */

loc_00376D9A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = esi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(esi) = 0x1020001;
    if (CMP_EQ(_fa, _fb)) goto loc_00376DCE; /* je: equal / zero */

loc_00376DB7: ;
    edx = esi + 0x18;
    POP32(esp, edi);
    MEM32(esi + 0x10) = ebx;
    MEM32(esi) = 0x81020001u;
    MEM32(esi + 4) = edx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00376DCE: ;
    PUSH32(esp, 0xB2800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00376DD9u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_00376DD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00376DF0; /* jne: not equal / not zero */

loc_00376DDD: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00376DE8u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_00376DE8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00376DF0: ;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x10) = ebx;
    eax = esi;

loc_00376DF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00376E00
 * Original: 0x00376E00 - 0x00376E65 (101 bytes, 28 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00376E00: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00376E11u); RECOMP_ABI_CALL(0x00375110u, sub_00375110); /* call 0x00375110 */

loc_00376E11: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00376E1Bu); RECOMP_ABI_CALL(0x003704F0u, sub_003704F0); /* call 0x003704F0 */

loc_00376E1B: ;
    MEM32(esi + 0x764) = edi;
    MEM32(esi + 0x768) = 0;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + 0x80000;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(esi + 0x770) = eax;
    MEM32(esi + 0x76C) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esi) = edx;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(edi + 4);
    edx = eax + ecx + -516;
    eax = MEM32(esi + 8);
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00376E70
 * Original: 0x00376E70 - 0x00376EFD (141 bytes, 41 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00376E70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00376E81u); RECOMP_ABI_CALL(0x00375110u, sub_00375110); /* call 0x00375110 */

loc_00376E81: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00376E8Bu); RECOMP_ABI_CALL(0x00376F00u, sub_00376F00); /* call 0x00376F00 */

loc_00376E8B: ;
    eax = MEM32(esi + 0x764);
    edx = MEM32(eax + 4);
    ecx = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x768);
    ecx = ecx + edx + 4;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(esi + 0x76C);
    edx = MEM32(esi + 0x770);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = MEM32(esi + 8) & 0xFFFFFF7Bu;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x764);
    MEM32(esi) = edx;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00376EDD; /* jne: not equal / not zero */

loc_00376ED7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00376EDDu); RECOMP_ABI_CALL(0x0036BC50u, sub_0036BC50); /* call 0x0036BC50 */

loc_00376EDD: ;
    eax = MEM32(esi + 0x768);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00376EEF; /* je: equal / zero */

loc_00376EE8: ;
    eax = 0x88760829u;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00376EEF: ;
    MEM32(0x37B1A8) = MEM32(0x37B1A8) | 0xFF7F7F;
    _fa = (uint32_t)(MEM32(0x37B1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00376F00
 * Original: 0x00376F00 - 0x00376FA3 (163 bytes, 63 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00376F00: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi + 0x764);
    edx = MEM32(eax + 4);
    ecx = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x480;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((3) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00376F8D; /* jle: less or equal (signed <=) */

loc_00376F2B: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00376F98; /* js: sign (negative) */

loc_00376F32: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = edi + 1;
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x00376F45u); RECOMP_ABI_CALL(0x00370400u, sub_00370400); /* call 0x00370400 */

loc_00376F45: ;
    edx = eax;
    ebx = edi * 4;
    eax = edi;
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x40000100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40000100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    ecx = ebx;
    ebp = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebp;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = MEM32(esi + 0x764);
    eax = ebx + edx + 4;
    MEM32(esi) = eax;
    edx = MEM32(ecx + 4);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(edx) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00376F8D: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00376F98: ;
    edx = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00376FB0
 * Original: 0x00376FB0 - 0x00376FB3 (3 bytes, 1 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376FB0(void)
{

loc_00376FB0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00376FB3
 * Original: 0x00376FB3 - 0x0037711A (359 bytes, 116 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00376FB3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00376FB3: ;
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
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ecx = edi + 0x200;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x154) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00376FD4; /* jne: not equal / not zero */

loc_00376FD2: ;
    MEM32(ecx) = eax;

loc_00376FD4: ;
    eax = MEM32(edi + 0x140);
    MEM32(esi + 0x158) = eax;
    MEM32(ecx) = 0xFFFFFFFFu;
    eax = edi + 0x680504;
    ecx = MEM32(eax);
    ebx = 0xFF;
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ecx;
    ecx = ZX8(MEM8(eax + 1));
    eax = MEM32(eax);
    MEM32(ebp + -4) = edx;
    MEM32(esi + 0xD0) = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    MEM32(esi + 0xD4) = ecx;
    MEM32(esi + 0xD8) = edx;
    MEM32(esi + 0xDC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0037704D; /* je: equal / zero */

loc_0037702A: ;
    eax = MEM32(esi + 0xBC);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = edx;
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(ebp + -8);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0037704F;

loc_0037704D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037704F: ;
    MEM32(esi + 0xC4) = eax;
    eax = edi + 0x680508;
    ecx = MEM32(eax);
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = ecx;
    ecx = ZX8(MEM8(eax + 1));
    eax = MEM32(eax);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0xE0) = eax;
    eax = MEM32(ebp + -8);
    MEM32(esi + 0xE4) = ecx;
    MEM32(esi + 0xE8) = edx;
    MEM32(esi + 0xEC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003770B8; /* je: equal / zero */

loc_00377095: ;
    eax = MEM32(esi + 0xBC);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = edx;
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(ebp + -8);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003770BA;

loc_003770B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003770BA: ;
    MEM32(esi + 0xC8) = eax;
    eax = edi + 0x680500;
    ecx = MEM32(eax);
    edi = ZX8(MEM8(eax + 1));
    eax = MEM32(eax);
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ecx;
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = eax;
    MEM32(esi + 0xF0) = ebx;
    MEM32(esi + 0xF4) = edi;
    MEM32(esi + 0xF8) = edx;
    MEM32(esi + 0xFC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0037710D; /* je: equal / zero */

loc_003770F6: ;
    eax = MEM32(esi + 0xBC);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edi = edx;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    goto loc_0037710F;

loc_0037710D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037710F: ;
    POP32(esp, edi);
    MEM32(esi + 0xCC) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0037711A
 * Original: 0x0037711A - 0x00377218 (254 bytes, 72 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037711A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037711A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    eax = MEM32(edi + 0x100200);
    MEM32(esi + 0x14C) = eax;
    eax = MEM32(edi + 0x100204);
    MEM32(esi + 0x150) = eax;
    eax = MEM32(edi + 0x1218);
    ecx = 0x100;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ebx = 0x5000;
    PUSH32(esp, ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xB0) = edx;
    { uint32_t _icall_target = MEM32(0x41823C); PUSH32(esp, 0x00377169u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00377163u); } /* indirect call */
    }

loc_00377169: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x10) = eax;
    eax = ecx + 0x700000;
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x130) = eax;
    ecx = ecx & 0x1F0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x3000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x2210) = ecx;
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x128;
    MEM32(ecx) = eax;
    ecx = MEM32(ecx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    edx = edx & 0x1FC00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x12C) = eax;
    edx = edx | 0x200;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x1FC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFF900020u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFF900020u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 0x2214) = edx;
    MEM32(esi + 0x160) = eax;
    ecx = edi + 0x100214;
    eax = MEM32(ecx);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = eax;
    eax = 0x700000;

loc_003771EE: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x705000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x705000 (32-bit) */
    MEM32(ecx + edi) = 0;
    if (CMP_B(_fa, _fb)) goto loc_003771EE; /* jb: below (unsigned <) */

loc_00377204: ;
    PUSH32(esp, 8);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037720Du); RECOMP_ABI_CALL(0x00372E77u, sub_00372E77); /* call 0x00372E77 */

loc_0037720D: ;
    POP32(esp, edi);
    MEM32(esi + 0x140) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00377218
 * Original: 0x00377218 - 0x003772E7 (207 bytes, 49 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00377218(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00377218: ;
    eax = MEM32(ecx);
    MEM8(eax + 0x6013D4) = 0x1F;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x6013D5));
    MEM8(eax + 0x6013D4) = 0x1F;
    MEM8(eax + 0x6013D5) = 0x57;
    MEM8(eax + 0x6013D4) = 0x52;
    SET_LO8(ecx, MEM8(eax + 0x6013D5));
    MEM8(eax + 0x6013D4) = 0x52;
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(eax + 0x6013D5) = LO8(ecx);
    ecx = MEM32(eax + 0x8088);
    ecx = ecx & 0xFFFFF43Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x400;
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x8088) = ecx;
    ecx = MEM32(eax + 0x8088);
    ecx = ecx & 0xF43FFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0x4000000;
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x8088) = ecx;
    ecx = eax + 0x808C;
    edx = MEM32(ecx);
    edx = edx & 0xFFFFF40Fu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = edx;
    edx = MEM32(ecx);
    edx = edx & 0xF40FFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = edx;
    MEM8(eax + 0x6013D4) = 0x20;
    MEM8(eax + 0x6013D5) = 0x29;
    MEM8(eax + 0x6013D4) = 0x1B;
    edx = eax + 0x600804;
    MEM8(eax + 0x6013D5) = 5;
    ecx = MEM32(edx);
    ecx = ecx & 0xFFFFFFFAu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_003772E6; /* jne: not equal / not zero */

loc_003772D8: ;
    MEM8(eax + 0x6013D4) = 0x1F;
    MEM8(eax + 0x6013D5) = 0x99;

loc_003772E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003772E7
 * Original: 0x003772E7 - 0x0037731D (54 bytes, 18 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003772E7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003772E7: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    _fb = (uint32_t)(0x8918) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8918;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    edx = 0x1000;
    ecx = 0x100000;

loc_003772FC: ;
    MEM32(eax + -8) = edx;
    MEM32(eax) = edx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x10) = 0xFFFFFFFFu;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003772FC; /* jne: not equal / not zero */

loc_0037731B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037731D
 * Original: 0x0037731D - 0x0037734D (48 bytes, 15 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037731D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037731D: ;
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 0x140);
    eax = ecx;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0x400780) = eax;
    eax = ecx + 0x70000;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 2);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);

loc_00377340: ;
    MEM32(eax) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00377340; /* jne: not equal / not zero */

loc_0037734C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037734D
 * Original: 0x0037734D - 0x003773BE (113 bytes, 19 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037734D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037734D: ;
    eax = MEM32(ecx);
    MEM32(ecx + 0x120) = 0xFF;
    MEM32(ecx + 0x124) = 0x800000;
    MEM32(ecx + 0x11C) = 0x1111111;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x3210) = edx;
    MEM32(eax + 0x3270) = edx;
    MEM32(eax + 0x3240) = edx;
    MEM32(eax + 0x3244) = edx;
    MEM32(eax + 0x3058) = edx;
    MEM32(eax + 0x3258) = edx;
    ecx = MEM32(ecx + 0x104);
    MEM32(eax + 0x2504) = ecx;
    MEM32(eax + 0x2508) = edx;
    MEM32(eax + 0x250C) = edx;
    MEM32(eax + 0x3228) = edx;
    MEM32(eax + 0x2410) = edx;
    MEM32(eax + 0x2420) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_003773BE
 * Original: 0x003773BE - 0x003773FD (63 bytes, 23 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003773BE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003773BE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    eax = MEM32(esi + 0x400700);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003773FA; /* je: equal / zero */

loc_003773CE: ;
    PUSH32(esp, ebx);

loc_003773CF: ;
    ebx = MEM32(esi + 0x100);
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003773E1; /* je: equal / zero */

loc_003773DA: ;
    ecx = edi;
    PUSH32(esp, 0x003773E1u); RECOMP_ABI_CALL(0x00372B60u, sub_00372B60); /* call 0x00372B60 */

loc_003773E1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003773F0; /* je: equal / zero */

loc_003773E9: ;
    ecx = edi;
    PUSH32(esp, 0x003773F0u); RECOMP_ABI_CALL(0x003725F0u, sub_003725F0); /* call 0x003725F0 */

loc_003773F0: ;
    _fa = (uint32_t)(MEM32(esi + 0x400700)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x400700), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003773CF; /* jne: not equal / not zero */

loc_003773F9: ;
    POP32(esp, ebx);

loc_003773FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003773FD
 * Original: 0x003773FD - 0x00377436 (57 bytes, 15 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003773FD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003773FD: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, 2);
    POP32(esp, edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00377432; /* je: equal / zero */

loc_0037740B: ;
    eax = MEM32(ecx + eax * 4 + 0x138);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x400784) = eax;
    MEM32(esi + 0x400788) = edx;
    PUSH32(esp, 0x00377428u); RECOMP_ABI_CALL(0x003773BEu, sub_003773BE); /* call 0x003773BE */

loc_00377428: ;
    MEM32(esi + 0x400144) = 0x10000000;

loc_00377432: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00377436
 * Original: 0x00377436 - 0x00377633 (509 bytes, 132 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00377436(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00377436: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x2500);
    ebx = MEM32(esi + 0x128);
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(eax + 0x3200);
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(eax + 0x3250);
    MEM32(ebp + -12) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x2500) = ecx;
    MEM32(eax + 0x3200) = ecx;
    MEM32(eax + 0x3250) = ecx;
    ecx = MEM32(eax + 0x3204);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x3240);
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ecx;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = edi;
    edi = MEM32(eax + 0x3244);
    MEM32(edx + 4) = edi;
    edi = MEM32(eax + 0x3248);
    MEM32(edx + 8) = edi;
    edi = MEM32(eax + 0x322C);
    MEM32(edx + 0xC) = edi;
    edi = MEM32(eax + 0x3228);
    MEM32(edx + 0x10) = edi;
    edi = MEM32(eax + 0x3224);
    MEM32(edx + 0x14) = edi;
    edi = MEM32(eax + 0x3280);
    MEM32(edx + 0x18) = edi;
    edi = MEM32(eax + 0x3254);
    MEM32(edx + 0x1C) = edi;
    edi = MEM32(eax + 0x3268);
    MEM32(edx + 0x20) = edi;
    edi = MEM32(eax + 0x3264);
    MEM32(edx + 0x24) = edi;
    edi = MEM32(eax + 0x3260);
    MEM32(edx + 0x28) = edi;
    edi = MEM32(eax + 0x326C);
    MEM32(edx + 0x2C) = edi;
    edi = MEM32(eax + 0x324C);
    MEM32(edx + 0x30) = edi;
    edx = MEM32(eax + 0x3204);
    edi = 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037753E; /* je: equal / zero */

loc_0037750D: ;
    edx = MEM32(eax + 0x2508);
    MEM32(ebp + -4) = 1;
    MEM32(ebp + -4) = MEM32(ebp + -4) << LO8(ecx);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + -4);
    ecx = ~ecx;
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = edx;
    edx = MEM32(eax + 0x3240);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x3244)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x3244) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00377538; /* je: equal / zero */

loc_00377535: ;
    ecx = ecx | MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00377538: ;
    MEM32(eax + 0x2508) = ecx;

loc_0037753E: ;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x3204) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(esi + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x104), edx (32-bit) */
    MEM32(ebp + -8) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0037756F; /* je: equal / zero */

loc_0037755C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037756F; /* je: equal / zero */

loc_00377561: ;
    ecx = MEM32(eax + 0x3204);
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x3204) = ecx;

loc_0037756F: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + eax;
    edi = MEM32(edx);
    MEM32(eax + 0x3240) = edi;
    edi = MEM32(edx + 4);
    MEM32(eax + 0x3244) = edi;
    edi = MEM32(edx + 8);
    MEM32(eax + 0x3248) = edi;
    edi = MEM32(edx + 0xC);
    MEM32(eax + 0x322C) = edi;
    edi = MEM32(edx + 0x10);
    MEM32(eax + 0x3228) = edi;
    edi = MEM32(edx + 0x14);
    MEM32(eax + 0x3224) = edi;
    edi = MEM32(edx + 0x18);
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0x3280) = edi;
    edi = MEM32(edx + 0x1C);
    MEM32(eax + 0x3254) = edi;
    edi = MEM32(edx + 0x20);
    MEM32(eax + 0x3268) = edi;
    edi = MEM32(edx + 0x24);
    MEM32(eax + 0x3264) = edi;
    edi = MEM32(edx + 0x28);
    MEM32(eax + 0x3260) = edi;
    edi = MEM32(edx + 0x2C);
    MEM32(eax + 0x326C) = edi;
    edx = MEM32(edx + 0x30);
    POP32(esp, edi);
    MEM32(eax + 0x324C) = edx;
    _fa = (uint32_t)(MEM32(esi + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x104), ecx (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0037760A; /* je: equal / zero */

loc_003775FC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037760A; /* je: equal / zero */

loc_00377604: ;
    MEM32(eax + 0x3220) = ecx;

loc_0037760A: ;
    ecx = MEM32(ebp + -12);
    MEM32(eax + 0x204C) = 0x1FFFFF;
    MEM32(eax + 0x3250) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x3200) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 0x2500) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00377633
 * Original: 0x00377633 - 0x00377645 (18 bytes, 6 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00377633(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00377633: ;
    eax = MEM32(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x600100) = ecx;
    MEM32(eax + 0x600140) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00377645
 * Original: 0x00377645 - 0x003777D2 (397 bytes, 115 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00377645(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00377645: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    edx = ecx;
    eax = MEM32(edx);
    ecx = MEM32(edx + 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x2500);
    PUSH32(esp, edi);
    MEM32(eax + 0x2500) = 0;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00377668: ;
    edi = MEM32(edx + 0x10C);
    edi = esi + edi * 4 + 0x1C0000;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDFC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xDFC (32-bit) */
    MEM32(eax + edi * 4) = 0;
    if (CMP_B(_fa, _fb)) goto loc_00377668; /* jb: below (unsigned <) */

loc_00377685: ;
    edi = MEM32(edx + 0x140);
    esi = MEM32(edx + 0x10C);
    edi = ecx + edi * 4 + 0x1C0000;
    MEM32(eax + edi * 4) = esi;
    esi = MEM32(edx + 0x10C);
    MEM32(edx + ecx * 4 + 0x138) = esi;
    esi = ecx;
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(edx + 0x128)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edx + 0x128);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = esi;
    edi = esi;
    POP32(esp, ebx);

loc_003776BD: ;
    MEM32(edi) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003776BD; /* jne: not equal / not zero */

loc_003776C9: ;
    edi = MEM32(ebp + 0x14);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    edi = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = edi;
    if (CMP_AE(_fa, _fb)) goto loc_003776DD; /* jae: above or equal (unsigned >=) */

loc_003776DA: ;
    PUSH32(esp, 8);
    POP32(esp, ebx);

loc_003776DD: ;
    esi = 0x100;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003776E8; /* jbe: below or equal (unsigned <=) */

loc_003776E6: ;
    ebx = esi;

loc_003776E8: ;
    edi = MEM32(ebp + 0xC);
    ebx = ebx >> 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003776F7; /* jae: above or equal (unsigned >=) */

loc_003776F4: ;
    PUSH32(esp, 0x20);
    POP32(esp, edi);

loc_003776F7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003776FD; /* jbe: below or equal (unsigned <=) */

loc_003776FB: ;
    edi = esi;

loc_003776FD: ;
    esi = MEM32(ebp + 0x10);
    edi = edi >> 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0037770C; /* jbe: below or equal (unsigned <=) */

loc_00377709: ;
    PUSH32(esp, 0xF);
    POP32(esp, esi);

loc_0037770C: ;
    esi = esi & 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 7;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = esi;
    esi = MEM32(ebp + -4);
    MEM32(esi + 0x14) = ebx;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0x104) = MEM32(edx + 0x104) | edi;
    _fa = (uint32_t)(MEM32(edx + 0x104)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(edx + 0x104);
    MEM32(eax + 0x2504) = esi;
    MEM32(eax + 0x3200) = 0;
    MEM32(eax + 0x3250) = 0;
    esi = eax + 0x3204;
    MEM32(esi) = ecx;
    _fa = (uint32_t)(MEM32(edx + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 0x104), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00377772; /* je: equal / zero */

loc_00377768: ;
    ecx = MEM32(esi);
    ecx = ecx | 0x100;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = ecx;

loc_00377772: ;
    esi = MEM32(ebp + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x3240) = ecx;
    MEM32(eax + 0x3244) = ecx;
    esi = MEM32(esi + 0xC);
    MEM32(eax + 0x322C) = esi;
    MEM32(eax + 0x3230) = ecx;
    MEM32(eax + 0x3228) = ecx;
    MEM32(eax + 0x3280) = ecx;
    MEM32(eax + 0x3224) = ebx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(edx + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 0x104), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003777B3; /* je: equal / zero */

loc_003777AD: ;
    MEM32(eax + 0x3220) = ecx;

loc_003777B3: ;
    MEM32(eax + 0x3250) = ecx;
    MEM32(eax + 0x3200) = ecx;
    MEM32(eax + 0x2500) = ecx;
    MEM32(edx + 0x108) = MEM32(edx + 0x108) | edi;
    _fa = (uint32_t)(MEM32(edx + 0x108)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003777D2
 * Original: 0x003777D2 - 0x0037780B (57 bytes, 20 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003777D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003777D2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 0x130);
    edx = MEM32(ebp + 8);
    ecx = ecx + edx * 8;
    edx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx | 0xFFFFFF80u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0037780B
 * Original: 0x0037780B - 0x00377880 (117 bytes, 34 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037780B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037780B: ;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx);
    ecx = eax;
    PUSH32(esp, esi);
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x39) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x39;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_00377846; /* je: equal / zero */

loc_00377822: ;
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0037783F; /* je: equal / zero */

loc_00377827: ;
    _fb = (uint32_t)(0x13) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00377838; /* je: equal / zero */

loc_0037782C: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0037784C; /* jne: not equal / not zero */

loc_00377831: ;
    esi = 0xA00;
    goto loc_0037784C;

loc_00377838: ;
    esi = 0xB00;
    goto loc_0037784C;

loc_0037783F: ;
    esi = 0x201;
    goto loc_0037784C;

loc_00377846: ;
    ecx = ecx | 0x1000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0037784C: ;
    eax = MEM32(esp + 0xC);
    edi = eax + 0x70000;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + edx) = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x700004) = esi;
    POP32(esp, edi);
    MEM32(eax + 0x700008) = 0;
    MEM32(eax + 0x70000C) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00377880
 * Original: 0x00377880 - 0x0037825F (2527 bytes, 568 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00377880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00377880: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0x100);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + edx * 4 + 0x138);
    esi = edi + 0x70000;
    ecx = esi;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx + eax;
    ecx = MEM32(edx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx) = ecx;
    ecx = esi;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + ecx * 4 + 0x33C) = 0xFFFF0000u;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + ecx * 4 + 0x340) = edx;
    MEM32(eax + ecx * 4 + 0x344) = edx;
    MEM32(eax + ecx * 4 + 0x348) = edx;
    MEM32(eax + ecx * 4 + 0x34C) = edx;
    MEM32(eax + ecx * 4 + 0x350) = edx;
    MEM32(eax + ecx * 4 + 0x354) = edx;
    MEM32(eax + ecx * 4 + 0x358) = edx;
    MEM32(eax + ecx * 4 + 0x35C) = edx;
    MEM32(eax + ecx * 4 + 0x360) = edx;
    MEM32(eax + ecx * 4 + 0x364) = edx;
    MEM32(eax + ecx * 4 + 0x368) = edx;
    MEM32(eax + ecx * 4 + 0x36C) = edx;
    MEM32(eax + ecx * 4 + 0x370) = edx;
    MEM32(eax + ecx * 4 + 0x374) = edx;
    MEM32(eax + ecx * 4 + 0x378) = edx;
    MEM32(eax + ecx * 4 + 0x37C) = edx;
    MEM32(eax + ecx * 4 + 0x380) = edx;
    MEM32(eax + ecx * 4 + 0x384) = edx;
    MEM32(eax + ecx * 4 + 0x388) = edx;
    MEM32(eax + ecx * 4 + 0x38C) = edx;
    MEM32(eax + ecx * 4 + 0x390) = edx;
    MEM32(eax + ecx * 4 + 0x394) = edx;
    MEM32(eax + ecx * 4 + 0x398) = edx;
    MEM32(eax + ecx * 4 + 0x39C) = edx;
    esi = 0xFFF0000;
    MEM32(eax + ecx * 4 + 0x3A0) = esi;
    MEM32(eax + ecx * 4 + 0x3A4) = esi;
    MEM32(eax + ecx * 4 + 0x3A8) = edx;
    MEM32(eax + ecx * 4 + 0x3AC) = edx;
    MEM32(eax + ecx * 4 + 0x3B0) = edx;
    MEM32(eax + ecx * 4 + 0x3B4) = edx;
    MEM32(eax + ecx * 4 + 0x3B8) = edx;
    MEM32(eax + ecx * 4 + 0x3BC) = edx;
    MEM32(eax + ecx * 4 + 0x3C0) = edx;
    MEM32(eax + ecx * 4 + 0x3C4) = edx;
    MEM32(eax + ecx * 4 + 0x3C8) = edx;
    MEM32(eax + ecx * 4 + 0x3CC) = edx;
    MEM32(eax + ecx * 4 + 0x3D0) = edx;
    MEM32(eax + ecx * 4 + 0x3D4) = edx;
    MEM32(eax + ecx * 4 + 0x3D8) = edx;
    MEM32(eax + ecx * 4 + 0x3DC) = edx;
    MEM32(eax + ecx * 4 + 0x3E0) = edx;
    MEM32(eax + ecx * 4 + 0x3E4) = edx;
    MEM32(eax + ecx * 4 + 0x3E8) = edx;
    MEM32(eax + ecx * 4 + 0x3EC) = edx;
    MEM32(eax + ecx * 4 + 0x3F0) = edx;
    MEM32(eax + ecx * 4 + 0x3F4) = edx;
    MEM32(eax + ecx * 4 + 0x3F8) = edx;
    MEM32(eax + ecx * 4 + 0x3FC) = edx;
    MEM32(eax + ecx * 4 + 0x400) = edx;
    MEM32(eax + ecx * 4 + 0x404) = edx;
    MEM32(eax + ecx * 4 + 0x408) = edx;
    MEM32(eax + ecx * 4 + 0x40C) = edx;
    MEM32(eax + ecx * 4 + 0x410) = edx;
    MEM32(eax + ecx * 4 + 0x414) = edx;
    MEM32(eax + ecx * 4 + 0x418) = edx;
    MEM32(eax + ecx * 4 + 0x41C) = edx;
    MEM32(eax + ecx * 4 + 0x420) = edx;
    MEM32(eax + ecx * 4 + 0x424) = edx;
    MEM32(eax + ecx * 4 + 0x428) = edx;
    MEM32(ebp + -20) = edi;
    MEM32(eax + ecx * 4 + 0x42C) = edx;
    MEM32(eax + ecx * 4 + 0x430) = edx;
    MEM32(eax + ecx * 4 + 0x434) = edx;
    MEM32(eax + ecx * 4 + 0x438) = edx;
    MEM32(eax + ecx * 4 + 0x43C) = edx;
    MEM32(eax + ecx * 4 + 0x440) = edx;
    MEM32(eax + ecx * 4 + 0x444) = edx;
    MEM32(eax + ecx * 4 + 0x448) = edx;
    MEM32(eax + ecx * 4 + 0x44C) = edx;
    MEM32(eax + ecx * 4 + 0x450) = edx;
    MEM32(eax + ecx * 4 + 0x454) = edx;
    MEM32(eax + ecx * 4 + 0x458) = edx;
    MEM32(eax + ecx * 4 + 0x45C) = edx;
    MEM32(eax + ecx * 4 + 0x460) = edx;
    MEM32(eax + ecx * 4 + 0x464) = edx;
    MEM32(eax + ecx * 4 + 0x468) = edx;
    MEM32(eax + ecx * 4 + 0x46C) = edx;
    MEM32(eax + ecx * 4 + 0x470) = edx;
    MEM32(eax + ecx * 4 + 0x474) = edx;
    MEM32(eax + ecx * 4 + 0x478) = edx;
    MEM32(eax + ecx * 4 + 0x47C) = 0x101;
    MEM32(eax + ecx * 4 + 0x480) = edx;
    MEM32(eax + ecx * 4 + 0x484) = edx;
    MEM32(eax + ecx * 4 + 0x488) = edx;
    MEM32(eax + ecx * 4 + 0x48C) = edx;
    MEM32(eax + ecx * 4 + 0x490) = 0x111;
    MEM32(eax + ecx * 4 + 0x494) = edx;
    MEM32(eax + ecx * 4 + 0x498) = edx;
    MEM32(eax + ecx * 4 + 0x49C) = edx;
    MEM32(eax + ecx * 4 + 0x4A0) = edx;
    MEM32(eax + ecx * 4 + 0x4A4) = edx;
    MEM32(eax + ecx * 4 + 0x4A8) = 0x44400000;
    MEM32(eax + ecx * 4 + 0x4AC) = edx;
    MEM32(eax + ecx * 4 + 0x4B0) = edx;
    MEM32(eax + ecx * 4 + 0x4B4) = edx;
    MEM32(eax + ecx * 4 + 0x4B8) = edx;
    MEM32(eax + ecx * 4 + 0x4BC) = edx;
    MEM32(eax + ecx * 4 + 0x4C0) = edx;
    MEM32(eax + ecx * 4 + 0x4C4) = edx;
    MEM32(eax + ecx * 4 + 0x4C8) = edx;
    MEM32(eax + ecx * 4 + 0x4CC) = edx;
    MEM32(eax + ecx * 4 + 0x4D0) = edx;
    esi = 0x30303;
    MEM32(eax + ecx * 4 + 0x4D4) = esi;
    MEM32(eax + ecx * 4 + 0x4D8) = esi;
    MEM32(eax + ecx * 4 + 0x4DC) = esi;
    MEM32(eax + ecx * 4 + 0x4E0) = esi;
    MEM32(eax + ecx * 4 + 0x4E4) = edx;
    MEM32(eax + ecx * 4 + 0x4E8) = edx;
    MEM32(eax + ecx * 4 + 0x4EC) = edx;
    MEM32(eax + ecx * 4 + 0x4F0) = edx;
    esi = 0x80000;
    MEM32(eax + ecx * 4 + 0x4F4) = esi;
    MEM32(eax + ecx * 4 + 0x4F8) = esi;
    MEM32(eax + ecx * 4 + 0x4FC) = esi;
    MEM32(eax + ecx * 4 + 0x500) = esi;
    MEM32(eax + ecx * 4 + 0x504) = edx;
    MEM32(eax + ecx * 4 + 0x508) = edx;
    esi = 0x1012000;
    MEM32(eax + ecx * 4 + 0x50C) = esi;
    MEM32(eax + ecx * 4 + 0x510) = esi;
    MEM32(eax + ecx * 4 + 0x514) = esi;
    MEM32(eax + ecx * 4 + 0x518) = esi;
    esi = 0x105B8;
    MEM32(eax + ecx * 4 + 0x51C) = esi;
    MEM32(eax + ecx * 4 + 0x520) = esi;
    MEM32(eax + ecx * 4 + 0x524) = esi;
    MEM32(eax + ecx * 4 + 0x528) = esi;
    esi = 0x80008;
    MEM32(eax + ecx * 4 + 0x52C) = esi;
    MEM32(eax + ecx * 4 + 0x530) = esi;
    MEM32(eax + ecx * 4 + 0x534) = esi;
    MEM32(eax + ecx * 4 + 0x538) = esi;
    MEM32(eax + ecx * 4 + 0x53C) = edx;
    MEM32(eax + ecx * 4 + 0x540) = edx;
    MEM32(eax + ecx * 4 + 0x544) = edx;
    MEM32(eax + ecx * 4 + 0x548) = edx;
    MEM32(eax + ecx * 4 + 0x54C) = edx;
    MEM32(eax + ecx * 4 + 0x550) = edx;
    MEM32(eax + ecx * 4 + 0x554) = edx;
    MEM32(eax + ecx * 4 + 0x558) = edx;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 8);
    esi = edi + eax + 0x70055C;
    POP32(esp, edi);

loc_00377CAC: ;
    MEM32(esi) = 0x7FF0000;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00377CAC; /* jne: not equal / not zero */

loc_00377CB8: ;
    PUSH32(esp, 8);
    esi = eax + ecx * 4 + 0x57C;
    POP32(esp, edi);

loc_00377CC2: ;
    MEM32(esi) = 0x7FF0000;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00377CC2; /* jne: not equal / not zero */

loc_00377CCE: ;
    MEM32(eax + ecx * 4 + 0x59C) = edx;
    MEM32(eax + ecx * 4 + 0x5A0) = edx;
    MEM32(eax + ecx * 4 + 0x5A4) = 0x4B7FFFFF;
    MEM32(eax + ecx * 4 + 0x5A8) = edx;
    MEM32(eax + ecx * 4 + 0x5AC) = edx;
    MEM32(eax + ecx * 4 + 0x5B0) = edx;
    MEM32(eax + ecx * 4 + 0x5B4) = edx;
    MEM32(eax + ecx * 4 + 0x5B8) = edx;
    MEM32(eax + ecx * 4 + 0x5BC) = edx;
    MEM32(eax + ecx * 4 + 0x5C0) = edx;
    MEM32(eax + ecx * 4 + 0x5C4) = edx;
    MEM32(eax + ecx * 4 + 0x5C8) = edx;
    MEM32(eax + ecx * 4 + 0x5CC) = edx;
    MEM32(eax + ecx * 4 + 0x5D0) = edx;
    MEM32(eax + ecx * 4 + 0x5D4) = edx;
    MEM32(eax + ecx * 4 + 0x5D8) = edx;
    MEM32(eax + ecx * 4 + 0x5DC) = edx;
    MEM32(eax + ecx * 4 + 0x5E0) = edx;
    MEM32(eax + ecx * 4 + 0x5E4) = edx;
    MEM32(eax + ecx * 4 + 0x5E8) = edx;
    MEM32(eax + ecx * 4 + 0x5EC) = edx;
    MEM32(eax + ecx * 4 + 0x5F0) = edx;
    MEM32(eax + ecx * 4 + 0x5F4) = edx;
    MEM32(eax + ecx * 4 + 0x5F8) = edx;
    MEM32(eax + ecx * 4 + 0x5FC) = ebx;
    MEM32(eax + ecx * 4 + 0x600) = edx;
    MEM32(eax + ecx * 4 + 0x604) = 0x4000;
    MEM32(eax + ecx * 4 + 0x608) = edx;
    MEM32(eax + ecx * 4 + 0x60C) = edx;
    MEM32(eax + ecx * 4 + 0x610) = ebx;
    MEM32(eax + ecx * 4 + 0x614) = edx;
    PUSH32(esp, 0x23);
    MEM32(eax + ecx * 4 + 0x618) = 0x40000;
    MEM32(eax + ecx * 4 + 0x61C) = 0x10000;
    POP32(esp, edi);
    MEM32(eax + ecx * 4 + 0x620) = edx;
    PUSH32(esp, 4);
    MEM32(eax + ecx * 4 + 0x624) = edx;
    MEM32(eax + ecx * 4 + 0x628) = edx;
    esi = eax + ecx * 4 + 0x62C;
    POP32(esp, ebx);

loc_00377DE7: ;
    MEM32(esi) = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00377DE7; /* jne: not equal / not zero */

loc_00377DEE: ;
    PUSH32(esp, 0x1D);
    esi = eax + ecx * 4 + 0x6B8;
    POP32(esp, edi);

loc_00377DF8: ;
    MEM32(esi) = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00377DF8; /* jne: not equal / not zero */

loc_00377DFF: ;
    PUSH32(esp, 0x1D);
    esi = eax + ecx * 4 + 0x72C;
    POP32(esp, edi);

loc_00377E09: ;
    MEM32(esi) = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00377E09; /* jne: not equal / not zero */

loc_00377E10: ;
    PUSH32(esp, 0x1D);
    esi = eax + ecx * 4 + 0x7A0;
    POP32(esp, edi);

loc_00377E1A: ;
    MEM32(esi) = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00377E1A; /* jne: not equal / not zero */

loc_00377E21: ;
    PUSH32(esp, 2);
    esi = eax + ecx * 4 + 0x814;
    POP32(esp, edi);

loc_00377E2B: ;
    MEM32(esi) = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00377E2B; /* jne: not equal / not zero */

loc_00377E32: ;
    esi = 0x80;
    ebx = eax + ecx * 4 + 0x81C;
    edi = esi;

loc_00377E40: ;
    MEM32(ebx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00377E40; /* jne: not equal / not zero */

loc_00377E48: ;
    ebx = eax + ecx * 4 + 0xA1C;
    edi = esi;

loc_00377E51: ;
    MEM32(ebx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00377E51; /* jne: not equal / not zero */

loc_00377E59: ;
    ebx = eax + ecx * 4 + 0xC1C;
    edi = esi;

loc_00377E62: ;
    MEM32(ebx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00377E62; /* jne: not equal / not zero */

loc_00377E6A: ;
    ebx = eax + ecx * 4 + 0xE1C;

loc_00377E71: ;
    MEM32(ebx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00377E71; /* jne: not equal / not zero */

loc_00377E79: ;
    esi = eax + ecx * 4 + 0x101C;
    edi = 0xC0;

loc_00377E85: ;
    MEM32(esi) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00377E85; /* jne: not equal / not zero */

loc_00377E8D: ;
    ebx = eax + ecx * 4 + 0x131C;
    edi = 0x1E0;
    esi = 0x6A7;

loc_00377E9E: ;
    MEM32(ebx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00377E9E; /* jne: not equal / not zero */

loc_00377EA6: ;
    edi = eax + ecx * 4 + 0x1A9C;
    MEM32(ebp + -12) = 0x88;

loc_00377EB4: ;
    MEM32(edi) = 0x10700FF9;
    PUSH32(esp, 4);
    POP32(esp, ebx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = 0x436086C;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = 0xC001B;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00377EB4; /* jne: not equal / not zero */

loc_00377EDC: ;
    edi = ecx + esi;
    ebx = esi;
    edi = eax + edi * 4;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -12) = 0x300;
    _fb = (uint32_t)(0x300) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x300;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00377EF7: ;
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00377EF7; /* jne: not equal / not zero */

loc_00377F05: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x68;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x68;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00377F1B: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00377F1B; /* jne: not equal / not zero */

loc_00377F29: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xD0;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00377F3F: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00377F3F; /* jne: not equal / not zero */

loc_00377F4D: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00377F63: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00377F63; /* jne: not equal / not zero */

loc_00377F71: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x14;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00377F87: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00377F87; /* jne: not equal / not zero */

loc_00377F95: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xF;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00377FA8: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00377FA8; /* jne: not equal / not zero */

loc_00377FB6: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xE;
    _fb = (uint32_t)(0xE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00377FC9: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00377FC9; /* jne: not equal / not zero */

loc_00377FD7: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x44;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00377FEA: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_00377FEA; /* jne: not equal / not zero */

loc_00377FF8: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0x20;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037800B: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_0037800B; /* jne: not equal / not zero */

loc_00378019: ;
    edi = ecx + esi;
    edi = eax + edi * 4;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = 0xF;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037802C: ;
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    if ((_fa != 0)) goto loc_0037802C; /* jne: not equal / not zero */

loc_0037803A: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + esi * 4) = edx;
    edi = ebx + 0xE0;
    esi = ecx + edi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + esi * 4) = 0x3F800000;
    esi = ecx + edi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + esi * 4) = edx;
    esi = ecx + edi;
    MEM32(eax + esi * 4) = edx;
    esi = MEM32(ebp + -20);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = ebx + 0xF0;
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x40000000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F800000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F000000;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xF4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x40000000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F800000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = 0xBF800000u;
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(0xF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xF8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0xBF800000u;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xE4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F800000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x58;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0xFE000;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x44;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4 + 0x700004) = edx;
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx + edi;
    MEM32(eax + ebx * 4) = 0x3F8;
    ebx = MEM32(ebp + -20);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + ecx * 4) = edx;
    ecx = esi + edi;
    edi = MEM32(ebp + -28);
    MEM32(eax + ecx * 4 + 0x700004) = edx;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + ecx * 4 + 0x700004) = 0x2FE000;
    ecx = 0x1C527C;
    edx = edi + ebx * 4 + 0x1C0004;
    MEM32(eax + edx * 4) = ecx;
    edx = esi + edi;
    MEM32(eax + edx * 4 + 0x700014) = ecx;
    MEM32(eax + edx * 4 + 0x700018) = ecx;
    esi = edi + ebx * 4 + 0x1C0008;
    MEM32(eax + edx * 4 + 0x70001C) = ecx;
    MEM32(eax + esi * 4) = ecx;
    POP32(esp, edi);
    MEM32(eax + edx * 4 + 0x700024) = ecx;
    POP32(esp, esi);
    MEM32(eax + edx * 4 + 0x700028) = ecx;
    MEM32(eax + edx * 4 + 0x70002C) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0037825F
 * Original: 0x0037825F - 0x00378382 (291 bytes, 78 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037825F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037825F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx);
    eax = MEM32(esi + 0x400100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00378279; /* je: equal / zero */

loc_00378274: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00378279u); RECOMP_ABI_CALL(0x00372B60u, sub_00372B60); /* call 0x00372B60 */

loc_00378279: ;
    eax = MEM32(esi + 0x400720);
    ecx = ebx;
    MEM32(ebp + -4) = eax;
    MEM32(esi + 0x400720) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00378293u); RECOMP_ABI_CALL(0x003773BEu, sub_003773BE); /* call 0x003773BE */

loc_00378293: ;
    edx = MEM32(ebp + 8);
    edi = ebx + 0x134;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003782AD; /* je: equal / zero */

loc_003782A2: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003782AAu); RECOMP_ABI_CALL(0x003773FDu, sub_003773FD); /* call 0x003773FD */

loc_003782AA: ;
    edx = MEM32(ebp + 8);

loc_003782AD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    MEM32(edi) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_003782D9; /* jne: not equal / not zero */

loc_003782B4: ;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0x400144) = 0x10000100;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x400764) = 0x8000000;
    MEM32(esi + 0x400720) = eax;
    goto loc_0037837B;

loc_003782D9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + edx * 4 + 0x144)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + edx * 4 + 0x144), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037830C; /* je: equal / zero */

loc_003782E4: ;
    eax = esi + 0x400080;
    MEM32(eax) = 0x70000;
    edi = MEM32(eax);
    MEM32(eax) = ecx;
    eax = MEM32(eax);
    PUSH32(esp, 0xF);
    MEM32(esi + 0x400750) = 0x3D0000;
    POP32(esp, eax);

loc_00378303: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x400754) = ecx;
    if ((_fa != 0)) goto loc_00378303; /* jne: not equal / not zero */

loc_0037830C: ;
    ecx = esi + 0x400084;
    eax = MEM32(ecx);
    eax = eax | 0x1000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 8);
    edi = edx;
    edi = edi & 0x1F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x400148) = edi;
    eax = MEM32(ebx + eax * 4 + 0x138);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x400784) = eax;
    MEM32(esi + 0x400788) = 1;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037834Fu); RECOMP_ABI_CALL(0x003773BEu, sub_003773BE); /* call 0x003773BE */

loc_0037834F: ;
    eax = MEM32(esi + 0x400148);
    eax = eax & 0xE0FFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x400148) = eax;
    MEM32(esi + 0x400144) = 0x10010100;
    _fb = (uint32_t)(0x400764) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x400764;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    eax = eax & 0xCFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = eax;

loc_0037837B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00378382
 * Original: 0x00378382 - 0x00378403 (129 bytes, 33 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00378382(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00378382: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    MEM32(esi + 0x3224) = 0xF0078;
    MEM32(esi + 0x2044) = 0x101FFFF;
    eax = MEM32(ecx + 0x120);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2040) = eax;
    MEM32(esi + 0x2500) = ebp;
    MEM32(esi + 0x3000) = ebp;
    PUSH32(esp, edi);
    MEM32(esi + 0x3050) = ebp;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x3200) = ebp;
    edi = esi + 0x3250;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = ebp;
    MEM32(esi + 0x3220) = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003783DEu); RECOMP_ABI_CALL(0x00377436u, sub_00377436); /* call 0x00377436 */

loc_003783DE: ;
    MEM32(esi + 0x3210) = ebp;
    MEM32(esi + 0x3270) = ebp;
    MEM32(edi) = ebx;
    MEM32(esi + 0x3200) = ebx;
    MEM32(esi + 0x2500) = ebx;
    POP32(esp, edi);
    MEM32(esi + 0x2500) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00378403
 * Original: 0x00378403 - 0x00378678 (629 bytes, 133 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00378403(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00378403: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    eax = esi + 0x200;
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFEFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    ecx = MEM32(eax);
    ecx = ecx | 0x1000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x7EC) = eax;
    MEM32(edi + 0x7FC) = eax;
    MEM32(edi + 0x808) = eax;
    MEM32(edi + 0x814) = eax;
    MEM32(edi + 0x7F0) = 0x118700;
    MEM32(edi + 0x7F4) = 0x28C3FF;
    MEM32(edi + 0x7F8) = 0xF3DE0479u;
    MEM32(edi + 0x800) = 4;
    MEM32(edi + 0x804) = 0x45EAD10E;
    MEM32(edi + 0x80C) = 0x78;
    MEM32(edi + 0x810) = 0x40;
    MEM32(esi + 0x400080) = eax;
    eax = MEM32(edi + 0x7F0);
    MEM32(esi + 0x400084) = eax;
    eax = MEM32(edi + 0x7F4);
    MEM32(esi + 0x400880) = eax;
    eax = MEM32(edi + 0x7F8);
    MEM32(esi + 0x40008C) = eax;
    eax = MEM32(edi + 0x7FC);
    MEM32(esi + 0x400090) = eax;
    eax = MEM32(edi + 0x800);
    MEM32(esi + 0x400094) = eax;
    eax = MEM32(edi + 0x804);
    MEM32(esi + 0x400B80) = eax;
    eax = MEM32(edi + 0x808);
    MEM32(esi + 0x400B84) = eax;
    eax = MEM32(edi + 0x80C);
    MEM32(esi + 0x400098) = eax;
    eax = MEM32(edi + 0x810);
    MEM32(esi + 0x40009C) = eax;
    eax = MEM32(edi + 0x814);
    MEM32(esi + 0x400B88) = eax;
    eax = MEM32(edi + 0x140);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi;
    MEM32(esi + 0x400780) = eax;
    PUSH32(esp, 0x0037851Du); RECOMP_ABI_CALL(0x003773BEu, sub_003773BE); /* call 0x003773BE */

loc_0037851D: ;
    PUSH32(esp, 0x50);
    POP32(esp, edx);
    eax = esi + 0x400904;
    ebx = 0x1FFC;
    ecx = 0xEA0000;

loc_00378530: ;
    ebp = MEM32(eax + -3147456);
    MEM32(eax) = ebp;
    MEM32(esp + 0x10) = ebp;
    ebp = edx + -32;
    ebp = ebp & ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp | ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x400750) = ebp;
    ebp = MEM32(esp + 0x10);
    MEM32(esi + 0x400754) = ebp;
    ebp = MEM32(eax + -3147452);
    MEM32(eax + 4) = ebp;
    MEM32(esp + 0x10) = ebp;
    ebp = edx;
    ebp = ebp & ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp | ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x400750) = ebp;
    ebp = MEM32(esp + 0x10);
    MEM32(esi + 0x400754) = ebp;
    ebp = MEM32(eax + -3147460);
    MEM32(eax + -4) = ebp;
    MEM32(esp + 0x10) = ebp;
    ebp = edx + -64;
    ebp = ebp & ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp | ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x400750) = ebp;
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x70 (32-bit) */
    MEM32(esi + 0x400754) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00378530; /* jl: less (signed <) */

loc_003785A5: ;
    MEM32(esp + 0x10) = 0xFFBFF710u;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - esi;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + 0x400980;
    MEM32(esp + 0x14) = 8;

loc_003785BF: ;
    ebp = MEM32(esp + 0x10);
    edx = MEM32(eax + -3147392);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp & ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = edx;
    ebp = ebp | ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x400750) = ebp;
    MEM32(esi + 0x400754) = edx;
    if ((_fa != 0)) goto loc_003785BF; /* jne: not equal / not zero */

loc_003785E6: ;
    eax = MEM32(esi + 0x100324);
    MEM32(esi + 0x4009A0) = eax;
    MEM32(esi + 0x400750) = 0xEA000C;
    MEM32(esi + 0x400754) = eax;
    eax = MEM32(esi + 0x100200);
    MEM32(esi + 0x4009A4) = eax;
    MEM32(esi + 0x400750) = ecx;
    MEM32(esi + 0x400754) = eax;
    eax = MEM32(esi + 0x100204);
    MEM32(esi + 0x4009A8) = eax;
    MEM32(esi + 0x400750) = 0xEA0004;
    MEM32(esi + 0x400754) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x40014C) = eax;
    MEM32(esi + 0x400150) = eax;
    MEM32(esi + 0x400154) = eax;
    MEM32(esi + 0x400158) = eax;
    MEM32(esi + 0x400144) = 0x10000000;
    MEM32(esi + 0x400764) = 0x8000000;
    PUSH32(esp, MEM32(edi + 0x134));
    ecx = edi;
    PUSH32(esp, 0x00378671u); RECOMP_ABI_CALL(0x0037825Fu, sub_0037825F); /* call 0x0037825F */

loc_00378671: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00378680
 * Original: 0x00378680 - 0x00378701 (129 bytes, 45 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00378680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00378680: ;
    eax = edi;
    PUSH32(esp, esi);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _jt = MEM32(eax * 4 + 0x378704); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0037868Du) goto loc_0037868D;
    if (_jt == 0x003786A7u) goto loc_003786A7;
    if (_jt == 0x003786AEu) goto loc_003786AE;
    if (_jt == 0x003786C2u) goto loc_003786C2;
    if (_jt == 0x003786C9u) goto loc_003786C9;
    if (_jt == 0x003786D3u) goto loc_003786D3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0037868D: ;
    eax = edx;
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(eax * 4 + 0x37C5D8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003786A2; /* jne: not equal / not zero */

loc_0037869D: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_003786D8;

loc_003786A2: ;
    esi = eax + 8;
    goto loc_003786D8;

loc_003786A7: ;
    esi = 1;
    goto loc_003786D8;

loc_003786AE: ;
    eax = MEM32(0x37B658);
    eax = eax | 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 5;
    MEM32(0x37B658) = eax;
    goto loc_003786D8;

loc_003786C2: ;
    esi = 0xD;
    goto loc_003786D8;

loc_003786C9: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x10 (8-bit) */
    esi = 0xC;
    if (TEST_Z(_fa, _fb)) goto loc_003786D8; /* je: equal / zero */

loc_003786D3: ;
    esi = 4;

loc_003786D8: ;
    eax = ecx;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ecx;
    edx = edx ^ edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ecx;
    edx = edx & 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx >> 0xD;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx & 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00378720
 * Original: 0x00378720 - 0x00378C77 (1367 bytes, 373 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00378720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00378720: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x784);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00378744; /* je: equal / zero */

loc_00378734: ;
    eax = MEM32(esp + 0xC0);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00378744: ;
    eax = MEM32(ecx + 8);
    MEM32(esp + 0x24) = eax;
    eax = eax & 0xFFFEFFBFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x37B588);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0037876F; /* je: equal / zero */

loc_00378763: ;
    MEM32(esp + 0xC) = 3;
    eax = MEM32(esp + 0xC);

loc_0037876F: ;
    PUSH32(esp, ebx);
    ebx = eax;
    ecx = esp + 0x30;
    MEM32(esp + 0x14) = eax;
    ebx = ebx | 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = ecx;
    ecx = eax + 0x37B1B0;
    eax = MEM32(ecx + 0x30);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, edi);
    goto loc_003787A0;

    /* nop */

loc_003787A0: ;
    ecx = MEM32(esp + 0x24);
    edi = MEM32(ecx + 0x34);
    esi = MEM32(ecx + 0x38);
    ebp = MEM32(ecx + 0x3C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x50), 5 (32-bit) */
    MEM32(esp + 0x10) = edi;
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x100;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = edx;
    goto loc_003787D0;

    /* nop */

loc_003787D0: ;
    MEM32(esp + 0x14) = edx;
    ecx = eax + -1;
    { uint32_t _jt = MEM32(ecx * 4 + 0x378C78); /* switch: 26 entries, 22 targets */
    if (_jt == 0x003787DEu) goto loc_003787DE;
    if (_jt == 0x00378828u) goto loc_00378828;
    if (_jt == 0x00378840u) goto loc_00378840;
    if (_jt == 0x00378855u) goto loc_00378855;
    if (_jt == 0x0037885Eu) goto loc_0037885E;
    if (_jt == 0x00378869u) goto loc_00378869;
    if (_jt == 0x00378883u) goto loc_00378883;
    if (_jt == 0x0037888Eu) goto loc_0037888E;
    if (_jt == 0x00378896u) goto loc_00378896;
    if (_jt == 0x003788B1u) goto loc_003788B1;
    if (_jt == 0x003788CCu) goto loc_003788CC;
    if (_jt == 0x003788F8u) goto loc_003788F8;
    if (_jt == 0x00378929u) goto loc_00378929;
    if (_jt == 0x0037894Eu) goto loc_0037894E;
    if (_jt == 0x0037898Au) goto loc_0037898A;
    if (_jt == 0x003789B6u) goto loc_003789B6;
    if (_jt == 0x003789BDu) goto loc_003789BD;
    if (_jt == 0x003789E9u) goto loc_003789E9;
    if (_jt == 0x00378A27u) goto loc_00378A27;
    if (_jt == 0x00378A55u) goto loc_00378A55;
    if (_jt == 0x00378A9Au) goto loc_00378A9A;
    if (_jt == 0x00378AC3u) goto loc_00378AC3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003787DE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037881D; /* je: equal / zero */

loc_003787E3: ;
    ecx = ebx;
    ecx = ecx & 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    eax = eax << 0x17;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | 0x4200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00378B06; /* jne: not equal / not zero */

loc_003787FC: ;
    edi = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x20);
    MEM32(edi) = eax;
    eax = eax | 0x10000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x24) = edx;
    MEM32(edi + 0x48) = eax;
    MEM32(edi + 0x6C) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00378BA5;

loc_0037881D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    goto loc_00378B06;

loc_00378828: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00378836u); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_00378836: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00378B06;

loc_00378840: ;
    edi = ebp;
    edx = ebx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0037884Bu); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_0037884B: ;
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00378B06;

loc_00378855: ;
    eax = edx;
    eax = eax | 0x20000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00378865;

loc_0037885E: ;
    eax = edx;
    eax = eax | 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00378865: ;
    MEM32(esp + 0x14) = eax;

loc_00378869: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00378877u); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_00378877: ;
    esi = eax;
    ecx = 0x20000;
    goto loc_00378AFB;

loc_00378883: ;
    eax = edx;
    eax = eax | 0x18000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = eax;

loc_0037888E: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) | 0x8000;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00378896: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x003788A4u); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_003788A4: ;
    esi = eax;
    esi = esi | 0x202000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00378AF9;

loc_003788B1: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x003788BFu); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_003788BF: ;
    esi = eax;
    esi = esi | 0x204000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00378AF9;

loc_003788CC: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x003788DAu); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_003788DA: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    ecx = 0x10010;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x003788EFu); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_003788EF: ;
    esi = MEM32(esp + 0x10);
    goto loc_00378AF7;

loc_003788F8: ;
    _fb = (uint32_t)(0xFFFFFFF4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0037890Du); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_0037890D: ;
    edi = MEM32(esp + 0x10);
    edx = ebx;
    ecx = 0x20020;
    esi = eax;
    PUSH32(esp, 0x0037891Fu); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_0037891F: ;
    ecx = 0x10030;
    goto loc_00378AEE;

loc_00378929: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00378937u); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_00378937: ;
    esi = eax;
    esi = esi | 0x200000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = 2;
    ecx = 0x10030;
    goto loc_00378AF0;

loc_0037894E: ;
    ecx = 0x30000;
    edx = ebx;
    edi = esi;
    PUSH32(esp, 0x0037895Cu); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_0037895C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0037897D; /* je: equal / zero */

loc_00378963: ;
    edi = 2;
    edx = ebx;
    ecx = 0x20000;
    PUSH32(esp, 0x00378974u); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_00378974: ;
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    goto loc_00378B06;

loc_0037897D: ;
    esi = esi | 0x200000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    goto loc_00378B06;

loc_0037898A: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00378998u); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_00378998: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    ecx = 0x10020;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x003789ADu); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_003789AD: ;
    esi = MEM32(esp + 0x10);
    goto loc_00378AF7;

loc_003789B6: ;
    ecx = 0x30000;
    goto loc_003789EE;

loc_003789BD: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x003789CBu); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_003789CB: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    ecx = 0x10030;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x003789E0u); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_003789E0: ;
    esi = MEM32(esp + 0x10);
    goto loc_00378AF7;

loc_003789E9: ;
    ecx = 0x30010;

loc_003789EE: ;
    edi = esi;
    edx = ebx;
    PUSH32(esp, 0x003789F7u); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_003789F7: ;
    edi = ebp;
    edx = ebx;
    ecx = 0x20000;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00378A09u); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_00378A09: ;
    ebp = MEM32(esp + 0x10);
    edi = esi;
    edx = ebx;
    ecx = 0x10020;
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00378A1Du); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_00378A1D: ;
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00378B06;

loc_00378A27: ;
    edi = 1;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00378A38u); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_00378A38: ;
    ecx = MEM32(esp + 0xCC);
    edx = MEM32(ecx + 8);
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | 0x10000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 8) = edx;
    goto loc_00378B06;

loc_00378A55: ;
    edi = esi;
    edx = ebx;
    ecx = 0x30040;
    PUSH32(esp, 0x00378A63u); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_00378A63: ;
    edi = ebp;
    edx = ebx;
    ecx = 0x20040;
    esi = eax;
    PUSH32(esp, 0x00378A73u); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_00378A73: ;
    ecx = MEM32(esp + 0x2C);
    ecx = ecx | 0x820000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x18);
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x48) = edx;
    MEM32(ecx + 0x6C) = edx;
    ebx = ebx | 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00378B06;

loc_00378A9A: ;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00378AA6u); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_00378AA6: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = esi;
    edx = ebx;
    ecx = 0x10000;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00378ABDu); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_00378ABD: ;
    esi = MEM32(esp + 0x10);
    goto loc_00378AF7;

loc_00378AC3: ;
    edx = ebx;
    ecx = 0x30000;
    PUSH32(esp, 0x00378ACFu); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_00378ACF: ;
    edi = esi;
    edx = ebx;
    ecx = 0x20000;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x00378AE1u); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_00378AE1: ;
    esi = MEM32(esp + 0x30);
    edi = MEM32(esp + 0x10);
    ecx = 0x10010;

loc_00378AEE: ;
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00378AF0: ;
    edx = ebx;
    PUSH32(esp, 0x00378AF7u); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_00378AF7: ;
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00378AF9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00378AFB: ;
    edx = ebx;
    edi = ebp;
    PUSH32(esp, 0x00378B04u); RECOMP_ABI_CALL(0x00378680u, sub_00378680); /* call 0x00378680 */

loc_00378B04: ;
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00378B06: ;
    edx = eax;
    edx = edx & 0xFF000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00378B32; /* jne: not equal / not zero */

loc_00378B16: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, ~LO8(eax));
    eax = ZX8(LO8(eax));
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    eax = eax << 0x17;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x4200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 0x17;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00378B32: ;
    edi = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = ebx;
    ecx = ecx & 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(ecx + edi) = eax;
    MEM32(ecx + edi + 0x24) = edx;
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00378B6F; /* js: sign (negative) */

loc_00378B4A: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x44);
    esi = MEM32(eax + 0x48);
    ebp = MEM32(eax + 0x4C);
    eax = MEM32(eax + 0x40);
    edx = MEM32(esp + 0x2C);
    ebx = ebx | 0xE8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ecx;
    edi = ecx;
    goto loc_003787D0;

loc_00378B6F: ;
    esi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00378BA3; /* je: equal / zero */

loc_00378B91: ;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ebx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_003787A0; /* jne: not equal / not zero */

loc_00378BA3: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00378BA5: ;
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00378BB0: ;
    MEM32(edi) = ebp;
    MEM32(edi + 0x24) = ebp;
    MEM32(edi + 0x48) = ebp;
    MEM32(edi + 0x6C) = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00378BB0; /* jne: not equal / not zero */

loc_00378BC1: ;
    ecx = MEM32(esp + 0xCC);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    MEM32(esp + 0x38) = 0x200AC0;
    MEM32(esp + 0x5C) = 0x201E40;
    MEM32(esp + 0x80) = 0x200260;
    MEM32(esp + 0xA4) = 0x200AA0;
    if (CMP_B(_fa, _fb)) goto loc_00378BFA; /* jb: below (unsigned <) */

loc_00378BF5: ;
    PUSH32(esp, 0x00378BFAu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00378BFA: ;
    MEM32(eax) = 0x41E60;
    MEM32(eax + 4) = esi;
    edi = eax + 8;
    ecx = 0x24;
    esi = esp + 0x38;
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
    esi = MEM32(esp + 0xCC);
    edi = MEM32(esp + 0x34);
    ecx = eax + 0x98;
    eax = MEM32(esi + 8);
    edx = eax;
    edx = edx ^ edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00378C4A; /* je: equal / zero */

loc_00378C2E: ;
    edx = MEM32(0x37B54C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00378C4A; /* jne: not equal / not zero */

loc_00378C38: ;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = 0x403B8;
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00378C4A: ;
    eax = MEM32(esi + 8);
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    MEM32(esi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00378C63; /* je: equal / zero */

loc_00378C58: ;
    MEM32(esp + 0xD0) = MEM32(esp + 0xD0) | 0x400F;
    _fa = (uint32_t)(MEM32(esp + 0xD0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00378C63: ;
    eax = MEM32(esp + 0xD0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00378CE0
 * Original: 0x00378CE0 - 0x00378D90 (176 bytes, 61 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00378CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00378CE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    eax = MEM32(esp + 0x20);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00378D22u); RECOMP_ABI_CALL(0x00371E80u, sub_00371E80); /* call 0x00371E80 */

loc_00378D22: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x1C), 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00378D33; /* je: equal / zero */

loc_00378D2E: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00378D33: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00378D3Fu); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_00378D3F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00378D5F; /* je: equal / zero */

loc_00378D45: ;
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00378D50u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_00378D50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00378D66; /* jne: not equal / not zero */

loc_00378D54: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00378D5Fu); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_00378D5F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

loc_00378D66: ;
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x1040001;
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(esp + 0x20);
    POP32(esp, edi);
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00378D90
 * Original: 0x00378D90 - 0x00378D9E (14 bytes, 4 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00378D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00378D90: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0xE));
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00378DA0
 * Original: 0x00378DA0 - 0x00378DA5 (5 bytes, 1 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00378DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00378DA0: ;
    g_seh_ebp = ebp; sub_00371AF0(); return; /* tail jmp 0x00371AF0 */

}

/**
 * sub_00378DB0
 * Original: 0x00378DB0 - 0x00378DFA (74 bytes, 29 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00378DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00378DB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00378DDEu); RECOMP_ABI_CALL(0x00371BB0u, sub_00371BB0); /* call 0x00371BB0 */

loc_00378DDE: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00378DF3u); RECOMP_ABI_CALL(0x00376920u, sub_00376920); /* call 0x00376920 */

loc_00378DF3: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00378E00
 * Original: 0x00378E00 - 0x00378E23 (35 bytes, 13 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00378E00(void)
{

loc_00378E00: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00378E20u); RECOMP_ABI_CALL(0x00371DE0u, sub_00371DE0); /* call 0x00371DE0 */

loc_00378E20: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00378E30
 * Original: 0x00378E30 - 0x00378E66 (54 bytes, 12 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00378E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00378E30: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x1000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00378E50; /* ja: above (unsigned >) */

loc_00378E3A: ;
    eax = 0xC;
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0xB0800000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_00015110(); return; /* tail jmp 0x00015110 */

loc_00378E50: ;
    { uint32_t _bs_v = (uint32_t)(MEM32(esp + 8)); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsf: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 0; _bs_i < 32; _bs_i++)
          if (_bs_v & (1u << _bs_i)) break;
        eax = (uint32_t)_bs_i;;
      } else { (void)(eax); } }
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0xB0800000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_00015110(); return; /* tail jmp 0x00015110 */

}

/**
 * sub_00378E70
 * Original: 0x00378E70 - 0x00378E82 (18 bytes, 5 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00378E70(void)
{

loc_00378E70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00378E7Fu); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_00378E7F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00378E90
 * Original: 0x00378E90 - 0x00379006 (374 bytes, 106 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00378E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00378E90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x37B648);
    edx = MEM32(eax + 0x1DE8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    MEM32(eax + 0x1C1C) = ecx;
    MEM32(eax + 0x2410) = edx;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x934);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ebp = MEM32(edi);
    eax = MEM32(edi + 8);
    ebx = MEM32(edi + 4);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = MEM32(esp + 0x24);
    edx = MEM32(ebp);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(ebp + 0xC);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x2C);
    MEM32(esi + 0x8704) = 0;
    MEM32(esi + 0x8B00) = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00378F03u); RECOMP_ABI_CALL(0x0036A1D0u, sub_0036A1D0); /* call 0x0036A1D0 */

loc_00378F03: ;
    ecx = MEM32(edi + 4);
    edx = eax;
    eax = MEM32(esp + 0x1C);
    eax = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi);
    edi = MEM32(esp + 0x10);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx + eax * 2;
    eax = ecx;
    ecx = ecx & 0xFFFFFFC0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x8920) = ecx;
    ecx = MEM32(esp + 0x20);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x8930) = eax;
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x8928) = ecx;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_A(_fa, _fb)) goto loc_00378F67; /* ja: above (unsigned >) */

loc_00378F60: ;
    eax = 0x100000;
    goto loc_00378F78;

loc_00378F67: ;
    eax = edi + -1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax << 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx + -1;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edx = MEM32(esp + 0x24);

loc_00378F78: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEM32(esi + 0x8938) = eax;
    if (CMP_A(_fa, _fb)) goto loc_00378F8A; /* ja: above (unsigned >) */

loc_00378F83: ;
    eax = 0x100000;
    goto loc_00378F9D;

loc_00378F8A: ;
    eax = MEM32(esp + 0x20);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax << 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebx + -1;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edx = MEM32(esp + 0x24);

loc_00378F9D: ;
    MEM32(esi + 0x8940) = eax;
    eax = MEM32(ebp + 4);
    edi = MEM32(ebp);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x8948) = eax;
    eax = MEM32(esp + 0x28);
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | 0x10000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x8950) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00378FD3; /* je: equal / zero */

loc_00378FCD: ;
    edx = edx | 0x100000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00378FD3: ;
    MEM32(esi + 0x8958) = edx;
    MEM32(esi + 0x8908) = 0x7FFFFFF;
    eax = MEM32(esi + 0x8140);
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi + 0x8140) = eax;
    MEM32(esi + 0x8700) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00379010
 * Original: 0x00379010 - 0x00379073 (99 bytes, 18 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00379010: ;
    eax = MEM32(0x37B648);
    eax = MEM32(eax + 0x934);
    ecx = MEM32(eax + 0x8700);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00379031; /* je: equal / zero */

loc_00379027: ;
    MEM32(eax + 0x8704) = 1;

loc_00379031: ;
    _fa = (uint32_t)(MEM32(eax + 0x8700)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x8700), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00379031; /* jne: not equal / not zero */

loc_00379039: ;
    MEM32(eax + 0x8100) = 0x11;
    MEM32(eax + 0x8920) = edx;
    MEM32(eax + 0x8928) = 0xFFFFFFFFu;
    MEM32(eax + 0x8930) = edx;
    ecx = 0x1000;
    MEM32(eax + 0x8900) = edx;
    MEM32(eax + 0x8910) = ecx;
    MEM32(eax + 0x8918) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00379080
 * Original: 0x00379080 - 0x00379088 (8 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379080(void)
{

loc_00379080: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00379090
 * Original: 0x00379090 - 0x003790A6 (22 bytes, 5 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379090(void)
{

loc_00379090: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x37DDE4) = eax;
    MEM32(0x37DDE0) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003790B0
 * Original: 0x003790B0 - 0x00379154 (164 bytes, 47 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003790B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003790B0: ;
    eax = MEM32(0x37DDE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003790C3; /* jne: not equal / not zero */

loc_003790B9: ;
    MEM32(0x37DDE4) = 0x80000;

loc_003790C3: ;
    eax = MEM32(0x37DDE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003790D6; /* jne: not equal / not zero */

loc_003790CC: ;
    MEM32(0x37DDE0) = 0x8000;

loc_003790D6: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(0x37B658);
    PUSH32(esp, edi);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 0x37B650;
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(0x37B648) = edi;
    MEM32(0x37BF88) = 1;
    MEM32(0x37B658) = esi;
    PUSH32(esp, 0x0037910Eu); RECOMP_ABI_CALL(0x00370ED0u, sub_00370ED0); /* call 0x00370ED0 */

loc_0037910E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00379143; /* jge: greater or equal (signed >=) */

loc_00379114: ;
    ecx = edi;
    PUSH32(esp, 0x0037911Bu); RECOMP_ABI_CALL(0x003713A0u, sub_003713A0); /* call 0x003713A0 */

loc_0037911B: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00379129; /* je: equal / zero */

loc_00379123: ;
    MEM32(eax) = 0;

loc_00379129: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x928;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    eax = esi;
    MEM32(0x37B648) = 0;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_00379143: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037914D; /* je: equal / zero */

loc_0037914B: ;
    MEM32(eax) = edi;

loc_0037914D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00379158
 * Original: 0x00379158 - 0x00379160 (8 bytes, 4 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379158(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00379158: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

}
