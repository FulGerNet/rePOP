/**
 * PoP SoT xbox-demo - xdk/xpp, chunk 0
 * Peripheral ports: controllers and memory units (XPP section)
 * Functions: 234 (0x00314F80 - 0x0031C6FD)
 */

#define RECOMP_GENERATED_CODE
#include "../../recomp_funcs.h"
#include <math.h>

/**
 * sub_00314F80
 * Original: 0x00314F80 - 0x0031508C (268 bytes, 95 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00314F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00314F80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xC04;
    edi = 0x3449E0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 0x3449E4;
    PUSH32(esp, 0x5F5F554D);
    PUSH32(esp, 0x60);
    MEM32(0x3449E8) = eax;
    MEM32(0x3449E4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314FB2u); RECOMP_ABI_CALL(0x00317B0Cu, sub_00317B0C); /* call 0x00317B0C */

loc_00314FB2: ;
    edi = eax;
    PUSH32(esp, 0x18);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3479EC) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314FC9u); RECOMP_ABI_CALL(0x003152CEu, sub_003152CE); /* call 0x003152CE */

loc_00314FC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00314FE2; /* jne: not equal / not zero */

loc_00314FCD: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x314EA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314FDAu); RECOMP_ABI_CALL(0x00315297u, sub_00315297); /* call 0x00315297 */

loc_00314FDA: ;
    ebx = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00314FE5; /* jbe: below or equal (unsigned <=) */

loc_00314FE2: ;
    PUSH32(esp, 8);
    POP32(esp, ebx);

loc_00314FE5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x31C730);
    eax = ebp + -12;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C784); PUSH32(esp, 0x00314FF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00314FEEu); } /* indirect call */
    }

loc_00314FF4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00315067; /* jbe: below or equal (unsigned <=) */

loc_00314FFA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    eax = esi + 0x41;
    if (CMP_A(_fa, _fb)) goto loc_00315005; /* ja: above (unsigned >) */

loc_00315002: ;
    eax = esi + 0x30;

loc_00315005: ;
    ecx = MEM32(ebp + -8);
    MEM8(ecx + 0xB) = LO8(eax);
    eax = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3A);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x170);
    PUSH32(esp, 0x314ED8);
    { uint32_t _icall_target = MEM32(0x31C790); PUSH32(esp, 0x00315027u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315021u); } /* indirect call */
    }

loc_00315027: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00315067; /* jl: less (signed <) */

loc_0031502B: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, 0x5C);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -4);
    MEM32(edx) = eax;
    MEM32(edx + 4) = esi;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    MEM32(edx + 0xC) = ecx;
    eax = MEM32(ebp + -4);
    MEM8(eax + 0x1E) = 1;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) | ecx;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0xFFFFFFEFu;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315062u); RECOMP_ABI_CALL(0x00315D98u, sub_00315D98); /* call 0x00315D98 */

loc_00315062: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00314FFA; /* jb: below (unsigned <) */

loc_00315067: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x314EC9) = LO8(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_0031507B; /* jbe: below or equal (unsigned <=) */

loc_00315075: ;
    MEM8(0x314ECF) = MEM8(0x314ECF) << 1;
    _fa = (uint32_t)(MEM8(0x314ECF)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */

loc_0031507B: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x314EC8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315088u); RECOMP_ABI_CALL(0x003152DAu, sub_003152DA); /* call 0x003152DA */

loc_00315088: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031508C
 * Original: 0x0031508C - 0x00315297 (523 bytes, 165 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031508C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031508C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x314F5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x314F5C), esi (32-bit) */
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00315292; /* jne: not equal / not zero */

loc_003150AA: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(0x314F5C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003150BEu); RECOMP_ABI_CALL(0x003152CEu, sub_003152CE); /* call 0x003152CE */

loc_003150BE: ;
    MEM32(ebp + -16) = eax;
    eax = 0x314DC4;
    ebx = 0x314DCC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00315145; /* jae: above or equal (unsigned >=) */

loc_003150D1: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031511E; /* je: equal / zero */

loc_003150D7: ;
    eax = MEM32(eax + 4);
    MEM32(ebp + esi * 4 + -96) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003150F3; /* jne: not equal / not zero */

loc_003150E5: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003150EEu); RECOMP_ABI_CALL(0x00315297u, sub_00315297); /* call 0x00315297 */

loc_003150EE: ;
    ecx = MEM32(edi);
    MEM8(ecx + 1) = LO8(eax);

loc_003150F3: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003150FE; /* je: equal / zero */

loc_003150FC: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003150FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003150FCu); } /* indirect call */
    }

loc_003150FE: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    eax = ZX8(MEM8(eax + 1));
    if (TEST_Z(_fa, _fb)) goto loc_00315111; /* je: equal / zero */

loc_0031510C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031511E;

loc_00315111: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031511B; /* je: equal / zero */

loc_00315116: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031511E;

loc_0031511B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031511E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003150D1; /* jb: below (unsigned <) */

loc_00315125: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315136; /* je: equal / zero */

loc_0031512B: ;
    MEM16(0x3479F0) = 0xC;
    goto loc_0031514E;

loc_00315136: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    MEM16(0x3479F0) = 8;
    if (CMP_NE(_fa, _fb)) goto loc_0031514E; /* jne: not equal / not zero */

loc_00315145: ;
    MEM16(0x3479F0) = 4;

loc_0031514E: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00315159; /* jbe: below or equal (unsigned <=) */

loc_00315156: ;
    MEM32(ebp + -8) = eax;

loc_00315159: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00315161; /* jbe: below or equal (unsigned <=) */

loc_0031515E: ;
    MEM32(ebp + -4) = eax;

loc_00315161: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00315176; /* jbe: below or equal (unsigned <=) */

loc_00315173: ;
    MEM32(ebp + -16) = ecx;

loc_00315176: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX16(MEM16(0x3479F0));
    MEM32(ebp + -16) = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x16);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xAB);
    ebx = esi;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x5F444958);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003151A3u); RECOMP_ABI_CALL(0x00317B0Cu, sub_00317B0C); /* call 0x00317B0C */

loc_003151A3: ;
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x314F30) = esi;
    MEM32(0x314F48) = esi;
    MEM32(0x314F34) = eax;
    MEM32(0x314F4C) = eax;
    edi = eax;
    esi = ebp + -96;
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
    edx = MEM32(ebp + -16);
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
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    MEM32(0x3479F8) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_003151F7; /* jbe: below or equal (unsigned <=) */

loc_003151E1: ;
    MEM32(eax + 0xA7) = ecx;
    ecx = eax;
    _fb = (uint32_t)(0xAB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xAB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003151E1; /* jne: not equal / not zero */

loc_003151F1: ;
    MEM32(0x3479F8) = ecx;

loc_003151F7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x3479F0)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x3479F0), LO16(edi) (16-bit) */
    MEM32(0x3479F4) = eax;
    MEM16(0x3479F2) = LO16(edi);
    if (CMP_BE(_fa, _fb)) goto loc_0031522B; /* jbe: below or equal (unsigned <=) */

loc_0031520E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00315210: ;
    eax = MEM32(0x3479F4);
    eax = ecx + eax + 4;
    MEM8(eax) = MEM8(eax) & 0xFE;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = ZX16(MEM16(0x3479F0));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x16;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00315210; /* jb: below (unsigned <) */

loc_0031522B: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = 0x314F50;
    if (CMP_EQ(_fa, _fb)) goto loc_0031524C; /* je: equal / zero */

loc_00315237: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM8(0x314F50) = 0;
    MEM8(0x314F51) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031524Cu); RECOMP_ABI_CALL(0x003152DAu, sub_003152DA); /* call 0x003152DA */

loc_0031524C: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315268; /* je: equal / zero */

loc_00315253: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM8(0x314F50) = 2;
    MEM8(0x314F51) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315268u); RECOMP_ABI_CALL(0x003152DAu, sub_003152DA); /* call 0x003152DA */

loc_00315268: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315284; /* je: equal / zero */

loc_0031526F: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM8(0x314F50) = 1;
    MEM8(0x314F51) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315284u); RECOMP_ABI_CALL(0x003152DAu, sub_003152DA); /* call 0x003152DA */

loc_00315284: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x347A48);
    { uint32_t _icall_target = MEM32(0x31C7A4); PUSH32(esp, 0x00315290u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031528Au); } /* indirect call */
    }

loc_00315290: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00315292: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00315297
 * Original: 0x00315297 - 0x003152CE (55 bytes, 23 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315297(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315297: ;
    edx = MEM32(ecx + 0x9C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003152C5; /* je: equal / zero */

loc_003152A3: ;
    ecx = MEM32(ecx + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_003152C1; /* jbe: below or equal (unsigned <=) */

loc_003152AF: ;
    esi = edx;

loc_003152B1: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003152C8; /* je: equal / zero */

loc_003152B9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003152B1; /* jb: below (unsigned <) */

loc_003152C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003152C3: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003152C5: ;
    esp += 8; return; /* ret 4 */

loc_003152C8: ;
    eax = MEM32(edx + eax * 8 + 4);
    goto loc_003152C3;

}

/**
 * sub_003152CE
 * Original: 0x003152CE - 0x003152DA (12 bytes, 4 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003152CE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003152CE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x9C), eax (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_003152DA
 * Original: 0x003152DA - 0x003154DC (514 bytes, 198 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003152DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003152DA: ;
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
    eax = ZX8(MEM8(esi + 1));
    MEM32(ebp + -8) = eax;
    eax = ZX8(MEM8(esi));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -12) = edx;
    if ((_fa == 0)) goto loc_0031533A; /* je: equal / zero */

loc_003152FA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00315335; /* je: equal / zero */

loc_003152FD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031533E; /* jne: not equal / not zero */

loc_00315300: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 0x34)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edx + 0x34) (8-bit) */
    ebx = edx + 0x64;
    if (CMP_BE(_fa, _fb)) goto loc_0031530E; /* jbe: below or equal (unsigned <=) */

loc_0031530B: ;
    MEM8(edx + 0x34) = LO8(eax);

loc_0031530E: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00315341; /* jbe: below or equal (unsigned <=) */

loc_00315315: ;
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = edx;
    MEM8(esi + 1) = LO8(eax);
    MEM8(esi) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315325u); RECOMP_ABI_CALL(0x003152DAu, sub_003152DA); /* call 0x003152DA */

loc_00315325: ;
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + 1) = MEM8(esi + 1) + 4;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 4;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + -12);
    MEM8(esi) = 2;
    goto loc_00315341;

loc_00315335: ;
    ebx = edx + 0x32;
    goto loc_00315341;

loc_0031533A: ;
    ebx = edx;
    goto loc_00315341;

loc_0031533E: ;
    ebx = MEM32(ebp + 8);

loc_00315341: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ebx + 2) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031534C; /* jbe: below or equal (unsigned <=) */

loc_00315349: ;
    MEM8(ebx + 2) = LO8(eax);

loc_0031534C: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003153A3; /* je: equal / zero */

loc_0031535A: ;
    edi = ebx + 3;

loc_0031535D: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003153A3; /* jae: above or equal (unsigned >=) */

loc_00315363: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 3) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00315372; /* jbe: below or equal (unsigned <=) */

loc_0031536A: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031539D;

loc_00315372: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031538F; /* jae: above or equal (unsigned >=) */

loc_00315378: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx + 0x2B;

loc_00315381: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00315381; /* jne: not equal / not zero */

loc_0031538C: ;
    edx = MEM32(ebp + -12);

loc_0031538F: ;
    SET_LO8(eax, MEM8(esi + 3));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0031539D: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031535D; /* jne: not equal / not zero */

loc_003153A3: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003153FA; /* je: equal / zero */

loc_003153B1: ;
    edi = ebx + 4;

loc_003153B4: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003153FA; /* jae: above or equal (unsigned >=) */

loc_003153BA: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 4) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003153C9; /* jbe: below or equal (unsigned <=) */

loc_003153C1: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003153F4;

loc_003153C9: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003153E6; /* jae: above or equal (unsigned >=) */

loc_003153CF: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx + 0x2C;

loc_003153D8: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003153D8; /* jne: not equal / not zero */

loc_003153E3: ;
    edx = MEM32(ebp + -12);

loc_003153E6: ;
    SET_LO8(eax, MEM8(esi + 4));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003153F4: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003153B4; /* jne: not equal / not zero */

loc_003153FA: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00315451; /* je: equal / zero */

loc_00315408: ;
    edi = ebx + 5;

loc_0031540B: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00315451; /* jae: above or equal (unsigned >=) */

loc_00315411: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 5)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 5) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00315420; /* jbe: below or equal (unsigned <=) */

loc_00315418: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031544B;

loc_00315420: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031543D; /* jae: above or equal (unsigned >=) */

loc_00315426: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx + 0x2D;

loc_0031542F: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031542F; /* jne: not equal / not zero */

loc_0031543A: ;
    edx = MEM32(ebp + -12);

loc_0031543D: ;
    SET_LO8(eax, MEM8(esi + 5));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0031544B: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031540B; /* jne: not equal / not zero */

loc_00315451: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003154A8; /* je: equal / zero */

loc_0031545F: ;
    edi = ebx + 8;

loc_00315462: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003154A8; /* jae: above or equal (unsigned >=) */

loc_00315468: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 8) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00315477; /* jbe: below or equal (unsigned <=) */

loc_0031546F: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003154A2;

loc_00315477: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00315494; /* jae: above or equal (unsigned >=) */

loc_0031547D: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx + 0x30;

loc_00315486: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00315486; /* jne: not equal / not zero */

loc_00315491: ;
    edx = MEM32(ebp + -12);

loc_00315494: ;
    SET_LO8(eax, MEM8(esi + 8));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003154A2: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00315462; /* jne: not equal / not zero */

loc_003154A8: ;
    SET_LO8(eax, MEM8(esi + 3));
    ecx = edx + 0xB0;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003154B7; /* jbe: below or equal (unsigned <=) */

loc_003154B5: ;
    MEM8(ecx) = LO8(eax);

loc_003154B7: ;
    SET_LO8(eax, MEM8(esi + 7));
    ecx = edx + 0xB1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003154C6; /* jbe: below or equal (unsigned <=) */

loc_003154C4: ;
    MEM8(ecx) = LO8(eax);

loc_003154C6: ;
    SET_LO8(eax, MEM8(esi + 9));
    POP32(esp, edi);
    ecx = edx + 0xB2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx) (8-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_003154D8; /* jbe: below or equal (unsigned <=) */

loc_003154D6: ;
    MEM8(ecx) = LO8(eax);

loc_003154D8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003154DC
 * Original: 0x003154DC - 0x00315625 (329 bytes, 96 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003154DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003154DC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 0xA0) = 0x10;
    _fa = (uint32_t)(MEM8(0x314DE8)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x314DE8), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00315505; /* je: equal / zero */

loc_003154FE: ;
    MEM8(ecx + 0xA0) = 0x30;

loc_00315505: ;
    SET_LO8(eax, MEM8(ecx + 2));
    SET_LO8(edx, MEM8(ecx + 0x34));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(ecx + 0x66)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + MEM8(ecx + 0x66));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(edx, LO8(edx) << 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(3) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + 0xA0) = MEM8(ecx + 0xA0) + LO8(edx);
    _fa = (uint32_t)(MEM8(ecx + 0xA0)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0xA1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0xA1) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031552A; /* jbe: below or equal (unsigned <=) */

loc_00315524: ;
    MEM8(ecx + 0xA1) = LO8(eax);

loc_0031552A: ;
    SET_LO8(eax, MEM8(ecx + 0x66));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0xA1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0xA1) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031553B; /* jbe: below or equal (unsigned <=) */

loc_00315535: ;
    MEM8(ecx + 0xA1) = LO8(eax);

loc_0031553B: ;
    SET_LO8(eax, MEM8(ecx + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0xA1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0xA1) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031554C; /* jbe: below or equal (unsigned <=) */

loc_00315546: ;
    MEM8(ecx + 0xA1) = LO8(eax);

loc_0031554C: ;
    SET_LO8(eax, MEM8(ecx + 0xA1));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + 0xA0) = MEM8(ecx + 0xA0) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx + 0xA0)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ecx + 0x37;
    MEM32(ebp + -12) = 4;

loc_00315562: ;
    edi = ZX8(MEM8(eax + 0x32));
    edx = ZX8(MEM8(eax + -50));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX8(MEM8(eax));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edi + edx;
    edi = ZX8(MEM8(eax + 0x30));
    edx = ZX8(MEM8(eax + -52));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX8(MEM8(eax + -2));
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(eax + -61));
    MEM32(ebp + -4) = edi;
    edi = ZX8(MEM8(eax + 0x27));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX8(MEM8(eax + -11));
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(eax + -57));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0xA8) = MEM32(ecx + 0xA8) + edx;
    _fa = (uint32_t)(MEM32(ecx + 0xA8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ZX8(MEM8(eax + 0x2B));
    edx = MEM32(ecx + 0xA8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0xA8) = edx;
    ebx = ZX8(MEM8(eax + -7));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = edi;
    MEM32(ecx + 0xA8) = ebx;
    if ((_fa != 0)) goto loc_00315562; /* jne: not equal / not zero */

loc_003155D0: ;
    _fa = (uint32_t)(MEM8(0x314DE8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x314DE8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003155E2; /* je: equal / zero */

loc_003155D9: ;
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xD;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003155E9;

loc_003155E2: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 5;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003155E9: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx + 0xB0;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0xD (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003155FA; /* jae: above or equal (unsigned >=) */

loc_003155F7: ;
    MEM8(edx) = 0xD;

loc_003155FA: ;
    eax = MEM32(ebp + -4);
    edx = ZX8(MEM8(edx));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX8(MEM8(ecx + 0xB1));
    ebx = eax + esi * 2;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ecx + 0xAC) = edx;
    MEM32(ecx + 0xA4) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00315625
 * Original: 0x00315625 - 0x003156C8 (163 bytes, 62 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00315625(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315625: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO8(eax, MEM8(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = ZX8(LO8(eax));
    MEM8(esi + 0x7A) = LO8(eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    PUSH32(esp, 0x44425355);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    MEM8(esi) = LO8(ebx);
    MEM8(esi + 0x79) = LO8(ebx);
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x80) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315656u); RECOMP_ABI_CALL(0x00317B0Cu, sub_00317B0C); /* call 0x00317B0C */

loc_00315656: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00315670; /* je: equal / zero */

loc_0031565D: ;
    PUSH32(esp, 0x317B74);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031566Bu); RECOMP_ABI_CALL(0x00044620u, sub_00044620); /* call 0x00044620 */

loc_0031566B: ;
    eax = MEM32(ebp + 8);
    goto loc_00315672;

loc_00315670: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00315672: ;
    ecx = ZX8(MEM8(esi + 0x7A));
    MEM32(esi + 0xE0) = eax;
    SET_LO8(eax, MEM8(ebp + 0xC));
    MEM8(esi + 0x7B) = LO8(eax);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003156A6; /* jle: less or equal (signed <=) */

loc_00315689: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031568B: ;
    edx = MEM32(esi + 0xE0);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx + edx + 1) = LO8(eax);
    edx = ZX8(MEM8(esi + 0x7A));
    ecx = SX8(LO8(eax));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031568B; /* jl: less (signed <) */

loc_003156A6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x318950);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7A8); PUSH32(esp, 0x003156B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003156B0u); } /* indirect call */
    }

loc_003156B6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7A4); PUSH32(esp, 0x003156C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003156BBu); } /* indirect call */
    }

loc_003156C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003156C8
 * Original: 0x003156C8 - 0x00315741 (121 bytes, 41 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003156C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003156C8: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x7C));
    ecx = ebp + -68;
    PUSH32(esp, MEM32(ebp + 0x78));
    PUSH32(esp, 0x003156E3u); RECOMP_ABI_CALL(0x003195F8u, sub_003195F8); /* call 0x003195F8 */

loc_003156E3: ;
    eax = 0x314DD4;
    esi = 0x314DE4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00315707; /* jae: above or equal (unsigned >=) */

loc_003156F3: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315700; /* je: equal / zero */

loc_003156F9: ;
    ecx = ebp + -68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00315700u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003156FDu); } /* indirect call */
    }

loc_00315700: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003156F3; /* jb: below (unsigned <) */

loc_00315707: ;
    ecx = ebp + -68;
    PUSH32(esp, 0x0031570Fu); RECOMP_ABI_CALL(0x003154DCu, sub_003154DC); /* call 0x003154DC */

loc_0031570F: ;
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00315718u); RECOMP_ABI_CALL(0x003158DAu, sub_003158DA); /* call 0x003158DA */

loc_00315718: ;
    eax = ZX8(MEM8(ebp + 0x5D));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + 0x5C));
    PUSH32(esp, eax);
    ecx = 0x347A90;
    PUSH32(esp, 0x0031572Cu); RECOMP_ABI_CALL(0x00315625u, sub_00315625); /* call 0x00315625 */

loc_0031572C: ;
    MEM8(0x347B78) = 0;
    PUSH32(esp, 0x00315738u); RECOMP_ABI_CALL(0x003158E6u, sub_003158E6); /* call 0x003158E6 */

loc_00315738: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00315741
 * Original: 0x00315741 - 0x003157BE (125 bytes, 45 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315741(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315741: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x44425355);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00315755u); RECOMP_ABI_CALL(0x00317B0Cu, sub_00317B0C); /* call 0x00317B0C */

loc_00315755: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003157B9; /* je: equal / zero */

loc_0031575B: ;
    ecx = edi;
    edx = ecx;
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
    MEM8(0x347B78) = MEM8(0x347B78) + 1;
    _fa = (uint32_t)(MEM8(0x347B78)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(0x347B78));
    ecx = 0x347A90;
    MEM32(esi) = eax;
    PUSH32(esp, 0x00315788u); RECOMP_ABI_CALL(0x00317B86u, sub_00317B86); /* call 0x00317B86 */

loc_00315788: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi + 4;
    MEM32(ecx) = eax;
    MEM8(eax) = 0;
    eax = MEM32(ecx);
    MEM8(eax + 2) = 0x80;
    eax = MEM32(ecx);
    MEM8(eax + 1) = 0x80;
    eax = MEM32(ecx);
    MEM8(eax + 3) = 0x80;
    eax = MEM32(ecx);
    MEM32(eax + 0xC) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003157B9u); RECOMP_ABI_CALL(0x00315928u, sub_00315928); /* call 0x00315928 */

loc_003157B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003157BE
 * Original: 0x003157BE - 0x0031582A (108 bytes, 29 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003157BE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003157BE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x314DE8)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x314DE8), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM16(0x347C3A) = MEM16(0x347C3A) & 0;
    _fa = (uint32_t)(MEM16(0x347C3A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 0x48425355);
    eax = eax * 8 + 6;
    MEM16(0x347C38) = LO16(eax);
    eax = ZX16(LO16(eax));
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003157F0u); RECOMP_ABI_CALL(0x00317B0Cu, sub_00317B0C); /* call 0x00317B0C */

loc_003157F0: ;
    ecx = ZX16(MEM16(0x347C38));
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    edi = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x347C3C) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    PUSH32(esp, 0);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x347BE8);
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A4); PUSH32(esp, 0x0031581Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315819u); } /* indirect call */
    }

loc_0031581F: ;
    MEM32(0x347C30) = MEM32(0x347C30) & 0;
    _fa = (uint32_t)(MEM32(0x347C30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031582A
 * Original: 0x0031582A - 0x003158DA (176 bytes, 61 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031582A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031582A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esi + 0x478;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7A4); PUSH32(esp, 0x00315845u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031583Fu); } /* indirect call */
    }

loc_00315845: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x31A4C0);
    eax = esi + 0x4A0;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7A8); PUSH32(esp, 0x00315858u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315852u); } /* indirect call */
    }

loc_00315858: ;
    MEM8(esi + 0x460) = 4;
    eax = MEM32(ebx + 0x50);
    MEM32(ebp + -8) = eax;
    MEM16(ebp + -8) = MEM16(ebp + -8) & 0;
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(ebp + -8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x50) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x460)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x460), LO8(edx) (8-bit) */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    if (CMP_BE(_fa, _fb)) goto loc_003158B4; /* jbe: below or equal (unsigned <=) */

loc_00315883: ;
    eax = ebx + 0x54;

loc_00315886: ;
    edi = MEM32(eax);
    MEM32(ebp + -8) = edi;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315899; /* je: equal / zero */

loc_00315891: ;
    MEM16(ebp + -2) = MEM16(ebp + -2) | LO16(ecx);
    _fa = (uint32_t)(MEM16(ebp + -2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(ebp + -4) = MEM16(ebp + -4) | LO16(ecx);
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_00315899: ;
    MEM16(ebp + -8) = MEM16(ebp + -8) & 0;
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    edi = MEM32(ebp + -8);
    MEM32(eax) = edi;
    edi = ZX8(MEM8(esi + 0x460));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00315886; /* jb: below (unsigned <) */

loc_003158B4: ;
    MEM32(ebx + 0x10) = 0x40;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x003158C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003158BBu); } /* indirect call */
    }

loc_003158C1: ;
    edx = ebp + -4;
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003158CDu); RECOMP_ABI_CALL(0x0031A3C7u, sub_0031A3C7); /* call 0x0031A3C7 */

loc_003158CD: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x003158D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003158CFu); } /* indirect call */
    }

loc_003158D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003158DA
 * Original: 0x003158DA - 0x003158E6 (12 bytes, 3 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003158DA(void)
{

loc_003158DA: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x003158E3u); RECOMP_ABI_CALL(0x00315AA3u, sub_00315AA3); /* call 0x00315AA3 */

loc_003158E3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003158E6
 * Original: 0x003158E6 - 0x00315928 (66 bytes, 20 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003158E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003158E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x31C83C);
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(0xA1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 5), 0xA1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315926; /* je: equal / zero */

loc_003158F7: ;
    eax = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    MEM8(ebp + -24) = 3;
    MEM32(ebp + -16) = 0x1000;
    MEM32(ebp + -20) = 0xFED00000u;
    { uint32_t _icall_target = MEM32(0x31C894); PUSH32(esp, 0x00315915u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031590Fu); } /* indirect call */
    }

loc_00315915: ;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 0x4E0);
    eax = ebp + -40;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315926u); RECOMP_ABI_CALL(0x00315741u, sub_00315741); /* call 0x00315741 */

loc_00315926: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00315928
 * Original: 0x00315928 - 0x00315AA3 (379 bytes, 114 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00315928(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315928: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM8(ebp + 0xC) = MEM8(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ebp + 0xC));
    MEM32(esi + 0x45C) = edi;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 4) = ecx;
    eax = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = edi;
    MEM32(esi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315956u); RECOMP_ABI_CALL(0x00315CC9u, sub_00315CC9); /* call 0x00315CC9 */

loc_00315956: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031595Cu); RECOMP_ABI_CALL(0x00315CD4u, sub_00315CD4); /* call 0x00315CD4 */

loc_0031595C: ;
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x31B6F8);
    eax = esi + 0x440;
    MEM32(ebx + 0x48) = 0x1200;
    MEM32(ebx + 0x4C) = 0;
    MEM32(ebx + 0x50) = 0x80000000u;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7A8); PUSH32(esp, 0x00315986u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315980u); } /* indirect call */
    }

loc_00315986: ;
    eax = MEM32(edi * 4 + 0x654504);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebx + 8);
    MEM32(ebp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x0031599Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315996u); } /* indirect call */
    }

loc_0031599C: ;
    MEM8(ebp + 0xF) = LO8(eax);
    eax = MEM32(ebp + 8);
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(0x31C8A4); PUSH32(esp, 0x003159B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003159AAu); } /* indirect call */
    }

loc_003159B0: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003159B7u); RECOMP_ABI_CALL(0x00315C68u, sub_00315C68); /* call 0x00315C68 */

loc_003159B7: ;
    MEM32(ebx + 4) = 0xBE;
    eax = MEM32(ebx + 0x34);
    eax = eax & 0xA772EED8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x27722ED8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = eax;
    ecx = ~ecx;
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ~eax;
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x34) = ecx;
    eax = MEM32(0x31C83C);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315A2B; /* jne: not equal / not zero */

loc_003159E8: ;
    MEM32(ebp + 8) = 2;

loc_003159EF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003159F4u); RECOMP_ABI_CALL(0x0031A5AAu, sub_0031A5AA); /* call 0x0031A5AA */

loc_003159F4: ;
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    _fb = (uint32_t)(MEM32(0x654500)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x654500);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    MEM32(edx + 0x14) = eax;
    eax = MEM32(edx);
    eax = eax & 0xF808FFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(edx + 0x11) = 0;
    MEM32(edx) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315A23u); RECOMP_ABI_CALL(0x0031ABB5u, sub_0031ABB5); /* call 0x0031ABB5 */

loc_00315A23: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003159EF; /* jne: not equal / not zero */

loc_00315A28: ;
    edi = MEM32(ebp + -4);

loc_00315A2B: ;
    SET_LO8(ecx, MEM8(ebp + 0xF));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x00315A34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315A2Eu); } /* indirect call */
    }

loc_00315A34: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x70);
    eax = MEM32(ebp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 0x24));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = edi + 0x654540;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, 0x31B024);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C8A0); PUSH32(esp, 0x00315A5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315A54u); } /* indirect call */
    }

loc_00315A5A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C89C); PUSH32(esp, 0x00315A61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315A5Bu); } /* indirect call */
    }

loc_00315A61: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi + 0x4C0;
    eax = esi + 0x4C8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(ecx) = 0x31A8D4;
    MEM32(esi + 0x4C4) = edx;
    MEM32(esi + 0x4CC) = eax;
    MEM32(eax) = eax;
    { uint32_t _icall_target = MEM32(0x31C850); PUSH32(esp, 0x00315A8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315A86u); } /* indirect call */
    }

loc_00315A8C: ;
    ecx = esi;
    MEM32(ebx + 0x10) = 0x80000033u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315A9Au); RECOMP_ABI_CALL(0x0031582Au, sub_0031582A); /* call 0x0031582A */

loc_00315A9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00315AA3
 * Original: 0x00315AA3 - 0x00315C68 (453 bytes, 142 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00315AA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315AA3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ZX8(MEM8(ebx + 0xE));
    eax = MEM32(ebx + 4);
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), eax (32-bit) */
    PUSH32(esp, esi);
    MEM32(ebp + -8) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_00315AC3; /* jae: above or equal (unsigned >=) */

loc_00315AC1: ;
    MEM32(ebx) = eax;

loc_00315AC3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx);
    ecx = ecx + ecx * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax = ecx + 0xFFF;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00315AF7; /* jae: above or equal (unsigned >=) */

loc_00315AF6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00315AF7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = edi;
    { uint32_t _icall_target = MEM32(0x31C764); PUSH32(esp, 0x00315B07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315B01u); } /* indirect call */
    }

loc_00315B07: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C8D8); PUSH32(esp, 0x00315B13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315B0Du); } /* indirect call */
    }

loc_00315B13: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C8D4); PUSH32(esp, 0x00315B1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315B14u); } /* indirect call */
    }

loc_00315B1A: ;
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x654500) = ecx;
    ecx = edi;
    edx = ecx;
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
    eax = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x654504) = esi;
    MEM32(0x654508) = edx;
    edi = ZX8(MEM8(ebx + 0xE));
    ecx = esi + eax;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x100;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x65452C) = edi;
    MEM32(0x654528) = edx;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), edx (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00315BA9; /* jbe: below or equal (unsigned <=) */

loc_00315B6B: ;
    edi = MEM32(0x654528);
    MEM32(esi) = edi;
    edi = MEM32(0x654508);
    MEM32(0x654528) = esi;
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = edi;
    MEM32(0x654508) = esi;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00315B6B; /* jb: below (unsigned <) */

loc_00315B94: ;
    goto loc_00315BA9;

loc_00315B96: ;
    edi = MEM32(0x654508);
    MEM32(esi + 0x18) = edi;
    MEM32(0x654508) = esi;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00315BA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00315B96; /* jb: below (unsigned <) */

loc_00315BAD: ;
    edi = esi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(ebp + -4) = edx;
    MEM32(0x65450C) = edx;
    MEM32(0x654510) = esi;
    if (CMP_A(_fa, _fb)) goto loc_00315BE7; /* ja: above (unsigned >) */

loc_00315BC3: ;
    eax = esi;
    _fb = (uint32_t)(MEM32(0x654500)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x654500);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    MEM32(ebp + -8) = esi;
    MEM32(edi + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315BD7u); RECOMP_ABI_CALL(0x0031AB98u, sub_0031AB98); /* call 0x0031AB98 */

loc_00315BD7: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -12) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00315BC3; /* jbe: below or equal (unsigned <=) */

loc_00315BE5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00315BE7: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    MEM32(0x654514) = eax;
    MEM32(0x654518) = edx;
    MEM32(0x65451C) = 0x3E8;
    SET_LO16(eax, ZX8(MEM8(ebx + 0xC)));
    MEM16(0x654520) = LO16(eax);
    SET_LO16(eax, ZX8(MEM8(ebx + 0xD)));
    MEM16(0x654524) = LO16(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 8) (32-bit) */
    POP32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_00315C50; /* jbe: below or equal (unsigned <=) */

loc_00315C1E: ;
    _fb = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - MEM8(ebx + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315C39; /* je: equal / zero */

loc_00315C26: ;
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) >> 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO16(esi, ZX8(LO8(edx)));
    _fb = (uint32_t)(LO16(esi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + LO16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(0x654524) = LO16(eax);
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */

loc_00315C39: ;
    SET_LO16(eax, ZX8(LO8(ecx)));
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x654520) = MEM16(0x654520) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x654520)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = MEM32(ebp + -4);
    MEM32(ebx + 8) = eax;
    SET_LO16(eax, MEM16(0x654524));

loc_00315C50: ;
    SET_LO16(ecx, MEM16(0x654520));
    POP32(esp, esi);
    MEM16(0x654522) = LO16(ecx);
    MEM16(0x654526) = LO16(eax);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00315C68
 * Original: 0x00315C68 - 0x00315CC9 (97 bytes, 32 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315C68(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315C68: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(MEM32(0x654500)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x654500);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi);
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x1C) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x20) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x24) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x28) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x2C) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x30) = eax;
    PUSH32(esp, 1);
    MEM16(esi + 0x416) = 0x2772;
    eax = MEM32(esi);
    PUSH32(esp, 3);
    MEM32(eax + 0x40) = 0x2A29;
    PUSH32(esp, 8);
    MEM16(esi + 0x414) = 0x236F;
    PUSH32(esp, 0x00315CBFu); RECOMP_ABI_CALL(0x00319666u, sub_00319666); /* call 0x00319666 */

loc_00315CBF: ;
    ecx = MEM32(esi);
    eax = ZX16(LO16(eax));
    MEM32(ecx + 0x44) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00315CC9
 * Original: 0x00315CC9 - 0x00315CD4 (11 bytes, 4 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315CC9(void)
{

loc_00315CC9: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    eax = MEM32(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00315CD4
 * Original: 0x00315CD4 - 0x00315D36 (98 bytes, 37 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00315CD4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315CD4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 8);
    eax = MEM32(edx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = 0x100;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315CFD; /* je: equal / zero */

loc_00315CEB: ;
    ecx = MEM32(eax + 8);
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 8) = ecx;
    edx = MEM32(edx);

loc_00315CF6: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 4), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315CF6; /* jne: not equal / not zero */

loc_00315CFB: ;
    goto loc_00315D31;

loc_00315CFD: ;
    edx = ecx;
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00315D31; /* je: equal / zero */

loc_00315D07: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315D31; /* je: equal / zero */

loc_00315D0C: ;
    ecx = ecx & 0xFFFFFF7Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(ebp + -8) = 0xFFFCF2C0u;
    { uint32_t _icall_target = MEM32(0x31C88C); PUSH32(esp, 0x00315D31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315D2Bu); } /* indirect call */
    }

loc_00315D31: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00315D36
 * Original: 0x00315D36 - 0x00315D6D (55 bytes, 27 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315D36(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315D36: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0x314DC4;
    PUSH32(esp, edi);
    edi = eax;
    esi = 0x314DCC;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM8(edx) = 0;
    if (CMP_AE(_fa, _fb)) goto loc_00315D61; /* jae: above or equal (unsigned >=) */

loc_00315D4E: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315D5A; /* je: equal / zero */

loc_00315D54: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315D67; /* je: equal / zero */

loc_00315D58: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00315D5A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00315D4E; /* jb: below (unsigned <) */

loc_00315D61: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00315D63: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00315D67: ;
    MEM8(edx) = LO8(ebx);
    eax = MEM32(eax);
    goto loc_00315D63;

}

/**
 * sub_00315D6D
 * Original: 0x00315D6D - 0x00315D98 (43 bytes, 20 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315D6D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315D6D: ;
    eax = 0x314DC4;
    PUSH32(esp, esi);
    edx = eax;
    esi = 0x314DCC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00315D90; /* jae: above or equal (unsigned >=) */

loc_00315D7E: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315D89; /* je: equal / zero */

loc_00315D84: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315D94; /* je: equal / zero */

loc_00315D89: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00315D7E; /* jb: below (unsigned <) */

loc_00315D90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00315D94: ;
    eax = MEM32(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00315D98
 * Original: 0x00315D98 - 0x00315DC0 (40 bytes, 13 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315D98(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315D98: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x58);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0xC) = 4;
    eax = MEM32(0x3449E0);
    MEM32(edx + 8) = eax;
    MEM32(0x3449E0) = edx;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00315DC0
 * Original: 0x00315DC0 - 0x00315E56 (150 bytes, 58 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315DC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = edi;
    PUSH32(esp, 0x00315DCEu); RECOMP_ABI_CALL(0x00318B2Cu, sub_00318B2C); /* call 0x00318B2C */

loc_00315DCE: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00315DDB; /* jb: below (unsigned <) */

loc_00315DD7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00315DDB: ;
    eax = ecx + eax * 2;
    ecx = MEM32(0x3479EC);
    PUSH32(esp, ebx);
    eax = eax + eax * 2;
    PUSH32(esp, 1);
    esi = ecx + eax * 4;
    PUSH32(esp, 2);
    ecx = edi;
    PUSH32(esp, 0x00315DF6u); RECOMP_ABI_CALL(0x00318AB6u, sub_00318AB6); /* call 0x00318AB6 */

loc_00315DF6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315E44; /* je: equal / zero */

loc_00315DFA: ;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(esi + 5) = LO8(ecx);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0x40 (16-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00315E46; /* jne: not equal / not zero */

loc_00315E09: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00315E12u); RECOMP_ABI_CALL(0x00318AB6u, sub_00318AB6); /* call 0x00318AB6 */

loc_00315E12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315E44; /* je: equal / zero */

loc_00315E16: ;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(esi + 6) = LO8(ecx);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0x40 (16-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00315E46; /* jne: not equal / not zero */

loc_00315E25: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315E2Bu); RECOMP_ABI_CALL(0x003189BBu, sub_003189BB); /* call 0x003189BB */

loc_00315E2B: ;
    ecx = edi;
    MEM32(esi) = edi;
    PUSH32(esp, 0x00315E34u); RECOMP_ABI_CALL(0x003189C8u, sub_003189C8); /* call 0x003189C8 */

loc_00315E34: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM8(esi + 4) = LO8(eax);
    PUSH32(esp, 0x00315E3Fu); RECOMP_ABI_CALL(0x003189CCu, sub_003189CC); /* call 0x003189CC */

loc_00315E3F: ;
    PUSH32(esp, ebx);
    ecx = edi;
    goto loc_00315E4B;

loc_00315E44: ;
    ecx = edi;

loc_00315E46: ;
    PUSH32(esp, 0x80000400u);

loc_00315E4B: ;
    PUSH32(esp, 0x00315E50u); RECOMP_ABI_CALL(0x0031826Au, sub_0031826A); /* call 0x0031826A */

loc_00315E50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00315E56
 * Original: 0x00315E56 - 0x00315F28 (210 bytes, 61 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315E56(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315E56: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    if (TEST_Z(_fa, _fb)) goto loc_00315E84; /* je: equal / zero */

loc_00315E69: ;
    edx = MEM32(esi + 0x24);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x111) = 0x43;
    MEM32(esi + 0x120) = edx;
    eax = eax & 0xFFFBFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00315EB9;

loc_00315E84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315EA6; /* je: equal / zero */

loc_00315E8B: ;
    edx = MEM32(esi + 0x20);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x111) = 0x43;
    MEM32(esi + 0x120) = edx;
    eax = eax & 0xFFFDFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00315EB9;

loc_00315EA6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315EDF; /* je: equal / zero */

loc_00315EAD: ;
    MEM8(esi + 0x111) = 0xC3;
    eax = eax & 0xFFFEFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00315EB9: ;
    ecx = esi + 0x110;
    MEM8(ecx) = 0x1C;
    MEM32(esi + 0x118) = 0x315E56;
    MEM32(esi + 0x11C) = esi;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, 0x00315EDDu); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00315EDD: ;
    goto loc_00315F23;

loc_00315EDF: ;
    eax = eax & 0xFFF7FFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_00315F07; /* je: equal / zero */

loc_00315EF1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x12C;
    PUSH32(esp, eax);
    MEM32(edi + 8) = ebx;
    { uint32_t _icall_target = MEM32(0x31C794); PUSH32(esp, 0x00315F03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315EFDu); } /* indirect call */
    }

loc_00315F03: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00315F07: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315F22; /* je: equal / zero */

loc_00315F0D: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x00315F14u); RECOMP_ABI_CALL(0x00317E9Eu, sub_00317E9E); /* call 0x00317E9E */

loc_00315F14: ;
    MEM32(edi) = ebx;
    eax = MEM32(esi + 0xC);
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;

loc_00315F22: ;
    POP32(esp, ebx);

loc_00315F23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00315F28
 * Original: 0x00315F28 - 0x00315F42 (26 bytes, 10 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315F28(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315F28: ;
    eax = MEM32(ecx + 0xC);
    edx = 0x80000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315F41; /* jne: not equal / not zero */

loc_00315F34: ;
    PUSH32(esp, ecx);
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, 0x00315F41u); RECOMP_ABI_CALL(0x00315E56u, sub_00315E56); /* call 0x00315E56 */

loc_00315F41: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00315F42
 * Original: 0x00315F42 - 0x00315F77 (53 bytes, 19 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315F42(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315F42: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315F4Cu); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_00315F4C: ;
    esi = eax;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315F69; /* je: equal / zero */

loc_00315F55: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315F69; /* jne: not equal / not zero */

loc_00315F5C: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, 0x00315F67u); RECOMP_ABI_CALL(0x00315F28u, sub_00315F28); /* call 0x00315F28 */

loc_00315F67: ;
    goto loc_00315F73;

loc_00315F69: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x00315F70u); RECOMP_ABI_CALL(0x00317E9Eu, sub_00317E9E); /* call 0x00317E9E */

loc_00315F70: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00315F73: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00315F77
 * Original: 0x00315F77 - 0x00315FAF (56 bytes, 12 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315F77(void)
{

loc_00315F77: ;
    eax = MEM32(0x31C7AC);
    MEM32(0x314EE4) = eax;
    MEM32(0x314EE8) = eax;
    MEM32(0x314EF4) = eax;
    MEM32(0x314EF8) = eax;
    MEM32(0x314EFC) = eax;
    MEM32(0x314F00) = eax;
    MEM32(0x314F04) = eax;
    MEM32(0x314F08) = eax;
    MEM32(0x314F14) = eax;
    MEM32(0x314F18) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00315FAF
 * Original: 0x00315FAF - 0x00315FD1 (34 bytes, 13 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315FAF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315FAF: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) | eax;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315FCA; /* je: equal / zero */

loc_00315FC6: ;
    MEM32(ecx) = MEM32(ecx) | eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00315FCE;

loc_00315FCA: ;
    eax = ~eax;
    MEM32(ecx) = MEM32(ecx) & eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00315FCE: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00315FD1
 * Original: 0x00315FD1 - 0x00315FD6 (5 bytes, 1 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315FD1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315FD1: ;
    g_seh_ebp = ebp; sub_003156C8(); return; /* tail jmp 0x003156C8 */

}

/**
 * sub_00315FD6_gen
 * Original: 0x00315FD6 - 0x00315FF8 (34 bytes, 11 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315FD6_gen(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315FD6: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x00315FDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315FD7u); } /* indirect call */
    }

loc_00315FDD: ;
    edx = MEM32(esp + 8);
    esi = MEM32(edx);
    MEM32(edx + 4) = MEM32(edx + 4) & 0;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(eax));
    MEM32(edx + 8) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x00315FF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315FECu); } /* indirect call */
    }

loc_00315FF2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00315FF8_gen
 * Original: 0x00315FF8 - 0x00316065 (109 bytes, 47 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00315FF8_gen(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00315FF8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00316012; /* jne: not equal / not zero */

loc_00316006: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    goto loc_00316060;

loc_00316012: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x0031601Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316014u); } /* indirect call */
    }

loc_0031601A: ;
    ecx = MEM32(esi + 8);
    ebx = MEM32(ebp + 0xC);
    ecx = ~ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx) = ecx;
    edx = MEM32(esi);
    ecx = MEM32(ebp + 0x10);
    edx = ~edx;
    _cf = 0; /* logical op clears CF */
    edx = edx & MEM32(esi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = edx;
    edi = MEM32(esi + 4);
    _cf = 0; /* logical op clears CF */
    edi = edi & MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi & MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = edx;
    _cf = 0; /* logical op clears CF */
    MEM32(ebx) = MEM32(ebx) | edi;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esi);
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = ecx;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x00316051u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031604Bu); } /* indirect call */
    }

loc_00316051: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebp + 0x10);
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, ebx);

loc_00316060: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00316065
 * Original: 0x00316065 - 0x00316080 (27 bytes, 8 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316065(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316065: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347A70);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFD050F80u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x347A48);
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x0031607Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316079u); } /* indirect call */
    }

loc_0031607F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00316080
 * Original: 0x00316080 - 0x00316091 (17 bytes, 4 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316080(void)
{

loc_00316080: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x347A10);
    PUSH32(esp, 0x0031608Eu); RECOMP_ABI_CALL(0x003189A4u, sub_003189A4); /* call 0x003189A4 */

loc_0031608E: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00316091
 * Original: 0x00316091 - 0x003160B4 (35 bytes, 12 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316091(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316091: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031609Du); RECOMP_ABI_CALL(0x003189BBu, sub_003189BB); /* call 0x003189BB */

loc_0031609D: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x003160A4u); RECOMP_ABI_CALL(0x00317E9Eu, sub_00317E9E); /* call 0x00317E9E */

loc_003160A4: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(0x3479F2) = MEM16(0x3479F2) - 1;
    _fa = (uint32_t)(MEM16(0x3479F2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003160B4
 * Original: 0x003160B4 - 0x0031611E (106 bytes, 42 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003160B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003160B4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x3479F0)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x3479F0), LO16(ebx) (16-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edx;
    edi = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00316117; /* jbe: below or equal (unsigned <=) */

loc_003160CB: ;
    PUSH32(esp, esi);

loc_003160CC: ;
    eax = MEM32(0x3479F4);
    esi = ZX8(LO8(ebx));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x16);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316107; /* je: equal / zero */

loc_003160DF: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0x003160E6u); RECOMP_ABI_CALL(0x00318B2Cu, sub_00318B2C); /* call 0x00318B2C */

loc_003160E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00316107; /* jne: not equal / not zero */

loc_003160EC: ;
    eax = MEM32(0x3479F4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + 0xE)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xE), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00316107; /* jne: not equal / not zero */

loc_003160F8: ;
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316107; /* je: equal / zero */

loc_00316100: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00316107; /* jne: not equal / not zero */

loc_00316105: ;
    ebp = eax;

loc_00316107: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, ZX8(LO8(ebx)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x3479F0)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(0x3479F0) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003160CC; /* jb: below (unsigned <) */

loc_00316116: ;
    POP32(esp, esi);

loc_00316117: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031611E
 * Original: 0x0031611E - 0x003161C9 (171 bytes, 62 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031611E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031611E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x5A) = MEM32(esi + 0x5A) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x5A)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ebx = esi + 0x52;
    MEM8(ebx) = 0x20;
    MEM8(esi + 0x53) = 0x82;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00316142u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00316142: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003161C4; /* jl: less (signed <) */

loc_00316146: ;
    MEM8(esi + 0xA2) = MEM8(esi + 0xA2) | 2;
    _fa = (uint32_t)(MEM8(esi + 0xA2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0x5A) = MEM32(esi + 0x5A) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x5A)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebx) = 0x20;
    MEM8(esi + 0x53) = 2;
    SET_LO8(eax, MEM8(edi + 8));
    MEM8(esi + 0x67) = LO8(eax);
    eax = MEM32(ebp + -4);
    MEM8(esi + 0x68) = 3;
    SET_LO8(eax, MEM8(eax + 1));
    MEM8(esi + 0x69) = LO8(eax);
    MEM16(esi + 0x6E) = 0x20;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00316179u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00316179: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003161C4; /* jl: less (signed <) */

loc_0031617D: ;
    ecx = MEM32(esi + 0x62);
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003161C4; /* je: equal / zero */

loc_0031618B: ;
    _fa = (uint32_t)(MEM8(edi + 9)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 9), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003161C4; /* je: equal / zero */

loc_00316191: ;
    MEM32(esi + 0x5A) = MEM32(esi + 0x5A) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x5A)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebx) = 0x20;
    MEM8(esi + 0x53) = 2;
    SET_LO8(eax, MEM8(edi + 9));
    MEM8(esi + 0x67) = LO8(eax);
    MEM8(esi + 0x68) = 3;
    SET_LO8(eax, MEM8(ecx + 2));
    MEM8(esi + 0x69) = LO8(eax);
    MEM16(esi + 0x6E) = 0x20;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003161BAu); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_003161BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003161C4; /* jl: less (signed <) */

loc_003161BE: ;
    ecx = MEM32(esi + 0x62);
    MEM32(esi + 0x10) = ecx;

loc_003161C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003161C9
 * Original: 0x003161C9 - 0x0031627A (177 bytes, 54 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003161C9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003161C9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0xA2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xA2), 2 (8-bit) */
    eax = MEM32(esi);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_003161FA; /* je: equal / zero */

loc_003161DC: ;
    eax = MEM32(esp + 0xC);
    MEM8(eax) = 0x1C;
    MEM8(eax + 1) = 0xC3;
    MEM32(eax + 8) = 0x3161C9;
    MEM32(eax + 0xC) = esi;
    MEM8(esi + 0xA2) = MEM8(esi + 0xA2) & 0xFD;
    _fa = (uint32_t)(MEM8(esi + 0xA2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_00316244;

loc_003161FA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00316221; /* je: equal / zero */

loc_00316201: ;
    eax = MEM32(esp + 0xC);
    MEM8(eax) = 0x1C;
    MEM8(eax + 1) = 0x43;
    MEM32(eax + 8) = 0x3161C9;
    MEM32(eax + 0xC) = esi;
    edx = MEM32(esi + 0xC);
    MEM32(eax + 0x10) = edx;
    MEM32(esi + 0xC) = edi;
    goto loc_00316244;

loc_00316221: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031624C; /* je: equal / zero */

loc_00316226: ;
    eax = MEM32(esp + 0xC);
    MEM8(eax) = 0x1C;
    MEM8(eax + 1) = 0x43;
    MEM32(eax + 8) = 0x3161C9;
    MEM32(eax + 0xC) = esi;
    edx = MEM32(esi + 0x10);
    MEM32(eax + 0x10) = edx;
    MEM32(esi + 0x10) = edi;

loc_00316244: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031624Au); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_0031624A: ;
    goto loc_00316275;

loc_0031624C: ;
    MEM32(eax + 0x12) = edi;
    MEM32(esi) = edi;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031625E; /* je: equal / zero */

loc_00316257: ;
    ecx = eax;
    PUSH32(esp, 0x0031625Eu); RECOMP_ABI_CALL(0x00316091u, sub_00316091); /* call 0x00316091 */

loc_0031625E: ;
    _fa = (uint32_t)(MEM8(esi + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xA2), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316275; /* je: equal / zero */

loc_00316267: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x9E));
    { uint32_t _icall_target = MEM32(0x31C794); PUSH32(esp, 0x00316275u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031626Fu); } /* indirect call */
    }

loc_00316275: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031627A
 * Original: 0x0031627A - 0x00316336 (188 bytes, 62 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031627A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031627A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(ebx + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xA2), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_003162D2; /* jne: not equal / not zero */

loc_0031628B: ;
    SET_LO8(eax, MEM8(edi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003162D2; /* jne: not equal / not zero */

loc_00316292: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003162D7; /* jl: less (signed <) */

loc_0031629E: ;
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(edi + 4) = LO8(eax);
    eax = MEM32(edi + 0xE);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x003162ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003162A8u); } /* indirect call */
    }

loc_003162AB: ;
    MEM8(ebx + 0xA2) = MEM8(ebx + 0xA2) | 0x10;
    _fa = (uint32_t)(MEM8(ebx + 0xA2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebx + 8) = MEM32(ebx + 8) + 1;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 4) = MEM32(ebx + 4) & 0;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ZX8(MEM8(edi + 0xC));
    MEM32(esi + 0x14) = eax;
    _fa = (uint32_t)(MEM8(ebx + 0xA2)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xA2), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003162D1; /* je: equal / zero */

loc_003162C9: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003162D1u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_003162D1: ;
    POP32(esp, esi);

loc_003162D2: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003162D7: ;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x14) = ecx;
    MEM16(esi + 0x2A) = LO16(ecx);
    MEM8(esi) = 0x30;
    MEM8(esi + 1) = 0x40;
    MEM32(esi + 8) = 0x316336;
    MEM32(esi + 0xC) = ebx;
    MEM8(esi + 0x1C) = 0;
    MEM8(esi + 0x1D) = 0;
    MEM8(esi + 0x1E) = 0;
    MEM8(esi + 0x28) = 2;
    MEM8(esi + 0x29) = 1;
    SET_LO16(eax, ZX8(MEM8(edi + 8)));
    MEM16(esi + 0x2C) = LO16(eax);
    MEM16(esi + 0x2E) = LO16(ecx);
    SET_LO8(ecx, MEM8(edi + 4));
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0xF0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(edi + 4) = LO8(eax);
    SET_LO8(eax, LO8(eax) & 0xF0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003162C9; /* jne: not equal / not zero */

loc_0031632D: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x00316334u); RECOMP_ABI_CALL(0x0031808Cu, sub_0031808C); /* call 0x0031808C */

loc_00316334: ;
    goto loc_003162D1;

}

/**
 * sub_00316336
 * Original: 0x00316336 - 0x003163C0 (138 bytes, 44 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316336(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316336: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = MEM32(esi);
    _fa = (uint32_t)(MEM8(ebx + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003163BB; /* jne: not equal / not zero */

loc_00316344: ;
    _fa = (uint32_t)(MEM8(esi + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xA2), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003163BB; /* jne: not equal / not zero */

loc_0031634D: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003163B3; /* jl: less (signed <) */

loc_00316358: ;
    MEM32(edi + 8) = MEM32(edi + 8) & 0;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(edi) = 0x18;
    MEM8(edi + 1) = 5;
    eax = MEM32(esi + 0xC);
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = 4;
    ecx = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00316378u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00316378: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 0x62) = eax;
    eax = esi + 0x32;
    MEM8(esi + 0x52) = 0x28;
    MEM8(esi + 0x53) = 0x41;
    MEM32(esi + 0x5A) = 0x31627A;
    MEM32(esi + 0x5E) = esi;
    MEM32(esi + 0x6A) = eax;
    eax = ZX8(MEM8(ebx + 0xC));
    MEM32(esi + 0x66) = eax;
    MEM8(esi + 0x6E) = 2;
    MEM8(esi + 0x6F) = 1;
    MEM8(esi + 0x70) = 0;
    ecx = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003163B1u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_003163B1: ;
    goto loc_003163BA;

loc_003163B3: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0x003163BAu); RECOMP_ABI_CALL(0x0031808Cu, sub_0031808C); /* call 0x0031808C */

loc_003163BA: ;
    POP32(esp, edi);

loc_003163BB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003163C0
 * Original: 0x003163C0 - 0x00316412 (82 bytes, 40 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003163C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003163C0: ;
    eax = ecx;
    ecx = MEM32(eax + 0x66);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    edx = eax + 0x14;
    if (CMP_B(_fa, _fb)) goto loc_00316410; /* jb: below (unsigned <) */

loc_003163D0: ;
    PUSH32(esp, esi);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    esi = eax + 0x34;
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
    PUSH32(esp, 8);
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
    POP32(esp, ecx);
    POP32(esp, edi);
    eax = edx + 2;
    POP32(esp, esi);

loc_003163F0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x20 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003163FA; /* jae: above or equal (unsigned >=) */

loc_003163F5: ;
    MEM8(eax) = 0;
    goto loc_003163FD;

loc_003163FA: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003163FD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003163F0; /* jne: not equal / not zero */

loc_00316401: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031640A; /* jne: not equal / not zero */

loc_00316405: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0x3F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 0x3F (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316410; /* je: equal / zero */

loc_0031640A: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00281CCF(); return; /* tail jmp 0x00281CCF */

loc_00316410: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00316412
 * Original: 0x00316412 - 0x00316436 (36 bytes, 17 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316412(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00316412: ;
    eax = ecx;
    ecx = MEM32(eax + 0x66);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    esi = eax + 0x34;
    edi = eax + 0x14;
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
    g_seh_ebp = ebp; sub_00281CCF(); return; /* tail jmp 0x00281CCF */

}

/**
 * sub_00316436
 * Original: 0x00316436 - 0x00316463 (45 bytes, 20 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316436(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00316436: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ecx + 4));
    esi = edx;
    edi = MEM32(esi + 0xC);
    PUSH32(esp, 0x00316445u); RECOMP_ABI_CALL(0x003189D6u, sub_003189D6); /* call 0x003189D6 */

loc_00316445: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00316460; /* je: equal / zero */

loc_0031644B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C794); PUSH32(esp, 0x00316456u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316450u); } /* indirect call */
    }

loc_00316456: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x31C7B8)); return; /* indirect tail jmp */

loc_00316460: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00316463
 * Original: 0x00316463 - 0x003164C9 (102 bytes, 31 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316463(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316463: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(MEM8(eax + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA2), 1 (8-bit) */
    ecx = MEM32(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_003164B0; /* jne: not equal / not zero */

loc_00316477: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003164B0; /* jne: not equal / not zero */

loc_0031647D: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003164A7; /* jl: less (signed <) */

loc_00316487: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi) = 0x18;
    MEM8(esi + 1) = 5;
    eax = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = 4;
    ecx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003164A7u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_003164A7: ;
    MEM32(esi + 4) = 0xC0000004u;
    goto loc_003164BB;

loc_003164B0: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi + 4) = 0x80000700u;

loc_003164BB: ;
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0x003164C4u); RECOMP_ABI_CALL(0x00316436u, sub_00316436); /* call 0x00316436 */

loc_003164C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003164C9
 * Original: 0x003164C9 - 0x003164DA (17 bytes, 5 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003164C9(void)
{

loc_003164C9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    { uint32_t _icall_target = MEM32(0x31C794); PUSH32(esp, 0x003164D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003164D1u); } /* indirect call */
    }

loc_003164D7: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003164DA
 * Original: 0x003164DA - 0x00316527 (77 bytes, 35 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: crt
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003164DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003164DA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x31C798);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    ebx = edx;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -12) = 0xFFF85EE0u;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00316507u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316505u); } /* indirect call */
    }

loc_00316507: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00316520; /* jne: not equal / not zero */

loc_0031650E: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00316517u); RECOMP_ABI_CALL(0x003189A4u, sub_003189A4); /* call 0x003189A4 */

loc_00316517: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00316520u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031651Eu); } /* indirect call */
    }

loc_00316520: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00316527
 * Original: 0x00316527 - 0x003165B1 (138 bytes, 47 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316527(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316527: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347A48);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x00316535u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031652Fu); } /* indirect call */
    }

loc_00316535: ;
    esi = MEM32(esp + 0x14);
    edi = esi + 0xA;
    edx = edi;
    SET_LO8(ecx, 2);
    PUSH32(esp, 0x00316545u); RECOMP_ABI_CALL(0x00315D36u, sub_00315D36); /* call 0x00315D36 */

loc_00316545: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00316586; /* je: equal / zero */

loc_0031654B: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x00316552u); RECOMP_ABI_CALL(0x00318B2Cu, sub_00318B2C); /* call 0x00318B2C */

loc_00316552: ;
    edx = eax;
    ecx = ebx;
    PUSH32(esp, 0x0031655Bu); RECOMP_ABI_CALL(0x003160B4u, sub_003160B4); /* call 0x003160B4 */

loc_0031655B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00316586; /* jne: not equal / not zero */

loc_0031655F: ;
    ecx = MEM32(esi);
    MEM8(esi + 0xB) = LO8(eax);
    SET_LO8(eax, MEM8(edi));
    MEM32(esi + 0xE) = ebx;
    MEM8(esi + 0xC) = 8;
    MEM8(esi + 0xD) = 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00316577u); RECOMP_ABI_CALL(0x003189CCu, sub_003189CC); /* call 0x003189CC */

loc_00316577: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00316580u); RECOMP_ABI_CALL(0x0031826Au, sub_0031826A); /* call 0x0031826A */

loc_00316580: ;
    MEM8(esi + 4) = MEM8(esi + 4) | 8;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_003165AB;

loc_00316586: ;
    edi = MEM32(esi);
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(0x3479F2) = MEM16(0x3479F2) - 1;
    _fa = (uint32_t)(MEM16(0x3479F2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0031659Fu); RECOMP_ABI_CALL(0x003189BBu, sub_003189BB); /* call 0x003189BB */

loc_0031659F: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    PUSH32(esp, 0x003165ABu); RECOMP_ABI_CALL(0x0031826Au, sub_0031826A); /* call 0x0031826A */

loc_003165AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003165B1
 * Original: 0x003165B1 - 0x0031664E (157 bytes, 58 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003165B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003165B1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347A48);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x003165C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003165BAu); } /* indirect call */
    }

loc_003165C0: ;
    esi = MEM32(esp + 0x18);
    ebp = esi + 0xA;
    edx = ebp;
    SET_LO8(ecx, 4);
    PUSH32(esp, 0x003165D0u); RECOMP_ABI_CALL(0x00315D36u, sub_00315D36); /* call 0x00315D36 */

loc_003165D0: ;
    edi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00316624; /* je: equal / zero */

loc_003165D8: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x003165DFu); RECOMP_ABI_CALL(0x00318B2Cu, sub_00318B2C); /* call 0x00318B2C */

loc_003165DF: ;
    edx = eax;
    ecx = edi;
    PUSH32(esp, 0x003165E8u); RECOMP_ABI_CALL(0x003160B4u, sub_003160B4); /* call 0x003160B4 */

loc_003165E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00316624; /* jne: not equal / not zero */

loc_003165EC: ;
    SET_LO8(ecx, MEM8(esi + 6));
    MEM32(esi + 0xE) = edi;
    MEM8(esi + 0xB) = LO8(ebx);
    eax = MEM32(edi + 8);
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00316603; /* jae: above or equal (unsigned >=) */

loc_003165FE: ;
    MEM8(esi + 0xC) = LO8(ecx);
    goto loc_00316606;

loc_00316603: ;
    MEM8(esi + 0xC) = LO8(eax);

loc_00316606: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebp));
    MEM8(esi + 0xD) = LO8(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00316616u); RECOMP_ABI_CALL(0x003189CCu, sub_003189CC); /* call 0x003189CC */

loc_00316616: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031661Eu); RECOMP_ABI_CALL(0x0031826Au, sub_0031826A); /* call 0x0031826A */

loc_0031661E: ;
    MEM8(esi + 4) = MEM8(esi + 4) | 8;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00316647;

loc_00316624: ;
    edi = MEM32(esi);
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi) = ebx;
    MEM16(0x3479F2) = MEM16(0x3479F2) - 1;
    _fa = (uint32_t)(MEM16(0x3479F2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0031663Bu); RECOMP_ABI_CALL(0x003189BBu, sub_003189BB); /* call 0x003189BB */

loc_0031663B: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    PUSH32(esp, 0x00316647u); RECOMP_ABI_CALL(0x0031826Au, sub_0031826A); /* call 0x0031826A */

loc_00316647: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031664E
 * Original: 0x0031664E - 0x0031666C (30 bytes, 11 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031664E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031664E: ;
    edx = ecx + 0xA2;
    SET_LO8(eax, MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031666B; /* jne: not equal / not zero */

loc_0031665A: ;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x82) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x82;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    MEM8(edx) = LO8(eax);
    PUSH32(esp, 0x0031666Bu); RECOMP_ABI_CALL(0x003161C9u, sub_003161C9); /* call 0x003161C9 */

loc_0031666B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031666C
 * Original: 0x0031666C - 0x003166F0 (132 bytes, 38 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031666C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031666C: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(edx + 8);
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(ecx + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xA2), 1 (8-bit) */
    ecx = MEM32(esp + 4);
    if (TEST_NZ(_fa, _fb)) goto loc_00316688; /* jne: not equal / not zero */

loc_00316682: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031668F; /* je: equal / zero */

loc_00316688: ;
    MEM32(ecx + 4) = 0x80000700u;

loc_0031668F: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000004u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0xC0000004u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003166E8; /* jne: not equal / not zero */

loc_00316698: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), 0x41 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003166E8; /* jne: not equal / not zero */

loc_0031669E: ;
    MEM32(ecx + 0xC) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM8(ecx) = 0x30;
    MEM8(ecx + 1) = 0x40;
    MEM32(ecx + 8) = 0x316463;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x14) = edx;
    MEM8(ecx + 0x1C) = LO8(edx);
    MEM8(ecx + 0x1D) = LO8(edx);
    MEM8(ecx + 0x1E) = LO8(edx);
    MEM8(ecx + 0x28) = 2;
    MEM8(ecx + 0x29) = 1;
    MEM16(ecx + 0x2A) = LO16(edx);
    SET_LO16(esi, ZX8(MEM8(eax + 9)));
    MEM16(ecx + 0x2C) = LO16(esi);
    MEM16(ecx + 0x2E) = LO16(edx);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x003166E5u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_003166E5: ;
    POP32(esp, esi);
    goto loc_003166ED;

loc_003166E8: ;
    PUSH32(esp, 0x003166EDu); RECOMP_ABI_CALL(0x00316436u, sub_00316436); /* call 0x00316436 */

loc_003166ED: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003166F0
 * Original: 0x003166F0 - 0x0031677B (139 bytes, 27 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003166F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003166F0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347A48);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x003166FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003166F6u); } /* indirect call */
    }

loc_003166FC: ;
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x347A10) = 0x30;
    MEM8(0x347A11) = 0x40;
    MEM32(0x347A18) = 0x316527;
    MEM32(0x347A1C) = esi;
    MEM32(0x347A20) = eax;
    MEM32(0x347A28) = eax;
    MEM32(0x347A24) = eax;
    MEM8(0x347A2C) = LO8(eax);
    MEM8(0x347A2D) = 1;
    MEM8(0x347A2E) = LO8(eax);
    MEM8(0x347A38) = 0x21;
    MEM8(0x347A39) = 0xA;
    MEM16(0x347A3A) = LO16(eax);
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    MEM16(0x347A3C) = LO16(ecx);
    MEM16(0x347A3E) = LO16(eax);
    PUSH32(esp, 0x0031676Bu); RECOMP_ABI_CALL(0x00316065u, sub_00316065); /* call 0x00316065 */

loc_0031676B: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x347A10);
    PUSH32(esp, 0x00316777u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00316777: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031677B
 * Original: 0x0031677B - 0x00316806 (139 bytes, 27 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031677B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031677B: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347A48);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x00316787u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316781u); } /* indirect call */
    }

loc_00316787: ;
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x347A10) = 0x30;
    MEM8(0x347A11) = 0x40;
    MEM32(0x347A18) = 0x3165B1;
    MEM32(0x347A1C) = esi;
    MEM32(0x347A20) = eax;
    MEM32(0x347A28) = eax;
    MEM32(0x347A24) = eax;
    MEM8(0x347A2C) = LO8(eax);
    MEM8(0x347A2D) = 1;
    MEM8(0x347A2E) = LO8(eax);
    MEM8(0x347A38) = 0x21;
    MEM8(0x347A39) = 0xA;
    MEM16(0x347A3A) = LO16(eax);
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    MEM16(0x347A3C) = LO16(ecx);
    MEM16(0x347A3E) = LO16(eax);
    PUSH32(esp, 0x003167F6u); RECOMP_ABI_CALL(0x00316065u, sub_00316065); /* call 0x00316065 */

loc_003167F6: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x347A10);
    PUSH32(esp, 0x00316802u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00316802: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00316806
 * Original: 0x00316806 - 0x00316841 (59 bytes, 20 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316806(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316806: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316810u); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_00316810: ;
    esi = eax;
    ecx = MEM32(esi + 0x12);
    MEM8(esi + 4) = MEM8(esi + 4) | 2;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00316836; /* je: equal / zero */

loc_0031681D: ;
    eax = MEM32(ecx + 0xA3);
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031682C; /* je: equal / zero */

loc_0031682A: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0031682Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031682Au); } /* indirect call */
    }

loc_0031682C: ;
    ecx = MEM32(esi + 0x12);
    PUSH32(esp, 0x00316834u); RECOMP_ABI_CALL(0x0031664Eu, sub_0031664E); /* call 0x0031664E */

loc_00316834: ;
    goto loc_0031683D;

loc_00316836: ;
    ecx = esi;
    PUSH32(esp, 0x0031683Du); RECOMP_ABI_CALL(0x00316091u, sub_00316091); /* call 0x00316091 */

loc_0031683D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00316841
 * Original: 0x00316841 - 0x003168D5 (148 bytes, 49 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00316841(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316841: ;
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
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x00316851u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031684Bu); } /* indirect call */
    }

loc_00316851: ;
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(esi + 0xA3);
    eax = MEM32(eax + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00316867; /* je: equal / zero */

loc_00316863: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00316867u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316865u); } /* indirect call */
    }

loc_00316867: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003168AE; /* je: equal / zero */

loc_0031686B: ;
    MEM8(esi + 0xA2) = MEM8(esi + 0xA2) | 1;
    _fa = (uint32_t)(MEM8(esi + 0xA2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = ebp + -12;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = eax;
    eax = ebp + -20;
    ecx = esi;
    MEM8(ebp + -20) = LO8(ebx);
    MEM8(ebp + -18) = 4;
    MEM32(ebp + -16) = ebx;
    MEM32(esi + 0x9E) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00316895u); RECOMP_ABI_CALL(0x0031664Eu, sub_0031664E); /* call 0x0031664E */

loc_00316895: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x0031689Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316898u); } /* indirect call */
    }

loc_0031689E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + -20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C798); PUSH32(esp, 0x003168ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003168A6u); } /* indirect call */
    }

loc_003168AC: ;
    goto loc_003168B7;

loc_003168AE: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x003168B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003168B1u); } /* indirect call */
    }

loc_003168B7: ;
    eax = MEM32(esi + 0xA3);
    MEM8(eax + 1) = MEM8(eax + 1) + 1;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x3479F8);
    MEM32(esi + 0xA7) = eax;
    MEM32(0x3479F8) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003168D5
 * Original: 0x003168D5 - 0x00316A03 (302 bytes, 100 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003168D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003168D5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    esi = edx;
    MEM32(ebp + -8) = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x003168EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003168E4u); } /* indirect call */
    }

loc_003168EA: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(ebp + -2) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003169ED; /* je: equal / zero */

loc_003168F7: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003169ED; /* jne: not equal / not zero */

loc_00316901: ;
    _fa = (uint32_t)(MEM8(edi + 0xD)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xD), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00316911; /* jne: not equal / not zero */

loc_00316906: ;
    MEM32(esi) = 0x32;
    goto loc_003169F3;

loc_00316911: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00316930; /* je: equal / zero */

loc_00316918: ;
    ecx = esi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(0x31C810));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7C0); PUSH32(esp, 0x00316929u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316923u); } /* indirect call */
    }

loc_00316929: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00316933; /* jge: greater or equal (signed >=) */

loc_0031692D: ;
    MEM32(esi + 4) = ebx;

loc_00316930: ;
    MEM32(esi + 0xC) = ebx;

loc_00316933: ;
    ecx = esi + 0x40;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0031694A; /* jne: not equal / not zero */

loc_0031693F: ;
    SET_LO8(eax, MEM8(edi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x41)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x41) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031694A; /* jae: above or equal (unsigned >=) */

loc_00316947: ;
    MEM8(esi + 0x41) = LO8(eax);

loc_0031694A: ;
    eax = MEM32(edi + 0xE);
    _fa = (uint32_t)(MEM8(eax + 0x28)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x28), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316956; /* je: equal / zero */

loc_00316953: ;
    ecx = esi + 0x42;

loc_00316956: ;
    edx = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x10), ebx (32-bit) */
    eax = esi + 0x10;
    MEM32(esi + 0x1C) = esi;
    MEM32(esi + 0x18) = 0x31666C;
    if (CMP_EQ(_fa, _fb)) goto loc_0031698E; /* je: equal / zero */

loc_0031696B: ;
    MEM8(eax) = 0x28;
    MEM8(esi + 0x11) = 0x41;
    edx = MEM32(edx + 0x10);
    MEM32(esi + 0x28) = ecx;
    ecx = ZX8(MEM8(esi + 0x41));
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x24) = ecx;
    MEM8(esi + 0x2C) = 1;
    MEM8(esi + 0x2D) = LO8(ebx);
    MEM8(esi + 0x2E) = LO8(ebx);
    goto loc_003169D5;

loc_0031698E: ;
    MEM32(esi + 0x28) = ecx;
    SET_LO8(ecx, MEM8(esi + 0x41));
    edx = ZX8(LO8(ecx));
    MEM32(esi + 0x24) = edx;
    SET_LO16(edx, ZX8(MEM8(ebp + -1)));
    SET_LO16(edx, LO16(edx) | 0x200);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM8(eax) = 0x30;
    MEM8(esi + 0x11) = 0x40;
    MEM32(esi + 0x20) = ebx;
    MEM8(esi + 0x2C) = 1;
    MEM8(esi + 0x2D) = LO8(ebx);
    MEM8(esi + 0x2E) = LO8(ebx);
    MEM8(esi + 0x38) = 0x21;
    MEM8(esi + 0x39) = 9;
    MEM16(esi + 0x3A) = LO16(edx);
    SET_LO16(edx, ZX8(MEM8(edi + 5)));
    SET_LO16(ecx, ZX8(LO8(ecx)));
    MEM16(esi + 0x3C) = LO16(edx);
    MEM16(esi + 0x3E) = LO16(ecx);

loc_003169D5: ;
    ecx = MEM32(ebp + -8);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003169E3u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_003169E3: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003169E9u); RECOMP_ABI_CALL(0x003189D6u, sub_003189D6); /* call 0x003189D6 */

loc_003169E9: ;
    MEM32(esi) = eax;
    goto loc_003169F3;

loc_003169ED: ;
    MEM32(esi) = 0x48F;

loc_003169F3: ;
    SET_LO8(ecx, MEM8(ebp + -2));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x003169FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003169F6u); } /* indirect call */
    }

loc_003169FC: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00316A03
 * Original: 0x00316A03 - 0x00316AE1 (222 bytes, 55 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316A03(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316A03: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    PUSH32(esp, 0x00316A0Fu); RECOMP_ABI_CALL(0x00318AB0u, sub_00318AB0); /* call 0x00318AB0 */

loc_00316A0F: ;
    SET_LO8(ecx, MEM8(eax + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00316AB6; /* jne: not equal / not zero */

loc_00316A1B: ;
    _fa = (uint32_t)(MEM8(eax + 7)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 7), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00316A9A; /* jne: not equal / not zero */

loc_00316A21: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x347A10) = 0x30;
    MEM8(0x347A11) = 0x40;
    MEM32(0x347A18) = 0x3166F0;
    MEM32(0x347A1C) = esi;
    MEM32(0x347A20) = eax;
    MEM32(0x347A28) = eax;
    MEM32(0x347A24) = eax;
    MEM8(0x347A2C) = LO8(eax);
    MEM8(0x347A2D) = 1;
    MEM8(0x347A2E) = LO8(eax);
    MEM8(0x347A38) = 0x21;
    MEM8(0x347A39) = 0xB;
    MEM16(0x347A3A) = LO16(eax);
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    MEM16(0x347A3C) = LO16(ecx);
    MEM16(0x347A3E) = LO16(eax);
    PUSH32(esp, 0x00316A8Cu); RECOMP_ABI_CALL(0x00316065u, sub_00316065); /* call 0x00316065 */

loc_00316A8C: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x347A10);
    PUSH32(esp, 0x00316A98u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00316A98: ;
    goto loc_00316ADD;

loc_00316A9A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00316AB6; /* jne: not equal / not zero */

loc_00316A9F: ;
    _fa = (uint32_t)(MEM8(eax + 7)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 7), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00316AB6; /* jne: not equal / not zero */

loc_00316AA5: ;
    PUSH32(esp, 0x00316AAAu); RECOMP_ABI_CALL(0x00316065u, sub_00316065); /* call 0x00316065 */

loc_00316AAA: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00316AB4u); RECOMP_ABI_CALL(0x0031677Bu, sub_0031677B); /* call 0x0031677B */

loc_00316AB4: ;
    goto loc_00316ADD;

loc_00316AB6: ;
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM16(0x3479F2) = MEM16(0x3479F2) - 1;
    _fa = (uint32_t)(MEM16(0x3479F2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00316AD0u); RECOMP_ABI_CALL(0x003189BBu, sub_003189BB); /* call 0x003189BB */

loc_00316AD0: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    PUSH32(esp, 0x00316ADCu); RECOMP_ABI_CALL(0x0031826Au, sub_0031826A); /* call 0x0031826A */

loc_00316ADC: ;
    POP32(esp, edi);

loc_00316ADD: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00316AE1
 * Original: 0x00316AE1 - 0x00316BD5 (244 bytes, 72 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316AE1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316AE1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347A48);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x00316AEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316AE9u); } /* indirect call */
    }

loc_00316AEF: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00316BC5; /* jl: less (signed <) */

loc_00316AFE: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00316BC5; /* jb: below (unsigned <) */

loc_00316B08: ;
    _fa = (uint32_t)(MEM8(0x3479FC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3479FC), 8 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00316BC5; /* jb: below (unsigned <) */

loc_00316B15: ;
    _fa = (uint32_t)(MEM8(0x3479FD)) & 0xFFu; _fb = (uint32_t)(0x42) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3479FD), 0x42 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00316BC5; /* jne: not equal / not zero */

loc_00316B22: ;
    _fa = (uint32_t)(MEM16(0x3479FE)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x3479FE), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00316BC5; /* je: equal / zero */

loc_00316B2F: ;
    esi = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(0x347A00));
    edi = esi + 0xA;
    edx = edi;
    PUSH32(esp, 0x00316B43u); RECOMP_ABI_CALL(0x00315D36u, sub_00315D36); /* call 0x00315D36 */

loc_00316B43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0xE) = eax;
    SET_LO8(ecx, MEM8(0x347A01));
    MEM8(esi + 0xB) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x347A02));
    MEM8(esi + 0xC) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x347A03));
    MEM8(esi + 0xD) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00316BA0; /* je: equal / zero */

loc_00316B65: ;
    SET_LO8(eax, MEM8(0x347A02));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00316BA0; /* jb: below (unsigned <) */

loc_00316B6E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00316BA0; /* ja: above (unsigned >) */

loc_00316B72: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 6) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00316BA0; /* ja: above (unsigned >) */

loc_00316B7A: ;
    _fa = (uint32_t)(MEM8(esi + 9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 9), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00316B86; /* je: equal / zero */

loc_00316B7F: ;
    SET_LO8(eax, LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 7)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 7) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00316BA0; /* ja: above (unsigned >) */

loc_00316B86: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00316B92u); RECOMP_ABI_CALL(0x003189CCu, sub_003189CC); /* call 0x003189CC */

loc_00316B92: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00316B9Au); RECOMP_ABI_CALL(0x0031826Au, sub_0031826A); /* call 0x0031826A */

loc_00316B9A: ;
    MEM8(esi + 4) = MEM8(esi + 4) | 8;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00316BCF;

loc_00316BA0: ;
    edi = MEM32(esi);
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi) = ebx;
    MEM16(0x3479F2) = MEM16(0x3479F2) - 1;
    _fa = (uint32_t)(MEM16(0x3479F2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00316BB7u); RECOMP_ABI_CALL(0x003189BBu, sub_003189BB); /* call 0x003189BB */

loc_00316BB7: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    PUSH32(esp, 0x00316BC3u); RECOMP_ABI_CALL(0x0031826Au, sub_0031826A); /* call 0x0031826A */

loc_00316BC3: ;
    goto loc_00316BCF;

loc_00316BC5: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00316BCFu); RECOMP_ABI_CALL(0x00316A03u, sub_00316A03); /* call 0x00316A03 */

loc_00316BCF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00316BD5
 * Original: 0x00316BD5 - 0x00316E25 (592 bytes, 182 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00316BD5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00316BD5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = edx;
    MEM32(ebp + -16) = esi;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(eax) = ebx;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x00316BF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316BF2u); } /* indirect call */
    }

loc_00316BF8: ;
    edx = edi;
    ecx = esi;
    MEM8(ebp + -1) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00316C04u); RECOMP_ABI_CALL(0x003160B4u, sub_003160B4); /* call 0x003160B4 */

loc_00316C04: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -20) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00316C19; /* jne: not equal / not zero */

loc_00316C0D: ;
    MEM32(ebp + -8) = 0x48F;
    goto loc_00316E04;

loc_00316C19: ;
    _fa = (uint32_t)(MEM32(edx + 0x12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x12), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00316C2A; /* je: equal / zero */

loc_00316C1E: ;
    MEM32(ebp + -8) = 0x20;
    goto loc_00316E04;

loc_00316C2A: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00316C3D; /* jne: not equal / not zero */

loc_00316C31: ;
    MEM32(ebp + -8) = 0xE;
    goto loc_00316E04;

loc_00316C3D: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + 1) = LO8(eax);
    ebx = MEM32(0x3479F8);
    eax = MEM32(ebx + 0xA7);
    MEM32(0x3479F8) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x2A);
    POP32(esp, ecx);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    edi = MEM32(ebp + 0xC);
    SET_LO8(ecx, MEM8(ebx + 0xA2));
    MEM32(ebx) = edx;
    MEM32(ebx + 0xA3) = esi;
    SET_LO8(eax, MEM8(edi));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0xE7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if (3) _cf = (int)(((LO8(eax)) >> (8 - (3))) & 1);
    SET_LO8(eax, LO8(eax) << 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebx + 0xA2) = LO8(eax);
    MEM32(edx + 0x12) = ebx;
    edx = edi;
    ecx = ebx;
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -12) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00316C98u); RECOMP_ABI_CALL(0x0031611Eu, sub_0031611E); /* call 0x0031611E */

loc_00316C98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00316DFB; /* jl: less (signed <) */

loc_00316CA0: ;
    edx = MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00316CB9; /* je: equal / zero */

loc_00316CA7: ;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = edx; PUSH32(esp, 0x00316CABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316CA9u); } /* indirect call */
    }

loc_00316CAB: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80000100u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80000100u)) >> 32) & 1);
    eax = eax + 0x80000100u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00316CB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00316DFB; /* jl: less (signed <) */

loc_00316CC1: ;
    esi = MEM32(esi + 8);
    ecx = ZX8(MEM8(esi));
    esi = MEM32(esi + 1);
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx + 0x34;
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
    PUSH32(esp, 7);
    esi = eax;
    eax = MEM32(ebp + -16);
    edi = ebx + 0x14;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    _fa = (uint32_t)(MEM8(eax + 0x28)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x28), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = MEM32(ebp + -20);
    if (TEST_NZ(_fa, _fb)) goto loc_00316DA8; /* jne: not equal / not zero */

loc_00316CF9: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -32;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -32) = eax;
    eax = ZX8(MEM8(esi + 0xC));
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0x62) = MEM32(ebx + 0x62) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x62)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -40;
    MEM32(ebx + 0x5E) = ecx;
    ecx = ebx + 0x32;
    edi = ebx + 0x52;
    MEM8(edi) = 0x30;
    MEM8(ebx + 0x53) = 0x40;
    MEM32(ebx + 0x5A) = 0x3164C9;
    MEM32(ebx + 0x6A) = ecx;
    MEM32(ebx + 0x66) = eax;
    MEM8(ebx + 0x6E) = 2;
    MEM8(ebx + 0x6F) = 1;
    MEM8(ebx + 0x70) = 0;
    MEM8(ebx + 0x7A) = 0xA1;
    MEM8(ebx + 0x7B) = 1;
    MEM16(ebx + 0x7C) = 0x100;
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    MEM16(ebx + 0x7E) = LO16(ecx);
    MEM16(ebx + 0x80) = LO16(eax);
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    MEM8(ebp + -40) = 1;
    MEM8(ebp + -38) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00316D68u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00316D68: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x00316D71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316D6Bu); } /* indirect call */
    }

loc_00316D71: ;
    ecx = MEM32(esi);
    eax = ebp + -40;
    PUSH32(esp, eax);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00316D7Eu); RECOMP_ABI_CALL(0x003164DAu, sub_003164DA); /* call 0x003164DA */

loc_00316D7E: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x00316D84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316D7Eu); } /* indirect call */
    }

loc_00316D84: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00316C0D; /* je: equal / zero */

loc_00316D90: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00316C0D; /* jne: not equal / not zero */

loc_00316D9A: ;
    _fa = (uint32_t)(MEM32(ebx + 0x56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x56), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00316DA8; /* jl: less (signed <) */

loc_00316DA0: ;
    eax = MEM32(ebp + -16);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00316DA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316DA5u); } /* indirect call */
    }

loc_00316DA8: ;
    ecx = MEM32(ebx + 0xC);
    MEM32(ebx + 0x62) = ecx;
    ecx = ebx + 0x32;
    eax = ebx + 0x52;
    MEM8(eax) = 0x28;
    MEM8(ebx + 0x53) = 0x41;
    MEM32(ebx + 0x5A) = 0x31627A;
    MEM32(ebx + 0x5E) = ebx;
    MEM32(ebx + 0x6A) = ecx;
    ecx = ZX8(MEM8(esi + 0xC));
    MEM32(ebx + 0x66) = ecx;
    MEM8(ebx + 0x6E) = 2;
    MEM8(ebx + 0x6F) = 1;
    MEM8(ebx + 0x70) = 0;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 4) = MEM8(esi + 4) & 0xF;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebx + 0xA2)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xA2), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00316DF0; /* je: equal / zero */

loc_00316DE8: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00316DF0u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00316DF0: ;
    eax = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ebx;
    goto loc_00316E04;

loc_00316DFB: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00316E01u); RECOMP_ABI_CALL(0x003189D6u, sub_003189D6); /* call 0x003189D6 */

loc_00316E01: ;
    MEM32(ebp + -8) = eax;

loc_00316E04: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x00316E0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316E07u); } /* indirect call */
    }

loc_00316E0D: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00316E1E; /* je: equal / zero */

loc_00316E16: ;
    ecx = MEM32(ebp + -24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00316E1Eu); RECOMP_ABI_CALL(0x00316841u, sub_00316841); /* call 0x00316841 */

loc_00316E1E: ;
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00316E25
 * Original: 0x00316E25 - 0x00316F79 (340 bytes, 91 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316E25(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316E25: ;
    SET_LO16(eax, MEM16(0x3479F2));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x3479F0)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(0x3479F0) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00316F67; /* jae: above or equal (unsigned >=) */

loc_00316E3D: ;
    eax = MEM32(0x3479F4);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316E57; /* je: equal / zero */

loc_00316E48: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(LO8(ecx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16);
    _fa = (uint32_t)(MEM8(edx + eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + eax + 4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00316E48; /* jne: not equal / not zero */

loc_00316E57: ;
    MEM16(0x3479F2) = MEM16(0x3479F2) + 1;
    _fa = (uint32_t)(MEM16(0x3479F2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = ZX8(LO8(ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x16);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x347A40) = LO8(ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00316E7Au); RECOMP_ABI_CALL(0x003189BBu, sub_003189BB); /* call 0x003189BB */

loc_00316E7A: ;
    SET_LO8(eax, MEM8(esi + 4));
    SET_LO8(eax, LO8(eax) & 0xF1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = edi;
    MEM32(esi) = edi;
    MEM8(esi + 4) = LO8(eax);
    PUSH32(esp, 0x00316E8Du); RECOMP_ABI_CALL(0x003189C8u, sub_003189C8); /* call 0x003189C8 */

loc_00316E8D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    ecx = edi;
    MEM8(esi + 5) = LO8(eax);
    MEM32(esi + 0x12) = ebx;
    PUSH32(esp, 0x00316E9Fu); RECOMP_ABI_CALL(0x00318AB6u, sub_00318AB6); /* call 0x00318AB6 */

loc_00316E9F: ;
    SET_LO8(ecx, MEM8(eax + 2));
    PUSH32(esp, ebx);
    MEM8(esi + 8) = LO8(ecx);
    SET_LO8(eax, MEM8(eax + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    ecx = edi;
    MEM8(esi + 6) = LO8(eax);
    PUSH32(esp, 0x00316EB6u); RECOMP_ABI_CALL(0x00318AB6u, sub_00318AB6); /* call 0x00318AB6 */

loc_00316EB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00316EC8; /* je: equal / zero */

loc_00316EBA: ;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(esi + 9) = LO8(ecx);
    SET_LO8(eax, MEM8(eax + 4));
    MEM8(esi + 7) = LO8(eax);
    goto loc_00316ECE;

loc_00316EC8: ;
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 7) = LO8(ebx);

loc_00316ECE: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM8(0x347A10) = 0x30;
    MEM8(0x347A11) = 0x40;
    MEM32(0x347A18) = 0x316AE1;
    MEM32(0x347A1C) = esi;
    MEM32(0x347A20) = ebx;
    MEM32(0x347A28) = 0x3479FC;
    MEM32(0x347A24) = eax;
    MEM8(0x347A2C) = 2;
    MEM8(0x347A2D) = 1;
    MEM8(0x347A2E) = LO8(ebx);
    MEM8(0x347A38) = 0xC1;
    MEM8(0x347A39) = 6;
    MEM16(0x347A3A) = 0x4200;
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    PUSH32(esp, 0x316080);
    PUSH32(esp, 0x347A70);
    MEM16(0x347A3C) = LO16(ecx);
    MEM16(0x347A3E) = LO16(eax);
    { uint32_t _icall_target = MEM32(0x31C7A8); PUSH32(esp, 0x00316F52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316F4Cu); } /* indirect call */
    }

loc_00316F52: ;
    PUSH32(esp, 0x00316F57u); RECOMP_ABI_CALL(0x00316065u, sub_00316065); /* call 0x00316065 */

loc_00316F57: ;
    PUSH32(esp, 0x347A10);
    ecx = edi;
    PUSH32(esp, 0x00316F63u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00316F63: ;
    POP32(esp, edi);
    POP32(esp, esi);
    goto loc_00316F75;

loc_00316F67: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x80000100u);
    PUSH32(esp, 0x00316F75u); RECOMP_ABI_CALL(0x0031826Au, sub_0031826A); /* call 0x0031826A */

loc_00316F75: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00316F79
 * Original: 0x00316F79 - 0x00316F99 (32 bytes, 13 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00316F79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00316F79: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ebp + 0xB));
    MEM8(ebp + -4) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0xA));
    MEM8(ebp + -3) = LO8(eax);
    eax = MEM32(ebp + 8);
    MEM8(ebp + -2) = HI8(eax);
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00316F99
 * Original: 0x00316F99 - 0x00316FF3 (90 bytes, 33 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00316F99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316F99: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x18);
    ebx = 0x103;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x00316FB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316FAAu); } /* indirect call */
    }

loc_00316FB0: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 6 (8-bit) */
    ecx = MEM32(ebp + 0xC);
    MEM8(ebp + 0xB) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_00316FD0; /* je: equal / zero */

loc_00316FBC: ;
    eax = 0xC000009Du;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ebx = eax;
    MEM32(ecx + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C818); PUSH32(esp, 0x00316FCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316FC8u); } /* indirect call */
    }

loc_00316FCE: ;
    goto loc_00316FE1;

loc_00316FD0: ;
    eax = MEM32(ecx + 0x5C);
    MEM8(eax + 3) = MEM8(eax + 3) | 1;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C814); PUSH32(esp, 0x00316FE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316FDBu); } /* indirect call */
    }

loc_00316FE1: ;
    SET_LO8(ecx, MEM8(ebp + 0xB));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x00316FEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00316FE4u); } /* indirect call */
    }

loc_00316FEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00316FF3
 * Original: 0x00316FF3 - 0x00317033 (64 bytes, 21 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316FF3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316FF3: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + 0x10) = eax;
    ecx = 0xC0000000u;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    eax = MEM32(esi + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_00317016; /* jne: not equal / not zero */

loc_00317010: ;
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0031701C;

loc_00317016: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(eax + 0x14) = ecx;

loc_0031701C: ;
    ecx = MEM32(esi + 0x10);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C818); PUSH32(esp, 0x00317027u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317021u); } /* indirect call */
    }

loc_00317027: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = MEM32(0x31C81C); PUSH32(esp, 0x0031702Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317029u); } /* indirect call */
    }

loc_0031702F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00317033
 * Original: 0x00317033 - 0x0031704F (28 bytes, 10 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317033(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317033: ;
    eax = MEM32(0x3449E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3449E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3449E4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031704E; /* je: equal / zero */

loc_0031703F: ;
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0031704Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031704Bu); } /* indirect call */
    }

loc_0031704E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031704F
 * Original: 0x0031704F - 0x00317076 (39 bytes, 18 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031704F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031704F: ;
    eax = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00317075; /* jbe: below or equal (unsigned <=) */

loc_00317058: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0031705A: ;
    edi = MEM32(eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    POP32(esp, ecx);
    esi = 0x31C740;
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0031705A; /* jb: below (unsigned <) */

loc_00317073: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00317075: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00317076
 * Original: 0x00317076 - 0x00317090 (26 bytes, 11 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00317076(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317076: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031708B; /* jbe: below or equal (unsigned <=) */

loc_0031707F: ;
    ecx = eax + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031708B; /* jne: not equal / not zero */

loc_00317086: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0031708D;

loc_0031708B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031708D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00317090
 * Original: 0x00317090 - 0x003170A6 (22 bytes, 10 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317090: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00317095: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 4), ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003170A3; /* jne: not equal / not zero */

loc_0031709B: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00317095; /* jb: below (unsigned <) */

loc_003170A3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003170A6
 * Original: 0x003170A6 - 0x0031728C (486 bytes, 139 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003170A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003170A6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0x10);
    eax = MEM32(ecx + 0x5C);
    PUSH32(esp, esi);
    MEM32(ebp + -12) = eax;
    eax = 0xC0000000u;
    esi = edx;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x28);
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003170E3; /* jne: not equal / not zero */

loc_003170D4: ;
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebx + 0x10);
    MEM32(eax + 0x10) = edx;
    goto loc_00317258;

loc_003170E3: ;
    SET_LO16(eax, MEM16(edi + 6));
    PUSH32(esp, MEM32(edi));
    MEM8(ebp + 0xA) = HI8(eax);
    MEM8(ebp + 0xB) = LO8(eax);
    SET_LO16(eax, MEM16(edi + 4));
    ecx = ZX16(MEM16(ebp + 0xA));
    MEM8(ebp + 0xE) = HI8(eax);
    MEM8(ebp + 0xF) = LO8(eax);
    esi = ZX16(MEM16(ebp + 0xE));
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00317109u); RECOMP_ABI_CALL(0x00316F79u, sub_00316F79); /* call 0x00316F79 */

loc_00317109: ;
    ecx = ZX16(MEM16(ebp + 0xA));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = eax;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -16) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00317122; /* jne: not equal / not zero */

loc_0031711D: ;
    esi = 0x2000;

loc_00317122: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00317128u); RECOMP_ABI_CALL(0x00317076u, sub_00317076); /* call 0x00317076 */

loc_00317128: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317279; /* je: equal / zero */

loc_00317130: ;
    edx = ZX16(MEM16(ebp + 0xA));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00317279; /* ja: above (unsigned >) */

loc_00317140: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x4000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00317279; /* ja: above (unsigned >) */

loc_0031714C: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0xFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(esi), 0xFFF (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00317279; /* jne: not equal / not zero */

loc_00317157: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317279; /* je: equal / zero */

loc_00317162: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00317279; /* jb: below (unsigned <) */

loc_0031716D: ;
    if (CMP_A(_fa, _fb)) goto loc_00317178; /* ja: above (unsigned >) */

loc_0031716F: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00317279; /* jb: below (unsigned <) */

loc_00317178: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00317279; /* ja: above (unsigned >) */

loc_00317181: ;
    if (CMP_B(_fa, _fb)) goto loc_0031718D; /* jb: below (unsigned <) */

loc_00317183: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00317279; /* ja: above (unsigned >) */

loc_0031718D: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, edx);
    MEM32(ebx + 0x160) = ecx;
    MEM32(ebx + 0x164) = eax;
    MEM32(ebx + 0x168) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003171A8u); RECOMP_ABI_CALL(0x00317090u, sub_00317090); /* call 0x00317090 */

loc_003171A8: ;
    eax = ZX8(LO8(eax));
    MEM32(ebx + 0x158) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -16));
    MEM32(ebx + 0x148) = 0xC;
    PUSH32(esp, MEM32(ebp + -20));
    edi = ebx + 0x140;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003171D0u); RECOMP_ABI_CALL(0x0028A900u, sub_0028A900); /* call 0x0028A900 */

loc_003171D0: ;
    MEM32(edi) = eax;
    eax = MEM32(ebp + -12);
    esi = esi >> 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 4) = edx;
    MEM32(ebx + 0x14C) = 1;
    MEM32(ebx + 0x150) = esi;
    MEM32(ebx + 0x154) = 0x1000;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317237; /* je: equal / zero */

loc_003171FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74004) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x74004 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317255; /* jne: not equal / not zero */

loc_00317206: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax + 0x30);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 8);
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 0x160);
    MEM32(edx + 8) = eax;
    eax = MEM32(ebx + 0x164);
    MEM32(edx + 0xC) = eax;
    MEM8(edx + 0x1A) = 1;
    eax = MEM32(ebx + 0x10);
    MEM32(eax + 0x14) = 0x20;
    goto loc_0031724E;

loc_00317237: ;
    eax = MEM32(ebp + -4);
    PUSH32(esp, 6);
    esi = edi;
    edi = MEM32(eax + 0x30);
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
    eax = MEM32(ebx + 0x10);
    MEM32(eax + 0x14) = 0x18;

loc_0031724E: ;
    eax = MEM32(ebx + 0x10);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00317255: ;
    edi = MEM32(ebp + -8);

loc_00317258: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C820); PUSH32(esp, 0x0031725Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317259u); } /* indirect call */
    }

loc_0031725F: ;
    ecx = MEM32(ebx + 0x10);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C818); PUSH32(esp, 0x0031726Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317264u); } /* indirect call */
    }

loc_0031726A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx));
    { uint32_t _icall_target = MEM32(0x31C81C); PUSH32(esp, 0x00317272u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031726Cu); } /* indirect call */
    }

loc_00317272: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_00317279: ;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebx + 0x10);
    MEM32(eax + 0x10) = 0xC000014Fu;
    goto loc_00317258;

}

/**
 * sub_0031728C
 * Original: 0x0031728C - 0x0031730D (129 bytes, 48 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031728C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031728C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(edx + 0x5C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    MEM8(esi + 0x4F) = 0x2F;
    ecx = MEM32(esi + 0x158);
    eax = MEM32(edi);
    edx = MEM32(edi + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003172AFu); RECOMP_ABI_CALL(0x0028A970u, sub_0028A970); /* call 0x0028A970 */

loc_003172AF: ;
    ecx = MEM32(esi + 0x158);
    ebx = MEM32(edi + 8);
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = 0x316FF3;
    ebx = ebx >> LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(ecx, MEM16(edi + 0xA));
    SET_LO16(ecx, (uint32_t)((int32_t)LO16(ecx) * (int32_t)0x64));
    MEM16(esi + 0x34) = LO16(ecx);
    ecx = esi + 0x4F;
    MEM8(esi + 0x37) = LO8(eax);
    MEM8(esi + 0x36) = 2;
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, edx);
    MEM8(ecx) = 0x2F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003172F0u); RECOMP_ABI_CALL(0x00316F79u, sub_00316F79); /* call 0x00316F79 */

loc_003172F0: ;
    MEM32(esi + 0x51) = eax;
    MEM8(ebp + -4) = HI8(ebx);
    MEM8(ebp + -3) = LO8(ebx);
    SET_LO16(eax, MEM16(ebp + -4));
    ecx = esi;
    MEM16(esi + 0x56) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00317308u); RECOMP_ABI_CALL(0x003195CAu, sub_003195CA); /* call 0x003195CA */

loc_00317308: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0031730D
 * Original: 0x0031730D - 0x003173DB (206 bytes, 72 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031730D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031730D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x28);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_003173CD; /* jae: above or equal (unsigned >=) */

loc_0031732A: ;
    edx = edi;
    _fb = (uint32_t)(0x31C740) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x31C740;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(ebp + -12) = edx;
    PUSH32(esp, esi);

loc_00317337: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46313539) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x46313539 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003173B1; /* jne: not equal / not zero */

loc_00317341: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0031735C; /* je: equal / zero */

loc_0031734A: ;
    esi = MEM32(edx + eax * 4 + 0x31C740);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x31C740)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 4 + 0x31C740) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317341; /* je: equal / zero */

loc_0031735A: ;
    goto loc_003173B1;

loc_0031735C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C828); PUSH32(esp, 0x00317363u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031735Du); } /* indirect call */
    }

loc_00317363: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    ebx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00317375; /* jl: less (signed <) */

loc_0031736E: ;
    MEM32(ebp + 0xC) = 0xC000003Eu;

loc_00317375: ;
    eax = ebx;
    eax = eax & 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317390; /* jne: not equal / not zero */

loc_0031737E: ;
    esi = ebx;
    esi = esi & 0xFFFFFFFDu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C824); PUSH32(esp, 0x00317390u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031738Au); } /* indirect call */
    }

loc_00317390: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    MEM32(edi + eax * 4) = 0x4C494146;
    if ((_fa != 0)) goto loc_00317390; /* jne: not equal / not zero */

loc_0031739F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003173AE; /* je: equal / zero */

loc_003173A4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C824); PUSH32(esp, 0x003173AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003173A8u); } /* indirect call */
    }

loc_003173AE: ;
    ecx = MEM32(ebp + -8);

loc_003173B1: ;
    edx = MEM32(ebp + -12);
    eax = 0x1000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(ebp + -12) = edx;
    if (CMP_B(_fa, _fb)) goto loc_00317337; /* jb: below (unsigned <) */

loc_003173C8: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003173CD: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003173D6u); RECOMP_ABI_CALL(0x00316FF3u, sub_00316FF3); /* call 0x00316FF3 */

loc_003173D6: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003173DB
 * Original: 0x003173DB - 0x003175C1 (486 bytes, 133 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003173DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003173DB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    ebx = ebx & 0xF0000000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x5C);
    MEM32(ebp + 8) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_003174B1; /* jl: less (signed <) */

loc_00317400: ;
    _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10000000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317419; /* jne: not equal / not zero */

loc_0031740E: ;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031742C; /* jne: not equal / not zero */

loc_00317414: ;
    ebx = 0x40000000;

loc_00317419: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x40000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031742C; /* jne: not equal / not zero */

loc_00317421: ;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031742C; /* jne: not equal / not zero */

loc_00317427: ;
    ebx = 0x60000000;

loc_0031742C: ;
    eax = MEM32(esi + 0xC);
    edx = 0xFFFFFFF;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20000000 (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0031756A; /* je: equal / zero */

loc_00317447: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x30000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031753E; /* je: equal / zero */

loc_00317453: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x40000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031751E; /* je: equal / zero */

loc_0031745F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x50000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003174EC; /* je: equal / zero */

loc_0031746B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x60000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003175BA; /* jne: not equal / not zero */

loc_00317477: ;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(0x3449E4);
    edx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(eax) = edx;
    MEM32(edx + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(ebp + 0xC);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(ecx + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C818); PUSH32(esp, 0x0031749Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317499u); } /* indirect call */
    }

loc_0031749F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003174A4u); RECOMP_ABI_CALL(0x00317033u, sub_00317033); /* call 0x00317033 */

loc_003174A4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = MEM32(0x31C81C); PUSH32(esp, 0x003174ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003174A6u); } /* indirect call */
    }

loc_003174AC: ;
    goto loc_003175BA;

loc_003174B1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003174C5; /* je: equal / zero */

loc_003174B9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x40000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317427; /* jne: not equal / not zero */

loc_003174C5: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000003Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xC000003Eu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317427; /* jne: not equal / not zero */

loc_003174D2: ;
    ecx = esi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003174DAu); RECOMP_ABI_CALL(0x0031704Fu, sub_0031704F); /* call 0x0031704F */

loc_003174DA: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10000000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031742C;

loc_003174EC: ;
    MEM32(esi + 0x38) = MEM32(esi + 0x38) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x37) = 6;
    eax = MEM32(esi + 0x1C);
    MEM32(esi + 0x3C) = eax;
    MEM8(esi + 0x4F) = 0x2A;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi + 0x168);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00317519: ;
    _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031758B;

loc_0031751E: ;
    MEM32(esi + 0x28) = 0x3449EC;
    eax = MEM32(esi + 0x168);
    _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esi + 0x37) = 1;
    MEM32(esi + 0x2C) = eax;
    MEM8(esi + 0x4F) = 0x28;
    eax = MEM32(edi + 0xC);
    goto loc_00317519;

loc_0031753E: ;
    eax = MEM32(esi + 0x2C);
    MEM32(esi + 0x38) = eax;
    MEM8(esi + 0x37) = 6;
    eax = esi + 0x168;
    ecx = MEM32(eax);
    MEM32(esi + 0x3C) = ecx;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x28) = ecx;
    eax = MEM32(eax);
    MEM32(esi + 0x2C) = eax;
    MEM8(esi + 0x4F) = 0x2A;
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0031758B;

loc_0031756A: ;
    MEM32(esi + 0x28) = 0x3449EC;
    eax = MEM32(esi + 0x168);
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esi + 0x37) = 1;
    MEM32(esi + 0x2C) = eax;
    MEM8(esi + 0x4F) = 0x28;
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0031758B: ;
    edi = esi + 0x158;
    ecx = MEM32(edi);
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031759Bu); RECOMP_ABI_CALL(0x00316F79u, sub_00316F79); /* call 0x00316F79 */

loc_0031759B: ;
    MEM32(esi + 0x51) = eax;
    ecx = MEM32(edi);
    eax = MEM32(esi + 0x2C);
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi;
    MEM8(ebp + 0xE) = HI8(eax);
    MEM8(ebp + 0xF) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + 0xE));
    MEM16(esi + 0x56) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003175BAu); RECOMP_ABI_CALL(0x003195CAu, sub_003195CA); /* call 0x003195CA */

loc_003175BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003175C1
 * Original: 0x003175C1 - 0x0031773C (379 bytes, 110 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003175C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003175C1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0x10);
    edx = MEM32(ebx + 0x5C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    edi = edi & 0xF0000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    MEM32(ebp + 8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_003175EA; /* jl: less (signed <) */

loc_003175E2: ;
    _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031761F;

loc_003175EA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003175FA; /* je: equal / zero */

loc_003175F2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x30000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031761A; /* jne: not equal / not zero */

loc_003175FA: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000003Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xC000003Eu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031761A; /* jne: not equal / not zero */

loc_00317603: ;
    ecx = esi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031760Bu); RECOMP_ABI_CALL(0x0031704Fu, sub_0031704F); /* call 0x0031704F */

loc_0031760B: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031761F;

loc_0031761A: ;
    edi = 0x50000000;

loc_0031761F: ;
    eax = MEM32(esi + 0xC);
    ecx = 0xFFFFFFF;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20000000 (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003176E6; /* je: equal / zero */

loc_0031763A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x30000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003176CD; /* je: equal / zero */

loc_00317646: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317696; /* je: equal / zero */

loc_0031764E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x50000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317735; /* jne: not equal / not zero */

loc_0031765A: ;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(0x3449E4);
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    eax = MEM32(edx + 4);
    MEM32(ebx + 0x14) = eax;
    eax = MEM32(ebp + 0xC);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = ebx;
    MEM32(ebx + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C818); PUSH32(esp, 0x00317684u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031767Eu); } /* indirect call */
    }

loc_00317684: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00317689u); RECOMP_ABI_CALL(0x00317033u, sub_00317033); /* call 0x00317033 */

loc_00317689: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = MEM32(0x31C81C); PUSH32(esp, 0x00317691u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031768Bu); } /* indirect call */
    }

loc_00317691: ;
    goto loc_00317735;

loc_00317696: ;
    MEM8(esi + 0x4F) = 0x2A;
    MEM8(esi + 0x37) = 6;
    eax = MEM32(esi + 0x168);
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x38) = eax;
    eax = MEM32(esi + 0x168);
    _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x3C) = eax;
    eax = MEM32(edx + 8);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi + 0x168);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(edx + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00317706;

loc_003176CD: ;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x3449EC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3449EC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi + 0x1C);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(edx + 0xC);
    _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00317706;

loc_003176E6: ;
    MEM8(esi + 0x37) = 1;
    MEM8(esi + 0x4F) = 0x28;
    MEM32(esi + 0x28) = 0x3449EC;
    ecx = MEM32(esi + 0x168);
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x2C) = ecx;
    eax = MEM32(edx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00317706: ;
    edi = esi + 0x158;
    ecx = MEM32(edi);
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00317716u); RECOMP_ABI_CALL(0x00316F79u, sub_00316F79); /* call 0x00316F79 */

loc_00317716: ;
    MEM32(esi + 0x51) = eax;
    ecx = MEM32(edi);
    eax = MEM32(esi + 0x2C);
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi;
    MEM8(ebp + 0xE) = HI8(eax);
    MEM8(ebp + 0xF) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + 0xE));
    MEM16(esi + 0x56) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00317735u); RECOMP_ABI_CALL(0x003195CAu, sub_003195CA); /* call 0x003195CA */

loc_00317735: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031773C
 * Original: 0x0031773C - 0x00317799 (93 bytes, 34 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031773C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031773C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5F5F554D);
    PUSH32(esp, 8);
    POP32(esp, edi);
    PUSH32(esp, edi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C82C); PUSH32(esp, 0x0031774Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317749u); } /* indirect call */
    }

loc_0031774F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317761; /* jne: not equal / not zero */

loc_00317753: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0xC000009Au;
    goto loc_00317796;

loc_00317761: ;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = edi;
    ecx = esi + 0x4F;
    MEM32(esi + 0x30) = 0x3170A6;
    MEM16(esi + 0x34) = 0xA;
    MEM8(esi + 0x36) = 2;
    MEM8(esi + 0x37) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM8(ecx) = 0x25;
    ecx = esi;
    PUSH32(esp, 0x00317791u); RECOMP_ABI_CALL(0x003195CAu, sub_003195CA); /* call 0x003195CA */

loc_00317791: ;
    eax = 0x103;

loc_00317796: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00317799
 * Original: 0x00317799 - 0x0031783B (162 bytes, 53 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317799(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317799: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM8(esi + 0xF) = MEM8(esi + 0xF) & 0xF;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    eax = 0xC0000000u;
    edi = edx;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003177D0; /* jne: not equal / not zero */

loc_003177B7: ;
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x10) = edx;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C818); PUSH32(esp, 0x003177C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003177C0u); } /* indirect call */
    }

loc_003177C6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = MEM32(0x31C81C); PUSH32(esp, 0x003177CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003177C8u); } /* indirect call */
    }

loc_003177CE: ;
    goto loc_00317836;

loc_003177D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x4F;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(esi + 0x34) = 8;
    MEM8(esi + 0x36) = 2;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003177F2; /* je: equal / zero */

loc_003177E9: ;
    MEM32(esi + 0x30) = 0x3175C1;
    goto loc_003177F9;

loc_003177F2: ;
    MEM32(esi + 0x30) = 0x3173DB;

loc_003177F9: ;
    MEM8(esi + 0xF) = MEM8(esi + 0xF) | 0x10;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi = MEM32(0x3449E4);
    edx = 0x3449E4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    eax = ecx + 0x54;
    if (CMP_NE(_fa, _fb)) goto loc_00317824; /* jne: not equal / not zero */

loc_0031780F: ;
    MEM32(eax) = edi;
    MEM32(ecx + 0x58) = edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(edi + 4) = eax;
    PUSH32(esp, esi);
    MEM32(0x3449E4) = eax;
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x00317822u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031781Fu); } /* indirect call */
    }

loc_00317822: ;
    goto loc_00317836;

loc_00317824: ;
    esi = MEM32(0x3449E8);
    MEM32(eax) = edx;
    MEM32(ecx + 0x58) = esi;
    MEM32(esi) = eax;
    MEM32(0x3449E8) = eax;

loc_00317836: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031783B
 * Original: 0x0031783B - 0x0031790B (208 bytes, 67 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031783B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031783B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0x5C);
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(0x70000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_003178BE; /* je: equal / zero */

loc_00317854: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003178B2; /* je: equal / zero */

loc_00317859: ;
    _fb = (uint32_t)(0x3FF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x3FF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0031786E; /* je: equal / zero */

loc_00317860: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0xC0000010u;
    goto loc_003178EF;

loc_0031786E: ;
    edx = MEM32(esi + 0x30);
    PUSH32(esp, 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 0x160);
    eax = eax | MEM32(ebx + 0x164);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00317893; /* jne: not equal / not zero */

loc_00317888: ;
    edx = esi;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00317891u); RECOMP_ABI_CALL(0x0031773Cu, sub_0031773C); /* call 0x0031773C */

loc_00317891: ;
    goto loc_003178E8;

loc_00317893: ;
    eax = MEM32(ebx + 0x160);
    MEM32(edx + 8) = eax;
    eax = MEM32(ebx + 0x164);
    MEM32(edx + 0xC) = eax;
    MEM8(edx + 0x1A) = 1;
    MEM32(esi + 0x14) = 0x20;
    goto loc_003178E6;

loc_003178B2: ;
    ecx = MEM32(ebp + 8);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003178BCu); RECOMP_ABI_CALL(0x0031728Cu, sub_0031728C); /* call 0x0031728C */

loc_003178BC: ;
    goto loc_00317904;

loc_003178BE: ;
    eax = MEM32(ebx + 0x160);
    eax = eax | MEM32(ebx + 0x164);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = MEM32(esi + 0x30);
    if ((_fa == 0)) goto loc_00317888; /* je: equal / zero */

loc_003178CF: ;
    PUSH32(esp, 6);
    esi = ebx + 0x140;
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
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx + 0x14) = 0x18;
    esi = ecx;

loc_003178E6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003178E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x103 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317904; /* je: equal / zero */

loc_003178EF: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esi + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C818); PUSH32(esp, 0x003178FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003178F6u); } /* indirect call */
    }

loc_003178FC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx));
    { uint32_t _icall_target = MEM32(0x31C81C); PUSH32(esp, 0x00317904u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003178FEu); } /* indirect call */
    }

loc_00317904: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031790B
 * Original: 0x0031790B - 0x00317A9B (400 bytes, 138 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031790B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0031790B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    eax = edx;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x5C);
    edx = MEM32(ecx + 0xC);
    ebx = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = 0xFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00317987; /* jne: not equal / not zero */

loc_00317934: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, ebx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00317987; /* jne: not equal / not zero */

loc_00317938: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(edx)) >> 32) & 1);
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(MEM32(ecx + 0x10)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x164)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x164) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00317984; /* jg: greater (signed >) */

loc_00317949: ;
    if (CMP_L(_fas, _fbs)) goto loc_00317953; /* jl: less (signed <) */

loc_0031794B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x160) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00317984; /* ja: above (unsigned >) */

loc_00317953: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0031795F; /* jne: not equal / not zero */

loc_00317957: ;
    eax = MEM32(ebp + -8);
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & ebx;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00317994;

loc_0031795F: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 2), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00317970; /* je: equal / zero */

loc_00317965: ;
    eax = MEM32(ecx + 8);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -8);
    goto loc_0031797C;

loc_00317970: ;
    eax = MEM32(ebp + -8);
    edi = MEM32(eax + 0x30);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(ecx + 8))) >> 32) & 1);
    edi = edi + MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = edi;

loc_0031797C: ;
    edi = MEM32(ebp + -4);
    MEM32(ecx + 8) = edi;
    goto loc_0031798E;

loc_00317984: ;
    eax = MEM32(ebp + -8);

loc_00317987: ;
    MEM32(eax + 0x10) = 0xC000000Du;

loc_0031798E: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003179AF; /* jne: not equal / not zero */

loc_00317994: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C818); PUSH32(esp, 0x003179A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031799Cu); } /* indirect call */
    }

loc_003179A2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = MEM32(0x31C81C); PUSH32(esp, 0x003179AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003179A4u); } /* indirect call */
    }

loc_003179AA: ;
    goto loc_00317A96;

loc_003179AF: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x4F;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00317A48; /* jne: not equal / not zero */

loc_003179C1: ;
    edi = MEM32(esi + 0x168);
    eax = edx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0xF) = MEM8(esi + 0xF) & 0xF1;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00317A04; /* je: equal / zero */

loc_003179D8: ;
    eax = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x18) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_003179F3; /* jbe: below or equal (unsigned <=) */

loc_003179E3: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x8000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x1C) = eax;
    goto loc_00317A1B;

loc_003179F3: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -12)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -4)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x2000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = ecx;

loc_00317A04: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00317A17; /* je: equal / zero */

loc_00317A0E: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edx));
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0xF) = MEM8(esi + 0xF) | 4;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0x1C) = edx;

loc_00317A17: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00317A25; /* jne: not equal / not zero */

loc_00317A1B: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00317A23u); RECOMP_ABI_CALL(0x00317799u, sub_00317799); /* call 0x00317799 */

loc_00317A23: ;
    goto loc_00317A96;

loc_00317A25: ;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF), 0xE (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00317A34; /* je: equal / zero */

loc_00317A2B: ;
    MEM32(esi + 0x30) = 0x317799;
    goto loc_00317A3B;

loc_00317A34: ;
    MEM32(esi + 0x30) = 0x316FF3;

loc_00317A3B: ;
    edx = MEM32(ebp + -12);
    MEM8(esi + 0x37) = 2;
    MEM8(esi + 0x4F) = 0x2A;
    goto loc_00317A57;

loc_00317A48: ;
    MEM32(esi + 0x30) = 0x31730D;
    MEM8(esi + 0x37) = 1;
    MEM8(esi + 0x4F) = 0x28;

loc_00317A57: ;
    edi = MEM32(esi + 0x158);
    eax = MEM32(ebp + -4);
    ecx = edi;
    if (LO8(ecx)) _cf = (int)(((edx) >> ((LO8(ecx)) - 1)) & 1);
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = ebx;
    MEM16(esi + 0x34) = 8;
    PUSH32(esp, edx);
    MEM8(esi + 0x36) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00317A7Au); RECOMP_ABI_CALL(0x00316F79u, sub_00316F79); /* call 0x00316F79 */

loc_00317A7A: ;
    ecx = edi;
    if (LO8(ecx)) _cf = (int)(((ebx) >> ((LO8(ecx)) - 1)) & 1);
    ebx = ebx >> LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x51) = eax;
    ecx = esi;
    MEM8(ebp + -2) = HI8(ebx);
    MEM8(ebp + -1) = LO8(ebx);
    SET_LO16(eax, MEM16(ebp + -2));
    MEM16(esi + 0x56) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00317A96u); RECOMP_ABI_CALL(0x003195CAu, sub_003195CA); /* call 0x003195CA */

loc_00317A96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0031795F
 * Original: 0x0031795F - 0x00317A9B (316 bytes, 105 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031795F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031795F: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 2), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00317970; /* je: equal / zero */

loc_00317965: ;
    eax = MEM32(ecx + 8);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -8);
    goto loc_0031797C;

loc_00317970: ;
    eax = MEM32(ebp + -8);
    edi = MEM32(eax + 0x30);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = edi;

loc_0031797C: ;
    edi = MEM32(ebp + -4);
    MEM32(ecx + 8) = edi;
    goto loc_0031798E;

    eax = MEM32(ebp + -8);
    MEM32(eax + 0x10) = 0xC000000Du;

loc_0031798E: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003179AF; /* jne: not equal / not zero */

loc_00317994: ;
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C818); PUSH32(esp, 0x003179A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031799Cu); } /* indirect call */
    }

loc_003179A2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = MEM32(0x31C81C); PUSH32(esp, 0x003179AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003179A4u); } /* indirect call */
    }

loc_003179AA: ;
    goto loc_00317A96;

loc_003179AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x4F;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317A48; /* jne: not equal / not zero */

loc_003179C1: ;
    edi = MEM32(esi + 0x168);
    eax = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    MEM8(esi + 0xF) = MEM8(esi + 0xF) & 0xF1;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317A04; /* je: equal / zero */

loc_003179D8: ;
    eax = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x18) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_003179F3; /* jbe: below or equal (unsigned <=) */

loc_003179E3: ;
    ecx = ecx | 0x8000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x1C) = eax;
    goto loc_00317A1B;

loc_003179F3: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx | 0x2000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = ecx;

loc_00317A04: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317A17; /* je: equal / zero */

loc_00317A0E: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esi + 0xF) = MEM8(esi + 0xF) | 4;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0x1C) = edx;

loc_00317A17: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317A25; /* jne: not equal / not zero */

loc_00317A1B: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00317A23u); RECOMP_ABI_CALL(0x00317799u, sub_00317799); /* call 0x00317799 */

loc_00317A23: ;
    goto loc_00317A96;

loc_00317A25: ;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF), 0xE (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00317A34; /* je: equal / zero */

loc_00317A2B: ;
    MEM32(esi + 0x30) = 0x317799;
    goto loc_00317A3B;

loc_00317A34: ;
    MEM32(esi + 0x30) = 0x316FF3;

loc_00317A3B: ;
    edx = MEM32(ebp + -12);
    MEM8(esi + 0x37) = 2;
    MEM8(esi + 0x4F) = 0x2A;
    goto loc_00317A57;

loc_00317A48: ;
    MEM32(esi + 0x30) = 0x31730D;
    MEM8(esi + 0x37) = 1;
    MEM8(esi + 0x4F) = 0x28;

loc_00317A57: ;
    edi = MEM32(esi + 0x158);
    eax = MEM32(ebp + -4);
    ecx = edi;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = ebx;
    MEM16(esi + 0x34) = 8;
    PUSH32(esp, edx);
    MEM8(esi + 0x36) = 2;
    PUSH32(esp, 0x00317A7Au); RECOMP_ABI_CALL(0x00316F79u, sub_00316F79); /* call 0x00316F79 */

loc_00317A7A: ;
    ecx = edi;
    ebx = ebx >> LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x51) = eax;
    ecx = esi;
    MEM8(ebp + -2) = HI8(ebx);
    MEM8(ebp + -1) = LO8(ebx);
    SET_LO16(eax, MEM16(ebp + -2));
    MEM16(esi + 0x56) = LO16(eax);
    PUSH32(esp, 0x00317A96u); RECOMP_ABI_CALL(0x003195CAu, sub_003195CA); /* call 0x003195CA */

loc_00317A96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00317A9B
 * Original: 0x00317A9B - 0x00317B0C (113 bytes, 45 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00317A9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317A9B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = MEM32(edi + 0x5C);
    MEM32(ebp + 8) = eax;
    { uint32_t _icall_target = MEM32(0x31C834); PUSH32(esp, 0x00317AB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317AB0u); } /* indirect call */
    }

loc_00317AB6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317AD4; /* je: equal / zero */

loc_00317ABA: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = edi;
    MEM32(edi + 0x10) = 0xC0000240u;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C818); PUSH32(esp, 0x00317ACBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317AC5u); } /* indirect call */
    }

loc_00317ACB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C81C); PUSH32(esp, 0x00317AD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317ACCu); } /* indirect call */
    }

loc_00317AD2: ;
    goto loc_00317B05;

loc_00317AD4: ;
    MEM32(esi + 0x14) = ebx;
    ebx = MEM32(ebp + 8);
    MEM32(ebx + 0x10) = edi;
    eax = ZX8(MEM8(esi));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00317AFC; /* je: equal / zero */

loc_00317AE4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00317AF5; /* je: equal / zero */

loc_00317AE7: ;
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00317B05; /* jne: not equal / not zero */

loc_00317AEC: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00317AF3u); RECOMP_ABI_CALL(0x0031783Bu, sub_0031783B); /* call 0x0031783B */

loc_00317AF3: ;
    goto loc_00317B05;

loc_00317AF5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C830); PUSH32(esp, 0x00317AFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317AF6u); } /* indirect call */
    }

loc_00317AFC: ;
    edx = edi;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00317B05u); RECOMP_ABI_CALL(0x0031790Bu, sub_0031790B); /* call 0x0031790B */

loc_00317B05: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00317B0C
 * Original: 0x00317B0C - 0x00317B74 (104 bytes, 34 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317B0C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317B0C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = edi + 3;
    esi = esi & 0xFFFFFFFCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x00317B1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317B19u); } /* indirect call */
    }

loc_00317B1F: ;
    _fa = (uint32_t)(MEM32(0x314F60)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x314F60), esi (32-bit) */
    SET_LO8(ecx, LO8(eax));
    if (CMP_B(_fa, _fb)) goto loc_00317B59; /* jb: below (unsigned <) */

loc_00317B29: ;
    ebx = 0x80001000u;
    _fb = (uint32_t)(MEM32(0x314F60)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(0x314F60);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x314F60) = MEM32(0x314F60) - esi;
    _fa = (uint32_t)(MEM32(0x314F60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x00317B40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317B3Au); } /* indirect call */
    }

loc_00317B40: ;
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0xCCCCCCCCu;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    goto loc_00317B6C;

loc_00317B59: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x00317B5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317B59u); } /* indirect call */
    }

loc_00317B5F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C82C); PUSH32(esp, 0x00317B6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317B64u); } /* indirect call */
    }

loc_00317B6A: ;
    ebx = eax;

loc_00317B6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00317B74
 * Original: 0x00317B74 - 0x00317B86 (18 bytes, 6 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317B74(void)
{

loc_00317B74: ;
    eax = ecx;
    MEM8(eax) = 0xFF;
    MEM8(eax + 1) = 0x80;
    MEM8(eax + 2) = 0x80;
    MEM8(eax + 3) = 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00317B86
 * Original: 0x00317B86 - 0x00317BD6 (80 bytes, 20 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317B86(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317B86: ;
    edx = ZX8(MEM8(ecx + 0x79));
    eax = MEM32(ecx + 0xE0);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = eax + edx + 1;
    SET_LO8(eax, MEM8(esi));
    MEM8(ecx + 0x79) = LO8(eax);
    MEM8(esi) = 0x80;
    eax = MEM32(ecx + 0xE0);
    MEM8(eax + edx + 2) = 0x80;
    eax = MEM32(ecx + 0xE0);
    MEM8(eax + edx + 3) = 0x80;
    eax = MEM32(ecx + 0xE0);
    MEM32(eax + edx + 0x1C) = MEM32(eax + edx + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(eax + edx + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx + 0xE0);
    MEM8(eax + edx + 7) = 0xFF;
    eax = MEM32(ecx + 0xE0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00317BD6
 * Original: 0x00317BD6 - 0x00317C08 (50 bytes, 17 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317BD6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317BD6: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xE0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ZX8(LO8(eax));
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(edx + ecx) = 0xFF;
    SET_LO8(ebx, MEM8(esi + 0x79));
    ecx = MEM32(esi + 0xE0);
    MEM8(edx + ecx + 1) = LO8(ebx);
    MEM8(esi + 0x79) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00317C08
 * Original: 0x00317C08 - 0x00317C1F (23 bytes, 9 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00317C08(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317C08: ;
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317C1C; /* je: equal / zero */

loc_00317C0F: ;
    eax = ZX8(LO8(eax));
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x347B70)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x347B70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00317C1C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00317C1F
 * Original: 0x00317C1F - 0x00317C36 (23 bytes, 9 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00317C1F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317C1F: ;
    SET_LO8(eax, MEM8(ecx + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317C33; /* je: equal / zero */

loc_00317C26: ;
    eax = ZX8(LO8(eax));
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x347B70)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x347B70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00317C33: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00317C36
 * Original: 0x00317C36 - 0x00317C4D (23 bytes, 9 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00317C36(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317C36: ;
    SET_LO8(eax, MEM8(ecx + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317C4A; /* je: equal / zero */

loc_00317C3D: ;
    eax = ZX8(LO8(eax));
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x347B70)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x347B70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00317C4A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00317C4D
 * Original: 0x00317C4D - 0x00317D11 (196 bytes, 58 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317C4D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00317C4D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0x347A90;
    PUSH32(esp, 0x00317C5Cu); RECOMP_ABI_CALL(0x00317B86u, sub_00317B86); /* call 0x00317B86 */

loc_00317C5C: ;
    esi = eax;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00317D0B; /* je: equal / zero */

loc_00317C68: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    MEM8(esi) = 0xFE;
    MEM8(esi + 4) = LO8(eax);
    MEM32(esi + 0x10) = ebx;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00317C83u); RECOMP_ABI_CALL(0x00318C53u, sub_00318C53); /* call 0x00318C53 */

loc_00317C83: ;
    _fa = (uint32_t)(MEM8(0x347A90)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x347A90), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, MEM8(esp + 0x14));
    if (CMP_EQ(_fa, _fb)) goto loc_00317CC6; /* je: equal / zero */

loc_00317C8F: ;
    edi = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM8(esi + 5) = LO8(eax);
    { uint32_t _icall_target = MEM32(0x31C838); PUSH32(esp, 0x00317C9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317C96u); } /* indirect call */
    }

loc_00317C9C: ;
    _fb = (uint32_t)(0xF4240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edi)) + (uint64_t)(0xF4240)) >> 32) & 1);
    MEM32(edi) = MEM32(edi) + 0xF4240;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = ebx;
    { uint64_t _t = (uint64_t)(MEM32(edi + 4)) + (uint64_t)(ebx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(edi + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    eax = MEM32(0x347B0C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00317CBC; /* jne: not equal / not zero */

loc_00317CB1: ;
    MEM32(0x347B0C) = esi;
    goto loc_00317D0B;

loc_00317CB9: ;
    eax = MEM32(eax + 0x10);

loc_00317CBC: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00317CB9; /* jne: not equal / not zero */

loc_00317CC1: ;
    MEM32(eax + 0x10) = esi;
    goto loc_00317D0B;

loc_00317CC6: ;
    MEM8(esi) = 0xFD;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347AC4);
    MEM8(0x347A92) = LO8(eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFFF0BDC0u;
    PUSH32(esp, eax);
    MEM8(0x347A90) = 1;
    MEM8(0x347A91) = LO8(ebx);
    MEM32(0x347B10) = esi;
    MEM8(0x347A93) = 0x80;
    MEM8(esi + 5) = LO8(ebx);
    PUSH32(esp, 0x347AE0);
    MEM8(0x347B08) = LO8(ebx);
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x00317D0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317D05u); } /* indirect call */
    }

loc_00317D0B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00317D11
 * Original: 0x00317D11 - 0x00317D33 (34 bytes, 9 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317D11(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317D11: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347AC4);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFD050F80u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x347AE0);
    MEM8(0x347B08) = 1;
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x00317D32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317D2Cu); } /* indirect call */
    }

loc_00317D32: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00317D33
 * Original: 0x00317D33 - 0x00317D84 (81 bytes, 20 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317D33(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317D33: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    MEM8(0x347A93) = 0x81;
    if (CMP_GE(_fas, _fbs)) goto loc_00317D4E; /* jge: greater or equal (signed >=) */

loc_00317D41: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0);
    PUSH32(esp, 0x00317D4Cu); RECOMP_ABI_CALL(0x00318198u, sub_00318198); /* call 0x00318198 */

loc_00317D4C: ;
    goto loc_00317D81;

loc_00317D4E: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x1000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317D60; /* jne: not equal / not zero */

loc_00317D58: ;
    eax = MEM32(esp + 8);
    MEM8(eax + 4) = MEM8(eax + 4) | 0x80;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00317D60: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347AC4);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFFFE7960u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x347AE0);
    MEM8(0x347B08) = 2;
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x00317D81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317D7Bu); } /* indirect call */
    }

loc_00317D81: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00317D84
 * Original: 0x00317D84 - 0x00317DAF (43 bytes, 10 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317D84(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317D84: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347AC4);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFFFFB1E0u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x347AE0);
    MEM8(0x347A93) = 0x84;
    MEM8(0x347B08) = 3;
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x00317DACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317DA6u); } /* indirect call */
    }

loc_00317DAC: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00317DAF
 * Original: 0x00317DAF - 0x00317DE0 (49 bytes, 25 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317DAF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317DAF: ;
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    SET_LO8(eax, LO8(edx));

loc_00317DB8: ;
    esi = ZX8(LO8(ebx));
    _fa = (uint32_t)(MEM32(ecx + esi * 4 + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + esi * 4 + 8), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00317DD2; /* je: equal / zero */

loc_00317DC1: ;
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if ((_fa != 0)) goto loc_00317DCA; /* jne: not equal / not zero */

loc_00317DC5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00317DCA: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00317DB8; /* jb: below (unsigned <) */

loc_00317DD0: ;
    goto loc_00317DDB;

loc_00317DD2: ;
    esi = ZX8(LO8(ebx));
    ecx = ecx + esi * 4 + 8;
    MEM32(ecx) = MEM32(ecx) | edx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00317DDB: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) & 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00317DE0
 * Original: 0x00317DE0 - 0x00317E14 (52 bytes, 26 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317DE0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x1F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x1F (8-bit) */
    PUSH32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_00317DFF; /* jbe: below or equal (unsigned <=) */

loc_00317DEB: ;
    SET_LO8(eax, LO8(edx));
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(eax, LO8(eax) >> 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    SET_LO8(ebx, LO8(eax));

loc_00317DF9: ;
    _fb = (uint32_t)(0xE0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0xE0);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00317DF9; /* jne: not equal / not zero */

loc_00317DFF: ;
    eax = ZX8(LO8(ebx));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + eax * 4 + 8;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, LO8(edx));
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ~esi;
    MEM32(eax) = MEM32(eax) & esi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00317E14
 * Original: 0x00317E14 - 0x00317E1B (7 bytes, 2 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317E14(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317E14: ;
    MEM32(0x347B74) = MEM32(0x347B74) + 1;
    _fa = (uint32_t)(MEM32(0x347B74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00317E1B
 * Original: 0x00317E1B - 0x00317E22 (7 bytes, 2 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317E1B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317E1B: ;
    MEM32(0x347B74) = MEM32(0x347B74) - 1;
    _fa = (uint32_t)(MEM32(0x347B74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00317E22
 * Original: 0x00317E22 - 0x00317E37 (21 bytes, 6 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317E22(void)
{

loc_00317E22: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + -20);
    PUSH32(esp, 5);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00317E34u); RECOMP_ABI_CALL(0x00317C4Du, sub_00317C4D); /* call 0x00317C4D */

loc_00317E34: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00317E37
 * Original: 0x00317E37 - 0x00317E99 (98 bytes, 39 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317E37(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317E37: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x347B10);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(0x347A91)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x347A91), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317E59; /* je: equal / zero */

loc_00317E50: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00317E57u); RECOMP_ABI_CALL(0x00318198u, sub_00318198); /* call 0x00318198 */

loc_00317E57: ;
    goto loc_00317E95;

loc_00317E59: ;
    ecx = esi;
    MEM8(0x347A93) = LO8(ebx);
    PUSH32(esp, 0x00317E66u); RECOMP_ABI_CALL(0x00317C08u, sub_00317C08); /* call 0x00317C08 */

loc_00317E66: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317E81; /* jne: not equal / not zero */

loc_00317E6A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, esi);
    PUSH32(esp, 0x317D33);
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00317E7Fu); RECOMP_ABI_CALL(0x0031A456u, sub_0031A456); /* call 0x0031A456 */

loc_00317E7F: ;
    goto loc_00317E95;

loc_00317E81: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ecx & 0xFFFFFF7Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317E95u); RECOMP_ABI_CALL(0x00319A4Cu, sub_00319A4C); /* call 0x00319A4C */

loc_00317E95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00317E99
 * Original: 0x00317E99 - 0x00317E9E (5 bytes, 1 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317E99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00317E99: ;
    g_seh_ebp = ebp; sub_00317D33(); return; /* tail jmp 0x00317D33 */

}

/**
 * sub_00317E9E
 * Original: 0x00317E9E - 0x00317F14 (118 bytes, 47 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317E9E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317E9E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00317EC5; /* je: equal / zero */

loc_00317EAA: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + 0x14);
    eax = ZX8(LO8(eax));
    eax = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317EC5; /* je: equal / zero */

loc_00317EBA: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00317EC5u); RECOMP_ABI_CALL(0x00315FAFu, sub_00315FAF); /* call 0x00315FAF */

loc_00317EC5: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 5 (8-bit) */
    ebx = 0x347A90;
    if (CMP_NE(_fa, _fb)) goto loc_00317EF9; /* jne: not equal / not zero */

loc_00317ECF: ;
    ecx = esi;
    PUSH32(esp, 0x00317ED6u); RECOMP_ABI_CALL(0x00317C08u, sub_00317C08); /* call 0x00317C08 */

loc_00317ED6: ;
    edi = eax;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00317EE0u); RECOMP_ABI_CALL(0x00318C9Bu, sub_00318C9B); /* call 0x00318C9B */

loc_00317EE0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00317F08; /* jne: not equal / not zero */

loc_00317EE4: ;
    SET_LO8(edx, MEM8(edi + 5));
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0x00317EEFu); RECOMP_ABI_CALL(0x00317DE0u, sub_00317DE0); /* call 0x00317DE0 */

loc_00317EEF: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00317EF7u); RECOMP_ABI_CALL(0x00317BD6u, sub_00317BD6); /* call 0x00317BD6 */

loc_00317EF7: ;
    goto loc_00317F08;

loc_00317EF9: ;
    SET_LO8(edx, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317F08; /* je: equal / zero */

loc_00317F00: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x00317F08u); RECOMP_ABI_CALL(0x00317DE0u, sub_00317DE0); /* call 0x00317DE0 */

loc_00317F08: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00317F10u); RECOMP_ABI_CALL(0x00317BD6u, sub_00317BD6); /* call 0x00317BD6 */

loc_00317F10: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00317F14
 * Original: 0x00317F14 - 0x00317F66 (82 bytes, 34 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317F14(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317F14: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 4 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00317F50; /* jne: not equal / not zero */

loc_00317F1E: ;
    PUSH32(esp, 0x00317F23u); RECOMP_ABI_CALL(0x00317C1Fu, sub_00317C1F); /* call 0x00317C1F */

loc_00317F23: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317F62; /* je: equal / zero */

loc_00317F29: ;
    PUSH32(esp, edi);

loc_00317F2A: ;
    ecx = esi;
    PUSH32(esp, 0x00317F31u); RECOMP_ABI_CALL(0x00317C36u, sub_00317C36); /* call 0x00317C36 */

loc_00317F31: ;
    edi = eax;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317F40; /* je: equal / zero */

loc_00317F3A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00317F3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317F3Bu); } /* indirect call */
    }

loc_00317F3E: ;
    goto loc_00317F47;

loc_00317F40: ;
    ecx = esi;
    PUSH32(esp, 0x00317F47u); RECOMP_ABI_CALL(0x00317E9Eu, sub_00317E9E); /* call 0x00317E9E */

loc_00317F47: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00317F2A; /* jne: not equal / not zero */

loc_00317F4D: ;
    POP32(esp, edi);
    goto loc_00317F62;

loc_00317F50: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317F5D; /* je: equal / zero */

loc_00317F57: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00317F5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317F58u); } /* indirect call */
    }

loc_00317F5B: ;
    goto loc_00317F62;

loc_00317F5D: ;
    PUSH32(esp, 0x00317F62u); RECOMP_ABI_CALL(0x00317E9Eu, sub_00317E9E); /* call 0x00317E9E */

loc_00317F62: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00317F5B
 * Original: 0x00317F5B - 0x00317F66 (11 bytes, 4 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317F5B(void)
{

loc_00317F5B: ;
    goto loc_00317F62;

    PUSH32(esp, 0x00317F62u); RECOMP_ABI_CALL(0x00317E9Eu, sub_00317E9E); /* call 0x00317E9E */

loc_00317F62: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00317F66
 * Original: 0x00317F66 - 0x00318015 (175 bytes, 50 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00317F66(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00317F66: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x347A91)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x347A91), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00317F7E; /* je: equal / zero */

loc_00317F76: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00317F7Eu); RECOMP_ABI_CALL(0x00317F14u, sub_00317F14); /* call 0x00317F14 */

loc_00317F7E: ;
    eax = MEM32(0x347B0C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(0x347A91) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00317F9B; /* jne: not equal / not zero */

loc_00317F8D: ;
    MEM32(0x347B10) = ebx;
    MEM8(0x347A90) = LO8(ebx);
    goto loc_00318010;

loc_00317F9B: ;
    MEM32(0x347B10) = eax;
    ecx = MEM32(eax + 0x10);
    MEM32(0x347B0C) = ecx;
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(0x347A92) = LO8(ecx);
    MEM8(0x347A93) = 0x80;
    MEM8(eax) = 0xFD;
    eax = MEM32(0x347B10);
    MEM32(eax + 0x10) = ebx;
    eax = MEM32(0x347B10);
    MEM8(eax + 5) = LO8(ebx);
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C838); PUSH32(esp, 0x00317FD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00317FD0u); } /* indirect call */
    }

loc_00317FD6: ;
    eax = MEM32(0x347B10);
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00317FF4; /* jl: less (signed <) */

loc_00317FE3: ;
    if (CMP_G(_fas, _fbs)) goto loc_00317FED; /* jg: greater (signed >) */

loc_00317FE5: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x18) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00317FF4; /* jbe: below or equal (unsigned <=) */

loc_00317FED: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00317FF2u); RECOMP_ABI_CALL(0x00317E37u, sub_00317E37); /* call 0x00317E37 */

loc_00317FF2: ;
    goto loc_00318010;

loc_00317FF4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347AC4);
    MEM8(0x347B08) = LO8(ebx);
    PUSH32(esp, MEM32(eax + 0x1C));
    PUSH32(esp, MEM32(eax + 0x18));
    PUSH32(esp, 0x347AE0);
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x00318010u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031800Au); } /* indirect call */
    }

loc_00318010: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00318015
 * Original: 0x00318015 - 0x0031808C (119 bytes, 40 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318015(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318015: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    edi = ecx;
    PUSH32(esp, 0x00318022u); RECOMP_ABI_CALL(0x00318C22u, sub_00318C22); /* call 0x00318C22 */

loc_00318022: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318087; /* je: equal / zero */

loc_00318028: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00318030u); RECOMP_ABI_CALL(0x00318C9Bu, sub_00318C9B); /* call 0x00318C9B */

loc_00318030: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0xFE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0xFE (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318067; /* jne: not equal / not zero */

loc_00318035: ;
    eax = MEM32(0x347B0C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031804B; /* jne: not equal / not zero */

loc_0031803E: ;
    eax = MEM32(esi + 0x10);
    MEM32(0x347B0C) = eax;
    goto loc_00318056;

loc_00318048: ;
    eax = MEM32(eax + 0x10);

loc_0031804B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318048; /* jne: not equal / not zero */

loc_00318050: ;
    ecx = MEM32(esi + 0x10);
    MEM32(eax + 0x10) = ecx;

loc_00318056: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    ecx = 0x347A90;
    PUSH32(esp, 0x00318065u); RECOMP_ABI_CALL(0x00317BD6u, sub_00317BD6); /* call 0x00317BD6 */

loc_00318065: ;
    goto loc_00318087;

loc_00318067: ;
    _fa = (uint32_t)(MEM8(0x347A90)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x347A90), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318081; /* je: equal / zero */

loc_00318070: ;
    _fa = (uint32_t)(MEM32(0x347B10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x347B10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318081; /* jne: not equal / not zero */

loc_00318078: ;
    MEM8(0x347A91) = 1;
    goto loc_00318087;

loc_00318081: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00318087u); RECOMP_ABI_CALL(0x00317F14u, sub_00317F14); /* call 0x00317F14 */

loc_00318087: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031808C
 * Original: 0x0031808C - 0x003180D1 (69 bytes, 30 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031808C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031808C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 5 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003180A0; /* jne: not equal / not zero */

loc_00318097: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031809Cu); RECOMP_ABI_CALL(0x00317C08u, sub_00317C08); /* call 0x00317C08 */

loc_0031809C: ;
    esi = eax;
    goto loc_003180A2;

loc_003180A0: ;
    esi = ecx;

loc_003180A2: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003180A9u); RECOMP_ABI_CALL(0x00317C08u, sub_00317C08); /* call 0x00317C08 */

loc_003180A9: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003180CD; /* je: equal / zero */

loc_003180AF: ;
    SET_LO8(eax, MEM8(esi + 4));
    SET_LO8(eax, LO8(eax) & 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ebp + -4) = LO8(eax);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003180C1u); RECOMP_ABI_CALL(0x00318015u, sub_00318015); /* call 0x00318015 */

loc_003180C1: ;
    PUSH32(esp, 5);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003180CDu); RECOMP_ABI_CALL(0x00317C4Du, sub_00317C4D); /* call 0x00317C4D */

loc_003180CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003180D1
 * Original: 0x003180D1 - 0x00318152 (129 bytes, 49 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003180D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003180D1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x347A91)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x347A91), 0 (8-bit) */
    esi = ecx;
    MEM8(ebp + -4) = LO8(ebx);
    MEM8(0x347A93) = 0xA;
    if (CMP_NE(_fa, _fb)) goto loc_00318113; /* jne: not equal / not zero */

loc_003180F1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003180F6u); RECOMP_ABI_CALL(0x00317C08u, sub_00317C08); /* call 0x00317C08 */

loc_003180F6: ;
    edi = eax;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00318100u); RECOMP_ABI_CALL(0x00318C9Bu, sub_00318C9B); /* call 0x00318C9B */

loc_00318100: ;
    SET_LO8(eax, MEM8(0x347A92));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318113; /* je: equal / zero */

loc_00318109: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(eax, MEM8(esi + 4));
    SET_LO8(eax, LO8(eax) & 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ebp + -4) = LO8(eax);

loc_00318113: ;
    SET_LO8(edx, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318122; /* je: equal / zero */

loc_0031811A: ;
    ecx = MEM32(esi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00318122u); RECOMP_ABI_CALL(0x00317DE0u, sub_00317DE0); /* call 0x00317DE0 */

loc_00318122: ;
    PUSH32(esp, esi);
    ecx = 0x347A90;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031812Du); RECOMP_ABI_CALL(0x00317BD6u, sub_00317BD6); /* call 0x00317BD6 */

loc_0031812D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031813E; /* je: equal / zero */

loc_00318131: ;
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    ecx = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031813Eu); RECOMP_ABI_CALL(0x00317C4Du, sub_00317C4D); /* call 0x00317C4D */

loc_0031813E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    MEM8(0x347A91) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031814Du); RECOMP_ABI_CALL(0x00317F66u, sub_00317F66); /* call 0x00317F66 */

loc_0031814D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00318152
 * Original: 0x00318152 - 0x00318165 (19 bytes, 5 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318152(void)
{

loc_00318152: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax + -20);
    PUSH32(esp, 0x00318162u); RECOMP_ABI_CALL(0x00318015u, sub_00318015); /* call 0x00318015 */

loc_00318162: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00318165
 * Original: 0x00318165 - 0x00318198 (51 bytes, 13 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318165(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318165: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    MEM8(0x347A93) = 9;
    if (CMP_GE(_fas, _fbs)) goto loc_00318183; /* jge: greater or equal (signed >=) */

loc_00318178: ;
    _fa = (uint32_t)(MEM8(0x347A91)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x347A91), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031818B; /* jne: not equal / not zero */

loc_00318180: ;
    MEM8(ecx + 5) = LO8(eax);

loc_00318183: ;
    _fa = (uint32_t)(MEM8(0x347A91)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x347A91), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318190; /* je: equal / zero */

loc_0031818B: ;
    MEM8(0x347A92) = LO8(eax);

loc_00318190: ;
    PUSH32(esp, 0x00318195u); RECOMP_ABI_CALL(0x003180D1u, sub_003180D1); /* call 0x003180D1 */

loc_00318195: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00318198
 * Original: 0x00318198 - 0x00318205 (109 bytes, 36 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318198(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318198: ;
    _fa = (uint32_t)(MEM8(0x347A91)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x347A91), 0 (8-bit) */
    PUSH32(esp, esi);
    MEM8(0x347A93) = 8;
    if (CMP_NE(_fa, _fb)) goto loc_003181F1; /* jne: not equal / not zero */

loc_003181A9: ;
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x003181B4u); RECOMP_ABI_CALL(0x00317C08u, sub_00317C08); /* call 0x00317C08 */

loc_003181B4: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003181DA; /* jne: not equal / not zero */

loc_003181B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 4));
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003181CEu); RECOMP_ABI_CALL(0x0031A4A3u, sub_0031A4A3); /* call 0x0031A4A3 */

loc_003181CE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x003181D8u); RECOMP_ABI_CALL(0x00318165u, sub_00318165); /* call 0x00318165 */

loc_003181D8: ;
    goto loc_00318201;

loc_003181DA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = ecx & 0xFFFFFF7Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003181EFu); RECOMP_ABI_CALL(0x00319A4Cu, sub_00319A4C); /* call 0x00319A4C */

loc_003181EF: ;
    goto loc_00318201;

loc_003181F1: ;
    ecx = MEM32(esp + 0xC);
    MEM8(0x347A92) = 0;
    PUSH32(esp, 0x00318201u); RECOMP_ABI_CALL(0x003180D1u, sub_003180D1); /* call 0x003180D1 */

loc_00318201: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00318205
 * Original: 0x00318205 - 0x0031826A (101 bytes, 22 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318205(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318205: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347AE0);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x00318210u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031820Au); } /* indirect call */
    }

loc_00318210: ;
    eax = MEM32(esp + 4);
    MEM8(0x347A93) = 3;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00318234; /* jl: less (signed <) */

loc_00318221: ;
    _fa = (uint32_t)(MEM8(0x347A91)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x347A91), 0 (8-bit) */
    MEM32(0x347A9C) = 0x317D84;
    if (CMP_EQ(_fa, _fb)) goto loc_0031823E; /* je: equal / zero */

loc_00318234: ;
    MEM32(0x347A9C) = 0x318198;

loc_0031823E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM8(0x347A94) = 0x1C;
    MEM8(0x347A95) = 0x43;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x347A94);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00318262u); RECOMP_ABI_CALL(0x0031AA80u, sub_0031AA80); /* call 0x0031AA80 */

loc_00318262: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031826A
 * Original: 0x0031826A - 0x003183F6 (396 bytes, 126 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031826A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031826A: ;
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
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    MEM8(0x347A93) = 7;
    if (CMP_GE(_fas, _fbs)) goto loc_0031829A; /* jge: greater or equal (signed >=) */

loc_00318289: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000400u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x80000400u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318295; /* jne: not equal / not zero */

loc_00318292: ;
    MEM32(ebp + -4) = ebx;

loc_00318295: ;
    MEM32(esi + 0x10) = ebx;
    goto loc_003182BB;

loc_0031829A: ;
    SET_LO8(eax, MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003182BB; /* je: equal / zero */

loc_003182A1: ;
    edx = MEM32(esi + 0x10);
    edx = MEM32(edx + 0x14);
    eax = ZX8(LO8(eax));
    eax = MEM32(edx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003182BB; /* je: equal / zero */

loc_003182B1: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003182BBu); RECOMP_ABI_CALL(0x00315FAFu, sub_00315FAF); /* call 0x00315FAF */

loc_003182BB: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003183D0; /* je: equal / zero */

loc_003182C5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003183D0; /* je: equal / zero */

loc_003182CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    ecx = MEM32(esi + 8);
    edi = esi;
    MEM32(ebp + -12) = ecx;
    MEM32(esi + 8) = ebx;
    MEM32(ebp + -8) = 0x317F66;
    if (CMP_NE(_fa, _fb)) goto loc_00318381; /* jne: not equal / not zero */

loc_003182E7: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003182EEu); RECOMP_ABI_CALL(0x00317C36u, sub_00317C36); /* call 0x00317C36 */

loc_003182EE: ;
    ecx = esi;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003182F7u); RECOMP_ABI_CALL(0x00317C08u, sub_00317C08); /* call 0x00317C08 */

loc_003182F7: ;
    _fa = (uint32_t)(MEM8(0x347A91)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x347A91), 0 (8-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00318399; /* jne: not equal / not zero */

loc_00318306: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031833B; /* jne: not equal / not zero */

loc_0031830C: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00318314u); RECOMP_ABI_CALL(0x00318C9Bu, sub_00318C9B); /* call 0x00318C9B */

loc_00318314: ;
    PUSH32(esp, esi);
    ecx = 0x347A90;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031831Fu); RECOMP_ABI_CALL(0x00317BD6u, sub_00317BD6); /* call 0x00317BD6 */

loc_0031831F: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00318326u); RECOMP_ABI_CALL(0x00317C1Fu, sub_00317C1F); /* call 0x00317C1F */

loc_00318326: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031833B; /* jne: not equal / not zero */

loc_0031832A: ;
    PUSH32(esp, edi);
    MEM8(0x347A92) = LO8(eax);
    PUSH32(esp, eax);

loc_00318331: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00318336u); RECOMP_ABI_CALL(0x00318198u, sub_00318198); /* call 0x00318198 */

loc_00318336: ;
    goto loc_003183EF;

loc_0031833B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318399; /* je: equal / zero */

loc_0031833F: ;
    eax = MEM32(0x347B6C);

loc_00318344: ;
    ecx = ZX8(MEM8(eax));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318344; /* jne: not equal / not zero */

loc_0031834F: ;
    MEM32(0x347B6C) = eax;
    SET_LO8(eax, MEM8(eax + 2));
    MEM8(ebx + 2) = LO8(eax);
    eax = MEM32(0x347B6C);
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(ebp + 9) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 6));
    SET_LO8(eax, MEM8(eax + 7));
    MEM8(ebp + 0xA) = LO8(ecx);
    MEM8(ebp + 0xB) = LO8(eax);
    MEM8(ebp + 8) = 0x82;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031837Fu); RECOMP_ABI_CALL(0x003183F6u, sub_003183F6); /* call 0x003183F6 */

loc_0031837F: ;
    goto loc_003183EF;

loc_00318381: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00318399; /* jge: greater or equal (signed >=) */

loc_00318386: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318392; /* jne: not equal / not zero */

loc_0031838B: ;
    MEM8(0x347A92) = 0;

loc_00318392: ;
    MEM32(ebp + -8) = 0x318198;

loc_00318399: ;
    eax = MEM32(ebp + -8);
    MEM32(0x347A9C) = eax;
    eax = MEM32(ebp + -12);
    MEM32(0x347AA4) = eax;
    MEM8(0x347A94) = 0x1C;
    MEM8(0x347A95) = 0x43;
    MEM32(0x347AA0) = edi;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0x347A94);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003183CEu); RECOMP_ABI_CALL(0x0031AA80u, sub_0031AA80); /* call 0x0031AA80 */

loc_003183CE: ;
    goto loc_003183EF;

loc_003183D0: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003183E8; /* jge: greater or equal (signed >=) */

loc_003183D5: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003183E1; /* jne: not equal / not zero */

loc_003183DA: ;
    MEM8(0x347A92) = 0;

loc_003183E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    goto loc_00318331;

loc_003183E8: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003183EFu); RECOMP_ABI_CALL(0x00317F66u, sub_00317F66); /* call 0x00317F66 */

loc_003183EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003183F6
 * Original: 0x003183F6 - 0x0031842A (52 bytes, 18 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003183F6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003183F6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003183FEu); RECOMP_ABI_CALL(0x00318E98u, sub_00318E98); /* call 0x00318E98 */

loc_003183FE: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031841A; /* je: equal / zero */

loc_00318404: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0031840Du); RECOMP_ABI_CALL(0x003196AFu, sub_003196AF); /* call 0x003196AF */

loc_0031840D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0031841A; /* je: equal / zero */

loc_00318414: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00318418u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318415u); } /* indirect call */
    }

loc_00318418: ;
    goto loc_00318426;

loc_0031841A: ;
    ecx = esi;
    PUSH32(esp, 0x80000400u);
    PUSH32(esp, 0x00318426u); RECOMP_ABI_CALL(0x0031826Au, sub_0031826A); /* call 0x0031826A */

loc_00318426: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031842A
 * Original: 0x0031842A - 0x00318505 (219 bytes, 51 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031842A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031842A: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347AE0);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x00318436u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318430u); } /* indirect call */
    }

loc_00318436: ;
    edx = MEM32(esp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x347A93) = 2;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003184F7; /* jl: less (signed <) */

loc_0031844C: ;
    _fa = (uint32_t)(MEM8(0x347A91)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x347A91), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003184F7; /* jne: not equal / not zero */

loc_00318458: ;
    _fa = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x14), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003184F0; /* jb: below (unsigned <) */

loc_00318462: ;
    SET_LO8(eax, MEM8(0x347B1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003184F0; /* ja: above (unsigned >) */

loc_0031846F: ;
    _fa = (uint32_t)(MEM8(0x347B15)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x347B15), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003184F0; /* jne: not equal / not zero */

loc_00318478: ;
    SET_LO8(ecx, MEM8(0x347B14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318488; /* je: equal / zero */

loc_00318483: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x12 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003184F0; /* jne: not equal / not zero */

loc_00318488: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0xC);
    MEM8(esi + 6) = LO8(eax);
    PUSH32(esp, 0x00318498u); RECOMP_ABI_CALL(0x00317DAFu, sub_00317DAF); /* call 0x00317DAF */

loc_00318498: ;
    MEM8(esi + 5) = LO8(eax);
    MEM32(0x347A9C) = 0x318205;
    MEM32(0x347AAC) = ebx;
    MEM32(0x347AA8) = ebx;
    MEM8(0x347ABC) = LO8(ebx);
    MEM8(0x347ABD) = 5;
    SET_LO16(eax, ZX8(MEM8(esi + 5)));
    MEM16(0x347ABE) = LO16(eax);
    MEM16(0x347AC0) = LO16(ebx);
    MEM16(0x347AC2) = LO16(ebx);
    PUSH32(esp, 0x003184DCu); RECOMP_ABI_CALL(0x00317D11u, sub_00317D11); /* call 0x00317D11 */

loc_003184DC: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x347A94);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003184EDu); RECOMP_ABI_CALL(0x0031AA80u, sub_0031AA80); /* call 0x0031AA80 */

loc_003184ED: ;
    POP32(esp, esi);
    goto loc_00318501;

loc_003184F0: ;
    MEM32(edx + 4) = 0x80000600u;

loc_003184F7: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, edx);
    PUSH32(esp, 0x00318501u); RECOMP_ABI_CALL(0x00318205u, sub_00318205); /* call 0x00318205 */

loc_00318501: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00318505
 * Original: 0x00318505 - 0x0031864C (327 bytes, 96 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00318505(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318505: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x347AE0);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x00318515u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031850Fu); } /* indirect call */
    }

loc_00318515: ;
    ecx = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x347A93) = 6;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031863D; /* jl: less (signed <) */

loc_0031852A: ;
    _fa = (uint32_t)(MEM8(0x347A91)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x347A91), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031863D; /* jne: not equal / not zero */

loc_00318536: ;
    esi = MEM32(ebp + 0xC);
    MEM32(esi + 0x18) = ebx;
    eax = 0x347B1C;

loc_00318541: ;
    edx = ZX8(MEM8(eax));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x347B6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x347B6C (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031862C; /* jae: above or equal (unsigned >=) */

loc_00318551: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031862C; /* je: equal / zero */

loc_0031855A: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318541; /* jne: not equal / not zero */

loc_00318560: ;
    _fa = (uint32_t)(MEM8(0x347B20)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x347B20), 1 (8-bit) */
    MEM32(0x347B6C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003185F7; /* je: equal / zero */

loc_00318572: ;
    _fa = (uint32_t)(MEM8(0x347B0B)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x347B0B), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003185F7; /* je: equal / zero */

loc_0031857B: ;
    MEM8(esi) = 4;
    MEM8(esi + 2) = 0x80;
    _fa = (uint32_t)(MEM8(0x347B20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x347B20), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003185E8; /* jbe: below or equal (unsigned <=) */

loc_0031858B: ;
    eax = ZX8(MEM8(0x347B0B));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003185E8; /* jbe: below or equal (unsigned <=) */

loc_00318596: ;
    ecx = 0x347A90;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003185A0u); RECOMP_ABI_CALL(0x00317B86u, sub_00317B86); /* call 0x00317B86 */

loc_003185A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003185E8; /* je: equal / zero */

loc_003185A4: ;
    MEM8(eax) = 5;
    SET_LO8(ecx, MEM8(esi + 4));
    SET_LO8(ecx, LO8(ecx) & 0x80);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + 4) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 5));
    MEM8(eax + 5) = LO8(ecx);
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = ecx;
    SET_LO8(ecx, MEM8(esi + 6));
    MEM8(eax + 6) = LO8(ecx);
    ecx = MEM32(esi + 0x18);
    MEM32(eax + 0x18) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003185DCu); RECOMP_ABI_CALL(0x00318C53u, sub_00318C53); /* call 0x00318C53 */

loc_003185DC: ;
    eax = ZX8(MEM8(0x347B20));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0031858B; /* jb: below (unsigned <) */

loc_003185E8: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003185F3u); RECOMP_ABI_CALL(0x00317C1Fu, sub_00317C1F); /* call 0x00317C1F */

loc_003185F3: ;
    esi = eax;
    goto loc_003185FA;

loc_003185F7: ;
    MEM8(esi) = 3;

loc_003185FA: ;
    eax = MEM32(0x347B6C);
    SET_LO8(eax, MEM8(eax + 2));
    MEM8(esi + 2) = LO8(eax);
    eax = MEM32(0x347B6C);
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(ebp + 0xD) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 6));
    SET_LO8(eax, MEM8(eax + 7));
    MEM8(ebp + 0xE) = LO8(ecx);
    MEM8(ebp + 0xF) = LO8(eax);
    MEM8(ebp + 0xC) = 0x82;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031862Au); RECOMP_ABI_CALL(0x003183F6u, sub_003183F6); /* call 0x003183F6 */

loc_0031862A: ;
    goto loc_00318646;

loc_0031862C: ;
    MEM8(0x347A92) = 0;
    MEM32(ecx + 4) = 0x80000400u;
    PUSH32(esp, esi);
    goto loc_00318640;

loc_0031863D: ;
    PUSH32(esp, MEM32(ebp + 0xC));

loc_00318640: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00318646u); RECOMP_ABI_CALL(0x00318205u, sub_00318205); /* call 0x00318205 */

loc_00318646: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031864C
 * Original: 0x0031864C - 0x0031874C (256 bytes, 60 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031864C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031864C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(0x347A91)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x347A91), LO8(ebx) (8-bit) */
    MEM8(0x347A93) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00318674; /* je: equal / zero */

loc_00318668: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031866Fu); RECOMP_ABI_CALL(0x00318198u, sub_00318198); /* call 0x00318198 */

loc_0031866F: ;
    goto loc_00318748;

loc_00318674: ;
    MEM32(esi + 0x18) = ebx;
    PUSH32(esp, ebp);
    MEM8(0x347A94) = 0x20;
    MEM8(0x347A95) = 2;
    MEM32(0x347A9C) = ebx;
    MEM8(0x347AA9) = LO8(ebx);
    MEM8(0x347AAA) = LO8(ebx);
    MEM8(0x347AAB) = LO8(ebx);
    MEM16(0x347AB0) = 8;
    SET_LO8(eax, MEM8(esi + 4));
    ebp = 0x347A94;
    PUSH32(esp, ebp);
    SET_LO8(eax, LO8(eax) >> 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    MEM8(0x347AB2) = LO8(eax);
    MEM8(0x347AA8) = LO8(ebx);
    PUSH32(esp, 0x003186C4u); RECOMP_ABI_CALL(0x0031AA80u, sub_0031AA80); /* call 0x0031AA80 */

loc_003186C4: ;
    eax = MEM32(0x347AA4);
    MEM32(esi + 8) = eax;
    MEM8(0x347A94) = 0x30;
    MEM8(0x347A95) = 0x40;
    MEM32(0x347A9C) = 0x31842A;
    MEM32(0x347AA0) = esi;
    eax = MEM32(esi + 8);
    PUSH32(esp, 8);
    MEM32(0x347AA4) = eax;
    POP32(esp, eax);
    MEM32(0x347AAC) = 0x347B14;
    MEM32(0x347AA8) = eax;
    MEM8(0x347AB0) = 2;
    MEM8(0x347AB1) = LO8(ebx);
    MEM8(0x347AB2) = LO8(ebx);
    MEM8(0x347ABC) = 0x80;
    MEM8(0x347ABD) = 6;
    MEM16(0x347ABE) = 0x100;
    MEM16(0x347AC0) = LO16(ebx);
    MEM16(0x347AC2) = LO16(eax);
    PUSH32(esp, 0x00318740u); RECOMP_ABI_CALL(0x00317D11u, sub_00317D11); /* call 0x00317D11 */

loc_00318740: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00318747u); RECOMP_ABI_CALL(0x0031AA80u, sub_0031AA80); /* call 0x0031AA80 */

loc_00318747: ;
    POP32(esp, ebp);

loc_00318748: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031874C
 * Original: 0x0031874C - 0x00318805 (185 bytes, 43 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031874C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031874C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347AE0);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x0031875Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318754u); } /* indirect call */
    }

loc_0031875A: ;
    eax = MEM32(ebp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x347A93) = 5;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031878D; /* jl: less (signed <) */

loc_0031876B: ;
    _fa = (uint32_t)(MEM8(0x347A91)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x347A91), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031878D; /* jne: not equal / not zero */

loc_00318773: ;
    SET_LO16(ecx, MEM16(0x347B1E));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x50 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031879A; /* jbe: below or equal (unsigned <=) */

loc_00318780: ;
    MEM8(0x347A92) = LO8(edx);
    MEM32(eax + 4) = 0x80000400u;

loc_0031878D: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00318796u); RECOMP_ABI_CALL(0x00318205u, sub_00318205); /* call 0x00318205 */

loc_00318796: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0031879A: ;
    ecx = ZX16(LO16(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003187AB; /* je: equal / zero */

loc_003187A2: ;
    MEM32(eax + 4) = 0x80000000u;
    goto loc_0031878D;

loc_003187AB: ;
    SET_LO16(eax, ZX8(MEM8(0x347B21)));
    MEM32(0x347A9C) = 0x318505;
    MEM32(0x347AAC) = edx;
    MEM32(0x347AA8) = edx;
    MEM8(0x347ABC) = LO8(edx);
    MEM8(0x347ABD) = 9;
    MEM16(0x347ABE) = LO16(eax);
    MEM16(0x347AC0) = LO16(edx);
    MEM16(0x347AC2) = LO16(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003187EFu); RECOMP_ABI_CALL(0x00317D11u, sub_00317D11); /* call 0x00317D11 */

loc_003187EF: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0x347A94);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00318803u); RECOMP_ABI_CALL(0x0031AA80u, sub_0031AA80); /* call 0x0031AA80 */

loc_00318803: ;
    goto loc_00318796;

}

/**
 * sub_00318805
 * Original: 0x00318805 - 0x00318950 (331 bytes, 83 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00318805(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318805: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x347A91)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x347A91), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    esi = edx;
    MEM8(0x347A93) = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0031882A; /* je: equal / zero */

loc_0031881E: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00318825u); RECOMP_ABI_CALL(0x00318198u, sub_00318198); /* call 0x00318198 */

loc_00318825: ;
    goto loc_0031894C;

loc_0031882A: ;
    SET_LO8(eax, MEM8(0x347B18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318867; /* je: equal / zero */

loc_00318833: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(eax);
    SET_LO8(eax, MEM8(0x347B18));
    MEM8(ebp + -3) = LO8(eax);
    SET_LO8(eax, MEM8(0x347B19));
    MEM8(ebp + -2) = LO8(eax);
    SET_LO8(eax, MEM8(0x347B1A));
    MEM8(ebp + -1) = LO8(eax);
    MEM8(ebp + -4) = 0x81;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00318862u); RECOMP_ABI_CALL(0x003183F6u, sub_003183F6); /* call 0x003183F6 */

loc_00318862: ;
    goto loc_0031894C;

loc_00318867: ;
    SET_LO16(eax, ZX8(MEM8(0x347B1B)));
    MEM16(0x347AB0) = LO16(eax);
    MEM8(0x347A94) = 0x20;
    MEM8(0x347A95) = 2;
    MEM32(0x347A9C) = ebx;
    MEM8(0x347AA9) = LO8(ebx);
    MEM8(0x347AAA) = LO8(ebx);
    MEM8(0x347AAB) = LO8(ebx);
    SET_LO8(eax, MEM8(esi + 4));
    SET_LO8(eax, LO8(eax) >> 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(0x347AB2) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 5));
    PUSH32(esp, edi);
    MEM8(0x347AA8) = LO8(eax);
    eax = MEM32(esi + 0xC);
    edi = 0x347A94;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003188C1u); RECOMP_ABI_CALL(0x0031AA80u, sub_0031AA80); /* call 0x0031AA80 */

loc_003188C1: ;
    eax = MEM32(0x347AA4);
    MEM32(esi + 8) = eax;
    MEM8(0x347A94) = 0x30;
    MEM8(0x347A95) = 0x40;
    MEM32(0x347A9C) = 0x31874C;
    MEM32(0x347AA0) = esi;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0x50);
    MEM32(0x347AA4) = eax;
    POP32(esp, eax);
    MEM32(0x347AAC) = 0x347B1C;
    MEM32(0x347AA8) = eax;
    MEM8(0x347AB0) = 2;
    MEM8(0x347AB1) = 1;
    MEM8(0x347AB2) = LO8(ebx);
    MEM8(0x347ABC) = 0x80;
    MEM8(0x347ABD) = 6;
    MEM16(0x347ABE) = 0x200;
    MEM16(0x347AC0) = LO16(ebx);
    MEM16(0x347AC2) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031893Eu); RECOMP_ABI_CALL(0x00317D11u, sub_00317D11); /* call 0x00317D11 */

loc_0031893E: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031894Bu); RECOMP_ABI_CALL(0x0031AA80u, sub_0031AA80); /* call 0x0031AA80 */

loc_0031894B: ;
    POP32(esp, edi);

loc_0031894C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00318950
 * Original: 0x00318950 - 0x003189A4 (84 bytes, 25 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318950: ;
    eax = ZX8(MEM8(0x347B08));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0031899C; /* je: equal / zero */

loc_0031895C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00318984; /* je: equal / zero */

loc_0031895F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00318977; /* je: equal / zero */

loc_00318962: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003189A1; /* jne: not equal / not zero */

loc_00318965: ;
    edx = MEM32(0x347B10);
    ecx = 0x347A94;
    PUSH32(esp, 0x00318975u); RECOMP_ABI_CALL(0x00318805u, sub_00318805); /* call 0x00318805 */

loc_00318975: ;
    goto loc_003189A1;

loc_00318977: ;
    ecx = MEM32(0x347B10);
    PUSH32(esp, 0x00318982u); RECOMP_ABI_CALL(0x0031864Cu, sub_0031864C); /* call 0x0031864C */

loc_00318982: ;
    goto loc_003189A1;

loc_00318984: ;
    eax = MEM32(0x347B10);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0x347A94);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031899Au); RECOMP_ABI_CALL(0x0031A90Fu, sub_0031A90F); /* call 0x0031A90F */

loc_0031899A: ;
    goto loc_003189A1;

loc_0031899C: ;
    PUSH32(esp, 0x003189A1u); RECOMP_ABI_CALL(0x00317E37u, sub_00317E37); /* call 0x00317E37 */

loc_003189A1: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003189A4
 * Original: 0x003189A4 - 0x003189B7 (19 bytes, 6 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003189A4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003189A4: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, MEM32(esp + 4));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003189B4u); RECOMP_ABI_CALL(0x0031A90Fu, sub_0031A90F); /* call 0x0031A90F */

loc_003189B4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003189B7
 * Original: 0x003189B7 - 0x003189BB (4 bytes, 2 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003189B7(void)
{

loc_003189B7: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_003189BB
 * Original: 0x003189BB - 0x003189C8 (13 bytes, 4 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003189BB(void)
{

loc_003189BB: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x1C);
    MEM32(ecx + 0x1C) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003189C8
 * Original: 0x003189C8 - 0x003189CC (4 bytes, 2 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003189C8(void)
{

loc_003189C8: ;
    SET_LO8(eax, MEM8(ecx + 2));
    esp += 4; return; /* ret */

}

/**
 * sub_003189CC
 * Original: 0x003189CC - 0x003189D6 (10 bytes, 3 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003189CC(void)
{

loc_003189CC: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 7) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003189D6
 * Original: 0x003189D6 - 0x00318A44 (110 bytes, 36 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003189D6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003189D6: ;
    eax = MEM32(esp + 4);
    ecx = 0xC000000Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00318A23; /* jg: greater (signed >) */

loc_003189E3: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00318A1C; /* je: equal / zero */

loc_003189E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318A08; /* je: equal / zero */

loc_003189EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000100u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000100u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318A17; /* je: equal / zero */

loc_003189F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000800u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000800u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318A10; /* je: equal / zero */

loc_003189FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00318A35; /* jle: less or equal (signed <=) */

loc_00318A01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC000000Eu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00318A35; /* jg: greater (signed >) */

loc_00318A08: ;
    eax = 0x45D;

loc_00318A0D: ;
    esp += 8; return; /* ret 4 */

loc_00318A10: ;
    eax = 0x5AA;
    goto loc_00318A0D;

loc_00318A17: ;
    PUSH32(esp, 0xE);

loc_00318A19: ;
    POP32(esp, eax);
    goto loc_00318A0D;

loc_00318A1C: ;
    eax = 0x4C7;
    goto loc_00318A0D;

loc_00318A23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000010u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000010u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318A08; /* je: equal / zero */

loc_00318A2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318A40; /* je: equal / zero */

loc_00318A2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318A39; /* je: equal / zero */

loc_00318A35: ;
    PUSH32(esp, 0x1F);
    goto loc_00318A19;

loc_00318A39: ;
    eax = 0x3E5;
    goto loc_00318A0D;

loc_00318A40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00318A0D;

}

/**
 * sub_00318A44
 * Original: 0x00318A44 - 0x00318AB0 (108 bytes, 33 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318A44(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318A44: ;
    eax = MEM32(esp + 4);
    ecx = 0xC000000Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00318A8C; /* jg: greater (signed >) */

loc_00318A51: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00318A85; /* je: equal / zero */

loc_00318A53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318A76; /* je: equal / zero */

loc_00318A5A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000100u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000100u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318A7E; /* je: equal / zero */

loc_00318A61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000800u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000800u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318A7E; /* je: equal / zero */

loc_00318A68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00318A9E; /* jle: less or equal (signed <=) */

loc_00318A6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC000000Eu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00318A9E; /* jg: greater (signed >) */

loc_00318A76: ;
    eax = 0xC0000185u;

loc_00318A7B: ;
    esp += 8; return; /* ret 4 */

loc_00318A7E: ;
    eax = 0xC000009Au;
    goto loc_00318A7B;

loc_00318A85: ;
    eax = 0xC0000120u;
    goto loc_00318A7B;

loc_00318A8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000010u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000010u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318A76; /* je: equal / zero */

loc_00318A93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318AAC; /* je: equal / zero */

loc_00318A97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318AA5; /* je: equal / zero */

loc_00318A9E: ;
    eax = 0xC0000001u;
    goto loc_00318A7B;

loc_00318AA5: ;
    eax = 0x103;
    goto loc_00318A7B;

loc_00318AAC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00318A7B;

}

/**
 * sub_00318AB0
 * Original: 0x00318AB0 - 0x00318AB6 (6 bytes, 2 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318AB0(void)
{

loc_00318AB0: ;
    eax = MEM32(0x347B6C);
    esp += 4; return; /* ret */

}

/**
 * sub_00318AB6
 * Original: 0x00318AB6 - 0x00318B2C (118 bytes, 49 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00318AB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318AB6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x347B6C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(0x347B1E));
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x347B1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x347B1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00318AD1: ;
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318B23; /* je: equal / zero */

loc_00318AD7: ;
    eax = ZX8(LO8(edx));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00318B23; /* jae: above or equal (unsigned >=) */

loc_00318AE0: ;
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318B1B; /* jne: not equal / not zero */

loc_00318AE7: ;
    SET_LO8(edx, MEM8(ecx + 3));
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp + 8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ebp + 8) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318B1B; /* jne: not equal / not zero */

loc_00318AF2: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318B1B; /* je: equal / zero */

loc_00318AF8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ecx + 2));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx >> 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ~edx;
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), LO8(ebx) (8-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318B1B; /* jne: not equal / not zero */

loc_00318B11: ;
    SET_LO8(edx, MEM8(ebp + 0x10));
    MEM8(ebp + 0x10) = MEM8(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318B21; /* je: equal / zero */

loc_00318B1B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318AD1; /* jne: not equal / not zero */

loc_00318B1F: ;
    goto loc_00318B23;

loc_00318B21: ;
    edi = ecx;

loc_00318B23: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00318B2C
 * Original: 0x00318B2C - 0x00318B30 (4 bytes, 2 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318B2C(void)
{

loc_00318B2C: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00318B30
 * Original: 0x00318B30 - 0x00318BB6 (134 bytes, 49 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318B30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318B5E; /* jne: not equal / not zero */

loc_00318B3B: ;
    PUSH32(esp, 0x00318B40u); RECOMP_ABI_CALL(0x00317C08u, sub_00317C08); /* call 0x00317C08 */

loc_00318B40: ;
    ebx = eax;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318B5E; /* je: equal / zero */

loc_00318B49: ;
    MEM32(edi + 8) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00318B5Au); RECOMP_ABI_CALL(0x00319652u, sub_00319652); /* call 0x00319652 */

loc_00318B5A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00318BB1;

loc_00318B5E: ;
    SET_LO8(eax, MEM8(edi + 5));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM8(esi + 0x14) = LO8(eax);
    MEM8(esi + 0x15) = 0;
    MEM8(esi + 0x16) = 0;
    SET_LO16(eax, ZX8(MEM8(edi + 6)));
    MEM16(esi + 0x1C) = LO16(eax);
    SET_LO8(eax, MEM8(edi + 4));
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) >> 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(esi + 0x1E) = LO8(eax);
    MEM8(esi + 1) = 2;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00318B98u); RECOMP_ABI_CALL(0x0031AA80u, sub_0031AA80); /* call 0x0031AA80 */

loc_00318B98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00318BAC; /* jl: less (signed <) */

loc_00318B9C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = MEM32(esi + 0x10);
    MEM32(edi + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00318BAC; /* je: equal / zero */

loc_00318BA6: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ebx + 8) = ecx;

loc_00318BAC: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);

loc_00318BB1: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00318BB6
 * Original: 0x00318BB6 - 0x00318C22 (108 bytes, 38 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318BB6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318BB6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318BEF; /* jne: not equal / not zero */

loc_00318BC6: ;
    PUSH32(esp, 0x00318BCBu); RECOMP_ABI_CALL(0x00317C08u, sub_00317C08); /* call 0x00317C08 */

loc_00318BCB: ;
    ecx = eax;
    PUSH32(esp, 0x00318BD2u); RECOMP_ABI_CALL(0x00317C1Fu, sub_00317C1F); /* call 0x00317C1F */

loc_00318BD2: ;
    goto loc_00318BE0;

loc_00318BD4: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318C10; /* je: equal / zero */

loc_00318BD9: ;
    ecx = eax;
    PUSH32(esp, 0x00318BE0u); RECOMP_ABI_CALL(0x00317C36u, sub_00317C36); /* call 0x00317C36 */

loc_00318BE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318BD4; /* jne: not equal / not zero */

loc_00318BE4: ;
    ecx = esi;
    PUSH32(esp, 0x00318BEBu); RECOMP_ABI_CALL(0x00317C08u, sub_00317C08); /* call 0x00317C08 */

loc_00318BEB: ;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00318BEF: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    MEM8(eax + 1) = 0x43;
    MEM32(eax + 0x10) = edi;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00318C0Bu); RECOMP_ABI_CALL(0x0031AA80u, sub_0031AA80); /* call 0x0031AA80 */

loc_00318C0B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00318C10: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00318C1Eu); RECOMP_ABI_CALL(0x00319652u, sub_00319652); /* call 0x00319652 */

loc_00318C1E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00318C0B;

}

/**
 * sub_00318C22
 * Original: 0x00318C22 - 0x00318C53 (49 bytes, 19 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318C22(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318C22: ;
    PUSH32(esp, 0x00318C27u); RECOMP_ABI_CALL(0x00317C1Fu, sub_00317C1F); /* call 0x00317C1F */

loc_00318C27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318C50; /* je: equal / zero */

loc_00318C2B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(esp + 0xC));
    esi = 0xFFFFFF7Fu;
    edi = edi & esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00318C39: ;
    ecx = ZX8(MEM8(eax + 4));
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318C4E; /* je: equal / zero */

loc_00318C43: ;
    ecx = eax;
    PUSH32(esp, 0x00318C4Au); RECOMP_ABI_CALL(0x00317C36u, sub_00317C36); /* call 0x00317C36 */

loc_00318C4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318C39; /* jne: not equal / not zero */

loc_00318C4E: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00318C50: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00318C53
 * Original: 0x00318C53 - 0x00318C9B (72 bytes, 25 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318C53(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318C53: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = eax;
    _fb = (uint32_t)(MEM32(0x347B70)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(0x347B70);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(eax + 3) = 0x80;
    _fb = (uint32_t)(MEM32(0x347B70)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(0x347B70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(eax + 1) = LO8(ecx);
    ecx = esi;
    PUSH32(esp, 0x00318C7Du); RECOMP_ABI_CALL(0x00317C1Fu, sub_00317C1F); /* call 0x00317C1F */

loc_00318C7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318C8D; /* jne: not equal / not zero */

loc_00318C81: ;
    MEM8(esi + 2) = LO8(ebx);
    goto loc_00318C96;

loc_00318C86: ;
    ecx = eax;
    PUSH32(esp, 0x00318C8Du); RECOMP_ABI_CALL(0x00317C36u, sub_00317C36); /* call 0x00317C36 */

loc_00318C8D: ;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 3), 0x80 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318C86; /* jne: not equal / not zero */

loc_00318C93: ;
    MEM8(eax + 3) = LO8(ebx);

loc_00318C96: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00318C9B
 * Original: 0x00318C9B - 0x00318CF7 (92 bytes, 40 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318C9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00318C9B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x00318CA6u); RECOMP_ABI_CALL(0x00317C1Fu, sub_00317C1F); /* call 0x00317C1F */

loc_00318CA6: ;
    esi = MEM32(esp + 0x14);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_00318CC0; /* jne: not equal / not zero */

loc_00318CB2: ;
    SET_LO8(eax, MEM8(esi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    MEM8(ebp + 2) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00318CE6; /* jne: not equal / not zero */

loc_00318CBC: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00318CE6;

loc_00318CC0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318CE6; /* je: equal / zero */

loc_00318CC4: ;
    ecx = edi;
    PUSH32(esp, 0x00318CCBu); RECOMP_ABI_CALL(0x00317C36u, sub_00317C36); /* call 0x00317C36 */

loc_00318CCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318CDC; /* je: equal / zero */

loc_00318CCF: ;
    ecx = edi;
    PUSH32(esp, 0x00318CD6u); RECOMP_ABI_CALL(0x00317C36u, sub_00317C36); /* call 0x00317C36 */

loc_00318CD6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318CC4; /* jne: not equal / not zero */

loc_00318CDC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318CE6; /* je: equal / zero */

loc_00318CE0: ;
    SET_LO8(eax, MEM8(esi + 3));
    MEM8(edi + 3) = LO8(eax);

loc_00318CE6: ;
    POP32(esp, edi);
    MEM8(esi + 3) = 0x80;
    MEM8(esi + 1) = 0x80;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00318CF7
 * Original: 0x00318CF7 - 0x00318D6C (117 bytes, 41 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318CF7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318CF7: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    edx = ZX8(MEM8(edx + 4));
    edx = edx & 0x7F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    MEM32(ecx + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00318D17; /* jl: less (signed <) */

loc_00318D0E: ;
    MEM32(ecx + 0x14) = 0x20;
    goto loc_00318D69;

loc_00318D17: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = edx ^ 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x14) = edx;
    PUSH32(esp, edi);
    edi = MEM32(eax + esi * 4);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318D47; /* jne: not equal / not zero */

loc_00318D2B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318D67; /* je: equal / zero */

loc_00318D30: ;
    _fa = (uint32_t)(MEM8(0x314DE8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x314DE8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318D3E; /* je: equal / zero */

loc_00318D39: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318D67; /* je: equal / zero */

loc_00318D3E: ;
    MEM32(ecx + 0x14) = 0x20;
    goto loc_00318D67;

loc_00318D47: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00318D67; /* jbe: below or equal (unsigned <=) */

loc_00318D4C: ;
    eax = MEM32(eax + 8);
    eax = ZX8(MEM8(eax + 4));
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00318D3E; /* ja: above (unsigned >) */

loc_00318D5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318D67; /* jne: not equal / not zero */

loc_00318D61: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x14) = edx;

loc_00318D67: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00318D69: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00318D6C
 * Original: 0x00318D6C - 0x00318E56 (234 bytes, 89 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00318D6C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318D6C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(esi + 1));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    MEM8(ebp + -1) = LO8(ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00318DAC; /* je: equal / zero */

loc_00318D83: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318DAC; /* jne: not equal / not zero */

loc_00318D88: ;
    edx = ebp + -12;
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -12) = edx;
    edx = ebp + -20;
    MEM8(ebp + -1) = 1;
    MEM8(ebp + -20) = LO8(ebx);
    MEM8(ebp + -18) = 4;
    MEM32(ebp + -16) = ebx;
    MEM32(esi + 8) = 0x3164C9;
    MEM32(esi + 0xC) = edx;

loc_00318DAC: ;
    eax = ZX8(LO8(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00318E02; /* je: equal / zero */

loc_00318DB3: ;
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00318DFA; /* je: equal / zero */

loc_00318DB8: ;
    _fb = (uint32_t)(0x37) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x37;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00318DE4; /* je: equal / zero */

loc_00318DBD: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00318DDC; /* je: equal / zero */

loc_00318DC2: ;
    _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00318DD4; /* je: equal / zero */

loc_00318DC7: ;
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x41;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00318E17; /* jne: not equal / not zero */

loc_00318DCC: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00318DD2u); RECOMP_ABI_CALL(0x00318BB6u, sub_00318BB6); /* call 0x00318BB6 */

loc_00318DD2: ;
    goto loc_00318E24;

loc_00318DD4: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00318DDAu); RECOMP_ABI_CALL(0x00318B30u, sub_00318B30); /* call 0x00318B30 */

loc_00318DDA: ;
    goto loc_00318E24;

loc_00318DDC: ;
    eax = ecx + 0x18;
    MEM32(esi + 0x18) = eax;
    goto loc_00318E17;

loc_00318DE4: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318DEF; /* jne: not equal / not zero */

loc_00318DE9: ;
    eax = MEM32(ecx + 8);
    MEM32(esi + 0x10) = eax;

loc_00318DEF: ;
    _fa = (uint32_t)(MEM8(esi + 0x29)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x29), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318E17; /* jne: not equal / not zero */

loc_00318DF5: ;
    MEM32(ecx + 0x18) = ebx;
    goto loc_00318E17;

loc_00318DFA: ;
    SET_LO8(eax, MEM8(ecx + 5));
    MEM8(esi + 0x14) = LO8(eax);
    goto loc_00318E17;

loc_00318E02: ;
    SET_LO8(eax, MEM8(ecx + 5));
    MEM8(esi + 0x14) = LO8(eax);
    eax = ecx + 0x18;
    MEM32(esi + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + 4));
    SET_LO8(eax, LO8(eax) >> 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(esi + 0x1E) = LO8(eax);

loc_00318E17: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00318E24u); RECOMP_ABI_CALL(0x0031AA80u, sub_0031AA80); /* call 0x0031AA80 */

loc_00318E24: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318E50; /* je: equal / zero */

loc_00318E29: ;
    ecx = eax;
    ecx = ecx & 0xC0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318E4A; /* jne: not equal / not zero */

loc_00318E39: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + -20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C798); PUSH32(esp, 0x00318E47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318E41u); } /* indirect call */
    }

loc_00318E47: ;
    eax = MEM32(esi + 4);

loc_00318E4A: ;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;

loc_00318E50: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00318E56
 * Original: 0x00318E56 - 0x00318E98 (66 bytes, 25 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318E56(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318E56: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 4;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318E70; /* jne: not equal / not zero */

loc_00318E65: ;
    SET_LO8(edx, MEM8(edx + 4));
    SET_LO8(edx, LO8(edx) & 0x7F);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00318E79; /* je: equal / zero */

loc_00318E70: ;
    MEM32(ecx + 0x14) = 0x20;
    goto loc_00318E94;

loc_00318E79: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00318E88; /* jne: not equal / not zero */

loc_00318E82: ;
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00318E94;

loc_00318E88: ;
    esi = MEM32(esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(eax) = esi;
    PUSH32(esp, 0x00318E94u); RECOMP_ABI_CALL(0x00318CF7u, sub_00318CF7); /* call 0x00318CF7 */

loc_00318E94: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00318E98
 * Original: 0x00318E98 - 0x00318EE3 (75 bytes, 32 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00318E98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318E98: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 5);
    POP32(esp, esi);
    MEM32(ebp + -4) = edi;

loc_00318EA8: ;
    ecx = MEM32(ebp + esi * 4 + -24);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00318EB2u); RECOMP_ABI_CALL(0x00317C08u, sub_00317C08); /* call 0x00317C08 */

loc_00318EB2: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    MEM32(ebp + esi * 4 + -24) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00318EA8; /* jne: not equal / not zero */

loc_00318EBB: ;
    edx = MEM32(0x31C83C);
    PUSH32(esp, 5);
    POP32(esp, eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 1 (8-bit) */
    ecx = ebp + esi * 4 + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00318EDA; /* je: equal / zero */

loc_00318ED3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00318ED8u); RECOMP_ABI_CALL(0x00318E56u, sub_00318E56); /* call 0x00318E56 */

loc_00318ED8: ;
    goto loc_00318EDF;

loc_00318EDA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00318EDFu); RECOMP_ABI_CALL(0x00318CF7u, sub_00318CF7); /* call 0x00318CF7 */

loc_00318EDF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00318EE3
 * Original: 0x00318EE3 - 0x00318FE9 (262 bytes, 68 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00318EE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318EE3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 1 (8-bit) */
    ebp = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00318F01; /* je: equal / zero */

loc_00318EF3: ;
    eax = esi + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x00318EFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318EF7u); } /* indirect call */
    }

loc_00318EFD: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00318F01: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00318F16; /* je: equal / zero */

loc_00318F08: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC000009Du);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x00318F11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318F0Eu); } /* indirect call */
    }

loc_00318F11: ;
    goto loc_00318FE5;

loc_00318F16: ;
    eax = eax | 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esi + 0x20);
    MEM32(esi + 0x6C) = edi;
    edi = esi + 0xB8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edi) = 0x18;
    MEM8(esi + 0xB9) = 5;
    MEM32(esi + 0xC0) = ebx;
    MEM32(esi + 0xC8) = eax;
    MEM32(esi + 0xCC) = 4;
    ecx = MEM32(ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00318F56u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00318F56: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 3;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = esi + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFFF0BDC0u;
    PUSH32(esp, eax);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x00318F75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318F6Fu); } /* indirect call */
    }

loc_00318F75: ;
    MEM8(edi) = 0x30;
    MEM8(esi + 0xB9) = 0x40;
    MEM32(esi + 0xC0) = 0x3193CA;
    MEM32(esi + 0xC4) = esi;
    MEM32(esi + 0xC8) = ebx;
    MEM32(esi + 0xD0) = ebx;
    MEM32(esi + 0xCC) = ebx;
    MEM8(esi + 0xD4) = LO8(ebx);
    MEM8(esi + 0xD5) = LO8(ebx);
    MEM8(esi + 0xD6) = LO8(ebx);
    MEM8(esi + 0xE0) = 2;
    MEM8(esi + 0xE1) = 1;
    MEM16(esi + 0xE2) = LO16(ebx);
    SET_LO16(eax, ZX8(MEM8(ebp + 5)));
    MEM16(esi + 0xE4) = LO16(eax);
    MEM16(esi + 0xE6) = LO16(ebx);
    ecx = MEM32(ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00318FE4u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00318FE4: ;
    POP32(esp, ebx);

loc_00318FE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00318FE9
 * Original: 0x00318FE9 - 0x0031906D (132 bytes, 48 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00318FE9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00318FE9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319005; /* je: equal / zero */

loc_00318FF7: ;
    eax = esi + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x00319001u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00318FFBu); } /* indirect call */
    }

loc_00319001: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00319005: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xFD;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031901C; /* jge: greater or equal (signed >=) */

loc_00319014: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031901Au); RECOMP_ABI_CALL(0x00318A44u, sub_00318A44); /* call 0x00318A44 */

loc_0031901A: ;
    edi = eax;

loc_0031901C: ;
    _fa = (uint32_t)(MEM32(esi + 0x5F)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x53425355) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5F), 0x53425355 (32-bit) */
    eax = 0xC0000001u;
    if (CMP_EQ(_fa, _fb)) goto loc_0031902C; /* je: equal / zero */

loc_0031902A: ;
    edi = eax;

loc_0031902C: ;
    ecx = MEM32(esi + 0x63);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x44) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319036; /* je: equal / zero */

loc_00319034: ;
    edi = eax;

loc_00319036: ;
    SET_LO8(ecx, MEM8(esi + 0x6B));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00319040; /* jne: not equal / not zero */

loc_0031903E: ;
    edi = eax;

loc_00319040: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031904A; /* jne: not equal / not zero */

loc_00319045: ;
    edi = 0xC000003Eu;

loc_0031904A: ;
    eax = 0xC0000000u;
    ecx = edi;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00319062; /* jne: not equal / not zero */

loc_00319057: ;
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0x00319060u); RECOMP_ABI_CALL(0x00318EE3u, sub_00318EE3); /* call 0x00318EE3 */

loc_00319060: ;
    goto loc_00319068;

loc_00319062: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x00319068u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319065u); } /* indirect call */
    }

loc_00319068: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031906D
 * Original: 0x0031906D - 0x003190F6 (137 bytes, 37 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031906D(void)
{

loc_0031906D: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    MEM32(esi + 0xC8) = eax;
    PUSH32(esp, edi);
    eax = esi + 0x5F;
    MEM32(esi + 0xD0) = eax;
    eax = ZX16(MEM16(esi + 0x34));
    PUSH32(esp, 0xFFFFFFFFu);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0xFFFE7960u);
    PUSH32(esp, edx);
    edi = esi + 0xB8;
    PUSH32(esp, eax);
    MEM8(edi) = 0x28;
    MEM8(esi + 0xB9) = 0x41;
    MEM32(esi + 0xC0) = 0x318FE9;
    MEM32(esi + 0xC4) = esi;
    MEM32(esi + 0xCC) = 0xD;
    MEM8(esi + 0xD4) = 2;
    MEM8(esi + 0xD5) = 0;
    MEM8(esi + 0xD6) = 0;
    PUSH32(esp, 0x003190D5u); RECOMP_ABI_CALL(0x0028A9A0u, sub_0028A9A0); /* call 0x0028A9A0 */

loc_003190D5: ;
    ecx = esi + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x003190E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003190E2u); } /* indirect call */
    }

loc_003190E8: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003190F3u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_003190F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003190F6
 * Original: 0x003190F6 - 0x003191F3 (253 bytes, 80 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003190F6(void)
{
    int _flags = 0; /* fallback flag var */
    int _jf_00319188 = 0; /* per-edge flags of joins */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003190F6: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    edx = 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319145; /* je: equal / zero */

loc_00319107: ;
    eax = eax & 0xFFFFF7FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + 0xB8;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), ecx (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00319123; /* jne: not equal / not zero */

loc_0031911B: ;
    ecx = MEM32(esi + 0xEC);
    goto loc_00319129;

loc_00319123: ;
    ecx = MEM32(esi + 0xBC);

loc_00319129: ;
    eax = eax & 0xFFFFF9FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00319137u); RECOMP_ABI_CALL(0x00318A44u, sub_00318A44); /* call 0x00318A44 */

loc_00319137: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x00319140u); RECOMP_ABI_CALL(0x00318EE3u, sub_00318EE3); /* call 0x00318EE3 */

loc_00319140: ;
    goto loc_003191EF;

loc_00319145: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_00319199; /* jl: less (signed <) */

loc_00319150: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 6 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00319199; /* jne: not equal / not zero */

loc_00319154: ;
    edx = MEM32(esi + 0x6C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x2C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00319168; /* jae: above or equal (unsigned >=) */

loc_0031915C: ;
    edx = esi;
    PUSH32(esp, 0x00319163u); RECOMP_ABI_CALL(0x003191F3u, sub_003191F3); /* call 0x003191F3 */

loc_00319163: ;
    goto loc_003191EE;

loc_00319168: ;
    edi = esi + 0xB8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    edx = 0x200;
    if (CMP_NE(_fa, _fb)) goto loc_00319181; /* jne: not equal / not zero */

loc_00319177: ;
    eax = eax & 0xFFFFFDFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    _jf_00319188 = (TEST_NZ(_fa, _fb)) ? 1 : 0; /* flags of this edge */
    goto loc_00319188;

loc_00319181: ;
    eax = eax & 0xFFFFFBFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    _jf_00319188 = (TEST_NZ(_fa, _fb)) ? 1 : 0; /* flags of this edge */

loc_00319188: ;
    MEM32(esi + 0xC) = eax;
    if (_jf_00319188 /* jne: not equal / not zero */) goto loc_003191EE;

loc_0031918D: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | edx;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    PUSH32(esp, 0x00319197u); RECOMP_ABI_CALL(0x0031906Du, sub_0031906D); /* call 0x0031906D */

loc_00319197: ;
    goto loc_003191EE;

loc_00319199: ;
    edi = esi + 0xB8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003191C8; /* jne: not equal / not zero */

loc_003191A3: ;
    eax = eax & 0xFFFFFDFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    MEM32(esi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003191DD; /* je: equal / zero */

loc_003191B0: ;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    eax = esi + 0xE8;
    PUSH32(esp, eax);

loc_003191BC: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, 0x003191C6u); RECOMP_ABI_CALL(0x003189A4u, sub_003189A4); /* call 0x003189A4 */

loc_003191C6: ;
    goto loc_003191EE;

loc_003191C8: ;
    eax = eax & 0xFFFFFBFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    MEM32(esi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003191DD; /* je: equal / zero */

loc_003191D5: ;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, edi);
    goto loc_003191BC;

loc_003191DD: ;
    PUSH32(esp, MEM32(ecx + 4));
    PUSH32(esp, 0x003191E5u); RECOMP_ABI_CALL(0x00318A44u, sub_00318A44); /* call 0x00318A44 */

loc_003191E5: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x003191EEu); RECOMP_ABI_CALL(0x00318EE3u, sub_00318EE3); /* call 0x00318EE3 */

loc_003191EE: ;
    POP32(esp, edi);

loc_003191EF: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003191F3
 * Original: 0x003191F3 - 0x003192B9 (198 bytes, 73 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003191F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003191F3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    SET_LO8(eax, MEM8(edi + 0x37));
    esi = ecx;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00319214; /* jne: not equal / not zero */

loc_0031920B: ;
    ebx = MEM32(edi + 0x20);
    MEM8(ebp + -1) = 2;
    goto loc_0031921B;

loc_00319214: ;
    ebx = MEM32(edi + 0x24);
    MEM8(ebp + -1) = 1;

loc_0031921B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    edx = MEM32(edi + 0x6C);
    if (TEST_Z(_fa, _fb)) goto loc_0031924A; /* je: equal / zero */

loc_00319222: ;
    ecx = MEM32(edi + 0x38);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00319231; /* jae: above or equal (unsigned >=) */

loc_00319229: ;
    eax = edx + 0x3449EC;
    goto loc_0031924F;

loc_00319231: ;
    eax = MEM32(edi + 0x3C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031923F; /* jae: above or equal (unsigned >=) */

loc_00319238: ;
    eax = MEM32(edi + 0x28);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0031924D;

loc_0031923F: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edx + 0x3449EC;
    goto loc_0031924F;

loc_0031924A: ;
    eax = MEM32(edi + 0x28);

loc_0031924D: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031924F: ;
    ecx = MEM32(edi + 0x2C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x400 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00319261; /* jbe: below or equal (unsigned <=) */

loc_0031925C: ;
    ecx = 0x400;

loc_00319261: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x6C) = edx;
    MEM32(esi + 0x18) = eax;
    SET_LO8(eax, MEM8(ebp + -1));
    edx = edi + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esi + 0x14) = ecx;
    MEM8(esi + 0x1C) = LO8(eax);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFFE91CA0u;
    PUSH32(esp, eax);
    eax = edi + 0x70;
    PUSH32(esp, eax);
    MEM8(esi) = 0x28;
    MEM8(esi + 1) = 0x41;
    MEM32(esi + 8) = 0x3190F6;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = ebx;
    MEM8(esi + 0x1D) = 0;
    MEM8(esi + 0x1E) = 0;
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x003192A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003192A3u); } /* indirect call */
    }

loc_003192A9: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003192B4u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_003192B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003192B9
 * Original: 0x003192B9 - 0x00319321 (104 bytes, 33 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003192B9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003192B9: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ecx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_L(_fas, _fbs)) goto loc_00319308; /* jl: less (signed <) */

loc_003192C9: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 6 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00319308; /* jne: not equal / not zero */

loc_003192CF: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003192FF; /* je: equal / zero */

loc_003192D4: ;
    MEM32(esi + 0x6C) = ecx;
    ecx = esi + 0xB8;
    edx = esi;
    PUSH32(esp, 0x003192E4u); RECOMP_ABI_CALL(0x003191F3u, sub_003191F3); /* call 0x003191F3 */

loc_003192E4: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x2C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031931D; /* jae: above or equal (unsigned >=) */

loc_003192EC: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 4;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = esi + 0xE8;
    edx = esi;
    PUSH32(esp, 0x003192FDu); RECOMP_ABI_CALL(0x003191F3u, sub_003191F3); /* call 0x003191F3 */

loc_003192FD: ;
    goto loc_0031931D;

loc_003192FF: ;
    ecx = esi;
    PUSH32(esp, 0x00319306u); RECOMP_ABI_CALL(0x0031906Du, sub_0031906D); /* call 0x0031906D */

loc_00319306: ;
    goto loc_0031931D;

loc_00319308: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xFD;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, 0x00319314u); RECOMP_ABI_CALL(0x00318A44u, sub_00318A44); /* call 0x00318A44 */

loc_00319314: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x0031931Du); RECOMP_ABI_CALL(0x00318EE3u, sub_00318EE3); /* call 0x00318EE3 */

loc_0031931D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00319321
 * Original: 0x00319321 - 0x003193CA (169 bytes, 44 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319321(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319321: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x40;
    MEM32(edi) = 0x43425355;
    eax = MEM32(esi + 0x10);
    MEM32(edi + 4) = eax;
    eax = MEM32(esi + 0x2C);
    MEM32(edi + 8) = eax;
    SET_LO8(eax, MEM8(esi + 0x37));
    SET_LO8(eax, LO8(eax) << 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    edx = esi + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(edi + 0xC) = LO8(eax);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFFF3CB00u;
    PUSH32(esp, eax);
    eax = esi + 0x70;
    MEM8(edi + 0xD) = 0;
    MEM8(edi + 0xE) = 0xA;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 1;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x0031936Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319364u); } /* indirect call */
    }

loc_0031936A: ;
    ecx = MEM32(esi + 0x24);
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 2;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = esi + 0xB8;
    MEM8(eax) = 0x28;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    MEM8(esi + 0xB9) = 0x41;
    MEM32(esi + 0xC0) = 0x3192B9;
    MEM32(esi + 0xC4) = esi;
    MEM32(esi + 0xC8) = ecx;
    MEM32(esi + 0xD0) = edi;
    MEM32(esi + 0xCC) = 0x1F;
    MEM8(esi + 0xD4) = 1;
    MEM8(esi + 0xD5) = 0;
    MEM8(esi + 0xD6) = 0;
    ecx = MEM32(eax);
    PUSH32(esp, 0x003193C7u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_003193C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003193CA
 * Original: 0x003193CA - 0x003195CA (512 bytes, 120 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003193CA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003193CA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0xC);
    ebx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = eax;
    eax = eax & 0xFFFFFDFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0x7000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    MEM32(esi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003193FA; /* je: equal / zero */

loc_003193EC: ;
    eax = esi + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x003193F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003193F0u); } /* indirect call */
    }

loc_003193F6: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_003193FA: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319408; /* je: equal / zero */

loc_00319401: ;
    PUSH32(esp, 0xC000009Du);
    goto loc_00319469;

loc_00319408: ;
    edx = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00319424; /* jge: greater or equal (signed >=) */

loc_00319413: ;
    eax = eax & 0xFFFF8FFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(ebx);
    PUSH32(esp, 0x00319422u); RECOMP_ABI_CALL(0x0031808Cu, sub_0031808C); /* call 0x0031808C */

loc_00319422: ;
    goto loc_00319401;

loc_00319424: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003194F3; /* je: equal / zero */

loc_00319430: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x2000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319472; /* je: equal / zero */

loc_00319438: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x4000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003195C4; /* jne: not equal / not zero */

loc_00319444: ;
    eax = eax & 0xFFFFBFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = eax;
    SET_LO8(eax, MEM8(esi + 0x36));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0x36) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00319466; /* je: equal / zero */

loc_0031945A: ;
    ecx = esi;
    PUSH32(esp, 0x00319461u); RECOMP_ABI_CALL(0x00319321u, sub_00319321); /* call 0x00319321 */

loc_00319461: ;
    goto loc_003195C4;

loc_00319466: ;
    PUSH32(esp, MEM32(esi + 0x6C));

loc_00319469: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x0031946Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031946Au); } /* indirect call */
    }

loc_0031946D: ;
    goto loc_003195C4;

loc_00319472: ;
    eax = eax & 0xFFFFDFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x4000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = esi + 0xB8;
    MEM32(esi + 0xC) = eax;
    MEM8(edi) = 0x30;
    MEM8(esi + 0xB9) = 0x40;
    MEM32(esi + 0xC0) = 0x3193CA;
    MEM32(esi + 0xC4) = esi;
    MEM32(esi + 0xC8) = ecx;
    MEM32(esi + 0xD0) = ecx;
    MEM32(esi + 0xCC) = ecx;
    MEM8(esi + 0xD4) = 1;
    MEM8(esi + 0xD5) = 0;
    MEM8(esi + 0xD6) = 0;
    MEM8(esi + 0xE0) = 0x21;
    MEM8(esi + 0xE1) = 0xFF;
    MEM16(esi + 0xE2) = LO16(ecx);
    SET_LO16(eax, ZX8(MEM8(ebx + 4)));
    MEM16(esi + 0xE4) = LO16(eax);
    MEM16(esi + 0xE6) = LO16(ecx);
    goto loc_00319599;

loc_003194F3: ;
    eax = eax & 0xFFFFEFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esi + 0x24);
    edi = esi + 0xB8;
    MEM8(edi) = 0x18;
    MEM8(esi + 0xB9) = 5;
    MEM32(esi + 0xC0) = ecx;
    MEM32(esi + 0xC8) = eax;
    MEM32(esi + 0xCC) = 4;
    ecx = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00319531u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00319531: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edi) = 0x30;
    MEM8(esi + 0xB9) = 0x40;
    MEM32(esi + 0xC0) = 0x3193CA;
    MEM32(esi + 0xC4) = esi;
    MEM32(esi + 0xC8) = eax;
    MEM32(esi + 0xD0) = eax;
    MEM32(esi + 0xCC) = eax;
    MEM8(esi + 0xD4) = LO8(eax);
    MEM8(esi + 0xD5) = LO8(eax);
    MEM8(esi + 0xD6) = LO8(eax);
    MEM8(esi + 0xE0) = 2;
    MEM8(esi + 0xE1) = 1;
    MEM16(esi + 0xE2) = LO16(eax);
    SET_LO16(ecx, ZX8(MEM8(ebx + 6)));
    MEM16(esi + 0xE4) = LO16(ecx);
    MEM16(esi + 0xE6) = LO16(eax);

loc_00319599: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 3;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = esi + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFFF0BDC0u;
    PUSH32(esp, eax);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x003195B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003195B2u); } /* indirect call */
    }

loc_003195B8: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 2;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003195C4u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_003195C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003195CA
 * Original: 0x003195CA - 0x003195F8 (46 bytes, 17 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003195CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003195CA: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x003195D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003195CEu); } /* indirect call */
    }

loc_003195D4: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 6 (8-bit) */
    SET_LO8(ebx, LO8(eax));
    if (TEST_Z(_fa, _fb)) goto loc_003195E7; /* je: equal / zero */

loc_003195DC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC000009Du);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x003195E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003195E2u); } /* indirect call */
    }

loc_003195E5: ;
    goto loc_003195EE;

loc_003195E7: ;
    ecx = esi;
    PUSH32(esp, 0x003195EEu); RECOMP_ABI_CALL(0x00319321u, sub_00319321); /* call 0x00319321 */

loc_003195EE: ;
    POP32(esp, esi);
    SET_LO8(ecx, LO8(ebx));
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x31C79C)); return; /* indirect tail jmp */

}

/**
 * sub_003195F8
 * Original: 0x003195F8 - 0x00319652 (90 bytes, 35 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003195F8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003195F8: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edx = ecx;
    MEM32(edx + 0x98) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(edx + 0x9C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edx + 0xA0) = 0;
    MEM8(edx + 0xA1) = 0;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx + 0x32;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx + 0x64;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0xA4;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00319630
 * Original: 0x00319630 - 0x00319652 (34 bytes, 17 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319630: ;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx + 0x64;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0xA4;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00319652
 * Original: 0x00319652 - 0x00319666 (20 bytes, 8 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319652(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319652: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319663; /* je: equal / zero */

loc_0031965D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x00319663u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319661u); } /* indirect call */
    }

loc_00319663: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00319666
 * Original: 0x00319666 - 0x003196AF (73 bytes, 26 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00319666(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319666: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX8(MEM8(ebp + 0xC));
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = 9;
    MEM32(ebp + -4) = 0xD;
    ecx = MEM32(ebp + eax * 4 + -16);
    eax = ZX16(MEM16(ebp + 8));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003196A2; /* jne: not equal / not zero */

loc_003196A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003196A2: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003196AB; /* je: equal / zero */

loc_003196A8: ;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_003196AB: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003196AF
 * Original: 0x003196AF - 0x003196E4 (53 bytes, 22 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003196AF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003196AF: ;
    PUSH32(esp, esi);
    eax = 0x314DD4;
    esi = 0x314DE4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    ecx = eax;
    if (CMP_AE(_fa, _fb)) goto loc_003196DA; /* jae: above or equal (unsigned >=) */

loc_003196C0: ;
    edx = MEM32(esp + 8);

loc_003196C4: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003196D3; /* je: equal / zero */

loc_003196CA: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(edx), MEM8(eax + 1) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003196D3; /* jne: not equal / not zero */

loc_003196CF: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003196E0; /* je: equal / zero */

loc_003196D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003196C4; /* jb: below (unsigned <) */

loc_003196DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003196DC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003196E0: ;
    eax = MEM32(ecx);
    goto loc_003196DC;

}

/**
 * sub_003196E4
 * Original: 0x003196E4 - 0x00319710 (44 bytes, 12 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003196E4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003196E4: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031970C; /* jge: greater or equal (signed >=) */

loc_003196EF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347BE8);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x003196FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003196F4u); } /* indirect call */
    }

loc_003196FA: ;
    PUSH32(esp, MEM32(0x347BE0));
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x0031970Cu); RECOMP_ABI_CALL(0x00317E99u, sub_00317E99); /* call 0x00317E99 */

loc_0031970C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00319710
 * Original: 0x00319710 - 0x00319734 (36 bytes, 8 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319710(void)
{

loc_00319710: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347BE8);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x0031971Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319715u); } /* indirect call */
    }

loc_0031971B: ;
    PUSH32(esp, MEM32(0x347BE0));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(eax + 4));
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x00319731u); RECOMP_ABI_CALL(0x00318165u, sub_00318165); /* call 0x00318165 */

loc_00319731: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00319734
 * Original: 0x00319734 - 0x00319791 (93 bytes, 29 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319734(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319734: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00319741u); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_00319741: ;
    SET_LO16(edi, ZX8(MEM8(eax + 3)));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax + 8;
    MEM8(ecx) = 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 9) = 0x40;
    MEM32(eax + 0x10) = 0x31A018;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM8(eax + 0x24) = LO8(edx);
    MEM8(eax + 0x25) = LO8(edx);
    MEM8(eax + 0x26) = LO8(edx);
    MEM8(eax + 0x30) = 0x23;
    MEM8(eax + 0x31) = 1;
    MEM16(eax + 0x32) = 1;
    MEM16(eax + 0x34) = LO16(edi);
    MEM16(eax + 0x36) = LO16(edx);
    PUSH32(esp, 0x0031978Cu); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_0031978C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00319791
 * Original: 0x00319791 - 0x003197C7 (54 bytes, 19 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319791(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319791: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi));
    SET_LO8(eax, LO8(eax) >> 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_003197B0; /* je: equal / zero */

loc_0031979F: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003197B0; /* jne: not equal / not zero */

loc_003197A6: ;
    PUSH32(esp, 0x003197ABu); RECOMP_ABI_CALL(0x00317E1Bu, sub_00317E1B); /* call 0x00317E1B */

loc_003197AB: ;
    MEM8(esi) = MEM8(esi) & 0xEF;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_003197C3;

loc_003197B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003197C3; /* jne: not equal / not zero */

loc_003197B4: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003197C3; /* je: equal / zero */

loc_003197BB: ;
    PUSH32(esp, 0x003197C0u); RECOMP_ABI_CALL(0x00317E14u, sub_00317E14); /* call 0x00317E14 */

loc_003197C0: ;
    MEM8(esi) = MEM8(esi) | 0x10;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_003197C3: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003197C7
 * Original: 0x003197C7 - 0x00319838 (113 bytes, 37 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003197C7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003197C7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x003197D3u); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_003197D3: ;
    ecx = MEM32(0x347C2C);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00319829; /* je: equal / zero */

loc_003197DE: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00319815; /* je: equal / zero */

loc_003197E1: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00319801; /* je: equal / zero */

loc_003197E4: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00319834; /* jne: not equal / not zero */

loc_003197E7: ;
    eax = MEM32(0x347C30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00319834; /* je: equal / zero */

loc_003197F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003197F8u); RECOMP_ABI_CALL(0x00319791u, sub_00319791); /* call 0x00319791 */

loc_003197F8: ;
    MEM32(0x347C30) = MEM32(0x347C30) & 0;
    _fa = (uint32_t)(MEM32(0x347C30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00319834;

loc_00319801: ;
    PUSH32(esp, MEM32(0x347BE0));
    ecx = esi;
    PUSH32(esp, 0x80000600u);
    PUSH32(esp, 0x00319813u); RECOMP_ABI_CALL(0x00318165u, sub_00318165); /* call 0x00318165 */

loc_00319813: ;
    goto loc_00319834;

loc_00319815: ;
    PUSH32(esp, MEM32(0x347BE0));
    ecx = esi;
    PUSH32(esp, 0x80000600u);
    PUSH32(esp, 0x00319827u); RECOMP_ABI_CALL(0x00317E99u, sub_00317E99); /* call 0x00317E99 */

loc_00319827: ;
    goto loc_00319834;

loc_00319829: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00319834u); RECOMP_ABI_CALL(0x003189A4u, sub_003189A4); /* call 0x003189A4 */

loc_00319834: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00319838
 * Original: 0x00319838 - 0x0031989B (99 bytes, 28 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319838(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319838: ;
    _fa = (uint32_t)(MEM32(0x347C30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x347C30), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = 0x347BE8;
    if (CMP_EQ(_fa, _fb)) goto loc_00319862; /* je: equal / zero */

loc_00319847: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x0031984Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319848u); } /* indirect call */
    }

loc_0031984E: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x347C30));
    PUSH32(esp, 0x0031985Bu); RECOMP_ABI_CALL(0x00319791u, sub_00319791); /* call 0x00319791 */

loc_0031985B: ;
    MEM32(0x347C30) = MEM32(0x347C30) & 0;
    _fa = (uint32_t)(MEM32(0x347C30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00319862: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00319871; /* jne: not equal / not zero */

loc_0031986A: ;
    eax = 0xFA0A1F00u;
    goto loc_00319880;

loc_00319871: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    eax = 0xFFF48E50u;
    if (CMP_EQ(_fa, _fb)) goto loc_00319880; /* je: equal / zero */

loc_0031987B: ;
    eax = 0xFFB3B4C0u;

loc_00319880: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347C10);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(0x347C2C) = edx;
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x00319897u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319891u); } /* indirect call */
    }

loc_00319897: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031989B
 * Original: 0x0031989B - 0x003199E9 (334 bytes, 117 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031989B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031989B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003198ABu); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_003198AB: ;
    esi = eax;
    SET_LO16(eax, MEM16(esi + 0x3A));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319912; /* je: equal / zero */

loc_003198B7: ;
    _fa = (uint32_t)(MEM32(0x347C2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x347C2C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031990A; /* jne: not equal / not zero */

loc_003198C0: ;
    _fa = (uint32_t)(MEM32(0x347BE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x347BE0), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031990A; /* je: equal / zero */

loc_003198C8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347BE8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x003198D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003198CFu); } /* indirect call */
    }

loc_003198D5: ;
    SET_LO16(eax, MEM16(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003198ED; /* je: equal / zero */

loc_003198DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003198ED; /* jne: not equal / not zero */

loc_003198E1: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003198F2; /* je: equal / zero */

loc_003198E6: ;
    edi = 0x1000000;
    goto loc_003198F2;

loc_003198ED: ;
    edi = 0x80000600u;

loc_003198F2: ;
    eax = MEM32(0x347BE0);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(0x347BE0) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00319907u); RECOMP_ABI_CALL(0x00317E99u, sub_00317E99); /* call 0x00317E99 */

loc_00319907: ;
    edi = MEM32(ebp + 8);

loc_0031990A: ;
    MEM8(esi + 0x3A) = MEM8(esi + 0x3A) & 0xEF;
    _fa = (uint32_t)(MEM8(esi + 0x3A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x14);
    goto loc_00319989;

loc_00319912: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319963; /* je: equal / zero */

loc_00319916: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 3));
    MEM8(ebp + 8) = LO8(ecx);
    SET_LO8(eax, 1);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(esi + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x38), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319943; /* je: equal / zero */

loc_00319929: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319938; /* je: equal / zero */

loc_0031992E: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00319938u); RECOMP_ABI_CALL(0x00318015u, sub_00318015); /* call 0x00318015 */

loc_00319938: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031993Eu); RECOMP_ABI_CALL(0x00319734u, sub_00319734); /* call 0x00319734 */

loc_0031993E: ;
    goto loc_003199E2;

loc_00319943: ;
    SET_LO8(ecx, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031995B; /* je: equal / zero */

loc_0031994A: ;
    PUSH32(esp, MEM32(ebp + 8));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) & LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = edi;
    MEM8(esi + 5) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031995Bu); RECOMP_ABI_CALL(0x00318015u, sub_00318015); /* call 0x00318015 */

loc_0031995B: ;
    MEM8(esi + 0x3A) = MEM8(esi + 0x3A) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0x3A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x10);
    goto loc_00319989;

loc_00319963: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031996F; /* je: equal / zero */

loc_00319967: ;
    SET_LO16(eax, LO16(eax) & 0xFFFD);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 0x11);
    goto loc_00319985;

loc_0031996F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031997B; /* je: equal / zero */

loc_00319973: ;
    SET_LO16(eax, LO16(eax) & 0xFFFB);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 0x12);
    goto loc_00319985;

loc_0031997B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003199D3; /* je: equal / zero */

loc_0031997F: ;
    SET_LO16(eax, LO16(eax) & 0xFFF7);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 0x13);

loc_00319985: ;
    MEM16(esi + 0x3A) = LO16(eax);

loc_00319989: ;
    POP32(esp, ecx);
    MEM16(esi + 0x32) = LO16(ecx);
    SET_LO16(ecx, ZX8(MEM8(esi + 3)));
    eax = esi + 8;
    MEM16(esi + 0x34) = LO16(ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(eax) = 0x30;
    MEM8(esi + 9) = 0x40;
    MEM32(esi + 0x10) = 0x319FE8;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM8(esi + 0x24) = LO8(ebx);
    MEM8(esi + 0x25) = LO8(ebx);
    MEM8(esi + 0x26) = LO8(ebx);
    MEM8(esi + 0x30) = 0x23;
    MEM8(esi + 0x31) = 1;
    MEM16(esi + 0x36) = LO16(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003199D1u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_003199D1: ;
    goto loc_003199E2;

loc_003199D3: ;
    MEM16(esi + 0x3A) = MEM16(esi + 0x3A) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x3A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003199E2u); RECOMP_ABI_CALL(0x00319FE8u, sub_00319FE8); /* call 0x00319FE8 */

loc_003199E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003199E9
 * Original: 0x003199E9 - 0x00319A4C (99 bytes, 30 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003199E9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003199E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = edi;
    PUSH32(esp, 0x003199F6u); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_003199F6: ;
    PUSH32(esp, 0);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x00319A01u); RECOMP_ABI_CALL(0x003189BBu, sub_003189BB); /* call 0x003189BB */

loc_00319A01: ;
    MEM8(esi) = MEM8(esi) & 0xFE;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(0x347C3A) = MEM16(0x347C3A) - 1;
    _fa = (uint32_t)(MEM16(0x347C3A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319A3B; /* je: equal / zero */

loc_00319A10: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00319A18u); RECOMP_ABI_CALL(0x00319791u, sub_00319791); /* call 0x00319791 */

loc_00319A18: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x347C30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x347C30) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00319A32; /* jne: not equal / not zero */

loc_00319A20: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347BE8);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x00319A2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319A25u); } /* indirect call */
    }

loc_00319A2B: ;
    MEM32(0x347C30) = MEM32(0x347C30) & 0;
    _fa = (uint32_t)(MEM32(0x347C30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00319A32: ;
    ecx = edi;
    PUSH32(esp, 0x00319A39u); RECOMP_ABI_CALL(0x00317E9Eu, sub_00317E9E); /* call 0x00317E9E */

loc_00319A39: ;
    goto loc_00319A47;

loc_00319A3B: ;
    PUSH32(esp, 0x80000100u);
    ecx = edi;
    PUSH32(esp, 0x00319A47u); RECOMP_ABI_CALL(0x0031826Au, sub_0031826A); /* call 0x0031826A */

loc_00319A47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00319A4C
 * Original: 0x00319A4C - 0x00319B33 (231 bytes, 60 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00319A4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319A4C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00319A5Bu); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_00319A5B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, 4);
    SET_LO8(edx, 3);
    POP32(esp, esi);
    MEM32(ebp + -4) = 1;
    edi = 0x3196E4;
    if (CMP_EQ(_fa, _fb)) goto loc_00319B1C; /* je: equal / zero */

loc_00319A76: ;
    SET_LO8(ebx, MEM8(ebp + 0xC));
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), LO8(ebx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00319B1C; /* jb: below (unsigned <) */

loc_00319A82: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), LO8(ecx) (8-bit) */
    eax = MEM32(ebp + 0x10);
    MEM32(0x347BE0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00319AA0; /* je: equal / zero */

loc_00319A8F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = edx;
    edi = 0x319710;
    MEM32(ebp + -4) = 2;

loc_00319AA0: ;
    PUSH32(esp, MEM32(ebp + -4));
    SET_LO16(eax, ZX8(LO8(ebx)));
    MEM32(0x347BB8) = edi;
    edi = MEM32(ebp + 8);
    MEM8(0x347BB0) = 0x30;
    MEM8(0x347BB1) = 0x40;
    MEM32(0x347BBC) = edi;
    MEM32(0x347BC0) = ecx;
    MEM32(0x347BC8) = ecx;
    MEM32(0x347BC4) = ecx;
    MEM8(0x347BCC) = LO8(ecx);
    MEM8(0x347BCD) = LO8(ecx);
    MEM8(0x347BCE) = LO8(ecx);
    MEM8(0x347BD8) = 0x23;
    MEM8(0x347BD9) = LO8(edx);
    MEM16(0x347BDA) = LO16(esi);
    MEM16(0x347BDC) = LO16(eax);
    MEM16(0x347BDE) = LO16(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00319B0Eu); RECOMP_ABI_CALL(0x00319838u, sub_00319838); /* call 0x00319838 */

loc_00319B0E: ;
    PUSH32(esp, 0x347BB0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00319B1Au); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00319B1A: ;
    goto loc_00319B2C;

loc_00319B1C: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x80000300u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00319B2Cu); RECOMP_ABI_CALL(0x00317E99u, sub_00317E99); /* call 0x00317E99 */

loc_00319B2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00319B33
 * Original: 0x00319B33 - 0x00319B55 (34 bytes, 9 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319B33(void)
{

loc_00319B33: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    MEM8(eax) = 0x1C;
    MEM8(eax + 1) = 0xC3;
    MEM32(eax + 8) = 0x3199E9;
    MEM32(eax + 0xC) = ecx;
    PUSH32(esp, 0x00319B52u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00319B52: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00319B55
 * Original: 0x00319B55 - 0x00319B87 (50 bytes, 16 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319B55(void)
{

loc_00319B55: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x00319B61u); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_00319B61: ;
    edx = MEM32(eax + 0x3C);
    ecx = eax + 8;
    MEM8(ecx) = 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 9) = 0x43;
    MEM32(eax + 0x10) = 0x319B33;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = edx;
    PUSH32(esp, 0x00319B83u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00319B83: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00319B87
 * Original: 0x00319B87 - 0x00319C18 (145 bytes, 49 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319B87(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319B87: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00319B94u); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_00319B94: ;
    edi = eax;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319BA4; /* je: equal / zero */

loc_00319B9C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00319BA2u); RECOMP_ABI_CALL(0x00319B55u, sub_00319B55); /* call 0x00319B55 */

loc_00319BA2: ;
    goto loc_00319C13;

loc_00319BA4: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    ecx = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00319BBC; /* jge: greater or equal (signed >=) */

loc_00319BB1: ;
    SET_LO8(eax, LO8(eax) | 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edi) = LO8(eax);
    PUSH32(esp, 0x00319BBAu); RECOMP_ABI_CALL(0x0031808Cu, sub_0031808C); /* call 0x0031808C */

loc_00319BBA: ;
    goto loc_00319C12;

loc_00319BBC: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi) = 0x18;
    MEM8(esi + 1) = 5;
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, esi);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = 4;
    PUSH32(esp, 0x00319BDAu); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00319BDA: ;
    MEM8(esi) = 0x28;
    MEM8(esi + 1) = 0x41;
    MEM32(esi + 8) = 0x319D1E;
    MEM32(esi + 0xC) = ebx;
    eax = MEM32(edi + 0x3C);
    MEM32(esi + 0x10) = eax;
    eax = edi + 0x38;
    MEM32(esi + 0x18) = eax;
    eax = ZX8(MEM8(edi + 7));
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi + 0x14) = eax;
    MEM8(esi + 0x1C) = 2;
    MEM8(esi + 0x1D) = 1;
    MEM8(esi + 0x1E) = 0;
    PUSH32(esp, 0x00319C12u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00319C12: ;
    POP32(esp, esi);

loc_00319C13: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00319C18
 * Original: 0x00319C18 - 0x00319C73 (91 bytes, 31 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319C18(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319C18: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x00319C24u); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_00319C24: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319C33; /* je: equal / zero */

loc_00319C2B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00319C31u); RECOMP_ABI_CALL(0x00319B55u, sub_00319B55); /* call 0x00319B55 */

loc_00319C31: ;
    goto loc_00319C6F;

loc_00319C33: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00319C49; /* jl: less (signed <) */

loc_00319C3D: ;
    PUSH32(esp, esi);
    MEM8(eax + 6) = 0;
    PUSH32(esp, 0x00319C47u); RECOMP_ABI_CALL(0x0031989Bu, sub_0031989B); /* call 0x0031989B */

loc_00319C47: ;
    goto loc_00319C6F;

loc_00319C49: ;
    MEM8(eax + 6) = MEM8(eax + 6) + 1;
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00319C60; /* jbe: below or equal (unsigned <=) */

loc_00319C52: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ecx);
    ecx = esi;
    PUSH32(esp, 0x00319C5Eu); RECOMP_ABI_CALL(0x0031808Cu, sub_0031808C); /* call 0x0031808C */

loc_00319C5E: ;
    goto loc_00319C6F;

loc_00319C60: ;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(edx + 0x14) = 4;
    PUSH32(esp, 0x00319C6Fu); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00319C6F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00319C73
 * Original: 0x00319C73 - 0x00319CCE (91 bytes, 31 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319C73(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319C73: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x00319C7Fu); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_00319C7F: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319C8E; /* je: equal / zero */

loc_00319C86: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00319C8Cu); RECOMP_ABI_CALL(0x00319B55u, sub_00319B55); /* call 0x00319B55 */

loc_00319C8C: ;
    goto loc_00319CCA;

loc_00319C8E: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00319CC0; /* jge: greater or equal (signed >=) */

loc_00319C98: ;
    MEM8(eax + 6) = MEM8(eax + 6) + 1;
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00319CAF; /* jbe: below or equal (unsigned <=) */

loc_00319CA1: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ecx);
    ecx = esi;
    PUSH32(esp, 0x00319CADu); RECOMP_ABI_CALL(0x0031808Cu, sub_0031808C); /* call 0x0031808C */

loc_00319CAD: ;
    goto loc_00319CCA;

loc_00319CAF: ;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(edx + 0x14) = 4;
    PUSH32(esp, 0x00319CBEu); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00319CBE: ;
    goto loc_00319CCA;

loc_00319CC0: ;
    PUSH32(esp, esi);
    MEM8(eax + 6) = 0;
    PUSH32(esp, 0x00319CCAu); RECOMP_ABI_CALL(0x00319F15u, sub_00319F15); /* call 0x00319F15 */

loc_00319CCA: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00319CCE
 * Original: 0x00319CCE - 0x00319D1E (80 bytes, 33 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00319CCE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319CCE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00319CDCu); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_00319CDC: ;
    esi = eax;
    MEM8(esi) = MEM8(esi) | 2;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebp + -4) = LO8(ebx);

loc_00319CE7: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319CFE; /* je: equal / zero */

loc_00319CEC: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00319CF7u); RECOMP_ABI_CALL(0x00318015u, sub_00318015); /* call 0x00318015 */

loc_00319CF7: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, ~LO8(eax));
    MEM8(esi + 5) = MEM8(esi + 5) & LO8(eax);
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00319CFE: ;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ebp + -4) = MEM8(ebp + -4) + 1;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(ebp + -4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 2) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00319CE7; /* jbe: below or equal (unsigned <=) */

loc_00319D0B: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 8 (8-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00319D1A; /* je: equal / zero */

loc_00319D12: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00319D1Au); RECOMP_ABI_CALL(0x00319B55u, sub_00319B55); /* call 0x00319B55 */

loc_00319D1A: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00319D1E
 * Original: 0x00319D1E - 0x00319DEA (204 bytes, 68 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319D1E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319D1E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = edi;
    PUSH32(esp, 0x00319D2Bu); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_00319D2B: ;
    esi = eax;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319D3F; /* je: equal / zero */

loc_00319D34: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00319D3Au); RECOMP_ABI_CALL(0x00319B55u, sub_00319B55); /* call 0x00319B55 */

loc_00319D3A: ;
    goto loc_00319DE5;

loc_00319D3F: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00319D89; /* jl: less (signed <) */

loc_00319D4B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x347C30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x347C30) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00319D64; /* jne: not equal / not zero */

loc_00319D53: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347BE8);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x00319D5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00319D58u); } /* indirect call */
    }

loc_00319D5E: ;
    MEM32(0x347C30) = ebx;

loc_00319D64: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00319D6Cu); RECOMP_ABI_CALL(0x00319791u, sub_00319791); /* call 0x00319791 */

loc_00319D6C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 2));
    SET_LO8(eax, 1);
    PUSH32(esp, edi);
    MEM8(esi + 6) = LO8(ebx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & MEM8(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 4) = LO8(eax);
    PUSH32(esp, 0x00319D87u); RECOMP_ABI_CALL(0x00319F15u, sub_00319F15); /* call 0x00319F15 */

loc_00319D87: ;
    goto loc_00319DE4;

loc_00319D89: ;
    MEM8(esi + 6) = MEM8(esi + 6) + 1;
    _fa = (uint32_t)(MEM8(esi + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00319DA0; /* jbe: below or equal (unsigned <=) */

loc_00319D92: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi) = LO8(ecx);
    ecx = edi;
    PUSH32(esp, 0x00319D9Eu); RECOMP_ABI_CALL(0x0031808Cu, sub_0031808C); /* call 0x0031808C */

loc_00319D9E: ;
    goto loc_00319DE4;

loc_00319DA0: ;
    MEM8(eax) = 0x30;
    MEM8(eax + 1) = 0x40;
    MEM32(eax + 8) = 0x319B87;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM8(eax + 0x1D) = LO8(ebx);
    MEM8(eax + 0x1E) = LO8(ebx);
    MEM8(eax + 0x28) = 2;
    MEM8(eax + 0x29) = 1;
    MEM16(eax + 0x2A) = LO16(ebx);
    SET_LO16(ecx, ZX8(MEM8(esi + 1)));
    MEM16(eax + 0x2C) = LO16(ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM16(eax + 0x2E) = LO16(ebx);
    PUSH32(esp, 0x00319DE4u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00319DE4: ;
    POP32(esp, ebx);

loc_00319DE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00319DEA
 * Original: 0x00319DEA - 0x00319EAA (192 bytes, 64 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319DEA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319DEA: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = edi;
    PUSH32(esp, 0x00319DF6u); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_00319DF6: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319E08; /* je: equal / zero */

loc_00319DFD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00319E03u); RECOMP_ABI_CALL(0x00319B55u, sub_00319B55); /* call 0x00319B55 */

loc_00319E03: ;
    goto loc_00319EA6;

loc_00319E08: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00319E3C; /* jge: greater or equal (signed >=) */

loc_00319E14: ;
    MEM8(eax + 6) = MEM8(eax + 6) + 1;
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00319E2B; /* jbe: below or equal (unsigned <=) */

loc_00319E1D: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ecx);
    ecx = edi;
    PUSH32(esp, 0x00319E29u); RECOMP_ABI_CALL(0x0031808Cu, sub_0031808C); /* call 0x0031808C */

loc_00319E29: ;
    goto loc_00319EA5;

loc_00319E2B: ;
    MEM32(esi + 0x14) = 4;
    PUSH32(esp, esi);

loc_00319E33: ;
    ecx = edi;
    PUSH32(esp, 0x00319E3Au); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00319E3A: ;
    goto loc_00319EA5;

loc_00319E3C: ;
    SET_LO16(ecx, MEM16(eax + 0x3A));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM8(eax + 6) = LO8(edx);
    if (TEST_Z(_fa, _fb)) goto loc_00319E51; /* je: equal / zero */

loc_00319E48: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, LO16(ecx) & 0xFFFE);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    goto loc_00319E5E;

loc_00319E51: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00319E9F; /* je: equal / zero */

loc_00319E56: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ecx, LO16(ecx) & 0xFFFD);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_00319E5E: ;
    MEM16(eax + 0x3A) = LO16(ecx);
    ecx = eax + 8;
    MEM8(ecx) = 0x30;
    MEM8(eax + 9) = 0x40;
    MEM32(eax + 0x10) = 0x319C73;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM8(eax + 0x24) = LO8(edx);
    MEM8(eax + 0x25) = LO8(edx);
    MEM8(eax + 0x26) = LO8(edx);
    MEM8(eax + 0x30) = 0x20;
    MEM8(eax + 0x31) = 1;
    MEM16(eax + 0x32) = LO16(esi);
    MEM16(eax + 0x34) = LO16(edx);
    MEM16(eax + 0x36) = LO16(edx);
    PUSH32(esp, ecx);
    goto loc_00319E33;

loc_00319E9F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00319EA5u); RECOMP_ABI_CALL(0x00319F15u, sub_00319F15); /* call 0x00319F15 */

loc_00319EA5: ;
    POP32(esp, esi);

loc_00319EA6: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00319EAA
 * Original: 0x00319EAA - 0x00319F15 (107 bytes, 33 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319EAA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319EAA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x00319EB6u); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_00319EB6: ;
    SET_LO8(ecx, MEM8(eax + 3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 2) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00319EF5; /* jne: not equal / not zero */

loc_00319EBE: ;
    ecx = MEM32(eax + 0x3C);
    MEM32(eax + 0x18) = ecx;
    ecx = eax + 0x38;
    MEM32(eax + 0x20) = ecx;
    ecx = ZX8(MEM8(eax + 7));
    MEM8(eax + 3) = 0;
    MEM8(eax + 8) = 0x28;
    MEM8(eax + 9) = 0x41;
    MEM32(eax + 0x10) = 0x319D1E;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x1C) = ecx;
    MEM8(eax + 0x24) = 2;
    MEM8(eax + 0x25) = 1;
    MEM8(eax + 0x26) = 0;
    goto loc_00319F06;

loc_00319EF5: ;
    edx = MEM32(esp + 8);
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 3) = LO8(ecx);
    SET_LO16(ecx, ZX8(LO8(ecx)));
    MEM16(edx + 0x2C) = LO16(ecx);

loc_00319F06: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00319F11u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00319F11: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00319F15
 * Original: 0x00319F15 - 0x00319FE8 (211 bytes, 74 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00319F15(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319F15: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00319F25u); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_00319F25: ;
    SET_LO8(ebx, MEM8(eax + 4));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, 1);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(ebp + 0xB) = LO8(ebx);

loc_00319F32: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00319F46; /* jne: not equal / not zero */

loc_00319F37: ;
    MEM8(eax + 3) = MEM8(eax + 3) + 1;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, MEM8(eax + 3));
    SET_LO8(edx, LO8(edx) << 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax + 2) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00319F32; /* jbe: below or equal (unsigned <=) */

loc_00319F44: ;
    goto loc_00319F4E;

loc_00319F46: ;
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(edx, LO8(edx) & MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(eax + 4) = LO8(edx);

loc_00319F4E: ;
    SET_LO8(ebx, MEM8(eax + 3));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax + 2) (8-bit) */
    MEM8(eax + 0x26) = LO8(ecx);
    MEM8(eax + 0x24) = 2;
    MEM32(eax + 0x14) = edi;
    esi = eax + 8;
    if (CMP_BE(_fa, _fb)) goto loc_00319F91; /* jbe: below or equal (unsigned <=) */

loc_00319F63: ;
    edx = MEM32(eax + 0x3C);
    MEM32(eax + 0x18) = edx;
    edx = eax + 0x38;
    MEM32(eax + 0x20) = edx;
    edx = ZX8(MEM8(eax + 7));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM8(esi) = 0x28;
    MEM8(eax + 9) = 0x41;
    MEM32(eax + 0x10) = 0x319D1E;
    MEM32(eax + 0x1C) = edx;
    MEM8(eax + 0x25) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00319F8Fu); RECOMP_ABI_CALL(0x00319791u, sub_00319791); /* call 0x00319791 */

loc_00319F8F: ;
    goto loc_00319FD9;

loc_00319F91: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    edx = eax + 0x38;
    PUSH32(esp, 4);
    MEM32(eax + 0x20) = edx;
    POP32(esp, edx);
    MEM16(eax + 0x32) = LO16(ecx);
    MEM8(eax + 0x31) = LO8(ecx);
    MEM8(eax + 0x25) = LO8(ecx);
    MEM32(eax + 0x18) = ecx;
    MEM8(eax + 9) = 0x40;
    MEM8(esi) = 0x30;
    MEM16(eax + 0x36) = LO16(edx);
    MEM32(eax + 0x1C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00319FC6; /* jne: not equal / not zero */

loc_00319FB9: ;
    MEM32(eax + 0x10) = 0x319DEA;
    MEM8(eax + 0x30) = 0xA0;
    goto loc_00319FD5;

loc_00319FC6: ;
    MEM32(eax + 0x10) = 0x319C18;
    MEM8(eax + 0x30) = 0xA3;
    SET_LO16(ecx, ZX8(LO8(ebx)));

loc_00319FD5: ;
    MEM16(eax + 0x34) = LO16(ecx);

loc_00319FD9: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00319FE1u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00319FE1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00319FE8
 * Original: 0x00319FE8 - 0x0031A018 (48 bytes, 16 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00319FE8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00319FE8: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x00319FF4u); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_00319FF4: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0031A001; /* je: equal / zero */

loc_00319FFA: ;
    PUSH32(esp, 0x00319FFFu); RECOMP_ABI_CALL(0x00319B55u, sub_00319B55); /* call 0x00319B55 */

loc_00319FFF: ;
    goto loc_0031A014;

loc_0031A001: ;
    _fa = (uint32_t)(MEM16(eax + 0x3A)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x3A), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A00F; /* je: equal / zero */

loc_0031A008: ;
    PUSH32(esp, 0x0031A00Du); RECOMP_ABI_CALL(0x0031989Bu, sub_0031989B); /* call 0x0031989B */

loc_0031A00D: ;
    goto loc_0031A014;

loc_0031A00F: ;
    PUSH32(esp, 0x0031A014u); RECOMP_ABI_CALL(0x00319F15u, sub_00319F15); /* call 0x00319F15 */

loc_0031A014: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031A018
 * Original: 0x0031A018 - 0x0031A098 (128 bytes, 45 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A018(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A018: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = edi;
    PUSH32(esp, 0x0031A026u); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_0031A026: ;
    esi = eax;
    MEM8(esi + 0x3A) = MEM8(esi + 0x3A) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0x3A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 3));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ebx, 1);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    ecx = edi;
    PUSH32(esp, 0x0031A044u); RECOMP_ABI_CALL(0x00317C4Du, sub_00317C4D); /* call 0x00317C4D */

loc_0031A044: ;
    SET_LO16(edx, ZX8(MEM8(esi + 3)));
    MEM8(esi + 5) = MEM8(esi + 5) | LO8(ebx);
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 8;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x1C) = ecx;
    MEM8(esi + 0x24) = LO8(ecx);
    MEM8(esi + 0x25) = LO8(ecx);
    MEM8(esi + 0x26) = LO8(ecx);
    MEM16(esi + 0x36) = LO16(ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(eax) = 0x30;
    MEM8(esi + 9) = 0x40;
    MEM32(esi + 0x10) = 0x319FE8;
    MEM32(esi + 0x14) = edi;
    MEM8(esi + 0x30) = 0x23;
    MEM8(esi + 0x31) = 1;
    MEM16(esi + 0x32) = 0x10;
    MEM16(esi + 0x34) = LO16(edx);
    PUSH32(esp, 0x0031A092u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_0031A092: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031A098
 * Original: 0x0031A098 - 0x0031A143 (171 bytes, 54 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A098(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A098: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = edi;
    PUSH32(esp, 0x0031A0A6u); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_0031A0A6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347BE8);
    esi = eax;
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x0031A0B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A0ADu); } /* indirect call */
    }

loc_0031A0B3: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031A0C6; /* jge: greater or equal (signed >=) */

loc_0031A0BE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031A0C4u); RECOMP_ABI_CALL(0x00319B55u, sub_00319B55); /* call 0x00319B55 */

loc_0031A0C4: ;
    goto loc_0031A13D;

loc_0031A0C6: ;
    SET_LO8(eax, MEM8(0x347B82));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    MEM8(esi + 2) = LO8(eax);
    if (CMP_BE(_fa, _fb)) goto loc_0031A0D6; /* jbe: below or equal (unsigned <=) */

loc_0031A0D2: ;
    MEM8(esi + 2) = 7;

loc_0031A0D6: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0031A0DDu); RECOMP_ABI_CALL(0x00319838u, sub_00319838); /* call 0x00319838 */

loc_0031A0DD: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(0x347C30) = esi;
    PUSH32(esp, 0x0031A0EBu); RECOMP_ABI_CALL(0x00319791u, sub_00319791); /* call 0x00319791 */

loc_0031A0EB: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0031A0F3u); RECOMP_ABI_CALL(0x0031826Au, sub_0031826A); /* call 0x0031826A */

loc_0031A0F3: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esi + 3) = 1;
    MEM8(eax) = 0x30;
    MEM8(esi + 9) = 0x40;
    MEM32(esi + 0x10) = 0x319EAA;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM8(esi + 0x24) = LO8(ebx);
    MEM8(esi + 0x25) = LO8(ebx);
    MEM8(esi + 0x26) = LO8(ebx);
    MEM8(esi + 0x30) = 0x23;
    MEM8(esi + 0x31) = 3;
    MEM16(esi + 0x32) = 8;
    MEM16(esi + 0x34) = 1;
    MEM16(esi + 0x36) = LO16(ebx);
    PUSH32(esp, 0x0031A13Du); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_0031A13D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031A143
 * Original: 0x0031A143 - 0x0031A1BF (124 bytes, 37 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A143(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A143: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x347BE8);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x0031A14Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A149u); } /* indirect call */
    }

loc_0031A14F: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031A165; /* jge: greater or equal (signed >=) */

loc_0031A15A: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0031A163u); RECOMP_ABI_CALL(0x00319B55u, sub_00319B55); /* call 0x00319B55 */

loc_0031A163: ;
    goto loc_0031A1BB;

loc_0031A165: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    MEM8(esi) = 0x30;
    MEM8(esi + 1) = 0x40;
    MEM32(esi + 8) = 0x31A098;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x18) = 0x347B80;
    MEM32(esi + 0x14) = ecx;
    MEM8(esi + 0x1C) = 2;
    MEM8(esi + 0x1D) = 1;
    MEM8(esi + 0x1E) = LO8(eax);
    MEM8(esi + 0x28) = 0xA0;
    MEM8(esi + 0x29) = 6;
    MEM16(esi + 0x2A) = 0x2900;
    MEM16(esi + 0x2C) = LO16(eax);
    MEM16(esi + 0x2E) = LO16(ecx);
    PUSH32(esp, 0x0031A1B2u); RECOMP_ABI_CALL(0x00319838u, sub_00319838); /* call 0x00319838 */

loc_0031A1B2: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0031A1BAu); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_0031A1BA: ;
    POP32(esp, edi);

loc_0031A1BB: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031A1BF
 * Original: 0x0031A1BF - 0x0031A2E5 (294 bytes, 90 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031A1BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A1BF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031A1CDu); RECOMP_ABI_CALL(0x003189B7u, sub_003189B7); /* call 0x003189B7 */

loc_0031A1CD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x347BE8);
    edi = eax;
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x0031A1DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A1D4u); } /* indirect call */
    }

loc_0031A1DA: ;
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031A2D5; /* jl: less (signed <) */

loc_0031A1E8: ;
    SET_LO16(ecx, MEM16(0x347B82));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x30 (16-bit) */
    eax = 0x347B80;
    if (CMP_A(_fa, _fb)) goto loc_0031A2D5; /* ja: above (unsigned >) */

loc_0031A200: ;
    ecx = ZX16(LO16(ecx));
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ecx (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0031A2D5; /* jb: below (unsigned <) */

loc_0031A20F: ;
    SET_LO8(eax, MEM8(eax));
    ecx = ZX8(LO8(eax));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A2D5; /* je: equal / zero */

loc_0031A21E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031A2D5; /* jae: above or equal (unsigned >=) */

loc_0031A227: ;
    eax = edx + 0x347B80;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A20F; /* jne: not equal / not zero */

loc_0031A233: ;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 4 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0031A242; /* ja: above (unsigned >) */

loc_0031A23A: ;
    SET_LO8(ecx, MEM8(eax + 4));
    MEM8(edi + 7) = LO8(ecx);
    goto loc_0031A246;

loc_0031A242: ;
    MEM8(edi + 7) = 4;

loc_0031A246: ;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(edi + 1) = LO8(ecx);
    MEM8(esi) = 0x20;
    MEM8(esi + 1) = 2;
    MEM32(esi + 8) = ebx;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(esi + 0x15) = LO8(ecx);
    SET_LO8(eax, MEM8(eax + 3));
    ecx = MEM32(ebp + 0xC);
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x16) = LO8(eax);
    MEM8(esi + 0x17) = 0x10;
    SET_LO16(eax, ZX8(MEM8(edi + 7)));
    PUSH32(esp, esi);
    MEM16(esi + 0x1C) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031A27Au); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_0031A27A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031A2D5; /* jl: less (signed <) */

loc_0031A27E: ;
    eax = MEM32(esi + 0x10);
    MEM32(edi + 0x3C) = eax;
    edi = MEM32(ebp + 0xC);
    MEM8(esi) = 0x30;
    MEM8(esi + 1) = 0x40;
    MEM32(esi + 8) = 0x31A143;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM8(esi + 0x1D) = LO8(ebx);
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM8(esi + 0x28) = LO8(ebx);
    MEM8(esi + 0x29) = 9;
    SET_LO16(eax, ZX8(MEM8(0x347B85)));
    PUSH32(esp, ebx);
    MEM16(esi + 0x2A) = LO16(eax);
    MEM16(esi + 0x2C) = LO16(ebx);
    MEM16(esi + 0x2E) = LO16(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031A2CBu); RECOMP_ABI_CALL(0x00319838u, sub_00319838); /* call 0x00319838 */

loc_0031A2CB: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031A2D3u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_0031A2D3: ;
    goto loc_0031A2DE;

loc_0031A2D5: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031A2DEu); RECOMP_ABI_CALL(0x00319B33u, sub_00319B33); /* call 0x00319B33 */

loc_0031A2DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031A2E5
 * Original: 0x0031A2E5 - 0x0031A3C7 (226 bytes, 72 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A2E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A2E5: ;
    SET_LO16(eax, MEM16(0x347C3A));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x347C38)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(0x347C38) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031A3B4; /* jae: above or equal (unsigned >=) */

loc_0031A2FE: ;
    eax = MEM32(0x347C3C);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A313; /* je: equal / zero */

loc_0031A308: ;
    ecx = eax;

loc_0031A30A: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031A30A; /* jne: not equal / not zero */

loc_0031A313: ;
    MEM16(0x347C3A) = MEM16(0x347C3A) + 1;
    _fa = (uint32_t)(MEM16(0x347C3A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0031A32Du); RECOMP_ABI_CALL(0x003189BBu, sub_003189BB); /* call 0x003189BB */

loc_0031A32D: ;
    SET_LO8(eax, MEM8(esi));
    SET_LO8(eax, LO8(eax) & 0xF5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edi = esi + 8;
    SET_LO8(eax, LO8(eax) | 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, edi);
    ecx = ebp;
    MEM8(esi) = LO8(eax);
    MEM8(esi + 5) = LO8(ebx);
    MEM8(esi + 6) = LO8(ebx);
    MEM8(edi) = 0x20;
    MEM8(esi + 9) = 0x82;
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, 0x0031A350u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_0031A350: ;
    PUSH32(esp, 0x30);
    POP32(esp, eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3197C7);
    PUSH32(esp, 0x347C10);
    MEM8(edi) = LO8(eax);
    MEM8(esi + 9) = 0x40;
    MEM32(esi + 0x10) = 0x31A1BF;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x20) = 0x347B80;
    MEM32(esi + 0x1C) = eax;
    MEM8(esi + 0x24) = 2;
    MEM8(esi + 0x25) = 1;
    MEM8(esi + 0x26) = LO8(ebx);
    MEM8(esi + 0x30) = 0x80;
    MEM8(esi + 0x31) = 6;
    MEM16(esi + 0x32) = 0x200;
    MEM16(esi + 0x34) = LO16(ebx);
    MEM16(esi + 0x36) = LO16(eax);
    { uint32_t _icall_target = MEM32(0x31C7A8); PUSH32(esp, 0x0031A3A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A39Cu); } /* indirect call */
    }

loc_0031A3A2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031A3A8u); RECOMP_ABI_CALL(0x00319838u, sub_00319838); /* call 0x00319838 */

loc_0031A3A8: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0031A3B0u); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_0031A3B0: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    goto loc_0031A3C2;

loc_0031A3B4: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x80000100u);
    PUSH32(esp, 0x0031A3C2u); RECOMP_ABI_CALL(0x0031826Au, sub_0031826A); /* call 0x0031826A */

loc_0031A3C2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031A3C7
 * Original: 0x0031A3C7 - 0x0031A456 (143 bytes, 56 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A3C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A3C7: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x460)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x460), 0 (8-bit) */
    ebp = edx;
    SET_LO8(ebx, 1);
    if (CMP_BE(_fa, _fb)) goto loc_0031A451; /* jbe: below or equal (unsigned <=) */

loc_0031A3DA: ;
    MEM8(esp + 0xC) = LO8(ebx);
    PUSH32(esp, edi);

loc_0031A3DF: ;
    SET_LO16(eax, ZX8(LO8(ebx)));
    _fa = (uint32_t)(MEM16(ebp)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp), LO16(eax) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A43C; /* je: equal / zero */

loc_0031A3E9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(ebp + 2));
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A41E; /* je: equal / zero */

loc_0031A3F6: ;
    ecx = esi + 0x461;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A40E; /* je: equal / zero */

loc_0031A402: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031A40Cu); RECOMP_ABI_CALL(0x00318152u, sub_00318152); /* call 0x00318152 */

loc_0031A40C: ;
    goto loc_0031A412;

loc_0031A40E: ;
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx) = LO8(eax);

loc_0031A412: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031A41Cu); RECOMP_ABI_CALL(0x00317E22u, sub_00317E22); /* call 0x00317E22 */

loc_0031A41C: ;
    goto loc_0031A43C;

loc_0031A41E: ;
    edi = esi + 0x461;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A43C; /* je: equal / zero */

loc_0031A42A: ;
    PUSH32(esp, MEM32(esp + 0x10));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, ~LO8(ecx));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM8(edi) = LO8(ecx);
    PUSH32(esp, 0x0031A43Cu); RECOMP_ABI_CALL(0x00318152u, sub_00318152); /* call 0x00318152 */

loc_0031A43C: ;
    MEM8(esp + 0x10) = MEM8(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(esp + 0x10));
    SET_LO8(ebx, LO8(ebx) << 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x460)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x460) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0031A3DF; /* jb: below (unsigned <) */

loc_0031A450: ;
    POP32(esp, edi);

loc_0031A451: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A456
 * Original: 0x0031A456 - 0x0031A4A3 (77 bytes, 25 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031A456(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A456: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    MEM32(eax + 0x470) = ecx;
    ecx = MEM32(ebp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(eax + 0x474) = ecx;
    ecx = MEM32(eax);
    MEM16(ebp + 8) = 0x10;
    esi = MEM32(ebp + 8);
    MEM32(ecx + edx * 4 + 0x50) = esi;
    esi = eax + 0x4A0;
    PUSH32(esp, esi);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    ecx = 0xFFF0BDC0u;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x478) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x478;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x0031A49Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A498u); } /* indirect call */
    }

loc_0031A49E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0031A4A3
 * Original: 0x0031A4A3 - 0x0031A4C0 (29 bytes, 11 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031A4A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0031A4A3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    ecx = MEM32(ebp + 0xC);
    MEM16(ebp + -4) = 1;
    edx = MEM32(ebp + -4);
    MEM32(eax + ecx * 4 + 0x50) = edx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031A4C0
 * Original: 0x0031A4C0 - 0x0031A4EB (43 bytes, 15 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A4C0: ;
    ecx = MEM32(esp + 8);
    eax = ecx + 0x470;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x474) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x474;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0031A4E7; /* je: equal / zero */

loc_0031A4D9: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x80000600u);
    { uint32_t _icall_target = edx; PUSH32(esp, 0x0031A4E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A4E5u); } /* indirect call */
    }

loc_0031A4E7: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0031A4EB
 * Original: 0x0031A4EB - 0x0031A5AA (191 bytes, 64 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031A4EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A4EB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    edx = ZX8(MEM8(esi + 0x460));
    ecx = eax + 0x54;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = ebp + -8;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(ebp + -12) = 1;
    if (CMP_BE(_fa, _fb)) goto loc_0031A59C; /* jbe: below or equal (unsigned <=) */

loc_0031A518: ;
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -20) = edx;
    PUSH32(esp, ebx);

loc_0031A51F: ;
    edi = MEM32(ecx);
    MEM32(ebp + -4) = edi;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -2), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A569; /* je: equal / zero */

loc_0031A52A: ;
    ecx = MEM32(esi + 0x474);
    ebx = esi + 0x470;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -24) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0031A569; /* je: equal / zero */

loc_0031A542: ;
    eax = esi + 0x478;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x0031A54Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A549u); } /* indirect call */
    }

loc_0031A54F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -24));
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x474) = MEM32(esi + 0x474) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x474)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0x200;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ebp + -28); PUSH32(esp, 0x0031A569u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A566u); } /* indirect call */
    }

loc_0031A569: ;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -2), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A580; /* je: equal / zero */

loc_0031A56F: ;
    eax = MEM32(ebp + -12);
    MEM16(ebp + -8) = MEM16(ebp + -8) | LO16(eax);
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A580; /* je: equal / zero */

loc_0031A57C: ;
    MEM16(ebp + -6) = MEM16(ebp + -6) | LO16(eax);
    _fa = (uint32_t)(MEM16(ebp + -6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0031A580: ;
    MEM16(ebp + -4) = MEM16(ebp + -4) & 0;
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -4);
    MEM32(ebp + -12) = MEM32(ebp + -12) << 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = MEM32(ebp + -20) - 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = ecx;
    if ((_fa != 0)) goto loc_0031A51F; /* jne: not equal / not zero */

loc_0031A59B: ;
    POP32(esp, ebx);

loc_0031A59C: ;
    edx = ebp + -8;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031A5A6u); RECOMP_ABI_CALL(0x0031A3C7u, sub_0031A3C7); /* call 0x0031A3C7 */

loc_0031A5A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0031A5AA
 * Original: 0x0031A5AA - 0x0031A5BD (19 bytes, 6 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A5AA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A5AA: ;
    eax = MEM32(0x654508);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A5BC; /* je: equal / zero */

loc_0031A5B3: ;
    ecx = MEM32(eax + 0x18);
    MEM32(0x654508) = ecx;

loc_0031A5BC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031A5BD
 * Original: 0x0031A5BD - 0x0031A731 (372 bytes, 133 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031A5BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A5BD: ;
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
    ebx = edx;
    MEM32(ebp + -12) = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x0031A5D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A5CEu); } /* indirect call */
    }

loc_0031A5D4: ;
    MEM8(ebp + -1) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031A5DCu); RECOMP_ABI_CALL(0x0031A5AAu, sub_0031A5AA); /* call 0x0031A5AA */

loc_0031A5DC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A5EE; /* jne: not equal / not zero */

loc_0031A5E2: ;
    MEM32(ebp + -8) = 0x80000100u;
    goto loc_0031A71C;

loc_0031A5EE: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = esi;
    _fb = (uint32_t)(MEM32(0x654500)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x654500);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x14) = eax;
    SET_LO8(eax, MEM8(ebx + 0x16));
    MEM8(esi + 0x11) = LO8(eax);
    SET_LO8(eax, MEM8(ebx + 0x17));
    MEM8(esi + 0x13) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 0x1E));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x11));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebx + 0x1C));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031A627u); RECOMP_ABI_CALL(0x00319666u, sub_00319666); /* call 0x00319666 */

loc_0031A627: ;
    MEM16(esi + 0x22) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 0x14));
    eax = eax ^ MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = MEM32(esi) ^ eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ZX8(MEM8(ebx + 0x15));
    ecx = MEM32(esi);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x780;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), 0 (8-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0031A65A; /* jne: not equal / not zero */

loc_0031A651: ;
    eax = eax & 0xFFFFE7FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = eax;
    goto loc_0031A674;

loc_0031A65A: ;
    _fa = (uint32_t)(MEM8(ebx + 0x15)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x15), 0x80 (8-bit) */
    PUSH32(esp, 0);
    POP32(esp, ecx);
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x1800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ecx;

loc_0031A674: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 0x1E));
    ecx = ecx & 0xFFFF5FFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = eax;
    ecx = ZX16(MEM16(ebx + 0x1C));
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x7FF0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ecx;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    edx = MEM32(ebx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A6DA; /* je: equal / zero */

loc_0031A6B3: ;
    eax = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx >> 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x1800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A6CF; /* jne: not equal / not zero */

loc_0031A6CC: ;
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0031A6CF: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A6DA; /* je: equal / zero */

loc_0031A6D3: ;
    MEM32(esi + 8) = 2;

loc_0031A6DA: ;
    SET_LO8(eax, MEM8(esi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0031A6F5; /* je: equal / zero */

loc_0031A6E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A6F5; /* je: equal / zero */

loc_0031A6E6: ;
    ecx = MEM32(ebp + -12);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031A6F0u); RECOMP_ABI_CALL(0x0031ACCFu, sub_0031ACCF); /* call 0x0031ACCF */

loc_0031A6F0: ;
    MEM32(ebp + -8) = eax;
    goto loc_0031A6FF;

loc_0031A6F5: ;
    ecx = MEM32(ebp + -12);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031A6FFu); RECOMP_ABI_CALL(0x0031ABB5u, sub_0031ABB5); /* call 0x0031ABB5 */

loc_0031A6FF: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031A70A; /* jl: less (signed <) */

loc_0031A705: ;
    MEM32(ebx + 0x10) = esi;
    goto loc_0031A71C;

loc_0031A70A: ;
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x654508);
    MEM32(esi + 0x18) = eax;
    MEM32(0x654508) = esi;

loc_0031A71C: ;
    esi = MEM32(ebp + -8);
    SET_LO8(ecx, MEM8(ebp + -1));
    MEM32(ebx + 4) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x0031A72Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A725u); } /* indirect call */
    }

loc_0031A72B: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0031A731
 * Original: 0x0031A731 - 0x0031A752 (33 bytes, 12 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0031A731(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A731: ;
    ecx = MEM32(edx + 0x10);
    eax = MEM32(ecx + 8);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0x14) = eax;
    _fa = (uint32_t)(MEM8(ecx + 0x26)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x26), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A749; /* jne: not equal / not zero */

loc_0031A743: ;
    _fa = (uint32_t)(MEM8(ecx + 0x27)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x27), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A74F; /* je: equal / zero */

loc_0031A749: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0x14) = eax;

loc_0031A74F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0031A752
 * Original: 0x0031A752 - 0x0031A780 (46 bytes, 17 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0031A752(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A752: ;
    eax = MEM32(edx + 0x10);
    edx = MEM32(edx + 0x14);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A761; /* je: equal / zero */

loc_0031A75D: ;
    MEM32(eax + 8) = MEM32(eax + 8) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0031A761: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A76A; /* je: equal / zero */

loc_0031A766: ;
    MEM32(eax + 8) = MEM32(eax + 8) | 2;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0031A76A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031A77D; /* jne: not equal / not zero */

loc_0031A76F: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A77D; /* je: equal / zero */

loc_0031A777: ;
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;

loc_0031A77D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0031A780
 * Original: 0x0031A780 - 0x0031A7B9 (57 bytes, 22 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A780: ;
    eax = MEM32(ecx + 0x41C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A79A; /* je: equal / zero */

loc_0031A78D: ;
    esi = eax;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A78D; /* jne: not equal / not zero */

loc_0031A796: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A7A5; /* jne: not equal / not zero */

loc_0031A79A: ;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x41C) = eax;
    goto loc_0031A7AB;

loc_0031A7A5: ;
    eax = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = eax;

loc_0031A7AB: ;
    eax = ecx + 0x420;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A7B7; /* jne: not equal / not zero */

loc_0031A7B5: ;
    MEM32(eax) = esi;

loc_0031A7B7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A7B9
 * Original: 0x0031A7B9 - 0x0031A7F2 (57 bytes, 22 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A7B9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A7B9: ;
    eax = MEM32(ecx + 0x424);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A7D3; /* je: equal / zero */

loc_0031A7C6: ;
    esi = eax;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A7C6; /* jne: not equal / not zero */

loc_0031A7CF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A7DE; /* jne: not equal / not zero */

loc_0031A7D3: ;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x424) = eax;
    goto loc_0031A7E4;

loc_0031A7DE: ;
    eax = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = eax;

loc_0031A7E4: ;
    eax = ecx + 0x428;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A7F0; /* jne: not equal / not zero */

loc_0031A7EE: ;
    MEM32(eax) = esi;

loc_0031A7F0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A7F2
 * Original: 0x0031A7F2 - 0x0031A821 (47 bytes, 21 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A7F2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A7F2: ;
    eax = MEM32(ecx + 0x28);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A809; /* je: equal / zero */

loc_0031A7FC: ;
    esi = eax;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A7FC; /* jne: not equal / not zero */

loc_0031A805: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A811; /* jne: not equal / not zero */

loc_0031A809: ;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x28) = eax;
    goto loc_0031A817;

loc_0031A811: ;
    eax = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = eax;

loc_0031A817: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A81F; /* jne: not equal / not zero */

loc_0031A81C: ;
    MEM32(ecx + 0x2C) = esi;

loc_0031A81F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A821
 * Original: 0x0031A821 - 0x0031A897 (118 bytes, 46 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A821(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A821: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = edx;
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x26), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A894; /* je: equal / zero */

loc_0031A82B: ;
    eax = ZX8(MEM8(edi + 0x11));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    if ((_fa == 0)) goto loc_0031A853; /* je: equal / zero */

loc_0031A836: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031A845; /* je: equal / zero */

loc_0031A83A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031A892; /* jne: not equal / not zero */

loc_0031A83D: ;
    ebx = edi + 0x28;
    ebp = edi + 0x2C;
    goto loc_0031A85F;

loc_0031A845: ;
    ebx = ecx + 0x424;
    ebp = ecx + 0x428;
    goto loc_0031A85F;

loc_0031A853: ;
    ebx = ecx + 0x41C;
    ebp = ecx + 0x420;

loc_0031A85F: ;
    PUSH32(esp, esi);

loc_0031A860: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A87E; /* jne: not equal / not zero */

loc_0031A867: ;
    eax = MEM32(esi + 0x24);
    MEM32(ebx) = eax;
    MEM32(esi + 4) = 0xC000000Fu;
    MEM8(edi + 0x26) = MEM8(edi + 0x26) - 1;
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031A87Cu); RECOMP_ABI_CALL(0x00319652u, sub_00319652); /* call 0x00319652 */

loc_0031A87C: ;
    goto loc_0031A885;

loc_0031A87E: ;
    MEM32(esp + 0x10) = esi;
    ebx = esi + 0x24;

loc_0031A885: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031A860; /* jne: not equal / not zero */

loc_0031A88A: ;
    eax = MEM32(esp + 0x10);
    MEM32(ebp) = eax;
    POP32(esp, esi);

loc_0031A892: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0031A894: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A897
 * Original: 0x0031A897 - 0x0031A8D4 (61 bytes, 24 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A897(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A897: ;
    PUSH32(esp, esi);
    esi = edx;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 0x20 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0031A8D1; /* jne: not equal / not zero */

loc_0031A8A6: ;
    MEM8(esi + 1) = MEM8(esi + 1) | 0x40;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0x0031A8AFu); RECOMP_ABI_CALL(0x0031B0BAu, sub_0031B0BA); /* call 0x0031B0BA */

loc_0031A8AF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = eax;
    _fa = (uint32_t)(MEM32(edi + 0x438)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x438), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A8C0; /* je: equal / zero */

loc_0031A8BC: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 0x40;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0031A8C0: ;
    ecx = MEM32(edi);
    PUSH32(esp, 4);
    POP32(esp, eax);
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(edi);
    MEM32(ecx + 0x10) = eax;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0031A8D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031A8D4
 * Original: 0x0031A8D4 - 0x0031A90F (59 bytes, 15 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A8D4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A8D4: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + -100);
    _fb = (uint32_t)(0xFFFFFB40u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFB40u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    SET_LO8(ecx, MEM8(eax + 0x65454C));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C898); PUSH32(esp, 0x0031A8F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A8EBu); } /* indirect call */
    }

loc_0031A8F1: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x14) = 0x80000033u;
    ecx = MEM32(esi);
    MEM32(ecx + 4) = 2;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x0031A90Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A905u); } /* indirect call */
    }

loc_0031A90B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031A90F
 * Original: 0x0031A90F - 0x0031A9C6 (183 bytes, 61 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A90F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031A90F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x22)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x22), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A924; /* je: equal / zero */

loc_0031A91A: ;
    eax = 0x40020000;
    goto loc_0031A9C2;

loc_0031A924: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x0031A92Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A926u); } /* indirect call */
    }

loc_0031A92C: ;
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x10), 0x10 (8-bit) */
    SET_LO8(ebx, LO8(eax));
    if (TEST_NZ(_fa, _fb)) goto loc_0031A9B1; /* jne: not equal / not zero */

loc_0031A937: ;
    SET_LO16(eax, MEM16(esi + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031A991; /* je: equal / zero */

loc_0031A93F: ;
    eax = ZX8(MEM8(edi + 0x11));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0031A96E; /* je: equal / zero */

loc_0031A948: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031A961; /* je: equal / zero */

loc_0031A94C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031A956; /* je: equal / zero */

loc_0031A94F: ;
    esi = 0x80000600u;
    goto loc_0031A9B6;

loc_0031A956: ;
    edx = esi;
    ecx = edi;
    PUSH32(esp, 0x0031A95Fu); RECOMP_ABI_CALL(0x0031A7F2u, sub_0031A7F2); /* call 0x0031A7F2 */

loc_0031A95F: ;
    goto loc_0031A979;

loc_0031A961: ;
    ecx = MEM32(esp + 0x10);
    edx = esi;
    PUSH32(esp, 0x0031A96Cu); RECOMP_ABI_CALL(0x0031A7B9u, sub_0031A7B9); /* call 0x0031A7B9 */

loc_0031A96C: ;
    goto loc_0031A979;

loc_0031A96E: ;
    ecx = MEM32(esp + 0x10);
    edx = esi;
    PUSH32(esp, 0x0031A979u); RECOMP_ABI_CALL(0x0031A780u, sub_0031A780); /* call 0x0031A780 */

loc_0031A979: ;
    MEM8(edi + 0x26) = MEM8(edi + 0x26) - 1;
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + 0x22) = MEM8(esi + 0x22) | 1;
    _fa = (uint32_t)(MEM8(esi + 0x22)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(esi + 4) = 0xC000000Fu;
    PUSH32(esp, 0x0031A98Du); RECOMP_ABI_CALL(0x00319652u, sub_00319652); /* call 0x00319652 */

loc_0031A98D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0031A9B6;

loc_0031A991: ;
    ecx = MEM32(esp + 0x10);
    SET_LO16(eax, LO16(eax) | 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(esi + 0x22) = LO16(eax);
    eax = ecx + 0x42C;
    edx = MEM32(eax);
    MEM32(esi + 0x24) = edx;
    edx = edi;
    MEM32(eax) = esi;
    PUSH32(esp, 0x0031A9B1u); RECOMP_ABI_CALL(0x0031A897u, sub_0031A897); /* call 0x0031A897 */

loc_0031A9B1: ;
    esi = 0x40020000;

loc_0031A9B6: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x0031A9BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A9B8u); } /* indirect call */
    }

loc_0031A9BE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);

loc_0031A9C2: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031A9C6
 * Original: 0x0031A9C6 - 0x0031AA2D (103 bytes, 40 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031A9C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031A9C6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    esi = MEM32(edi + 0x10);
    ebp = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x0031A9D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031A9D1u); } /* indirect call */
    }

loc_0031A9D7: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 0x10;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = esi;
    ecx = ebp;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0031A9E6u); RECOMP_ABI_CALL(0x0031A821u, sub_0031A821); /* call 0x0031A821 */

loc_0031A9E6: ;
    SET_LO8(eax, MEM8(esi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A9FC; /* je: equal / zero */

loc_0031A9ED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031A9FC; /* je: equal / zero */

loc_0031A9F1: ;
    edx = esi;
    ecx = ebp;
    PUSH32(esp, 0x0031A9FAu); RECOMP_ABI_CALL(0x0031AEABu, sub_0031AEAB); /* call 0x0031AEAB */

loc_0031A9FA: ;
    goto loc_0031AA05;

loc_0031A9FC: ;
    edx = esi;
    ecx = ebp;
    PUSH32(esp, 0x0031AA05u); RECOMP_ABI_CALL(0x0031ABF2u, sub_0031ABF2); /* call 0x0031ABF2 */

loc_0031AA05: ;
    edx = esi;
    ecx = ebp;
    PUSH32(esp, 0x0031AA0Eu); RECOMP_ABI_CALL(0x0031A897u, sub_0031A897); /* call 0x0031A897 */

loc_0031AA0E: ;
    eax = ebp + 0x434;
    ecx = MEM32(eax);
    MEM32(edi + 0x14) = ecx;
    SET_LO8(ecx, LO8(ebx));
    MEM32(eax) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x0031AA23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031AA1Du); } /* indirect call */
    }

loc_0031AA23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x40000000;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031AA2D
 * Original: 0x0031AA2D - 0x0031AA80 (83 bytes, 33 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031AA2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031AA2D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ebp = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x0031AA41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031AA3Bu); } /* indirect call */
    }

loc_0031AA41: ;
    edx = edi;
    ecx = ebp;
    MEM8(esp + 0x13) = LO8(eax);
    PUSH32(esp, 0x0031AA4Eu); RECOMP_ABI_CALL(0x0031A821u, sub_0031A821); /* call 0x0031A821 */

loc_0031AA4E: ;
    _fa = (uint32_t)(MEM8(edi + 0x27)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x27), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AA6E; /* je: equal / zero */

loc_0031AA53: ;
    eax = ebp + 0x430;
    ecx = MEM32(eax);
    MEM32(esi + 0x14) = ecx;
    edx = edi;
    ecx = ebp;
    MEM32(eax) = esi;
    PUSH32(esp, 0x0031AA69u); RECOMP_ABI_CALL(0x0031A897u, sub_0031A897); /* call 0x0031A897 */

loc_0031AA69: ;
    ebx = 0x40000000;

loc_0031AA6E: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x0031AA78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031AA72u); } /* indirect call */
    }

loc_0031AA78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031AA80
 * Original: 0x0031AA80 - 0x0031AB98 (280 bytes, 98 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031AA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031AA80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = ZX8(MEM8(edi + 1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031AB18; /* jg: greater (signed >) */

loc_0031AA95: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0031AB0C; /* je: equal / zero */

loc_0031AA97: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0031AB00; /* je: equal / zero */

loc_0031AA9E: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0031AAF4; /* je: equal / zero */

loc_0031AAA2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031AAE5; /* je: equal / zero */

loc_0031AAA5: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0031AAD3; /* je: equal / zero */

loc_0031AAA9: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0031AAC4; /* je: equal / zero */

loc_0031AAAD: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0031AB66; /* jne: not equal / not zero */

loc_0031AAB5: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031AABFu); RECOMP_ABI_CALL(0x0031BA9Au, sub_0031BA9A); /* call 0x0031BA9A */

loc_0031AABF: ;
    goto loc_0031AB77;

loc_0031AAC4: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031AACEu); RECOMP_ABI_CALL(0x0031B820u, sub_0031B820); /* call 0x0031B820 */

loc_0031AACE: ;
    goto loc_0031AB77;

loc_0031AAD3: ;
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031AADBu); RECOMP_ABI_CALL(0x0031B0BAu, sub_0031B0BA); /* call 0x0031B0BA */

loc_0031AADB: ;
    MEM32(edi + 0x14) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0031AB79;

loc_0031AAE5: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031AAEFu); RECOMP_ABI_CALL(0x0031A752u, sub_0031A752); /* call 0x0031A752 */

loc_0031AAEF: ;
    goto loc_0031AB77;

loc_0031AAF4: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031AAFEu); RECOMP_ABI_CALL(0x0031A731u, sub_0031A731); /* call 0x0031A731 */

loc_0031AAFE: ;
    goto loc_0031AB77;

loc_0031AB00: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031AB0Au); RECOMP_ABI_CALL(0x0031A5BDu, sub_0031A5BD); /* call 0x0031A5BD */

loc_0031AB0A: ;
    goto loc_0031AB77;

loc_0031AB0C: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031AB16u); RECOMP_ABI_CALL(0x0031BC01u, sub_0031BC01); /* call 0x0031BC01 */

loc_0031AB16: ;
    goto loc_0031AB77;

loc_0031AB18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AB6D; /* je: equal / zero */

loc_0031AB1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031AB66; /* jle: less or equal (signed <=) */

loc_0031AB22: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031AB5A; /* jle: less or equal (signed <=) */

loc_0031AB27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x43 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AB4E; /* je: equal / zero */

loc_0031AB2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x46 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AB42; /* je: equal / zero */

loc_0031AB31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031AB66; /* jne: not equal / not zero */

loc_0031AB36: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031AB40u); RECOMP_ABI_CALL(0x0031B9CDu, sub_0031B9CD); /* call 0x0031B9CD */

loc_0031AB40: ;
    goto loc_0031AB77;

loc_0031AB42: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031AB4Cu); RECOMP_ABI_CALL(0x0031AA2Du, sub_0031AA2D); /* call 0x0031AA2D */

loc_0031AB4C: ;
    goto loc_0031AB77;

loc_0031AB4E: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031AB58u); RECOMP_ABI_CALL(0x0031A9C6u, sub_0031A9C6); /* call 0x0031A9C6 */

loc_0031AB58: ;
    goto loc_0031AB77;

loc_0031AB5A: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031AB64u); RECOMP_ABI_CALL(0x0031C3CAu, sub_0031C3CA); /* call 0x0031C3CA */

loc_0031AB64: ;
    goto loc_0031AB77;

loc_0031AB66: ;
    esi = 0x80000200u;
    goto loc_0031AB79;

loc_0031AB6D: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031AB77u); RECOMP_ABI_CALL(0x0031BD20u, sub_0031BD20); /* call 0x0031BD20 */

loc_0031AB77: ;
    esi = eax;

loc_0031AB79: ;
    eax = esi;
    eax = eax & 0xC0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AB90; /* je: equal / zero */

loc_0031AB87: ;
    PUSH32(esp, edi);
    MEM32(edi + 4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031AB90u); RECOMP_ABI_CALL(0x00319652u, sub_00319652); /* call 0x00319652 */

loc_0031AB90: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031AB98
 * Original: 0x0031AB98 - 0x0031ABB5 (29 bytes, 7 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031AB98(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031AB98: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 8) = MEM32(eax + 8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(eax + 0x1F) = 0xFF;
    ecx = MEM32(0x65450C);
    MEM32(eax + 0x14) = ecx;
    MEM32(0x65450C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031ABB5
 * Original: 0x0031ABB5 - 0x0031ABF2 (61 bytes, 23 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031ABB5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031ABB5: ;
    _fa = (uint32_t)(MEM8(edx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x11), 0 (8-bit) */
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0031ABC9; /* jne: not equal / not zero */

loc_0031ABBE: ;
    esi = ecx + 0x40C;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031ABD2;

loc_0031ABC9: ;
    esi = ecx + 0x410;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031ABD2: ;
    ecx = MEM32(esi);
    MEM32(edx + 0x18) = ecx;
    MEM32(esi) = edx;
    ecx = MEM32(edx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0031ABE6; /* jne: not equal / not zero */

loc_0031ABE1: ;
    MEM32(edx + 0xC) = MEM32(edx + 0xC) & ecx;
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0031ABEC;

loc_0031ABE6: ;
    ecx = MEM32(ecx + 0x14);
    MEM32(edx + 0xC) = ecx;

loc_0031ABEC: ;
    ecx = MEM32(edx + 0x14);
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0031ABF2
 * Original: 0x0031ABF2 - 0x0031AC42 (80 bytes, 33 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031ABF2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031ABF2: ;
    _fa = (uint32_t)(MEM8(edx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x11), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0031AC07; /* jne: not equal / not zero */

loc_0031ABFA: ;
    esi = ecx + 0x40C;
    ecx = MEM32(ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031AC12;

loc_0031AC07: ;
    esi = ecx + 0x410;
    ecx = MEM32(ecx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031AC12: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031AC16: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AC23; /* je: equal / zero */

loc_0031AC1A: ;
    edi = eax;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031AC16; /* jne: not equal / not zero */

loc_0031AC23: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AC35; /* je: equal / zero */

loc_0031AC27: ;
    ecx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = ecx;
    eax = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = eax;
    goto loc_0031AC3F;

loc_0031AC35: ;
    edx = MEM32(eax + 0x18);
    MEM32(esi) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx) = eax;

loc_0031AC3F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031AC42
 * Original: 0x0031AC42 - 0x0031AC58 (22 bytes, 12 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031AC42(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031AC42: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031AC57; /* jbe: below or equal (unsigned <=) */

loc_0031AC48: ;
    PUSH32(esp, esi);

loc_0031AC49: ;
    esi = edx;
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi + eax * 2;
    if ((_fa != 0)) goto loc_0031AC49; /* jne: not equal / not zero */

loc_0031AC56: ;
    POP32(esp, esi);

loc_0031AC57: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031AC58
 * Original: 0x0031AC58 - 0x0031ACCF (119 bytes, 50 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031AC58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031AC58: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(ebp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    PUSH32(esp, edi);
    edi = edx;
    if (CMP_B(_fa, _fb)) goto loc_0031AC80; /* jb: below (unsigned <) */

loc_0031AC6A: ;
    edx = ZX8(LO8(ecx));
    PUSH32(esp, 5);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031AC78u); RECOMP_ABI_CALL(0x0031AC42u, sub_0031AC42); /* call 0x0031AC42 */

loc_0031AC78: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + eax * 4) = edi;
    goto loc_0031ACC9;

loc_0031AC80: ;
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ecx));
    MEM8(ebp + -4) = LO8(eax);
    MEM8(ebp + 0xB) = 0;
    SET_LO8(ebx, LO8(ebx) << 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */

loc_0031AC92: ;
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + esi + 0xC;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031ACB0; /* jne: not equal / not zero */

loc_0031ACA2: ;
    PUSH32(esp, MEM32(ebp + -4));
    edx = edi;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031ACAEu); RECOMP_ABI_CALL(0x0031AC58u, sub_0031AC58); /* call 0x0031AC58 */

loc_0031ACAE: ;
    goto loc_0031ACB6;

loc_0031ACB0: ;
    eax = MEM32(eax + 0xC);
    MEM32(eax + 0xC) = edi;

loc_0031ACB6: ;
    SET_LO8(eax, LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ebp + -4) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0031ACC8; /* je: equal / zero */

loc_0031ACBF: ;
    MEM8(ebp + 0xB) = MEM8(ebp + 0xB) + 1;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xB), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0031AC92; /* jb: below (unsigned <) */

loc_0031ACC8: ;
    POP32(esp, ebx);

loc_0031ACC9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031ACCF
 * Original: 0x0031ACCF - 0x0031AEAB (476 bytes, 172 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031ACCF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031ACCF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edx;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), 3 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0031AD33; /* jne: not equal / not zero */

loc_0031ACE0: ;
    SET_LO8(eax, 0x20);
    _fa = (uint32_t)(MEM8(esi + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x13), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031ACF0; /* jae: above or equal (unsigned >=) */

loc_0031ACE7: ;
    SET_LO8(edx, MEM8(esi + 0x13));

loc_0031ACEA: ;
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0031ACEA; /* ja: above (unsigned >) */

loc_0031ACF0: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(ebx, LO8(ebx) << 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    edi = 0x2EE0;
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_A(_fa, _fb)) goto loc_0031AD3F; /* ja: above (unsigned >) */

loc_0031AD02: ;
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + ecx + 0x10;

loc_0031AD0C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edx + -2));
    _fb = (uint32_t)(MEM16(edx + 2)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(edx + 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edi) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031AD26; /* jae: above or equal (unsigned >=) */

loc_0031AD1E: ;
    edi = eax;
    SET_LO8(eax, MEM8(ebp + -1));
    MEM8(ebp + -5) = LO8(eax);

loc_0031AD26: ;
    MEM8(ebp + -1) = MEM8(ebp + -1) + 1;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031AD0C; /* jbe: below or equal (unsigned <=) */

loc_0031AD31: ;
    goto loc_0031AD3F;

loc_0031AD33: ;
    SET_LO16(edi, MEM16(ecx + 0x10));
    _fb = (uint32_t)(MEM16(ecx + 0xE)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edi, LO16(edi) + MEM16(ecx + 0xE));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM8(ebp + -5) = 0;

loc_0031AD3F: ;
    SET_LO16(eax, MEM16(esi + 0x22));
    edi = ZX16(LO16(edi));
    edx = ZX16(LO16(eax));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX16(MEM16(ecx + 0x414));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031AD60; /* jle: less or equal (signed <=) */

loc_0031AD56: ;
    eax = 0x80000800u;
    goto loc_0031AEA6;

loc_0031AD60: ;
    SET_LO8(edx, MEM8(ebp + -5));
    edi = ZX8(LO8(edx));
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi + ecx + 0xC;
    MEM8(esi + 0x12) = LO8(edx);
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edi + 2) = MEM16(edi + 2) + LO16(eax);
    _fa = (uint32_t)(MEM16(edi + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031AD7F; /* jne: not equal / not zero */

loc_0031AD78: ;
    SET_LO8(eax, 1);
    MEM8(ebp + -1) = LO8(eax);
    goto loc_0031AD90;

loc_0031AD7F: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(ebp + -1) = LO8(eax);
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0031ADD0; /* ja: above (unsigned >) */

loc_0031AD90: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0031ADC2; /* ja: above (unsigned >) */

loc_0031AD95: ;
    edx = ZX8(MEM8(ebp + -1));
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + ecx + 0x12;
    MEM32(ebp + -16) = edx;
    SET_LO8(edx, LO8(eax));
    _fb = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - MEM8(ebp + -1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(LO8(edx));
    MEM32(ebp + -12) = edx;
    edx = MEM32(ebp + -16);

loc_0031ADB3: ;
    SET_LO16(ebx, MEM16(esi + 0x22));
    _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edx) = MEM16(edx) + LO16(ebx);
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031ADB3; /* jne: not equal / not zero */

loc_0031ADC2: ;
    MEM8(ebp + -1) = MEM8(ebp + -1) << 1;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031AD90; /* jbe: below or equal (unsigned <=) */

loc_0031ADCD: ;
    SET_LO8(edx, MEM8(ebp + -5));

loc_0031ADD0: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    MEM8(ebp + -1) = LO8(edx);
    if (CMP_BE(_fa, _fb)) goto loc_0031AE39; /* jbe: below or equal (unsigned <=) */

loc_0031ADD8: ;
    SET_LO8(eax, MEM8(ebp + -1));
    edx = ZX8(MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) ^ 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = ZX8(LO8(eax));
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + ecx + 0xC;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ebx, MEM16(edx + 4));
    SET_LO16(edx, MEM16(edx + 2));
    eax = eax + ecx + 0xC;
    MEM16(ebp + -12) = LO16(edx);
    edx = ZX16(MEM16(eax + 4));
    eax = ZX16(MEM16(eax + 2));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX16(MEM16(ebp + -12));
    MEM32(ebp + -16) = ebx;
    ebx = ZX16(LO16(ebx));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031AE39; /* jle: less or equal (signed <=) */

loc_0031AE1A: ;
    SET_LO8(eax, MEM8(ebp + -1));
    ebx = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ZX8(LO8(eax));
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM16(ebx + ecx + 0x10) = LO16(edx);
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_A(_fa, _fb)) goto loc_0031ADD8; /* ja: above (unsigned >) */

loc_0031AE39: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031AE4B; /* jne: not equal / not zero */

loc_0031AE3F: ;
    SET_LO16(eax, MEM16(ecx + 0x20));
    _fb = (uint32_t)(MEM16(ecx + 0x1E)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(ecx + 0x1E));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(ecx + 0x10) = LO16(eax);

loc_0031AE4B: ;
    eax = MEM32(edi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031AE8A; /* jne: not equal / not zero */

loc_0031AE54: ;
    SET_LO8(eax, MEM8(ebp + -5));
    goto loc_0031AE5D;

loc_0031AE59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AE6B; /* je: equal / zero */

loc_0031AE5D: ;
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    ebx = ZX8(LO8(eax));
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebx + ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + ecx + 0x14), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AE59; /* je: equal / zero */

loc_0031AE6B: ;
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AE7F; /* je: equal / zero */

loc_0031AE79: ;
    eax = MEM32(eax + 0x14);
    MEM32(esi + 0xC) = eax;

loc_0031AE7F: ;
    MEM32(edi + 8) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(esi + 0x18) = edx;
    goto loc_0031AE99;

loc_0031AE8A: ;
    MEM32(esi + 0x18) = eax;
    MEM32(edi + 8) = esi;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x14);
    MEM32(esi + 0xC) = eax;

loc_0031AE99: ;
    PUSH32(esp, MEM32(ebp + -5));
    edx = MEM32(esi + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031AEA4u); RECOMP_ABI_CALL(0x0031AC58u, sub_0031AC58); /* call 0x0031AC58 */

loc_0031AEA4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031AEA6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0031AEAB
 * Original: 0x0031AEAB - 0x0031B024 (377 bytes, 138 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031AEAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031AEAB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO16(eax, MEM16(edx + 0x22));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x12));
    MEM16(ebp + -16) = LO16(eax);
    eax = ZX8(LO8(ebx));
    PUSH32(esp, esi);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ecx;
    PUSH32(esp, edi);
    edi = eax + esi + 0xC;
    eax = MEM32(edi + 8);
    MEM32(ebp + -20) = edx;
    MEM8(ebp + -12) = LO8(ebx);

loc_0031AED8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AEE6; /* je: equal / zero */

loc_0031AEDC: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031AED8; /* jne: not equal / not zero */

loc_0031AEE6: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031AF21; /* jne: not equal / not zero */

loc_0031AEED: ;
    ecx = MEM32(ebp + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(edi + 0xC) = ecx;
    MEM32(ebp + -8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0031AF29; /* je: equal / zero */

loc_0031AEFC: ;
    SET_LO8(edx, LO8(ebx));
    goto loc_0031AF04;

loc_0031AF00: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AF13; /* je: equal / zero */

loc_0031AF04: ;
    SET_LO8(edx, LO8(edx) >> 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    ecx = ZX8(LO8(edx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ecx + esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + esi + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AF00; /* je: equal / zero */

loc_0031AF13: ;
    ecx = ZX8(LO8(edx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ecx + esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031AF26; /* je: equal / zero */

loc_0031AF21: ;
    edx = MEM32(ecx + 0x14);
    goto loc_0031AF29;

loc_0031AF26: ;
    edx = MEM32(ebp + -8);

loc_0031AF29: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(eax + 0x18);
    if (CMP_NE(_fa, _fb)) goto loc_0031AF42; /* jne: not equal / not zero */

loc_0031AF33: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = esi;
    MEM32(edi + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031AF40u); RECOMP_ABI_CALL(0x0031AC58u, sub_0031AC58); /* call 0x0031AC58 */

loc_0031AF40: ;
    goto loc_0031AF48;

loc_0031AF42: ;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0xC) = edx;

loc_0031AF48: ;
    SET_LO16(eax, MEM16(ebp + -16));
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(edi + 2) = MEM16(edi + 2) - LO16(eax);
    _fa = (uint32_t)(MEM16(edi + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031B01B; /* jne: not equal / not zero */

loc_0031AF58: ;
    SET_LO8(eax, 1);
    SET_LO8(ecx, LO8(eax));

loc_0031AF5C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0031AF88; /* ja: above (unsigned >) */

loc_0031AF60: ;
    edx = ZX8(LO8(ecx));
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + esi + 0x12;
    SET_LO8(edx, LO8(eax));
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(LO8(edx));
    MEM32(ebp + -4) = edx;

loc_0031AF76: ;
    edx = MEM32(ebp + -20);
    SET_LO16(edx, MEM16(edx + 0x22));
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(edi) = MEM16(edi) - LO16(edx);
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031AF76; /* jne: not equal / not zero */

loc_0031AF88: ;
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) << 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031AF5C; /* jbe: below or equal (unsigned <=) */

loc_0031AF92: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031B008; /* jbe: below or equal (unsigned <=) */

loc_0031AF97: ;
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) ^ 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = ZX8(LO8(edx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + esi + 0xC;
    edi = ZX16(MEM16(ecx + 4));
    ecx = ZX16(MEM16(ecx + 2));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(LO8(ebx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -4) = edi;
    ecx = ecx + esi + 0xC;
    edi = ZX16(MEM16(ecx + 4));
    ecx = ZX16(MEM16(ecx + 2));
    SET_LO8(eax, LO8(ebx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -4) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031AFE2; /* jg: greater (signed >) */

loc_0031AFD0: ;
    ecx = ZX8(LO8(eax));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX16(MEM16(ecx + esi + 0x10));
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B005; /* je: equal / zero */

loc_0031AFE0: ;
    SET_LO8(ebx, LO8(edx));

loc_0031AFE2: ;
    ecx = ZX8(LO8(ebx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + esi + 0xC;
    SET_LO16(edx, MEM16(ecx + 4));
    _fb = (uint32_t)(MEM16(ecx + 2)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + MEM16(ecx + 2));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX8(LO8(eax));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM16(ecx + esi + 0x10) = LO16(edx);
    SET_LO8(ebx, LO8(eax));
    if (CMP_A(_fa, _fb)) goto loc_0031AF97; /* ja: above (unsigned >) */

loc_0031B005: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */

loc_0031B008: ;
    if (CMP_NE(_fa, _fb)) goto loc_0031B016; /* jne: not equal / not zero */

loc_0031B00A: ;
    SET_LO16(eax, MEM16(esi + 0x20));
    _fb = (uint32_t)(MEM16(esi + 0x1E)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(esi + 0x1E));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(esi + 0x10) = LO16(eax);

loc_0031B016: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0031B01B: ;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    goto loc_0031AF88;

}

/**
 * sub_0031B024
 * Original: 0x0031B024 - 0x0031B0BA (150 bytes, 51 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B024(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B024: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    MEM32(0x347C58) = MEM32(0x347C58) + 1;
    _fa = (uint32_t)(MEM32(0x347C58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_0031B0B3; /* je: equal / zero */

loc_0031B03C: ;
    edi = 0x80000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031B0B3; /* je: equal / zero */

loc_0031B045: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    MEM32(ecx + 0x14) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0031B055; /* je: equal / zero */

loc_0031B04F: ;
    MEM32(ecx + 0xC) = eax;
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0031B055: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031B089; /* je: equal / zero */

loc_0031B05A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    ebx = ZX16(MEM16(ebx + 0x80));
    edi = esi + 0x418;
    eax = MEM32(edi);
    ebx = ebx ^ eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebx & 0x8000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    MEM32(ecx + 0xC) = 0x20;
    edx = edx & 0xFFFFFFDFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebx);

loc_0031B089: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B0A6; /* je: equal / zero */

loc_0031B08D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esi + 0x438) = edx;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x440) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x440;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C8DC); PUSH32(esp, 0x0031B0A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B09Eu); } /* indirect call */
    }

loc_0031B0A4: ;
    goto loc_0031B0AF;

loc_0031B0A6: ;
    eax = MEM32(esi);
    MEM32(eax + 0x10) = 0x80000000u;

loc_0031B0AF: ;
    SET_LO8(eax, 1);
    goto loc_0031B0B5;

loc_0031B0B3: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0031B0B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031B0BA
 * Original: 0x0031B0BA - 0x0031B0DE (36 bytes, 10 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B0BA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B0BA: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 0x418);
    ecx = ZX16(MEM16(eax + 0x80));
    eax = ecx;
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0031B0DE
 * Original: 0x0031B0DE - 0x0031B1F1 (275 bytes, 97 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031B0DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B0DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 0x418);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    RECOMP_UNIMPL("cli", 0x0031B0EAu); /* TODO: cli */
    eax = MEM32(ecx + 8);
    eax = ZX16(MEM16(eax + 0x80));
    ebx = MEM32(-25157620);
    RECOMP_UNIMPL("sti", 0x0031B0FBu); /* TODO: sti */
    esi = eax;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi ^ edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi & 0x8000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    _fb = (uint32_t)(MEM32(ecx + 0x4D8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0x4D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0031B1ED; /* jb: below (unsigned <) */

loc_0031B123: ;
    edx = MEM32(ecx + 0x4D0);
    PUSH32(esp, edi);
    edi = esi + esi * 2;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031B14E; /* jne: not equal / not zero */

loc_0031B136: ;
    MEM32(ecx + 0x4D4) = MEM32(ecx + 0x4D4) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x4D4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x4D0) = edi;
    MEM32(ecx + 0x4D8) = esi;
    goto loc_0031B1EC;

loc_0031B14E: ;
    eax = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_0031B157; /* jns: not sign (positive) */

loc_0031B154: ;
    _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031B157: ;
    PUSH32(esp, 0x30);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ebx = MEM32(ecx + 0x4D4);
    edx = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0031B17E; /* jne: not equal / not zero */

loc_0031B169: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B1EC; /* je: equal / zero */

loc_0031B16D: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61A8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x61A8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031B1EC; /* jbe: below or equal (unsigned <=) */

loc_0031B176: ;
    MEM32(ecx + 0x4D8) = esi;
    goto loc_0031B1A8;

loc_0031B17E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    MEM32(ecx + 0x4D4) = eax;
    MEM32(ecx + 0x4D8) = esi;
    if (CMP_G(_fas, _fbs)) goto loc_0031B136; /* jg: greater (signed >) */

loc_0031B18F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFDu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031B136; /* jl: less (signed <) */

loc_0031B194: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B1EC; /* je: equal / zero */

loc_0031B198: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031B1A2; /* jle: less or equal (signed <=) */

loc_0031B19C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031B1A8; /* jge: greater or equal (signed >=) */

loc_0031B1A0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */

loc_0031B1A2: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0031B1EC; /* jge: greater or equal (signed >=) */

loc_0031B1A4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031B1EC; /* jg: greater (signed >) */

loc_0031B1A8: ;
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edx;
    eax = 0x3FFF;
    if (CMP_LE(_fas, _fbs)) goto loc_0031B1C7; /* jle: less or equal (signed <=) */

loc_0031B1B8: ;
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2EE1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2EE1 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031B1DA; /* jae: above or equal (unsigned >=) */

loc_0031B1C2: ;
    esi = edx + 1;
    goto loc_0031B1D4;

loc_0031B1C7: ;
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2ED1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2ED1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031B1DA; /* jbe: below or equal (unsigned <=) */

loc_0031B1D1: ;
    esi = edx + -1;

loc_0031B1D4: ;
    esi = esi ^ edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031B1DA: ;
    eax = edx;
    eax = ~eax;
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ~edx;
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x34) = eax;

loc_0031B1EC: ;
    POP32(esp, edi);

loc_0031B1ED: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0031B1F1
 * Original: 0x0031B1F1 - 0x0031B26D (124 bytes, 48 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B1F1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B1F1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = edx;
    MEM8(esi + 0x27) = MEM8(esi + 0x27) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x27)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0031B214; /* je: equal / zero */

loc_0031B206: ;
    ecx = ZX16(MEM16(edi + 0x20));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C8D8); PUSH32(esp, 0x0031B214u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B20Eu); } /* indirect call */
    }

loc_0031B214: ;
    _fa = (uint32_t)(MEM8(edi + 0x22)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x22), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031B25D; /* je: equal / zero */

loc_0031B21A: ;
    eax = MEM32(ebx + 0x42C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B25D; /* je: equal / zero */

loc_0031B226: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B233; /* je: equal / zero */

loc_0031B22A: ;
    ecx = eax;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031B226; /* jne: not equal / not zero */

loc_0031B233: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B25D; /* je: equal / zero */

loc_0031B237: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031B246; /* jne: not equal / not zero */

loc_0031B23B: ;
    ecx = MEM32(eax + 0x24);
    MEM32(ebx + 0x42C) = ecx;
    goto loc_0031B24C;

loc_0031B246: ;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x24) = edx;

loc_0031B24C: ;
    MEM32(eax + 0x24) = MEM32(eax + 0x24) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x20) = MEM8(esi + 0x20) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031B25D; /* jne: not equal / not zero */

loc_0031B255: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) & 0xDF;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 1) = MEM8(esi + 1) & 0xBF;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0031B25D: ;
    MEM8(edi + 0x22) = MEM8(edi + 0x22) | 8;
    _fa = (uint32_t)(MEM8(edi + 0x22)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B267u); RECOMP_ABI_CALL(0x00319652u, sub_00319652); /* call 0x00319652 */

loc_0031B267: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031B26D
 * Original: 0x0031B26D - 0x0031B29F (50 bytes, 15 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B26D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031B26D: ;
    eax = ZX8(MEM8(edx + 0x11));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0031B292; /* je: equal / zero */

loc_0031B276: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031B286; /* je: equal / zero */

loc_0031B27A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031B29E; /* jne: not equal / not zero */

loc_0031B27D: ;
    MEM16(edx + 0x24) = MEM16(edx + 0x24) - 1;
    _fa = (uint32_t)(MEM16(edx + 0x24)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0031C232(); return; /* tail jmp 0x0031C232 */

loc_0031B286: ;
    MEM16(0x654526) = MEM16(0x654526) + 1;
    _fa = (uint32_t)(MEM16(0x654526)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0031C285(); return; /* tail jmp 0x0031C285 */

loc_0031B292: ;
    MEM16(0x654522) = MEM16(0x654522) + 1;
    _fa = (uint32_t)(MEM16(0x654522)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0031C2D2(); return; /* tail jmp 0x0031C2D2 */

loc_0031B29E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031B29F
 * Original: 0x0031B29F - 0x0031B393 (244 bytes, 87 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031B29F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B29F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edx);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x18);
    PUSH32(esp, esi);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x14);
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -16) = ebx;
    MEM8(ebp + -1) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0031B30E; /* jne: not equal / not zero */

loc_0031B2C2: ;
    _fa = (uint32_t)(MEM8(ebx + 0x1D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x1D), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B30E; /* je: equal / zero */

loc_0031B2C8: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B2FD; /* je: equal / zero */

loc_0031B2CF: ;
    ecx = MEM32(edx + 0xC);
    esi = 0xFFF;
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0031B2ED; /* jl: less (signed <) */

loc_0031B2E2: ;
    eax = ZX8(MEM8(edx + 0x1D));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031B2FA;

loc_0031B2ED: ;
    esi = ZX8(MEM8(edx + 0x1D));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + eax + -4096;

loc_0031B2FA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0031B301;

loc_0031B2FD: ;
    eax = ZX8(MEM8(edx + 0x1D));

loc_0031B301: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 4) = MEM32(ebx + 4) & 0;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebp + -1) = 0;
    goto loc_0031B327;

loc_0031B30E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031B31A; /* jne: not equal / not zero */

loc_0031B313: ;
    MEM32(ebx + 4) = 0xC000000Fu;

loc_0031B31A: ;
    eax = MEM32(edx);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0xC0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 4) = eax;

loc_0031B327: ;
    esi = MEM32(edi + 8);
    esi = esi & 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0031B32D: ;
    SET_LO8(ebx, MEM8(edx + 0x1C));
    PUSH32(esp, edx);
    SET_LO8(ebx, LO8(ebx) & 2);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B339u); RECOMP_ABI_CALL(0x0031AB98u, sub_0031AB98); /* call 0x0031AB98 */

loc_0031B339: ;
    ecx = MEM32(ebp + -8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B343u); RECOMP_ABI_CALL(0x0031B26Du, sub_0031B26D); /* call 0x0031B26D */

loc_0031B343: ;
    eax = MEM32(0x654500);
    edx = eax + esi;
    _fa = (uint32_t)(MEM8(edx + 0x1E)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x1E), 2 (8-bit) */
    esi = MEM32(edx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_0031B35A; /* jne: not equal / not zero */

loc_0031B354: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B35E; /* je: equal / zero */

loc_0031B35A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B32D; /* je: equal / zero */

loc_0031B35E: ;
    eax = MEM32(edx + 0x10);
    eax = eax ^ MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(edi + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0031B37E; /* je: equal / zero */

loc_0031B371: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + -8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B37Eu); RECOMP_ABI_CALL(0x0031B1F1u, sub_0031B1F1); /* call 0x0031B1F1 */

loc_0031B37E: ;
    _fa = (uint32_t)(MEM8(edi + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x11), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B38A; /* je: equal / zero */

loc_0031B384: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031B38E; /* jne: not equal / not zero */

loc_0031B38A: ;
    MEM32(edi + 8) = MEM32(edi + 8) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0031B38E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0031B393
 * Original: 0x0031B393 - 0x0031B43F (172 bytes, 64 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031B393(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B393: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = edx;
    _fa = (uint32_t)(MEM8(esi + 0x1E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1E), 1 (8-bit) */
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0031B3C8; /* jne: not equal / not zero */

loc_0031B3AE: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(0x654500);
    eax = eax + ecx + -7;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B3C1u); RECOMP_ABI_CALL(0x0031AB98u, sub_0031AB98); /* call 0x0031AB98 */

loc_0031B3C1: ;
    MEM16(0x654522) = MEM16(0x654522) + 1;
    _fa = (uint32_t)(MEM16(0x654522)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_0031B3C8: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 3), 0xF0 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031B3DA; /* je: equal / zero */

loc_0031B3CE: ;
    ecx = MEM32(ebp + -4);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B3D8u); RECOMP_ABI_CALL(0x0031B29Fu, sub_0031B29F); /* call 0x0031B29F */

loc_0031B3D8: ;
    goto loc_0031B43B;

loc_0031B3DA: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0031B408; /* je: equal / zero */

loc_0031B3E2: ;
    ecx = MEM32(esi + 0xC);
    edx = 0xFFF;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = eax;
    eax = ZX8(MEM8(esi + 0x1D));
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031B3FE; /* jl: less (signed <) */

loc_0031B3FA: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031B405;

loc_0031B3FE: ;
    eax = eax + ebx + -4096;

loc_0031B405: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0031B40C;

loc_0031B408: ;
    eax = ZX8(MEM8(esi + 0x1D));

loc_0031B40C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 0x14) = MEM32(edi + 0x14) + eax;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, MEM8(esi + 0x1C));
    PUSH32(esp, esi);
    SET_LO8(ebx, LO8(ebx) & 2);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B41Bu); RECOMP_ABI_CALL(0x0031AB98u, sub_0031AB98); /* call 0x0031AB98 */

loc_0031B41B: ;
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B426u); RECOMP_ABI_CALL(0x0031B26Du, sub_0031B26D); /* call 0x0031B26D */

loc_0031B426: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0031B43B; /* je: equal / zero */

loc_0031B42B: ;
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    MEM32(edi + 4) = MEM32(edi + 4) & 0;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B43Bu); RECOMP_ABI_CALL(0x0031B1F1u, sub_0031B1F1); /* call 0x0031B1F1 */

loc_0031B43B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0031B43F
 * Original: 0x0031B43F - 0x0031B541 (258 bytes, 87 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031B43F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B43F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = edx;
    ebx = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x42C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x42C), edx (32-bit) */
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0031B530; /* je: equal / zero */

loc_0031B462: ;
    PUSH32(esp, esi);
    goto loc_0031B468;

loc_0031B465: ;
    edi = MEM32(ebp + -20);

loc_0031B468: ;
    ecx = MEM32(ebx + 0x42C);
    eax = MEM32(ecx + 0x24);
    MEM32(ebx + 0x42C) = eax;
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031B48A; /* jae: above or equal (unsigned >=) */

loc_0031B47F: ;
    MEM32(ecx + 0x24) = edx;
    MEM32(ebp + -4) = ecx;
    goto loc_0031B51F;

loc_0031B48A: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031B49C; /* je: equal / zero */

loc_0031B491: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & 0xBF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi + 0x1C) = edi;
    MEM8(esi + 0x10) = LO8(eax);
    goto loc_0031B47F;

loc_0031B49C: ;
    eax = MEM32(esi + 8);
    edi = MEM32(0x654500);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -24) = eax;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edi + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x18) (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0031B4D2; /* je: equal / zero */

loc_0031B4BA: ;
    ebx = MEM32(esi + 4);

loc_0031B4BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B4CF; /* je: equal / zero */

loc_0031B4C1: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(edx + 8);
    edx = edi + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031B4BD; /* jne: not equal / not zero */

loc_0031B4CF: ;
    ebx = MEM32(ebp + -8);

loc_0031B4D2: ;
    eax = MEM32(edx + 8);
    eax = eax ^ MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM8(edx + 3) = MEM8(edx + 3) | 0xF0;
    _fa = (uint32_t)(MEM8(edx + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B4ECu); RECOMP_ABI_CALL(0x0031B393u, sub_0031B393); /* call 0x0031B393 */

loc_0031B4EC: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B512; /* je: equal / zero */

loc_0031B4F3: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(0x654500);
    ecx = ecx & 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + eax + 8) = ecx;
    eax = MEM32(esi + 8);
    eax = eax ^ MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;

loc_0031B512: ;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031B51F; /* jne: not equal / not zero */

loc_0031B517: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) & 0xDF;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 1) = MEM8(esi + 1) & 0xBF;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0031B51F: ;
    _fa = (uint32_t)(MEM32(ebx + 0x42C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x42C), 0 (32-bit) */
    edx = MEM32(ebp + -4);
    if (CMP_NE(_fa, _fb)) goto loc_0031B465; /* jne: not equal / not zero */

loc_0031B52F: ;
    POP32(esp, esi);

loc_0031B530: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(ebx + 0x42C) = edx;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0031B541
 * Original: 0x0031B541 - 0x0031B597 (86 bytes, 35 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B541(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B541: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    edi = ecx;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0031B54A: ;
    eax = MEM32(esi + 8);
    ecx = eax;
    ecx = ecx & 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0031B593; /* je: equal / zero */

loc_0031B554: ;
    edx = MEM32(0x654500);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B57D; /* je: equal / zero */

loc_0031B561: ;
    eax = MEM32(edx + 8);
    MEM8(edx + 3) = MEM8(edx + 3) | 0xF0;
    _fa = (uint32_t)(MEM8(edx + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = eax ^ MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0031B57Bu); RECOMP_ABI_CALL(0x0031B393u, sub_0031B393); /* call 0x0031B393 */

loc_0031B57B: ;
    goto loc_0031B58F;

loc_0031B57D: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0031B58Du); RECOMP_ABI_CALL(0x0031AB98u, sub_0031AB98); /* call 0x0031AB98 */

loc_0031B58D: ;
    SET_LO8(ebx, 1);

loc_0031B58F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B54A; /* je: equal / zero */

loc_0031B593: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031B597
 * Original: 0x0031B597 - 0x0031B61E (135 bytes, 50 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B597(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031B597: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x430)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x430), ebp (32-bit) */
    MEM32(esp + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0031B60D; /* je: equal / zero */

loc_0031B5AA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0031B5AC: ;
    edi = MEM32(ebx + 0x430);
    eax = MEM32(edi + 0x24);
    MEM32(ebx + 0x430) = eax;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031B5CA; /* jae: above or equal (unsigned >=) */

loc_0031B5C3: ;
    MEM32(edi + 0x14) = ebp;
    ebp = edi;
    goto loc_0031B602;

loc_0031B5CA: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031B5DE; /* je: equal / zero */

loc_0031B5D1: ;
    ecx = edx + 1;
    SET_LO8(eax, LO8(eax) & 0xBF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi + 0x1C) = ecx;
    MEM8(esi + 0x10) = LO8(eax);
    goto loc_0031B5C3;

loc_0031B5DE: ;
    edx = esi;
    ecx = ebx;
    PUSH32(esp, 0x0031B5E7u); RECOMP_ABI_CALL(0x0031B541u, sub_0031B541); /* call 0x0031B541 */

loc_0031B5E7: ;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031B5F4; /* jne: not equal / not zero */

loc_0031B5EC: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) & 0xDF;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 1) = MEM8(esi + 1) & 0xBF;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0031B5F4: ;
    MEM32(edi + 4) = MEM32(edi + 4) & 0;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031B5FEu); RECOMP_ABI_CALL(0x00319652u, sub_00319652); /* call 0x00319652 */

loc_0031B5FE: ;
    edx = MEM32(esp + 0x10);

loc_0031B602: ;
    _fa = (uint32_t)(MEM32(ebx + 0x430)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x430), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031B5AC; /* jne: not equal / not zero */

loc_0031B60B: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0031B60D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x430) = ebp;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031B61E
 * Original: 0x0031B61E - 0x0031B6F8 (218 bytes, 75 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031B61E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B61E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x434)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x434), ecx (32-bit) */
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0031B6E8; /* je: equal / zero */

loc_0031B63B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0031B63D: ;
    esi = MEM32(ebx + 0x434);
    eax = MEM32(esi + 0x14);
    MEM32(ebx + 0x434) = eax;
    edi = MEM32(esi + 0x10);
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031B65F; /* jae: above or equal (unsigned >=) */

loc_0031B657: ;
    MEM32(esi + 0x14) = ecx;
    MEM32(ebp + -4) = esi;
    goto loc_0031B6D6;

loc_0031B65F: ;
    SET_LO8(eax, MEM8(edi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031B66D; /* je: equal / zero */

loc_0031B666: ;
    SET_LO8(eax, LO8(eax) & 0xBF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(edi + 0x10) = LO8(eax);
    goto loc_0031B657;

loc_0031B66D: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x4A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x4A (8-bit) */
    ecx = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0031B67E; /* jne: not equal / not zero */

loc_0031B675: ;
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B67Cu); RECOMP_ABI_CALL(0x0031BA11u, sub_0031BA11); /* call 0x0031BA11 */

loc_0031B67C: ;
    goto loc_0031B6D6;

loc_0031B67E: ;
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B685u); RECOMP_ABI_CALL(0x0031B541u, sub_0031B541); /* call 0x0031B541 */

loc_0031B685: ;
    edx = MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B6BE; /* je: equal / zero */

loc_0031B68C: ;
    ecx = MEM32(edi);
    MEM32(ebp + -12) = ecx;
    ecx = ecx >> 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + -12);
    ecx = ecx & 0x1800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031B6B0; /* jne: not equal / not zero */

loc_0031B6AD: ;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0031B6B0: ;
    _fa = (uint32_t)(MEM8(edi + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 8), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031B6BA; /* je: equal / zero */

loc_0031B6B6: ;
    MEM32(edx) = MEM32(edx) | eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0031B6BE;

loc_0031B6BA: ;
    eax = ~eax;
    MEM32(edx) = MEM32(edx) & eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0031B6BE: ;
    eax = MEM32(0x654508);
    MEM32(edi + 0x18) = eax;
    MEM32(0x654508) = edi;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B6D6u); RECOMP_ABI_CALL(0x00319652u, sub_00319652); /* call 0x00319652 */

loc_0031B6D6: ;
    _fa = (uint32_t)(MEM32(ebx + 0x434)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x434), 0 (32-bit) */
    ecx = MEM32(ebp + -4);
    if (CMP_NE(_fa, _fb)) goto loc_0031B63D; /* jne: not equal / not zero */

loc_0031B6E6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0031B6E8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebx + 0x434) = ecx;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0031B6F8
 * Original: 0x0031B6F8 - 0x0031B80E (278 bytes, 96 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031B6F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B6F8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ebx = MEM32(esi);
    eax = esi + 0x438;
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM8(ebp + 0xF) = 0;
    MEM32(eax) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B71Fu); RECOMP_ABI_CALL(0x0031B0DEu, sub_0031B0DE); /* call 0x0031B0DE */

loc_0031B71F: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031B77C; /* je: equal / zero */

loc_0031B725: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x84;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = edi;
    if ((_fa == 0)) goto loc_0031B768; /* je: equal / zero */

loc_0031B737: ;
    ecx = MEM32(0x654500);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 8) = edi;
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0031B737; /* jne: not equal / not zero */

loc_0031B74B: ;
    edx = edi;
    _fa = (uint32_t)(MEM8(edx + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 2), 1 (8-bit) */
    edi = MEM32(edi + 8);
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0031B75F; /* je: equal / zero */

loc_0031B758: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B75Du); RECOMP_ABI_CALL(0x0031BD7Au, sub_0031BD7A); /* call 0x0031BD7A */

loc_0031B75D: ;
    goto loc_0031B764;

loc_0031B75F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B764u); RECOMP_ABI_CALL(0x0031B393u, sub_0031B393); /* call 0x0031B393 */

loc_0031B764: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031B74B; /* jne: not equal / not zero */

loc_0031B768: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0xC) = 2;
    eax = MEM32(esi);
    MEM32(eax + 8) = 6;

loc_0031B77C: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 4 (8-bit) */
    PUSH32(esp, 4);
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0031B78F; /* je: equal / zero */

loc_0031B785: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFFBu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0xC) = edi;
    MEM32(ebx + 0x14) = edi;

loc_0031B78F: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B796u); RECOMP_ABI_CALL(0x0031B0BAu, sub_0031B0BA); /* call 0x0031B0BA */

loc_0031B796: ;
    edx = eax;
    ecx = esi;
    MEM32(ebp + -8) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B7A2u); RECOMP_ABI_CALL(0x0031B43Fu, sub_0031B43F); /* call 0x0031B43F */

loc_0031B7A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B7AA; /* je: equal / zero */

loc_0031B7A6: ;
    MEM8(ebp + 0xF) = 1;

loc_0031B7AA: ;
    edx = MEM32(ebp + -8);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B7B4u); RECOMP_ABI_CALL(0x0031B597u, sub_0031B597); /* call 0x0031B597 */

loc_0031B7B4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B7BC; /* je: equal / zero */

loc_0031B7B8: ;
    MEM8(ebp + 0xF) = 1;

loc_0031B7BC: ;
    edx = MEM32(ebp + -8);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B7C6u); RECOMP_ABI_CALL(0x0031B61Eu, sub_0031B61E); /* call 0x0031B61E */

loc_0031B7C6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B7CE; /* je: equal / zero */

loc_0031B7CA: ;
    MEM8(ebp + 0xF) = 1;

loc_0031B7CE: ;
    _fa = (uint32_t)(MEM8(ebp + 0xF)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xF), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B7DE; /* je: equal / zero */

loc_0031B7D4: ;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = edi;
    eax = MEM32(esi);
    MEM32(eax + 0x10) = edi;

loc_0031B7DE: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031B7F6; /* je: equal / zero */

loc_0031B7E4: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B7EBu); RECOMP_ABI_CALL(0x0031A4EBu, sub_0031A4EB); /* call 0x0031A4EB */

loc_0031B7EB: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFBFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0xC) = 0x40;

loc_0031B7F6: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B800; /* je: equal / zero */

loc_0031B7FD: ;
    MEM32(ebx + 0xC) = eax;

loc_0031B800: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x10) = 0x80000000u;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0031B80E
 * Original: 0x0031B80E - 0x0031B820 (18 bytes, 6 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B80E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B80E: ;
    eax = MEM32(0x654528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031B81F; /* je: equal / zero */

loc_0031B817: ;
    ecx = MEM32(eax);
    MEM32(0x654528) = ecx;

loc_0031B81F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031B820
 * Original: 0x0031B820 - 0x0031B9CD (429 bytes, 148 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031B820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031B820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x65452C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = edx;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -8) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x0031B83Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B835u); } /* indirect call */
    }

loc_0031B83B: ;
    MEM8(ebp + -2) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B843u); RECOMP_ABI_CALL(0x0031B80Eu, sub_0031B80E); /* call 0x0031B80E */

loc_0031B843: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -12) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0031B856; /* jne: not equal / not zero */

loc_0031B84C: ;
    edi = 0x80000100u;
    goto loc_0031B9BB;

loc_0031B856: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + -8);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x30;
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
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = eax;
    eax = esi;
    _fb = (uint32_t)(MEM32(0x654500)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x654500);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esi + 0x11) = 1;
    MEM32(esi + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x13) = 1;
    SET_LO16(eax, MEM16(ebx + 0x16));
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B89Bu); RECOMP_ABI_CALL(0x00319666u, sub_00319666); /* call 0x00319666 */

loc_0031B89B: ;
    edx = MEM32(ebp + -8);
    MEM16(esi + 0x22) = LO16(eax);
    MEM8(esi + 0x24) = LO8(edx);
    SET_LO8(eax, MEM8(ebx + 0x18));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x10) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 0x14));
    PUSH32(esp, 0);
    eax = eax ^ MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = MEM32(esi) ^ eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ZX8(MEM8(ebx + 0x15));
    ecx = MEM32(esi);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x780;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    _fa = (uint32_t)(MEM8(ebx + 0x15)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x15), 0x80 (8-bit) */
    POP32(esp, ecx);
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax & 0xFFFFC7FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = ecx;
    eax = ZX16(MEM16(ebx + 0x16));
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7FF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esi + 8);
    MEM32(esi) = eax;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(MEM32(0x654500)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x654500);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = ecx;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    MEM8(ebp + -1) = LO8(ecx);
    if (CMP_BE(_fa, _fb)) goto loc_0031B97B; /* jbe: below or equal (unsigned <=) */

loc_0031B91E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031B920: ;
    edx = MEM32(esi + 0x2C);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + edx;
    MEM32(ebp + -16) = edi;
    _fb = (uint32_t)(MEM32(0x654500)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(0x654500);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(edx + 0x2D) = LO8(ecx);
    edx = MEM32(esi + 0x2C);
    SET_LO8(ecx, MEM8(ebp + -1));
    MEM8(eax + edx + 0x2C) = LO8(ecx);
    edx = MEM32(esi + 0x2C);
    MEM32(eax + edx + 0x20) = esi;
    edx = MEM32(esi + 0x2C);
    MEM32(eax + edx + 0x28) = MEM32(eax + edx + 0x28) & 0;
    _fa = (uint32_t)(MEM32(eax + edx + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(esi + 0x2C);
    MEM32(eax + edx + 0x24) = MEM32(eax + edx + 0x24) & 0;
    _fa = (uint32_t)(MEM32(eax + edx + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edx + 2) = MEM8(edx + 2) | 1;
    _fa = (uint32_t)(MEM8(edx + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = MEM32(esi + 0x2C);
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + edx + 8) = edi;
    eax = ZX8(LO8(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    MEM8(ebp + -1) = LO8(ecx);
    if (CMP_B(_fa, _fb)) goto loc_0031B920; /* jb: below (unsigned <) */

loc_0031B97B: ;
    edx = MEM32(esi + 0x2C);
    eax = ZX8(LO8(ecx));
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + edx + -56) = MEM32(eax + edx + -56) & 0;
    _fa = (uint32_t)(MEM32(eax + edx + -56)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x2C);
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax + 0x2D) = LO8(ecx);
    ecx = MEM32(ebp + -20);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031B99Bu); RECOMP_ABI_CALL(0x0031ACCFu, sub_0031ACCF); /* call 0x0031ACCF */

loc_0031B99B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031B9A6; /* jl: less (signed <) */

loc_0031B9A1: ;
    MEM32(ebx + 0x10) = esi;
    goto loc_0031B9BA;

loc_0031B9A6: ;
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(0x654528);
    eax = MEM32(ebp + -12);
    MEM32(eax) = ecx;
    MEM32(0x654528) = eax;

loc_0031B9BA: ;
    POP32(esp, esi);

loc_0031B9BB: ;
    SET_LO8(ecx, MEM8(ebp + -2));
    MEM32(ebx + 4) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x0031B9C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B9C1u); } /* indirect call */
    }

loc_0031B9C7: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0031B9CD
 * Original: 0x0031B9CD - 0x0031BA11 (68 bytes, 27 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031B9CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031B9CD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edx;
    ebp = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x0031B9DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031B9D8u); } /* indirect call */
    }

loc_0031B9DE: ;
    edx = ebp;
    ecx = edi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0031B9E9u); RECOMP_ABI_CALL(0x0031AEABu, sub_0031AEAB); /* call 0x0031AEAB */

loc_0031B9E9: ;
    edx = ebp;
    ecx = edi;
    PUSH32(esp, 0x0031B9F2u); RECOMP_ABI_CALL(0x0031A897u, sub_0031A897); /* call 0x0031A897 */

loc_0031B9F2: ;
    eax = edi + 0x434;
    ecx = MEM32(eax);
    MEM32(esi + 0x14) = ecx;
    SET_LO8(ecx, LO8(ebx));
    MEM32(eax) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x0031BA07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BA01u); } /* indirect call */
    }

loc_0031BA07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x40000000;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031BA11
 * Original: 0x0031BA11 - 0x0031BA9A (137 bytes, 52 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BA11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031BA11: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = edx;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x25));
    ebx = ZX8(MEM8(esi + 0x26));
    ecx = ZX8(LO8(eax));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ZX8(MEM8(esi + 0x24));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031BA73; /* je: equal / zero */

loc_0031BA2F: ;
    PUSH32(esp, edi);

loc_0031BA30: ;
    ecx = ZX8(MEM8(esi + 0x24));
    eax = ebx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM8(esi + 0x25) = MEM8(esi + 0x25) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ebx = edx;
    edi = ebx;
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, MEM32(edi + 4));
    { uint32_t _icall_target = MEM32(0x31C8E0); PUSH32(esp, 0x0031BA53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BA4Du); } /* indirect call */
    }

loc_0031BA53: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(edi + 4);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFF000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031BA6C; /* je: equal / zero */

loc_0031BA63: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C8E0); PUSH32(esp, 0x0031BA6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BA66u); } /* indirect call */
    }

loc_0031BA6C: ;
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x25), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031BA30; /* jne: not equal / not zero */

loc_0031BA72: ;
    POP32(esp, edi);

loc_0031BA73: ;
    eax = ZX8(MEM8(esi + 0x24));
    MEM8(esi + 0x25) = MEM8(esi + 0x25) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x654528);
    MEM32(esi) = eax;
    MEM32(0x654528) = esi;
    MEM32(ebp + 4) = MEM32(ebp + 4) & 0;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0031BA96u); RECOMP_ABI_CALL(0x00319652u, sub_00319652); /* call 0x00319652 */

loc_0031BA96: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031BA9A
 * Original: 0x0031BA9A - 0x0031BC01 (359 bytes, 130 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031BA9A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BA9A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    MEM32(ebp + -16) = esi;
    MEM32(ebp + -36) = ecx;
    MEM32(ebp + -32) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x0031BABAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BAB4u); } /* indirect call */
    }

loc_0031BABA: ;
    SET_LO8(ecx, MEM8(edi + 0x24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edi + 0x25) (8-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0031BAD1; /* jne: not equal / not zero */

loc_0031BAC5: ;
    MEM32(ebp + -20) = 0xC0000D00u;
    goto loc_0031BBE6;

loc_0031BAD1: ;
    eax = ZX8(MEM8(edi + 0x26));
    PUSH32(esp, ebx);
    ebx = eax;
    ebx = ebx << 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(edi + 0x2C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ZX8(LO8(ecx));
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = MEM32(esi + 0x18);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = esi;
    MEM8(edi + 0x26) = LO8(edx);
    eax = MEM32(esi + 0x18);
    MEM32(ebx + 0x24) = eax;
    eax = MEM32(esi + 0x1C);
    MEM32(ebx + 0x28) = eax;
    eax = MEM32(ebp + -16);
    MEM32(ebx + 0x20) = edi;
    eax = ZX8(MEM8(eax + 0x14));
    eax = eax << 0x15;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xE00000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx) = MEM32(ebx) ^ eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esi);
    eax = MEM32(ebx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx << 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x7000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx) = ecx;
    eax = MEM32(esi + 4);
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    MEM32(ebp + -24) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0031BB63; /* jbe: below or equal (unsigned <=) */

loc_0031BB38: ;
    ecx = esi + 8;
    MEM32(ebp + -8) = ecx;
    ecx = ebx + 0x10;

loc_0031BB41: ;
    edx = eax;
    SET_LO16(edx, LO16(edx) | 0xE000);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(ecx) = LO16(edx);
    edx = MEM32(ebp + -8);
    edx = ZX16(MEM16(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 2;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + -12);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0031BB41; /* jb: below (unsigned <) */

loc_0031BB63: ;
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    MEM32(ebp + -24) = eax;
    { uint32_t _icall_target = MEM32(0x31C8D8); PUSH32(esp, 0x0031BB75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BB6Fu); } /* indirect call */
    }

loc_0031BB75: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 4));
    { uint32_t _icall_target = MEM32(0x31C8D4); PUSH32(esp, 0x0031BB7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BB78u); } /* indirect call */
    }

loc_0031BB7E: ;
    ecx = MEM32(ebp + -24);
    MEM32(ebx + 4) = eax;
    eax = MEM32(esi + 4);
    eax = eax + ecx + -1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C8D4); PUSH32(esp, 0x0031BB92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BB8Cu); } /* indirect call */
    }

loc_0031BB92: ;
    MEM32(ebx + 0xC) = eax;
    _fa = (uint32_t)(MEM8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031BBAB; /* je: equal / zero */

loc_0031BB9B: ;
    esi = ebx + 0x10;
    edi = ebx + 0x30;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = MEM32(ebp + -28);
    edi = MEM32(ebp + -32);

loc_0031BBAB: ;
    _fa = (uint32_t)(MEM8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031BBD1; /* je: equal / zero */

loc_0031BBB1: ;
    ecx = MEM32(ebp + -36);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031BBB9u); RECOMP_ABI_CALL(0x0031B0BAu, sub_0031B0BA); /* call 0x0031B0BA */

loc_0031BBB9: ;
    ecx = MEM32(edi + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031BBC7; /* jle: less or equal (signed <=) */

loc_0031BBC5: ;
    eax = ecx;

loc_0031BBC7: ;
    MEM16(ebx) = LO16(eax);
    ecx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x28) = ecx;

loc_0031BBD1: ;
    MEM8(edi + 0x25) = MEM8(edi + 0x25) + 1;
    _fa = (uint32_t)(MEM8(edi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(edi + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x24)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edi + 0x24) (8-bit) */
    esi = MEM32(ebp + -16);
    if (CMP_EQ(_fa, _fb)) goto loc_0031BBE5; /* je: equal / zero */

loc_0031BBDF: ;
    eax = MEM32(ebx + 8);
    MEM32(edi + 4) = eax;

loc_0031BBE5: ;
    POP32(esp, ebx);

loc_0031BBE6: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x0031BBEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BBE9u); } /* indirect call */
    }

loc_0031BBEF: ;
    edi = MEM32(ebp + -20);
    PUSH32(esp, esi);
    MEM32(esi + 4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031BBFBu); RECOMP_ABI_CALL(0x00319652u, sub_00319652); /* call 0x00319652 */

loc_0031BBFB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0031BC01
 * Original: 0x0031BC01 - 0x0031BD20 (287 bytes, 98 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031BC01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BC01: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x31C7A0);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = edx;
    esi = MEM32(edi + 0x10);
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -8) = ecx;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0031BC21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BC1Fu); } /* indirect call */
    }

loc_0031BC21: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 2 (8-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0031BC34; /* je: equal / zero */

loc_0031BC2A: ;
    esi = 0xC0000E00u;
    goto loc_0031BD00;

loc_0031BC34: ;
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031BC3Cu); RECOMP_ABI_CALL(0x0031B0BAu, sub_0031B0BA); /* call 0x0031B0BA */

loc_0031BC3C: ;
    SET_LO8(edx, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031BC7E; /* je: equal / zero */

loc_0031BC44: ;
    SET_LO8(edx, LO8(edx) & 0xFB);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), eax (32-bit) */
    MEM8(esi + 0x10) = LO8(edx);
    if (CMP_NE(_fa, _fb)) goto loc_0031BC76; /* jne: not equal / not zero */

loc_0031BC4F: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x0031BC58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BC52u); } /* indirect call */
    }

loc_0031BC58: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(ebp + -24) = 0xFFFFD8F0u;
    { uint32_t _icall_target = MEM32(0x31C88C); PUSH32(esp, 0x0031BC71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BC6Bu); } /* indirect call */
    }

loc_0031BC71: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0031BC73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BC71u); } /* indirect call */
    }

loc_0031BC73: ;
    MEM8(ebp + -1) = LO8(eax);

loc_0031BC76: ;
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031BC7Eu); RECOMP_ABI_CALL(0x0031B0BAu, sub_0031B0BA); /* call 0x0031B0BA */

loc_0031BC7E: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031BC93; /* je: equal / zero */

loc_0031BC84: ;
    SET_LO8(ecx, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 0x25) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031BC93; /* je: equal / zero */

loc_0031BC8C: ;
    esi = 0xC0001000u;
    goto loc_0031BD00;

loc_0031BC93: ;
    _fa = (uint32_t)(MEM8(edi + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x18), 1 (8-bit) */
    ecx = eax + 1;
    if (TEST_NZ(_fa, _fb)) goto loc_0031BCAE; /* jne: not equal / not zero */

loc_0031BC9C: ;
    edx = MEM32(edi + 0x14);
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_0031BD19; /* js: sign (negative) */

loc_0031BCA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031BD19; /* jg: greater (signed >) */

loc_0031BCAC: ;
    ecx = edx;

loc_0031BCAE: ;
    SET_LO8(edx, MEM8(esi + 0x24));
    SET_LO8(eax, LO8(edx));
    _fb = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - MEM8(esi + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    edi = ZX8(LO8(edx));
    _fb = (uint32_t)(MEM8(esi + 0x26)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esi + 0x26));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edi = MEM32(esi + 0x2C);

loc_0031BCC5: ;
    edx = ZX8(LO8(edx));
    eax = edx;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(edi + eax) = LO16(ecx);
    edi = MEM32(esi + 0x2C);
    eax = ZX8(MEM8(edi + eax + 3));
    ebx = ZX8(MEM8(esi + 0x24));
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx + eax + 1;
    eax = edx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 0x26) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031BCC5; /* jne: not equal / not zero */

loc_0031BCEF: ;
    MEM8(esi + 1) = MEM8(esi + 1) & 0xBF;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 2;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi = MEM32(ebp + -12);
    MEM32(esi + 0x28) = ecx;
    esi = MEM32(ebp + -16);

loc_0031BD00: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x0031BD09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BD03u); } /* indirect call */
    }

loc_0031BD09: ;
    PUSH32(esp, edi);
    MEM32(edi + 4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031BD12u); RECOMP_ABI_CALL(0x00319652u, sub_00319652); /* call 0x00319652 */

loc_0031BD12: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0031BD19: ;
    esi = 0xC0000B00u;
    goto loc_0031BD00;

}

/**
 * sub_0031BD20
 * Original: 0x0031BD20 - 0x0031BD7A (90 bytes, 37 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BD20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031BD20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = edx;
    esi = MEM32(edi + 0x10);
    ebx = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x0031BD34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BD2Eu); } /* indirect call */
    }

loc_0031BD34: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 2 (8-bit) */
    MEM8(esp + 0x13) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0031BD5A; /* je: equal / zero */

loc_0031BD3E: ;
    MEM8(esi + 1) = MEM8(esi + 1) | 0x40;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ebx;
    PUSH32(esp, 0x0031BD49u); RECOMP_ABI_CALL(0x0031B0BAu, sub_0031B0BA); /* call 0x0031B0BA */

loc_0031BD49: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = eax;
    SET_LO8(eax, MEM8(esi + 0x10));
    SET_LO8(eax, LO8(eax) & 0xFD);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x10) = LO8(eax);
    goto loc_0031BD5F;

loc_0031BD5A: ;
    ebp = 0xC0000F00u;

loc_0031BD5F: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x0031BD69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BD63u); } /* indirect call */
    }

loc_0031BD69: ;
    PUSH32(esp, edi);
    MEM32(edi + 4) = ebp;
    PUSH32(esp, 0x0031BD72u); RECOMP_ABI_CALL(0x00319652u, sub_00319652); /* call 0x00319652 */

loc_0031BD72: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031BD7A
 * Original: 0x0031BD7A - 0x0031BE6A (240 bytes, 97 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031BD7A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BD7A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = edx;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    edx = MEM32(ebx + 0x20);
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax;
    esi = esi >> 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -44) = esi;
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebx + 0x28);
    esi = ebx + 0x10;
    MEM32(ebp + -8) = esi;
    edi = ebp + -36;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebx + 0x24);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    edi = MEM32(edx + 0x2C);
    MEM32(ebp + -20) = eax;
    eax = ZX8(MEM8(ebx + 0x2D));
    esi = ebx;
    _fb = (uint32_t)(MEM32(0x654500)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(0x654500);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + edi + 8) = esi;
    _fa = (uint32_t)(MEM8(edx + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x10), 1 (8-bit) */
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -12) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0031BE21; /* je: equal / zero */

loc_0031BDDB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031BDE0u); RECOMP_ABI_CALL(0x0031B0BAu, sub_0031B0BA); /* call 0x0031B0BA */

loc_0031BDE0: ;
    ecx = MEM32(ebp + -4);
    esi = eax;
    eax = MEM32(ecx + 0x28);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_0031BDF1; /* js: sign (negative) */

loc_0031BDEF: ;
    esi = eax;

loc_0031BDF1: ;
    edi = MEM32(ebp + -8);
    MEM16(ebx) = LO16(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 3));
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + esi + 1;
    MEM32(ecx + 0x28) = eax;
    esi = ebx + 0x30;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = ZX8(MEM8(ecx + 0x26));
    esi = ZX8(MEM8(ecx + 0x24));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = MEM32(ebp + -12);
    MEM8(ecx + 0x26) = LO8(edx);
    goto loc_0031BE58;

loc_0031BE21: ;
    edi = MEM32(0x31C8E0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebx + 4));
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0031BE2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BE2Cu); } /* indirect call */
    }

loc_0031BE2E: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(ebx + 4);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFF000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031BE43; /* je: equal / zero */

loc_0031BE3E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0031BE43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BE41u); } /* indirect call */
    }

loc_0031BE43: ;
    ecx = MEM32(ebp + -4);
    SET_LO8(eax, MEM8(ecx + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x24)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x24) (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM8(ecx + 0x25) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0031BE5B; /* je: equal / zero */

loc_0031BE58: ;
    MEM32(ecx + 4) = esi;

loc_0031BE5B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -16));
    eax = ebp + -44;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + -20); PUSH32(esp, 0x0031BE65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BE62u); } /* indirect call */
    }

loc_0031BE65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0031BE6A
 * Original: 0x0031BE6A - 0x0031BE8A (32 bytes, 9 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BE6A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BE6A: ;
    eax = MEM32(0x65450C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031BE7C; /* je: equal / zero */

loc_0031BE73: ;
    ecx = MEM32(eax + 0x14);
    MEM32(0x65450C) = ecx;

loc_0031BE7C: ;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 2) = MEM8(eax + 2) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(eax + 0x1F) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031BE8A
 * Original: 0x0031BE8A - 0x0031BEA9 (31 bytes, 9 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BE8A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BE8A: ;
    SET_LO16(eax, MEM16(esp + 4));
    _fa = (uint32_t)(MEM16(0x654522)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x654522), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031BE9C; /* jae: above or equal (unsigned >=) */

loc_0031BE98: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0031BEA6;

loc_0031BE9C: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(0x654522) = MEM16(0x654522) - LO16(eax);
    _fa = (uint32_t)(MEM16(0x654522)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0031BEA6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031BEA9
 * Original: 0x0031BEA9 - 0x0031BEC8 (31 bytes, 9 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BEA9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BEA9: ;
    SET_LO16(eax, MEM16(esp + 4));
    _fa = (uint32_t)(MEM16(0x654526)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x654526), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031BEBB; /* jae: above or equal (unsigned >=) */

loc_0031BEB7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0031BEC5;

loc_0031BEBB: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(0x654526) = MEM16(0x654526) - LO16(eax);
    _fa = (uint32_t)(MEM16(0x654526)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0031BEC5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031BEC8
 * Original: 0x0031BEC8 - 0x0031BEFA (50 bytes, 22 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BEC8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BEC8: ;
    PUSH32(esp, edi);
    edi = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(edi + 2));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031BEEF; /* je: equal / zero */

loc_0031BEDE: ;
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    esi = ZX16(LO16(edx));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    POP32(esp, esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031BEEF; /* je: equal / zero */

loc_0031BEEE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0031BEEF: ;
    _fa = (uint32_t)(MEM8(edi + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x11), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0031BEF9; /* jne: not equal / not zero */

loc_0031BEF6: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031BEF9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031BEFA
 * Original: 0x0031BEFA - 0x0031BF34 (58 bytes, 25 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031BEFA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BEFA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    edi = edx;
    { uint32_t _icall_target = MEM32(0x31C8D4); PUSH32(esp, 0x0031BF09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031BF03u); } /* indirect call */
    }

loc_0031BF09: ;
    ecx = MEM32(esi);
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0x1000;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = edx;
    ebx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031BF26; /* jbe: below or equal (unsigned <=) */

loc_0031BF24: ;
    MEM32(ecx) = ebx;

loc_0031BF26: ;
    edx = MEM32(ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(edi) = MEM32(edi) - edx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031BF34
 * Original: 0x0031BF34 - 0x0031C232 (766 bytes, 247 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031BF34(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031BF34: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ebx = edx;
    SET_LO16(eax, MEM16(ebx + 2));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -32) = ecx;
    SET_LO8(ecx, MEM8(ecx + 0x45C));
    MEM8(ebp + -24) = LO8(ecx);
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -40) = eax;
    eax = MEM32(edi + 0x14);
    MEM32(ebp + -16) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ebx + 0x26) = MEM8(ebx + 0x26) - 1;
    _fa = (uint32_t)(MEM8(ebx + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(ebx + 0x27) = MEM8(ebx + 0x27) + 1;
    _fa = (uint32_t)(MEM8(ebx + 0x27)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ecx, MEM16(edi + 0x22));
    SET_LO16(ecx, LO16(ecx) & 0xFFFD);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    SET_LO16(ecx, LO16(ecx) | 4);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(edi + 0x22) = LO16(ecx);
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebp + -20) = eax;
    MEM8(ebp + 0xB) = LO8(eax);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0031BF9A; /* je: equal / zero */

loc_0031BF91: ;
    eax = MEM32(0x654500);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031BFB3;

loc_0031BF9A: ;
    PUSH32(esp, MEM32(ebp + -24));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031BFA2u); RECOMP_ABI_CALL(0x0031BE6Au, sub_0031BE6A); /* call 0x0031BE6A */

loc_0031BFA2: ;
    esi = eax;
    eax = MEM32(esi + 0x10);
    eax = eax ^ MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 8) = eax;

loc_0031BFB3: ;
    _fa = (uint32_t)(MEM8(ebx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x11), 0 (8-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0031C022; /* jne: not equal / not zero */

loc_0031BFBC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 0xFE);
    _fb = (uint32_t)(MEM8(ebp + -24)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - MEM8(ebp + -24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031BFC9u); RECOMP_ABI_CALL(0x0031BE6Au, sub_0031BE6A); /* call 0x0031BE6A */

loc_0031BFC9: ;
    ecx = MEM32(edi + 0x28);
    PUSH32(esp, MEM32(ebp + -24));
    MEM32(eax) = ecx;
    ecx = MEM32(edi + 0x2C);
    MEM32(ebp + -36) = eax;
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031BFDFu); RECOMP_ABI_CALL(0x0031BE6Au, sub_0031BE6A); /* call 0x0031BE6A */

loc_0031BFDF: ;
    esi = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx & 0x3FFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0xE2E00000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -36);
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 4) = edx;
    edx = MEM32(esi + 0x10);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + 0xB) = 2;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ebx;
    MEM8(eax + 0x1C) = 0;
    MEM8(eax + 0x1E) = 1;
    MEM8(eax + 0x1D) = 0;
    MEM32(eax + 0x18) = edi;

loc_0031C022: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C03E; /* je: equal / zero */

loc_0031C028: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(edi + 0x18));
    { uint32_t _icall_target = MEM32(0x31C8D8); PUSH32(esp, 0x0031C036u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C030u); } /* indirect call */
    }

loc_0031C036: ;
    eax = MEM32(edi + 0x18);
    MEM32(ebp + -36) = eax;
    goto loc_0031C042;

loc_0031C03E: ;
    MEM8(edi + 0x1C) = 1;

loc_0031C042: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C15D; /* je: equal / zero */

loc_0031C04C: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    edx = ebp + -16;
    ecx = ebp + -36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031C05Bu); RECOMP_ABI_CALL(0x0031BEFAu, sub_0031BEFA); /* call 0x0031BEFA */

loc_0031C05B: ;
    MEM32(ebp + -4) = eax;

loc_0031C05E: ;
    edx = MEM32(ebp + -20);
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031C07F; /* jae: above or equal (unsigned >=) */

loc_0031C06D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C137; /* je: equal / zero */

loc_0031C075: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C137; /* jne: not equal / not zero */

loc_0031C07F: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C0A7; /* je: equal / zero */

loc_0031C085: ;
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0031C094; /* jae: above or equal (unsigned >=) */

loc_0031C092: ;
    ecx = edx;

loc_0031C094: ;
    SET_LO8(eax, MEM8(ebp + -12));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + ecx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x1D) = LO8(eax);
    goto loc_0031C0C5;

loc_0031C0A7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    eax = MEM32(ebp + -4);
    MEM32(esi + 4) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0031C0BD; /* jae: above or equal (unsigned >=) */

loc_0031C0B1: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + edx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x1D) = LO8(edx);
    goto loc_0031C0C8;

loc_0031C0BD: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + ecx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x1D) = LO8(ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0031C0C5: ;
    MEM32(ebp + -20) = edx;

loc_0031C0C8: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(esi);
    MEM8(ebp + 0xB) = MEM8(ebp + 0xB) ^ 1;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    eax = ZX8(MEM8(ebp + 0xB));
    PUSH32(esp, MEM32(ebp + -24));
    ecx = ecx & 0xFFBFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0xE0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x3000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ecx;
    eax = eax | 0xE00000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 0x1C) = 0;
    MEM8(esi + 0x1E) = 0;
    SET_LO8(ecx, MEM8(edi + 0x1C));
    eax = eax & 0xF3E7FFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x18) = edi;
    MEM32(ebp + -8) = esi;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x13;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031C127u); RECOMP_ABI_CALL(0x0031BE6Au, sub_0031BE6A); /* call 0x0031BE6A */

loc_0031C127: ;
    ecx = MEM32(ebp + -8);
    esi = eax;
    eax = MEM32(esi + 0x10);
    MEM32(ecx + 8) = eax;
    goto loc_0031C05E;

loc_0031C137: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    eax = MEM32(ebp + -4);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -12) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0031C04C; /* jne: not equal / not zero */

loc_0031C14A: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C15D; /* je: equal / zero */

loc_0031C150: ;
    _fa = (uint32_t)(MEM8(edi + 0x1D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x1D), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C15D; /* je: equal / zero */

loc_0031C156: ;
    eax = MEM32(ebp + -8);
    MEM8(eax + 2) = MEM8(eax + 2) | 4;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0031C15D: ;
    _fa = (uint32_t)(MEM8(ebx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x11), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C1CD; /* jne: not equal / not zero */

loc_0031C163: ;
    MEM8(esi + 2) = MEM8(esi + 2) & 0xFB;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(edi + 0x1C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x1C), 2 (8-bit) */
    PUSH32(esp, MEM32(ebp + -24));
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ebp + -8) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x180000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    SET_LO8(ecx, MEM8(edi + 0x1E));
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x1FFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 0x1C) = 2;
    MEM8(esi + 0x1E) = 2;
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0xFFFFFF18u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 0x15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = ecx;
    MEM32(esi + 0x18) = edi;
    MEM8(esi + 0x1D) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031C1C0u); RECOMP_ABI_CALL(0x0031BE6Au, sub_0031BE6A); /* call 0x0031BE6A */

loc_0031C1C0: ;
    ecx = MEM32(ebp + -8);
    esi = eax;
    eax = MEM32(esi + 0x10);
    MEM32(ecx + 8) = eax;
    goto loc_0031C1E5;

loc_0031C1CD: ;
    ecx = ZX8(MEM8(edi + 0x1E));
    eax = MEM32(ebp + -8);
    ecx = ecx << 0x15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 0x1C) = 2;
    ecx = ecx & 0xE00000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = MEM32(eax) ^ ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031C1E5: ;
    MEM8(esi + 0x1E) = 3;
    SET_LO16(eax, MEM16(edi + 0x14));
    MEM32(edi + 0x14) = MEM32(edi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(edi + 0x20) = LO16(eax);
    _fa = (uint32_t)(MEM8(ebx + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x20), 0 (8-bit) */
    eax = MEM32(esi + 0x10);
    MEM32(ebx + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0031C205; /* jne: not equal / not zero */

loc_0031C201: ;
    MEM8(ebx + 1) = MEM8(ebx + 1) & 0xBF;
    _fa = (uint32_t)(MEM8(ebx + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0031C205: ;
    SET_LO8(ebx, MEM8(ebx + 0x11));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C21A; /* jne: not equal / not zero */

loc_0031C20C: ;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax);
    MEM32(eax + 8) = 2;
    goto loc_0031C22B;

loc_0031C21A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C22B; /* jne: not equal / not zero */

loc_0031C21F: ;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax);
    MEM32(eax + 8) = 4;

loc_0031C22B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031C232
 * Original: 0x0031C232 - 0x0031C285 (83 bytes, 34 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031C232(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C232: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = edx;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0031C282; /* je: equal / zero */

loc_0031C242: ;
    PUSH32(esp, ebx);

loc_0031C243: ;
    eax = MEM32(esi + 0x28);
    SET_LO16(edx, MEM16(esi + 0x24));
    ebx = ZX16(MEM16(eax + 0x20));
    ecx = ZX16(LO16(edx));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031C281; /* jg: greater (signed >) */

loc_0031C258: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x28) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0031C265; /* jne: not equal / not zero */

loc_0031C262: ;
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) & ecx;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0031C265: ;
    SET_LO16(ecx, MEM16(eax + 0x20));
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + LO16(edx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(esi + 0x24) = LO16(ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031C27Bu); RECOMP_ABI_CALL(0x0031BF34u, sub_0031BF34); /* call 0x0031BF34 */

loc_0031C27B: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C243; /* jne: not equal / not zero */

loc_0031C281: ;
    POP32(esp, ebx);

loc_0031C282: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0031C285
 * Original: 0x0031C285 - 0x0031C2D2 (77 bytes, 26 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C285(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C285: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x424), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C2D0; /* je: equal / zero */

loc_0031C291: ;
    PUSH32(esp, edi);

loc_0031C292: ;
    edi = MEM32(esi + 0x424);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031C2A4u); RECOMP_ABI_CALL(0x0031BEA9u, sub_0031BEA9); /* call 0x0031BEA9 */

loc_0031C2A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C2CF; /* je: equal / zero */

loc_0031C2A8: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x424) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0031C2BB; /* jne: not equal / not zero */

loc_0031C2B5: ;
    MEM32(esi + 0x428) = MEM32(esi + 0x428) & eax;
    _fa = (uint32_t)(MEM32(esi + 0x428)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0031C2BB: ;
    edx = MEM32(edi + 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0031C2C6u); RECOMP_ABI_CALL(0x0031BF34u, sub_0031BF34); /* call 0x0031BF34 */

loc_0031C2C6: ;
    _fa = (uint32_t)(MEM32(esi + 0x424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x424), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C292; /* jne: not equal / not zero */

loc_0031C2CF: ;
    POP32(esp, edi);

loc_0031C2D0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031C2D2
 * Original: 0x0031C2D2 - 0x0031C31F (77 bytes, 26 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C2D2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C2D2: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x41C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x41C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C31D; /* je: equal / zero */

loc_0031C2DE: ;
    PUSH32(esp, edi);

loc_0031C2DF: ;
    edi = MEM32(esi + 0x41C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031C2F1u); RECOMP_ABI_CALL(0x0031BE8Au, sub_0031BE8A); /* call 0x0031BE8A */

loc_0031C2F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C31C; /* je: equal / zero */

loc_0031C2F5: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x41C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0031C308; /* jne: not equal / not zero */

loc_0031C302: ;
    MEM32(esi + 0x420) = MEM32(esi + 0x420) & eax;
    _fa = (uint32_t)(MEM32(esi + 0x420)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0031C308: ;
    edx = MEM32(edi + 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0031C313u); RECOMP_ABI_CALL(0x0031BF34u, sub_0031BF34); /* call 0x0031BF34 */

loc_0031C313: ;
    _fa = (uint32_t)(MEM32(esi + 0x41C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x41C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C2DF; /* jne: not equal / not zero */

loc_0031C31C: ;
    POP32(esp, edi);

loc_0031C31D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031C31F
 * Original: 0x0031C31F - 0x0031C352 (51 bytes, 17 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C31F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C31F: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM16(eax + 0x20)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x20), 3 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031C331; /* jbe: below or equal (unsigned <=) */

loc_0031C32A: ;
    eax = 0x80000500u;
    goto loc_0031C34F;

loc_0031C331: ;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C33E; /* je: equal / zero */

loc_0031C339: ;
    MEM32(esi + 0x24) = eax;
    goto loc_0031C341;

loc_0031C33E: ;
    MEM32(edx + 0x28) = eax;

loc_0031C341: ;
    MEM32(edx + 0x2C) = eax;
    PUSH32(esp, 0x0031C349u); RECOMP_ABI_CALL(0x0031C232u, sub_0031C232); /* call 0x0031C232 */

loc_0031C349: ;
    eax = 0x40000000;
    POP32(esp, esi);

loc_0031C34F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031C352
 * Original: 0x0031C352 - 0x0031C38E (60 bytes, 16 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C352(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C352: ;
    SET_LO16(eax, MEM16(edx + 0x20));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x654524)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(0x654524) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031C365; /* jbe: below or equal (unsigned <=) */

loc_0031C35F: ;
    eax = 0x80000500u;
    esp += 4; return; /* ret */

loc_0031C365: ;
    eax = ecx + 0x424;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C37B; /* je: equal / zero */

loc_0031C370: ;
    eax = MEM32(ecx + 0x428);
    MEM32(eax + 0x24) = edx;
    goto loc_0031C37D;

loc_0031C37B: ;
    MEM32(eax) = edx;

loc_0031C37D: ;
    MEM32(ecx + 0x428) = edx;
    PUSH32(esp, 0x0031C388u); RECOMP_ABI_CALL(0x0031C285u, sub_0031C285); /* call 0x0031C285 */

loc_0031C388: ;
    eax = 0x40000000;
    esp += 4; return; /* ret */

}

/**
 * sub_0031C38E
 * Original: 0x0031C38E - 0x0031C3CA (60 bytes, 16 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C38E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C38E: ;
    SET_LO16(eax, MEM16(edx + 0x20));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x654520)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(0x654520) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031C3A1; /* jbe: below or equal (unsigned <=) */

loc_0031C39B: ;
    eax = 0x80000500u;
    esp += 4; return; /* ret */

loc_0031C3A1: ;
    eax = ecx + 0x41C;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C3B7; /* je: equal / zero */

loc_0031C3AC: ;
    eax = MEM32(ecx + 0x420);
    MEM32(eax + 0x24) = edx;
    goto loc_0031C3B9;

loc_0031C3B7: ;
    MEM32(eax) = edx;

loc_0031C3B9: ;
    MEM32(ecx + 0x420) = edx;
    PUSH32(esp, 0x0031C3C4u); RECOMP_ABI_CALL(0x0031C2D2u, sub_0031C2D2); /* call 0x0031C2D2 */

loc_0031C3C4: ;
    eax = 0x40000000;
    esp += 4; return; /* ret */

}

/**
 * sub_0031C3CA
 * Original: 0x0031C3CA - 0x0031C450 (134 bytes, 53 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031C3CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C3CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ebx = ecx;
    edx = edi;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031C3E1u); RECOMP_ABI_CALL(0x0031BEC8u, sub_0031BEC8); /* call 0x0031BEC8 */

loc_0031C3E1: ;
    MEM16(esi + 0x20) = LO16(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x0031C3EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C3E5u); } /* indirect call */
    }

loc_0031C3EB: ;
    MEM8(edi + 0x26) = MEM8(edi + 0x26) + 1;
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebp + -1) = LO8(eax);
    MEM16(esi + 0x22) = 2;
    eax = ZX8(MEM8(edi + 0x11));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0031C429; /* je: equal / zero */

loc_0031C404: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031C41E; /* je: equal / zero */

loc_0031C408: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031C412; /* je: equal / zero */

loc_0031C40B: ;
    ebx = 0x80000600u;
    goto loc_0031C438;

loc_0031C412: ;
    PUSH32(esp, esi);
    edx = edi;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031C41Cu); RECOMP_ABI_CALL(0x0031C31Fu, sub_0031C31F); /* call 0x0031C31F */

loc_0031C41C: ;
    goto loc_0031C432;

loc_0031C41E: ;
    edx = esi;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031C427u); RECOMP_ABI_CALL(0x0031C352u, sub_0031C352); /* call 0x0031C352 */

loc_0031C427: ;
    goto loc_0031C432;

loc_0031C429: ;
    edx = esi;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031C432u); RECOMP_ABI_CALL(0x0031C38Eu, sub_0031C38E); /* call 0x0031C38E */

loc_0031C432: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031C440; /* jge: greater or equal (signed >=) */

loc_0031C438: ;
    MEM16(esi + 0x22) = MEM16(esi + 0x22) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x22)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM8(edi + 0x26) = MEM8(edi + 0x26) - 1;
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_0031C440: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x0031C449u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C443u); } /* indirect call */
    }

loc_0031C449: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0031C450_gen
 * Original: 0x0031C450 - 0x0031C4A6 (86 bytes, 34 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031C450_gen(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C450: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031C460u); RECOMP_ABI_CALL(0x00315D6Du, sub_00315D6D); /* call 0x00315D6D */

loc_0031C460: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C46F; /* jne: not equal / not zero */

loc_0031C464: ;
    PUSH32(esp, 0x57);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031C46Bu); RECOMP_ABI_CALL(0x002804A5u, sub_002804A5); /* call 0x002804A5 */

loc_0031C46B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0031C4A2;

loc_0031C46F: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031C47A; /* jne: not equal / not zero */

loc_0031C477: ;
    esi = MEM32(eax + 0x10);

loc_0031C47A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 1 (32-bit) */
    edx = MEM32(ebp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0031C486; /* jne: not equal / not zero */

loc_0031C483: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031C486: ;
    PUSH32(esp, esi);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031C492u); RECOMP_ABI_CALL(0x00316BD5u, sub_00316BD5); /* call 0x00316BD5 */

loc_0031C492: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0031C49F; /* jne: not equal / not zero */

loc_0031C499: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031C49Fu); RECOMP_ABI_CALL(0x002804A5u, sub_002804A5); /* call 0x002804A5 */

loc_0031C49F: ;
    eax = MEM32(ebp + -4);

loc_0031C4A2: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0031C4A6_gen
 * Original: 0x0031C4A6 - 0x0031C4B2 (12 bytes, 3 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C4A6_gen(void)
{

loc_0031C4A6: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x0031C4AFu); RECOMP_ABI_CALL(0x00316841u, sub_00316841); /* call 0x00316841 */

loc_0031C4AF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031C4B2_gen
 * Original: 0x0031C4B2 - 0x0031C68A (472 bytes, 145 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031C4B2_gen(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C4B2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x31C7A0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0031C4C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C4C5u); } /* indirect call */
    }

loc_0031C4C7: ;
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(ebp + 8);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C668; /* je: equal / zero */

loc_0031C4D7: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031C668; /* jne: not equal / not zero */

loc_0031C4E1: ;
    edx = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    SET_LO8(eax, MEM8(esi + 0xB));
    MEM8(edx) = LO8(eax);
    eax = MEM32(esi + 0xE);
    _fa = (uint32_t)(MEM8(eax + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x28), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C508; /* je: equal / zero */

loc_0031C4FC: ;
    MEM32(ebp + -8) = 5;
    goto loc_0031C66F;

loc_0031C508: ;
    eax = MEM32(eax + 0xC);
    eax = ZX8(MEM8(eax));
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -56) = MEM32(ebp + -56) & 0;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -16;
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -16) = ecx;
    ecx = ebp + -24;
    MEM32(ebp + -60) = ecx;
    ecx = eax + 2;
    _fb = (uint32_t)(0x13) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x13;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + -24) = 0;
    MEM8(ebp + -22) = 4;
    MEM8(ebp + -72) = 0x30;
    MEM8(ebp + -71) = 0x40;
    edi = 0x3164C9;
    MEM32(ebp + -64) = edi;
    MEM32(ebp + -48) = edx;
    MEM32(ebp + -52) = ecx;
    MEM8(ebp + -44) = 2;
    MEM8(ebp + -43) = 1;
    MEM8(ebp + -42) = 0;
    MEM8(ebp + -32) = 0xC1;
    MEM8(ebp + -31) = 1;
    MEM16(ebp + -30) = 0x200;
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ebp + -26) = LO16(eax);
    eax = ebp + -72;
    MEM16(ebp + -28) = LO16(ecx);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031C57Eu); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_0031C57E: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x0031C587u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C581u); } /* indirect call */
    }

loc_0031C587: ;
    ecx = MEM32(esi);
    eax = ebp + -24;
    PUSH32(esp, eax);
    edx = ebp + -72;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031C595u); RECOMP_ABI_CALL(0x003164DAu, sub_003164DA); /* call 0x003164DA */

loc_0031C595: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0031C597u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C595u); } /* indirect call */
    }

loc_0031C597: ;
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C668; /* je: equal / zero */

loc_0031C5A7: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031C668; /* jne: not equal / not zero */

loc_0031C5B1: ;
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -68), ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031C65B; /* jl: less (signed <) */

loc_0031C5BA: ;
    eax = MEM32(esi + 0xE);
    eax = MEM32(eax + 8);
    eax = ZX8(MEM8(eax));
    edx = ebp + -24;
    MEM32(ebp + -60) = edx;
    edx = MEM32(ebp + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -48) = edx;
    edx = eax + 2;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + -72) = 0x30;
    MEM8(ebp + -71) = 0x40;
    MEM32(ebp + -64) = edi;
    MEM32(ebp + -56) = ecx;
    MEM32(ebp + -52) = edx;
    MEM8(ebp + -44) = 2;
    MEM8(ebp + -43) = 1;
    MEM8(ebp + -42) = LO8(ecx);
    MEM8(ebp + -32) = 0xC1;
    MEM8(ebp + -31) = 1;
    MEM16(ebp + -30) = 0x100;
    SET_LO16(edx, ZX8(MEM8(esi + 5)));
    MEM16(ebp + -26) = LO16(eax);
    eax = ebp + -16;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -16) = eax;
    eax = ebp + -72;
    MEM16(ebp + -28) = LO16(edx);
    MEM8(ebp + -24) = LO8(ecx);
    MEM8(ebp + -22) = 4;
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031C62Bu); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_0031C62B: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x0031C634u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C62Eu); } /* indirect call */
    }

loc_0031C634: ;
    ecx = MEM32(esi);
    eax = ebp + -24;
    PUSH32(esp, eax);
    edx = ebp + -72;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031C642u); RECOMP_ABI_CALL(0x003164DAu, sub_003164DA); /* call 0x003164DA */

loc_0031C642: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0031C644u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C642u); } /* indirect call */
    }

loc_0031C644: ;
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C668; /* je: equal / zero */

loc_0031C64F: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031C668; /* jne: not equal / not zero */

loc_0031C655: ;
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -68), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031C66F; /* jge: greater or equal (signed >=) */

loc_0031C65B: ;
    PUSH32(esp, MEM32(ebp + -68));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031C663u); RECOMP_ABI_CALL(0x003189D6u, sub_003189D6); /* call 0x003189D6 */

loc_0031C663: ;
    MEM32(ebp + -8) = eax;
    goto loc_0031C66F;

loc_0031C668: ;
    MEM32(ebp + -8) = 0x48F;

loc_0031C66F: ;
    eax = MEM32(ebp + 0xC);
    SET_LO8(ecx, MEM8(ebp + -1));
    MEM16(eax + 1) = MEM16(eax + 1) & 0;
    _fa = (uint32_t)(MEM16(eax + 1)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x0031C680u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C67Au); } /* indirect call */
    }

loc_0031C680: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031C68A_gen
 * Original: 0x0031C68A - 0x0031C6FD (115 bytes, 41 insns)
 * Folder: xdk/xpp (section: XPP)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C68A_gen(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C68A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x0031C694u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C68Eu); } /* indirect call */
    }

loc_0031C694: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(edx + 0xA3);
    _fa = (uint32_t)(MEM8(ecx + 0x28)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x28), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C6A9; /* je: equal / zero */

loc_0031C6A4: ;
    PUSH32(esp, 0x57);
    POP32(esp, esi);
    goto loc_0031C6EE;

loc_0031C6A9: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031C6B5; /* je: equal / zero */

loc_0031C6AF: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C6BA; /* je: equal / zero */

loc_0031C6B5: ;
    ebx = 0x48F;

loc_0031C6BA: ;
    ecx = MEM32(edx + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(edi) = ecx;
    MEM8(edx + 0xA2) = MEM8(edx + 0xA2) & 0xEF;
    _fa = (uint32_t)(MEM8(edx + 0xA2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(edx + 0xA3);
    ecx = MEM32(ecx + 8);
    ecx = ZX8(MEM8(ecx));
    esi = edx + 0x14;
    edx = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    esi = ebx;
    POP32(esp, edi);

loc_0031C6EE: ;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x0031C6F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031C6F0u); } /* indirect call */
    }

loc_0031C6F6: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031C6FD_gen
 * Original: 0x0031C6FD - 0x0031C730 (51 bytes, 17 insns)
 * Folder: xdk/xpp (section: XPP)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031C6FD_gen(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031C6FD: ;
    ecx = MEM32(esp + 4);
    eax = ecx + 0xA3;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM8(edx + 0x28)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x28), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031C714; /* je: equal / zero */

loc_0031C70F: ;
    PUSH32(esp, 0x57);
    POP32(esp, eax);
    goto loc_0031C72D;

loc_0031C714: ;
    edx = MEM32(esp + 8);
    MEM8(edx + 0x40) = 0;
    eax = MEM32(eax);
    eax = MEM32(eax + 0xC);
    SET_LO8(eax, MEM8(eax));
    _fb = (uint32_t)(2) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(edx + 0x41) = LO8(eax);
    PUSH32(esp, 0x0031C72Du); RECOMP_ABI_CALL(0x003168D5u, sub_003168D5); /* call 0x003168D5 */

loc_0031C72D: ;
    esp += 12; return; /* ret 8 */

}
